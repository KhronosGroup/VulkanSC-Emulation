/*
 * Copyright (c) 2024-2025 The Khronos Group Inc.
 * Copyright (c) 2024-2025 RasterGrid Kft.
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#include "vksc_device.h"
#include "vksc_physical_device.h"
#include "vksc_queue.h"
#include "vksc_command_buffer.h"
#include "vksc_instance.h"
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
      object_tracker_(*this, create_info) {
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

        command_pools_.reserve(object_reservation_info->commandPoolRequestCount);

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

void Device::DestroyDevice(const VkAllocationCallbacks* pAllocator) { Destroy(VkDispatch().DestroyDevice, VkHandle(), pAllocator); }

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
    const std::lock_guard<std::mutex> lock{command_pool_mutex_};

    auto command_pool = command_pools_.find(pAllocateInfo->commandPool);
    if (command_pool == command_pools_.end()) {
        ReportFault(VK_FAULT_LEVEL_CRITICAL, VK_FAULT_TYPE_INVALID_API_USAGE);
        Log().Error("VKSC-EMU-AllocateCommandBuffers-UnknownCommandPool",
                    "vkAllocateCommandBuffer called with a VkCommandBufferAllocateInfo holding an unknown commandPool pointer (%p)",
                    pAllocateInfo->commandPool);
        return VK_ERROR_UNKNOWN;
    }

    auto reservation = command_pool->second->ReserveCommandBuffers(pAllocateInfo->commandBufferCount, pCommandBuffers);
    if (!reservation) {
        ReportFault(VK_FAULT_LEVEL_CRITICAL, VK_FAULT_TYPE_INVALID_API_USAGE);
        Log().Error("VKSC-EMU-AllocateCommandBuffers-OutOfCommandBuffers",
                    "Ran out of command buffers reserved for the command pool (%p)", VkHandle());
        return VK_ERROR_OUT_OF_HOST_MEMORY;
    }

    VkResult result = NEXT::AllocateCommandBuffers(pAllocateInfo, pCommandBuffers);
    if (result < VK_SUCCESS) {
        return result;
    }

    for (uint32_t i = 0; i < pAllocateInfo->commandBufferCount; ++i) {
        auto command_buffer = CommandBuffer::Create(pCommandBuffers[i], *command_pool->second.get());
        pCommandBuffers[i] = command_buffer;
    }
    reservation.Commit(pCommandBuffers);

    return result;
}

void Device::FreeCommandBuffers(VkCommandPool commandPool, uint32_t commandBufferCount, const VkCommandBuffer* pCommandBuffers) {
    const std::lock_guard<std::mutex> lock{command_pool_mutex_};

    auto command_pool = command_pools_.find(commandPool);
    if (command_pool == command_pools_.end()) {
        ReportFault(VK_FAULT_LEVEL_CRITICAL, VK_FAULT_TYPE_INVALID_API_USAGE);
        Log().Error("VKSC-EMU-FreeCommandBuffers-UnknownCommandPool",
                    "vkFreeCommandBuffers called with an unknown commandPool pointer (%p)", commandPool);
        return;
    }

    if (command_pool->second->FreeCommandBuffers(commandBufferCount, pCommandBuffers) != VK_SUCCESS) {
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
    // We do not create Vulkan pipeline caches here, just take one of the pre-created pipeline cache containers
    auto it = pipeline_cache_map_.find(pCreateInfo->pInitialData);
    if (it != pipeline_cache_map_.end()) {
        *pPipelineCache = it->second.VkSCHandle();
        return VK_SUCCESS;
    } else {
        ReportFault(VK_FAULT_LEVEL_CRITICAL, VK_FAULT_TYPE_INVALID_API_USAGE);
        Log().Error("VKSC-EMU-CreatePipelineCache-UnknownData",
                    "vkCreatePipelineCache called with an unknown pipeline cache data pointer (%p)", pCreateInfo->pInitialData);
        return VK_ERROR_INVALID_PIPELINE_CACHE_DATA;
    }
}

void Device::DestroyPipelineCache(VkPipelineCache pipelineCache, const VkAllocationCallbacks* pAllocator) {
    // Nothing to do here as we do not create any dynamic objects for pipeline caches
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
        ReportFault(VK_FAULT_LEVEL_CRITICAL, VK_FAULT_TYPE_INVALID_API_USAGE);
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
        if (vk_result != VK_SUCCESS) {
            ReportFault(VK_FAULT_LEVEL_CRITICAL, VK_FAULT_TYPE_IMPLEMENTATION);
            Log().Error("VKSC-EMU-CreatePipeline-CreateGraphicsPipelinesFailed",
                        "Failed to create underlying Vulkan graphics pipeline for pipeline (%s)",
                        pipeline->ID().toString().c_str());
            result = vk_result;
            pipeline_pool_entry_it->second.fetch_sub(1);
            continue;
        }

        if (RecyclePipelineMemory()) {
            // Need to remember the pipeline's pool entry size to recycle it upon destruction
            std::unique_lock pipeline_pool_size_map_lock(pipeline_pool_size_map_mutex_);
            pipeline_pool_size_map_[pPipelines[i]] = offline_info->poolEntrySize;
        }
    }
    return result;
}

VkResult Device::CreateComputePipelines(VkPipelineCache pipelineCache, uint32_t createInfoCount,
                                        const VkComputePipelineCreateInfo* pCreateInfos, const VkAllocationCallbacks* pAllocator,
                                        VkPipeline* pPipelines) {
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
        if (vk_result != VK_SUCCESS) {
            ReportFault(VK_FAULT_LEVEL_CRITICAL, VK_FAULT_TYPE_IMPLEMENTATION);
            Log().Error("VKSC-EMU-CreatePipeline-CreateComputePipelinesFailed",
                        "Failed to create underlying Vulkan compute pipeline for pipeline (%s)", pipeline->ID().toString().c_str());
            result = vk_result;
            pipeline_pool_entry_it->second.fetch_sub(1);
            continue;
        }

        if (RecyclePipelineMemory()) {
            // Need to remember the pipeline's pool entry size to recycle it upon destruction
            std::unique_lock pipeline_pool_size_map_lock(pipeline_pool_size_map_mutex_);
            pipeline_pool_size_map_[pPipelines[i]] = offline_info->poolEntrySize;
        }
    }
    return result;
}

void Device::DestroyPipeline(VkPipeline pipeline, const VkAllocationCallbacks* pAllocator) {
    if (pipeline != VK_NULL_HANDLE && RecyclePipelineMemory()) {
        std::unique_lock pipeline_pool_size_map_lock(pipeline_pool_size_map_mutex_);
        auto it = pipeline_pool_size_map_.find(pipeline);
        if (it != pipeline_pool_size_map_.end()) {
            used_pipeline_pool_entries_map_[it->second].fetch_sub(1);
            pipeline_pool_size_map_.erase(it);
        } else {
            ReportFault(VK_FAULT_LEVEL_CRITICAL, VK_FAULT_TYPE_INVALID_API_USAGE);
            Log().Error("VKSC-EMU-DestroyPipeline-MissingPipelinePoolEntrySize",
                        "Missing pipeline pool entry size tracking information for pipeline (%p)", pipeline);
        }
    }
    NEXT::DestroyPipeline(pipeline, pAllocator);
}

void Device::GetCommandPoolMemoryConsumption(VkCommandPool commandPool, VkCommandBuffer commandBuffer,
                                             VkCommandPoolMemoryConsumption* pConsumption) {
    const std::lock_guard<std::mutex> lock{command_pool_mutex_};

    auto command_pool = command_pools_.find(commandPool);
    if (command_pool == command_pools_.end()) {
        ReportFault(VK_FAULT_LEVEL_CRITICAL, VK_FAULT_TYPE_INVALID_API_USAGE);
        Log().Error("VKSC-EMU-GetCommandPoolMemoryConsumption-UnknownCommandPool",
                    "vkGetCommandPoolMemoryConsumption called with an unknown commandPool pointer (%p)", commandPool);
        return;
    }

    pConsumption->commandPoolReservedSize = command_pool->second.get()->GetReservedMemorySize();
    pConsumption->commandPoolAllocated = command_pool->second.get()->GetAllocatedMemorySize();

    if (commandBuffer) {
        CommandBuffer* command_buffer = CommandBuffer::FromHandle(commandBuffer);
        pConsumption->commandBufferAllocated = command_buffer->GetAllocatedMemorySize();
    } else {
        pConsumption->commandBufferAllocated = 0;
    }
}

VkResult Device::ResetCommandPool(VkCommandPool commandPool, VkCommandPoolResetFlags flags) {
    const std::lock_guard<std::mutex> lock{command_pool_mutex_};

    auto command_pool = command_pools_.find(commandPool);
    if (command_pool == command_pools_.end()) {
        ReportFault(VK_FAULT_LEVEL_CRITICAL, VK_FAULT_TYPE_INVALID_API_USAGE);
        Log().Error("VKSC-EMU-ResetCommandPool-UnknownCommandPool",
                    "vkResetCommandPool called with an unknown commandPool pointer (%p)", commandPool);
        return VK_ERROR_OUT_OF_DEVICE_MEMORY;
    }

    return command_pool->second->ResetCommandPool();
}

VkResult Device::GetFaultData(VkFaultQueryBehavior faultQueryBehavior, VkBool32* pUnrecordedFaults, uint32_t* pFaultCount,
                              VkFaultData* pFaults) {
    return fault_handler_.GetFaultData(faultQueryBehavior, pUnrecordedFaults, pFaultCount, pFaults);
}

VkResult Device::AllocateMemory(const VkMemoryAllocateInfo* pAllocateInfo, const VkAllocationCallbacks* pAllocator,
                                VkDeviceMemory* pMemory) {
    if (auto reservation = GetObjectTracker().ReserveDeviceMemory()) {
        VkResult result = NEXT::AllocateMemory(pAllocateInfo, pAllocator, pMemory);
        if (result >= VK_SUCCESS) {
            reservation.Commit(pMemory);
        }
        return result;
    } else {
        // We ran out of requested device memory objects
        return VK_ERROR_OUT_OF_HOST_MEMORY;
    }
}

VkResult Device::CreateCommandPool(const VkCommandPoolCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator,
                                   VkCommandPool* pCommandPool) {
    if (auto reservation = GetObjectTracker().ReserveCommandPool()) {
        icd::ShadowStack::Frame stack_frame{};

        auto memory_reservation = vku::FindStructInPNextChain<VkCommandPoolMemoryReservationCreateInfo>(pCreateInfo->pNext);
        if (memory_reservation == nullptr) {
            ReportFault(VK_FAULT_LEVEL_CRITICAL, VK_FAULT_TYPE_INVALID_API_USAGE);
            Log().Error("VKSC-EMU-CreateCommandPool-MissingMemoryReservationInfo",
                        "Command pool creation called with missing VkCommandPoolMemoryReservationCreateInfo");
            return VK_ERROR_OUT_OF_HOST_MEMORY;
        }

        // Remove VkCommandPoolMemoryReservationCreateInfo from Vulkan create info pNext chain
        auto vk_create_info = *pCreateInfo;
        vk_create_info.pNext = icd::ModifiablePNextChain(stack_frame, vk_create_info)
                                   .RemoveStructFromChain<VkCommandPoolMemoryReservationCreateInfo>()
                                   .GetModifiedPNext();

        const std::lock_guard<std::mutex> lock{command_pool_mutex_};

        VkResult result = NEXT::CreateCommandPool(&vk_create_info, pAllocator, pCommandPool);
        if (result >= VK_SUCCESS) {
            reservation.Commit(pCommandPool);
            command_pools_.emplace(*pCommandPool,
                                   std::make_unique<CommandPool>(*pCommandPool, *this, memory_reservation->commandPoolReservedSize,
                                                                 memory_reservation->commandPoolMaxCommandBuffers));
        }
        return result;
    } else {
        // We ran out of requested command pool objects
        return VK_ERROR_OUT_OF_HOST_MEMORY;
    }
}

VkResult Device::CreateDescriptorPool(const VkDescriptorPoolCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator,
                                      VkDescriptorPool* pDescriptorPool) {
    if (auto reservation = GetObjectTracker().ReserveDescriptorPool()) {
        VkResult result = NEXT::CreateDescriptorPool(pCreateInfo, pAllocator, pDescriptorPool);
        if (result >= VK_SUCCESS) {
            reservation.Commit(pDescriptorPool);
        }
        return result;
    } else {
        // We ran out of requested descriptor pool objects
        return VK_ERROR_OUT_OF_HOST_MEMORY;
    }
}

VkResult Device::CreateQueryPool(const VkQueryPoolCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator,
                                 VkQueryPool* pQueryPool) {
    if (auto reservation = GetObjectTracker().ReserveQueryPool()) {
        VkResult result = NEXT::CreateQueryPool(pCreateInfo, pAllocator, pQueryPool);
        if (result >= VK_SUCCESS) {
            reservation.Commit(pQueryPool);
        }
        return result;
    } else {
        // We ran out of requested query pool objects
        return VK_ERROR_OUT_OF_HOST_MEMORY;
    }
}

VkResult Device::CreateSwapchainKHR(const VkSwapchainCreateInfoKHR* pCreateInfo, const VkAllocationCallbacks* pAllocator,
                                    VkSwapchainKHR* pSwapchain) {
    if (auto reservation = GetObjectTracker().ReserveSwapchainKHR()) {
        VkResult result = NEXT::CreateSwapchainKHR(pCreateInfo, pAllocator, pSwapchain);
        if (result >= VK_SUCCESS) {
            reservation.Commit(pSwapchain);
        }
        return result;
    } else {
        // We ran out of requested query pool objects
        return VK_ERROR_OUT_OF_HOST_MEMORY;
    }
}

VkResult Device::CreateSharedSwapchainsKHR(uint32_t swapchainCount, const VkSwapchainCreateInfoKHR* pCreateInfos,
                                           const VkAllocationCallbacks* pAllocator, VkSwapchainKHR* pSwapchains) {
    if (auto reservation = GetObjectTracker().ReserveSwapchainKHR(swapchainCount)) {
        VkResult result = NEXT::CreateSharedSwapchainsKHR(swapchainCount, pCreateInfos, pAllocator, pSwapchains);
        if (result >= VK_SUCCESS) {
            reservation.Commit(pSwapchains);
        }
        return result;
    } else {
        // We ran out of requested query pool objects
        return VK_ERROR_OUT_OF_HOST_MEMORY;
    }
}

}  // namespace vksc
