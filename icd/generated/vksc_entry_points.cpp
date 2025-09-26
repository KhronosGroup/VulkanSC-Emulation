// *** THIS FILE IS GENERATED - DO NOT EDIT ***
// See entry_point_generator.py for modifications

/*
 * Copyright (c) 2024-2025 The Khronos Group Inc.
 * Copyright (c) 2024-2025 RasterGrid Kft.
 *
 * SPDX-License-Identifier: Apache-2.0
 */// NOLINTBEGIN
#include <vulkan/vulkan.h>

#include "vksc_command_buffer.h"
#include "vksc_device.h"
#include "vksc_instance.h"
#include "vksc_physical_device.h"
#include "vksc_queue.h"

extern "C" {

VKAPI_ATTR void VKAPI_CALL vkDestroyInstance(VkInstance instance, const VkAllocationCallbacks* pAllocator) {
    if (instance != VK_NULL_HANDLE) return vksc::Instance::FromHandle(instance)->DestroyInstance(pAllocator);
}

VKAPI_ATTR VkResult VKAPI_CALL vkEnumeratePhysicalDevices(VkInstance instance, uint32_t* pPhysicalDeviceCount,
                                                          VkPhysicalDevice* pPhysicalDevices) {
    return vksc::Instance::FromHandle(instance)->EnumeratePhysicalDevices(pPhysicalDeviceCount, pPhysicalDevices);
}

VKAPI_ATTR void VKAPI_CALL vkGetPhysicalDeviceFeatures(VkPhysicalDevice physicalDevice, VkPhysicalDeviceFeatures* pFeatures) {
    return vksc::PhysicalDevice::FromHandle(physicalDevice)->GetPhysicalDeviceFeatures(pFeatures);
}

VKAPI_ATTR void VKAPI_CALL vkGetPhysicalDeviceFormatProperties(VkPhysicalDevice physicalDevice, VkFormat format,
                                                               VkFormatProperties* pFormatProperties) {
    return vksc::PhysicalDevice::FromHandle(physicalDevice)->GetPhysicalDeviceFormatProperties(format, pFormatProperties);
}

VKAPI_ATTR VkResult VKAPI_CALL vkGetPhysicalDeviceImageFormatProperties(VkPhysicalDevice physicalDevice, VkFormat format,
                                                                        VkImageType type, VkImageTiling tiling,
                                                                        VkImageUsageFlags usage, VkImageCreateFlags flags,
                                                                        VkImageFormatProperties* pImageFormatProperties) {
    return vksc::PhysicalDevice::FromHandle(physicalDevice)
        ->GetPhysicalDeviceImageFormatProperties(format, type, tiling, usage, flags, pImageFormatProperties);
}

VKAPI_ATTR void VKAPI_CALL vkGetPhysicalDeviceProperties(VkPhysicalDevice physicalDevice, VkPhysicalDeviceProperties* pProperties) {
    return vksc::PhysicalDevice::FromHandle(physicalDevice)->GetPhysicalDeviceProperties(pProperties);
}

VKAPI_ATTR void VKAPI_CALL vkGetPhysicalDeviceQueueFamilyProperties(VkPhysicalDevice physicalDevice,
                                                                    uint32_t* pQueueFamilyPropertyCount,
                                                                    VkQueueFamilyProperties* pQueueFamilyProperties) {
    return vksc::PhysicalDevice::FromHandle(physicalDevice)
        ->GetPhysicalDeviceQueueFamilyProperties(pQueueFamilyPropertyCount, pQueueFamilyProperties);
}

VKAPI_ATTR void VKAPI_CALL vkGetPhysicalDeviceMemoryProperties(VkPhysicalDevice physicalDevice,
                                                               VkPhysicalDeviceMemoryProperties* pMemoryProperties) {
    return vksc::PhysicalDevice::FromHandle(physicalDevice)->GetPhysicalDeviceMemoryProperties(pMemoryProperties);
}

VKAPI_ATTR PFN_vkVoidFunction VKAPI_CALL vkGetDeviceProcAddr(VkDevice device, const char* pName) {
    return vksc::Device::FromHandle(device)->GetDeviceProcAddr(pName);
}

VKAPI_ATTR VkResult VKAPI_CALL vkCreateDevice(VkPhysicalDevice physicalDevice, const VkDeviceCreateInfo* pCreateInfo,
                                              const VkAllocationCallbacks* pAllocator, VkDevice* pDevice) {
    return vksc::PhysicalDevice::FromHandle(physicalDevice)->CreateDevice(pCreateInfo, pAllocator, pDevice);
}

VKAPI_ATTR void VKAPI_CALL vkDestroyDevice(VkDevice device, const VkAllocationCallbacks* pAllocator) {
    if (device != VK_NULL_HANDLE) return vksc::Device::FromHandle(device)->DestroyDevice(pAllocator);
}

VKAPI_ATTR VkResult VKAPI_CALL vkEnumerateDeviceExtensionProperties(VkPhysicalDevice physicalDevice, const char* pLayerName,
                                                                    uint32_t* pPropertyCount, VkExtensionProperties* pProperties) {
    return vksc::PhysicalDevice::FromHandle(physicalDevice)
        ->EnumerateDeviceExtensionProperties(pLayerName, pPropertyCount, pProperties);
}

VKAPI_ATTR VkResult VKAPI_CALL vkEnumerateDeviceLayerProperties(VkPhysicalDevice physicalDevice, uint32_t* pPropertyCount,
                                                                VkLayerProperties* pProperties) {
    return vksc::PhysicalDevice::FromHandle(physicalDevice)->EnumerateDeviceLayerProperties(pPropertyCount, pProperties);
}

VKAPI_ATTR void VKAPI_CALL vkGetDeviceQueue(VkDevice device, uint32_t queueFamilyIndex, uint32_t queueIndex, VkQueue* pQueue) {
    return vksc::Device::FromHandle(device)->GetDeviceQueue(queueFamilyIndex, queueIndex, pQueue);
}

VKAPI_ATTR VkResult VKAPI_CALL vkQueueSubmit(VkQueue queue, uint32_t submitCount, const VkSubmitInfo* pSubmits, VkFence fence) {
    return vksc::Queue::FromHandle(queue)->QueueSubmit(submitCount, pSubmits, fence);
}

VKAPI_ATTR VkResult VKAPI_CALL vkQueueWaitIdle(VkQueue queue) { return vksc::Queue::FromHandle(queue)->QueueWaitIdle(); }

VKAPI_ATTR VkResult VKAPI_CALL vkDeviceWaitIdle(VkDevice device) { return vksc::Device::FromHandle(device)->DeviceWaitIdle(); }

VKAPI_ATTR VkResult VKAPI_CALL vkAllocateMemory(VkDevice device, const VkMemoryAllocateInfo* pAllocateInfo,
                                                const VkAllocationCallbacks* pAllocator, VkDeviceMemory* pMemory) {
    return vksc::Device::FromHandle(device)->AllocateMemory(pAllocateInfo, pAllocator, pMemory);
}

VKAPI_ATTR VkResult VKAPI_CALL vkMapMemory(VkDevice device, VkDeviceMemory memory, VkDeviceSize offset, VkDeviceSize size,
                                           VkMemoryMapFlags flags, void** ppData) {
    return vksc::Device::FromHandle(device)->MapMemory(memory, offset, size, flags, ppData);
}

VKAPI_ATTR void VKAPI_CALL vkUnmapMemory(VkDevice device, VkDeviceMemory memory) {
    return vksc::Device::FromHandle(device)->UnmapMemory(memory);
}

VKAPI_ATTR VkResult VKAPI_CALL vkFlushMappedMemoryRanges(VkDevice device, uint32_t memoryRangeCount,
                                                         const VkMappedMemoryRange* pMemoryRanges) {
    return vksc::Device::FromHandle(device)->FlushMappedMemoryRanges(memoryRangeCount, pMemoryRanges);
}

VKAPI_ATTR VkResult VKAPI_CALL vkInvalidateMappedMemoryRanges(VkDevice device, uint32_t memoryRangeCount,
                                                              const VkMappedMemoryRange* pMemoryRanges) {
    return vksc::Device::FromHandle(device)->InvalidateMappedMemoryRanges(memoryRangeCount, pMemoryRanges);
}

VKAPI_ATTR void VKAPI_CALL vkGetDeviceMemoryCommitment(VkDevice device, VkDeviceMemory memory,
                                                       VkDeviceSize* pCommittedMemoryInBytes) {
    return vksc::Device::FromHandle(device)->GetDeviceMemoryCommitment(memory, pCommittedMemoryInBytes);
}

VKAPI_ATTR VkResult VKAPI_CALL vkBindBufferMemory(VkDevice device, VkBuffer buffer, VkDeviceMemory memory,
                                                  VkDeviceSize memoryOffset) {
    return vksc::Device::FromHandle(device)->BindBufferMemory(buffer, memory, memoryOffset);
}

VKAPI_ATTR VkResult VKAPI_CALL vkBindImageMemory(VkDevice device, VkImage image, VkDeviceMemory memory, VkDeviceSize memoryOffset) {
    return vksc::Device::FromHandle(device)->BindImageMemory(image, memory, memoryOffset);
}

VKAPI_ATTR void VKAPI_CALL vkGetBufferMemoryRequirements(VkDevice device, VkBuffer buffer,
                                                         VkMemoryRequirements* pMemoryRequirements) {
    return vksc::Device::FromHandle(device)->GetBufferMemoryRequirements(buffer, pMemoryRequirements);
}

VKAPI_ATTR void VKAPI_CALL vkGetImageMemoryRequirements(VkDevice device, VkImage image, VkMemoryRequirements* pMemoryRequirements) {
    return vksc::Device::FromHandle(device)->GetImageMemoryRequirements(image, pMemoryRequirements);
}

VKAPI_ATTR VkResult VKAPI_CALL vkCreateFence(VkDevice device, const VkFenceCreateInfo* pCreateInfo,
                                             const VkAllocationCallbacks* pAllocator, VkFence* pFence) {
    return vksc::Device::FromHandle(device)->CreateFence(pCreateInfo, pAllocator, pFence);
}

VKAPI_ATTR void VKAPI_CALL vkDestroyFence(VkDevice device, VkFence fence, const VkAllocationCallbacks* pAllocator) {
    return vksc::Device::FromHandle(device)->DestroyFence(fence, pAllocator);
}

VKAPI_ATTR VkResult VKAPI_CALL vkResetFences(VkDevice device, uint32_t fenceCount, const VkFence* pFences) {
    return vksc::Device::FromHandle(device)->ResetFences(fenceCount, pFences);
}

VKAPI_ATTR VkResult VKAPI_CALL vkGetFenceStatus(VkDevice device, VkFence fence) {
    return vksc::Device::FromHandle(device)->GetFenceStatus(fence);
}

VKAPI_ATTR VkResult VKAPI_CALL vkWaitForFences(VkDevice device, uint32_t fenceCount, const VkFence* pFences, VkBool32 waitAll,
                                               uint64_t timeout) {
    return vksc::Device::FromHandle(device)->WaitForFences(fenceCount, pFences, waitAll, timeout);
}

VKAPI_ATTR VkResult VKAPI_CALL vkCreateSemaphore(VkDevice device, const VkSemaphoreCreateInfo* pCreateInfo,
                                                 const VkAllocationCallbacks* pAllocator, VkSemaphore* pSemaphore) {
    return vksc::Device::FromHandle(device)->CreateSemaphore(pCreateInfo, pAllocator, pSemaphore);
}

VKAPI_ATTR void VKAPI_CALL vkDestroySemaphore(VkDevice device, VkSemaphore semaphore, const VkAllocationCallbacks* pAllocator) {
    return vksc::Device::FromHandle(device)->DestroySemaphore(semaphore, pAllocator);
}

VKAPI_ATTR VkResult VKAPI_CALL vkCreateEvent(VkDevice device, const VkEventCreateInfo* pCreateInfo,
                                             const VkAllocationCallbacks* pAllocator, VkEvent* pEvent) {
    return vksc::Device::FromHandle(device)->CreateEvent(pCreateInfo, pAllocator, pEvent);
}

VKAPI_ATTR void VKAPI_CALL vkDestroyEvent(VkDevice device, VkEvent event, const VkAllocationCallbacks* pAllocator) {
    return vksc::Device::FromHandle(device)->DestroyEvent(event, pAllocator);
}

VKAPI_ATTR VkResult VKAPI_CALL vkGetEventStatus(VkDevice device, VkEvent event) {
    return vksc::Device::FromHandle(device)->GetEventStatus(event);
}

VKAPI_ATTR VkResult VKAPI_CALL vkSetEvent(VkDevice device, VkEvent event) {
    return vksc::Device::FromHandle(device)->SetEvent(event);
}

VKAPI_ATTR VkResult VKAPI_CALL vkResetEvent(VkDevice device, VkEvent event) {
    return vksc::Device::FromHandle(device)->ResetEvent(event);
}

VKAPI_ATTR VkResult VKAPI_CALL vkCreateQueryPool(VkDevice device, const VkQueryPoolCreateInfo* pCreateInfo,
                                                 const VkAllocationCallbacks* pAllocator, VkQueryPool* pQueryPool) {
    return vksc::Device::FromHandle(device)->CreateQueryPool(pCreateInfo, pAllocator, pQueryPool);
}

VKAPI_ATTR VkResult VKAPI_CALL vkGetQueryPoolResults(VkDevice device, VkQueryPool queryPool, uint32_t firstQuery,
                                                     uint32_t queryCount, size_t dataSize, void* pData, VkDeviceSize stride,
                                                     VkQueryResultFlags flags) {
    return vksc::Device::FromHandle(device)->GetQueryPoolResults(queryPool, firstQuery, queryCount, dataSize, pData, stride, flags);
}

VKAPI_ATTR VkResult VKAPI_CALL vkCreateBuffer(VkDevice device, const VkBufferCreateInfo* pCreateInfo,
                                              const VkAllocationCallbacks* pAllocator, VkBuffer* pBuffer) {
    return vksc::Device::FromHandle(device)->CreateBuffer(pCreateInfo, pAllocator, pBuffer);
}

VKAPI_ATTR void VKAPI_CALL vkDestroyBuffer(VkDevice device, VkBuffer buffer, const VkAllocationCallbacks* pAllocator) {
    return vksc::Device::FromHandle(device)->DestroyBuffer(buffer, pAllocator);
}

VKAPI_ATTR VkResult VKAPI_CALL vkCreateBufferView(VkDevice device, const VkBufferViewCreateInfo* pCreateInfo,
                                                  const VkAllocationCallbacks* pAllocator, VkBufferView* pView) {
    return vksc::Device::FromHandle(device)->CreateBufferView(pCreateInfo, pAllocator, pView);
}

VKAPI_ATTR void VKAPI_CALL vkDestroyBufferView(VkDevice device, VkBufferView bufferView, const VkAllocationCallbacks* pAllocator) {
    return vksc::Device::FromHandle(device)->DestroyBufferView(bufferView, pAllocator);
}

VKAPI_ATTR VkResult VKAPI_CALL vkCreateImage(VkDevice device, const VkImageCreateInfo* pCreateInfo,
                                             const VkAllocationCallbacks* pAllocator, VkImage* pImage) {
    return vksc::Device::FromHandle(device)->CreateImage(pCreateInfo, pAllocator, pImage);
}

VKAPI_ATTR void VKAPI_CALL vkDestroyImage(VkDevice device, VkImage image, const VkAllocationCallbacks* pAllocator) {
    return vksc::Device::FromHandle(device)->DestroyImage(image, pAllocator);
}

VKAPI_ATTR void VKAPI_CALL vkGetImageSubresourceLayout(VkDevice device, VkImage image, const VkImageSubresource* pSubresource,
                                                       VkSubresourceLayout* pLayout) {
    return vksc::Device::FromHandle(device)->GetImageSubresourceLayout(image, pSubresource, pLayout);
}

VKAPI_ATTR VkResult VKAPI_CALL vkCreateImageView(VkDevice device, const VkImageViewCreateInfo* pCreateInfo,
                                                 const VkAllocationCallbacks* pAllocator, VkImageView* pView) {
    return vksc::Device::FromHandle(device)->CreateImageView(pCreateInfo, pAllocator, pView);
}

VKAPI_ATTR void VKAPI_CALL vkDestroyImageView(VkDevice device, VkImageView imageView, const VkAllocationCallbacks* pAllocator) {
    return vksc::Device::FromHandle(device)->DestroyImageView(imageView, pAllocator);
}

VKAPI_ATTR VkResult VKAPI_CALL vkCreatePipelineCache(VkDevice device, const VkPipelineCacheCreateInfo* pCreateInfo,
                                                     const VkAllocationCallbacks* pAllocator, VkPipelineCache* pPipelineCache) {
    return vksc::Device::FromHandle(device)->CreatePipelineCache(pCreateInfo, pAllocator, pPipelineCache);
}

VKAPI_ATTR void VKAPI_CALL vkDestroyPipelineCache(VkDevice device, VkPipelineCache pipelineCache,
                                                  const VkAllocationCallbacks* pAllocator) {
    return vksc::Device::FromHandle(device)->DestroyPipelineCache(pipelineCache, pAllocator);
}

VKAPI_ATTR VkResult VKAPI_CALL vkCreateGraphicsPipelines(VkDevice device, VkPipelineCache pipelineCache, uint32_t createInfoCount,
                                                         const VkGraphicsPipelineCreateInfo* pCreateInfos,
                                                         const VkAllocationCallbacks* pAllocator, VkPipeline* pPipelines) {
    return vksc::Device::FromHandle(device)->CreateGraphicsPipelines(pipelineCache, createInfoCount, pCreateInfos, pAllocator,
                                                                     pPipelines);
}

VKAPI_ATTR VkResult VKAPI_CALL vkCreateComputePipelines(VkDevice device, VkPipelineCache pipelineCache, uint32_t createInfoCount,
                                                        const VkComputePipelineCreateInfo* pCreateInfos,
                                                        const VkAllocationCallbacks* pAllocator, VkPipeline* pPipelines) {
    return vksc::Device::FromHandle(device)->CreateComputePipelines(pipelineCache, createInfoCount, pCreateInfos, pAllocator,
                                                                    pPipelines);
}

VKAPI_ATTR void VKAPI_CALL vkDestroyPipeline(VkDevice device, VkPipeline pipeline, const VkAllocationCallbacks* pAllocator) {
    return vksc::Device::FromHandle(device)->DestroyPipeline(pipeline, pAllocator);
}

VKAPI_ATTR VkResult VKAPI_CALL vkCreatePipelineLayout(VkDevice device, const VkPipelineLayoutCreateInfo* pCreateInfo,
                                                      const VkAllocationCallbacks* pAllocator, VkPipelineLayout* pPipelineLayout) {
    return vksc::Device::FromHandle(device)->CreatePipelineLayout(pCreateInfo, pAllocator, pPipelineLayout);
}

VKAPI_ATTR void VKAPI_CALL vkDestroyPipelineLayout(VkDevice device, VkPipelineLayout pipelineLayout,
                                                   const VkAllocationCallbacks* pAllocator) {
    return vksc::Device::FromHandle(device)->DestroyPipelineLayout(pipelineLayout, pAllocator);
}

VKAPI_ATTR VkResult VKAPI_CALL vkCreateSampler(VkDevice device, const VkSamplerCreateInfo* pCreateInfo,
                                               const VkAllocationCallbacks* pAllocator, VkSampler* pSampler) {
    return vksc::Device::FromHandle(device)->CreateSampler(pCreateInfo, pAllocator, pSampler);
}

VKAPI_ATTR void VKAPI_CALL vkDestroySampler(VkDevice device, VkSampler sampler, const VkAllocationCallbacks* pAllocator) {
    return vksc::Device::FromHandle(device)->DestroySampler(sampler, pAllocator);
}

VKAPI_ATTR VkResult VKAPI_CALL vkCreateDescriptorSetLayout(VkDevice device, const VkDescriptorSetLayoutCreateInfo* pCreateInfo,
                                                           const VkAllocationCallbacks* pAllocator,
                                                           VkDescriptorSetLayout* pSetLayout) {
    return vksc::Device::FromHandle(device)->CreateDescriptorSetLayout(pCreateInfo, pAllocator, pSetLayout);
}

VKAPI_ATTR void VKAPI_CALL vkDestroyDescriptorSetLayout(VkDevice device, VkDescriptorSetLayout descriptorSetLayout,
                                                        const VkAllocationCallbacks* pAllocator) {
    return vksc::Device::FromHandle(device)->DestroyDescriptorSetLayout(descriptorSetLayout, pAllocator);
}

VKAPI_ATTR VkResult VKAPI_CALL vkCreateDescriptorPool(VkDevice device, const VkDescriptorPoolCreateInfo* pCreateInfo,
                                                      const VkAllocationCallbacks* pAllocator, VkDescriptorPool* pDescriptorPool) {
    return vksc::Device::FromHandle(device)->CreateDescriptorPool(pCreateInfo, pAllocator, pDescriptorPool);
}

VKAPI_ATTR VkResult VKAPI_CALL vkResetDescriptorPool(VkDevice device, VkDescriptorPool descriptorPool,
                                                     VkDescriptorPoolResetFlags flags) {
    return vksc::Device::FromHandle(device)->ResetDescriptorPool(descriptorPool, flags);
}

VKAPI_ATTR VkResult VKAPI_CALL vkAllocateDescriptorSets(VkDevice device, const VkDescriptorSetAllocateInfo* pAllocateInfo,
                                                        VkDescriptorSet* pDescriptorSets) {
    return vksc::Device::FromHandle(device)->AllocateDescriptorSets(pAllocateInfo, pDescriptorSets);
}

VKAPI_ATTR VkResult VKAPI_CALL vkFreeDescriptorSets(VkDevice device, VkDescriptorPool descriptorPool, uint32_t descriptorSetCount,
                                                    const VkDescriptorSet* pDescriptorSets) {
    return vksc::Device::FromHandle(device)->FreeDescriptorSets(descriptorPool, descriptorSetCount, pDescriptorSets);
}

VKAPI_ATTR void VKAPI_CALL vkUpdateDescriptorSets(VkDevice device, uint32_t descriptorWriteCount,
                                                  const VkWriteDescriptorSet* pDescriptorWrites, uint32_t descriptorCopyCount,
                                                  const VkCopyDescriptorSet* pDescriptorCopies) {
    return vksc::Device::FromHandle(device)->UpdateDescriptorSets(descriptorWriteCount, pDescriptorWrites, descriptorCopyCount,
                                                                  pDescriptorCopies);
}

VKAPI_ATTR VkResult VKAPI_CALL vkCreateFramebuffer(VkDevice device, const VkFramebufferCreateInfo* pCreateInfo,
                                                   const VkAllocationCallbacks* pAllocator, VkFramebuffer* pFramebuffer) {
    return vksc::Device::FromHandle(device)->CreateFramebuffer(pCreateInfo, pAllocator, pFramebuffer);
}

VKAPI_ATTR void VKAPI_CALL vkDestroyFramebuffer(VkDevice device, VkFramebuffer framebuffer,
                                                const VkAllocationCallbacks* pAllocator) {
    return vksc::Device::FromHandle(device)->DestroyFramebuffer(framebuffer, pAllocator);
}

VKAPI_ATTR VkResult VKAPI_CALL vkCreateRenderPass(VkDevice device, const VkRenderPassCreateInfo* pCreateInfo,
                                                  const VkAllocationCallbacks* pAllocator, VkRenderPass* pRenderPass) {
    return vksc::Device::FromHandle(device)->CreateRenderPass(pCreateInfo, pAllocator, pRenderPass);
}

VKAPI_ATTR void VKAPI_CALL vkDestroyRenderPass(VkDevice device, VkRenderPass renderPass, const VkAllocationCallbacks* pAllocator) {
    return vksc::Device::FromHandle(device)->DestroyRenderPass(renderPass, pAllocator);
}

VKAPI_ATTR void VKAPI_CALL vkGetRenderAreaGranularity(VkDevice device, VkRenderPass renderPass, VkExtent2D* pGranularity) {
    return vksc::Device::FromHandle(device)->GetRenderAreaGranularity(renderPass, pGranularity);
}

VKAPI_ATTR VkResult VKAPI_CALL vkCreateCommandPool(VkDevice device, const VkCommandPoolCreateInfo* pCreateInfo,
                                                   const VkAllocationCallbacks* pAllocator, VkCommandPool* pCommandPool) {
    return vksc::Device::FromHandle(device)->CreateCommandPool(pCreateInfo, pAllocator, pCommandPool);
}

VKAPI_ATTR VkResult VKAPI_CALL vkResetCommandPool(VkDevice device, VkCommandPool commandPool, VkCommandPoolResetFlags flags) {
    return vksc::Device::FromHandle(device)->ResetCommandPool(commandPool, flags);
}

VKAPI_ATTR VkResult VKAPI_CALL vkAllocateCommandBuffers(VkDevice device, const VkCommandBufferAllocateInfo* pAllocateInfo,
                                                        VkCommandBuffer* pCommandBuffers) {
    return vksc::Device::FromHandle(device)->AllocateCommandBuffers(pAllocateInfo, pCommandBuffers);
}

VKAPI_ATTR void VKAPI_CALL vkFreeCommandBuffers(VkDevice device, VkCommandPool commandPool, uint32_t commandBufferCount,
                                                const VkCommandBuffer* pCommandBuffers) {
    return vksc::Device::FromHandle(device)->FreeCommandBuffers(commandPool, commandBufferCount, pCommandBuffers);
}

VKAPI_ATTR VkResult VKAPI_CALL vkBeginCommandBuffer(VkCommandBuffer commandBuffer, const VkCommandBufferBeginInfo* pBeginInfo) {
    return vksc::CommandBuffer::FromHandle(commandBuffer)->BeginCommandBuffer(pBeginInfo);
}

VKAPI_ATTR VkResult VKAPI_CALL vkEndCommandBuffer(VkCommandBuffer commandBuffer) {
    return vksc::CommandBuffer::FromHandle(commandBuffer)->EndCommandBuffer();
}

VKAPI_ATTR VkResult VKAPI_CALL vkResetCommandBuffer(VkCommandBuffer commandBuffer, VkCommandBufferResetFlags flags) {
    return vksc::CommandBuffer::FromHandle(commandBuffer)->ResetCommandBuffer(flags);
}

VKAPI_ATTR void VKAPI_CALL vkCmdBindPipeline(VkCommandBuffer commandBuffer, VkPipelineBindPoint pipelineBindPoint,
                                             VkPipeline pipeline) {
    return vksc::CommandBuffer::FromHandle(commandBuffer)->CmdBindPipeline(pipelineBindPoint, pipeline);
}

VKAPI_ATTR void VKAPI_CALL vkCmdSetViewport(VkCommandBuffer commandBuffer, uint32_t firstViewport, uint32_t viewportCount,
                                            const VkViewport* pViewports) {
    return vksc::CommandBuffer::FromHandle(commandBuffer)->CmdSetViewport(firstViewport, viewportCount, pViewports);
}

VKAPI_ATTR void VKAPI_CALL vkCmdSetScissor(VkCommandBuffer commandBuffer, uint32_t firstScissor, uint32_t scissorCount,
                                           const VkRect2D* pScissors) {
    return vksc::CommandBuffer::FromHandle(commandBuffer)->CmdSetScissor(firstScissor, scissorCount, pScissors);
}

VKAPI_ATTR void VKAPI_CALL vkCmdSetLineWidth(VkCommandBuffer commandBuffer, float lineWidth) {
    return vksc::CommandBuffer::FromHandle(commandBuffer)->CmdSetLineWidth(lineWidth);
}

VKAPI_ATTR void VKAPI_CALL vkCmdSetDepthBias(VkCommandBuffer commandBuffer, float depthBiasConstantFactor, float depthBiasClamp,
                                             float depthBiasSlopeFactor) {
    return vksc::CommandBuffer::FromHandle(commandBuffer)
        ->CmdSetDepthBias(depthBiasConstantFactor, depthBiasClamp, depthBiasSlopeFactor);
}

VKAPI_ATTR void VKAPI_CALL vkCmdSetBlendConstants(VkCommandBuffer commandBuffer, const float blendConstants[4]) {
    return vksc::CommandBuffer::FromHandle(commandBuffer)->CmdSetBlendConstants(blendConstants);
}

VKAPI_ATTR void VKAPI_CALL vkCmdSetDepthBounds(VkCommandBuffer commandBuffer, float minDepthBounds, float maxDepthBounds) {
    return vksc::CommandBuffer::FromHandle(commandBuffer)->CmdSetDepthBounds(minDepthBounds, maxDepthBounds);
}

VKAPI_ATTR void VKAPI_CALL vkCmdSetStencilCompareMask(VkCommandBuffer commandBuffer, VkStencilFaceFlags faceMask,
                                                      uint32_t compareMask) {
    return vksc::CommandBuffer::FromHandle(commandBuffer)->CmdSetStencilCompareMask(faceMask, compareMask);
}

VKAPI_ATTR void VKAPI_CALL vkCmdSetStencilWriteMask(VkCommandBuffer commandBuffer, VkStencilFaceFlags faceMask,
                                                    uint32_t writeMask) {
    return vksc::CommandBuffer::FromHandle(commandBuffer)->CmdSetStencilWriteMask(faceMask, writeMask);
}

VKAPI_ATTR void VKAPI_CALL vkCmdSetStencilReference(VkCommandBuffer commandBuffer, VkStencilFaceFlags faceMask,
                                                    uint32_t reference) {
    return vksc::CommandBuffer::FromHandle(commandBuffer)->CmdSetStencilReference(faceMask, reference);
}

VKAPI_ATTR void VKAPI_CALL vkCmdBindDescriptorSets(VkCommandBuffer commandBuffer, VkPipelineBindPoint pipelineBindPoint,
                                                   VkPipelineLayout layout, uint32_t firstSet, uint32_t descriptorSetCount,
                                                   const VkDescriptorSet* pDescriptorSets, uint32_t dynamicOffsetCount,
                                                   const uint32_t* pDynamicOffsets) {
    return vksc::CommandBuffer::FromHandle(commandBuffer)
        ->CmdBindDescriptorSets(pipelineBindPoint, layout, firstSet, descriptorSetCount, pDescriptorSets, dynamicOffsetCount,
                                pDynamicOffsets);
}

VKAPI_ATTR void VKAPI_CALL vkCmdBindIndexBuffer(VkCommandBuffer commandBuffer, VkBuffer buffer, VkDeviceSize offset,
                                                VkIndexType indexType) {
    return vksc::CommandBuffer::FromHandle(commandBuffer)->CmdBindIndexBuffer(buffer, offset, indexType);
}

VKAPI_ATTR void VKAPI_CALL vkCmdBindVertexBuffers(VkCommandBuffer commandBuffer, uint32_t firstBinding, uint32_t bindingCount,
                                                  const VkBuffer* pBuffers, const VkDeviceSize* pOffsets) {
    return vksc::CommandBuffer::FromHandle(commandBuffer)->CmdBindVertexBuffers(firstBinding, bindingCount, pBuffers, pOffsets);
}

VKAPI_ATTR void VKAPI_CALL vkCmdDraw(VkCommandBuffer commandBuffer, uint32_t vertexCount, uint32_t instanceCount,
                                     uint32_t firstVertex, uint32_t firstInstance) {
    return vksc::CommandBuffer::FromHandle(commandBuffer)->CmdDraw(vertexCount, instanceCount, firstVertex, firstInstance);
}

VKAPI_ATTR void VKAPI_CALL vkCmdDrawIndexed(VkCommandBuffer commandBuffer, uint32_t indexCount, uint32_t instanceCount,
                                            uint32_t firstIndex, int32_t vertexOffset, uint32_t firstInstance) {
    return vksc::CommandBuffer::FromHandle(commandBuffer)
        ->CmdDrawIndexed(indexCount, instanceCount, firstIndex, vertexOffset, firstInstance);
}

VKAPI_ATTR void VKAPI_CALL vkCmdDrawIndirect(VkCommandBuffer commandBuffer, VkBuffer buffer, VkDeviceSize offset,
                                             uint32_t drawCount, uint32_t stride) {
    return vksc::CommandBuffer::FromHandle(commandBuffer)->CmdDrawIndirect(buffer, offset, drawCount, stride);
}

VKAPI_ATTR void VKAPI_CALL vkCmdDrawIndexedIndirect(VkCommandBuffer commandBuffer, VkBuffer buffer, VkDeviceSize offset,
                                                    uint32_t drawCount, uint32_t stride) {
    return vksc::CommandBuffer::FromHandle(commandBuffer)->CmdDrawIndexedIndirect(buffer, offset, drawCount, stride);
}

VKAPI_ATTR void VKAPI_CALL vkCmdDispatch(VkCommandBuffer commandBuffer, uint32_t groupCountX, uint32_t groupCountY,
                                         uint32_t groupCountZ) {
    return vksc::CommandBuffer::FromHandle(commandBuffer)->CmdDispatch(groupCountX, groupCountY, groupCountZ);
}

VKAPI_ATTR void VKAPI_CALL vkCmdDispatchIndirect(VkCommandBuffer commandBuffer, VkBuffer buffer, VkDeviceSize offset) {
    return vksc::CommandBuffer::FromHandle(commandBuffer)->CmdDispatchIndirect(buffer, offset);
}

VKAPI_ATTR void VKAPI_CALL vkCmdCopyBuffer(VkCommandBuffer commandBuffer, VkBuffer srcBuffer, VkBuffer dstBuffer,
                                           uint32_t regionCount, const VkBufferCopy* pRegions) {
    return vksc::CommandBuffer::FromHandle(commandBuffer)->CmdCopyBuffer(srcBuffer, dstBuffer, regionCount, pRegions);
}

VKAPI_ATTR void VKAPI_CALL vkCmdCopyImage(VkCommandBuffer commandBuffer, VkImage srcImage, VkImageLayout srcImageLayout,
                                          VkImage dstImage, VkImageLayout dstImageLayout, uint32_t regionCount,
                                          const VkImageCopy* pRegions) {
    return vksc::CommandBuffer::FromHandle(commandBuffer)
        ->CmdCopyImage(srcImage, srcImageLayout, dstImage, dstImageLayout, regionCount, pRegions);
}

VKAPI_ATTR void VKAPI_CALL vkCmdBlitImage(VkCommandBuffer commandBuffer, VkImage srcImage, VkImageLayout srcImageLayout,
                                          VkImage dstImage, VkImageLayout dstImageLayout, uint32_t regionCount,
                                          const VkImageBlit* pRegions, VkFilter filter) {
    return vksc::CommandBuffer::FromHandle(commandBuffer)
        ->CmdBlitImage(srcImage, srcImageLayout, dstImage, dstImageLayout, regionCount, pRegions, filter);
}

VKAPI_ATTR void VKAPI_CALL vkCmdCopyBufferToImage(VkCommandBuffer commandBuffer, VkBuffer srcBuffer, VkImage dstImage,
                                                  VkImageLayout dstImageLayout, uint32_t regionCount,
                                                  const VkBufferImageCopy* pRegions) {
    return vksc::CommandBuffer::FromHandle(commandBuffer)
        ->CmdCopyBufferToImage(srcBuffer, dstImage, dstImageLayout, regionCount, pRegions);
}

VKAPI_ATTR void VKAPI_CALL vkCmdCopyImageToBuffer(VkCommandBuffer commandBuffer, VkImage srcImage, VkImageLayout srcImageLayout,
                                                  VkBuffer dstBuffer, uint32_t regionCount, const VkBufferImageCopy* pRegions) {
    return vksc::CommandBuffer::FromHandle(commandBuffer)
        ->CmdCopyImageToBuffer(srcImage, srcImageLayout, dstBuffer, regionCount, pRegions);
}

VKAPI_ATTR void VKAPI_CALL vkCmdUpdateBuffer(VkCommandBuffer commandBuffer, VkBuffer dstBuffer, VkDeviceSize dstOffset,
                                             VkDeviceSize dataSize, const void* pData) {
    return vksc::CommandBuffer::FromHandle(commandBuffer)->CmdUpdateBuffer(dstBuffer, dstOffset, dataSize, pData);
}

VKAPI_ATTR void VKAPI_CALL vkCmdFillBuffer(VkCommandBuffer commandBuffer, VkBuffer dstBuffer, VkDeviceSize dstOffset,
                                           VkDeviceSize size, uint32_t data) {
    return vksc::CommandBuffer::FromHandle(commandBuffer)->CmdFillBuffer(dstBuffer, dstOffset, size, data);
}

VKAPI_ATTR void VKAPI_CALL vkCmdClearColorImage(VkCommandBuffer commandBuffer, VkImage image, VkImageLayout imageLayout,
                                                const VkClearColorValue* pColor, uint32_t rangeCount,
                                                const VkImageSubresourceRange* pRanges) {
    return vksc::CommandBuffer::FromHandle(commandBuffer)->CmdClearColorImage(image, imageLayout, pColor, rangeCount, pRanges);
}

VKAPI_ATTR void VKAPI_CALL vkCmdClearDepthStencilImage(VkCommandBuffer commandBuffer, VkImage image, VkImageLayout imageLayout,
                                                       const VkClearDepthStencilValue* pDepthStencil, uint32_t rangeCount,
                                                       const VkImageSubresourceRange* pRanges) {
    return vksc::CommandBuffer::FromHandle(commandBuffer)
        ->CmdClearDepthStencilImage(image, imageLayout, pDepthStencil, rangeCount, pRanges);
}

VKAPI_ATTR void VKAPI_CALL vkCmdClearAttachments(VkCommandBuffer commandBuffer, uint32_t attachmentCount,
                                                 const VkClearAttachment* pAttachments, uint32_t rectCount,
                                                 const VkClearRect* pRects) {
    return vksc::CommandBuffer::FromHandle(commandBuffer)->CmdClearAttachments(attachmentCount, pAttachments, rectCount, pRects);
}

VKAPI_ATTR void VKAPI_CALL vkCmdResolveImage(VkCommandBuffer commandBuffer, VkImage srcImage, VkImageLayout srcImageLayout,
                                             VkImage dstImage, VkImageLayout dstImageLayout, uint32_t regionCount,
                                             const VkImageResolve* pRegions) {
    return vksc::CommandBuffer::FromHandle(commandBuffer)
        ->CmdResolveImage(srcImage, srcImageLayout, dstImage, dstImageLayout, regionCount, pRegions);
}

VKAPI_ATTR void VKAPI_CALL vkCmdSetEvent(VkCommandBuffer commandBuffer, VkEvent event, VkPipelineStageFlags stageMask) {
    return vksc::CommandBuffer::FromHandle(commandBuffer)->CmdSetEvent(event, stageMask);
}

VKAPI_ATTR void VKAPI_CALL vkCmdResetEvent(VkCommandBuffer commandBuffer, VkEvent event, VkPipelineStageFlags stageMask) {
    return vksc::CommandBuffer::FromHandle(commandBuffer)->CmdResetEvent(event, stageMask);
}

VKAPI_ATTR void VKAPI_CALL vkCmdWaitEvents(VkCommandBuffer commandBuffer, uint32_t eventCount, const VkEvent* pEvents,
                                           VkPipelineStageFlags srcStageMask, VkPipelineStageFlags dstStageMask,
                                           uint32_t memoryBarrierCount, const VkMemoryBarrier* pMemoryBarriers,
                                           uint32_t bufferMemoryBarrierCount, const VkBufferMemoryBarrier* pBufferMemoryBarriers,
                                           uint32_t imageMemoryBarrierCount, const VkImageMemoryBarrier* pImageMemoryBarriers) {
    return vksc::CommandBuffer::FromHandle(commandBuffer)
        ->CmdWaitEvents(eventCount, pEvents, srcStageMask, dstStageMask, memoryBarrierCount, pMemoryBarriers,
                        bufferMemoryBarrierCount, pBufferMemoryBarriers, imageMemoryBarrierCount, pImageMemoryBarriers);
}

VKAPI_ATTR void VKAPI_CALL vkCmdPipelineBarrier(VkCommandBuffer commandBuffer, VkPipelineStageFlags srcStageMask,
                                                VkPipelineStageFlags dstStageMask, VkDependencyFlags dependencyFlags,
                                                uint32_t memoryBarrierCount, const VkMemoryBarrier* pMemoryBarriers,
                                                uint32_t bufferMemoryBarrierCount,
                                                const VkBufferMemoryBarrier* pBufferMemoryBarriers,
                                                uint32_t imageMemoryBarrierCount,
                                                const VkImageMemoryBarrier* pImageMemoryBarriers) {
    return vksc::CommandBuffer::FromHandle(commandBuffer)
        ->CmdPipelineBarrier(srcStageMask, dstStageMask, dependencyFlags, memoryBarrierCount, pMemoryBarriers,
                             bufferMemoryBarrierCount, pBufferMemoryBarriers, imageMemoryBarrierCount, pImageMemoryBarriers);
}

VKAPI_ATTR void VKAPI_CALL vkCmdBeginQuery(VkCommandBuffer commandBuffer, VkQueryPool queryPool, uint32_t query,
                                           VkQueryControlFlags flags) {
    return vksc::CommandBuffer::FromHandle(commandBuffer)->CmdBeginQuery(queryPool, query, flags);
}

VKAPI_ATTR void VKAPI_CALL vkCmdEndQuery(VkCommandBuffer commandBuffer, VkQueryPool queryPool, uint32_t query) {
    return vksc::CommandBuffer::FromHandle(commandBuffer)->CmdEndQuery(queryPool, query);
}

VKAPI_ATTR void VKAPI_CALL vkCmdResetQueryPool(VkCommandBuffer commandBuffer, VkQueryPool queryPool, uint32_t firstQuery,
                                               uint32_t queryCount) {
    return vksc::CommandBuffer::FromHandle(commandBuffer)->CmdResetQueryPool(queryPool, firstQuery, queryCount);
}

VKAPI_ATTR void VKAPI_CALL vkCmdWriteTimestamp(VkCommandBuffer commandBuffer, VkPipelineStageFlagBits pipelineStage,
                                               VkQueryPool queryPool, uint32_t query) {
    return vksc::CommandBuffer::FromHandle(commandBuffer)->CmdWriteTimestamp(pipelineStage, queryPool, query);
}

VKAPI_ATTR void VKAPI_CALL vkCmdCopyQueryPoolResults(VkCommandBuffer commandBuffer, VkQueryPool queryPool, uint32_t firstQuery,
                                                     uint32_t queryCount, VkBuffer dstBuffer, VkDeviceSize dstOffset,
                                                     VkDeviceSize stride, VkQueryResultFlags flags) {
    return vksc::CommandBuffer::FromHandle(commandBuffer)
        ->CmdCopyQueryPoolResults(queryPool, firstQuery, queryCount, dstBuffer, dstOffset, stride, flags);
}

VKAPI_ATTR void VKAPI_CALL vkCmdPushConstants(VkCommandBuffer commandBuffer, VkPipelineLayout layout, VkShaderStageFlags stageFlags,
                                              uint32_t offset, uint32_t size, const void* pValues) {
    return vksc::CommandBuffer::FromHandle(commandBuffer)->CmdPushConstants(layout, stageFlags, offset, size, pValues);
}

VKAPI_ATTR void VKAPI_CALL vkCmdBeginRenderPass(VkCommandBuffer commandBuffer, const VkRenderPassBeginInfo* pRenderPassBegin,
                                                VkSubpassContents contents) {
    return vksc::CommandBuffer::FromHandle(commandBuffer)->CmdBeginRenderPass(pRenderPassBegin, contents);
}

VKAPI_ATTR void VKAPI_CALL vkCmdNextSubpass(VkCommandBuffer commandBuffer, VkSubpassContents contents) {
    return vksc::CommandBuffer::FromHandle(commandBuffer)->CmdNextSubpass(contents);
}

VKAPI_ATTR void VKAPI_CALL vkCmdEndRenderPass(VkCommandBuffer commandBuffer) {
    return vksc::CommandBuffer::FromHandle(commandBuffer)->CmdEndRenderPass();
}

VKAPI_ATTR void VKAPI_CALL vkCmdExecuteCommands(VkCommandBuffer commandBuffer, uint32_t commandBufferCount,
                                                const VkCommandBuffer* pCommandBuffers) {
    return vksc::CommandBuffer::FromHandle(commandBuffer)->CmdExecuteCommands(commandBufferCount, pCommandBuffers);
}

VKAPI_ATTR VkResult VKAPI_CALL vkBindBufferMemory2(VkDevice device, uint32_t bindInfoCount,
                                                   const VkBindBufferMemoryInfo* pBindInfos) {
    return vksc::Device::FromHandle(device)->BindBufferMemory2(bindInfoCount, pBindInfos);
}

VKAPI_ATTR VkResult VKAPI_CALL vkBindImageMemory2(VkDevice device, uint32_t bindInfoCount,
                                                  const VkBindImageMemoryInfo* pBindInfos) {
    return vksc::Device::FromHandle(device)->BindImageMemory2(bindInfoCount, pBindInfos);
}

VKAPI_ATTR void VKAPI_CALL vkGetDeviceGroupPeerMemoryFeatures(VkDevice device, uint32_t heapIndex, uint32_t localDeviceIndex,
                                                              uint32_t remoteDeviceIndex,
                                                              VkPeerMemoryFeatureFlags* pPeerMemoryFeatures) {
    return vksc::Device::FromHandle(device)->GetDeviceGroupPeerMemoryFeatures(heapIndex, localDeviceIndex, remoteDeviceIndex,
                                                                              pPeerMemoryFeatures);
}

VKAPI_ATTR void VKAPI_CALL vkCmdSetDeviceMask(VkCommandBuffer commandBuffer, uint32_t deviceMask) {
    return vksc::CommandBuffer::FromHandle(commandBuffer)->CmdSetDeviceMask(deviceMask);
}

VKAPI_ATTR void VKAPI_CALL vkCmdDispatchBase(VkCommandBuffer commandBuffer, uint32_t baseGroupX, uint32_t baseGroupY,
                                             uint32_t baseGroupZ, uint32_t groupCountX, uint32_t groupCountY,
                                             uint32_t groupCountZ) {
    return vksc::CommandBuffer::FromHandle(commandBuffer)
        ->CmdDispatchBase(baseGroupX, baseGroupY, baseGroupZ, groupCountX, groupCountY, groupCountZ);
}

VKAPI_ATTR VkResult VKAPI_CALL vkEnumeratePhysicalDeviceGroups(VkInstance instance, uint32_t* pPhysicalDeviceGroupCount,
                                                               VkPhysicalDeviceGroupProperties* pPhysicalDeviceGroupProperties) {
    return vksc::Instance::FromHandle(instance)->EnumeratePhysicalDeviceGroups(pPhysicalDeviceGroupCount,
                                                                               pPhysicalDeviceGroupProperties);
}

VKAPI_ATTR void VKAPI_CALL vkGetImageMemoryRequirements2(VkDevice device, const VkImageMemoryRequirementsInfo2* pInfo,
                                                         VkMemoryRequirements2* pMemoryRequirements) {
    return vksc::Device::FromHandle(device)->GetImageMemoryRequirements2(pInfo, pMemoryRequirements);
}

VKAPI_ATTR void VKAPI_CALL vkGetBufferMemoryRequirements2(VkDevice device, const VkBufferMemoryRequirementsInfo2* pInfo,
                                                          VkMemoryRequirements2* pMemoryRequirements) {
    return vksc::Device::FromHandle(device)->GetBufferMemoryRequirements2(pInfo, pMemoryRequirements);
}

VKAPI_ATTR void VKAPI_CALL vkGetPhysicalDeviceFeatures2(VkPhysicalDevice physicalDevice, VkPhysicalDeviceFeatures2* pFeatures) {
    return vksc::PhysicalDevice::FromHandle(physicalDevice)->GetPhysicalDeviceFeatures2(pFeatures);
}

VKAPI_ATTR void VKAPI_CALL vkGetPhysicalDeviceProperties2(VkPhysicalDevice physicalDevice,
                                                          VkPhysicalDeviceProperties2* pProperties) {
    return vksc::PhysicalDevice::FromHandle(physicalDevice)->GetPhysicalDeviceProperties2(pProperties);
}

VKAPI_ATTR void VKAPI_CALL vkGetPhysicalDeviceFormatProperties2(VkPhysicalDevice physicalDevice, VkFormat format,
                                                                VkFormatProperties2* pFormatProperties) {
    return vksc::PhysicalDevice::FromHandle(physicalDevice)->GetPhysicalDeviceFormatProperties2(format, pFormatProperties);
}

VKAPI_ATTR VkResult VKAPI_CALL vkGetPhysicalDeviceImageFormatProperties2(VkPhysicalDevice physicalDevice,
                                                                         const VkPhysicalDeviceImageFormatInfo2* pImageFormatInfo,
                                                                         VkImageFormatProperties2* pImageFormatProperties) {
    return vksc::PhysicalDevice::FromHandle(physicalDevice)
        ->GetPhysicalDeviceImageFormatProperties2(pImageFormatInfo, pImageFormatProperties);
}

VKAPI_ATTR void VKAPI_CALL vkGetPhysicalDeviceQueueFamilyProperties2(VkPhysicalDevice physicalDevice,
                                                                     uint32_t* pQueueFamilyPropertyCount,
                                                                     VkQueueFamilyProperties2* pQueueFamilyProperties) {
    return vksc::PhysicalDevice::FromHandle(physicalDevice)
        ->GetPhysicalDeviceQueueFamilyProperties2(pQueueFamilyPropertyCount, pQueueFamilyProperties);
}

VKAPI_ATTR void VKAPI_CALL vkGetPhysicalDeviceMemoryProperties2(VkPhysicalDevice physicalDevice,
                                                                VkPhysicalDeviceMemoryProperties2* pMemoryProperties) {
    return vksc::PhysicalDevice::FromHandle(physicalDevice)->GetPhysicalDeviceMemoryProperties2(pMemoryProperties);
}

VKAPI_ATTR void VKAPI_CALL vkGetDeviceQueue2(VkDevice device, const VkDeviceQueueInfo2* pQueueInfo, VkQueue* pQueue) {
    return vksc::Device::FromHandle(device)->GetDeviceQueue2(pQueueInfo, pQueue);
}

VKAPI_ATTR VkResult VKAPI_CALL vkCreateSamplerYcbcrConversion(VkDevice device,
                                                              const VkSamplerYcbcrConversionCreateInfo* pCreateInfo,
                                                              const VkAllocationCallbacks* pAllocator,
                                                              VkSamplerYcbcrConversion* pYcbcrConversion) {
    return vksc::Device::FromHandle(device)->CreateSamplerYcbcrConversion(pCreateInfo, pAllocator, pYcbcrConversion);
}

VKAPI_ATTR void VKAPI_CALL vkDestroySamplerYcbcrConversion(VkDevice device, VkSamplerYcbcrConversion ycbcrConversion,
                                                           const VkAllocationCallbacks* pAllocator) {
    return vksc::Device::FromHandle(device)->DestroySamplerYcbcrConversion(ycbcrConversion, pAllocator);
}

VKAPI_ATTR void VKAPI_CALL vkGetPhysicalDeviceExternalBufferProperties(
    VkPhysicalDevice physicalDevice, const VkPhysicalDeviceExternalBufferInfo* pExternalBufferInfo,
    VkExternalBufferProperties* pExternalBufferProperties) {
    return vksc::PhysicalDevice::FromHandle(physicalDevice)
        ->GetPhysicalDeviceExternalBufferProperties(pExternalBufferInfo, pExternalBufferProperties);
}

VKAPI_ATTR void VKAPI_CALL vkGetPhysicalDeviceExternalFenceProperties(VkPhysicalDevice physicalDevice,
                                                                      const VkPhysicalDeviceExternalFenceInfo* pExternalFenceInfo,
                                                                      VkExternalFenceProperties* pExternalFenceProperties) {
    return vksc::PhysicalDevice::FromHandle(physicalDevice)
        ->GetPhysicalDeviceExternalFenceProperties(pExternalFenceInfo, pExternalFenceProperties);
}

VKAPI_ATTR void VKAPI_CALL vkGetPhysicalDeviceExternalSemaphoreProperties(
    VkPhysicalDevice physicalDevice, const VkPhysicalDeviceExternalSemaphoreInfo* pExternalSemaphoreInfo,
    VkExternalSemaphoreProperties* pExternalSemaphoreProperties) {
    return vksc::PhysicalDevice::FromHandle(physicalDevice)
        ->GetPhysicalDeviceExternalSemaphoreProperties(pExternalSemaphoreInfo, pExternalSemaphoreProperties);
}

VKAPI_ATTR void VKAPI_CALL vkGetDescriptorSetLayoutSupport(VkDevice device, const VkDescriptorSetLayoutCreateInfo* pCreateInfo,
                                                           VkDescriptorSetLayoutSupport* pSupport) {
    return vksc::Device::FromHandle(device)->GetDescriptorSetLayoutSupport(pCreateInfo, pSupport);
}

VKAPI_ATTR void VKAPI_CALL vkCmdDrawIndirectCount(VkCommandBuffer commandBuffer, VkBuffer buffer, VkDeviceSize offset,
                                                  VkBuffer countBuffer, VkDeviceSize countBufferOffset, uint32_t maxDrawCount,
                                                  uint32_t stride) {
    return vksc::CommandBuffer::FromHandle(commandBuffer)
        ->CmdDrawIndirectCount(buffer, offset, countBuffer, countBufferOffset, maxDrawCount, stride);
}

VKAPI_ATTR void VKAPI_CALL vkCmdDrawIndexedIndirectCount(VkCommandBuffer commandBuffer, VkBuffer buffer, VkDeviceSize offset,
                                                         VkBuffer countBuffer, VkDeviceSize countBufferOffset,
                                                         uint32_t maxDrawCount, uint32_t stride) {
    return vksc::CommandBuffer::FromHandle(commandBuffer)
        ->CmdDrawIndexedIndirectCount(buffer, offset, countBuffer, countBufferOffset, maxDrawCount, stride);
}

VKAPI_ATTR VkResult VKAPI_CALL vkCreateRenderPass2(VkDevice device, const VkRenderPassCreateInfo2* pCreateInfo,
                                                   const VkAllocationCallbacks* pAllocator, VkRenderPass* pRenderPass) {
    return vksc::Device::FromHandle(device)->CreateRenderPass2(pCreateInfo, pAllocator, pRenderPass);
}

VKAPI_ATTR void VKAPI_CALL vkCmdBeginRenderPass2(VkCommandBuffer commandBuffer, const VkRenderPassBeginInfo* pRenderPassBegin,
                                                 const VkSubpassBeginInfo* pSubpassBeginInfo) {
    return vksc::CommandBuffer::FromHandle(commandBuffer)->CmdBeginRenderPass2(pRenderPassBegin, pSubpassBeginInfo);
}

VKAPI_ATTR void VKAPI_CALL vkCmdNextSubpass2(VkCommandBuffer commandBuffer, const VkSubpassBeginInfo* pSubpassBeginInfo,
                                             const VkSubpassEndInfo* pSubpassEndInfo) {
    return vksc::CommandBuffer::FromHandle(commandBuffer)->CmdNextSubpass2(pSubpassBeginInfo, pSubpassEndInfo);
}

VKAPI_ATTR void VKAPI_CALL vkCmdEndRenderPass2(VkCommandBuffer commandBuffer, const VkSubpassEndInfo* pSubpassEndInfo) {
    return vksc::CommandBuffer::FromHandle(commandBuffer)->CmdEndRenderPass2(pSubpassEndInfo);
}

VKAPI_ATTR void VKAPI_CALL vkResetQueryPool(VkDevice device, VkQueryPool queryPool, uint32_t firstQuery, uint32_t queryCount) {
    return vksc::Device::FromHandle(device)->ResetQueryPool(queryPool, firstQuery, queryCount);
}

VKAPI_ATTR VkResult VKAPI_CALL vkGetSemaphoreCounterValue(VkDevice device, VkSemaphore semaphore, uint64_t* pValue) {
    return vksc::Device::FromHandle(device)->GetSemaphoreCounterValue(semaphore, pValue);
}

VKAPI_ATTR VkResult VKAPI_CALL vkWaitSemaphores(VkDevice device, const VkSemaphoreWaitInfo* pWaitInfo, uint64_t timeout) {
    return vksc::Device::FromHandle(device)->WaitSemaphores(pWaitInfo, timeout);
}

VKAPI_ATTR VkResult VKAPI_CALL vkSignalSemaphore(VkDevice device, const VkSemaphoreSignalInfo* pSignalInfo) {
    return vksc::Device::FromHandle(device)->SignalSemaphore(pSignalInfo);
}

VKAPI_ATTR VkDeviceAddress VKAPI_CALL vkGetBufferDeviceAddress(VkDevice device, const VkBufferDeviceAddressInfo* pInfo) {
    return vksc::Device::FromHandle(device)->GetBufferDeviceAddress(pInfo);
}

VKAPI_ATTR uint64_t VKAPI_CALL vkGetBufferOpaqueCaptureAddress(VkDevice device, const VkBufferDeviceAddressInfo* pInfo) {
    return vksc::Device::FromHandle(device)->GetBufferOpaqueCaptureAddress(pInfo);
}

VKAPI_ATTR uint64_t VKAPI_CALL vkGetDeviceMemoryOpaqueCaptureAddress(VkDevice device,
                                                                     const VkDeviceMemoryOpaqueCaptureAddressInfo* pInfo) {
    return vksc::Device::FromHandle(device)->GetDeviceMemoryOpaqueCaptureAddress(pInfo);
}

VKAPI_ATTR void VKAPI_CALL vkGetCommandPoolMemoryConsumption(VkDevice device, VkCommandPool commandPool,
                                                             VkCommandBuffer commandBuffer,
                                                             VkCommandPoolMemoryConsumption* pConsumption) {
    return vksc::Device::FromHandle(device)->GetCommandPoolMemoryConsumption(commandPool, commandBuffer, pConsumption);
}

VKAPI_ATTR VkResult VKAPI_CALL vkGetFaultData(VkDevice device, VkFaultQueryBehavior faultQueryBehavior, VkBool32* pUnrecordedFaults,
                                              uint32_t* pFaultCount, VkFaultData* pFaults) {
    return vksc::Device::FromHandle(device)->GetFaultData(faultQueryBehavior, pUnrecordedFaults, pFaultCount, pFaults);
}

VKAPI_ATTR void VKAPI_CALL vkDestroySurfaceKHR(VkInstance instance, VkSurfaceKHR surface, const VkAllocationCallbacks* pAllocator) {
    return vksc::Instance::FromHandle(instance)->DestroySurfaceKHR(surface, pAllocator);
}

VKAPI_ATTR VkResult VKAPI_CALL vkGetPhysicalDeviceSurfaceSupportKHR(VkPhysicalDevice physicalDevice, uint32_t queueFamilyIndex,
                                                                    VkSurfaceKHR surface, VkBool32* pSupported) {
    return vksc::PhysicalDevice::FromHandle(physicalDevice)
        ->GetPhysicalDeviceSurfaceSupportKHR(queueFamilyIndex, surface, pSupported);
}

VKAPI_ATTR VkResult VKAPI_CALL vkGetPhysicalDeviceSurfaceCapabilitiesKHR(VkPhysicalDevice physicalDevice, VkSurfaceKHR surface,
                                                                         VkSurfaceCapabilitiesKHR* pSurfaceCapabilities) {
    return vksc::PhysicalDevice::FromHandle(physicalDevice)->GetPhysicalDeviceSurfaceCapabilitiesKHR(surface, pSurfaceCapabilities);
}

VKAPI_ATTR VkResult VKAPI_CALL vkGetPhysicalDeviceSurfaceFormatsKHR(VkPhysicalDevice physicalDevice, VkSurfaceKHR surface,
                                                                    uint32_t* pSurfaceFormatCount,
                                                                    VkSurfaceFormatKHR* pSurfaceFormats) {
    return vksc::PhysicalDevice::FromHandle(physicalDevice)
        ->GetPhysicalDeviceSurfaceFormatsKHR(surface, pSurfaceFormatCount, pSurfaceFormats);
}

VKAPI_ATTR VkResult VKAPI_CALL vkGetPhysicalDeviceSurfacePresentModesKHR(VkPhysicalDevice physicalDevice, VkSurfaceKHR surface,
                                                                         uint32_t* pPresentModeCount,
                                                                         VkPresentModeKHR* pPresentModes) {
    return vksc::PhysicalDevice::FromHandle(physicalDevice)
        ->GetPhysicalDeviceSurfacePresentModesKHR(surface, pPresentModeCount, pPresentModes);
}

VKAPI_ATTR VkResult VKAPI_CALL vkCreateSwapchainKHR(VkDevice device, const VkSwapchainCreateInfoKHR* pCreateInfo,
                                                    const VkAllocationCallbacks* pAllocator, VkSwapchainKHR* pSwapchain) {
    return vksc::Device::FromHandle(device)->CreateSwapchainKHR(pCreateInfo, pAllocator, pSwapchain);
}

VKAPI_ATTR VkResult VKAPI_CALL vkGetSwapchainImagesKHR(VkDevice device, VkSwapchainKHR swapchain, uint32_t* pSwapchainImageCount,
                                                       VkImage* pSwapchainImages) {
    return vksc::Device::FromHandle(device)->GetSwapchainImagesKHR(swapchain, pSwapchainImageCount, pSwapchainImages);
}

VKAPI_ATTR VkResult VKAPI_CALL vkAcquireNextImageKHR(VkDevice device, VkSwapchainKHR swapchain, uint64_t timeout,
                                                     VkSemaphore semaphore, VkFence fence, uint32_t* pImageIndex) {
    return vksc::Device::FromHandle(device)->AcquireNextImageKHR(swapchain, timeout, semaphore, fence, pImageIndex);
}

VKAPI_ATTR VkResult VKAPI_CALL vkQueuePresentKHR(VkQueue queue, const VkPresentInfoKHR* pPresentInfo) {
    return vksc::Queue::FromHandle(queue)->QueuePresentKHR(pPresentInfo);
}

VKAPI_ATTR VkResult VKAPI_CALL
vkGetDeviceGroupPresentCapabilitiesKHR(VkDevice device, VkDeviceGroupPresentCapabilitiesKHR* pDeviceGroupPresentCapabilities) {
    return vksc::Device::FromHandle(device)->GetDeviceGroupPresentCapabilitiesKHR(pDeviceGroupPresentCapabilities);
}

VKAPI_ATTR VkResult VKAPI_CALL vkGetDeviceGroupSurfacePresentModesKHR(VkDevice device, VkSurfaceKHR surface,
                                                                      VkDeviceGroupPresentModeFlagsKHR* pModes) {
    return vksc::Device::FromHandle(device)->GetDeviceGroupSurfacePresentModesKHR(surface, pModes);
}

VKAPI_ATTR VkResult VKAPI_CALL vkGetPhysicalDevicePresentRectanglesKHR(VkPhysicalDevice physicalDevice, VkSurfaceKHR surface,
                                                                       uint32_t* pRectCount, VkRect2D* pRects) {
    return vksc::PhysicalDevice::FromHandle(physicalDevice)->GetPhysicalDevicePresentRectanglesKHR(surface, pRectCount, pRects);
}

VKAPI_ATTR VkResult VKAPI_CALL vkAcquireNextImage2KHR(VkDevice device, const VkAcquireNextImageInfoKHR* pAcquireInfo,
                                                      uint32_t* pImageIndex) {
    return vksc::Device::FromHandle(device)->AcquireNextImage2KHR(pAcquireInfo, pImageIndex);
}

VKAPI_ATTR VkResult VKAPI_CALL vkGetPhysicalDeviceDisplayPropertiesKHR(VkPhysicalDevice physicalDevice, uint32_t* pPropertyCount,
                                                                       VkDisplayPropertiesKHR* pProperties) {
    return vksc::PhysicalDevice::FromHandle(physicalDevice)->GetPhysicalDeviceDisplayPropertiesKHR(pPropertyCount, pProperties);
}

VKAPI_ATTR VkResult VKAPI_CALL vkGetPhysicalDeviceDisplayPlanePropertiesKHR(VkPhysicalDevice physicalDevice,
                                                                            uint32_t* pPropertyCount,
                                                                            VkDisplayPlanePropertiesKHR* pProperties) {
    return vksc::PhysicalDevice::FromHandle(physicalDevice)
        ->GetPhysicalDeviceDisplayPlanePropertiesKHR(pPropertyCount, pProperties);
}

VKAPI_ATTR VkResult VKAPI_CALL vkGetDisplayPlaneSupportedDisplaysKHR(VkPhysicalDevice physicalDevice, uint32_t planeIndex,
                                                                     uint32_t* pDisplayCount, VkDisplayKHR* pDisplays) {
    return vksc::PhysicalDevice::FromHandle(physicalDevice)
        ->GetDisplayPlaneSupportedDisplaysKHR(planeIndex, pDisplayCount, pDisplays);
}

VKAPI_ATTR VkResult VKAPI_CALL vkGetDisplayModePropertiesKHR(VkPhysicalDevice physicalDevice, VkDisplayKHR display,
                                                             uint32_t* pPropertyCount, VkDisplayModePropertiesKHR* pProperties) {
    return vksc::PhysicalDevice::FromHandle(physicalDevice)->GetDisplayModePropertiesKHR(display, pPropertyCount, pProperties);
}

VKAPI_ATTR VkResult VKAPI_CALL vkCreateDisplayModeKHR(VkPhysicalDevice physicalDevice, VkDisplayKHR display,
                                                      const VkDisplayModeCreateInfoKHR* pCreateInfo,
                                                      const VkAllocationCallbacks* pAllocator, VkDisplayModeKHR* pMode) {
    return vksc::PhysicalDevice::FromHandle(physicalDevice)->CreateDisplayModeKHR(display, pCreateInfo, pAllocator, pMode);
}

VKAPI_ATTR VkResult VKAPI_CALL vkGetDisplayPlaneCapabilitiesKHR(VkPhysicalDevice physicalDevice, VkDisplayModeKHR mode,
                                                                uint32_t planeIndex, VkDisplayPlaneCapabilitiesKHR* pCapabilities) {
    return vksc::PhysicalDevice::FromHandle(physicalDevice)->GetDisplayPlaneCapabilitiesKHR(mode, planeIndex, pCapabilities);
}

VKAPI_ATTR VkResult VKAPI_CALL vkCreateDisplayPlaneSurfaceKHR(VkInstance instance, const VkDisplaySurfaceCreateInfoKHR* pCreateInfo,
                                                              const VkAllocationCallbacks* pAllocator, VkSurfaceKHR* pSurface) {
    return vksc::Instance::FromHandle(instance)->CreateDisplayPlaneSurfaceKHR(pCreateInfo, pAllocator, pSurface);
}

VKAPI_ATTR VkResult VKAPI_CALL vkCreateSharedSwapchainsKHR(VkDevice device, uint32_t swapchainCount,
                                                           const VkSwapchainCreateInfoKHR* pCreateInfos,
                                                           const VkAllocationCallbacks* pAllocator, VkSwapchainKHR* pSwapchains) {
    return vksc::Device::FromHandle(device)->CreateSharedSwapchainsKHR(swapchainCount, pCreateInfos, pAllocator, pSwapchains);
}

VKAPI_ATTR VkResult VKAPI_CALL vkGetMemoryFdKHR(VkDevice device, const VkMemoryGetFdInfoKHR* pGetFdInfo, int* pFd) {
    return vksc::Device::FromHandle(device)->GetMemoryFdKHR(pGetFdInfo, pFd);
}

VKAPI_ATTR VkResult VKAPI_CALL vkGetMemoryFdPropertiesKHR(VkDevice device, VkExternalMemoryHandleTypeFlagBits handleType, int fd,
                                                          VkMemoryFdPropertiesKHR* pMemoryFdProperties) {
    return vksc::Device::FromHandle(device)->GetMemoryFdPropertiesKHR(handleType, fd, pMemoryFdProperties);
}

VKAPI_ATTR VkResult VKAPI_CALL vkImportSemaphoreFdKHR(VkDevice device, const VkImportSemaphoreFdInfoKHR* pImportSemaphoreFdInfo) {
    return vksc::Device::FromHandle(device)->ImportSemaphoreFdKHR(pImportSemaphoreFdInfo);
}

VKAPI_ATTR VkResult VKAPI_CALL vkGetSemaphoreFdKHR(VkDevice device, const VkSemaphoreGetFdInfoKHR* pGetFdInfo, int* pFd) {
    return vksc::Device::FromHandle(device)->GetSemaphoreFdKHR(pGetFdInfo, pFd);
}

VKAPI_ATTR VkResult VKAPI_CALL vkGetSwapchainStatusKHR(VkDevice device, VkSwapchainKHR swapchain) {
    return vksc::Device::FromHandle(device)->GetSwapchainStatusKHR(swapchain);
}

VKAPI_ATTR VkResult VKAPI_CALL vkImportFenceFdKHR(VkDevice device, const VkImportFenceFdInfoKHR* pImportFenceFdInfo) {
    return vksc::Device::FromHandle(device)->ImportFenceFdKHR(pImportFenceFdInfo);
}

VKAPI_ATTR VkResult VKAPI_CALL vkGetFenceFdKHR(VkDevice device, const VkFenceGetFdInfoKHR* pGetFdInfo, int* pFd) {
    return vksc::Device::FromHandle(device)->GetFenceFdKHR(pGetFdInfo, pFd);
}

VKAPI_ATTR VkResult VKAPI_CALL vkEnumeratePhysicalDeviceQueueFamilyPerformanceQueryCountersKHR(
    VkPhysicalDevice physicalDevice, uint32_t queueFamilyIndex, uint32_t* pCounterCount, VkPerformanceCounterKHR* pCounters,
    VkPerformanceCounterDescriptionKHR* pCounterDescriptions) {
    return vksc::PhysicalDevice::FromHandle(physicalDevice)
        ->EnumeratePhysicalDeviceQueueFamilyPerformanceQueryCountersKHR(queueFamilyIndex, pCounterCount, pCounters,
                                                                        pCounterDescriptions);
}

VKAPI_ATTR void VKAPI_CALL vkGetPhysicalDeviceQueueFamilyPerformanceQueryPassesKHR(
    VkPhysicalDevice physicalDevice, const VkQueryPoolPerformanceCreateInfoKHR* pPerformanceQueryCreateInfo, uint32_t* pNumPasses) {
    return vksc::PhysicalDevice::FromHandle(physicalDevice)
        ->GetPhysicalDeviceQueueFamilyPerformanceQueryPassesKHR(pPerformanceQueryCreateInfo, pNumPasses);
}

VKAPI_ATTR VkResult VKAPI_CALL vkAcquireProfilingLockKHR(VkDevice device, const VkAcquireProfilingLockInfoKHR* pInfo) {
    return vksc::Device::FromHandle(device)->AcquireProfilingLockKHR(pInfo);
}

VKAPI_ATTR void VKAPI_CALL vkReleaseProfilingLockKHR(VkDevice device) {
    return vksc::Device::FromHandle(device)->ReleaseProfilingLockKHR();
}

VKAPI_ATTR VkResult VKAPI_CALL vkGetPhysicalDeviceSurfaceCapabilities2KHR(VkPhysicalDevice physicalDevice,
                                                                          const VkPhysicalDeviceSurfaceInfo2KHR* pSurfaceInfo,
                                                                          VkSurfaceCapabilities2KHR* pSurfaceCapabilities) {
    return vksc::PhysicalDevice::FromHandle(physicalDevice)
        ->GetPhysicalDeviceSurfaceCapabilities2KHR(pSurfaceInfo, pSurfaceCapabilities);
}

VKAPI_ATTR VkResult VKAPI_CALL vkGetPhysicalDeviceSurfaceFormats2KHR(VkPhysicalDevice physicalDevice,
                                                                     const VkPhysicalDeviceSurfaceInfo2KHR* pSurfaceInfo,
                                                                     uint32_t* pSurfaceFormatCount,
                                                                     VkSurfaceFormat2KHR* pSurfaceFormats) {
    return vksc::PhysicalDevice::FromHandle(physicalDevice)
        ->GetPhysicalDeviceSurfaceFormats2KHR(pSurfaceInfo, pSurfaceFormatCount, pSurfaceFormats);
}

VKAPI_ATTR VkResult VKAPI_CALL vkGetPhysicalDeviceDisplayProperties2KHR(VkPhysicalDevice physicalDevice, uint32_t* pPropertyCount,
                                                                        VkDisplayProperties2KHR* pProperties) {
    return vksc::PhysicalDevice::FromHandle(physicalDevice)->GetPhysicalDeviceDisplayProperties2KHR(pPropertyCount, pProperties);
}

VKAPI_ATTR VkResult VKAPI_CALL vkGetPhysicalDeviceDisplayPlaneProperties2KHR(VkPhysicalDevice physicalDevice,
                                                                             uint32_t* pPropertyCount,
                                                                             VkDisplayPlaneProperties2KHR* pProperties) {
    return vksc::PhysicalDevice::FromHandle(physicalDevice)
        ->GetPhysicalDeviceDisplayPlaneProperties2KHR(pPropertyCount, pProperties);
}

VKAPI_ATTR VkResult VKAPI_CALL vkGetDisplayModeProperties2KHR(VkPhysicalDevice physicalDevice, VkDisplayKHR display,
                                                              uint32_t* pPropertyCount, VkDisplayModeProperties2KHR* pProperties) {
    return vksc::PhysicalDevice::FromHandle(physicalDevice)->GetDisplayModeProperties2KHR(display, pPropertyCount, pProperties);
}

VKAPI_ATTR VkResult VKAPI_CALL vkGetDisplayPlaneCapabilities2KHR(VkPhysicalDevice physicalDevice,
                                                                 const VkDisplayPlaneInfo2KHR* pDisplayPlaneInfo,
                                                                 VkDisplayPlaneCapabilities2KHR* pCapabilities) {
    return vksc::PhysicalDevice::FromHandle(physicalDevice)->GetDisplayPlaneCapabilities2KHR(pDisplayPlaneInfo, pCapabilities);
}

VKAPI_ATTR VkResult VKAPI_CALL
vkGetPhysicalDeviceFragmentShadingRatesKHR(VkPhysicalDevice physicalDevice, uint32_t* pFragmentShadingRateCount,
                                           VkPhysicalDeviceFragmentShadingRateKHR* pFragmentShadingRates) {
    return vksc::PhysicalDevice::FromHandle(physicalDevice)
        ->GetPhysicalDeviceFragmentShadingRatesKHR(pFragmentShadingRateCount, pFragmentShadingRates);
}

VKAPI_ATTR void VKAPI_CALL vkCmdSetFragmentShadingRateKHR(VkCommandBuffer commandBuffer, const VkExtent2D* pFragmentSize,
                                                          const VkFragmentShadingRateCombinerOpKHR combinerOps[2]) {
    return vksc::CommandBuffer::FromHandle(commandBuffer)->CmdSetFragmentShadingRateKHR(pFragmentSize, combinerOps);
}

VKAPI_ATTR void VKAPI_CALL vkCmdRefreshObjectsKHR(VkCommandBuffer commandBuffer, const VkRefreshObjectListKHR* pRefreshObjects) {
    return vksc::CommandBuffer::FromHandle(commandBuffer)->CmdRefreshObjectsKHR(pRefreshObjects);
}

VKAPI_ATTR VkResult VKAPI_CALL vkGetPhysicalDeviceRefreshableObjectTypesKHR(VkPhysicalDevice physicalDevice,
                                                                            uint32_t* pRefreshableObjectTypeCount,
                                                                            VkObjectType* pRefreshableObjectTypes) {
    return vksc::PhysicalDevice::FromHandle(physicalDevice)
        ->GetPhysicalDeviceRefreshableObjectTypesKHR(pRefreshableObjectTypeCount, pRefreshableObjectTypes);
}

VKAPI_ATTR void VKAPI_CALL vkCmdSetEvent2KHR(VkCommandBuffer commandBuffer, VkEvent event,
                                             const VkDependencyInfo* pDependencyInfo) {
    return vksc::CommandBuffer::FromHandle(commandBuffer)->CmdSetEvent2KHR(event, pDependencyInfo);
}

VKAPI_ATTR void VKAPI_CALL vkCmdResetEvent2KHR(VkCommandBuffer commandBuffer, VkEvent event, VkPipelineStageFlags2 stageMask) {
    return vksc::CommandBuffer::FromHandle(commandBuffer)->CmdResetEvent2KHR(event, stageMask);
}

VKAPI_ATTR void VKAPI_CALL vkCmdWaitEvents2KHR(VkCommandBuffer commandBuffer, uint32_t eventCount, const VkEvent* pEvents,
                                               const VkDependencyInfo* pDependencyInfos) {
    return vksc::CommandBuffer::FromHandle(commandBuffer)->CmdWaitEvents2KHR(eventCount, pEvents, pDependencyInfos);
}

VKAPI_ATTR void VKAPI_CALL vkCmdPipelineBarrier2KHR(VkCommandBuffer commandBuffer, const VkDependencyInfo* pDependencyInfo) {
    return vksc::CommandBuffer::FromHandle(commandBuffer)->CmdPipelineBarrier2KHR(pDependencyInfo);
}

VKAPI_ATTR void VKAPI_CALL vkCmdWriteTimestamp2KHR(VkCommandBuffer commandBuffer, VkPipelineStageFlags2 stage,
                                                   VkQueryPool queryPool, uint32_t query) {
    return vksc::CommandBuffer::FromHandle(commandBuffer)->CmdWriteTimestamp2KHR(stage, queryPool, query);
}

VKAPI_ATTR VkResult VKAPI_CALL vkQueueSubmit2KHR(VkQueue queue, uint32_t submitCount, const VkSubmitInfo2* pSubmits,
                                                 VkFence fence) {
    return vksc::Queue::FromHandle(queue)->QueueSubmit2KHR(submitCount, pSubmits, fence);
}

VKAPI_ATTR void VKAPI_CALL vkCmdCopyBuffer2KHR(VkCommandBuffer commandBuffer, const VkCopyBufferInfo2* pCopyBufferInfo) {
    return vksc::CommandBuffer::FromHandle(commandBuffer)->CmdCopyBuffer2KHR(pCopyBufferInfo);
}

VKAPI_ATTR void VKAPI_CALL vkCmdCopyImage2KHR(VkCommandBuffer commandBuffer, const VkCopyImageInfo2* pCopyImageInfo) {
    return vksc::CommandBuffer::FromHandle(commandBuffer)->CmdCopyImage2KHR(pCopyImageInfo);
}

VKAPI_ATTR void VKAPI_CALL vkCmdCopyBufferToImage2KHR(VkCommandBuffer commandBuffer,
                                                      const VkCopyBufferToImageInfo2* pCopyBufferToImageInfo) {
    return vksc::CommandBuffer::FromHandle(commandBuffer)->CmdCopyBufferToImage2KHR(pCopyBufferToImageInfo);
}

VKAPI_ATTR void VKAPI_CALL vkCmdCopyImageToBuffer2KHR(VkCommandBuffer commandBuffer,
                                                      const VkCopyImageToBufferInfo2* pCopyImageToBufferInfo) {
    return vksc::CommandBuffer::FromHandle(commandBuffer)->CmdCopyImageToBuffer2KHR(pCopyImageToBufferInfo);
}

VKAPI_ATTR void VKAPI_CALL vkCmdBlitImage2KHR(VkCommandBuffer commandBuffer, const VkBlitImageInfo2* pBlitImageInfo) {
    return vksc::CommandBuffer::FromHandle(commandBuffer)->CmdBlitImage2KHR(pBlitImageInfo);
}

VKAPI_ATTR void VKAPI_CALL vkCmdResolveImage2KHR(VkCommandBuffer commandBuffer, const VkResolveImageInfo2* pResolveImageInfo) {
    return vksc::CommandBuffer::FromHandle(commandBuffer)->CmdResolveImage2KHR(pResolveImageInfo);
}

VKAPI_ATTR void VKAPI_CALL vkCmdSetLineStippleKHR(VkCommandBuffer commandBuffer, uint32_t lineStippleFactor,
                                                  uint16_t lineStipplePattern) {
    return vksc::CommandBuffer::FromHandle(commandBuffer)->CmdSetLineStippleKHR(lineStippleFactor, lineStipplePattern);
}

VKAPI_ATTR VkResult VKAPI_CALL vkGetPhysicalDeviceCalibrateableTimeDomainsKHR(VkPhysicalDevice physicalDevice,
                                                                              uint32_t* pTimeDomainCount,
                                                                              VkTimeDomainKHR* pTimeDomains) {
    return vksc::PhysicalDevice::FromHandle(physicalDevice)
        ->GetPhysicalDeviceCalibrateableTimeDomainsKHR(pTimeDomainCount, pTimeDomains);
}

VKAPI_ATTR VkResult VKAPI_CALL vkGetCalibratedTimestampsKHR(VkDevice device, uint32_t timestampCount,
                                                            const VkCalibratedTimestampInfoKHR* pTimestampInfos,
                                                            uint64_t* pTimestamps, uint64_t* pMaxDeviation) {
    return vksc::Device::FromHandle(device)->GetCalibratedTimestampsKHR(timestampCount, pTimestampInfos, pTimestamps,
                                                                        pMaxDeviation);
}

VKAPI_ATTR VkResult VKAPI_CALL vkReleaseDisplayEXT(VkPhysicalDevice physicalDevice, VkDisplayKHR display) {
    return vksc::PhysicalDevice::FromHandle(physicalDevice)->ReleaseDisplayEXT(display);
}

VKAPI_ATTR VkResult VKAPI_CALL vkGetPhysicalDeviceSurfaceCapabilities2EXT(VkPhysicalDevice physicalDevice, VkSurfaceKHR surface,
                                                                          VkSurfaceCapabilities2EXT* pSurfaceCapabilities) {
    return vksc::PhysicalDevice::FromHandle(physicalDevice)
        ->GetPhysicalDeviceSurfaceCapabilities2EXT(surface, pSurfaceCapabilities);
}

VKAPI_ATTR VkResult VKAPI_CALL vkDisplayPowerControlEXT(VkDevice device, VkDisplayKHR display,
                                                        const VkDisplayPowerInfoEXT* pDisplayPowerInfo) {
    return vksc::Device::FromHandle(device)->DisplayPowerControlEXT(display, pDisplayPowerInfo);
}

VKAPI_ATTR VkResult VKAPI_CALL vkRegisterDeviceEventEXT(VkDevice device, const VkDeviceEventInfoEXT* pDeviceEventInfo,
                                                        const VkAllocationCallbacks* pAllocator, VkFence* pFence) {
    return vksc::Device::FromHandle(device)->RegisterDeviceEventEXT(pDeviceEventInfo, pAllocator, pFence);
}

VKAPI_ATTR VkResult VKAPI_CALL vkRegisterDisplayEventEXT(VkDevice device, VkDisplayKHR display,
                                                         const VkDisplayEventInfoEXT* pDisplayEventInfo,
                                                         const VkAllocationCallbacks* pAllocator, VkFence* pFence) {
    return vksc::Device::FromHandle(device)->RegisterDisplayEventEXT(display, pDisplayEventInfo, pAllocator, pFence);
}

VKAPI_ATTR VkResult VKAPI_CALL vkGetSwapchainCounterEXT(VkDevice device, VkSwapchainKHR swapchain,
                                                        VkSurfaceCounterFlagBitsEXT counter, uint64_t* pCounterValue) {
    return vksc::Device::FromHandle(device)->GetSwapchainCounterEXT(swapchain, counter, pCounterValue);
}

VKAPI_ATTR void VKAPI_CALL vkCmdSetDiscardRectangleEXT(VkCommandBuffer commandBuffer, uint32_t firstDiscardRectangle,
                                                       uint32_t discardRectangleCount, const VkRect2D* pDiscardRectangles) {
    return vksc::CommandBuffer::FromHandle(commandBuffer)
        ->CmdSetDiscardRectangleEXT(firstDiscardRectangle, discardRectangleCount, pDiscardRectangles);
}

VKAPI_ATTR void VKAPI_CALL vkCmdSetDiscardRectangleEnableEXT(VkCommandBuffer commandBuffer, VkBool32 discardRectangleEnable) {
    return vksc::CommandBuffer::FromHandle(commandBuffer)->CmdSetDiscardRectangleEnableEXT(discardRectangleEnable);
}

VKAPI_ATTR void VKAPI_CALL vkCmdSetDiscardRectangleModeEXT(VkCommandBuffer commandBuffer,
                                                           VkDiscardRectangleModeEXT discardRectangleMode) {
    return vksc::CommandBuffer::FromHandle(commandBuffer)->CmdSetDiscardRectangleModeEXT(discardRectangleMode);
}

VKAPI_ATTR void VKAPI_CALL vkSetHdrMetadataEXT(VkDevice device, uint32_t swapchainCount, const VkSwapchainKHR* pSwapchains,
                                               const VkHdrMetadataEXT* pMetadata) {
    return vksc::Device::FromHandle(device)->SetHdrMetadataEXT(swapchainCount, pSwapchains, pMetadata);
}

VKAPI_ATTR VkResult VKAPI_CALL vkSetDebugUtilsObjectNameEXT(VkDevice device, const VkDebugUtilsObjectNameInfoEXT* pNameInfo) {
    return vksc::Device::FromHandle(device)->SetDebugUtilsObjectNameEXT(pNameInfo);
}

VKAPI_ATTR VkResult VKAPI_CALL vkSetDebugUtilsObjectTagEXT(VkDevice device, const VkDebugUtilsObjectTagInfoEXT* pTagInfo) {
    return vksc::Device::FromHandle(device)->SetDebugUtilsObjectTagEXT(pTagInfo);
}

VKAPI_ATTR void VKAPI_CALL vkQueueBeginDebugUtilsLabelEXT(VkQueue queue, const VkDebugUtilsLabelEXT* pLabelInfo) {
    return vksc::Queue::FromHandle(queue)->QueueBeginDebugUtilsLabelEXT(pLabelInfo);
}

VKAPI_ATTR void VKAPI_CALL vkQueueEndDebugUtilsLabelEXT(VkQueue queue) {
    return vksc::Queue::FromHandle(queue)->QueueEndDebugUtilsLabelEXT();
}

VKAPI_ATTR void VKAPI_CALL vkQueueInsertDebugUtilsLabelEXT(VkQueue queue, const VkDebugUtilsLabelEXT* pLabelInfo) {
    return vksc::Queue::FromHandle(queue)->QueueInsertDebugUtilsLabelEXT(pLabelInfo);
}

VKAPI_ATTR void VKAPI_CALL vkCmdBeginDebugUtilsLabelEXT(VkCommandBuffer commandBuffer, const VkDebugUtilsLabelEXT* pLabelInfo) {
    return vksc::CommandBuffer::FromHandle(commandBuffer)->CmdBeginDebugUtilsLabelEXT(pLabelInfo);
}

VKAPI_ATTR void VKAPI_CALL vkCmdEndDebugUtilsLabelEXT(VkCommandBuffer commandBuffer) {
    return vksc::CommandBuffer::FromHandle(commandBuffer)->CmdEndDebugUtilsLabelEXT();
}

VKAPI_ATTR void VKAPI_CALL vkCmdInsertDebugUtilsLabelEXT(VkCommandBuffer commandBuffer, const VkDebugUtilsLabelEXT* pLabelInfo) {
    return vksc::CommandBuffer::FromHandle(commandBuffer)->CmdInsertDebugUtilsLabelEXT(pLabelInfo);
}

VKAPI_ATTR VkResult VKAPI_CALL vkCreateDebugUtilsMessengerEXT(VkInstance instance,
                                                              const VkDebugUtilsMessengerCreateInfoEXT* pCreateInfo,
                                                              const VkAllocationCallbacks* pAllocator,
                                                              VkDebugUtilsMessengerEXT* pMessenger) {
    return vksc::Instance::FromHandle(instance)->CreateDebugUtilsMessengerEXT(pCreateInfo, pAllocator, pMessenger);
}

VKAPI_ATTR void VKAPI_CALL vkDestroyDebugUtilsMessengerEXT(VkInstance instance, VkDebugUtilsMessengerEXT messenger,
                                                           const VkAllocationCallbacks* pAllocator) {
    return vksc::Instance::FromHandle(instance)->DestroyDebugUtilsMessengerEXT(messenger, pAllocator);
}

VKAPI_ATTR void VKAPI_CALL vkSubmitDebugUtilsMessageEXT(VkInstance instance, VkDebugUtilsMessageSeverityFlagBitsEXT messageSeverity,
                                                        VkDebugUtilsMessageTypeFlagsEXT messageTypes,
                                                        const VkDebugUtilsMessengerCallbackDataEXT* pCallbackData) {
    return vksc::Instance::FromHandle(instance)->SubmitDebugUtilsMessageEXT(messageSeverity, messageTypes, pCallbackData);
}

VKAPI_ATTR void VKAPI_CALL vkCmdSetSampleLocationsEXT(VkCommandBuffer commandBuffer,
                                                      const VkSampleLocationsInfoEXT* pSampleLocationsInfo) {
    return vksc::CommandBuffer::FromHandle(commandBuffer)->CmdSetSampleLocationsEXT(pSampleLocationsInfo);
}

VKAPI_ATTR void VKAPI_CALL vkGetPhysicalDeviceMultisamplePropertiesEXT(VkPhysicalDevice physicalDevice,
                                                                       VkSampleCountFlagBits samples,
                                                                       VkMultisamplePropertiesEXT* pMultisampleProperties) {
    return vksc::PhysicalDevice::FromHandle(physicalDevice)
        ->GetPhysicalDeviceMultisamplePropertiesEXT(samples, pMultisampleProperties);
}

VKAPI_ATTR VkResult VKAPI_CALL vkGetImageDrmFormatModifierPropertiesEXT(VkDevice device, VkImage image,
                                                                        VkImageDrmFormatModifierPropertiesEXT* pProperties) {
    return vksc::Device::FromHandle(device)->GetImageDrmFormatModifierPropertiesEXT(image, pProperties);
}

VKAPI_ATTR VkResult VKAPI_CALL vkGetMemoryHostPointerPropertiesEXT(VkDevice device, VkExternalMemoryHandleTypeFlagBits handleType,
                                                                   const void* pHostPointer,
                                                                   VkMemoryHostPointerPropertiesEXT* pMemoryHostPointerProperties) {
    return vksc::Device::FromHandle(device)->GetMemoryHostPointerPropertiesEXT(handleType, pHostPointer,
                                                                               pMemoryHostPointerProperties);
}

VKAPI_ATTR VkResult VKAPI_CALL vkCreateHeadlessSurfaceEXT(VkInstance instance, const VkHeadlessSurfaceCreateInfoEXT* pCreateInfo,
                                                          const VkAllocationCallbacks* pAllocator, VkSurfaceKHR* pSurface) {
    return vksc::Instance::FromHandle(instance)->CreateHeadlessSurfaceEXT(pCreateInfo, pAllocator, pSurface);
}

VKAPI_ATTR void VKAPI_CALL vkCmdSetLineStippleEXT(VkCommandBuffer commandBuffer, uint32_t lineStippleFactor,
                                                  uint16_t lineStipplePattern) {
    return vksc::CommandBuffer::FromHandle(commandBuffer)->CmdSetLineStippleEXT(lineStippleFactor, lineStipplePattern);
}

VKAPI_ATTR void VKAPI_CALL vkCmdSetCullModeEXT(VkCommandBuffer commandBuffer, VkCullModeFlags cullMode) {
    return vksc::CommandBuffer::FromHandle(commandBuffer)->CmdSetCullModeEXT(cullMode);
}

VKAPI_ATTR void VKAPI_CALL vkCmdSetFrontFaceEXT(VkCommandBuffer commandBuffer, VkFrontFace frontFace) {
    return vksc::CommandBuffer::FromHandle(commandBuffer)->CmdSetFrontFaceEXT(frontFace);
}

VKAPI_ATTR void VKAPI_CALL vkCmdSetPrimitiveTopologyEXT(VkCommandBuffer commandBuffer, VkPrimitiveTopology primitiveTopology) {
    return vksc::CommandBuffer::FromHandle(commandBuffer)->CmdSetPrimitiveTopologyEXT(primitiveTopology);
}

VKAPI_ATTR void VKAPI_CALL vkCmdSetViewportWithCountEXT(VkCommandBuffer commandBuffer, uint32_t viewportCount,
                                                        const VkViewport* pViewports) {
    return vksc::CommandBuffer::FromHandle(commandBuffer)->CmdSetViewportWithCountEXT(viewportCount, pViewports);
}

VKAPI_ATTR void VKAPI_CALL vkCmdSetScissorWithCountEXT(VkCommandBuffer commandBuffer, uint32_t scissorCount,
                                                       const VkRect2D* pScissors) {
    return vksc::CommandBuffer::FromHandle(commandBuffer)->CmdSetScissorWithCountEXT(scissorCount, pScissors);
}

VKAPI_ATTR void VKAPI_CALL vkCmdBindVertexBuffers2EXT(VkCommandBuffer commandBuffer, uint32_t firstBinding, uint32_t bindingCount,
                                                      const VkBuffer* pBuffers, const VkDeviceSize* pOffsets,
                                                      const VkDeviceSize* pSizes, const VkDeviceSize* pStrides) {
    return vksc::CommandBuffer::FromHandle(commandBuffer)
        ->CmdBindVertexBuffers2EXT(firstBinding, bindingCount, pBuffers, pOffsets, pSizes, pStrides);
}

VKAPI_ATTR void VKAPI_CALL vkCmdSetDepthTestEnableEXT(VkCommandBuffer commandBuffer, VkBool32 depthTestEnable) {
    return vksc::CommandBuffer::FromHandle(commandBuffer)->CmdSetDepthTestEnableEXT(depthTestEnable);
}

VKAPI_ATTR void VKAPI_CALL vkCmdSetDepthWriteEnableEXT(VkCommandBuffer commandBuffer, VkBool32 depthWriteEnable) {
    return vksc::CommandBuffer::FromHandle(commandBuffer)->CmdSetDepthWriteEnableEXT(depthWriteEnable);
}

VKAPI_ATTR void VKAPI_CALL vkCmdSetDepthCompareOpEXT(VkCommandBuffer commandBuffer, VkCompareOp depthCompareOp) {
    return vksc::CommandBuffer::FromHandle(commandBuffer)->CmdSetDepthCompareOpEXT(depthCompareOp);
}

VKAPI_ATTR void VKAPI_CALL vkCmdSetDepthBoundsTestEnableEXT(VkCommandBuffer commandBuffer, VkBool32 depthBoundsTestEnable) {
    return vksc::CommandBuffer::FromHandle(commandBuffer)->CmdSetDepthBoundsTestEnableEXT(depthBoundsTestEnable);
}

VKAPI_ATTR void VKAPI_CALL vkCmdSetStencilTestEnableEXT(VkCommandBuffer commandBuffer, VkBool32 stencilTestEnable) {
    return vksc::CommandBuffer::FromHandle(commandBuffer)->CmdSetStencilTestEnableEXT(stencilTestEnable);
}

VKAPI_ATTR void VKAPI_CALL vkCmdSetStencilOpEXT(VkCommandBuffer commandBuffer, VkStencilFaceFlags faceMask, VkStencilOp failOp,
                                                VkStencilOp passOp, VkStencilOp depthFailOp, VkCompareOp compareOp) {
    return vksc::CommandBuffer::FromHandle(commandBuffer)->CmdSetStencilOpEXT(faceMask, failOp, passOp, depthFailOp, compareOp);
}

#ifdef VK_USE_PLATFORM_WIN32_KHR
VKAPI_ATTR VkResult VKAPI_CALL vkAcquireWinrtDisplayNV(VkPhysicalDevice physicalDevice, VkDisplayKHR display) {
    return vksc::PhysicalDevice::FromHandle(physicalDevice)->AcquireWinrtDisplayNV(display);
}

VKAPI_ATTR VkResult VKAPI_CALL vkGetWinrtDisplayNV(VkPhysicalDevice physicalDevice, uint32_t deviceRelativeId,
                                                   VkDisplayKHR* pDisplay) {
    return vksc::PhysicalDevice::FromHandle(physicalDevice)->GetWinrtDisplayNV(deviceRelativeId, pDisplay);
}

#endif  // VK_USE_PLATFORM_WIN32_KHR
VKAPI_ATTR void VKAPI_CALL vkCmdSetVertexInputEXT(VkCommandBuffer commandBuffer, uint32_t vertexBindingDescriptionCount,
                                                  const VkVertexInputBindingDescription2EXT* pVertexBindingDescriptions,
                                                  uint32_t vertexAttributeDescriptionCount,
                                                  const VkVertexInputAttributeDescription2EXT* pVertexAttributeDescriptions) {
    return vksc::CommandBuffer::FromHandle(commandBuffer)
        ->CmdSetVertexInputEXT(vertexBindingDescriptionCount, pVertexBindingDescriptions, vertexAttributeDescriptionCount,
                               pVertexAttributeDescriptions);
}

#ifdef VK_USE_PLATFORM_SCI
VKAPI_ATTR VkResult VKAPI_CALL vkGetFenceSciSyncFenceNV(VkDevice device, const VkFenceGetSciSyncInfoNV* pGetSciSyncHandleInfo,
                                                        void* pHandle) {
    return vksc::Device::FromHandle(device)->GetFenceSciSyncFenceNV(pGetSciSyncHandleInfo, pHandle);
}

VKAPI_ATTR VkResult VKAPI_CALL vkGetFenceSciSyncObjNV(VkDevice device, const VkFenceGetSciSyncInfoNV* pGetSciSyncHandleInfo,
                                                      void* pHandle) {
    return vksc::Device::FromHandle(device)->GetFenceSciSyncObjNV(pGetSciSyncHandleInfo, pHandle);
}

VKAPI_ATTR VkResult VKAPI_CALL vkImportFenceSciSyncFenceNV(VkDevice device,
                                                           const VkImportFenceSciSyncInfoNV* pImportFenceSciSyncInfo) {
    return vksc::Device::FromHandle(device)->ImportFenceSciSyncFenceNV(pImportFenceSciSyncInfo);
}

VKAPI_ATTR VkResult VKAPI_CALL vkImportFenceSciSyncObjNV(VkDevice device,
                                                         const VkImportFenceSciSyncInfoNV* pImportFenceSciSyncInfo) {
    return vksc::Device::FromHandle(device)->ImportFenceSciSyncObjNV(pImportFenceSciSyncInfo);
}

VKAPI_ATTR VkResult VKAPI_CALL vkGetPhysicalDeviceSciSyncAttributesNV(VkPhysicalDevice physicalDevice,
                                                                      const VkSciSyncAttributesInfoNV* pSciSyncAttributesInfo,
                                                                      NvSciSyncAttrList pAttributes) {
    return vksc::PhysicalDevice::FromHandle(physicalDevice)
        ->GetPhysicalDeviceSciSyncAttributesNV(pSciSyncAttributesInfo, pAttributes);
}

VKAPI_ATTR VkResult VKAPI_CALL vkGetSemaphoreSciSyncObjNV(VkDevice device, const VkSemaphoreGetSciSyncInfoNV* pGetSciSyncInfo,
                                                          void* pHandle) {
    return vksc::Device::FromHandle(device)->GetSemaphoreSciSyncObjNV(pGetSciSyncInfo, pHandle);
}

VKAPI_ATTR VkResult VKAPI_CALL vkImportSemaphoreSciSyncObjNV(VkDevice device,
                                                             const VkImportSemaphoreSciSyncInfoNV* pImportSemaphoreSciSyncInfo) {
    return vksc::Device::FromHandle(device)->ImportSemaphoreSciSyncObjNV(pImportSemaphoreSciSyncInfo);
}

VKAPI_ATTR VkResult VKAPI_CALL vkGetMemorySciBufNV(VkDevice device, const VkMemoryGetSciBufInfoNV* pGetSciBufInfo,
                                                   NvSciBufObj* pHandle) {
    return vksc::Device::FromHandle(device)->GetMemorySciBufNV(pGetSciBufInfo, pHandle);
}

VKAPI_ATTR VkResult VKAPI_CALL
vkGetPhysicalDeviceExternalMemorySciBufPropertiesNV(VkPhysicalDevice physicalDevice, VkExternalMemoryHandleTypeFlagBits handleType,
                                                    NvSciBufObj handle, VkMemorySciBufPropertiesNV* pMemorySciBufProperties) {
    return vksc::PhysicalDevice::FromHandle(physicalDevice)
        ->GetPhysicalDeviceExternalMemorySciBufPropertiesNV(handleType, handle, pMemorySciBufProperties);
}

VKAPI_ATTR VkResult VKAPI_CALL vkGetPhysicalDeviceSciBufAttributesNV(VkPhysicalDevice physicalDevice,
                                                                     NvSciBufAttrList pAttributes) {
    return vksc::PhysicalDevice::FromHandle(physicalDevice)->GetPhysicalDeviceSciBufAttributesNV(pAttributes);
}

#endif  // VK_USE_PLATFORM_SCI
VKAPI_ATTR void VKAPI_CALL vkCmdSetPatchControlPointsEXT(VkCommandBuffer commandBuffer, uint32_t patchControlPoints) {
    return vksc::CommandBuffer::FromHandle(commandBuffer)->CmdSetPatchControlPointsEXT(patchControlPoints);
}

VKAPI_ATTR void VKAPI_CALL vkCmdSetRasterizerDiscardEnableEXT(VkCommandBuffer commandBuffer, VkBool32 rasterizerDiscardEnable) {
    return vksc::CommandBuffer::FromHandle(commandBuffer)->CmdSetRasterizerDiscardEnableEXT(rasterizerDiscardEnable);
}

VKAPI_ATTR void VKAPI_CALL vkCmdSetDepthBiasEnableEXT(VkCommandBuffer commandBuffer, VkBool32 depthBiasEnable) {
    return vksc::CommandBuffer::FromHandle(commandBuffer)->CmdSetDepthBiasEnableEXT(depthBiasEnable);
}

VKAPI_ATTR void VKAPI_CALL vkCmdSetLogicOpEXT(VkCommandBuffer commandBuffer, VkLogicOp logicOp) {
    return vksc::CommandBuffer::FromHandle(commandBuffer)->CmdSetLogicOpEXT(logicOp);
}

VKAPI_ATTR void VKAPI_CALL vkCmdSetPrimitiveRestartEnableEXT(VkCommandBuffer commandBuffer, VkBool32 primitiveRestartEnable) {
    return vksc::CommandBuffer::FromHandle(commandBuffer)->CmdSetPrimitiveRestartEnableEXT(primitiveRestartEnable);
}

VKAPI_ATTR void VKAPI_CALL vkCmdSetColorWriteEnableEXT(VkCommandBuffer commandBuffer, uint32_t attachmentCount,
                                                       const VkBool32* pColorWriteEnables) {
    return vksc::CommandBuffer::FromHandle(commandBuffer)->CmdSetColorWriteEnableEXT(attachmentCount, pColorWriteEnables);
}

#ifdef VK_USE_PLATFORM_SCI
VKAPI_ATTR VkResult VKAPI_CALL vkCreateSemaphoreSciSyncPoolNV(VkDevice device,
                                                              const VkSemaphoreSciSyncPoolCreateInfoNV* pCreateInfo,
                                                              const VkAllocationCallbacks* pAllocator,
                                                              VkSemaphoreSciSyncPoolNV* pSemaphorePool) {
    return vksc::Device::FromHandle(device)->CreateSemaphoreSciSyncPoolNV(pCreateInfo, pAllocator, pSemaphorePool);
}

#endif  // VK_USE_PLATFORM_SCI
#ifdef VK_USE_PLATFORM_SCREEN_QNX
VKAPI_ATTR VkResult VKAPI_CALL vkGetScreenBufferPropertiesQNX(VkDevice device, const struct _screen_buffer* buffer,
                                                              VkScreenBufferPropertiesQNX* pProperties) {
    return vksc::Device::FromHandle(device)->GetScreenBufferPropertiesQNX(buffer, pProperties);
}

#endif  // VK_USE_PLATFORM_SCREEN_QNX

}  // extern "C"

// NOLINTEND
