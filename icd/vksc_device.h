/*
 * Copyright (c) 2024 The Khronos Group Inc.
 * Copyright (c) 2024 RasterGrid Kft.
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#pragma once

#include "vksc_command_pool.h"
#include "vksc_dispatchable.h"
#include "vksc_physical_device.h"
#include "vksc_extension_helper.h"
#include "icd_fault_handler.h"
#include "vk_device.h"
#include "icd_log.h"
#include "icd_shadow_stack.h"
#include "icd_pipeline_cache_data.h"
#include "icd_object_tracker.h"

#include <vector>
#include <memory>
#include <atomic>
#include <mutex>
#include <optional>
#include <unordered_map>
#include <unordered_set>

namespace vksc {

class Instance;
class PhysicalDevice;
class Queue;

class Device : public Dispatchable<Device, VkDevice>, public vk::Device {
  public:
    using NEXT = vk::Device;

    Device(VkDevice device, PhysicalDevice& physical_device, const VkDeviceCreateInfo& create_info);

    icd::Logger& Log() { return logger_; }
    icd::FaultHandler& GetFaultHandler() { return fault_handler_; }

    bool RecyclePipelineMemory() const { return physical_device_.RecyclePipelineMemory(); }

    VkResult GetStatus() const { return status_; }

    const Instance& GetInstance() const { return instance_; }
    const PhysicalDevice& GetPhysicalDevice() const { return physical_device_; }

    bool IsExtensionEnabled(ExtensionNumber ext_num) const {
        return enabled_extensions_.find(ext_num) != enabled_extensions_.end();
    }

    PFN_vkVoidFunction GetDeviceProcAddr(const char* pName);
    void DestroyDevice(const VkAllocationCallbacks* pAllocator);
    void GetDeviceQueue(uint32_t queueFamilyIndex, uint32_t queueIndex, VkQueue* pQueue);
    void GetDeviceQueue2(const VkDeviceQueueInfo2* pQueueInfo, VkQueue* pQueue);

    VkResult AllocateCommandBuffers(const VkCommandBufferAllocateInfo* pAllocateInfo, VkCommandBuffer* pCommandBuffers);
    void FreeCommandBuffers(VkCommandPool commandPool, uint32_t commandBufferCount, const VkCommandBuffer* pCommandBuffers);

    void GetCommandPoolMemoryConsumption(VkCommandPool commandPool, VkCommandBuffer commandBuffer,
                                         VkCommandPoolMemoryConsumption* pConsumption);

    VkResult ResetCommandPool(VkCommandPool commandPool, VkCommandPoolResetFlags flags);

    VkResult CreatePipelineCache(const VkPipelineCacheCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator,
                                 VkPipelineCache* pPipelineCache);
    void DestroyPipelineCache(VkPipelineCache pipelineCache, const VkAllocationCallbacks* pAllocator);

    VkResult CreateGraphicsPipelines(VkPipelineCache pipelineCache, uint32_t createInfoCount,
                                     const VkGraphicsPipelineCreateInfo* pCreateInfos, const VkAllocationCallbacks* pAllocator,
                                     VkPipeline* pPipelines);
    VkResult CreateComputePipelines(VkPipelineCache pipelineCache, uint32_t createInfoCount,
                                    const VkComputePipelineCreateInfo* pCreateInfos, const VkAllocationCallbacks* pAllocator,
                                    VkPipeline* pPipelines);
    void DestroyPipeline(VkPipeline pipeline, const VkAllocationCallbacks* pAllocator);

    void ReportFault(VkFaultLevel faultLevel, VkFaultType faultType) { fault_handler_.ReportFault(faultLevel, faultType); }

    VkResult GetFaultData(VkFaultQueryBehavior faultQueryBehavior, VkBool32* pUnrecordedFaults, uint32_t* pFaultCount,
                          VkFaultData* pFaults);

    VkResult AllocateMemory(const VkMemoryAllocateInfo* pAllocateInfo, const VkAllocationCallbacks* pAllocator,
                            VkDeviceMemory* pMemory);
    VkResult CreateCommandPool(const VkCommandPoolCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator,
                               VkCommandPool* pCommandPool);
    VkResult CreateDescriptorPool(const VkDescriptorPoolCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator,
                                  VkDescriptorPool* pDescriptorPool);
    VkResult CreateQueryPool(const VkQueryPoolCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator,
                             VkQueryPool* pQueryPool);
    VkResult CreateSwapchainKHR(const VkSwapchainCreateInfoKHR* pCreateInfo, const VkAllocationCallbacks* pAllocator,
                                VkSwapchainKHR* pSwapchain);
    VkResult CreateSharedSwapchainsKHR(uint32_t swapchainCount, const VkSwapchainCreateInfoKHR* pCreateInfos,
                                       const VkAllocationCallbacks* pAllocator, VkSwapchainKHR* pSwapchains);

  private:
    VkResult SetupDevice(const VkDeviceCreateInfo& create_info);
    const icd::Pipeline* GetPipelineFromCache(const icd::PipelineCache& pipeline_cache,
                                              const VkPipelineOfflineCreateInfo* offline_info, VkResult& out_result);

    icd::DeviceObjectTracker& GetObjectTracker() { return object_tracker_; }

    VkResult status_{VK_SUCCESS};

    const Instance& instance_;
    const PhysicalDevice& physical_device_;
    icd::Logger logger_;
    icd::FaultHandler fault_handler_;

    DispatchableChildren<Queue, VkQueue> device_queues_;
    icd::DeviceObjectTracker object_tracker_;

    std::unordered_set<ExtensionNumber> enabled_extensions_{};

    // Map of pipeline cache data pointers to pipeline cache data
    std::unordered_map<const void*, icd::PipelineCache> pipeline_cache_map_{};

    // Map of reserved and currently used pipeline pool entries keyed by entry size
    std::unordered_map<uint64_t, uint32_t> reserved_pipeline_pool_entries_map_{};
    std::unordered_map<uint64_t, std::atomic_uint32_t> used_pipeline_pool_entries_map_{};

    // Map of pipelines and corresponding pool entry sizes (used only when pipeline pool entry recycling is enabled)
    std::mutex pipeline_pool_size_map_mutex_{};
    std::unordered_map<VkPipeline, uint64_t> pipeline_pool_size_map_{};

    std::mutex command_pool_mutex_{};
    std::unordered_map<VkCommandPool, std::unique_ptr<CommandPool>> command_pools_{};
};

}  // namespace vksc
