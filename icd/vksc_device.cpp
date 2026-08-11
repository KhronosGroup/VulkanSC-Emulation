/*
 * Copyright (c) 2024-2026 The Khronos Group Inc.
 * Copyright (c) 2024-2026 RasterGrid Kft.
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#include "vksc_device.h"
#include "vksc_physical_device.h"
#include "vksc_queue.h"
#include "vksc_command_buffer.h"
#include "vksc_instance.h"
#include "vksc_global.h"
#include "icd_proc_addr.h"
#include "icd_pnext_chain_utils.h"

#include <string>
#include <sstream>
#include <initializer_list>
#include <inttypes.h>

namespace vksc {

Device::Device(VkDevice device, PhysicalDevice& physical_device, const VkDeviceCreateInfo& create_info)
    : Dispatchable(),
      // NOTE: We are passing a reference to the yet uninitialized fault handler, but this should be no
      // issue if no faults are being reported from within the parent class constructor
      NEXT(device, physical_device.VkDispatch(), fault_handler_),
      instance_(physical_device.GetInstance()),
      physical_device_(physical_device),
      logger_(physical_device.Log(), VK_OBJECT_TYPE_DEVICE, device),
      fault_handler_(physical_device.GetMaxQueryFaultCount(), vku::FindStructInPNextChain<VkFaultCallbackInfo>(create_info.pNext)),
      device_queues_(),
      object_tracker_(*this, logger_, fault_handler_, create_info) {
    status_ = SetupDevice(create_info);
}

VkResult Device::SetupDevice(const VkDeviceCreateInfo& create_info) {
    VkResult result = VK_SUCCESS;

    // Check required structures
    if (vku::FindStructInPNextChain<VkPhysicalDeviceVulkanSC10Features>(create_info.pNext) == nullptr) {
        Log().Error("VKSC-EMU-CreateDevice-MissingPhysicalDeviceVulkanSC10Features",
                    "Missing VkPhysicalDeviceVulkanSC10Features from the pNext chain of VkDeviceCreateInfo");
        return VK_ERROR_INITIALIZATION_FAILED;
    }
    const auto* object_reservation_info = vku::FindStructInPNextChain<VkDeviceObjectReservationCreateInfo>(create_info.pNext);
    if (object_reservation_info == nullptr) {
        Log().Error("VKSC-EMU-CreateDevice-MissingDeviceObjectReservationInfo",
                    "Missing VkDeviceObjectReservationCreateInfo from the pNext chain of VkDeviceCreateInfo");
        return VK_ERROR_INITIALIZATION_FAILED;
    }

    while (object_reservation_info != nullptr) {
        // Initialize pipeline cache info
        for (uint32_t i = 0; i < object_reservation_info->pipelineCacheCreateInfoCount; ++i) {
            const auto& cache_create_info = object_reservation_info->pPipelineCacheCreateInfos[i];
            if (cache_create_info.pInitialData == nullptr) {
                Log().Error("VKSC-EMU-CreateDevice-MissingPipelineCacheData",
                            "VkPipelineCacheCreateInfo with pInitialData = NULL in VkDeviceObjectReservationCreateInfo");
                return VK_ERROR_INVALID_PIPELINE_CACHE_DATA;
            }

            icd::PipelineCache pipeline_cache(*this, create_info, cache_create_info);
            if (pipeline_cache.IsValid()) {
                pipeline_cache_map_.emplace(std::make_pair(cache_create_info.pInitialData, std::move(pipeline_cache)));
            } else {
                return VK_ERROR_INVALID_PIPELINE_CACHE_DATA;
            }
        }

        // Initialize pipeline pool info
        for (uint32_t i = 0; i < object_reservation_info->pipelinePoolSizeCount; ++i) {
            const auto& pool_size = object_reservation_info->pPipelinePoolSizes[i];
            reserved_pipeline_pool_entries_map_[pool_size.poolEntrySize] += pool_size.poolEntryCount;
        }

        object_reservation_info = vku::FindStructInPNextChain<VkDeviceObjectReservationCreateInfo>(object_reservation_info->pNext);
    }

    // Initialize used pipeline pool entry map
    for (auto it : reserved_pipeline_pool_entries_map_) {
        used_pipeline_pool_entries_map_[it.first] = 0;
    }

    // Remember enabled extensions
    if (create_info.ppEnabledExtensionNames && create_info.enabledExtensionCount != 0) {
        for (uint32_t i = 0; i < create_info.enabledExtensionCount; ++i) {
            ExtensionNumber ext_num = GetExtensionNumber(create_info.ppEnabledExtensionNames[i]);
            if (physical_device_.IsDeviceExtensionSupported(ext_num)) {
                enabled_extensions_.insert(ext_num);
            } else {
                return VK_ERROR_EXTENSION_NOT_PRESENT;
            }
        }
    }

    return result;
}

PFN_vkVoidFunction Device::GetDeviceProcAddr(const char* pName) { return icd::GetDeviceProcAddr(VkSCHandle(), pName); }

void Device::DestroyDevice(const VkAllocationCallbacks* pAllocator) {
    GetPhysicalDevice().OnLogicalDeviceDestroyed();
    Destroy(VkDispatch().DestroyDevice, VkHandle(), pAllocator);
}

void Device::GetDeviceQueue(uint32_t queueFamilyIndex, uint32_t queueIndex, VkQueue* pQueue) {
    NEXT::GetDeviceQueue(queueFamilyIndex, queueIndex, pQueue);
    if (*pQueue != VK_NULL_HANDLE) {
        *pQueue = device_queues_.GetOrAddChild(*pQueue, *this)->VkSCHandle();
    }
}

void Device::GetDeviceQueue2(const VkDeviceQueueInfo2* pQueueInfo, VkQueue* pQueue) {
    NEXT::GetDeviceQueue2(pQueueInfo, pQueue);
    if (*pQueue != VK_NULL_HANDLE) {
        *pQueue = device_queues_.GetOrAddChild(*pQueue, *this)->VkSCHandle();
    }
}

VkResult Device::AllocateCommandBuffers(const VkCommandBufferAllocateInfo* pAllocateInfo, VkCommandBuffer* pCommandBuffers) {
    auto command_pool_state = command_pools_.Get(pAllocateInfo->commandPool);
    if (!command_pool_state) {
        ReportFault(VK_FAULT_LEVEL_CRITICAL, VK_FAULT_TYPE_INVALID_API_USAGE);
        Log().Error("VKSC-EMU-AllocateCommandBuffers-InvalidCommandPool",
                    "vkAllocateCommandBuffer called with an invalid command pool handle (%p)", pAllocateInfo->commandPool);
        return VK_ERROR_VALIDATION_FAILED;
    }

    auto reservation = command_pool_state->ReserveCommandBuffers(pAllocateInfo->commandBufferCount, pCommandBuffers);
    if (!reservation) {
        ReportFault(VK_FAULT_LEVEL_CRITICAL, VK_FAULT_TYPE_INVALID_API_USAGE);
        Log().Error("VKSC-EMU-AllocateCommandBuffers-OutOfCommandBuffers",
                    "Ran out of command buffers reserved for the command pool (%p)", VkHandle());
        return VK_ERROR_VALIDATION_FAILED;
    }

    VkResult result = NEXT::AllocateCommandBuffers(pAllocateInfo, pCommandBuffers);
    if (result < VK_SUCCESS) {
        return result;
    }

    for (uint32_t i = 0; i < pAllocateInfo->commandBufferCount; ++i) {
        auto command_buffer = CommandBuffer::Create(pCommandBuffers[i], *command_pool_state);
        pCommandBuffers[i] = command_buffer;
    }
    reservation.Commit(pCommandBuffers);

    return result;
}

void Device::FreeCommandBuffers(VkCommandPool commandPool, uint32_t commandBufferCount, const VkCommandBuffer* pCommandBuffers) {
    auto command_pool_state = command_pools_.Get(commandPool);
    if (!command_pool_state) {
        ReportFault(VK_FAULT_LEVEL_CRITICAL, VK_FAULT_TYPE_INVALID_API_USAGE);
        Log().Error("VKSC-EMU-FreeCommandBuffers-InvalidCommandPool",
                    "vkFreeCommandBuffers called with an invalid command pool handle (%p)", commandPool);
        return;
    }

    if (command_pool_state->FreeCommandBuffers(commandBufferCount, pCommandBuffers) < VK_SUCCESS) {
        return;
    }

    icd::ShadowStack::Frame stack_frame{};
    auto cmd_buffers = stack_frame.Alloc<VkCommandBuffer>(commandBufferCount);
    for (uint32_t i = 0; i < commandBufferCount; ++i) {
        if (pCommandBuffers[i] == nullptr) {
            cmd_buffers[i] = nullptr;
        } else {
            CommandBuffer* cmd_buffer = CommandBuffer::FromHandle(pCommandBuffers[i]);
            cmd_buffers[i] = cmd_buffer->VkHandle();
            cmd_buffer->Free();
        }
    }
    NEXT::FreeCommandBuffers(commandPool, commandBufferCount, cmd_buffers);
}

VkResult Device::CreatePipelineCache(const VkPipelineCacheCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator,
                                     VkPipelineCache* pPipelineCache) {
    auto reservation = GetObjectTracker().ReservePipelineCache();
    if (!reservation) {
        ReportFault(VK_FAULT_LEVEL_CRITICAL, VK_FAULT_TYPE_INVALID_API_USAGE);
        Log().Error("VKSC-EMU-CreatePipelineCache-OutOfReservedPipelineCacheObjects",
                    "Ran out of the reserved number of VkPipelineCache objects");
        return VK_ERROR_VALIDATION_FAILED;
    }

    // We do not create Vulkan pipeline caches here, just take one of the pre-created pipeline cache containers
    auto it = pipeline_cache_map_.find(pCreateInfo->pInitialData);
    if (it != pipeline_cache_map_.end()) {
        *pPipelineCache = it->second.VkSCHandle();
        reservation.Commit(pPipelineCache);
        return VK_SUCCESS;
    } else {
        ReportFault(VK_FAULT_LEVEL_CRITICAL, VK_FAULT_TYPE_INVALID_API_USAGE);
        Log().Error("VKSC-EMU-CreatePipelineCache-UnknownData",
                    "vkCreatePipelineCache called with an unknown pipeline cache data pointer (%p)", pCreateInfo->pInitialData);
        return VK_ERROR_INVALID_PIPELINE_CACHE_DATA;
    }
}

void Device::DestroyPipelineCache(VkPipelineCache pipelineCache, const VkAllocationCallbacks* pAllocator) {
    if (pipelineCache != VK_NULL_HANDLE) {
        GetObjectTracker().FreePipelineCache(1, &pipelineCache);
    }
    // Nothing else to do here as we do not create any dynamic objects for pipeline caches
}

const icd::Pipeline* Device::GetPipelineFromCache(const icd::PipelineCache& pipeline_cache,
                                                  const VkPipelineOfflineCreateInfo* offline_info, VkResult& out_result) {
    if (offline_info == nullptr) {
        Log().Error("VKSC-EMU-CreatePipeline-MissingOfflineInfo",
                    "Pipeline creation called with missing VkPipelineOfflineCreateInfo");
        out_result = VK_ERROR_NO_PIPELINE_MATCH;
        return nullptr;
    }

    auto pipeline = pipeline_cache.GetPipeline(utils::UUID(offline_info->pipelineIdentifier));
    if (pipeline == nullptr) {
        Log().Error("VKSC-EMU-CreatePipeline-NoMatchingPipeline", "Pipeline creation did not find matching pipeline (%s)",
                    utils::UUID(offline_info->pipelineIdentifier).toString().c_str());
        out_result = VK_ERROR_NO_PIPELINE_MATCH;
        return nullptr;
    }

    if (pipeline->GetMemorySize() > offline_info->poolEntrySize) {
        Log().Error("VKSC-EMU-CreatePipeline-InvalidPoolEntrySize",
                    "Attempted to create pipeline (%s) with memory size %" PRIu64 " but poolEntrySize (%" PRIu64 ") is too small",
                    pipeline->ID().toString().c_str(), pipeline->GetMemorySize(), offline_info->poolEntrySize);
        out_result = VK_ERROR_OUT_OF_POOL_MEMORY;
        return nullptr;
    }

    out_result = VK_SUCCESS;
    return pipeline;
}

VkResult Device::CreateGraphicsPipelines(VkPipelineCache pipelineCache, uint32_t createInfoCount,
                                         const VkGraphicsPipelineCreateInfo* pCreateInfos, const VkAllocationCallbacks* pAllocator,
                                         VkPipeline* pPipelines) {
    auto reservation = GetObjectTracker().ReserveGraphicsPipeline(createInfoCount);
    if (!reservation && createInfoCount > 0) {
        ReportFault(VK_FAULT_LEVEL_CRITICAL, VK_FAULT_TYPE_INVALID_API_USAGE);
        Log().Error("VKSC-EMU-CreateGraphicsPipelines-OutOfReservedGraphicsPipelineObjects",
                    "Ran out of the reserved number of graphics pipeline objects");
        return VK_ERROR_VALIDATION_FAILED;
    }

    VkResult result = VK_SUCCESS;
    auto pipeline_cache = icd::PipelineCache::FromHandle(pipelineCache);
    for (uint32_t i = 0; i < createInfoCount; ++i) {
        icd::ShadowStack::Frame stack_frame{};
        pPipelines[i] = VK_NULL_HANDLE;

        auto offline_info = vku::FindStructInPNextChain<VkPipelineOfflineCreateInfo>(pCreateInfos[i].pNext);
        VkResult cache_result = VK_SUCCESS;
        auto pipeline = GetPipelineFromCache(*pipeline_cache, offline_info, cache_result);
        if (!pipeline) {
            result = cache_result;
            continue;
        }

        auto pipeline_pool_entry_it = used_pipeline_pool_entries_map_.find(offline_info->poolEntrySize);
        if (pipeline_pool_entry_it == used_pipeline_pool_entries_map_.end()) {
            ReportFault(VK_FAULT_LEVEL_CRITICAL, VK_FAULT_TYPE_INVALID_API_USAGE);
            Log().Error("VKSC-EMU-CreatePipeline-ExhaustedPoolEntrySize",
                        "Attempted to create pipeline (%s) with poolEntrySize (%" PRIu64
                        ") but no such pool entry size was reserved at device creation time",
                        pipeline->ID().toString().c_str(), offline_info->poolEntrySize);
            result = VK_ERROR_OUT_OF_POOL_MEMORY;
            continue;
        }
        if (pipeline_pool_entry_it->second.fetch_add(1) >= reserved_pipeline_pool_entries_map_[offline_info->poolEntrySize]) {
            ReportFault(VK_FAULT_LEVEL_CRITICAL, VK_FAULT_TYPE_INVALID_API_USAGE);
            Log().Error("VKSC-EMU-CreatePipeline-ExhaustedPoolEntrySize",
                        "Attempted to create pipeline (%s) but pool entries with poolEntrySize (%" PRIu64 ") are exhausted",
                        pipeline->ID().toString().c_str(), offline_info->poolEntrySize);
            result = VK_ERROR_OUT_OF_POOL_MEMORY;
            pipeline_pool_entry_it->second.fetch_sub(1);
            continue;
        }

        auto vk_create_info = pCreateInfos[i];
        auto vk_stages = stack_frame.Alloc<VkPipelineShaderStageCreateInfo>(vk_create_info.stageCount);
        vk_create_info.pStages = vk_stages;

        for (uint32_t stage_idx = 0; stage_idx < vk_create_info.stageCount; ++stage_idx) {
            auto& vk_stage = vk_stages[stage_idx];
            vk_stage = pCreateInfos[i].pStages[stage_idx];

            vk_stage.module = pipeline->GetStage(stage_idx).GetShaderModule();
            vk_stage.pName = pipeline->GetStage(stage_idx).GetEntryPoint().c_str();

            // We use already specialized SPIR-V as input from the PCC
            vk_stage.pSpecializationInfo = nullptr;
        }

        // Set Vulkan defaults for base pipeline info
        vk_create_info.basePipelineHandle = VK_NULL_HANDLE;
        vk_create_info.basePipelineIndex = -1;

        // Remove VkPipelineOfflineCreateInfo from Vulkan create info pNext chain
        vk_create_info.pNext = icd::ModifiablePNextChain(stack_frame, vk_create_info)
                                   .RemoveStructFromChain<VkPipelineOfflineCreateInfo>()
                                   .GetModifiedPNext();

        VkResult vk_result = NEXT::CreateGraphicsPipelines(VK_NULL_HANDLE, 1, &vk_create_info, pAllocator, &pPipelines[i]);
        if (vk_result < VK_SUCCESS) {
            ReportFault(VK_FAULT_LEVEL_CRITICAL, VK_FAULT_TYPE_IMPLEMENTATION);
            Log().Error("VKSC-EMU-CreatePipeline-CreateGraphicsPipelinesFailed",
                        "Failed to create underlying Vulkan graphics pipeline for pipeline (%s)",
                        pipeline->ID().toString().c_str());
            result = vk_result;
            pipeline_pool_entry_it->second.fetch_sub(1);
            continue;
        }

        pipelines_.Add(pPipelines[i], VK_PIPELINE_BIND_POINT_GRAPHICS, offline_info->poolEntrySize);
    }

    reservation.Commit(pPipelines);

    return result;
}

VkResult Device::CreateComputePipelines(VkPipelineCache pipelineCache, uint32_t createInfoCount,
                                        const VkComputePipelineCreateInfo* pCreateInfos, const VkAllocationCallbacks* pAllocator,
                                        VkPipeline* pPipelines) {
    auto reservation = GetObjectTracker().ReserveComputePipeline(createInfoCount);
    if (!reservation && createInfoCount > 0) {
        ReportFault(VK_FAULT_LEVEL_CRITICAL, VK_FAULT_TYPE_INVALID_API_USAGE);
        Log().Error("VKSC-EMU-CreateComputePipelines-OutOfReservedComputePipelineObjects",
                    "Ran out of the reserved number of compute pipeline objects");
        return VK_ERROR_VALIDATION_FAILED;
    }

    VkResult result = VK_SUCCESS;
    auto pipeline_cache = icd::PipelineCache::FromHandle(pipelineCache);
    for (uint32_t i = 0; i < createInfoCount; ++i) {
        icd::ShadowStack::Frame stack_frame{};
        pPipelines[i] = VK_NULL_HANDLE;

        auto offline_info = vku::FindStructInPNextChain<VkPipelineOfflineCreateInfo>(pCreateInfos[i].pNext);
        VkResult cache_result = VK_SUCCESS;
        auto pipeline = GetPipelineFromCache(*pipeline_cache, offline_info, cache_result);
        if (!pipeline) {
            result = cache_result;
            continue;
        }

        auto pipeline_pool_entry_it = used_pipeline_pool_entries_map_.find(offline_info->poolEntrySize);
        if (pipeline_pool_entry_it == used_pipeline_pool_entries_map_.end()) {
            ReportFault(VK_FAULT_LEVEL_CRITICAL, VK_FAULT_TYPE_INVALID_API_USAGE);
            Log().Error("VKSC-EMU-CreatePipeline-ExhaustedPoolEntrySize",
                        "Attempted to create pipeline (%s) with poolEntrySize (%" PRIu64
                        ") but no such pool entry size was reserved",
                        pipeline->ID().toString().c_str(), offline_info->poolEntrySize);
            result = VK_ERROR_OUT_OF_POOL_MEMORY;
            continue;
        }
        if (pipeline_pool_entry_it->second.fetch_add(1) >= reserved_pipeline_pool_entries_map_[offline_info->poolEntrySize]) {
            ReportFault(VK_FAULT_LEVEL_CRITICAL, VK_FAULT_TYPE_INVALID_API_USAGE);
            Log().Error("VKSC-EMU-CreatePipeline-ExhaustedPoolEntrySize",
                        "Attempted to create pipeline (%s) but pool entries with poolEntrySize (%" PRIu64 ") are exhausted",
                        pipeline->ID().toString().c_str(), offline_info->poolEntrySize);
            result = VK_ERROR_OUT_OF_POOL_MEMORY;
            pipeline_pool_entry_it->second.fetch_sub(1);
            continue;
        }

        auto vk_create_info = pCreateInfos[i];

        vk_create_info.stage.module = pipeline->GetStage(0).GetShaderModule();
        vk_create_info.stage.pName = pipeline->GetStage(0).GetEntryPoint().c_str();

        // We use already specialized SPIR-V as input from the PCC
        vk_create_info.stage.pSpecializationInfo = nullptr;

        // Set Vulkan defaults for base pipeline info
        vk_create_info.basePipelineHandle = VK_NULL_HANDLE;
        vk_create_info.basePipelineIndex = -1;

        // Remove VkPipelineOfflineCreateInfo from Vulkan create info pNext chain
        vk_create_info.pNext = icd::ModifiablePNextChain(stack_frame, vk_create_info)
                                   .RemoveStructFromChain<VkPipelineOfflineCreateInfo>()
                                   .GetModifiedPNext();

        VkResult vk_result = NEXT::CreateComputePipelines(VK_NULL_HANDLE, 1, &vk_create_info, pAllocator, &pPipelines[i]);
        if (vk_result < VK_SUCCESS) {
            ReportFault(VK_FAULT_LEVEL_CRITICAL, VK_FAULT_TYPE_IMPLEMENTATION);
            Log().Error("VKSC-EMU-CreatePipeline-CreateComputePipelinesFailed",
                        "Failed to create underlying Vulkan compute pipeline for pipeline (%s)", pipeline->ID().toString().c_str());
            result = vk_result;
            pipeline_pool_entry_it->second.fetch_sub(1);
            continue;
        }

        pipelines_.Add(pPipelines[i], VK_PIPELINE_BIND_POINT_COMPUTE, offline_info->poolEntrySize);
    }

    reservation.Commit(pPipelines);

    return result;
}

void Device::DestroyPipeline(VkPipeline pipeline, const VkAllocationCallbacks* pAllocator) {
    if (pipeline != VK_NULL_HANDLE) {
        auto pipeline_state = pipelines_.Get(pipeline);
        if (!pipeline_state) {
            ReportFault(VK_FAULT_LEVEL_CRITICAL, VK_FAULT_TYPE_INVALID_API_USAGE);
            Log().Error("VKSC-EMU-DestroyPipeline-InvalidPipeline", "vkDestroyPipeline called with an invalid pipeline handle (%p)",
                        pipeline);
            return;
        }

        if (RecyclePipelineMemory()) {
            used_pipeline_pool_entries_map_[pipeline_state->GetPoolSize()].fetch_sub(1);
        }

        switch (pipeline_state->GetBindPoint()) {
            case VK_PIPELINE_BIND_POINT_GRAPHICS:
                GetObjectTracker().FreeGraphicsPipeline(1, &pipeline);
                break;

            case VK_PIPELINE_BIND_POINT_COMPUTE:
                GetObjectTracker().FreeComputePipeline(1, &pipeline);
                break;

            default:
                ReportFault(VK_FAULT_LEVEL_CRITICAL, VK_FAULT_TYPE_IMPLEMENTATION);
                Log().Error("VKSC-EMU-DestroyPipeline-UnexpectedPipelineType", "Unexpected pipeline bind point for pipeline (%p)",
                            pipeline);
                break;
        }

        pipelines_.Remove(pipeline);
    }

    NEXT::DestroyPipeline(pipeline, pAllocator);
}

void Device::GetCommandPoolMemoryConsumption(VkCommandPool commandPool, VkCommandBuffer commandBuffer,
                                             VkCommandPoolMemoryConsumption* pConsumption) {
    auto command_pool_state = command_pools_.Get(commandPool);
    if (!command_pool_state) {
        ReportFault(VK_FAULT_LEVEL_CRITICAL, VK_FAULT_TYPE_INVALID_API_USAGE);
        Log().Error("VKSC-EMU-GetCommandPoolMemoryConsumption-InvalidCommandPool",
                    "vkGetCommandPoolMemoryConsumption called with an invalid command pool handle (%p)", commandPool);
        return;
    }

    command_pool_state->GetMemoryConsumption(pConsumption);

    if (commandBuffer) {
        CommandBuffer* command_buffer = CommandBuffer::FromHandle(commandBuffer);
        pConsumption->commandBufferAllocated = command_buffer->GetAllocatedMemorySize();
    } else {
        pConsumption->commandBufferAllocated = 0;
    }
}

VkResult Device::ResetCommandPool(VkCommandPool commandPool, VkCommandPoolResetFlags flags) {
    auto command_pool_state = command_pools_.Get(commandPool);
    if (!command_pool_state) {
        ReportFault(VK_FAULT_LEVEL_CRITICAL, VK_FAULT_TYPE_INVALID_API_USAGE);
        Log().Error("VKSC-EMU-ResetCommandPool-InvalidCommandPool",
                    "vkResetCommandPool called with an invalid command pool handle (%p)", commandPool);
        return VK_ERROR_VALIDATION_FAILED;
    }

    return command_pool_state->ResetCommandPool();
}

VkResult Device::GetFaultData(VkFaultQueryBehavior faultQueryBehavior, VkBool32* pUnrecordedFaults, uint32_t* pFaultCount,
                              VkFaultData* pFaults) {
    return fault_handler_.GetFaultData(faultQueryBehavior, pUnrecordedFaults, pFaultCount, pFaults);
}

VkResult Device::AllocateMemory(const VkMemoryAllocateInfo* pAllocateInfo, const VkAllocationCallbacks* pAllocator,
                                VkDeviceMemory* pMemory) {
    auto reservation = GetObjectTracker().ReserveDeviceMemory();
    if (!reservation) {
        ReportFault(VK_FAULT_LEVEL_CRITICAL, VK_FAULT_TYPE_INVALID_API_USAGE);
        Log().Error("VKSC-EMU-AllocateMemory-OutOfReservedDeviceMemoryObjects",
                    "Ran out of the reserved number of VkDeviceMemory objects");
        return VK_ERROR_VALIDATION_FAILED;
    }

    VkResult result = NEXT::AllocateMemory(pAllocateInfo, pAllocator, pMemory);
    if (result >= VK_SUCCESS) {
        reservation.Commit(pMemory);
    }
    return result;
}

VkResult Device::CreateCommandPool(const VkCommandPoolCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator,
                                   VkCommandPool* pCommandPool) {
    auto reservation = GetObjectTracker().ReserveCommandPool();
    if (!reservation) {
        ReportFault(VK_FAULT_LEVEL_CRITICAL, VK_FAULT_TYPE_INVALID_API_USAGE);
        Log().Error("VKSC-EMU-CreateCommandPool-OutOfReservedCommandPoolObjects",
                    "Ran out of the reserved number of VkCommandPool objects");
        return VK_ERROR_VALIDATION_FAILED;
    }

    auto memory_reservation = vku::FindStructInPNextChain<VkCommandPoolMemoryReservationCreateInfo>(pCreateInfo->pNext);
    if (memory_reservation == nullptr) {
        ReportFault(VK_FAULT_LEVEL_CRITICAL, VK_FAULT_TYPE_INVALID_API_USAGE);
        Log().Error("VKSC-EMU-CreateCommandPool-MissingMemoryReservationInfo",
                    "Command pool creation called with missing VkCommandPoolMemoryReservationCreateInfo");
        return VK_ERROR_OUT_OF_HOST_MEMORY;
    }

    auto cmdbuf_reservation = GetObjectTracker().ReserveCommandBuffer(memory_reservation->commandPoolMaxCommandBuffers);
    if (!cmdbuf_reservation && memory_reservation->commandPoolMaxCommandBuffers > 0) {
        ReportFault(VK_FAULT_LEVEL_CRITICAL, VK_FAULT_TYPE_INVALID_API_USAGE);
        Log().Error("VKSC-EMU-CreateCommandPool-OutOfReservedCommandBufferObjects",
                    "Ran out of the reserved number of VkCommandBuffer objects");
        return VK_ERROR_VALIDATION_FAILED;
    }

    icd::ShadowStack::Frame stack_frame{};

    // Remove VkCommandPoolMemoryReservationCreateInfo from Vulkan create info pNext chain
    auto vk_create_info = *pCreateInfo;
    vk_create_info.pNext = icd::ModifiablePNextChain(stack_frame, vk_create_info)
                               .RemoveStructFromChain<VkCommandPoolMemoryReservationCreateInfo>()
                               .GetModifiedPNext();

    VkResult result = NEXT::CreateCommandPool(&vk_create_info, pAllocator, pCommandPool);
    if (result >= VK_SUCCESS) {
        command_pools_.Add(*pCommandPool, *this, memory_reservation->commandPoolReservedSize, cmdbuf_reservation.Count());

        cmdbuf_reservation.Commit(nullptr /* unused */);
        reservation.Commit(pCommandPool);
    }
    return result;
}

VkResult Device::CreateDescriptorPool(const VkDescriptorPoolCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator,
                                      VkDescriptorPool* pDescriptorPool) {
    auto reservation = GetObjectTracker().ReserveDescriptorPool();
    if (!reservation) {
        ReportFault(VK_FAULT_LEVEL_CRITICAL, VK_FAULT_TYPE_INVALID_API_USAGE);
        Log().Error("VKSC-EMU-CreateDescriptorPool-OutOfReservedDescriptorPoolObjects",
                    "Ran out of the reserved number of VkDescriptorPool objects");
        return VK_ERROR_VALIDATION_FAILED;
    }

    VkResult result = NEXT::CreateDescriptorPool(pCreateInfo, pAllocator, pDescriptorPool);
    if (result >= VK_SUCCESS) {
        descriptor_pools_.Add(*pDescriptorPool, *this, pCreateInfo->maxSets);

        reservation.Commit(pDescriptorPool);
    }
    return result;
}

VkResult Device::ResetDescriptorPool(VkDescriptorPool descriptorPool, VkDescriptorPoolResetFlags flags) {
    auto descriptor_pool_state = descriptor_pools_.Get(descriptorPool);
    if (!descriptor_pool_state) {
        ReportFault(VK_FAULT_LEVEL_CRITICAL, VK_FAULT_TYPE_INVALID_API_USAGE);
        Log().Error("VKSC-EMU-ResetDescriptorPool-InvalidDescriptorPool",
                    "vkResetDescriptorPool called with an invalid descriptor pool handle (%p)", descriptorPool);
        return VK_ERROR_VALIDATION_FAILED;
    }

    VkResult result = NEXT::ResetDescriptorPool(descriptorPool, flags);

    if (result >= VK_SUCCESS) {
        GetObjectTracker().FreeDescriptorSet(descriptor_pool_state->GetAllocatedSetsAndReset(), nullptr /* unused */);
    }

    return result;
}

VkResult Device::AllocateDescriptorSets(const VkDescriptorSetAllocateInfo* pAllocateInfo, VkDescriptorSet* pDescriptorSets) {
    auto descriptor_pool_state = descriptor_pools_.Get(pAllocateInfo->descriptorPool);
    if (!descriptor_pool_state) {
        ReportFault(VK_FAULT_LEVEL_CRITICAL, VK_FAULT_TYPE_INVALID_API_USAGE);
        Log().Error("VKSC-EMU-AllocateDescriptorSets-InvalidDescriptorPool",
                    "vkAllocateDescriptorSets called with an invalid descriptor pool handle (%p)", pAllocateInfo->descriptorPool);
        return VK_ERROR_VALIDATION_FAILED;
    }

    auto reservation = GetObjectTracker().ReserveDescriptorSet(pAllocateInfo->descriptorSetCount);
    if (!reservation) {
        ReportFault(VK_FAULT_LEVEL_CRITICAL, VK_FAULT_TYPE_INVALID_API_USAGE);
        Log().Error("VKSC-EMU-AllocateDescriptorSets-OutOfReservedDescriptorSetObjects",
                    "Ran out of the reserved number of VkDescriptorSet objects");
        return VK_ERROR_VALIDATION_FAILED;
    }

    VkResult result = NEXT::AllocateDescriptorSets(pAllocateInfo, pDescriptorSets);

    if (result >= VK_SUCCESS) {
        descriptor_pool_state->AllocateDescriptorSets(pAllocateInfo->descriptorSetCount);

        reservation.Commit(nullptr /* unused */);
    }

    return result;
}

VkResult Device::FreeDescriptorSets(VkDescriptorPool descriptorPool, uint32_t descriptorSetCount,
                                    const VkDescriptorSet* pDescriptorSets) {
    auto descriptor_pool_state = descriptor_pools_.Get(descriptorPool);
    if (!descriptor_pool_state) {
        ReportFault(VK_FAULT_LEVEL_CRITICAL, VK_FAULT_TYPE_INVALID_API_USAGE);
        Log().Error("VKSC-EMU-FreeDescriptorSets-UnknownDescriptorPool",
                    "vkFreeDescriptorSets called with an invalid descriptor pool handle (%p)", descriptorPool);
        return VK_ERROR_VALIDATION_FAILED;
    }

    VkResult result = NEXT::FreeDescriptorSets(descriptorPool, descriptorSetCount, pDescriptorSets);

    if (result >= VK_SUCCESS) {
        // Update reserved and allocated descriptor set counts
        uint32_t actual_free_count = 0;
        for (uint32_t i = 0; i < descriptorSetCount; ++i) {
            if (pDescriptorSets[i] != VK_NULL_HANDLE) {
                actual_free_count++;
            }
        }

        GetObjectTracker().FreeDescriptorSet(actual_free_count, nullptr /* unused */);
        descriptor_pool_state->FreeDescriptorSets(actual_free_count);
    }

    return result;
}

VkResult Device::CreateQueryPool(const VkQueryPoolCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator,
                                 VkQueryPool* pQueryPool) {
    switch (pCreateInfo->queryType) {
        case VK_QUERY_TYPE_OCCLUSION:
            if (pCreateInfo->queryCount > GetObjectTracker().MaxOcclusionQueriesPerPool()) {
                ReportFault(VK_FAULT_LEVEL_CRITICAL, VK_FAULT_TYPE_INVALID_API_USAGE);
                Log().Error("VKSC-EMU-CreateQueryPool-MaxOcclustionQueriesPerPoolExceeded",
                            "Query count (%u) exceeds the requested maxOcclusionQueriesPerPool (%u)", pCreateInfo->queryCount,
                            GetObjectTracker().MaxOcclusionQueriesPerPool());
                return VK_ERROR_VALIDATION_FAILED;
            }
            break;

        case VK_QUERY_TYPE_PIPELINE_STATISTICS:
            if (pCreateInfo->queryCount > GetObjectTracker().MaxPipelineStatisticsQueriesPerPool()) {
                ReportFault(VK_FAULT_LEVEL_CRITICAL, VK_FAULT_TYPE_INVALID_API_USAGE);
                Log().Error("VKSC-EMU-CreateQueryPool-MaxPipelineStatisticsQueriesPerPoolExceeded",
                            "Query count (%u) exceeds the requested maxPipelineStatisticsQueriesPerPool (%u)",
                            pCreateInfo->queryCount, GetObjectTracker().MaxPipelineStatisticsQueriesPerPool());
                return VK_ERROR_VALIDATION_FAILED;
            }
            break;

        case VK_QUERY_TYPE_TIMESTAMP:
            if (pCreateInfo->queryCount > GetObjectTracker().MaxTimestampQueriesPerPool()) {
                ReportFault(VK_FAULT_LEVEL_CRITICAL, VK_FAULT_TYPE_INVALID_API_USAGE);
                Log().Error("VKSC-EMU-CreateQueryPool-MaxTimestampQueriesPerPoolExceeded",
                            "Query count (%u) exceeds the requested maxTimestampQueriesPerPool (%u)", pCreateInfo->queryCount,
                            GetObjectTracker().MaxTimestampQueriesPerPool());
                return VK_ERROR_VALIDATION_FAILED;
            }
            break;

        case VK_QUERY_TYPE_PERFORMANCE_QUERY_KHR:
            if (pCreateInfo->queryCount > GetObjectTracker().MaxPerformanceQueriesPerPool()) {
                ReportFault(VK_FAULT_LEVEL_CRITICAL, VK_FAULT_TYPE_INVALID_API_USAGE);
                Log().Error("VKSC-EMU-CreateQueryPool-MaxPerformanceQueriesPerPoolExceeded",
                            "Query count (%u) exceeds the requested maxPerformanceQueriesPerPool (%u)", pCreateInfo->queryCount,
                            GetObjectTracker().MaxPerformanceQueriesPerPool());
                return VK_ERROR_VALIDATION_FAILED;
            }
            break;

        default:
            break;
    }

    auto reservation = GetObjectTracker().ReserveQueryPool();
    if (!reservation) {
        ReportFault(VK_FAULT_LEVEL_CRITICAL, VK_FAULT_TYPE_INVALID_API_USAGE);
        Log().Error("VKSC-EMU-CreateQueryPool-OutOfReservedQueryPoolObjects",
                    "Ran out of the reserved number of VkQueryPool objects");
        return VK_ERROR_VALIDATION_FAILED;
    }

    VkResult result = NEXT::CreateQueryPool(pCreateInfo, pAllocator, pQueryPool);
    if (result >= VK_SUCCESS) {
        reservation.Commit(pQueryPool);
    }
    return result;
}

VkResult Device::CreateSwapchainKHR(const VkSwapchainCreateInfoKHR* pCreateInfo, const VkAllocationCallbacks* pAllocator,
                                    VkSwapchainKHR* pSwapchain) {
    auto reservation = GetObjectTracker().ReserveSwapchainKHR();
    if (!reservation) {
        ReportFault(VK_FAULT_LEVEL_CRITICAL, VK_FAULT_TYPE_INVALID_API_USAGE);
        Log().Error("VKSC-EMU-CreateSwapchainKHR-OutOfReservedSwapchainObjects",
                    "Ran out of the reserved number of VkSwapchainKHR objects");
        return VK_ERROR_VALIDATION_FAILED;
    }

    VkResult result = NEXT::CreateSwapchainKHR(pCreateInfo, pAllocator, pSwapchain);
    if (result >= VK_SUCCESS) {
        if (!InitSwapchainImageInfo(*pSwapchain, pCreateInfo->imageExtent, pCreateInfo->imageArrayLayers)) {
            Log().Error("VKSC-EMU-CreateSwapchainKHR-SwapchainImageInitFailed",
                        "Failed to initialize tracking information for swapchain images");
            NEXT::DestroySwapchainKHR(*pSwapchain, pAllocator);
            return VK_ERROR_INITIALIZATION_FAILED;
        }

        reservation.Commit(pSwapchain);
    }
    return result;
}

VkResult Device::CreateSharedSwapchainsKHR(uint32_t swapchainCount, const VkSwapchainCreateInfoKHR* pCreateInfos,
                                           const VkAllocationCallbacks* pAllocator, VkSwapchainKHR* pSwapchains) {
    auto reservation = GetObjectTracker().ReserveSwapchainKHR(swapchainCount);
    if (!reservation) {
        ReportFault(VK_FAULT_LEVEL_CRITICAL, VK_FAULT_TYPE_INVALID_API_USAGE);
        Log().Error("VKSC-EMU-CreateSharedSwapchainsKHR-OutOfReservedSwapchainObjects",
                    "Ran out of the reserved number of VkSwapchainKHR objects");
        return VK_ERROR_VALIDATION_FAILED;
    }

    VkResult result = NEXT::CreateSharedSwapchainsKHR(swapchainCount, pCreateInfos, pAllocator, pSwapchains);
    if (result >= VK_SUCCESS) {
        for (uint32_t i = 0; i < swapchainCount; ++i) {
            if (!InitSwapchainImageInfo(pSwapchains[i], pCreateInfos[i].imageExtent, pCreateInfos[i].imageArrayLayers)) {
                Log().Error("VKSC-EMU-CreateSharedSwapchainKHR-SwapchainImageInitFailed",
                            "Failed to initialize tracking information for swapchain images");
                for (uint32_t j = 0; j < swapchainCount; ++j) {
                    NEXT::DestroySwapchainKHR(pSwapchains[j], pAllocator);
                }
                return VK_ERROR_INITIALIZATION_FAILED;
            }
        }

        reservation.Commit(pSwapchains);
    }
    return result;
}

VkResult Device::SetDebugUtilsObjectNameEXT(const VkDebugUtilsObjectNameInfoEXT* pNameInfo) {
    // NOTE: We do not currently include debug util object names in our debug messages
    if (ICD.IsInstanceExtensionSupported(vk::ExtensionNumber::EXT_debug_utils)) {
        // Forward call to the underlying Vulkan implementation if it supports it
        return NEXT::SetDebugUtilsObjectNameEXT(pNameInfo);
    }
    return VK_SUCCESS;
}

VkResult Device::SetDebugUtilsObjectTagEXT(const VkDebugUtilsObjectTagInfoEXT* pTagInfo) {
    // NOTE: We do not currently include debug util object tags in our debug messages
    if (ICD.IsInstanceExtensionSupported(vk::ExtensionNumber::EXT_debug_utils)) {
        // Forward call to the underlying Vulkan implementation if it supports it
        return NEXT::SetDebugUtilsObjectTagEXT(pTagInfo);
    }
    return VK_SUCCESS;
}

VkResult Device::CreateSemaphore(const VkSemaphoreCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator,
                                 VkSemaphore* pSemaphore) {
    auto reservation = GetObjectTracker().ReserveSemaphore();
    if (!reservation) {
        ReportFault(VK_FAULT_LEVEL_CRITICAL, VK_FAULT_TYPE_INVALID_API_USAGE);
        Log().Error("VKSC-EMU-CreateSemaphore-OutOfReservedSemaphoreObjects",
                    "Ran out of the reserved number of VkSemaphore objects");
        return VK_ERROR_VALIDATION_FAILED;
    }

    VkResult result = NEXT::CreateSemaphore(pCreateInfo, pAllocator, pSemaphore);
    if (result >= VK_SUCCESS) {
        reservation.Commit(pSemaphore);
    }
    return result;
}

void Device::DestroySemaphore(VkSemaphore semaphore, const VkAllocationCallbacks* pAllocator) {
    if (semaphore != VK_NULL_HANDLE) {
        GetObjectTracker().FreeSemaphore(1, &semaphore);
    }
    NEXT::DestroySemaphore(semaphore, pAllocator);
}

VkResult Device::CreateFence(const VkFenceCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkFence* pFence) {
    auto reservation = GetObjectTracker().ReserveFence();
    if (!reservation) {
        ReportFault(VK_FAULT_LEVEL_CRITICAL, VK_FAULT_TYPE_INVALID_API_USAGE);
        Log().Error("VKSC-EMU-CreateFence-OutOfReservedFenceObjects", "Ran out of the reserved number of VkFence objects");
        return VK_ERROR_VALIDATION_FAILED;
    }

    VkResult result = NEXT::CreateFence(pCreateInfo, pAllocator, pFence);
    if (result >= VK_SUCCESS) {
        reservation.Commit(pFence);
    }
    return result;
}

void Device::DestroyFence(VkFence fence, const VkAllocationCallbacks* pAllocator) {
    if (fence != VK_NULL_HANDLE) {
        GetObjectTracker().FreeFence(1, &fence);
    }
    NEXT::DestroyFence(fence, pAllocator);
}

VkResult Device::CreateEvent(const VkEventCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkEvent* pEvent) {
    auto reservation = GetObjectTracker().ReserveEvent();
    if (!reservation) {
        ReportFault(VK_FAULT_LEVEL_CRITICAL, VK_FAULT_TYPE_INVALID_API_USAGE);
        Log().Error("VKSC-EMU-CreateEvent-OutOfReservedEventObjects", "Ran out of the reserved number of VkEvent objects");
        return VK_ERROR_VALIDATION_FAILED;
    }

    VkResult result = NEXT::CreateEvent(pCreateInfo, pAllocator, pEvent);
    if (result >= VK_SUCCESS) {
        reservation.Commit(pEvent);
    }
    return result;
}

void Device::DestroyEvent(VkEvent event, const VkAllocationCallbacks* pAllocator) {
    if (event != VK_NULL_HANDLE) {
        GetObjectTracker().FreeEvent(1, &event);
    }
    NEXT::DestroyEvent(event, pAllocator);
}

VkResult Device::CreateBuffer(const VkBufferCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkBuffer* pBuffer) {
    auto reservation = GetObjectTracker().ReserveBuffer();
    if (!reservation) {
        ReportFault(VK_FAULT_LEVEL_CRITICAL, VK_FAULT_TYPE_INVALID_API_USAGE);
        Log().Error("VKSC-EMU-CreateBuffer-OutOfReservedBufferObjects", "Ran out of the reserved number of VkBuffer objects");
        return VK_ERROR_VALIDATION_FAILED;
    }

    VkResult result = NEXT::CreateBuffer(pCreateInfo, pAllocator, pBuffer);
    if (result >= VK_SUCCESS) {
        reservation.Commit(pBuffer);
    }
    return result;
}

void Device::DestroyBuffer(VkBuffer buffer, const VkAllocationCallbacks* pAllocator) {
    if (buffer != VK_NULL_HANDLE) {
        GetObjectTracker().FreeBuffer(1, &buffer);
    }
    NEXT::DestroyBuffer(buffer, pAllocator);
}

VkResult Device::CreateBufferView(const VkBufferViewCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator,
                                  VkBufferView* pView) {
    auto reservation = GetObjectTracker().ReserveBufferView();
    if (!reservation) {
        ReportFault(VK_FAULT_LEVEL_CRITICAL, VK_FAULT_TYPE_INVALID_API_USAGE);
        Log().Error("VKSC-EMU-CreateBufferView-OutOfReservedBufferViewObjects",
                    "Ran out of the reserved number of VkBufferView objects");
        return VK_ERROR_VALIDATION_FAILED;
    }

    VkResult result = NEXT::CreateBufferView(pCreateInfo, pAllocator, pView);
    if (result >= VK_SUCCESS) {
        reservation.Commit(pView);
    }
    return result;
}

void Device::DestroyBufferView(VkBufferView bufferView, const VkAllocationCallbacks* pAllocator) {
    if (bufferView != VK_NULL_HANDLE) {
        GetObjectTracker().FreeBufferView(1, &bufferView);
    }
    NEXT::DestroyBufferView(bufferView, pAllocator);
}

VkResult Device::CreateImage(const VkImageCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkImage* pImage) {
    auto reservation = GetObjectTracker().ReserveImage();
    if (!reservation) {
        ReportFault(VK_FAULT_LEVEL_CRITICAL, VK_FAULT_TYPE_INVALID_API_USAGE);
        Log().Error("VKSC-EMU-CreateImage-OutOfReservedImageObjects", "Ran out of the reserved number of VkImage objects");
        return VK_ERROR_VALIDATION_FAILED;
    }

    VkResult result = NEXT::CreateImage(pCreateInfo, pAllocator, pImage);
    if (result >= VK_SUCCESS) {
        reservation.Commit(pImage);

        images_.Add(*pImage, pCreateInfo->imageType, pCreateInfo->extent, pCreateInfo->mipLevels, pCreateInfo->arrayLayers);
    }
    return result;
}

void Device::DestroyImage(VkImage image, const VkAllocationCallbacks* pAllocator) {
    if (image != VK_NULL_HANDLE) {
        GetObjectTracker().FreeImage(1, &image);
        images_.Remove(image);
    }
    NEXT::DestroyImage(image, pAllocator);
}

VkResult Device::CreateImageView(const VkImageViewCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator,
                                 VkImageView* pView) {
    auto image_state = images_.Get(pCreateInfo->image);
    if (!image_state) {
        ReportFault(VK_FAULT_LEVEL_CRITICAL, VK_FAULT_TYPE_INVALID_API_USAGE);
        Log().Error("VKSC-EMU-CreateImageView-InvalidImage", "vkCreateImageView called with an invalid image handle (%p)",
                    pCreateInfo->image);
        return VK_ERROR_VALIDATION_FAILED;
    }

    const uint32_t level_count = image_state->GetImageViewLevelCount(*pCreateInfo);
    const uint32_t layer_count = image_state->GetImageViewLayerCount(*pCreateInfo);
    const bool is_layered = layer_count > 1;

    if (level_count > GetObjectTracker().MaxImageViewMipLevels()) {
        ReportFault(VK_FAULT_LEVEL_CRITICAL, VK_FAULT_TYPE_INVALID_API_USAGE);
        Log().Error("VKSC-EMU-CreateImageView-MaxImageViewMipLevelsExceeded",
                    "Level count (%u) exceeds the requested maxImageViewMipLevels (%u)", level_count,
                    GetObjectTracker().MaxImageViewMipLevels());
        return VK_ERROR_VALIDATION_FAILED;
    }

    if (is_layered && level_count > GetObjectTracker().MaxLayeredImageViewMipLevels()) {
        ReportFault(VK_FAULT_LEVEL_CRITICAL, VK_FAULT_TYPE_INVALID_API_USAGE);
        Log().Error("VKSC-EMU-CreateImageView-MaxLayeredImageViewMipLevelsExceeded",
                    "Level count (%u) exceeds the requested maxLayeredImageViewMipLevels (%u)", level_count,
                    GetObjectTracker().MaxLayeredImageViewMipLevels());
        return VK_ERROR_VALIDATION_FAILED;
    }

    if (layer_count > GetObjectTracker().MaxImageViewArrayLayers()) {
        ReportFault(VK_FAULT_LEVEL_CRITICAL, VK_FAULT_TYPE_INVALID_API_USAGE);
        Log().Error("VKSC-EMU-CreateImageView-MaxImageViewArrayLayersExceeded",
                    "Layer count (%u) exceeds the requested maxImageViewArrayLayers (%u)", layer_count,
                    GetObjectTracker().MaxImageViewArrayLayers());
        return VK_ERROR_VALIDATION_FAILED;
    }

    auto reservation = GetObjectTracker().ReserveImageView();
    if (!reservation) {
        ReportFault(VK_FAULT_LEVEL_CRITICAL, VK_FAULT_TYPE_INVALID_API_USAGE);
        Log().Error("VKSC-EMU-CreateImageView-OutOfReservedImageViewObjects",
                    "Ran out of the reserved number of VkImageView objects");
        return VK_ERROR_VALIDATION_FAILED;
    }

    auto layered_reservation = GetObjectTracker().ReserveLayeredImageView(is_layered ? 1 : 0);
    if (is_layered && !layered_reservation) {
        ReportFault(VK_FAULT_LEVEL_CRITICAL, VK_FAULT_TYPE_INVALID_API_USAGE);
        Log().Error("VKSC-EMU-CreateImageView-OutOfReservedLayeredImageViewObjects",
                    "Ran out of the reserved number of layered image view objects");
        return VK_ERROR_VALIDATION_FAILED;
    }

    VkResult result = NEXT::CreateImageView(pCreateInfo, pAllocator, pView);
    if (result >= VK_SUCCESS) {
        image_views_.Add(*pView, is_layered);

        if (is_layered) {
            layered_reservation.Commit(pView);
        }
        reservation.Commit(pView);
    }
    return result;
}

void Device::DestroyImageView(VkImageView imageView, const VkAllocationCallbacks* pAllocator) {
    if (imageView != VK_NULL_HANDLE) {
        auto image_view_state = image_views_.Get(imageView);
        if (!image_view_state) {
            ReportFault(VK_FAULT_LEVEL_CRITICAL, VK_FAULT_TYPE_INVALID_API_USAGE);
            Log().Error("VKSC-EMU-DestroyImageView-InvalidImageView",
                        "vkDestroyImageView called with an invalid image view handle (%p)", imageView);
            return;
        }

        if (image_view_state->IsLayered()) {
            GetObjectTracker().FreeLayeredImageView(1, &imageView);
        }
        GetObjectTracker().FreeImageView(1, &imageView);

        image_views_.Remove(imageView);
    }
    NEXT::DestroyImageView(imageView, pAllocator);
}

VkResult Device::CreateSampler(const VkSamplerCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator,
                               VkSampler* pSampler) {
    auto reservation = GetObjectTracker().ReserveSampler();
    if (!reservation) {
        ReportFault(VK_FAULT_LEVEL_CRITICAL, VK_FAULT_TYPE_INVALID_API_USAGE);
        Log().Error("VKSC-EMU-CreateSampler-OutOfReservedSamplerObjects", "Ran out of the reserved number of VkSampler objects");
        return VK_ERROR_VALIDATION_FAILED;
    }

    VkResult result = NEXT::CreateSampler(pCreateInfo, pAllocator, pSampler);
    if (result >= VK_SUCCESS) {
        reservation.Commit(pSampler);
    }
    return result;
}

void Device::DestroySampler(VkSampler sampler, const VkAllocationCallbacks* pAllocator) {
    if (sampler != VK_NULL_HANDLE) {
        GetObjectTracker().FreeSampler(1, &sampler);
    }
    NEXT::DestroySampler(sampler, pAllocator);
}

VkResult Device::CreateSamplerYcbcrConversion(const VkSamplerYcbcrConversionCreateInfo* pCreateInfo,
                                              const VkAllocationCallbacks* pAllocator, VkSamplerYcbcrConversion* pYcbcrConversion) {
    auto reservation = GetObjectTracker().ReserveSamplerYcbcrConversion();
    if (!reservation) {
        ReportFault(VK_FAULT_LEVEL_CRITICAL, VK_FAULT_TYPE_INVALID_API_USAGE);
        Log().Error("VKSC-EMU-CreateSamplerYcbcrConversion-OutOfReservedSamplerYcbcrConversionObjects",
                    "Ran out of the reserved number of VkSamplerYcbcrConversion objects");
        return VK_ERROR_VALIDATION_FAILED;
    }

    VkResult result = NEXT::CreateSamplerYcbcrConversion(pCreateInfo, pAllocator, pYcbcrConversion);
    if (result >= VK_SUCCESS) {
        reservation.Commit(pYcbcrConversion);
    }
    return result;
}

void Device::DestroySamplerYcbcrConversion(VkSamplerYcbcrConversion ycbcrConversion, const VkAllocationCallbacks* pAllocator) {
    if (ycbcrConversion != VK_NULL_HANDLE) {
        GetObjectTracker().FreeSamplerYcbcrConversion(1, &ycbcrConversion);
    }
    NEXT::DestroySamplerYcbcrConversion(ycbcrConversion, pAllocator);
}

VkResult Device::CreateDescriptorSetLayout(const VkDescriptorSetLayoutCreateInfo* pCreateInfo,
                                           const VkAllocationCallbacks* pAllocator, VkDescriptorSetLayout* pSetLayout) {
    uint32_t requested_immutable_samplers = 0;
    for (uint32_t i = 0; i < pCreateInfo->bindingCount; ++i) {
        const auto& binding = pCreateInfo->pBindings[i];

        if (binding.binding >= GetObjectTracker().DescriptorSetLayoutBindingLimit()) {
            ReportFault(VK_FAULT_LEVEL_CRITICAL, VK_FAULT_TYPE_INVALID_API_USAGE);
            Log().Error("VKSC-EMU-CreateDescriptorSetLayout-DescriptorSetLayoutBindingLimitExceeded",
                        "Binding (%u) for index #%u exceeds the requested descriptorSetLayoutBindingLimit (%u)", binding.binding, i,
                        GetObjectTracker().DescriptorSetLayoutBindingLimit());
            return VK_ERROR_VALIDATION_FAILED;
        }

        if ((binding.descriptorType == VK_DESCRIPTOR_TYPE_SAMPLER ||
             binding.descriptorType == VK_DESCRIPTOR_TYPE_COMBINED_IMAGE_SAMPLER) &&
            binding.pImmutableSamplers != nullptr) {
            requested_immutable_samplers += binding.descriptorCount;
        }
    }
    if (requested_immutable_samplers > GetObjectTracker().MaxImmutableSamplersPerDescriptorSetLayout()) {
        ReportFault(VK_FAULT_LEVEL_CRITICAL, VK_FAULT_TYPE_INVALID_API_USAGE);
        Log().Error("VKSC-EMU-CreateDescriptorSetLayout-MaxImmutableSamplersPerDescriptorSetLayoutExceeded",
                    "The number of immutable samplers (%u) exceeds the requested maxImmutableSamplersPerDescriptorSetLayout (%u)",
                    requested_immutable_samplers, GetObjectTracker().MaxImmutableSamplersPerDescriptorSetLayout());
        return VK_ERROR_VALIDATION_FAILED;
    }

    auto reservation = GetObjectTracker().ReserveDescriptorSetLayout();
    if (!reservation) {
        ReportFault(VK_FAULT_LEVEL_CRITICAL, VK_FAULT_TYPE_INVALID_API_USAGE);
        Log().Error("VKSC-EMU-CreateDescriptorSetLayout-OutOfReservedDescriptorSetLayoutObjects",
                    "Ran out of the reserved number of VkDescriptorSetLayout objects");
        return VK_ERROR_VALIDATION_FAILED;
    }

    auto binding_reservation = GetObjectTracker().ReserveDescriptorSetLayoutBinding(pCreateInfo->bindingCount);
    if (!binding_reservation && pCreateInfo->bindingCount > 0) {
        ReportFault(VK_FAULT_LEVEL_CRITICAL, VK_FAULT_TYPE_INVALID_API_USAGE);
        Log().Error("VKSC-EMU-CreateDescriptorSetLayout-OutOfReservedDescriptorSetLayoutBindings",
                    "Ran out of the reserved number of descriptor set layout bindings");
        return VK_ERROR_VALIDATION_FAILED;
    }

    VkResult result = NEXT::CreateDescriptorSetLayout(pCreateInfo, pAllocator, pSetLayout);
    if (result >= VK_SUCCESS) {
        descriptor_set_layouts_.Add(*pSetLayout, binding_reservation.Count());

        binding_reservation.Commit(nullptr /* unused */);
        reservation.Commit(pSetLayout);
    }
    return result;
}

void Device::DestroyDescriptorSetLayout(VkDescriptorSetLayout descriptorSetLayout, const VkAllocationCallbacks* pAllocator) {
    if (descriptorSetLayout != VK_NULL_HANDLE) {
        auto descriptor_set_layout_state = descriptor_set_layouts_.Get(descriptorSetLayout);
        if (!descriptor_set_layout_state) {
            ReportFault(VK_FAULT_LEVEL_CRITICAL, VK_FAULT_TYPE_INVALID_API_USAGE);
            Log().Error("VKSC-EMU-DestroyDescriptorSetLayout-InvalidDescriptorSetLayout",
                        "vkDestroyDescriptorSetLayout called with an invalid descriptor set layout handle (%p)",
                        descriptorSetLayout);
            return;
        }

        GetObjectTracker().FreeDescriptorSetLayoutBinding(descriptor_set_layout_state->GetBindingCount(), nullptr /* unused */);
        GetObjectTracker().FreeDescriptorSetLayout(1, &descriptorSetLayout);

        descriptor_set_layouts_.Remove(descriptorSetLayout);
    }

    NEXT::DestroyDescriptorSetLayout(descriptorSetLayout, pAllocator);
}

VkResult Device::CreatePipelineLayout(const VkPipelineLayoutCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator,
                                      VkPipelineLayout* pPipelineLayout) {
    auto reservation = GetObjectTracker().ReservePipelineLayout();
    if (!reservation) {
        ReportFault(VK_FAULT_LEVEL_CRITICAL, VK_FAULT_TYPE_INVALID_API_USAGE);
        Log().Error("VKSC-EMU-CreatePipelineLayout-OutOfReservedPipelineLayoutObjects",
                    "Ran out of the reserved number of VkPipelineLayout objects");
        return VK_ERROR_VALIDATION_FAILED;
    }

    VkResult result = NEXT::CreatePipelineLayout(pCreateInfo, pAllocator, pPipelineLayout);
    if (result >= VK_SUCCESS) {
        reservation.Commit(pPipelineLayout);
    }
    return result;
}

void Device::DestroyPipelineLayout(VkPipelineLayout pipelineLayout, const VkAllocationCallbacks* pAllocator) {
    if (pipelineLayout != VK_NULL_HANDLE) {
        GetObjectTracker().FreePipelineLayout(1, &pipelineLayout);
    }
    NEXT::DestroyPipelineLayout(pipelineLayout, pAllocator);
}

VkResult Device::CreateRenderPass(const VkRenderPassCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator,
                                  VkRenderPass* pRenderPass) {
    auto reservation = GetObjectTracker().ReserveRenderPass();
    if (!reservation) {
        ReportFault(VK_FAULT_LEVEL_CRITICAL, VK_FAULT_TYPE_INVALID_API_USAGE);
        Log().Error("VKSC-EMU-CreateRenderPass-OutOfReservedRenderPassObjects",
                    "Ran out of the reserved number of VkRenderPass objects");
        return VK_ERROR_VALIDATION_FAILED;
    }

    auto subpass_desc_reservation = GetObjectTracker().ReserveSubpassDescription(pCreateInfo->subpassCount);
    if (!subpass_desc_reservation && pCreateInfo->subpassCount > 0) {
        ReportFault(VK_FAULT_LEVEL_CRITICAL, VK_FAULT_TYPE_INVALID_API_USAGE);
        Log().Error("VKSC-EMU-CreateRenderPass-OutOfReservedSubpassDescriptions",
                    "Ran out of the reserved number of subpass descriptions");
        return VK_ERROR_VALIDATION_FAILED;
    }

    auto attachment_desc_reservation = GetObjectTracker().ReserveAttachmentDescription(pCreateInfo->attachmentCount);
    if (!attachment_desc_reservation && pCreateInfo->attachmentCount > 0) {
        ReportFault(VK_FAULT_LEVEL_CRITICAL, VK_FAULT_TYPE_INVALID_API_USAGE);
        Log().Error("VKSC-EMU-CreateRenderPass-OutOfReservedAttachmentDescriptions",
                    "Ran out of the reserved number of attachment descriptions");
        return VK_ERROR_VALIDATION_FAILED;
    }

    VkResult result = NEXT::CreateRenderPass(pCreateInfo, pAllocator, pRenderPass);

    if (result >= VK_SUCCESS) {
        render_passes_.Add(*pRenderPass, subpass_desc_reservation.Count(), attachment_desc_reservation.Count());

        subpass_desc_reservation.Commit(nullptr /* unused */);
        attachment_desc_reservation.Commit(nullptr /* unused */);
        reservation.Commit(pRenderPass);
    }

    return result;
}

VkResult Device::CreateRenderPass2(const VkRenderPassCreateInfo2* pCreateInfo, const VkAllocationCallbacks* pAllocator,
                                   VkRenderPass* pRenderPass) {
    auto reservation = GetObjectTracker().ReserveRenderPass();
    if (!reservation) {
        ReportFault(VK_FAULT_LEVEL_CRITICAL, VK_FAULT_TYPE_INVALID_API_USAGE);
        Log().Error("VKSC-EMU-CreateRenderPass2-OutOfReservedRenderPassObjects",
                    "Ran out of the reserved number of VkRenderPass objects");
        return VK_ERROR_VALIDATION_FAILED;
    }

    auto subpass_desc_reservation = GetObjectTracker().ReserveSubpassDescription(pCreateInfo->subpassCount);
    if (!subpass_desc_reservation && pCreateInfo->subpassCount > 0) {
        ReportFault(VK_FAULT_LEVEL_CRITICAL, VK_FAULT_TYPE_INVALID_API_USAGE);
        Log().Error("VKSC-EMU-CreateRenderPass2-OutOfReservedSubpassDescriptions",
                    "Ran out of the reserved number of subpass descriptions");
        return VK_ERROR_VALIDATION_FAILED;
    }

    auto attachment_desc_reservation = GetObjectTracker().ReserveAttachmentDescription(pCreateInfo->attachmentCount);
    if (!attachment_desc_reservation && pCreateInfo->attachmentCount > 0) {
        ReportFault(VK_FAULT_LEVEL_CRITICAL, VK_FAULT_TYPE_INVALID_API_USAGE);
        Log().Error("VKSC-EMU-CreateRenderPass2-OutOfReservedAttachmentDescriptions",
                    "Ran out of the reserved number of attachment descriptions");
        return VK_ERROR_VALIDATION_FAILED;
    }

    VkResult result = NEXT::CreateRenderPass2(pCreateInfo, pAllocator, pRenderPass);

    if (result >= VK_SUCCESS) {
        render_passes_.Add(*pRenderPass, pCreateInfo->subpassCount, pCreateInfo->attachmentCount);

        subpass_desc_reservation.Commit(nullptr /* unused */);
        attachment_desc_reservation.Commit(nullptr /* unused */);
        reservation.Commit(pRenderPass);
    }

    return result;
}

void Device::DestroyRenderPass(VkRenderPass renderPass, const VkAllocationCallbacks* pAllocator) {
    if (renderPass != VK_NULL_HANDLE) {
        auto render_pass_state = render_passes_.Get(renderPass);
        if (!render_pass_state) {
            ReportFault(VK_FAULT_LEVEL_CRITICAL, VK_FAULT_TYPE_INVALID_API_USAGE);
            Log().Error("VKSC-EMU-DestroyRenderPass-InvalidRenderPass",
                        "vkDestroyRenderPass called with an invalid descriptor pool handle (%p)", renderPass);
            return;
        }

        GetObjectTracker().FreeSubpassDescription(render_pass_state->GetSubpassDescriptionCount(), nullptr /* unused */);
        GetObjectTracker().FreeAttachmentDescription(render_pass_state->GetAttachmentDescriptionCount(), nullptr /* unused */);
        GetObjectTracker().FreeRenderPass(1, &renderPass);

        render_passes_.Remove(renderPass);
    }

    NEXT::DestroyRenderPass(renderPass, pAllocator);
}

VkResult Device::CreateFramebuffer(const VkFramebufferCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator,
                                   VkFramebuffer* pFramebuffer) {
    auto reservation = GetObjectTracker().ReserveFramebuffer();
    if (!reservation) {
        ReportFault(VK_FAULT_LEVEL_CRITICAL, VK_FAULT_TYPE_INVALID_API_USAGE);
        Log().Error("VKSC-EMU-CreateFramebuffer-OutOfReservedFramebufferObjects",
                    "Ran out of the reserved number of VkFramebuffer objects");
        return VK_ERROR_VALIDATION_FAILED;
    }

    VkResult result = NEXT::CreateFramebuffer(pCreateInfo, pAllocator, pFramebuffer);
    if (result >= VK_SUCCESS) {
        reservation.Commit(pFramebuffer);
    }
    return result;
}

void Device::DestroyFramebuffer(VkFramebuffer framebuffer, const VkAllocationCallbacks* pAllocator) {
    if (framebuffer != VK_NULL_HANDLE) {
        GetObjectTracker().FreeFramebuffer(1, &framebuffer);
    }
    NEXT::DestroyFramebuffer(framebuffer, pAllocator);
}

bool Device::InitSwapchainImageInfo(VkSwapchainKHR swapchain, VkExtent2D extent, uint32_t array_layers) {
    uint32_t image_count = 0;
    VkResult result = NEXT::GetSwapchainImagesKHR(swapchain, &image_count, nullptr);
    if (result < VK_SUCCESS) {
        return false;
    }

    icd::ShadowStack::Frame stack_frame{};
    auto images = stack_frame.Alloc<VkImage>(image_count);
    result = NEXT::GetSwapchainImagesKHR(swapchain, &image_count, images);
    if (result < VK_SUCCESS) {
        return false;
    }

    for (uint32_t i = 0; i < image_count; ++i) {
        images_.Add(images[i], VK_IMAGE_TYPE_2D, VkExtent3D{extent.width, extent.height, 1}, 1, array_layers);
    }
    return true;
}

}  // namespace vksc
