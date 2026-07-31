/*
 * Copyright (c) 2024-2026 The Khronos Group Inc.
 * Copyright (c) 2024-2026 RasterGrid Kft.
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#pragma once

#include "vksc_command_pool.h"
#include "vksc_descriptor_pool.h"
#include "vksc_pipeline.h"
#include "vksc_render_pass.h"
#include "vksc_image.h"
#include "vksc_image_view.h"
#include "vksc_descriptor_set_layout.h"
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

    const icd::Logger& Log() const { return logger_; }
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

    VkResult SetDebugUtilsObjectNameEXT(const VkDebugUtilsObjectNameInfoEXT* pNameInfo);
    VkResult SetDebugUtilsObjectTagEXT(const VkDebugUtilsObjectTagInfoEXT* pTagInfo);

    VkResult CreateSemaphore(const VkSemaphoreCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator,
                             VkSemaphore* pSemaphore);
    void DestroySemaphore(VkSemaphore semaphore, const VkAllocationCallbacks* pAllocator);

    VkResult CreateFence(const VkFenceCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkFence* pFence);
    void DestroyFence(VkFence fence, const VkAllocationCallbacks* pAllocator);

    VkResult CreateEvent(const VkEventCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkEvent* pEvent);
    void DestroyEvent(VkEvent event, const VkAllocationCallbacks* pAllocator);

    VkResult CreateBuffer(const VkBufferCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkBuffer* pBuffer);
    void DestroyBuffer(VkBuffer buffer, const VkAllocationCallbacks* pAllocator);

    VkResult CreateBufferView(const VkBufferViewCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator,
                              VkBufferView* pView);
    void DestroyBufferView(VkBufferView bufferView, const VkAllocationCallbacks* pAllocator);

    VkResult CreateImage(const VkImageCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkImage* pImage);
    void DestroyImage(VkImage image, const VkAllocationCallbacks* pAllocator);

    VkResult CreateImageView(const VkImageViewCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkImageView* pView);
    void DestroyImageView(VkImageView imageView, const VkAllocationCallbacks* pAllocator);

    VkResult CreateSampler(const VkSamplerCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkSampler* pSampler);
    void DestroySampler(VkSampler sampler, const VkAllocationCallbacks* pAllocator);

    VkResult CreateSamplerYcbcrConversion(const VkSamplerYcbcrConversionCreateInfo* pCreateInfo,
                                          const VkAllocationCallbacks* pAllocator, VkSamplerYcbcrConversion* pYcbcrConversion);
    void DestroySamplerYcbcrConversion(VkSamplerYcbcrConversion ycbcrConversion, const VkAllocationCallbacks* pAllocator);

    VkResult ResetDescriptorPool(VkDescriptorPool descriptorPool, VkDescriptorPoolResetFlags flags);
    VkResult AllocateDescriptorSets(const VkDescriptorSetAllocateInfo* pAllocateInfo, VkDescriptorSet* pDescriptorSets);
    VkResult FreeDescriptorSets(VkDescriptorPool descriptorPool, uint32_t descriptorSetCount,
                                const VkDescriptorSet* pDescriptorSets);

    VkResult CreateDescriptorSetLayout(const VkDescriptorSetLayoutCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator,
                                       VkDescriptorSetLayout* pSetLayout);
    void DestroyDescriptorSetLayout(VkDescriptorSetLayout descriptorSetLayout, const VkAllocationCallbacks* pAllocator);

    VkResult CreatePipelineLayout(const VkPipelineLayoutCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator,
                                  VkPipelineLayout* pPipelineLayout);
    void DestroyPipelineLayout(VkPipelineLayout pipelineLayout, const VkAllocationCallbacks* pAllocator);

    VkResult CreateRenderPass(const VkRenderPassCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator,
                              VkRenderPass* pRenderPass);
    VkResult CreateRenderPass2(const VkRenderPassCreateInfo2* pCreateInfo, const VkAllocationCallbacks* pAllocator,
                               VkRenderPass* pRenderPass);
    void DestroyRenderPass(VkRenderPass renderPass, const VkAllocationCallbacks* pAllocator);

    VkResult CreateFramebuffer(const VkFramebufferCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator,
                               VkFramebuffer* pFramebuffer);
    void DestroyFramebuffer(VkFramebuffer framebuffer, const VkAllocationCallbacks* pAllocator);

  private:
    VkResult SetupDevice(const VkDeviceCreateInfo& create_info);
    const icd::Pipeline* GetPipelineFromCache(const icd::PipelineCache& pipeline_cache,
                                              const VkPipelineOfflineCreateInfo* offline_info, VkResult& out_result);
    bool InitSwapchainImageInfo(VkSwapchainKHR, VkExtent2D extent, uint32_t array_layers);

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

    // Object state trackers
    icd::ObjectStateTracker<DescriptorSetLayout, VkDescriptorSetLayout> descriptor_set_layouts_{};
    icd::ObjectStateTracker<Pipeline, VkPipeline> pipelines_{};
    icd::ObjectStateTracker<CommandPool, VkCommandPool> command_pools_{};
    icd::ObjectStateTracker<DescriptorPool, VkDescriptorPool> descriptor_pools_{};
    icd::ObjectStateTracker<RenderPass, VkRenderPass> render_passes_{};
    icd::ObjectStateTracker<Image, VkImage> images_{};
    icd::ObjectStateTracker<ImageView, VkImageView> image_views_{};
};

}  // namespace vksc
