/*
 * Copyright (c) 2024 The Khronos Group Inc.
 * Copyright (c) 2024 RasterGrid Kft.
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#include "vksc_device.h"
#include "vksc_physical_device.h"
#include "vksc_queue.h"
#include "vksc_command_buffer.h"
#include "vksc_instance.h"
#include "icd_proc_addr.h"

#include <string>
#include <sstream>
#include <inttypes.h>

namespace vksc {

Device::Device(VkDevice device, PhysicalDevice& physical_device, const VkDeviceCreateInfo& create_info)
    : Dispatchable(),
      vk::Device(device, physical_device.VkDispatch()),
      status_(VK_SUCCESS),
      instance_(physical_device.GetInstance()),
      physical_device_(physical_device),
      logger_(physical_device.Log(), VK_OBJECT_TYPE_DEVICE, device),
      device_queues_(),
      pipeline_cache_map_(),
      reserved_pipeline_pool_entries_map_(),
      used_pipeline_pool_entries_map_(),
      pipeline_pool_size_map_(),
      object_tracker_(*this, create_info) {
    status_ = SetupDevice(create_info);
}

VkResult Device::SetupDevice(const VkDeviceCreateInfo& create_info) {
    VkResult result = VK_SUCCESS;
    const auto* object_reservation_info = vku::FindStructInPNextChain<VkDeviceObjectReservationCreateInfo>(create_info.pNext);
    while (object_reservation_info != nullptr) {
        // Initialize pipeline cache info
        for (uint32_t i = 0; i < object_reservation_info->pipelineCacheCreateInfoCount; ++i) {
            const auto& cache_create_info = object_reservation_info->pPipelineCacheCreateInfos[i];
            if (cache_create_info.pInitialData == nullptr) {
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

    return result;
}

PFN_vkVoidFunction Device::GetDeviceProcAddr(const char* pName) { return icd::GetProcAddr(icd::ProcTypeMask::Device, pName); }

void Device::DestroyDevice(const VkAllocationCallbacks* pAllocator) { Destroy(VkDispatch().DestroyDevice, VkHandle(), pAllocator); }

void Device::GetDeviceQueue(uint32_t queueFamilyIndex, uint32_t queueIndex, VkQueue* pQueue) {
    vk::Device::GetDeviceQueue(queueFamilyIndex, queueIndex, pQueue);
    if (*pQueue != VK_NULL_HANDLE) {
        *pQueue = device_queues_.GetOrAddChild(*pQueue, *this)->VkSCHandle();
    }
}

void Device::GetDeviceQueue2(const VkDeviceQueueInfo2* pQueueInfo, VkQueue* pQueue) {
    vk::Device::GetDeviceQueue2(pQueueInfo, pQueue);
    if (*pQueue != VK_NULL_HANDLE) {
        *pQueue = device_queues_.GetOrAddChild(*pQueue, *this)->VkSCHandle();
    }
}

VkResult Device::AllocateCommandBuffers(const VkCommandBufferAllocateInfo* pAllocateInfo, VkCommandBuffer* pCommandBuffers) {
    VkResult result = vk::Device::AllocateCommandBuffers(pAllocateInfo, pCommandBuffers);
    if (result >= VK_SUCCESS) {
        for (uint32_t i = 0; i < pAllocateInfo->commandBufferCount; ++i) {
            pCommandBuffers[i] = CommandBuffer::Create(pCommandBuffers[i], *this);
        }
    }
    return result;
}

void Device::FreeCommandBuffers(VkCommandPool commandPool, uint32_t commandBufferCount, const VkCommandBuffer* pCommandBuffers) {
    std::vector<VkCommandBuffer> cmd_buffers(commandBufferCount);
    for (uint32_t i = 0; i < commandBufferCount; ++i) {
        CommandBuffer* cmd_buffer = CommandBuffer::FromHandle(pCommandBuffers[i]);
        cmd_buffers[i] = cmd_buffer->VkHandle();
        cmd_buffer->Free();
    }
    vk::Device::FreeCommandBuffers(commandPool, commandBufferCount, cmd_buffers.data());
}

VkResult Device::CreatePipelineCache(const VkPipelineCacheCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator,
                                     VkPipelineCache* pPipelineCache) {
    // We do not create Vulkan pipeline caches here, just take one of the pre-created pipeline cache containers
    auto it = pipeline_cache_map_.find(pCreateInfo->pInitialData);
    if (it != pipeline_cache_map_.end()) {
        *pPipelineCache = it->second.VkSCHandle();
        return VK_SUCCESS;
    } else {
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
        auto offline_info = vku::FindStructInPNextChain<VkPipelineOfflineCreateInfo>(pCreateInfos[i].pNext);
        VkResult cache_result = VK_SUCCESS;
        auto pipeline = GetPipelineFromCache(*pipeline_cache, offline_info, cache_result);
        if (!pipeline) {
            result = cache_result;
            continue;
        }

        if (used_pipeline_pool_entries_map_[offline_info->poolEntrySize].fetch_add(1) >=
            reserved_pipeline_pool_entries_map_[offline_info->poolEntrySize]) {
            Log().Error("VKSC-EMU-CreatePipeline-ExhaustedPoolEntrySize",
                        "Attempted to create pipeline (%s) but pool entries with poolEntrySize (%" PRIu64 ") are exhausted",
                        pipeline->ID().toString().c_str(), offline_info->poolEntrySize);
            result = VK_ERROR_OUT_OF_POOL_MEMORY;
            used_pipeline_pool_entries_map_[offline_info->poolEntrySize].fetch_sub(1);
            continue;
        }

        auto create_info = pCreateInfos[i];
        std::vector<VkPipelineShaderStageCreateInfo> stages(create_info.stageCount);
        create_info.pStages = stages.data();

        for (uint32_t stage_idx = 0; stage_idx < create_info.stageCount; ++stage_idx) {
            auto& stage = stages[stage_idx];
            stage = pCreateInfos[i].pStages[stage_idx];

            stage.module = pipeline->GetStage(stage_idx).GetShaderModule();
            stage.pName = pipeline->GetStage(stage_idx).GetEntryPoint().c_str();

            // We use already specialized SPIR-V as input from the PCC
            stage.pSpecializationInfo = nullptr;
        }

        // Set Vulkan defaults for base pipeline info
        create_info.basePipelineHandle = VK_NULL_HANDLE;
        create_info.basePipelineIndex = -1;

        VkResult vk_result = vk::Device::CreateGraphicsPipelines(VK_NULL_HANDLE, 1, &create_info, pAllocator, &pPipelines[i]);
        if (vk_result != VK_SUCCESS) {
            Log().Error("VKSC-EMU-CreatePipeline-ExhaustedPoolEntrySize",
                        "Failed to create underlying Vulkan graphics pipeline for pipeline (%s)",
                        pipeline->ID().toString().c_str());
            result = vk_result;
            used_pipeline_pool_entries_map_[offline_info->poolEntrySize].fetch_sub(1);
            continue;
        }

        if (RecyclePipelineMemory()) {
            // Need to remember the pipeline's pool entry size to recycle it upon destruction
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
        auto offline_info = vku::FindStructInPNextChain<VkPipelineOfflineCreateInfo>(pCreateInfos[i].pNext);
        VkResult cache_result = VK_SUCCESS;
        auto pipeline = GetPipelineFromCache(*pipeline_cache, offline_info, cache_result);
        if (!pipeline) {
            result = cache_result;
            continue;
        }

        if (used_pipeline_pool_entries_map_[offline_info->poolEntrySize].fetch_add(1) >=
            reserved_pipeline_pool_entries_map_[offline_info->poolEntrySize]) {
            Log().Error("VKSC-EMU-CreatePipeline-ExhaustedPoolEntrySize",
                        "Attempted to create pipeline (%s) but pool entries with poolEntrySize (%" PRIu64 ") are exhausted",
                        pipeline->ID().toString().c_str(), offline_info->poolEntrySize);
            result = VK_ERROR_OUT_OF_POOL_MEMORY;
            used_pipeline_pool_entries_map_[offline_info->poolEntrySize].fetch_sub(1);
            continue;
        }

        auto create_info = pCreateInfos[i];

        create_info.stage.module = pipeline->GetStage(0).GetShaderModule();
        create_info.stage.pName = pipeline->GetStage(0).GetEntryPoint().c_str();

        // We use already specialized SPIR-V as input from the PCC
        create_info.stage.pSpecializationInfo = nullptr;

        // Set Vulkan defaults for base pipeline info
        create_info.basePipelineHandle = VK_NULL_HANDLE;
        create_info.basePipelineIndex = -1;

        VkResult vk_result = vk::Device::CreateComputePipelines(VK_NULL_HANDLE, 1, &create_info, pAllocator, &pPipelines[i]);
        if (vk_result != VK_SUCCESS) {
            Log().Error("VKSC-EMU-CreatePipeline-ExhaustedPoolEntrySize",
                        "Failed to create underlying Vulkan compute pipeline for pipeline (%s)", pipeline->ID().toString().c_str());
            result = vk_result;
            used_pipeline_pool_entries_map_[offline_info->poolEntrySize].fetch_sub(1);
            continue;
        }

        if (RecyclePipelineMemory()) {
            // Need to remember the pipeline's pool entry size to recycle it upon destruction
            pipeline_pool_size_map_[pPipelines[i]] = offline_info->poolEntrySize;
        }
    }
    return result;
}

void Device::DestroyPipeline(VkPipeline pipeline, const VkAllocationCallbacks* pAllocator) {
    if (pipeline != VK_NULL_HANDLE && RecyclePipelineMemory()) {
        auto it = pipeline_pool_size_map_.find(pipeline);
        if (it != pipeline_pool_size_map_.end()) {
            used_pipeline_pool_entries_map_[it->second].fetch_sub(1);
        } else {
            Log().Error("VKSC-EMU-DestroyPipeline-MissingPipelinePoolEntrySize",
                        "Missing pipeline pool entry size tracking information for pipeline (%s)", pipeline);
        }
    }
    vk::Device::DestroyPipeline(pipeline, pAllocator);
}

void Device::GetCommandPoolMemoryConsumption(VkCommandPool commandPool, VkCommandBuffer commandBuffer,
                                             VkCommandPoolMemoryConsumption* pConsumption) {
    // TODO: Add implementation
}

VkResult Device::GetFaultData(VkFaultQueryBehavior faultQueryBehavior, VkBool32* pUnrecordedFaults, uint32_t* pFaultCount,
                              VkFaultData* pFaults) {
    // TODO: Add implementation
    return VK_SUCCESS;
}

VkResult Device::AllocateMemory(const VkMemoryAllocateInfo* pAllocateInfo, const VkAllocationCallbacks* pAllocator,
                                VkDeviceMemory* pMemory) {
    if (auto reservation = GetObjectTracker().ReserveDeviceMemory()) {
        VkResult result = vk::Device::AllocateMemory(pAllocateInfo, pAllocator, pMemory);
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
        VkResult result = vk::Device::CreateCommandPool(pCreateInfo, pAllocator, pCommandPool);
        if (result >= VK_SUCCESS) {
            reservation.Commit(pCommandPool);
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
        VkResult result = vk::Device::CreateDescriptorPool(pCreateInfo, pAllocator, pDescriptorPool);
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
        VkResult result = vk::Device::CreateQueryPool(pCreateInfo, pAllocator, pQueryPool);
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
        VkResult result = vk::Device::CreateSwapchainKHR(pCreateInfo, pAllocator, pSwapchain);
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
        VkResult result = vk::Device::CreateSharedSwapchainsKHR(swapchainCount, pCreateInfos, pAllocator, pSwapchains);
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
