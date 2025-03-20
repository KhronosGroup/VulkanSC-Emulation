// *** THIS FILE IS GENERATED - DO NOT EDIT ***
// See test_vkmock_framework_generator.py for modifications

/*
 * Copyright (c) 2024 The Khronos Group Inc.
 * Copyright (c) 2024 RasterGrid Kft.
 *
 * SPDX-License-Identifier: Apache-2.0
 */
// NOLINTBEGIN

#include "test_vkmock_framework.h"

#include <string.h>

extern "C" VKAPI_ATTR PFN_vkVoidFunction VKAPI_CALL vkmockGetProcAddr(const char* pName) { return vkmock::GetProcAddr(pName); }

static VKAPI_ATTR VkResult VKAPI_CALL vkmock_CreateInstance(const VkInstanceCreateInfo* pCreateInfo,
                                                            const VkAllocationCallbacks* pAllocator, VkInstance* pInstance) {
    return vkmock::CreateInstance(pCreateInfo, pAllocator, pInstance);
}

static VKAPI_ATTR void VKAPI_CALL vkmock_DestroyInstance(VkInstance instance, const VkAllocationCallbacks* pAllocator) {
    return vkmock::DestroyInstance(instance, pAllocator);
}

static VKAPI_ATTR VkResult VKAPI_CALL vkmock_EnumeratePhysicalDevices(VkInstance instance, uint32_t* pPhysicalDeviceCount,
                                                                      VkPhysicalDevice* pPhysicalDevices) {
    return vkmock::EnumeratePhysicalDevices(instance, pPhysicalDeviceCount, pPhysicalDevices);
}

static VKAPI_ATTR void VKAPI_CALL vkmock_GetPhysicalDeviceFeatures(VkPhysicalDevice physicalDevice,
                                                                   VkPhysicalDeviceFeatures* pFeatures) {
    return vkmock::GetPhysicalDeviceFeatures(physicalDevice, pFeatures);
}

static VKAPI_ATTR void VKAPI_CALL vkmock_GetPhysicalDeviceFormatProperties(VkPhysicalDevice physicalDevice, VkFormat format,
                                                                           VkFormatProperties* pFormatProperties) {
    return vkmock::GetPhysicalDeviceFormatProperties(physicalDevice, format, pFormatProperties);
}

static VKAPI_ATTR VkResult VKAPI_CALL vkmock_GetPhysicalDeviceImageFormatProperties(
    VkPhysicalDevice physicalDevice, VkFormat format, VkImageType type, VkImageTiling tiling, VkImageUsageFlags usage,
    VkImageCreateFlags flags, VkImageFormatProperties* pImageFormatProperties) {
    return vkmock::GetPhysicalDeviceImageFormatProperties(physicalDevice, format, type, tiling, usage, flags,
                                                          pImageFormatProperties);
}

static VKAPI_ATTR void VKAPI_CALL vkmock_GetPhysicalDeviceProperties(VkPhysicalDevice physicalDevice,
                                                                     VkPhysicalDeviceProperties* pProperties) {
    return vkmock::GetPhysicalDeviceProperties(physicalDevice, pProperties);
}

static VKAPI_ATTR void VKAPI_CALL vkmock_GetPhysicalDeviceQueueFamilyProperties(VkPhysicalDevice physicalDevice,
                                                                                uint32_t* pQueueFamilyPropertyCount,
                                                                                VkQueueFamilyProperties* pQueueFamilyProperties) {
    return vkmock::GetPhysicalDeviceQueueFamilyProperties(physicalDevice, pQueueFamilyPropertyCount, pQueueFamilyProperties);
}

static VKAPI_ATTR void VKAPI_CALL vkmock_GetPhysicalDeviceMemoryProperties(VkPhysicalDevice physicalDevice,
                                                                           VkPhysicalDeviceMemoryProperties* pMemoryProperties) {
    return vkmock::GetPhysicalDeviceMemoryProperties(physicalDevice, pMemoryProperties);
}

static VKAPI_ATTR PFN_vkVoidFunction VKAPI_CALL vkmock_GetInstanceProcAddr(VkInstance instance, const char* pName) {
    return vkmock::GetInstanceProcAddr(instance, pName);
}

static VKAPI_ATTR PFN_vkVoidFunction VKAPI_CALL vkmock_GetDeviceProcAddr(VkDevice device, const char* pName) {
    return vkmock::GetDeviceProcAddr(device, pName);
}

static VKAPI_ATTR VkResult VKAPI_CALL vkmock_CreateDevice(VkPhysicalDevice physicalDevice, const VkDeviceCreateInfo* pCreateInfo,
                                                          const VkAllocationCallbacks* pAllocator, VkDevice* pDevice) {
    return vkmock::CreateDevice(physicalDevice, pCreateInfo, pAllocator, pDevice);
}

static VKAPI_ATTR void VKAPI_CALL vkmock_DestroyDevice(VkDevice device, const VkAllocationCallbacks* pAllocator) {
    return vkmock::DestroyDevice(device, pAllocator);
}

static VKAPI_ATTR VkResult VKAPI_CALL vkmock_EnumerateInstanceExtensionProperties(const char* pLayerName, uint32_t* pPropertyCount,
                                                                                  VkExtensionProperties* pProperties) {
    return vkmock::EnumerateInstanceExtensionProperties(pLayerName, pPropertyCount, pProperties);
}

static VKAPI_ATTR VkResult VKAPI_CALL vkmock_EnumerateDeviceExtensionProperties(VkPhysicalDevice physicalDevice,
                                                                                const char* pLayerName, uint32_t* pPropertyCount,
                                                                                VkExtensionProperties* pProperties) {
    return vkmock::EnumerateDeviceExtensionProperties(physicalDevice, pLayerName, pPropertyCount, pProperties);
}

static VKAPI_ATTR VkResult VKAPI_CALL vkmock_EnumerateInstanceLayerProperties(uint32_t* pPropertyCount,
                                                                              VkLayerProperties* pProperties) {
    return vkmock::EnumerateInstanceLayerProperties(pPropertyCount, pProperties);
}

static VKAPI_ATTR VkResult VKAPI_CALL vkmock_EnumerateDeviceLayerProperties(VkPhysicalDevice physicalDevice,
                                                                            uint32_t* pPropertyCount,
                                                                            VkLayerProperties* pProperties) {
    return vkmock::EnumerateDeviceLayerProperties(physicalDevice, pPropertyCount, pProperties);
}

static VKAPI_ATTR void VKAPI_CALL vkmock_GetDeviceQueue(VkDevice device, uint32_t queueFamilyIndex, uint32_t queueIndex,
                                                        VkQueue* pQueue) {
    return vkmock::GetDeviceQueue(device, queueFamilyIndex, queueIndex, pQueue);
}

static VKAPI_ATTR VkResult VKAPI_CALL vkmock_QueueSubmit(VkQueue queue, uint32_t submitCount, const VkSubmitInfo* pSubmits,
                                                         VkFence fence) {
    return vkmock::QueueSubmit(queue, submitCount, pSubmits, fence);
}

static VKAPI_ATTR VkResult VKAPI_CALL vkmock_QueueWaitIdle(VkQueue queue) { return vkmock::QueueWaitIdle(queue); }

static VKAPI_ATTR VkResult VKAPI_CALL vkmock_DeviceWaitIdle(VkDevice device) { return vkmock::DeviceWaitIdle(device); }

static VKAPI_ATTR VkResult VKAPI_CALL vkmock_AllocateMemory(VkDevice device, const VkMemoryAllocateInfo* pAllocateInfo,
                                                            const VkAllocationCallbacks* pAllocator, VkDeviceMemory* pMemory) {
    return vkmock::AllocateMemory(device, pAllocateInfo, pAllocator, pMemory);
}

static VKAPI_ATTR void VKAPI_CALL vkmock_FreeMemory(VkDevice device, VkDeviceMemory memory,
                                                    const VkAllocationCallbacks* pAllocator) {
    return vkmock::FreeMemory(device, memory, pAllocator);
}

static VKAPI_ATTR VkResult VKAPI_CALL vkmock_MapMemory(VkDevice device, VkDeviceMemory memory, VkDeviceSize offset,
                                                       VkDeviceSize size, VkMemoryMapFlags flags, void** ppData) {
    return vkmock::MapMemory(device, memory, offset, size, flags, ppData);
}

static VKAPI_ATTR void VKAPI_CALL vkmock_UnmapMemory(VkDevice device, VkDeviceMemory memory) {
    return vkmock::UnmapMemory(device, memory);
}

static VKAPI_ATTR VkResult VKAPI_CALL vkmock_FlushMappedMemoryRanges(VkDevice device, uint32_t memoryRangeCount,
                                                                     const VkMappedMemoryRange* pMemoryRanges) {
    return vkmock::FlushMappedMemoryRanges(device, memoryRangeCount, pMemoryRanges);
}

static VKAPI_ATTR VkResult VKAPI_CALL vkmock_InvalidateMappedMemoryRanges(VkDevice device, uint32_t memoryRangeCount,
                                                                          const VkMappedMemoryRange* pMemoryRanges) {
    return vkmock::InvalidateMappedMemoryRanges(device, memoryRangeCount, pMemoryRanges);
}

static VKAPI_ATTR void VKAPI_CALL vkmock_GetDeviceMemoryCommitment(VkDevice device, VkDeviceMemory memory,
                                                                   VkDeviceSize* pCommittedMemoryInBytes) {
    return vkmock::GetDeviceMemoryCommitment(device, memory, pCommittedMemoryInBytes);
}

static VKAPI_ATTR VkResult VKAPI_CALL vkmock_BindBufferMemory(VkDevice device, VkBuffer buffer, VkDeviceMemory memory,
                                                              VkDeviceSize memoryOffset) {
    return vkmock::BindBufferMemory(device, buffer, memory, memoryOffset);
}

static VKAPI_ATTR VkResult VKAPI_CALL vkmock_BindImageMemory(VkDevice device, VkImage image, VkDeviceMemory memory,
                                                             VkDeviceSize memoryOffset) {
    return vkmock::BindImageMemory(device, image, memory, memoryOffset);
}

static VKAPI_ATTR void VKAPI_CALL vkmock_GetBufferMemoryRequirements(VkDevice device, VkBuffer buffer,
                                                                     VkMemoryRequirements* pMemoryRequirements) {
    return vkmock::GetBufferMemoryRequirements(device, buffer, pMemoryRequirements);
}

static VKAPI_ATTR void VKAPI_CALL vkmock_GetImageMemoryRequirements(VkDevice device, VkImage image,
                                                                    VkMemoryRequirements* pMemoryRequirements) {
    return vkmock::GetImageMemoryRequirements(device, image, pMemoryRequirements);
}

static VKAPI_ATTR void VKAPI_CALL
vkmock_GetImageSparseMemoryRequirements(VkDevice device, VkImage image, uint32_t* pSparseMemoryRequirementCount,
                                        VkSparseImageMemoryRequirements* pSparseMemoryRequirements) {
    return vkmock::GetImageSparseMemoryRequirements(device, image, pSparseMemoryRequirementCount, pSparseMemoryRequirements);
}

static VKAPI_ATTR void VKAPI_CALL vkmock_GetPhysicalDeviceSparseImageFormatProperties(
    VkPhysicalDevice physicalDevice, VkFormat format, VkImageType type, VkSampleCountFlagBits samples, VkImageUsageFlags usage,
    VkImageTiling tiling, uint32_t* pPropertyCount, VkSparseImageFormatProperties* pProperties) {
    return vkmock::GetPhysicalDeviceSparseImageFormatProperties(physicalDevice, format, type, samples, usage, tiling,
                                                                pPropertyCount, pProperties);
}

static VKAPI_ATTR VkResult VKAPI_CALL vkmock_QueueBindSparse(VkQueue queue, uint32_t bindInfoCount,
                                                             const VkBindSparseInfo* pBindInfo, VkFence fence) {
    return vkmock::QueueBindSparse(queue, bindInfoCount, pBindInfo, fence);
}

static VKAPI_ATTR VkResult VKAPI_CALL vkmock_CreateFence(VkDevice device, const VkFenceCreateInfo* pCreateInfo,
                                                         const VkAllocationCallbacks* pAllocator, VkFence* pFence) {
    return vkmock::CreateFence(device, pCreateInfo, pAllocator, pFence);
}

static VKAPI_ATTR void VKAPI_CALL vkmock_DestroyFence(VkDevice device, VkFence fence, const VkAllocationCallbacks* pAllocator) {
    return vkmock::DestroyFence(device, fence, pAllocator);
}

static VKAPI_ATTR VkResult VKAPI_CALL vkmock_ResetFences(VkDevice device, uint32_t fenceCount, const VkFence* pFences) {
    return vkmock::ResetFences(device, fenceCount, pFences);
}

static VKAPI_ATTR VkResult VKAPI_CALL vkmock_GetFenceStatus(VkDevice device, VkFence fence) {
    return vkmock::GetFenceStatus(device, fence);
}

static VKAPI_ATTR VkResult VKAPI_CALL vkmock_WaitForFences(VkDevice device, uint32_t fenceCount, const VkFence* pFences,
                                                           VkBool32 waitAll, uint64_t timeout) {
    return vkmock::WaitForFences(device, fenceCount, pFences, waitAll, timeout);
}

static VKAPI_ATTR VkResult VKAPI_CALL vkmock_CreateSemaphore(VkDevice device, const VkSemaphoreCreateInfo* pCreateInfo,
                                                             const VkAllocationCallbacks* pAllocator, VkSemaphore* pSemaphore) {
    return vkmock::CreateSemaphore(device, pCreateInfo, pAllocator, pSemaphore);
}

static VKAPI_ATTR void VKAPI_CALL vkmock_DestroySemaphore(VkDevice device, VkSemaphore semaphore,
                                                          const VkAllocationCallbacks* pAllocator) {
    return vkmock::DestroySemaphore(device, semaphore, pAllocator);
}

static VKAPI_ATTR VkResult VKAPI_CALL vkmock_CreateEvent(VkDevice device, const VkEventCreateInfo* pCreateInfo,
                                                         const VkAllocationCallbacks* pAllocator, VkEvent* pEvent) {
    return vkmock::CreateEvent(device, pCreateInfo, pAllocator, pEvent);
}

static VKAPI_ATTR void VKAPI_CALL vkmock_DestroyEvent(VkDevice device, VkEvent event, const VkAllocationCallbacks* pAllocator) {
    return vkmock::DestroyEvent(device, event, pAllocator);
}

static VKAPI_ATTR VkResult VKAPI_CALL vkmock_GetEventStatus(VkDevice device, VkEvent event) {
    return vkmock::GetEventStatus(device, event);
}

static VKAPI_ATTR VkResult VKAPI_CALL vkmock_SetEvent(VkDevice device, VkEvent event) { return vkmock::SetEvent(device, event); }

static VKAPI_ATTR VkResult VKAPI_CALL vkmock_ResetEvent(VkDevice device, VkEvent event) {
    return vkmock::ResetEvent(device, event);
}

static VKAPI_ATTR VkResult VKAPI_CALL vkmock_CreateQueryPool(VkDevice device, const VkQueryPoolCreateInfo* pCreateInfo,
                                                             const VkAllocationCallbacks* pAllocator, VkQueryPool* pQueryPool) {
    return vkmock::CreateQueryPool(device, pCreateInfo, pAllocator, pQueryPool);
}

static VKAPI_ATTR void VKAPI_CALL vkmock_DestroyQueryPool(VkDevice device, VkQueryPool queryPool,
                                                          const VkAllocationCallbacks* pAllocator) {
    return vkmock::DestroyQueryPool(device, queryPool, pAllocator);
}

static VKAPI_ATTR VkResult VKAPI_CALL vkmock_GetQueryPoolResults(VkDevice device, VkQueryPool queryPool, uint32_t firstQuery,
                                                                 uint32_t queryCount, size_t dataSize, void* pData,
                                                                 VkDeviceSize stride, VkQueryResultFlags flags) {
    return vkmock::GetQueryPoolResults(device, queryPool, firstQuery, queryCount, dataSize, pData, stride, flags);
}

static VKAPI_ATTR VkResult VKAPI_CALL vkmock_CreateBuffer(VkDevice device, const VkBufferCreateInfo* pCreateInfo,
                                                          const VkAllocationCallbacks* pAllocator, VkBuffer* pBuffer) {
    return vkmock::CreateBuffer(device, pCreateInfo, pAllocator, pBuffer);
}

static VKAPI_ATTR void VKAPI_CALL vkmock_DestroyBuffer(VkDevice device, VkBuffer buffer, const VkAllocationCallbacks* pAllocator) {
    return vkmock::DestroyBuffer(device, buffer, pAllocator);
}

static VKAPI_ATTR VkResult VKAPI_CALL vkmock_CreateBufferView(VkDevice device, const VkBufferViewCreateInfo* pCreateInfo,
                                                              const VkAllocationCallbacks* pAllocator, VkBufferView* pView) {
    return vkmock::CreateBufferView(device, pCreateInfo, pAllocator, pView);
}

static VKAPI_ATTR void VKAPI_CALL vkmock_DestroyBufferView(VkDevice device, VkBufferView bufferView,
                                                           const VkAllocationCallbacks* pAllocator) {
    return vkmock::DestroyBufferView(device, bufferView, pAllocator);
}

static VKAPI_ATTR VkResult VKAPI_CALL vkmock_CreateImage(VkDevice device, const VkImageCreateInfo* pCreateInfo,
                                                         const VkAllocationCallbacks* pAllocator, VkImage* pImage) {
    return vkmock::CreateImage(device, pCreateInfo, pAllocator, pImage);
}

static VKAPI_ATTR void VKAPI_CALL vkmock_DestroyImage(VkDevice device, VkImage image, const VkAllocationCallbacks* pAllocator) {
    return vkmock::DestroyImage(device, image, pAllocator);
}

static VKAPI_ATTR void VKAPI_CALL vkmock_GetImageSubresourceLayout(VkDevice device, VkImage image,
                                                                   const VkImageSubresource* pSubresource,
                                                                   VkSubresourceLayout* pLayout) {
    return vkmock::GetImageSubresourceLayout(device, image, pSubresource, pLayout);
}

static VKAPI_ATTR VkResult VKAPI_CALL vkmock_CreateImageView(VkDevice device, const VkImageViewCreateInfo* pCreateInfo,
                                                             const VkAllocationCallbacks* pAllocator, VkImageView* pView) {
    return vkmock::CreateImageView(device, pCreateInfo, pAllocator, pView);
}

static VKAPI_ATTR void VKAPI_CALL vkmock_DestroyImageView(VkDevice device, VkImageView imageView,
                                                          const VkAllocationCallbacks* pAllocator) {
    return vkmock::DestroyImageView(device, imageView, pAllocator);
}

static VKAPI_ATTR VkResult VKAPI_CALL vkmock_CreateShaderModule(VkDevice device, const VkShaderModuleCreateInfo* pCreateInfo,
                                                                const VkAllocationCallbacks* pAllocator,
                                                                VkShaderModule* pShaderModule) {
    return vkmock::CreateShaderModule(device, pCreateInfo, pAllocator, pShaderModule);
}

static VKAPI_ATTR void VKAPI_CALL vkmock_DestroyShaderModule(VkDevice device, VkShaderModule shaderModule,
                                                             const VkAllocationCallbacks* pAllocator) {
    return vkmock::DestroyShaderModule(device, shaderModule, pAllocator);
}

static VKAPI_ATTR VkResult VKAPI_CALL vkmock_CreatePipelineCache(VkDevice device, const VkPipelineCacheCreateInfo* pCreateInfo,
                                                                 const VkAllocationCallbacks* pAllocator,
                                                                 VkPipelineCache* pPipelineCache) {
    return vkmock::CreatePipelineCache(device, pCreateInfo, pAllocator, pPipelineCache);
}

static VKAPI_ATTR void VKAPI_CALL vkmock_DestroyPipelineCache(VkDevice device, VkPipelineCache pipelineCache,
                                                              const VkAllocationCallbacks* pAllocator) {
    return vkmock::DestroyPipelineCache(device, pipelineCache, pAllocator);
}

static VKAPI_ATTR VkResult VKAPI_CALL vkmock_GetPipelineCacheData(VkDevice device, VkPipelineCache pipelineCache, size_t* pDataSize,
                                                                  void* pData) {
    return vkmock::GetPipelineCacheData(device, pipelineCache, pDataSize, pData);
}

static VKAPI_ATTR VkResult VKAPI_CALL vkmock_MergePipelineCaches(VkDevice device, VkPipelineCache dstCache, uint32_t srcCacheCount,
                                                                 const VkPipelineCache* pSrcCaches) {
    return vkmock::MergePipelineCaches(device, dstCache, srcCacheCount, pSrcCaches);
}

static VKAPI_ATTR VkResult VKAPI_CALL vkmock_CreateGraphicsPipelines(VkDevice device, VkPipelineCache pipelineCache,
                                                                     uint32_t createInfoCount,
                                                                     const VkGraphicsPipelineCreateInfo* pCreateInfos,
                                                                     const VkAllocationCallbacks* pAllocator,
                                                                     VkPipeline* pPipelines) {
    return vkmock::CreateGraphicsPipelines(device, pipelineCache, createInfoCount, pCreateInfos, pAllocator, pPipelines);
}

static VKAPI_ATTR VkResult VKAPI_CALL vkmock_CreateComputePipelines(VkDevice device, VkPipelineCache pipelineCache,
                                                                    uint32_t createInfoCount,
                                                                    const VkComputePipelineCreateInfo* pCreateInfos,
                                                                    const VkAllocationCallbacks* pAllocator,
                                                                    VkPipeline* pPipelines) {
    return vkmock::CreateComputePipelines(device, pipelineCache, createInfoCount, pCreateInfos, pAllocator, pPipelines);
}

static VKAPI_ATTR void VKAPI_CALL vkmock_DestroyPipeline(VkDevice device, VkPipeline pipeline,
                                                         const VkAllocationCallbacks* pAllocator) {
    return vkmock::DestroyPipeline(device, pipeline, pAllocator);
}

static VKAPI_ATTR VkResult VKAPI_CALL vkmock_CreatePipelineLayout(VkDevice device, const VkPipelineLayoutCreateInfo* pCreateInfo,
                                                                  const VkAllocationCallbacks* pAllocator,
                                                                  VkPipelineLayout* pPipelineLayout) {
    return vkmock::CreatePipelineLayout(device, pCreateInfo, pAllocator, pPipelineLayout);
}

static VKAPI_ATTR void VKAPI_CALL vkmock_DestroyPipelineLayout(VkDevice device, VkPipelineLayout pipelineLayout,
                                                               const VkAllocationCallbacks* pAllocator) {
    return vkmock::DestroyPipelineLayout(device, pipelineLayout, pAllocator);
}

static VKAPI_ATTR VkResult VKAPI_CALL vkmock_CreateSampler(VkDevice device, const VkSamplerCreateInfo* pCreateInfo,
                                                           const VkAllocationCallbacks* pAllocator, VkSampler* pSampler) {
    return vkmock::CreateSampler(device, pCreateInfo, pAllocator, pSampler);
}

static VKAPI_ATTR void VKAPI_CALL vkmock_DestroySampler(VkDevice device, VkSampler sampler,
                                                        const VkAllocationCallbacks* pAllocator) {
    return vkmock::DestroySampler(device, sampler, pAllocator);
}

static VKAPI_ATTR VkResult VKAPI_CALL vkmock_CreateDescriptorSetLayout(VkDevice device,
                                                                       const VkDescriptorSetLayoutCreateInfo* pCreateInfo,
                                                                       const VkAllocationCallbacks* pAllocator,
                                                                       VkDescriptorSetLayout* pSetLayout) {
    return vkmock::CreateDescriptorSetLayout(device, pCreateInfo, pAllocator, pSetLayout);
}

static VKAPI_ATTR void VKAPI_CALL vkmock_DestroyDescriptorSetLayout(VkDevice device, VkDescriptorSetLayout descriptorSetLayout,
                                                                    const VkAllocationCallbacks* pAllocator) {
    return vkmock::DestroyDescriptorSetLayout(device, descriptorSetLayout, pAllocator);
}

static VKAPI_ATTR VkResult VKAPI_CALL vkmock_CreateDescriptorPool(VkDevice device, const VkDescriptorPoolCreateInfo* pCreateInfo,
                                                                  const VkAllocationCallbacks* pAllocator,
                                                                  VkDescriptorPool* pDescriptorPool) {
    return vkmock::CreateDescriptorPool(device, pCreateInfo, pAllocator, pDescriptorPool);
}

static VKAPI_ATTR void VKAPI_CALL vkmock_DestroyDescriptorPool(VkDevice device, VkDescriptorPool descriptorPool,
                                                               const VkAllocationCallbacks* pAllocator) {
    return vkmock::DestroyDescriptorPool(device, descriptorPool, pAllocator);
}

static VKAPI_ATTR VkResult VKAPI_CALL vkmock_ResetDescriptorPool(VkDevice device, VkDescriptorPool descriptorPool,
                                                                 VkDescriptorPoolResetFlags flags) {
    return vkmock::ResetDescriptorPool(device, descriptorPool, flags);
}

static VKAPI_ATTR VkResult VKAPI_CALL vkmock_AllocateDescriptorSets(VkDevice device,
                                                                    const VkDescriptorSetAllocateInfo* pAllocateInfo,
                                                                    VkDescriptorSet* pDescriptorSets) {
    return vkmock::AllocateDescriptorSets(device, pAllocateInfo, pDescriptorSets);
}

static VKAPI_ATTR VkResult VKAPI_CALL vkmock_FreeDescriptorSets(VkDevice device, VkDescriptorPool descriptorPool,
                                                                uint32_t descriptorSetCount,
                                                                const VkDescriptorSet* pDescriptorSets) {
    return vkmock::FreeDescriptorSets(device, descriptorPool, descriptorSetCount, pDescriptorSets);
}

static VKAPI_ATTR void VKAPI_CALL vkmock_UpdateDescriptorSets(VkDevice device, uint32_t descriptorWriteCount,
                                                              const VkWriteDescriptorSet* pDescriptorWrites,
                                                              uint32_t descriptorCopyCount,
                                                              const VkCopyDescriptorSet* pDescriptorCopies) {
    return vkmock::UpdateDescriptorSets(device, descriptorWriteCount, pDescriptorWrites, descriptorCopyCount, pDescriptorCopies);
}

static VKAPI_ATTR VkResult VKAPI_CALL vkmock_CreateFramebuffer(VkDevice device, const VkFramebufferCreateInfo* pCreateInfo,
                                                               const VkAllocationCallbacks* pAllocator,
                                                               VkFramebuffer* pFramebuffer) {
    return vkmock::CreateFramebuffer(device, pCreateInfo, pAllocator, pFramebuffer);
}

static VKAPI_ATTR void VKAPI_CALL vkmock_DestroyFramebuffer(VkDevice device, VkFramebuffer framebuffer,
                                                            const VkAllocationCallbacks* pAllocator) {
    return vkmock::DestroyFramebuffer(device, framebuffer, pAllocator);
}

static VKAPI_ATTR VkResult VKAPI_CALL vkmock_CreateRenderPass(VkDevice device, const VkRenderPassCreateInfo* pCreateInfo,
                                                              const VkAllocationCallbacks* pAllocator, VkRenderPass* pRenderPass) {
    return vkmock::CreateRenderPass(device, pCreateInfo, pAllocator, pRenderPass);
}

static VKAPI_ATTR void VKAPI_CALL vkmock_DestroyRenderPass(VkDevice device, VkRenderPass renderPass,
                                                           const VkAllocationCallbacks* pAllocator) {
    return vkmock::DestroyRenderPass(device, renderPass, pAllocator);
}

static VKAPI_ATTR void VKAPI_CALL vkmock_GetRenderAreaGranularity(VkDevice device, VkRenderPass renderPass,
                                                                  VkExtent2D* pGranularity) {
    return vkmock::GetRenderAreaGranularity(device, renderPass, pGranularity);
}

static VKAPI_ATTR VkResult VKAPI_CALL vkmock_CreateCommandPool(VkDevice device, const VkCommandPoolCreateInfo* pCreateInfo,
                                                               const VkAllocationCallbacks* pAllocator,
                                                               VkCommandPool* pCommandPool) {
    return vkmock::CreateCommandPool(device, pCreateInfo, pAllocator, pCommandPool);
}

static VKAPI_ATTR void VKAPI_CALL vkmock_DestroyCommandPool(VkDevice device, VkCommandPool commandPool,
                                                            const VkAllocationCallbacks* pAllocator) {
    return vkmock::DestroyCommandPool(device, commandPool, pAllocator);
}

static VKAPI_ATTR VkResult VKAPI_CALL vkmock_ResetCommandPool(VkDevice device, VkCommandPool commandPool,
                                                              VkCommandPoolResetFlags flags) {
    return vkmock::ResetCommandPool(device, commandPool, flags);
}

static VKAPI_ATTR VkResult VKAPI_CALL vkmock_AllocateCommandBuffers(VkDevice device,
                                                                    const VkCommandBufferAllocateInfo* pAllocateInfo,
                                                                    VkCommandBuffer* pCommandBuffers) {
    return vkmock::AllocateCommandBuffers(device, pAllocateInfo, pCommandBuffers);
}

static VKAPI_ATTR void VKAPI_CALL vkmock_FreeCommandBuffers(VkDevice device, VkCommandPool commandPool, uint32_t commandBufferCount,
                                                            const VkCommandBuffer* pCommandBuffers) {
    return vkmock::FreeCommandBuffers(device, commandPool, commandBufferCount, pCommandBuffers);
}

static VKAPI_ATTR VkResult VKAPI_CALL vkmock_BeginCommandBuffer(VkCommandBuffer commandBuffer,
                                                                const VkCommandBufferBeginInfo* pBeginInfo) {
    return vkmock::BeginCommandBuffer(commandBuffer, pBeginInfo);
}

static VKAPI_ATTR VkResult VKAPI_CALL vkmock_EndCommandBuffer(VkCommandBuffer commandBuffer) {
    return vkmock::EndCommandBuffer(commandBuffer);
}

static VKAPI_ATTR VkResult VKAPI_CALL vkmock_ResetCommandBuffer(VkCommandBuffer commandBuffer, VkCommandBufferResetFlags flags) {
    return vkmock::ResetCommandBuffer(commandBuffer, flags);
}

static VKAPI_ATTR void VKAPI_CALL vkmock_CmdBindPipeline(VkCommandBuffer commandBuffer, VkPipelineBindPoint pipelineBindPoint,
                                                         VkPipeline pipeline) {
    return vkmock::CmdBindPipeline(commandBuffer, pipelineBindPoint, pipeline);
}

static VKAPI_ATTR void VKAPI_CALL vkmock_CmdSetViewport(VkCommandBuffer commandBuffer, uint32_t firstViewport,
                                                        uint32_t viewportCount, const VkViewport* pViewports) {
    return vkmock::CmdSetViewport(commandBuffer, firstViewport, viewportCount, pViewports);
}

static VKAPI_ATTR void VKAPI_CALL vkmock_CmdSetScissor(VkCommandBuffer commandBuffer, uint32_t firstScissor, uint32_t scissorCount,
                                                       const VkRect2D* pScissors) {
    return vkmock::CmdSetScissor(commandBuffer, firstScissor, scissorCount, pScissors);
}

static VKAPI_ATTR void VKAPI_CALL vkmock_CmdSetLineWidth(VkCommandBuffer commandBuffer, float lineWidth) {
    return vkmock::CmdSetLineWidth(commandBuffer, lineWidth);
}

static VKAPI_ATTR void VKAPI_CALL vkmock_CmdSetDepthBias(VkCommandBuffer commandBuffer, float depthBiasConstantFactor,
                                                         float depthBiasClamp, float depthBiasSlopeFactor) {
    return vkmock::CmdSetDepthBias(commandBuffer, depthBiasConstantFactor, depthBiasClamp, depthBiasSlopeFactor);
}

static VKAPI_ATTR void VKAPI_CALL vkmock_CmdSetBlendConstants(VkCommandBuffer commandBuffer, const float blendConstants[4]) {
    return vkmock::CmdSetBlendConstants(commandBuffer, blendConstants);
}

static VKAPI_ATTR void VKAPI_CALL vkmock_CmdSetDepthBounds(VkCommandBuffer commandBuffer, float minDepthBounds,
                                                           float maxDepthBounds) {
    return vkmock::CmdSetDepthBounds(commandBuffer, minDepthBounds, maxDepthBounds);
}

static VKAPI_ATTR void VKAPI_CALL vkmock_CmdSetStencilCompareMask(VkCommandBuffer commandBuffer, VkStencilFaceFlags faceMask,
                                                                  uint32_t compareMask) {
    return vkmock::CmdSetStencilCompareMask(commandBuffer, faceMask, compareMask);
}

static VKAPI_ATTR void VKAPI_CALL vkmock_CmdSetStencilWriteMask(VkCommandBuffer commandBuffer, VkStencilFaceFlags faceMask,
                                                                uint32_t writeMask) {
    return vkmock::CmdSetStencilWriteMask(commandBuffer, faceMask, writeMask);
}

static VKAPI_ATTR void VKAPI_CALL vkmock_CmdSetStencilReference(VkCommandBuffer commandBuffer, VkStencilFaceFlags faceMask,
                                                                uint32_t reference) {
    return vkmock::CmdSetStencilReference(commandBuffer, faceMask, reference);
}

static VKAPI_ATTR void VKAPI_CALL vkmock_CmdBindDescriptorSets(VkCommandBuffer commandBuffer, VkPipelineBindPoint pipelineBindPoint,
                                                               VkPipelineLayout layout, uint32_t firstSet,
                                                               uint32_t descriptorSetCount, const VkDescriptorSet* pDescriptorSets,
                                                               uint32_t dynamicOffsetCount, const uint32_t* pDynamicOffsets) {
    return vkmock::CmdBindDescriptorSets(commandBuffer, pipelineBindPoint, layout, firstSet, descriptorSetCount, pDescriptorSets,
                                         dynamicOffsetCount, pDynamicOffsets);
}

static VKAPI_ATTR void VKAPI_CALL vkmock_CmdBindIndexBuffer(VkCommandBuffer commandBuffer, VkBuffer buffer, VkDeviceSize offset,
                                                            VkIndexType indexType) {
    return vkmock::CmdBindIndexBuffer(commandBuffer, buffer, offset, indexType);
}

static VKAPI_ATTR void VKAPI_CALL vkmock_CmdBindVertexBuffers(VkCommandBuffer commandBuffer, uint32_t firstBinding,
                                                              uint32_t bindingCount, const VkBuffer* pBuffers,
                                                              const VkDeviceSize* pOffsets) {
    return vkmock::CmdBindVertexBuffers(commandBuffer, firstBinding, bindingCount, pBuffers, pOffsets);
}

static VKAPI_ATTR void VKAPI_CALL vkmock_CmdDraw(VkCommandBuffer commandBuffer, uint32_t vertexCount, uint32_t instanceCount,
                                                 uint32_t firstVertex, uint32_t firstInstance) {
    return vkmock::CmdDraw(commandBuffer, vertexCount, instanceCount, firstVertex, firstInstance);
}

static VKAPI_ATTR void VKAPI_CALL vkmock_CmdDrawIndexed(VkCommandBuffer commandBuffer, uint32_t indexCount, uint32_t instanceCount,
                                                        uint32_t firstIndex, int32_t vertexOffset, uint32_t firstInstance) {
    return vkmock::CmdDrawIndexed(commandBuffer, indexCount, instanceCount, firstIndex, vertexOffset, firstInstance);
}

static VKAPI_ATTR void VKAPI_CALL vkmock_CmdDrawIndirect(VkCommandBuffer commandBuffer, VkBuffer buffer, VkDeviceSize offset,
                                                         uint32_t drawCount, uint32_t stride) {
    return vkmock::CmdDrawIndirect(commandBuffer, buffer, offset, drawCount, stride);
}

static VKAPI_ATTR void VKAPI_CALL vkmock_CmdDrawIndexedIndirect(VkCommandBuffer commandBuffer, VkBuffer buffer, VkDeviceSize offset,
                                                                uint32_t drawCount, uint32_t stride) {
    return vkmock::CmdDrawIndexedIndirect(commandBuffer, buffer, offset, drawCount, stride);
}

static VKAPI_ATTR void VKAPI_CALL vkmock_CmdDispatch(VkCommandBuffer commandBuffer, uint32_t groupCountX, uint32_t groupCountY,
                                                     uint32_t groupCountZ) {
    return vkmock::CmdDispatch(commandBuffer, groupCountX, groupCountY, groupCountZ);
}

static VKAPI_ATTR void VKAPI_CALL vkmock_CmdDispatchIndirect(VkCommandBuffer commandBuffer, VkBuffer buffer, VkDeviceSize offset) {
    return vkmock::CmdDispatchIndirect(commandBuffer, buffer, offset);
}

static VKAPI_ATTR void VKAPI_CALL vkmock_CmdCopyBuffer(VkCommandBuffer commandBuffer, VkBuffer srcBuffer, VkBuffer dstBuffer,
                                                       uint32_t regionCount, const VkBufferCopy* pRegions) {
    return vkmock::CmdCopyBuffer(commandBuffer, srcBuffer, dstBuffer, regionCount, pRegions);
}

static VKAPI_ATTR void VKAPI_CALL vkmock_CmdCopyImage(VkCommandBuffer commandBuffer, VkImage srcImage, VkImageLayout srcImageLayout,
                                                      VkImage dstImage, VkImageLayout dstImageLayout, uint32_t regionCount,
                                                      const VkImageCopy* pRegions) {
    return vkmock::CmdCopyImage(commandBuffer, srcImage, srcImageLayout, dstImage, dstImageLayout, regionCount, pRegions);
}

static VKAPI_ATTR void VKAPI_CALL vkmock_CmdBlitImage(VkCommandBuffer commandBuffer, VkImage srcImage, VkImageLayout srcImageLayout,
                                                      VkImage dstImage, VkImageLayout dstImageLayout, uint32_t regionCount,
                                                      const VkImageBlit* pRegions, VkFilter filter) {
    return vkmock::CmdBlitImage(commandBuffer, srcImage, srcImageLayout, dstImage, dstImageLayout, regionCount, pRegions, filter);
}

static VKAPI_ATTR void VKAPI_CALL vkmock_CmdCopyBufferToImage(VkCommandBuffer commandBuffer, VkBuffer srcBuffer, VkImage dstImage,
                                                              VkImageLayout dstImageLayout, uint32_t regionCount,
                                                              const VkBufferImageCopy* pRegions) {
    return vkmock::CmdCopyBufferToImage(commandBuffer, srcBuffer, dstImage, dstImageLayout, regionCount, pRegions);
}

static VKAPI_ATTR void VKAPI_CALL vkmock_CmdCopyImageToBuffer(VkCommandBuffer commandBuffer, VkImage srcImage,
                                                              VkImageLayout srcImageLayout, VkBuffer dstBuffer,
                                                              uint32_t regionCount, const VkBufferImageCopy* pRegions) {
    return vkmock::CmdCopyImageToBuffer(commandBuffer, srcImage, srcImageLayout, dstBuffer, regionCount, pRegions);
}

static VKAPI_ATTR void VKAPI_CALL vkmock_CmdUpdateBuffer(VkCommandBuffer commandBuffer, VkBuffer dstBuffer, VkDeviceSize dstOffset,
                                                         VkDeviceSize dataSize, const void* pData) {
    return vkmock::CmdUpdateBuffer(commandBuffer, dstBuffer, dstOffset, dataSize, pData);
}

static VKAPI_ATTR void VKAPI_CALL vkmock_CmdFillBuffer(VkCommandBuffer commandBuffer, VkBuffer dstBuffer, VkDeviceSize dstOffset,
                                                       VkDeviceSize size, uint32_t data) {
    return vkmock::CmdFillBuffer(commandBuffer, dstBuffer, dstOffset, size, data);
}

static VKAPI_ATTR void VKAPI_CALL vkmock_CmdClearColorImage(VkCommandBuffer commandBuffer, VkImage image, VkImageLayout imageLayout,
                                                            const VkClearColorValue* pColor, uint32_t rangeCount,
                                                            const VkImageSubresourceRange* pRanges) {
    return vkmock::CmdClearColorImage(commandBuffer, image, imageLayout, pColor, rangeCount, pRanges);
}

static VKAPI_ATTR void VKAPI_CALL vkmock_CmdClearDepthStencilImage(VkCommandBuffer commandBuffer, VkImage image,
                                                                   VkImageLayout imageLayout,
                                                                   const VkClearDepthStencilValue* pDepthStencil,
                                                                   uint32_t rangeCount, const VkImageSubresourceRange* pRanges) {
    return vkmock::CmdClearDepthStencilImage(commandBuffer, image, imageLayout, pDepthStencil, rangeCount, pRanges);
}

static VKAPI_ATTR void VKAPI_CALL vkmock_CmdClearAttachments(VkCommandBuffer commandBuffer, uint32_t attachmentCount,
                                                             const VkClearAttachment* pAttachments, uint32_t rectCount,
                                                             const VkClearRect* pRects) {
    return vkmock::CmdClearAttachments(commandBuffer, attachmentCount, pAttachments, rectCount, pRects);
}

static VKAPI_ATTR void VKAPI_CALL vkmock_CmdResolveImage(VkCommandBuffer commandBuffer, VkImage srcImage,
                                                         VkImageLayout srcImageLayout, VkImage dstImage,
                                                         VkImageLayout dstImageLayout, uint32_t regionCount,
                                                         const VkImageResolve* pRegions) {
    return vkmock::CmdResolveImage(commandBuffer, srcImage, srcImageLayout, dstImage, dstImageLayout, regionCount, pRegions);
}

static VKAPI_ATTR void VKAPI_CALL vkmock_CmdSetEvent(VkCommandBuffer commandBuffer, VkEvent event, VkPipelineStageFlags stageMask) {
    return vkmock::CmdSetEvent(commandBuffer, event, stageMask);
}

static VKAPI_ATTR void VKAPI_CALL vkmock_CmdResetEvent(VkCommandBuffer commandBuffer, VkEvent event,
                                                       VkPipelineStageFlags stageMask) {
    return vkmock::CmdResetEvent(commandBuffer, event, stageMask);
}

static VKAPI_ATTR void VKAPI_CALL vkmock_CmdWaitEvents(VkCommandBuffer commandBuffer, uint32_t eventCount, const VkEvent* pEvents,
                                                       VkPipelineStageFlags srcStageMask, VkPipelineStageFlags dstStageMask,
                                                       uint32_t memoryBarrierCount, const VkMemoryBarrier* pMemoryBarriers,
                                                       uint32_t bufferMemoryBarrierCount,
                                                       const VkBufferMemoryBarrier* pBufferMemoryBarriers,
                                                       uint32_t imageMemoryBarrierCount,
                                                       const VkImageMemoryBarrier* pImageMemoryBarriers) {
    return vkmock::CmdWaitEvents(commandBuffer, eventCount, pEvents, srcStageMask, dstStageMask, memoryBarrierCount,
                                 pMemoryBarriers, bufferMemoryBarrierCount, pBufferMemoryBarriers, imageMemoryBarrierCount,
                                 pImageMemoryBarriers);
}

static VKAPI_ATTR void VKAPI_CALL vkmock_CmdPipelineBarrier(VkCommandBuffer commandBuffer, VkPipelineStageFlags srcStageMask,
                                                            VkPipelineStageFlags dstStageMask, VkDependencyFlags dependencyFlags,
                                                            uint32_t memoryBarrierCount, const VkMemoryBarrier* pMemoryBarriers,
                                                            uint32_t bufferMemoryBarrierCount,
                                                            const VkBufferMemoryBarrier* pBufferMemoryBarriers,
                                                            uint32_t imageMemoryBarrierCount,
                                                            const VkImageMemoryBarrier* pImageMemoryBarriers) {
    return vkmock::CmdPipelineBarrier(commandBuffer, srcStageMask, dstStageMask, dependencyFlags, memoryBarrierCount,
                                      pMemoryBarriers, bufferMemoryBarrierCount, pBufferMemoryBarriers, imageMemoryBarrierCount,
                                      pImageMemoryBarriers);
}

static VKAPI_ATTR void VKAPI_CALL vkmock_CmdBeginQuery(VkCommandBuffer commandBuffer, VkQueryPool queryPool, uint32_t query,
                                                       VkQueryControlFlags flags) {
    return vkmock::CmdBeginQuery(commandBuffer, queryPool, query, flags);
}

static VKAPI_ATTR void VKAPI_CALL vkmock_CmdEndQuery(VkCommandBuffer commandBuffer, VkQueryPool queryPool, uint32_t query) {
    return vkmock::CmdEndQuery(commandBuffer, queryPool, query);
}

static VKAPI_ATTR void VKAPI_CALL vkmock_CmdResetQueryPool(VkCommandBuffer commandBuffer, VkQueryPool queryPool,
                                                           uint32_t firstQuery, uint32_t queryCount) {
    return vkmock::CmdResetQueryPool(commandBuffer, queryPool, firstQuery, queryCount);
}

static VKAPI_ATTR void VKAPI_CALL vkmock_CmdWriteTimestamp(VkCommandBuffer commandBuffer, VkPipelineStageFlagBits pipelineStage,
                                                           VkQueryPool queryPool, uint32_t query) {
    return vkmock::CmdWriteTimestamp(commandBuffer, pipelineStage, queryPool, query);
}

static VKAPI_ATTR void VKAPI_CALL vkmock_CmdCopyQueryPoolResults(VkCommandBuffer commandBuffer, VkQueryPool queryPool,
                                                                 uint32_t firstQuery, uint32_t queryCount, VkBuffer dstBuffer,
                                                                 VkDeviceSize dstOffset, VkDeviceSize stride,
                                                                 VkQueryResultFlags flags) {
    return vkmock::CmdCopyQueryPoolResults(commandBuffer, queryPool, firstQuery, queryCount, dstBuffer, dstOffset, stride, flags);
}

static VKAPI_ATTR void VKAPI_CALL vkmock_CmdPushConstants(VkCommandBuffer commandBuffer, VkPipelineLayout layout,
                                                          VkShaderStageFlags stageFlags, uint32_t offset, uint32_t size,
                                                          const void* pValues) {
    return vkmock::CmdPushConstants(commandBuffer, layout, stageFlags, offset, size, pValues);
}

static VKAPI_ATTR void VKAPI_CALL vkmock_CmdBeginRenderPass(VkCommandBuffer commandBuffer,
                                                            const VkRenderPassBeginInfo* pRenderPassBegin,
                                                            VkSubpassContents contents) {
    return vkmock::CmdBeginRenderPass(commandBuffer, pRenderPassBegin, contents);
}

static VKAPI_ATTR void VKAPI_CALL vkmock_CmdNextSubpass(VkCommandBuffer commandBuffer, VkSubpassContents contents) {
    return vkmock::CmdNextSubpass(commandBuffer, contents);
}

static VKAPI_ATTR void VKAPI_CALL vkmock_CmdEndRenderPass(VkCommandBuffer commandBuffer) {
    return vkmock::CmdEndRenderPass(commandBuffer);
}

static VKAPI_ATTR void VKAPI_CALL vkmock_CmdExecuteCommands(VkCommandBuffer commandBuffer, uint32_t commandBufferCount,
                                                            const VkCommandBuffer* pCommandBuffers) {
    return vkmock::CmdExecuteCommands(commandBuffer, commandBufferCount, pCommandBuffers);
}

static VKAPI_ATTR VkResult VKAPI_CALL vkmock_EnumerateInstanceVersion(uint32_t* pApiVersion) {
    return vkmock::EnumerateInstanceVersion(pApiVersion);
}

static VKAPI_ATTR VkResult VKAPI_CALL vkmock_BindBufferMemory2(VkDevice device, uint32_t bindInfoCount,
                                                               const VkBindBufferMemoryInfo* pBindInfos) {
    return vkmock::BindBufferMemory2(device, bindInfoCount, pBindInfos);
}

static VKAPI_ATTR VkResult VKAPI_CALL vkmock_BindImageMemory2(VkDevice device, uint32_t bindInfoCount,
                                                              const VkBindImageMemoryInfo* pBindInfos) {
    return vkmock::BindImageMemory2(device, bindInfoCount, pBindInfos);
}

static VKAPI_ATTR void VKAPI_CALL vkmock_GetDeviceGroupPeerMemoryFeatures(VkDevice device, uint32_t heapIndex,
                                                                          uint32_t localDeviceIndex, uint32_t remoteDeviceIndex,
                                                                          VkPeerMemoryFeatureFlags* pPeerMemoryFeatures) {
    return vkmock::GetDeviceGroupPeerMemoryFeatures(device, heapIndex, localDeviceIndex, remoteDeviceIndex, pPeerMemoryFeatures);
}

static VKAPI_ATTR void VKAPI_CALL vkmock_CmdSetDeviceMask(VkCommandBuffer commandBuffer, uint32_t deviceMask) {
    return vkmock::CmdSetDeviceMask(commandBuffer, deviceMask);
}

static VKAPI_ATTR void VKAPI_CALL vkmock_CmdDispatchBase(VkCommandBuffer commandBuffer, uint32_t baseGroupX, uint32_t baseGroupY,
                                                         uint32_t baseGroupZ, uint32_t groupCountX, uint32_t groupCountY,
                                                         uint32_t groupCountZ) {
    return vkmock::CmdDispatchBase(commandBuffer, baseGroupX, baseGroupY, baseGroupZ, groupCountX, groupCountY, groupCountZ);
}

static VKAPI_ATTR VkResult VKAPI_CALL vkmock_EnumeratePhysicalDeviceGroups(
    VkInstance instance, uint32_t* pPhysicalDeviceGroupCount, VkPhysicalDeviceGroupProperties* pPhysicalDeviceGroupProperties) {
    return vkmock::EnumeratePhysicalDeviceGroups(instance, pPhysicalDeviceGroupCount, pPhysicalDeviceGroupProperties);
}

static VKAPI_ATTR void VKAPI_CALL vkmock_GetImageMemoryRequirements2(VkDevice device, const VkImageMemoryRequirementsInfo2* pInfo,
                                                                     VkMemoryRequirements2* pMemoryRequirements) {
    return vkmock::GetImageMemoryRequirements2(device, pInfo, pMemoryRequirements);
}

static VKAPI_ATTR void VKAPI_CALL vkmock_GetBufferMemoryRequirements2(VkDevice device, const VkBufferMemoryRequirementsInfo2* pInfo,
                                                                      VkMemoryRequirements2* pMemoryRequirements) {
    return vkmock::GetBufferMemoryRequirements2(device, pInfo, pMemoryRequirements);
}

static VKAPI_ATTR void VKAPI_CALL vkmock_GetImageSparseMemoryRequirements2(
    VkDevice device, const VkImageSparseMemoryRequirementsInfo2* pInfo, uint32_t* pSparseMemoryRequirementCount,
    VkSparseImageMemoryRequirements2* pSparseMemoryRequirements) {
    return vkmock::GetImageSparseMemoryRequirements2(device, pInfo, pSparseMemoryRequirementCount, pSparseMemoryRequirements);
}

static VKAPI_ATTR void VKAPI_CALL vkmock_GetPhysicalDeviceFeatures2(VkPhysicalDevice physicalDevice,
                                                                    VkPhysicalDeviceFeatures2* pFeatures) {
    return vkmock::GetPhysicalDeviceFeatures2(physicalDevice, pFeatures);
}

static VKAPI_ATTR void VKAPI_CALL vkmock_GetPhysicalDeviceProperties2(VkPhysicalDevice physicalDevice,
                                                                      VkPhysicalDeviceProperties2* pProperties) {
    return vkmock::GetPhysicalDeviceProperties2(physicalDevice, pProperties);
}

static VKAPI_ATTR void VKAPI_CALL vkmock_GetPhysicalDeviceFormatProperties2(VkPhysicalDevice physicalDevice, VkFormat format,
                                                                            VkFormatProperties2* pFormatProperties) {
    return vkmock::GetPhysicalDeviceFormatProperties2(physicalDevice, format, pFormatProperties);
}

static VKAPI_ATTR VkResult VKAPI_CALL vkmock_GetPhysicalDeviceImageFormatProperties2(
    VkPhysicalDevice physicalDevice, const VkPhysicalDeviceImageFormatInfo2* pImageFormatInfo,
    VkImageFormatProperties2* pImageFormatProperties) {
    return vkmock::GetPhysicalDeviceImageFormatProperties2(physicalDevice, pImageFormatInfo, pImageFormatProperties);
}

static VKAPI_ATTR void VKAPI_CALL vkmock_GetPhysicalDeviceQueueFamilyProperties2(VkPhysicalDevice physicalDevice,
                                                                                 uint32_t* pQueueFamilyPropertyCount,
                                                                                 VkQueueFamilyProperties2* pQueueFamilyProperties) {
    return vkmock::GetPhysicalDeviceQueueFamilyProperties2(physicalDevice, pQueueFamilyPropertyCount, pQueueFamilyProperties);
}

static VKAPI_ATTR void VKAPI_CALL vkmock_GetPhysicalDeviceMemoryProperties2(VkPhysicalDevice physicalDevice,
                                                                            VkPhysicalDeviceMemoryProperties2* pMemoryProperties) {
    return vkmock::GetPhysicalDeviceMemoryProperties2(physicalDevice, pMemoryProperties);
}

static VKAPI_ATTR void VKAPI_CALL vkmock_GetPhysicalDeviceSparseImageFormatProperties2(
    VkPhysicalDevice physicalDevice, const VkPhysicalDeviceSparseImageFormatInfo2* pFormatInfo, uint32_t* pPropertyCount,
    VkSparseImageFormatProperties2* pProperties) {
    return vkmock::GetPhysicalDeviceSparseImageFormatProperties2(physicalDevice, pFormatInfo, pPropertyCount, pProperties);
}

static VKAPI_ATTR void VKAPI_CALL vkmock_TrimCommandPool(VkDevice device, VkCommandPool commandPool, VkCommandPoolTrimFlags flags) {
    return vkmock::TrimCommandPool(device, commandPool, flags);
}

static VKAPI_ATTR void VKAPI_CALL vkmock_GetDeviceQueue2(VkDevice device, const VkDeviceQueueInfo2* pQueueInfo, VkQueue* pQueue) {
    return vkmock::GetDeviceQueue2(device, pQueueInfo, pQueue);
}

static VKAPI_ATTR VkResult VKAPI_CALL vkmock_CreateSamplerYcbcrConversion(VkDevice device,
                                                                          const VkSamplerYcbcrConversionCreateInfo* pCreateInfo,
                                                                          const VkAllocationCallbacks* pAllocator,
                                                                          VkSamplerYcbcrConversion* pYcbcrConversion) {
    return vkmock::CreateSamplerYcbcrConversion(device, pCreateInfo, pAllocator, pYcbcrConversion);
}

static VKAPI_ATTR void VKAPI_CALL vkmock_DestroySamplerYcbcrConversion(VkDevice device, VkSamplerYcbcrConversion ycbcrConversion,
                                                                       const VkAllocationCallbacks* pAllocator) {
    return vkmock::DestroySamplerYcbcrConversion(device, ycbcrConversion, pAllocator);
}

static VKAPI_ATTR VkResult VKAPI_CALL vkmock_CreateDescriptorUpdateTemplate(VkDevice device,
                                                                            const VkDescriptorUpdateTemplateCreateInfo* pCreateInfo,
                                                                            const VkAllocationCallbacks* pAllocator,
                                                                            VkDescriptorUpdateTemplate* pDescriptorUpdateTemplate) {
    return vkmock::CreateDescriptorUpdateTemplate(device, pCreateInfo, pAllocator, pDescriptorUpdateTemplate);
}

static VKAPI_ATTR void VKAPI_CALL vkmock_DestroyDescriptorUpdateTemplate(VkDevice device,
                                                                         VkDescriptorUpdateTemplate descriptorUpdateTemplate,
                                                                         const VkAllocationCallbacks* pAllocator) {
    return vkmock::DestroyDescriptorUpdateTemplate(device, descriptorUpdateTemplate, pAllocator);
}

static VKAPI_ATTR void VKAPI_CALL vkmock_UpdateDescriptorSetWithTemplate(VkDevice device, VkDescriptorSet descriptorSet,
                                                                         VkDescriptorUpdateTemplate descriptorUpdateTemplate,
                                                                         const void* pData) {
    return vkmock::UpdateDescriptorSetWithTemplate(device, descriptorSet, descriptorUpdateTemplate, pData);
}

static VKAPI_ATTR void VKAPI_CALL vkmock_GetPhysicalDeviceExternalBufferProperties(
    VkPhysicalDevice physicalDevice, const VkPhysicalDeviceExternalBufferInfo* pExternalBufferInfo,
    VkExternalBufferProperties* pExternalBufferProperties) {
    return vkmock::GetPhysicalDeviceExternalBufferProperties(physicalDevice, pExternalBufferInfo, pExternalBufferProperties);
}

static VKAPI_ATTR void VKAPI_CALL vkmock_GetPhysicalDeviceExternalFenceProperties(
    VkPhysicalDevice physicalDevice, const VkPhysicalDeviceExternalFenceInfo* pExternalFenceInfo,
    VkExternalFenceProperties* pExternalFenceProperties) {
    return vkmock::GetPhysicalDeviceExternalFenceProperties(physicalDevice, pExternalFenceInfo, pExternalFenceProperties);
}

static VKAPI_ATTR void VKAPI_CALL vkmock_GetPhysicalDeviceExternalSemaphoreProperties(
    VkPhysicalDevice physicalDevice, const VkPhysicalDeviceExternalSemaphoreInfo* pExternalSemaphoreInfo,
    VkExternalSemaphoreProperties* pExternalSemaphoreProperties) {
    return vkmock::GetPhysicalDeviceExternalSemaphoreProperties(physicalDevice, pExternalSemaphoreInfo,
                                                                pExternalSemaphoreProperties);
}

static VKAPI_ATTR void VKAPI_CALL vkmock_GetDescriptorSetLayoutSupport(VkDevice device,
                                                                       const VkDescriptorSetLayoutCreateInfo* pCreateInfo,
                                                                       VkDescriptorSetLayoutSupport* pSupport) {
    return vkmock::GetDescriptorSetLayoutSupport(device, pCreateInfo, pSupport);
}

static VKAPI_ATTR void VKAPI_CALL vkmock_CmdDrawIndirectCount(VkCommandBuffer commandBuffer, VkBuffer buffer, VkDeviceSize offset,
                                                              VkBuffer countBuffer, VkDeviceSize countBufferOffset,
                                                              uint32_t maxDrawCount, uint32_t stride) {
    return vkmock::CmdDrawIndirectCount(commandBuffer, buffer, offset, countBuffer, countBufferOffset, maxDrawCount, stride);
}

static VKAPI_ATTR void VKAPI_CALL vkmock_CmdDrawIndexedIndirectCount(VkCommandBuffer commandBuffer, VkBuffer buffer,
                                                                     VkDeviceSize offset, VkBuffer countBuffer,
                                                                     VkDeviceSize countBufferOffset, uint32_t maxDrawCount,
                                                                     uint32_t stride) {
    return vkmock::CmdDrawIndexedIndirectCount(commandBuffer, buffer, offset, countBuffer, countBufferOffset, maxDrawCount, stride);
}

static VKAPI_ATTR VkResult VKAPI_CALL vkmock_CreateRenderPass2(VkDevice device, const VkRenderPassCreateInfo2* pCreateInfo,
                                                               const VkAllocationCallbacks* pAllocator, VkRenderPass* pRenderPass) {
    return vkmock::CreateRenderPass2(device, pCreateInfo, pAllocator, pRenderPass);
}

static VKAPI_ATTR void VKAPI_CALL vkmock_CmdBeginRenderPass2(VkCommandBuffer commandBuffer,
                                                             const VkRenderPassBeginInfo* pRenderPassBegin,
                                                             const VkSubpassBeginInfo* pSubpassBeginInfo) {
    return vkmock::CmdBeginRenderPass2(commandBuffer, pRenderPassBegin, pSubpassBeginInfo);
}

static VKAPI_ATTR void VKAPI_CALL vkmock_CmdNextSubpass2(VkCommandBuffer commandBuffer, const VkSubpassBeginInfo* pSubpassBeginInfo,
                                                         const VkSubpassEndInfo* pSubpassEndInfo) {
    return vkmock::CmdNextSubpass2(commandBuffer, pSubpassBeginInfo, pSubpassEndInfo);
}

static VKAPI_ATTR void VKAPI_CALL vkmock_CmdEndRenderPass2(VkCommandBuffer commandBuffer, const VkSubpassEndInfo* pSubpassEndInfo) {
    return vkmock::CmdEndRenderPass2(commandBuffer, pSubpassEndInfo);
}

static VKAPI_ATTR void VKAPI_CALL vkmock_ResetQueryPool(VkDevice device, VkQueryPool queryPool, uint32_t firstQuery,
                                                        uint32_t queryCount) {
    return vkmock::ResetQueryPool(device, queryPool, firstQuery, queryCount);
}

static VKAPI_ATTR VkResult VKAPI_CALL vkmock_GetSemaphoreCounterValue(VkDevice device, VkSemaphore semaphore, uint64_t* pValue) {
    return vkmock::GetSemaphoreCounterValue(device, semaphore, pValue);
}

static VKAPI_ATTR VkResult VKAPI_CALL vkmock_WaitSemaphores(VkDevice device, const VkSemaphoreWaitInfo* pWaitInfo,
                                                            uint64_t timeout) {
    return vkmock::WaitSemaphores(device, pWaitInfo, timeout);
}

static VKAPI_ATTR VkResult VKAPI_CALL vkmock_SignalSemaphore(VkDevice device, const VkSemaphoreSignalInfo* pSignalInfo) {
    return vkmock::SignalSemaphore(device, pSignalInfo);
}

static VKAPI_ATTR VkDeviceAddress VKAPI_CALL vkmock_GetBufferDeviceAddress(VkDevice device,
                                                                           const VkBufferDeviceAddressInfo* pInfo) {
    return vkmock::GetBufferDeviceAddress(device, pInfo);
}

static VKAPI_ATTR uint64_t VKAPI_CALL vkmock_GetBufferOpaqueCaptureAddress(VkDevice device,
                                                                           const VkBufferDeviceAddressInfo* pInfo) {
    return vkmock::GetBufferOpaqueCaptureAddress(device, pInfo);
}

static VKAPI_ATTR uint64_t VKAPI_CALL
vkmock_GetDeviceMemoryOpaqueCaptureAddress(VkDevice device, const VkDeviceMemoryOpaqueCaptureAddressInfo* pInfo) {
    return vkmock::GetDeviceMemoryOpaqueCaptureAddress(device, pInfo);
}

static VKAPI_ATTR VkResult VKAPI_CALL vkmock_GetPhysicalDeviceToolProperties(VkPhysicalDevice physicalDevice, uint32_t* pToolCount,
                                                                             VkPhysicalDeviceToolProperties* pToolProperties) {
    return vkmock::GetPhysicalDeviceToolProperties(physicalDevice, pToolCount, pToolProperties);
}

static VKAPI_ATTR VkResult VKAPI_CALL vkmock_CreatePrivateDataSlot(VkDevice device, const VkPrivateDataSlotCreateInfo* pCreateInfo,
                                                                   const VkAllocationCallbacks* pAllocator,
                                                                   VkPrivateDataSlot* pPrivateDataSlot) {
    return vkmock::CreatePrivateDataSlot(device, pCreateInfo, pAllocator, pPrivateDataSlot);
}

static VKAPI_ATTR void VKAPI_CALL vkmock_DestroyPrivateDataSlot(VkDevice device, VkPrivateDataSlot privateDataSlot,
                                                                const VkAllocationCallbacks* pAllocator) {
    return vkmock::DestroyPrivateDataSlot(device, privateDataSlot, pAllocator);
}

static VKAPI_ATTR VkResult VKAPI_CALL vkmock_SetPrivateData(VkDevice device, VkObjectType objectType, uint64_t objectHandle,
                                                            VkPrivateDataSlot privateDataSlot, uint64_t data) {
    return vkmock::SetPrivateData(device, objectType, objectHandle, privateDataSlot, data);
}

static VKAPI_ATTR void VKAPI_CALL vkmock_GetPrivateData(VkDevice device, VkObjectType objectType, uint64_t objectHandle,
                                                        VkPrivateDataSlot privateDataSlot, uint64_t* pData) {
    return vkmock::GetPrivateData(device, objectType, objectHandle, privateDataSlot, pData);
}

static VKAPI_ATTR void VKAPI_CALL vkmock_CmdSetEvent2(VkCommandBuffer commandBuffer, VkEvent event,
                                                      const VkDependencyInfo* pDependencyInfo) {
    return vkmock::CmdSetEvent2(commandBuffer, event, pDependencyInfo);
}

static VKAPI_ATTR void VKAPI_CALL vkmock_CmdResetEvent2(VkCommandBuffer commandBuffer, VkEvent event,
                                                        VkPipelineStageFlags2 stageMask) {
    return vkmock::CmdResetEvent2(commandBuffer, event, stageMask);
}

static VKAPI_ATTR void VKAPI_CALL vkmock_CmdWaitEvents2(VkCommandBuffer commandBuffer, uint32_t eventCount, const VkEvent* pEvents,
                                                        const VkDependencyInfo* pDependencyInfos) {
    return vkmock::CmdWaitEvents2(commandBuffer, eventCount, pEvents, pDependencyInfos);
}

static VKAPI_ATTR void VKAPI_CALL vkmock_CmdPipelineBarrier2(VkCommandBuffer commandBuffer,
                                                             const VkDependencyInfo* pDependencyInfo) {
    return vkmock::CmdPipelineBarrier2(commandBuffer, pDependencyInfo);
}

static VKAPI_ATTR void VKAPI_CALL vkmock_CmdWriteTimestamp2(VkCommandBuffer commandBuffer, VkPipelineStageFlags2 stage,
                                                            VkQueryPool queryPool, uint32_t query) {
    return vkmock::CmdWriteTimestamp2(commandBuffer, stage, queryPool, query);
}

static VKAPI_ATTR VkResult VKAPI_CALL vkmock_QueueSubmit2(VkQueue queue, uint32_t submitCount, const VkSubmitInfo2* pSubmits,
                                                          VkFence fence) {
    return vkmock::QueueSubmit2(queue, submitCount, pSubmits, fence);
}

static VKAPI_ATTR void VKAPI_CALL vkmock_CmdCopyBuffer2(VkCommandBuffer commandBuffer, const VkCopyBufferInfo2* pCopyBufferInfo) {
    return vkmock::CmdCopyBuffer2(commandBuffer, pCopyBufferInfo);
}

static VKAPI_ATTR void VKAPI_CALL vkmock_CmdCopyImage2(VkCommandBuffer commandBuffer, const VkCopyImageInfo2* pCopyImageInfo) {
    return vkmock::CmdCopyImage2(commandBuffer, pCopyImageInfo);
}

static VKAPI_ATTR void VKAPI_CALL vkmock_CmdCopyBufferToImage2(VkCommandBuffer commandBuffer,
                                                               const VkCopyBufferToImageInfo2* pCopyBufferToImageInfo) {
    return vkmock::CmdCopyBufferToImage2(commandBuffer, pCopyBufferToImageInfo);
}

static VKAPI_ATTR void VKAPI_CALL vkmock_CmdCopyImageToBuffer2(VkCommandBuffer commandBuffer,
                                                               const VkCopyImageToBufferInfo2* pCopyImageToBufferInfo) {
    return vkmock::CmdCopyImageToBuffer2(commandBuffer, pCopyImageToBufferInfo);
}

static VKAPI_ATTR void VKAPI_CALL vkmock_CmdBlitImage2(VkCommandBuffer commandBuffer, const VkBlitImageInfo2* pBlitImageInfo) {
    return vkmock::CmdBlitImage2(commandBuffer, pBlitImageInfo);
}

static VKAPI_ATTR void VKAPI_CALL vkmock_CmdResolveImage2(VkCommandBuffer commandBuffer,
                                                          const VkResolveImageInfo2* pResolveImageInfo) {
    return vkmock::CmdResolveImage2(commandBuffer, pResolveImageInfo);
}

static VKAPI_ATTR void VKAPI_CALL vkmock_CmdBeginRendering(VkCommandBuffer commandBuffer, const VkRenderingInfo* pRenderingInfo) {
    return vkmock::CmdBeginRendering(commandBuffer, pRenderingInfo);
}

static VKAPI_ATTR void VKAPI_CALL vkmock_CmdEndRendering(VkCommandBuffer commandBuffer) {
    return vkmock::CmdEndRendering(commandBuffer);
}

static VKAPI_ATTR void VKAPI_CALL vkmock_CmdSetCullMode(VkCommandBuffer commandBuffer, VkCullModeFlags cullMode) {
    return vkmock::CmdSetCullMode(commandBuffer, cullMode);
}

static VKAPI_ATTR void VKAPI_CALL vkmock_CmdSetFrontFace(VkCommandBuffer commandBuffer, VkFrontFace frontFace) {
    return vkmock::CmdSetFrontFace(commandBuffer, frontFace);
}

static VKAPI_ATTR void VKAPI_CALL vkmock_CmdSetPrimitiveTopology(VkCommandBuffer commandBuffer,
                                                                 VkPrimitiveTopology primitiveTopology) {
    return vkmock::CmdSetPrimitiveTopology(commandBuffer, primitiveTopology);
}

static VKAPI_ATTR void VKAPI_CALL vkmock_CmdSetViewportWithCount(VkCommandBuffer commandBuffer, uint32_t viewportCount,
                                                                 const VkViewport* pViewports) {
    return vkmock::CmdSetViewportWithCount(commandBuffer, viewportCount, pViewports);
}

static VKAPI_ATTR void VKAPI_CALL vkmock_CmdSetScissorWithCount(VkCommandBuffer commandBuffer, uint32_t scissorCount,
                                                                const VkRect2D* pScissors) {
    return vkmock::CmdSetScissorWithCount(commandBuffer, scissorCount, pScissors);
}

static VKAPI_ATTR void VKAPI_CALL vkmock_CmdBindVertexBuffers2(VkCommandBuffer commandBuffer, uint32_t firstBinding,
                                                               uint32_t bindingCount, const VkBuffer* pBuffers,
                                                               const VkDeviceSize* pOffsets, const VkDeviceSize* pSizes,
                                                               const VkDeviceSize* pStrides) {
    return vkmock::CmdBindVertexBuffers2(commandBuffer, firstBinding, bindingCount, pBuffers, pOffsets, pSizes, pStrides);
}

static VKAPI_ATTR void VKAPI_CALL vkmock_CmdSetDepthTestEnable(VkCommandBuffer commandBuffer, VkBool32 depthTestEnable) {
    return vkmock::CmdSetDepthTestEnable(commandBuffer, depthTestEnable);
}

static VKAPI_ATTR void VKAPI_CALL vkmock_CmdSetDepthWriteEnable(VkCommandBuffer commandBuffer, VkBool32 depthWriteEnable) {
    return vkmock::CmdSetDepthWriteEnable(commandBuffer, depthWriteEnable);
}

static VKAPI_ATTR void VKAPI_CALL vkmock_CmdSetDepthCompareOp(VkCommandBuffer commandBuffer, VkCompareOp depthCompareOp) {
    return vkmock::CmdSetDepthCompareOp(commandBuffer, depthCompareOp);
}

static VKAPI_ATTR void VKAPI_CALL vkmock_CmdSetDepthBoundsTestEnable(VkCommandBuffer commandBuffer,
                                                                     VkBool32 depthBoundsTestEnable) {
    return vkmock::CmdSetDepthBoundsTestEnable(commandBuffer, depthBoundsTestEnable);
}

static VKAPI_ATTR void VKAPI_CALL vkmock_CmdSetStencilTestEnable(VkCommandBuffer commandBuffer, VkBool32 stencilTestEnable) {
    return vkmock::CmdSetStencilTestEnable(commandBuffer, stencilTestEnable);
}

static VKAPI_ATTR void VKAPI_CALL vkmock_CmdSetStencilOp(VkCommandBuffer commandBuffer, VkStencilFaceFlags faceMask,
                                                         VkStencilOp failOp, VkStencilOp passOp, VkStencilOp depthFailOp,
                                                         VkCompareOp compareOp) {
    return vkmock::CmdSetStencilOp(commandBuffer, faceMask, failOp, passOp, depthFailOp, compareOp);
}

static VKAPI_ATTR void VKAPI_CALL vkmock_CmdSetRasterizerDiscardEnable(VkCommandBuffer commandBuffer,
                                                                       VkBool32 rasterizerDiscardEnable) {
    return vkmock::CmdSetRasterizerDiscardEnable(commandBuffer, rasterizerDiscardEnable);
}

static VKAPI_ATTR void VKAPI_CALL vkmock_CmdSetDepthBiasEnable(VkCommandBuffer commandBuffer, VkBool32 depthBiasEnable) {
    return vkmock::CmdSetDepthBiasEnable(commandBuffer, depthBiasEnable);
}

static VKAPI_ATTR void VKAPI_CALL vkmock_CmdSetPrimitiveRestartEnable(VkCommandBuffer commandBuffer,
                                                                      VkBool32 primitiveRestartEnable) {
    return vkmock::CmdSetPrimitiveRestartEnable(commandBuffer, primitiveRestartEnable);
}

static VKAPI_ATTR void VKAPI_CALL vkmock_GetDeviceBufferMemoryRequirements(VkDevice device,
                                                                           const VkDeviceBufferMemoryRequirements* pInfo,
                                                                           VkMemoryRequirements2* pMemoryRequirements) {
    return vkmock::GetDeviceBufferMemoryRequirements(device, pInfo, pMemoryRequirements);
}

static VKAPI_ATTR void VKAPI_CALL vkmock_GetDeviceImageMemoryRequirements(VkDevice device,
                                                                          const VkDeviceImageMemoryRequirements* pInfo,
                                                                          VkMemoryRequirements2* pMemoryRequirements) {
    return vkmock::GetDeviceImageMemoryRequirements(device, pInfo, pMemoryRequirements);
}

static VKAPI_ATTR void VKAPI_CALL vkmock_GetDeviceImageSparseMemoryRequirements(
    VkDevice device, const VkDeviceImageMemoryRequirements* pInfo, uint32_t* pSparseMemoryRequirementCount,
    VkSparseImageMemoryRequirements2* pSparseMemoryRequirements) {
    return vkmock::GetDeviceImageSparseMemoryRequirements(device, pInfo, pSparseMemoryRequirementCount, pSparseMemoryRequirements);
}

static VKAPI_ATTR void VKAPI_CALL vkmock_CmdSetLineStipple(VkCommandBuffer commandBuffer, uint32_t lineStippleFactor,
                                                           uint16_t lineStipplePattern) {
    return vkmock::CmdSetLineStipple(commandBuffer, lineStippleFactor, lineStipplePattern);
}

static VKAPI_ATTR VkResult VKAPI_CALL vkmock_MapMemory2(VkDevice device, const VkMemoryMapInfo* pMemoryMapInfo, void** ppData) {
    return vkmock::MapMemory2(device, pMemoryMapInfo, ppData);
}

static VKAPI_ATTR VkResult VKAPI_CALL vkmock_UnmapMemory2(VkDevice device, const VkMemoryUnmapInfo* pMemoryUnmapInfo) {
    return vkmock::UnmapMemory2(device, pMemoryUnmapInfo);
}

static VKAPI_ATTR void VKAPI_CALL vkmock_CmdBindIndexBuffer2(VkCommandBuffer commandBuffer, VkBuffer buffer, VkDeviceSize offset,
                                                             VkDeviceSize size, VkIndexType indexType) {
    return vkmock::CmdBindIndexBuffer2(commandBuffer, buffer, offset, size, indexType);
}

static VKAPI_ATTR void VKAPI_CALL vkmock_GetRenderingAreaGranularity(VkDevice device, const VkRenderingAreaInfo* pRenderingAreaInfo,
                                                                     VkExtent2D* pGranularity) {
    return vkmock::GetRenderingAreaGranularity(device, pRenderingAreaInfo, pGranularity);
}

static VKAPI_ATTR void VKAPI_CALL vkmock_GetDeviceImageSubresourceLayout(VkDevice device, const VkDeviceImageSubresourceInfo* pInfo,
                                                                         VkSubresourceLayout2* pLayout) {
    return vkmock::GetDeviceImageSubresourceLayout(device, pInfo, pLayout);
}

static VKAPI_ATTR void VKAPI_CALL vkmock_GetImageSubresourceLayout2(VkDevice device, VkImage image,
                                                                    const VkImageSubresource2* pSubresource,
                                                                    VkSubresourceLayout2* pLayout) {
    return vkmock::GetImageSubresourceLayout2(device, image, pSubresource, pLayout);
}

static VKAPI_ATTR void VKAPI_CALL vkmock_CmdPushDescriptorSet(VkCommandBuffer commandBuffer, VkPipelineBindPoint pipelineBindPoint,
                                                              VkPipelineLayout layout, uint32_t set, uint32_t descriptorWriteCount,
                                                              const VkWriteDescriptorSet* pDescriptorWrites) {
    return vkmock::CmdPushDescriptorSet(commandBuffer, pipelineBindPoint, layout, set, descriptorWriteCount, pDescriptorWrites);
}

static VKAPI_ATTR void VKAPI_CALL vkmock_CmdPushDescriptorSetWithTemplate(VkCommandBuffer commandBuffer,
                                                                          VkDescriptorUpdateTemplate descriptorUpdateTemplate,
                                                                          VkPipelineLayout layout, uint32_t set,
                                                                          const void* pData) {
    return vkmock::CmdPushDescriptorSetWithTemplate(commandBuffer, descriptorUpdateTemplate, layout, set, pData);
}

static VKAPI_ATTR void VKAPI_CALL
vkmock_CmdSetRenderingAttachmentLocations(VkCommandBuffer commandBuffer, const VkRenderingAttachmentLocationInfo* pLocationInfo) {
    return vkmock::CmdSetRenderingAttachmentLocations(commandBuffer, pLocationInfo);
}

static VKAPI_ATTR void VKAPI_CALL vkmock_CmdSetRenderingInputAttachmentIndices(
    VkCommandBuffer commandBuffer, const VkRenderingInputAttachmentIndexInfo* pInputAttachmentIndexInfo) {
    return vkmock::CmdSetRenderingInputAttachmentIndices(commandBuffer, pInputAttachmentIndexInfo);
}

static VKAPI_ATTR void VKAPI_CALL vkmock_CmdBindDescriptorSets2(VkCommandBuffer commandBuffer,
                                                                const VkBindDescriptorSetsInfo* pBindDescriptorSetsInfo) {
    return vkmock::CmdBindDescriptorSets2(commandBuffer, pBindDescriptorSetsInfo);
}

static VKAPI_ATTR void VKAPI_CALL vkmock_CmdPushConstants2(VkCommandBuffer commandBuffer,
                                                           const VkPushConstantsInfo* pPushConstantsInfo) {
    return vkmock::CmdPushConstants2(commandBuffer, pPushConstantsInfo);
}

static VKAPI_ATTR void VKAPI_CALL vkmock_CmdPushDescriptorSet2(VkCommandBuffer commandBuffer,
                                                               const VkPushDescriptorSetInfo* pPushDescriptorSetInfo) {
    return vkmock::CmdPushDescriptorSet2(commandBuffer, pPushDescriptorSetInfo);
}

static VKAPI_ATTR void VKAPI_CALL vkmock_CmdPushDescriptorSetWithTemplate2(
    VkCommandBuffer commandBuffer, const VkPushDescriptorSetWithTemplateInfo* pPushDescriptorSetWithTemplateInfo) {
    return vkmock::CmdPushDescriptorSetWithTemplate2(commandBuffer, pPushDescriptorSetWithTemplateInfo);
}

static VKAPI_ATTR VkResult VKAPI_CALL vkmock_CopyMemoryToImage(VkDevice device,
                                                               const VkCopyMemoryToImageInfo* pCopyMemoryToImageInfo) {
    return vkmock::CopyMemoryToImage(device, pCopyMemoryToImageInfo);
}

static VKAPI_ATTR VkResult VKAPI_CALL vkmock_CopyImageToMemory(VkDevice device,
                                                               const VkCopyImageToMemoryInfo* pCopyImageToMemoryInfo) {
    return vkmock::CopyImageToMemory(device, pCopyImageToMemoryInfo);
}

static VKAPI_ATTR VkResult VKAPI_CALL vkmock_CopyImageToImage(VkDevice device,
                                                              const VkCopyImageToImageInfo* pCopyImageToImageInfo) {
    return vkmock::CopyImageToImage(device, pCopyImageToImageInfo);
}

static VKAPI_ATTR VkResult VKAPI_CALL vkmock_TransitionImageLayout(VkDevice device, uint32_t transitionCount,
                                                                   const VkHostImageLayoutTransitionInfo* pTransitions) {
    return vkmock::TransitionImageLayout(device, transitionCount, pTransitions);
}

static VKAPI_ATTR void VKAPI_CALL vkmock_DestroySurfaceKHR(VkInstance instance, VkSurfaceKHR surface,
                                                           const VkAllocationCallbacks* pAllocator) {
    return vkmock::DestroySurfaceKHR(instance, surface, pAllocator);
}

static VKAPI_ATTR VkResult VKAPI_CALL vkmock_GetPhysicalDeviceSurfaceSupportKHR(VkPhysicalDevice physicalDevice,
                                                                                uint32_t queueFamilyIndex, VkSurfaceKHR surface,
                                                                                VkBool32* pSupported) {
    return vkmock::GetPhysicalDeviceSurfaceSupportKHR(physicalDevice, queueFamilyIndex, surface, pSupported);
}

static VKAPI_ATTR VkResult VKAPI_CALL vkmock_GetPhysicalDeviceSurfaceCapabilitiesKHR(
    VkPhysicalDevice physicalDevice, VkSurfaceKHR surface, VkSurfaceCapabilitiesKHR* pSurfaceCapabilities) {
    return vkmock::GetPhysicalDeviceSurfaceCapabilitiesKHR(physicalDevice, surface, pSurfaceCapabilities);
}

static VKAPI_ATTR VkResult VKAPI_CALL vkmock_GetPhysicalDeviceSurfaceFormatsKHR(VkPhysicalDevice physicalDevice,
                                                                                VkSurfaceKHR surface, uint32_t* pSurfaceFormatCount,
                                                                                VkSurfaceFormatKHR* pSurfaceFormats) {
    return vkmock::GetPhysicalDeviceSurfaceFormatsKHR(physicalDevice, surface, pSurfaceFormatCount, pSurfaceFormats);
}

static VKAPI_ATTR VkResult VKAPI_CALL vkmock_GetPhysicalDeviceSurfacePresentModesKHR(VkPhysicalDevice physicalDevice,
                                                                                     VkSurfaceKHR surface,
                                                                                     uint32_t* pPresentModeCount,
                                                                                     VkPresentModeKHR* pPresentModes) {
    return vkmock::GetPhysicalDeviceSurfacePresentModesKHR(physicalDevice, surface, pPresentModeCount, pPresentModes);
}

static VKAPI_ATTR VkResult VKAPI_CALL vkmock_CreateSwapchainKHR(VkDevice device, const VkSwapchainCreateInfoKHR* pCreateInfo,
                                                                const VkAllocationCallbacks* pAllocator,
                                                                VkSwapchainKHR* pSwapchain) {
    return vkmock::CreateSwapchainKHR(device, pCreateInfo, pAllocator, pSwapchain);
}

static VKAPI_ATTR void VKAPI_CALL vkmock_DestroySwapchainKHR(VkDevice device, VkSwapchainKHR swapchain,
                                                             const VkAllocationCallbacks* pAllocator) {
    return vkmock::DestroySwapchainKHR(device, swapchain, pAllocator);
}

static VKAPI_ATTR VkResult VKAPI_CALL vkmock_GetSwapchainImagesKHR(VkDevice device, VkSwapchainKHR swapchain,
                                                                   uint32_t* pSwapchainImageCount, VkImage* pSwapchainImages) {
    return vkmock::GetSwapchainImagesKHR(device, swapchain, pSwapchainImageCount, pSwapchainImages);
}

static VKAPI_ATTR VkResult VKAPI_CALL vkmock_AcquireNextImageKHR(VkDevice device, VkSwapchainKHR swapchain, uint64_t timeout,
                                                                 VkSemaphore semaphore, VkFence fence, uint32_t* pImageIndex) {
    return vkmock::AcquireNextImageKHR(device, swapchain, timeout, semaphore, fence, pImageIndex);
}

static VKAPI_ATTR VkResult VKAPI_CALL vkmock_QueuePresentKHR(VkQueue queue, const VkPresentInfoKHR* pPresentInfo) {
    return vkmock::QueuePresentKHR(queue, pPresentInfo);
}

static VKAPI_ATTR VkResult VKAPI_CALL
vkmock_GetDeviceGroupPresentCapabilitiesKHR(VkDevice device, VkDeviceGroupPresentCapabilitiesKHR* pDeviceGroupPresentCapabilities) {
    return vkmock::GetDeviceGroupPresentCapabilitiesKHR(device, pDeviceGroupPresentCapabilities);
}

static VKAPI_ATTR VkResult VKAPI_CALL vkmock_GetDeviceGroupSurfacePresentModesKHR(VkDevice device, VkSurfaceKHR surface,
                                                                                  VkDeviceGroupPresentModeFlagsKHR* pModes) {
    return vkmock::GetDeviceGroupSurfacePresentModesKHR(device, surface, pModes);
}

static VKAPI_ATTR VkResult VKAPI_CALL vkmock_GetPhysicalDevicePresentRectanglesKHR(VkPhysicalDevice physicalDevice,
                                                                                   VkSurfaceKHR surface, uint32_t* pRectCount,
                                                                                   VkRect2D* pRects) {
    return vkmock::GetPhysicalDevicePresentRectanglesKHR(physicalDevice, surface, pRectCount, pRects);
}

static VKAPI_ATTR VkResult VKAPI_CALL vkmock_AcquireNextImage2KHR(VkDevice device, const VkAcquireNextImageInfoKHR* pAcquireInfo,
                                                                  uint32_t* pImageIndex) {
    return vkmock::AcquireNextImage2KHR(device, pAcquireInfo, pImageIndex);
}

static VKAPI_ATTR VkResult VKAPI_CALL vkmock_GetPhysicalDeviceDisplayPropertiesKHR(VkPhysicalDevice physicalDevice,
                                                                                   uint32_t* pPropertyCount,
                                                                                   VkDisplayPropertiesKHR* pProperties) {
    return vkmock::GetPhysicalDeviceDisplayPropertiesKHR(physicalDevice, pPropertyCount, pProperties);
}

static VKAPI_ATTR VkResult VKAPI_CALL vkmock_GetPhysicalDeviceDisplayPlanePropertiesKHR(VkPhysicalDevice physicalDevice,
                                                                                        uint32_t* pPropertyCount,
                                                                                        VkDisplayPlanePropertiesKHR* pProperties) {
    return vkmock::GetPhysicalDeviceDisplayPlanePropertiesKHR(physicalDevice, pPropertyCount, pProperties);
}

static VKAPI_ATTR VkResult VKAPI_CALL vkmock_GetDisplayPlaneSupportedDisplaysKHR(VkPhysicalDevice physicalDevice,
                                                                                 uint32_t planeIndex, uint32_t* pDisplayCount,
                                                                                 VkDisplayKHR* pDisplays) {
    return vkmock::GetDisplayPlaneSupportedDisplaysKHR(physicalDevice, planeIndex, pDisplayCount, pDisplays);
}

static VKAPI_ATTR VkResult VKAPI_CALL vkmock_GetDisplayModePropertiesKHR(VkPhysicalDevice physicalDevice, VkDisplayKHR display,
                                                                         uint32_t* pPropertyCount,
                                                                         VkDisplayModePropertiesKHR* pProperties) {
    return vkmock::GetDisplayModePropertiesKHR(physicalDevice, display, pPropertyCount, pProperties);
}

static VKAPI_ATTR VkResult VKAPI_CALL vkmock_CreateDisplayModeKHR(VkPhysicalDevice physicalDevice, VkDisplayKHR display,
                                                                  const VkDisplayModeCreateInfoKHR* pCreateInfo,
                                                                  const VkAllocationCallbacks* pAllocator,
                                                                  VkDisplayModeKHR* pMode) {
    return vkmock::CreateDisplayModeKHR(physicalDevice, display, pCreateInfo, pAllocator, pMode);
}

static VKAPI_ATTR VkResult VKAPI_CALL vkmock_GetDisplayPlaneCapabilitiesKHR(VkPhysicalDevice physicalDevice, VkDisplayModeKHR mode,
                                                                            uint32_t planeIndex,
                                                                            VkDisplayPlaneCapabilitiesKHR* pCapabilities) {
    return vkmock::GetDisplayPlaneCapabilitiesKHR(physicalDevice, mode, planeIndex, pCapabilities);
}

static VKAPI_ATTR VkResult VKAPI_CALL vkmock_CreateDisplayPlaneSurfaceKHR(VkInstance instance,
                                                                          const VkDisplaySurfaceCreateInfoKHR* pCreateInfo,
                                                                          const VkAllocationCallbacks* pAllocator,
                                                                          VkSurfaceKHR* pSurface) {
    return vkmock::CreateDisplayPlaneSurfaceKHR(instance, pCreateInfo, pAllocator, pSurface);
}

static VKAPI_ATTR VkResult VKAPI_CALL vkmock_CreateSharedSwapchainsKHR(VkDevice device, uint32_t swapchainCount,
                                                                       const VkSwapchainCreateInfoKHR* pCreateInfos,
                                                                       const VkAllocationCallbacks* pAllocator,
                                                                       VkSwapchainKHR* pSwapchains) {
    return vkmock::CreateSharedSwapchainsKHR(device, swapchainCount, pCreateInfos, pAllocator, pSwapchains);
}

#ifdef VK_USE_PLATFORM_XLIB_KHR
static VKAPI_ATTR VkResult VKAPI_CALL vkmock_CreateXlibSurfaceKHR(VkInstance instance,
                                                                  const VkXlibSurfaceCreateInfoKHR* pCreateInfo,
                                                                  const VkAllocationCallbacks* pAllocator, VkSurfaceKHR* pSurface) {
    return vkmock::CreateXlibSurfaceKHR(instance, pCreateInfo, pAllocator, pSurface);
}

static VKAPI_ATTR VkBool32 VKAPI_CALL vkmock_GetPhysicalDeviceXlibPresentationSupportKHR(VkPhysicalDevice physicalDevice,
                                                                                         uint32_t queueFamilyIndex, Display* dpy,
                                                                                         VisualID visualID) {
    return vkmock::GetPhysicalDeviceXlibPresentationSupportKHR(physicalDevice, queueFamilyIndex, dpy, visualID);
}

#endif  // VK_USE_PLATFORM_XLIB_KHR
#ifdef VK_USE_PLATFORM_XCB_KHR
static VKAPI_ATTR VkResult VKAPI_CALL vkmock_CreateXcbSurfaceKHR(VkInstance instance, const VkXcbSurfaceCreateInfoKHR* pCreateInfo,
                                                                 const VkAllocationCallbacks* pAllocator, VkSurfaceKHR* pSurface) {
    return vkmock::CreateXcbSurfaceKHR(instance, pCreateInfo, pAllocator, pSurface);
}

static VKAPI_ATTR VkBool32 VKAPI_CALL vkmock_GetPhysicalDeviceXcbPresentationSupportKHR(VkPhysicalDevice physicalDevice,
                                                                                        uint32_t queueFamilyIndex,
                                                                                        xcb_connection_t* connection,
                                                                                        xcb_visualid_t visual_id) {
    return vkmock::GetPhysicalDeviceXcbPresentationSupportKHR(physicalDevice, queueFamilyIndex, connection, visual_id);
}

#endif  // VK_USE_PLATFORM_XCB_KHR
#ifdef VK_USE_PLATFORM_WAYLAND_KHR
static VKAPI_ATTR VkResult VKAPI_CALL vkmock_CreateWaylandSurfaceKHR(VkInstance instance,
                                                                     const VkWaylandSurfaceCreateInfoKHR* pCreateInfo,
                                                                     const VkAllocationCallbacks* pAllocator,
                                                                     VkSurfaceKHR* pSurface) {
    return vkmock::CreateWaylandSurfaceKHR(instance, pCreateInfo, pAllocator, pSurface);
}

static VKAPI_ATTR VkBool32 VKAPI_CALL vkmock_GetPhysicalDeviceWaylandPresentationSupportKHR(VkPhysicalDevice physicalDevice,
                                                                                            uint32_t queueFamilyIndex,
                                                                                            struct wl_display* display) {
    return vkmock::GetPhysicalDeviceWaylandPresentationSupportKHR(physicalDevice, queueFamilyIndex, display);
}

#endif  // VK_USE_PLATFORM_WAYLAND_KHR
#ifdef VK_USE_PLATFORM_ANDROID_KHR
static VKAPI_ATTR VkResult VKAPI_CALL vkmock_CreateAndroidSurfaceKHR(VkInstance instance,
                                                                     const VkAndroidSurfaceCreateInfoKHR* pCreateInfo,
                                                                     const VkAllocationCallbacks* pAllocator,
                                                                     VkSurfaceKHR* pSurface) {
    return vkmock::CreateAndroidSurfaceKHR(instance, pCreateInfo, pAllocator, pSurface);
}

#endif  // VK_USE_PLATFORM_ANDROID_KHR
#ifdef VK_USE_PLATFORM_WIN32_KHR
static VKAPI_ATTR VkResult VKAPI_CALL vkmock_CreateWin32SurfaceKHR(VkInstance instance,
                                                                   const VkWin32SurfaceCreateInfoKHR* pCreateInfo,
                                                                   const VkAllocationCallbacks* pAllocator,
                                                                   VkSurfaceKHR* pSurface) {
    return vkmock::CreateWin32SurfaceKHR(instance, pCreateInfo, pAllocator, pSurface);
}

static VKAPI_ATTR VkBool32 VKAPI_CALL vkmock_GetPhysicalDeviceWin32PresentationSupportKHR(VkPhysicalDevice physicalDevice,
                                                                                          uint32_t queueFamilyIndex) {
    return vkmock::GetPhysicalDeviceWin32PresentationSupportKHR(physicalDevice, queueFamilyIndex);
}

#endif  // VK_USE_PLATFORM_WIN32_KHR
static VKAPI_ATTR VkResult VKAPI_CALL vkmock_GetPhysicalDeviceVideoCapabilitiesKHR(VkPhysicalDevice physicalDevice,
                                                                                   const VkVideoProfileInfoKHR* pVideoProfile,
                                                                                   VkVideoCapabilitiesKHR* pCapabilities) {
    return vkmock::GetPhysicalDeviceVideoCapabilitiesKHR(physicalDevice, pVideoProfile, pCapabilities);
}

static VKAPI_ATTR VkResult VKAPI_CALL vkmock_GetPhysicalDeviceVideoFormatPropertiesKHR(
    VkPhysicalDevice physicalDevice, const VkPhysicalDeviceVideoFormatInfoKHR* pVideoFormatInfo,
    uint32_t* pVideoFormatPropertyCount, VkVideoFormatPropertiesKHR* pVideoFormatProperties) {
    return vkmock::GetPhysicalDeviceVideoFormatPropertiesKHR(physicalDevice, pVideoFormatInfo, pVideoFormatPropertyCount,
                                                             pVideoFormatProperties);
}

static VKAPI_ATTR VkResult VKAPI_CALL vkmock_CreateVideoSessionKHR(VkDevice device, const VkVideoSessionCreateInfoKHR* pCreateInfo,
                                                                   const VkAllocationCallbacks* pAllocator,
                                                                   VkVideoSessionKHR* pVideoSession) {
    return vkmock::CreateVideoSessionKHR(device, pCreateInfo, pAllocator, pVideoSession);
}

static VKAPI_ATTR void VKAPI_CALL vkmock_DestroyVideoSessionKHR(VkDevice device, VkVideoSessionKHR videoSession,
                                                                const VkAllocationCallbacks* pAllocator) {
    return vkmock::DestroyVideoSessionKHR(device, videoSession, pAllocator);
}

static VKAPI_ATTR VkResult VKAPI_CALL
vkmock_GetVideoSessionMemoryRequirementsKHR(VkDevice device, VkVideoSessionKHR videoSession, uint32_t* pMemoryRequirementsCount,
                                            VkVideoSessionMemoryRequirementsKHR* pMemoryRequirements) {
    return vkmock::GetVideoSessionMemoryRequirementsKHR(device, videoSession, pMemoryRequirementsCount, pMemoryRequirements);
}

static VKAPI_ATTR VkResult VKAPI_CALL
vkmock_BindVideoSessionMemoryKHR(VkDevice device, VkVideoSessionKHR videoSession, uint32_t bindSessionMemoryInfoCount,
                                 const VkBindVideoSessionMemoryInfoKHR* pBindSessionMemoryInfos) {
    return vkmock::BindVideoSessionMemoryKHR(device, videoSession, bindSessionMemoryInfoCount, pBindSessionMemoryInfos);
}

static VKAPI_ATTR VkResult VKAPI_CALL vkmock_CreateVideoSessionParametersKHR(
    VkDevice device, const VkVideoSessionParametersCreateInfoKHR* pCreateInfo, const VkAllocationCallbacks* pAllocator,
    VkVideoSessionParametersKHR* pVideoSessionParameters) {
    return vkmock::CreateVideoSessionParametersKHR(device, pCreateInfo, pAllocator, pVideoSessionParameters);
}

static VKAPI_ATTR VkResult VKAPI_CALL vkmock_UpdateVideoSessionParametersKHR(
    VkDevice device, VkVideoSessionParametersKHR videoSessionParameters, const VkVideoSessionParametersUpdateInfoKHR* pUpdateInfo) {
    return vkmock::UpdateVideoSessionParametersKHR(device, videoSessionParameters, pUpdateInfo);
}

static VKAPI_ATTR void VKAPI_CALL vkmock_DestroyVideoSessionParametersKHR(VkDevice device,
                                                                          VkVideoSessionParametersKHR videoSessionParameters,
                                                                          const VkAllocationCallbacks* pAllocator) {
    return vkmock::DestroyVideoSessionParametersKHR(device, videoSessionParameters, pAllocator);
}

static VKAPI_ATTR void VKAPI_CALL vkmock_CmdBeginVideoCodingKHR(VkCommandBuffer commandBuffer,
                                                                const VkVideoBeginCodingInfoKHR* pBeginInfo) {
    return vkmock::CmdBeginVideoCodingKHR(commandBuffer, pBeginInfo);
}

static VKAPI_ATTR void VKAPI_CALL vkmock_CmdEndVideoCodingKHR(VkCommandBuffer commandBuffer,
                                                              const VkVideoEndCodingInfoKHR* pEndCodingInfo) {
    return vkmock::CmdEndVideoCodingKHR(commandBuffer, pEndCodingInfo);
}

static VKAPI_ATTR void VKAPI_CALL vkmock_CmdControlVideoCodingKHR(VkCommandBuffer commandBuffer,
                                                                  const VkVideoCodingControlInfoKHR* pCodingControlInfo) {
    return vkmock::CmdControlVideoCodingKHR(commandBuffer, pCodingControlInfo);
}

static VKAPI_ATTR void VKAPI_CALL vkmock_CmdDecodeVideoKHR(VkCommandBuffer commandBuffer, const VkVideoDecodeInfoKHR* pDecodeInfo) {
    return vkmock::CmdDecodeVideoKHR(commandBuffer, pDecodeInfo);
}

static VKAPI_ATTR void VKAPI_CALL vkmock_CmdBeginRenderingKHR(VkCommandBuffer commandBuffer,
                                                              const VkRenderingInfo* pRenderingInfo) {
    return vkmock::CmdBeginRenderingKHR(commandBuffer, pRenderingInfo);
}

static VKAPI_ATTR void VKAPI_CALL vkmock_CmdEndRenderingKHR(VkCommandBuffer commandBuffer) {
    return vkmock::CmdEndRenderingKHR(commandBuffer);
}

static VKAPI_ATTR void VKAPI_CALL vkmock_GetPhysicalDeviceFeatures2KHR(VkPhysicalDevice physicalDevice,
                                                                       VkPhysicalDeviceFeatures2* pFeatures) {
    return vkmock::GetPhysicalDeviceFeatures2KHR(physicalDevice, pFeatures);
}

static VKAPI_ATTR void VKAPI_CALL vkmock_GetPhysicalDeviceProperties2KHR(VkPhysicalDevice physicalDevice,
                                                                         VkPhysicalDeviceProperties2* pProperties) {
    return vkmock::GetPhysicalDeviceProperties2KHR(physicalDevice, pProperties);
}

static VKAPI_ATTR void VKAPI_CALL vkmock_GetPhysicalDeviceFormatProperties2KHR(VkPhysicalDevice physicalDevice, VkFormat format,
                                                                               VkFormatProperties2* pFormatProperties) {
    return vkmock::GetPhysicalDeviceFormatProperties2KHR(physicalDevice, format, pFormatProperties);
}

static VKAPI_ATTR VkResult VKAPI_CALL vkmock_GetPhysicalDeviceImageFormatProperties2KHR(
    VkPhysicalDevice physicalDevice, const VkPhysicalDeviceImageFormatInfo2* pImageFormatInfo,
    VkImageFormatProperties2* pImageFormatProperties) {
    return vkmock::GetPhysicalDeviceImageFormatProperties2KHR(physicalDevice, pImageFormatInfo, pImageFormatProperties);
}

static VKAPI_ATTR void VKAPI_CALL vkmock_GetPhysicalDeviceQueueFamilyProperties2KHR(
    VkPhysicalDevice physicalDevice, uint32_t* pQueueFamilyPropertyCount, VkQueueFamilyProperties2* pQueueFamilyProperties) {
    return vkmock::GetPhysicalDeviceQueueFamilyProperties2KHR(physicalDevice, pQueueFamilyPropertyCount, pQueueFamilyProperties);
}

static VKAPI_ATTR void VKAPI_CALL vkmock_GetPhysicalDeviceMemoryProperties2KHR(
    VkPhysicalDevice physicalDevice, VkPhysicalDeviceMemoryProperties2* pMemoryProperties) {
    return vkmock::GetPhysicalDeviceMemoryProperties2KHR(physicalDevice, pMemoryProperties);
}

static VKAPI_ATTR void VKAPI_CALL vkmock_GetPhysicalDeviceSparseImageFormatProperties2KHR(
    VkPhysicalDevice physicalDevice, const VkPhysicalDeviceSparseImageFormatInfo2* pFormatInfo, uint32_t* pPropertyCount,
    VkSparseImageFormatProperties2* pProperties) {
    return vkmock::GetPhysicalDeviceSparseImageFormatProperties2KHR(physicalDevice, pFormatInfo, pPropertyCount, pProperties);
}

static VKAPI_ATTR void VKAPI_CALL vkmock_GetDeviceGroupPeerMemoryFeaturesKHR(VkDevice device, uint32_t heapIndex,
                                                                             uint32_t localDeviceIndex, uint32_t remoteDeviceIndex,
                                                                             VkPeerMemoryFeatureFlags* pPeerMemoryFeatures) {
    return vkmock::GetDeviceGroupPeerMemoryFeaturesKHR(device, heapIndex, localDeviceIndex, remoteDeviceIndex, pPeerMemoryFeatures);
}

static VKAPI_ATTR void VKAPI_CALL vkmock_CmdSetDeviceMaskKHR(VkCommandBuffer commandBuffer, uint32_t deviceMask) {
    return vkmock::CmdSetDeviceMaskKHR(commandBuffer, deviceMask);
}

static VKAPI_ATTR void VKAPI_CALL vkmock_CmdDispatchBaseKHR(VkCommandBuffer commandBuffer, uint32_t baseGroupX, uint32_t baseGroupY,
                                                            uint32_t baseGroupZ, uint32_t groupCountX, uint32_t groupCountY,
                                                            uint32_t groupCountZ) {
    return vkmock::CmdDispatchBaseKHR(commandBuffer, baseGroupX, baseGroupY, baseGroupZ, groupCountX, groupCountY, groupCountZ);
}

static VKAPI_ATTR void VKAPI_CALL vkmock_TrimCommandPoolKHR(VkDevice device, VkCommandPool commandPool,
                                                            VkCommandPoolTrimFlags flags) {
    return vkmock::TrimCommandPoolKHR(device, commandPool, flags);
}

static VKAPI_ATTR VkResult VKAPI_CALL vkmock_EnumeratePhysicalDeviceGroupsKHR(
    VkInstance instance, uint32_t* pPhysicalDeviceGroupCount, VkPhysicalDeviceGroupProperties* pPhysicalDeviceGroupProperties) {
    return vkmock::EnumeratePhysicalDeviceGroupsKHR(instance, pPhysicalDeviceGroupCount, pPhysicalDeviceGroupProperties);
}

static VKAPI_ATTR void VKAPI_CALL vkmock_GetPhysicalDeviceExternalBufferPropertiesKHR(
    VkPhysicalDevice physicalDevice, const VkPhysicalDeviceExternalBufferInfo* pExternalBufferInfo,
    VkExternalBufferProperties* pExternalBufferProperties) {
    return vkmock::GetPhysicalDeviceExternalBufferPropertiesKHR(physicalDevice, pExternalBufferInfo, pExternalBufferProperties);
}

#ifdef VK_USE_PLATFORM_WIN32_KHR
static VKAPI_ATTR VkResult VKAPI_CALL vkmock_GetMemoryWin32HandleKHR(VkDevice device,
                                                                     const VkMemoryGetWin32HandleInfoKHR* pGetWin32HandleInfo,
                                                                     HANDLE* pHandle) {
    return vkmock::GetMemoryWin32HandleKHR(device, pGetWin32HandleInfo, pHandle);
}

static VKAPI_ATTR VkResult VKAPI_CALL
vkmock_GetMemoryWin32HandlePropertiesKHR(VkDevice device, VkExternalMemoryHandleTypeFlagBits handleType, HANDLE handle,
                                         VkMemoryWin32HandlePropertiesKHR* pMemoryWin32HandleProperties) {
    return vkmock::GetMemoryWin32HandlePropertiesKHR(device, handleType, handle, pMemoryWin32HandleProperties);
}

#endif  // VK_USE_PLATFORM_WIN32_KHR
static VKAPI_ATTR VkResult VKAPI_CALL vkmock_GetMemoryFdKHR(VkDevice device, const VkMemoryGetFdInfoKHR* pGetFdInfo, int* pFd) {
    return vkmock::GetMemoryFdKHR(device, pGetFdInfo, pFd);
}

static VKAPI_ATTR VkResult VKAPI_CALL vkmock_GetMemoryFdPropertiesKHR(VkDevice device,
                                                                      VkExternalMemoryHandleTypeFlagBits handleType, int fd,
                                                                      VkMemoryFdPropertiesKHR* pMemoryFdProperties) {
    return vkmock::GetMemoryFdPropertiesKHR(device, handleType, fd, pMemoryFdProperties);
}

static VKAPI_ATTR void VKAPI_CALL vkmock_GetPhysicalDeviceExternalSemaphorePropertiesKHR(
    VkPhysicalDevice physicalDevice, const VkPhysicalDeviceExternalSemaphoreInfo* pExternalSemaphoreInfo,
    VkExternalSemaphoreProperties* pExternalSemaphoreProperties) {
    return vkmock::GetPhysicalDeviceExternalSemaphorePropertiesKHR(physicalDevice, pExternalSemaphoreInfo,
                                                                   pExternalSemaphoreProperties);
}

#ifdef VK_USE_PLATFORM_WIN32_KHR
static VKAPI_ATTR VkResult VKAPI_CALL
vkmock_ImportSemaphoreWin32HandleKHR(VkDevice device, const VkImportSemaphoreWin32HandleInfoKHR* pImportSemaphoreWin32HandleInfo) {
    return vkmock::ImportSemaphoreWin32HandleKHR(device, pImportSemaphoreWin32HandleInfo);
}

static VKAPI_ATTR VkResult VKAPI_CALL vkmock_GetSemaphoreWin32HandleKHR(VkDevice device,
                                                                        const VkSemaphoreGetWin32HandleInfoKHR* pGetWin32HandleInfo,
                                                                        HANDLE* pHandle) {
    return vkmock::GetSemaphoreWin32HandleKHR(device, pGetWin32HandleInfo, pHandle);
}

#endif  // VK_USE_PLATFORM_WIN32_KHR
static VKAPI_ATTR VkResult VKAPI_CALL vkmock_ImportSemaphoreFdKHR(VkDevice device,
                                                                  const VkImportSemaphoreFdInfoKHR* pImportSemaphoreFdInfo) {
    return vkmock::ImportSemaphoreFdKHR(device, pImportSemaphoreFdInfo);
}

static VKAPI_ATTR VkResult VKAPI_CALL vkmock_GetSemaphoreFdKHR(VkDevice device, const VkSemaphoreGetFdInfoKHR* pGetFdInfo,
                                                               int* pFd) {
    return vkmock::GetSemaphoreFdKHR(device, pGetFdInfo, pFd);
}

static VKAPI_ATTR void VKAPI_CALL vkmock_CmdPushDescriptorSetKHR(VkCommandBuffer commandBuffer,
                                                                 VkPipelineBindPoint pipelineBindPoint, VkPipelineLayout layout,
                                                                 uint32_t set, uint32_t descriptorWriteCount,
                                                                 const VkWriteDescriptorSet* pDescriptorWrites) {
    return vkmock::CmdPushDescriptorSetKHR(commandBuffer, pipelineBindPoint, layout, set, descriptorWriteCount, pDescriptorWrites);
}

static VKAPI_ATTR void VKAPI_CALL vkmock_CmdPushDescriptorSetWithTemplateKHR(VkCommandBuffer commandBuffer,
                                                                             VkDescriptorUpdateTemplate descriptorUpdateTemplate,
                                                                             VkPipelineLayout layout, uint32_t set,
                                                                             const void* pData) {
    return vkmock::CmdPushDescriptorSetWithTemplateKHR(commandBuffer, descriptorUpdateTemplate, layout, set, pData);
}

static VKAPI_ATTR VkResult VKAPI_CALL vkmock_CreateDescriptorUpdateTemplateKHR(
    VkDevice device, const VkDescriptorUpdateTemplateCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator,
    VkDescriptorUpdateTemplate* pDescriptorUpdateTemplate) {
    return vkmock::CreateDescriptorUpdateTemplateKHR(device, pCreateInfo, pAllocator, pDescriptorUpdateTemplate);
}

static VKAPI_ATTR void VKAPI_CALL vkmock_DestroyDescriptorUpdateTemplateKHR(VkDevice device,
                                                                            VkDescriptorUpdateTemplate descriptorUpdateTemplate,
                                                                            const VkAllocationCallbacks* pAllocator) {
    return vkmock::DestroyDescriptorUpdateTemplateKHR(device, descriptorUpdateTemplate, pAllocator);
}

static VKAPI_ATTR void VKAPI_CALL vkmock_UpdateDescriptorSetWithTemplateKHR(VkDevice device, VkDescriptorSet descriptorSet,
                                                                            VkDescriptorUpdateTemplate descriptorUpdateTemplate,
                                                                            const void* pData) {
    return vkmock::UpdateDescriptorSetWithTemplateKHR(device, descriptorSet, descriptorUpdateTemplate, pData);
}

static VKAPI_ATTR VkResult VKAPI_CALL vkmock_CreateRenderPass2KHR(VkDevice device, const VkRenderPassCreateInfo2* pCreateInfo,
                                                                  const VkAllocationCallbacks* pAllocator,
                                                                  VkRenderPass* pRenderPass) {
    return vkmock::CreateRenderPass2KHR(device, pCreateInfo, pAllocator, pRenderPass);
}

static VKAPI_ATTR void VKAPI_CALL vkmock_CmdBeginRenderPass2KHR(VkCommandBuffer commandBuffer,
                                                                const VkRenderPassBeginInfo* pRenderPassBegin,
                                                                const VkSubpassBeginInfo* pSubpassBeginInfo) {
    return vkmock::CmdBeginRenderPass2KHR(commandBuffer, pRenderPassBegin, pSubpassBeginInfo);
}

static VKAPI_ATTR void VKAPI_CALL vkmock_CmdNextSubpass2KHR(VkCommandBuffer commandBuffer,
                                                            const VkSubpassBeginInfo* pSubpassBeginInfo,
                                                            const VkSubpassEndInfo* pSubpassEndInfo) {
    return vkmock::CmdNextSubpass2KHR(commandBuffer, pSubpassBeginInfo, pSubpassEndInfo);
}

static VKAPI_ATTR void VKAPI_CALL vkmock_CmdEndRenderPass2KHR(VkCommandBuffer commandBuffer,
                                                              const VkSubpassEndInfo* pSubpassEndInfo) {
    return vkmock::CmdEndRenderPass2KHR(commandBuffer, pSubpassEndInfo);
}

static VKAPI_ATTR VkResult VKAPI_CALL vkmock_GetSwapchainStatusKHR(VkDevice device, VkSwapchainKHR swapchain) {
    return vkmock::GetSwapchainStatusKHR(device, swapchain);
}

static VKAPI_ATTR void VKAPI_CALL vkmock_GetPhysicalDeviceExternalFencePropertiesKHR(
    VkPhysicalDevice physicalDevice, const VkPhysicalDeviceExternalFenceInfo* pExternalFenceInfo,
    VkExternalFenceProperties* pExternalFenceProperties) {
    return vkmock::GetPhysicalDeviceExternalFencePropertiesKHR(physicalDevice, pExternalFenceInfo, pExternalFenceProperties);
}

#ifdef VK_USE_PLATFORM_WIN32_KHR
static VKAPI_ATTR VkResult VKAPI_CALL
vkmock_ImportFenceWin32HandleKHR(VkDevice device, const VkImportFenceWin32HandleInfoKHR* pImportFenceWin32HandleInfo) {
    return vkmock::ImportFenceWin32HandleKHR(device, pImportFenceWin32HandleInfo);
}

static VKAPI_ATTR VkResult VKAPI_CALL vkmock_GetFenceWin32HandleKHR(VkDevice device,
                                                                    const VkFenceGetWin32HandleInfoKHR* pGetWin32HandleInfo,
                                                                    HANDLE* pHandle) {
    return vkmock::GetFenceWin32HandleKHR(device, pGetWin32HandleInfo, pHandle);
}

#endif  // VK_USE_PLATFORM_WIN32_KHR
static VKAPI_ATTR VkResult VKAPI_CALL vkmock_ImportFenceFdKHR(VkDevice device, const VkImportFenceFdInfoKHR* pImportFenceFdInfo) {
    return vkmock::ImportFenceFdKHR(device, pImportFenceFdInfo);
}

static VKAPI_ATTR VkResult VKAPI_CALL vkmock_GetFenceFdKHR(VkDevice device, const VkFenceGetFdInfoKHR* pGetFdInfo, int* pFd) {
    return vkmock::GetFenceFdKHR(device, pGetFdInfo, pFd);
}

static VKAPI_ATTR VkResult VKAPI_CALL vkmock_EnumeratePhysicalDeviceQueueFamilyPerformanceQueryCountersKHR(
    VkPhysicalDevice physicalDevice, uint32_t queueFamilyIndex, uint32_t* pCounterCount, VkPerformanceCounterKHR* pCounters,
    VkPerformanceCounterDescriptionKHR* pCounterDescriptions) {
    return vkmock::EnumeratePhysicalDeviceQueueFamilyPerformanceQueryCountersKHR(physicalDevice, queueFamilyIndex, pCounterCount,
                                                                                 pCounters, pCounterDescriptions);
}

static VKAPI_ATTR void VKAPI_CALL vkmock_GetPhysicalDeviceQueueFamilyPerformanceQueryPassesKHR(
    VkPhysicalDevice physicalDevice, const VkQueryPoolPerformanceCreateInfoKHR* pPerformanceQueryCreateInfo, uint32_t* pNumPasses) {
    return vkmock::GetPhysicalDeviceQueueFamilyPerformanceQueryPassesKHR(physicalDevice, pPerformanceQueryCreateInfo, pNumPasses);
}

static VKAPI_ATTR VkResult VKAPI_CALL vkmock_AcquireProfilingLockKHR(VkDevice device, const VkAcquireProfilingLockInfoKHR* pInfo) {
    return vkmock::AcquireProfilingLockKHR(device, pInfo);
}

static VKAPI_ATTR void VKAPI_CALL vkmock_ReleaseProfilingLockKHR(VkDevice device) {
    return vkmock::ReleaseProfilingLockKHR(device);
}

static VKAPI_ATTR VkResult VKAPI_CALL vkmock_GetPhysicalDeviceSurfaceCapabilities2KHR(
    VkPhysicalDevice physicalDevice, const VkPhysicalDeviceSurfaceInfo2KHR* pSurfaceInfo,
    VkSurfaceCapabilities2KHR* pSurfaceCapabilities) {
    return vkmock::GetPhysicalDeviceSurfaceCapabilities2KHR(physicalDevice, pSurfaceInfo, pSurfaceCapabilities);
}

static VKAPI_ATTR VkResult VKAPI_CALL
vkmock_GetPhysicalDeviceSurfaceFormats2KHR(VkPhysicalDevice physicalDevice, const VkPhysicalDeviceSurfaceInfo2KHR* pSurfaceInfo,
                                           uint32_t* pSurfaceFormatCount, VkSurfaceFormat2KHR* pSurfaceFormats) {
    return vkmock::GetPhysicalDeviceSurfaceFormats2KHR(physicalDevice, pSurfaceInfo, pSurfaceFormatCount, pSurfaceFormats);
}

static VKAPI_ATTR VkResult VKAPI_CALL vkmock_GetPhysicalDeviceDisplayProperties2KHR(VkPhysicalDevice physicalDevice,
                                                                                    uint32_t* pPropertyCount,
                                                                                    VkDisplayProperties2KHR* pProperties) {
    return vkmock::GetPhysicalDeviceDisplayProperties2KHR(physicalDevice, pPropertyCount, pProperties);
}

static VKAPI_ATTR VkResult VKAPI_CALL vkmock_GetPhysicalDeviceDisplayPlaneProperties2KHR(
    VkPhysicalDevice physicalDevice, uint32_t* pPropertyCount, VkDisplayPlaneProperties2KHR* pProperties) {
    return vkmock::GetPhysicalDeviceDisplayPlaneProperties2KHR(physicalDevice, pPropertyCount, pProperties);
}

static VKAPI_ATTR VkResult VKAPI_CALL vkmock_GetDisplayModeProperties2KHR(VkPhysicalDevice physicalDevice, VkDisplayKHR display,
                                                                          uint32_t* pPropertyCount,
                                                                          VkDisplayModeProperties2KHR* pProperties) {
    return vkmock::GetDisplayModeProperties2KHR(physicalDevice, display, pPropertyCount, pProperties);
}

static VKAPI_ATTR VkResult VKAPI_CALL vkmock_GetDisplayPlaneCapabilities2KHR(VkPhysicalDevice physicalDevice,
                                                                             const VkDisplayPlaneInfo2KHR* pDisplayPlaneInfo,
                                                                             VkDisplayPlaneCapabilities2KHR* pCapabilities) {
    return vkmock::GetDisplayPlaneCapabilities2KHR(physicalDevice, pDisplayPlaneInfo, pCapabilities);
}

static VKAPI_ATTR void VKAPI_CALL vkmock_GetImageMemoryRequirements2KHR(VkDevice device,
                                                                        const VkImageMemoryRequirementsInfo2* pInfo,
                                                                        VkMemoryRequirements2* pMemoryRequirements) {
    return vkmock::GetImageMemoryRequirements2KHR(device, pInfo, pMemoryRequirements);
}

static VKAPI_ATTR void VKAPI_CALL vkmock_GetBufferMemoryRequirements2KHR(VkDevice device,
                                                                         const VkBufferMemoryRequirementsInfo2* pInfo,
                                                                         VkMemoryRequirements2* pMemoryRequirements) {
    return vkmock::GetBufferMemoryRequirements2KHR(device, pInfo, pMemoryRequirements);
}

static VKAPI_ATTR void VKAPI_CALL vkmock_GetImageSparseMemoryRequirements2KHR(
    VkDevice device, const VkImageSparseMemoryRequirementsInfo2* pInfo, uint32_t* pSparseMemoryRequirementCount,
    VkSparseImageMemoryRequirements2* pSparseMemoryRequirements) {
    return vkmock::GetImageSparseMemoryRequirements2KHR(device, pInfo, pSparseMemoryRequirementCount, pSparseMemoryRequirements);
}

static VKAPI_ATTR VkResult VKAPI_CALL vkmock_CreateSamplerYcbcrConversionKHR(VkDevice device,
                                                                             const VkSamplerYcbcrConversionCreateInfo* pCreateInfo,
                                                                             const VkAllocationCallbacks* pAllocator,
                                                                             VkSamplerYcbcrConversion* pYcbcrConversion) {
    return vkmock::CreateSamplerYcbcrConversionKHR(device, pCreateInfo, pAllocator, pYcbcrConversion);
}

static VKAPI_ATTR void VKAPI_CALL vkmock_DestroySamplerYcbcrConversionKHR(VkDevice device, VkSamplerYcbcrConversion ycbcrConversion,
                                                                          const VkAllocationCallbacks* pAllocator) {
    return vkmock::DestroySamplerYcbcrConversionKHR(device, ycbcrConversion, pAllocator);
}

static VKAPI_ATTR VkResult VKAPI_CALL vkmock_BindBufferMemory2KHR(VkDevice device, uint32_t bindInfoCount,
                                                                  const VkBindBufferMemoryInfo* pBindInfos) {
    return vkmock::BindBufferMemory2KHR(device, bindInfoCount, pBindInfos);
}

static VKAPI_ATTR VkResult VKAPI_CALL vkmock_BindImageMemory2KHR(VkDevice device, uint32_t bindInfoCount,
                                                                 const VkBindImageMemoryInfo* pBindInfos) {
    return vkmock::BindImageMemory2KHR(device, bindInfoCount, pBindInfos);
}

static VKAPI_ATTR void VKAPI_CALL vkmock_GetDescriptorSetLayoutSupportKHR(VkDevice device,
                                                                          const VkDescriptorSetLayoutCreateInfo* pCreateInfo,
                                                                          VkDescriptorSetLayoutSupport* pSupport) {
    return vkmock::GetDescriptorSetLayoutSupportKHR(device, pCreateInfo, pSupport);
}

static VKAPI_ATTR void VKAPI_CALL vkmock_CmdDrawIndirectCountKHR(VkCommandBuffer commandBuffer, VkBuffer buffer,
                                                                 VkDeviceSize offset, VkBuffer countBuffer,
                                                                 VkDeviceSize countBufferOffset, uint32_t maxDrawCount,
                                                                 uint32_t stride) {
    return vkmock::CmdDrawIndirectCountKHR(commandBuffer, buffer, offset, countBuffer, countBufferOffset, maxDrawCount, stride);
}

static VKAPI_ATTR void VKAPI_CALL vkmock_CmdDrawIndexedIndirectCountKHR(VkCommandBuffer commandBuffer, VkBuffer buffer,
                                                                        VkDeviceSize offset, VkBuffer countBuffer,
                                                                        VkDeviceSize countBufferOffset, uint32_t maxDrawCount,
                                                                        uint32_t stride) {
    return vkmock::CmdDrawIndexedIndirectCountKHR(commandBuffer, buffer, offset, countBuffer, countBufferOffset, maxDrawCount,
                                                  stride);
}

static VKAPI_ATTR VkResult VKAPI_CALL vkmock_GetSemaphoreCounterValueKHR(VkDevice device, VkSemaphore semaphore, uint64_t* pValue) {
    return vkmock::GetSemaphoreCounterValueKHR(device, semaphore, pValue);
}

static VKAPI_ATTR VkResult VKAPI_CALL vkmock_WaitSemaphoresKHR(VkDevice device, const VkSemaphoreWaitInfo* pWaitInfo,
                                                               uint64_t timeout) {
    return vkmock::WaitSemaphoresKHR(device, pWaitInfo, timeout);
}

static VKAPI_ATTR VkResult VKAPI_CALL vkmock_SignalSemaphoreKHR(VkDevice device, const VkSemaphoreSignalInfo* pSignalInfo) {
    return vkmock::SignalSemaphoreKHR(device, pSignalInfo);
}

static VKAPI_ATTR VkResult VKAPI_CALL
vkmock_GetPhysicalDeviceFragmentShadingRatesKHR(VkPhysicalDevice physicalDevice, uint32_t* pFragmentShadingRateCount,
                                                VkPhysicalDeviceFragmentShadingRateKHR* pFragmentShadingRates) {
    return vkmock::GetPhysicalDeviceFragmentShadingRatesKHR(physicalDevice, pFragmentShadingRateCount, pFragmentShadingRates);
}

static VKAPI_ATTR void VKAPI_CALL vkmock_CmdSetFragmentShadingRateKHR(VkCommandBuffer commandBuffer,
                                                                      const VkExtent2D* pFragmentSize,
                                                                      const VkFragmentShadingRateCombinerOpKHR combinerOps[2]) {
    return vkmock::CmdSetFragmentShadingRateKHR(commandBuffer, pFragmentSize, combinerOps);
}

static VKAPI_ATTR void VKAPI_CALL vkmock_CmdSetRenderingAttachmentLocationsKHR(
    VkCommandBuffer commandBuffer, const VkRenderingAttachmentLocationInfo* pLocationInfo) {
    return vkmock::CmdSetRenderingAttachmentLocationsKHR(commandBuffer, pLocationInfo);
}

static VKAPI_ATTR void VKAPI_CALL vkmock_CmdSetRenderingInputAttachmentIndicesKHR(
    VkCommandBuffer commandBuffer, const VkRenderingInputAttachmentIndexInfo* pInputAttachmentIndexInfo) {
    return vkmock::CmdSetRenderingInputAttachmentIndicesKHR(commandBuffer, pInputAttachmentIndexInfo);
}

static VKAPI_ATTR VkResult VKAPI_CALL vkmock_WaitForPresentKHR(VkDevice device, VkSwapchainKHR swapchain, uint64_t presentId,
                                                               uint64_t timeout) {
    return vkmock::WaitForPresentKHR(device, swapchain, presentId, timeout);
}

static VKAPI_ATTR VkDeviceAddress VKAPI_CALL vkmock_GetBufferDeviceAddressKHR(VkDevice device,
                                                                              const VkBufferDeviceAddressInfo* pInfo) {
    return vkmock::GetBufferDeviceAddressKHR(device, pInfo);
}

static VKAPI_ATTR uint64_t VKAPI_CALL vkmock_GetBufferOpaqueCaptureAddressKHR(VkDevice device,
                                                                              const VkBufferDeviceAddressInfo* pInfo) {
    return vkmock::GetBufferOpaqueCaptureAddressKHR(device, pInfo);
}

static VKAPI_ATTR uint64_t VKAPI_CALL
vkmock_GetDeviceMemoryOpaqueCaptureAddressKHR(VkDevice device, const VkDeviceMemoryOpaqueCaptureAddressInfo* pInfo) {
    return vkmock::GetDeviceMemoryOpaqueCaptureAddressKHR(device, pInfo);
}

static VKAPI_ATTR VkResult VKAPI_CALL vkmock_CreateDeferredOperationKHR(VkDevice device, const VkAllocationCallbacks* pAllocator,
                                                                        VkDeferredOperationKHR* pDeferredOperation) {
    return vkmock::CreateDeferredOperationKHR(device, pAllocator, pDeferredOperation);
}

static VKAPI_ATTR void VKAPI_CALL vkmock_DestroyDeferredOperationKHR(VkDevice device, VkDeferredOperationKHR operation,
                                                                     const VkAllocationCallbacks* pAllocator) {
    return vkmock::DestroyDeferredOperationKHR(device, operation, pAllocator);
}

static VKAPI_ATTR uint32_t VKAPI_CALL vkmock_GetDeferredOperationMaxConcurrencyKHR(VkDevice device,
                                                                                   VkDeferredOperationKHR operation) {
    return vkmock::GetDeferredOperationMaxConcurrencyKHR(device, operation);
}

static VKAPI_ATTR VkResult VKAPI_CALL vkmock_GetDeferredOperationResultKHR(VkDevice device, VkDeferredOperationKHR operation) {
    return vkmock::GetDeferredOperationResultKHR(device, operation);
}

static VKAPI_ATTR VkResult VKAPI_CALL vkmock_DeferredOperationJoinKHR(VkDevice device, VkDeferredOperationKHR operation) {
    return vkmock::DeferredOperationJoinKHR(device, operation);
}

static VKAPI_ATTR VkResult VKAPI_CALL vkmock_GetPipelineExecutablePropertiesKHR(VkDevice device,
                                                                                const VkPipelineInfoKHR* pPipelineInfo,
                                                                                uint32_t* pExecutableCount,
                                                                                VkPipelineExecutablePropertiesKHR* pProperties) {
    return vkmock::GetPipelineExecutablePropertiesKHR(device, pPipelineInfo, pExecutableCount, pProperties);
}

static VKAPI_ATTR VkResult VKAPI_CALL vkmock_GetPipelineExecutableStatisticsKHR(VkDevice device,
                                                                                const VkPipelineExecutableInfoKHR* pExecutableInfo,
                                                                                uint32_t* pStatisticCount,
                                                                                VkPipelineExecutableStatisticKHR* pStatistics) {
    return vkmock::GetPipelineExecutableStatisticsKHR(device, pExecutableInfo, pStatisticCount, pStatistics);
}

static VKAPI_ATTR VkResult VKAPI_CALL vkmock_GetPipelineExecutableInternalRepresentationsKHR(
    VkDevice device, const VkPipelineExecutableInfoKHR* pExecutableInfo, uint32_t* pInternalRepresentationCount,
    VkPipelineExecutableInternalRepresentationKHR* pInternalRepresentations) {
    return vkmock::GetPipelineExecutableInternalRepresentationsKHR(device, pExecutableInfo, pInternalRepresentationCount,
                                                                   pInternalRepresentations);
}

static VKAPI_ATTR VkResult VKAPI_CALL vkmock_MapMemory2KHR(VkDevice device, const VkMemoryMapInfo* pMemoryMapInfo, void** ppData) {
    return vkmock::MapMemory2KHR(device, pMemoryMapInfo, ppData);
}

static VKAPI_ATTR VkResult VKAPI_CALL vkmock_UnmapMemory2KHR(VkDevice device, const VkMemoryUnmapInfo* pMemoryUnmapInfo) {
    return vkmock::UnmapMemory2KHR(device, pMemoryUnmapInfo);
}

static VKAPI_ATTR VkResult VKAPI_CALL vkmock_GetPhysicalDeviceVideoEncodeQualityLevelPropertiesKHR(
    VkPhysicalDevice physicalDevice, const VkPhysicalDeviceVideoEncodeQualityLevelInfoKHR* pQualityLevelInfo,
    VkVideoEncodeQualityLevelPropertiesKHR* pQualityLevelProperties) {
    return vkmock::GetPhysicalDeviceVideoEncodeQualityLevelPropertiesKHR(physicalDevice, pQualityLevelInfo,
                                                                         pQualityLevelProperties);
}

static VKAPI_ATTR VkResult VKAPI_CALL vkmock_GetEncodedVideoSessionParametersKHR(
    VkDevice device, const VkVideoEncodeSessionParametersGetInfoKHR* pVideoSessionParametersInfo,
    VkVideoEncodeSessionParametersFeedbackInfoKHR* pFeedbackInfo, size_t* pDataSize, void* pData) {
    return vkmock::GetEncodedVideoSessionParametersKHR(device, pVideoSessionParametersInfo, pFeedbackInfo, pDataSize, pData);
}

static VKAPI_ATTR void VKAPI_CALL vkmock_CmdEncodeVideoKHR(VkCommandBuffer commandBuffer, const VkVideoEncodeInfoKHR* pEncodeInfo) {
    return vkmock::CmdEncodeVideoKHR(commandBuffer, pEncodeInfo);
}

static VKAPI_ATTR void VKAPI_CALL vkmock_CmdSetEvent2KHR(VkCommandBuffer commandBuffer, VkEvent event,
                                                         const VkDependencyInfo* pDependencyInfo) {
    return vkmock::CmdSetEvent2KHR(commandBuffer, event, pDependencyInfo);
}

static VKAPI_ATTR void VKAPI_CALL vkmock_CmdResetEvent2KHR(VkCommandBuffer commandBuffer, VkEvent event,
                                                           VkPipelineStageFlags2 stageMask) {
    return vkmock::CmdResetEvent2KHR(commandBuffer, event, stageMask);
}

static VKAPI_ATTR void VKAPI_CALL vkmock_CmdWaitEvents2KHR(VkCommandBuffer commandBuffer, uint32_t eventCount,
                                                           const VkEvent* pEvents, const VkDependencyInfo* pDependencyInfos) {
    return vkmock::CmdWaitEvents2KHR(commandBuffer, eventCount, pEvents, pDependencyInfos);
}

static VKAPI_ATTR void VKAPI_CALL vkmock_CmdPipelineBarrier2KHR(VkCommandBuffer commandBuffer,
                                                                const VkDependencyInfo* pDependencyInfo) {
    return vkmock::CmdPipelineBarrier2KHR(commandBuffer, pDependencyInfo);
}

static VKAPI_ATTR void VKAPI_CALL vkmock_CmdWriteTimestamp2KHR(VkCommandBuffer commandBuffer, VkPipelineStageFlags2 stage,
                                                               VkQueryPool queryPool, uint32_t query) {
    return vkmock::CmdWriteTimestamp2KHR(commandBuffer, stage, queryPool, query);
}

static VKAPI_ATTR VkResult VKAPI_CALL vkmock_QueueSubmit2KHR(VkQueue queue, uint32_t submitCount, const VkSubmitInfo2* pSubmits,
                                                             VkFence fence) {
    return vkmock::QueueSubmit2KHR(queue, submitCount, pSubmits, fence);
}

static VKAPI_ATTR void VKAPI_CALL vkmock_CmdCopyBuffer2KHR(VkCommandBuffer commandBuffer,
                                                           const VkCopyBufferInfo2* pCopyBufferInfo) {
    return vkmock::CmdCopyBuffer2KHR(commandBuffer, pCopyBufferInfo);
}

static VKAPI_ATTR void VKAPI_CALL vkmock_CmdCopyImage2KHR(VkCommandBuffer commandBuffer, const VkCopyImageInfo2* pCopyImageInfo) {
    return vkmock::CmdCopyImage2KHR(commandBuffer, pCopyImageInfo);
}

static VKAPI_ATTR void VKAPI_CALL vkmock_CmdCopyBufferToImage2KHR(VkCommandBuffer commandBuffer,
                                                                  const VkCopyBufferToImageInfo2* pCopyBufferToImageInfo) {
    return vkmock::CmdCopyBufferToImage2KHR(commandBuffer, pCopyBufferToImageInfo);
}

static VKAPI_ATTR void VKAPI_CALL vkmock_CmdCopyImageToBuffer2KHR(VkCommandBuffer commandBuffer,
                                                                  const VkCopyImageToBufferInfo2* pCopyImageToBufferInfo) {
    return vkmock::CmdCopyImageToBuffer2KHR(commandBuffer, pCopyImageToBufferInfo);
}

static VKAPI_ATTR void VKAPI_CALL vkmock_CmdBlitImage2KHR(VkCommandBuffer commandBuffer, const VkBlitImageInfo2* pBlitImageInfo) {
    return vkmock::CmdBlitImage2KHR(commandBuffer, pBlitImageInfo);
}

static VKAPI_ATTR void VKAPI_CALL vkmock_CmdResolveImage2KHR(VkCommandBuffer commandBuffer,
                                                             const VkResolveImageInfo2* pResolveImageInfo) {
    return vkmock::CmdResolveImage2KHR(commandBuffer, pResolveImageInfo);
}

static VKAPI_ATTR void VKAPI_CALL vkmock_CmdTraceRaysIndirect2KHR(VkCommandBuffer commandBuffer,
                                                                  VkDeviceAddress indirectDeviceAddress) {
    return vkmock::CmdTraceRaysIndirect2KHR(commandBuffer, indirectDeviceAddress);
}

static VKAPI_ATTR void VKAPI_CALL vkmock_GetDeviceBufferMemoryRequirementsKHR(VkDevice device,
                                                                              const VkDeviceBufferMemoryRequirements* pInfo,
                                                                              VkMemoryRequirements2* pMemoryRequirements) {
    return vkmock::GetDeviceBufferMemoryRequirementsKHR(device, pInfo, pMemoryRequirements);
}

static VKAPI_ATTR void VKAPI_CALL vkmock_GetDeviceImageMemoryRequirementsKHR(VkDevice device,
                                                                             const VkDeviceImageMemoryRequirements* pInfo,
                                                                             VkMemoryRequirements2* pMemoryRequirements) {
    return vkmock::GetDeviceImageMemoryRequirementsKHR(device, pInfo, pMemoryRequirements);
}

static VKAPI_ATTR void VKAPI_CALL vkmock_GetDeviceImageSparseMemoryRequirementsKHR(
    VkDevice device, const VkDeviceImageMemoryRequirements* pInfo, uint32_t* pSparseMemoryRequirementCount,
    VkSparseImageMemoryRequirements2* pSparseMemoryRequirements) {
    return vkmock::GetDeviceImageSparseMemoryRequirementsKHR(device, pInfo, pSparseMemoryRequirementCount,
                                                             pSparseMemoryRequirements);
}

static VKAPI_ATTR void VKAPI_CALL vkmock_CmdBindIndexBuffer2KHR(VkCommandBuffer commandBuffer, VkBuffer buffer, VkDeviceSize offset,
                                                                VkDeviceSize size, VkIndexType indexType) {
    return vkmock::CmdBindIndexBuffer2KHR(commandBuffer, buffer, offset, size, indexType);
}

static VKAPI_ATTR void VKAPI_CALL vkmock_GetRenderingAreaGranularityKHR(VkDevice device,
                                                                        const VkRenderingAreaInfo* pRenderingAreaInfo,
                                                                        VkExtent2D* pGranularity) {
    return vkmock::GetRenderingAreaGranularityKHR(device, pRenderingAreaInfo, pGranularity);
}

static VKAPI_ATTR void VKAPI_CALL vkmock_GetDeviceImageSubresourceLayoutKHR(VkDevice device,
                                                                            const VkDeviceImageSubresourceInfo* pInfo,
                                                                            VkSubresourceLayout2* pLayout) {
    return vkmock::GetDeviceImageSubresourceLayoutKHR(device, pInfo, pLayout);
}

static VKAPI_ATTR void VKAPI_CALL vkmock_GetImageSubresourceLayout2KHR(VkDevice device, VkImage image,
                                                                       const VkImageSubresource2* pSubresource,
                                                                       VkSubresourceLayout2* pLayout) {
    return vkmock::GetImageSubresourceLayout2KHR(device, image, pSubresource, pLayout);
}

static VKAPI_ATTR VkResult VKAPI_CALL vkmock_CreatePipelineBinariesKHR(VkDevice device,
                                                                       const VkPipelineBinaryCreateInfoKHR* pCreateInfo,
                                                                       const VkAllocationCallbacks* pAllocator,
                                                                       VkPipelineBinaryHandlesInfoKHR* pBinaries) {
    return vkmock::CreatePipelineBinariesKHR(device, pCreateInfo, pAllocator, pBinaries);
}

static VKAPI_ATTR void VKAPI_CALL vkmock_DestroyPipelineBinaryKHR(VkDevice device, VkPipelineBinaryKHR pipelineBinary,
                                                                  const VkAllocationCallbacks* pAllocator) {
    return vkmock::DestroyPipelineBinaryKHR(device, pipelineBinary, pAllocator);
}

static VKAPI_ATTR VkResult VKAPI_CALL vkmock_GetPipelineKeyKHR(VkDevice device, const VkPipelineCreateInfoKHR* pPipelineCreateInfo,
                                                               VkPipelineBinaryKeyKHR* pPipelineKey) {
    return vkmock::GetPipelineKeyKHR(device, pPipelineCreateInfo, pPipelineKey);
}

static VKAPI_ATTR VkResult VKAPI_CALL vkmock_GetPipelineBinaryDataKHR(VkDevice device, const VkPipelineBinaryDataInfoKHR* pInfo,
                                                                      VkPipelineBinaryKeyKHR* pPipelineBinaryKey,
                                                                      size_t* pPipelineBinaryDataSize, void* pPipelineBinaryData) {
    return vkmock::GetPipelineBinaryDataKHR(device, pInfo, pPipelineBinaryKey, pPipelineBinaryDataSize, pPipelineBinaryData);
}

static VKAPI_ATTR VkResult VKAPI_CALL vkmock_ReleaseCapturedPipelineDataKHR(VkDevice device,
                                                                            const VkReleaseCapturedPipelineDataInfoKHR* pInfo,
                                                                            const VkAllocationCallbacks* pAllocator) {
    return vkmock::ReleaseCapturedPipelineDataKHR(device, pInfo, pAllocator);
}

static VKAPI_ATTR VkResult VKAPI_CALL vkmock_GetPhysicalDeviceCooperativeMatrixPropertiesKHR(
    VkPhysicalDevice physicalDevice, uint32_t* pPropertyCount, VkCooperativeMatrixPropertiesKHR* pProperties) {
    return vkmock::GetPhysicalDeviceCooperativeMatrixPropertiesKHR(physicalDevice, pPropertyCount, pProperties);
}

static VKAPI_ATTR void VKAPI_CALL vkmock_CmdSetLineStippleKHR(VkCommandBuffer commandBuffer, uint32_t lineStippleFactor,
                                                              uint16_t lineStipplePattern) {
    return vkmock::CmdSetLineStippleKHR(commandBuffer, lineStippleFactor, lineStipplePattern);
}

static VKAPI_ATTR VkResult VKAPI_CALL vkmock_GetPhysicalDeviceCalibrateableTimeDomainsKHR(VkPhysicalDevice physicalDevice,
                                                                                          uint32_t* pTimeDomainCount,
                                                                                          VkTimeDomainKHR* pTimeDomains) {
    return vkmock::GetPhysicalDeviceCalibrateableTimeDomainsKHR(physicalDevice, pTimeDomainCount, pTimeDomains);
}

static VKAPI_ATTR VkResult VKAPI_CALL vkmock_GetCalibratedTimestampsKHR(VkDevice device, uint32_t timestampCount,
                                                                        const VkCalibratedTimestampInfoKHR* pTimestampInfos,
                                                                        uint64_t* pTimestamps, uint64_t* pMaxDeviation) {
    return vkmock::GetCalibratedTimestampsKHR(device, timestampCount, pTimestampInfos, pTimestamps, pMaxDeviation);
}

static VKAPI_ATTR void VKAPI_CALL vkmock_CmdBindDescriptorSets2KHR(VkCommandBuffer commandBuffer,
                                                                   const VkBindDescriptorSetsInfo* pBindDescriptorSetsInfo) {
    return vkmock::CmdBindDescriptorSets2KHR(commandBuffer, pBindDescriptorSetsInfo);
}

static VKAPI_ATTR void VKAPI_CALL vkmock_CmdPushConstants2KHR(VkCommandBuffer commandBuffer,
                                                              const VkPushConstantsInfo* pPushConstantsInfo) {
    return vkmock::CmdPushConstants2KHR(commandBuffer, pPushConstantsInfo);
}

static VKAPI_ATTR void VKAPI_CALL vkmock_CmdPushDescriptorSet2KHR(VkCommandBuffer commandBuffer,
                                                                  const VkPushDescriptorSetInfo* pPushDescriptorSetInfo) {
    return vkmock::CmdPushDescriptorSet2KHR(commandBuffer, pPushDescriptorSetInfo);
}

static VKAPI_ATTR void VKAPI_CALL vkmock_CmdPushDescriptorSetWithTemplate2KHR(
    VkCommandBuffer commandBuffer, const VkPushDescriptorSetWithTemplateInfo* pPushDescriptorSetWithTemplateInfo) {
    return vkmock::CmdPushDescriptorSetWithTemplate2KHR(commandBuffer, pPushDescriptorSetWithTemplateInfo);
}

static VKAPI_ATTR void VKAPI_CALL vkmock_CmdSetDescriptorBufferOffsets2EXT(
    VkCommandBuffer commandBuffer, const VkSetDescriptorBufferOffsetsInfoEXT* pSetDescriptorBufferOffsetsInfo) {
    return vkmock::CmdSetDescriptorBufferOffsets2EXT(commandBuffer, pSetDescriptorBufferOffsetsInfo);
}

static VKAPI_ATTR void VKAPI_CALL vkmock_CmdBindDescriptorBufferEmbeddedSamplers2EXT(
    VkCommandBuffer commandBuffer, const VkBindDescriptorBufferEmbeddedSamplersInfoEXT* pBindDescriptorBufferEmbeddedSamplersInfo) {
    return vkmock::CmdBindDescriptorBufferEmbeddedSamplers2EXT(commandBuffer, pBindDescriptorBufferEmbeddedSamplersInfo);
}

static VKAPI_ATTR VkResult VKAPI_CALL vkmock_CreateDebugReportCallbackEXT(VkInstance instance,
                                                                          const VkDebugReportCallbackCreateInfoEXT* pCreateInfo,
                                                                          const VkAllocationCallbacks* pAllocator,
                                                                          VkDebugReportCallbackEXT* pCallback) {
    return vkmock::CreateDebugReportCallbackEXT(instance, pCreateInfo, pAllocator, pCallback);
}

static VKAPI_ATTR void VKAPI_CALL vkmock_DestroyDebugReportCallbackEXT(VkInstance instance, VkDebugReportCallbackEXT callback,
                                                                       const VkAllocationCallbacks* pAllocator) {
    return vkmock::DestroyDebugReportCallbackEXT(instance, callback, pAllocator);
}

static VKAPI_ATTR void VKAPI_CALL vkmock_DebugReportMessageEXT(VkInstance instance, VkDebugReportFlagsEXT flags,
                                                               VkDebugReportObjectTypeEXT objectType, uint64_t object,
                                                               size_t location, int32_t messageCode, const char* pLayerPrefix,
                                                               const char* pMessage) {
    return vkmock::DebugReportMessageEXT(instance, flags, objectType, object, location, messageCode, pLayerPrefix, pMessage);
}

static VKAPI_ATTR VkResult VKAPI_CALL vkmock_DebugMarkerSetObjectTagEXT(VkDevice device,
                                                                        const VkDebugMarkerObjectTagInfoEXT* pTagInfo) {
    return vkmock::DebugMarkerSetObjectTagEXT(device, pTagInfo);
}

static VKAPI_ATTR VkResult VKAPI_CALL vkmock_DebugMarkerSetObjectNameEXT(VkDevice device,
                                                                         const VkDebugMarkerObjectNameInfoEXT* pNameInfo) {
    return vkmock::DebugMarkerSetObjectNameEXT(device, pNameInfo);
}

static VKAPI_ATTR void VKAPI_CALL vkmock_CmdDebugMarkerBeginEXT(VkCommandBuffer commandBuffer,
                                                                const VkDebugMarkerMarkerInfoEXT* pMarkerInfo) {
    return vkmock::CmdDebugMarkerBeginEXT(commandBuffer, pMarkerInfo);
}

static VKAPI_ATTR void VKAPI_CALL vkmock_CmdDebugMarkerEndEXT(VkCommandBuffer commandBuffer) {
    return vkmock::CmdDebugMarkerEndEXT(commandBuffer);
}

static VKAPI_ATTR void VKAPI_CALL vkmock_CmdDebugMarkerInsertEXT(VkCommandBuffer commandBuffer,
                                                                 const VkDebugMarkerMarkerInfoEXT* pMarkerInfo) {
    return vkmock::CmdDebugMarkerInsertEXT(commandBuffer, pMarkerInfo);
}

static VKAPI_ATTR void VKAPI_CALL vkmock_CmdBindTransformFeedbackBuffersEXT(VkCommandBuffer commandBuffer, uint32_t firstBinding,
                                                                            uint32_t bindingCount, const VkBuffer* pBuffers,
                                                                            const VkDeviceSize* pOffsets,
                                                                            const VkDeviceSize* pSizes) {
    return vkmock::CmdBindTransformFeedbackBuffersEXT(commandBuffer, firstBinding, bindingCount, pBuffers, pOffsets, pSizes);
}

static VKAPI_ATTR void VKAPI_CALL vkmock_CmdBeginTransformFeedbackEXT(VkCommandBuffer commandBuffer, uint32_t firstCounterBuffer,
                                                                      uint32_t counterBufferCount, const VkBuffer* pCounterBuffers,
                                                                      const VkDeviceSize* pCounterBufferOffsets) {
    return vkmock::CmdBeginTransformFeedbackEXT(commandBuffer, firstCounterBuffer, counterBufferCount, pCounterBuffers,
                                                pCounterBufferOffsets);
}

static VKAPI_ATTR void VKAPI_CALL vkmock_CmdEndTransformFeedbackEXT(VkCommandBuffer commandBuffer, uint32_t firstCounterBuffer,
                                                                    uint32_t counterBufferCount, const VkBuffer* pCounterBuffers,
                                                                    const VkDeviceSize* pCounterBufferOffsets) {
    return vkmock::CmdEndTransformFeedbackEXT(commandBuffer, firstCounterBuffer, counterBufferCount, pCounterBuffers,
                                              pCounterBufferOffsets);
}

static VKAPI_ATTR void VKAPI_CALL vkmock_CmdBeginQueryIndexedEXT(VkCommandBuffer commandBuffer, VkQueryPool queryPool,
                                                                 uint32_t query, VkQueryControlFlags flags, uint32_t index) {
    return vkmock::CmdBeginQueryIndexedEXT(commandBuffer, queryPool, query, flags, index);
}

static VKAPI_ATTR void VKAPI_CALL vkmock_CmdEndQueryIndexedEXT(VkCommandBuffer commandBuffer, VkQueryPool queryPool, uint32_t query,
                                                               uint32_t index) {
    return vkmock::CmdEndQueryIndexedEXT(commandBuffer, queryPool, query, index);
}

static VKAPI_ATTR void VKAPI_CALL vkmock_CmdDrawIndirectByteCountEXT(VkCommandBuffer commandBuffer, uint32_t instanceCount,
                                                                     uint32_t firstInstance, VkBuffer counterBuffer,
                                                                     VkDeviceSize counterBufferOffset, uint32_t counterOffset,
                                                                     uint32_t vertexStride) {
    return vkmock::CmdDrawIndirectByteCountEXT(commandBuffer, instanceCount, firstInstance, counterBuffer, counterBufferOffset,
                                               counterOffset, vertexStride);
}

static VKAPI_ATTR VkResult VKAPI_CALL vkmock_CreateCuModuleNVX(VkDevice device, const VkCuModuleCreateInfoNVX* pCreateInfo,
                                                               const VkAllocationCallbacks* pAllocator, VkCuModuleNVX* pModule) {
    return vkmock::CreateCuModuleNVX(device, pCreateInfo, pAllocator, pModule);
}

static VKAPI_ATTR VkResult VKAPI_CALL vkmock_CreateCuFunctionNVX(VkDevice device, const VkCuFunctionCreateInfoNVX* pCreateInfo,
                                                                 const VkAllocationCallbacks* pAllocator,
                                                                 VkCuFunctionNVX* pFunction) {
    return vkmock::CreateCuFunctionNVX(device, pCreateInfo, pAllocator, pFunction);
}

static VKAPI_ATTR void VKAPI_CALL vkmock_DestroyCuModuleNVX(VkDevice device, VkCuModuleNVX module,
                                                            const VkAllocationCallbacks* pAllocator) {
    return vkmock::DestroyCuModuleNVX(device, module, pAllocator);
}

static VKAPI_ATTR void VKAPI_CALL vkmock_DestroyCuFunctionNVX(VkDevice device, VkCuFunctionNVX function,
                                                              const VkAllocationCallbacks* pAllocator) {
    return vkmock::DestroyCuFunctionNVX(device, function, pAllocator);
}

static VKAPI_ATTR void VKAPI_CALL vkmock_CmdCuLaunchKernelNVX(VkCommandBuffer commandBuffer, const VkCuLaunchInfoNVX* pLaunchInfo) {
    return vkmock::CmdCuLaunchKernelNVX(commandBuffer, pLaunchInfo);
}

static VKAPI_ATTR uint32_t VKAPI_CALL vkmock_GetImageViewHandleNVX(VkDevice device, const VkImageViewHandleInfoNVX* pInfo) {
    return vkmock::GetImageViewHandleNVX(device, pInfo);
}

static VKAPI_ATTR uint64_t VKAPI_CALL vkmock_GetImageViewHandle64NVX(VkDevice device, const VkImageViewHandleInfoNVX* pInfo) {
    return vkmock::GetImageViewHandle64NVX(device, pInfo);
}

static VKAPI_ATTR VkResult VKAPI_CALL vkmock_GetImageViewAddressNVX(VkDevice device, VkImageView imageView,
                                                                    VkImageViewAddressPropertiesNVX* pProperties) {
    return vkmock::GetImageViewAddressNVX(device, imageView, pProperties);
}

static VKAPI_ATTR void VKAPI_CALL vkmock_CmdDrawIndirectCountAMD(VkCommandBuffer commandBuffer, VkBuffer buffer,
                                                                 VkDeviceSize offset, VkBuffer countBuffer,
                                                                 VkDeviceSize countBufferOffset, uint32_t maxDrawCount,
                                                                 uint32_t stride) {
    return vkmock::CmdDrawIndirectCountAMD(commandBuffer, buffer, offset, countBuffer, countBufferOffset, maxDrawCount, stride);
}

static VKAPI_ATTR void VKAPI_CALL vkmock_CmdDrawIndexedIndirectCountAMD(VkCommandBuffer commandBuffer, VkBuffer buffer,
                                                                        VkDeviceSize offset, VkBuffer countBuffer,
                                                                        VkDeviceSize countBufferOffset, uint32_t maxDrawCount,
                                                                        uint32_t stride) {
    return vkmock::CmdDrawIndexedIndirectCountAMD(commandBuffer, buffer, offset, countBuffer, countBufferOffset, maxDrawCount,
                                                  stride);
}

static VKAPI_ATTR VkResult VKAPI_CALL vkmock_GetShaderInfoAMD(VkDevice device, VkPipeline pipeline,
                                                              VkShaderStageFlagBits shaderStage, VkShaderInfoTypeAMD infoType,
                                                              size_t* pInfoSize, void* pInfo) {
    return vkmock::GetShaderInfoAMD(device, pipeline, shaderStage, infoType, pInfoSize, pInfo);
}

#ifdef VK_USE_PLATFORM_GGP
static VKAPI_ATTR VkResult VKAPI_CALL
vkmock_CreateStreamDescriptorSurfaceGGP(VkInstance instance, const VkStreamDescriptorSurfaceCreateInfoGGP* pCreateInfo,
                                        const VkAllocationCallbacks* pAllocator, VkSurfaceKHR* pSurface) {
    return vkmock::CreateStreamDescriptorSurfaceGGP(instance, pCreateInfo, pAllocator, pSurface);
}

#endif  // VK_USE_PLATFORM_GGP
static VKAPI_ATTR VkResult VKAPI_CALL vkmock_GetPhysicalDeviceExternalImageFormatPropertiesNV(
    VkPhysicalDevice physicalDevice, VkFormat format, VkImageType type, VkImageTiling tiling, VkImageUsageFlags usage,
    VkImageCreateFlags flags, VkExternalMemoryHandleTypeFlagsNV externalHandleType,
    VkExternalImageFormatPropertiesNV* pExternalImageFormatProperties) {
    return vkmock::GetPhysicalDeviceExternalImageFormatPropertiesNV(physicalDevice, format, type, tiling, usage, flags,
                                                                    externalHandleType, pExternalImageFormatProperties);
}

#ifdef VK_USE_PLATFORM_WIN32_KHR
static VKAPI_ATTR VkResult VKAPI_CALL vkmock_GetMemoryWin32HandleNV(VkDevice device, VkDeviceMemory memory,
                                                                    VkExternalMemoryHandleTypeFlagsNV handleType, HANDLE* pHandle) {
    return vkmock::GetMemoryWin32HandleNV(device, memory, handleType, pHandle);
}

#endif  // VK_USE_PLATFORM_WIN32_KHR
#ifdef VK_USE_PLATFORM_VI_NN
static VKAPI_ATTR VkResult VKAPI_CALL vkmock_CreateViSurfaceNN(VkInstance instance, const VkViSurfaceCreateInfoNN* pCreateInfo,
                                                               const VkAllocationCallbacks* pAllocator, VkSurfaceKHR* pSurface) {
    return vkmock::CreateViSurfaceNN(instance, pCreateInfo, pAllocator, pSurface);
}

#endif  // VK_USE_PLATFORM_VI_NN
static VKAPI_ATTR void VKAPI_CALL vkmock_CmdBeginConditionalRenderingEXT(
    VkCommandBuffer commandBuffer, const VkConditionalRenderingBeginInfoEXT* pConditionalRenderingBegin) {
    return vkmock::CmdBeginConditionalRenderingEXT(commandBuffer, pConditionalRenderingBegin);
}

static VKAPI_ATTR void VKAPI_CALL vkmock_CmdEndConditionalRenderingEXT(VkCommandBuffer commandBuffer) {
    return vkmock::CmdEndConditionalRenderingEXT(commandBuffer);
}

static VKAPI_ATTR void VKAPI_CALL vkmock_CmdSetViewportWScalingNV(VkCommandBuffer commandBuffer, uint32_t firstViewport,
                                                                  uint32_t viewportCount,
                                                                  const VkViewportWScalingNV* pViewportWScalings) {
    return vkmock::CmdSetViewportWScalingNV(commandBuffer, firstViewport, viewportCount, pViewportWScalings);
}

static VKAPI_ATTR VkResult VKAPI_CALL vkmock_ReleaseDisplayEXT(VkPhysicalDevice physicalDevice, VkDisplayKHR display) {
    return vkmock::ReleaseDisplayEXT(physicalDevice, display);
}

#ifdef VK_USE_PLATFORM_XLIB_XRANDR_EXT
static VKAPI_ATTR VkResult VKAPI_CALL vkmock_AcquireXlibDisplayEXT(VkPhysicalDevice physicalDevice, Display* dpy,
                                                                   VkDisplayKHR display) {
    return vkmock::AcquireXlibDisplayEXT(physicalDevice, dpy, display);
}

static VKAPI_ATTR VkResult VKAPI_CALL vkmock_GetRandROutputDisplayEXT(VkPhysicalDevice physicalDevice, Display* dpy,
                                                                      RROutput rrOutput, VkDisplayKHR* pDisplay) {
    return vkmock::GetRandROutputDisplayEXT(physicalDevice, dpy, rrOutput, pDisplay);
}

#endif  // VK_USE_PLATFORM_XLIB_XRANDR_EXT
static VKAPI_ATTR VkResult VKAPI_CALL vkmock_GetPhysicalDeviceSurfaceCapabilities2EXT(
    VkPhysicalDevice physicalDevice, VkSurfaceKHR surface, VkSurfaceCapabilities2EXT* pSurfaceCapabilities) {
    return vkmock::GetPhysicalDeviceSurfaceCapabilities2EXT(physicalDevice, surface, pSurfaceCapabilities);
}

static VKAPI_ATTR VkResult VKAPI_CALL vkmock_DisplayPowerControlEXT(VkDevice device, VkDisplayKHR display,
                                                                    const VkDisplayPowerInfoEXT* pDisplayPowerInfo) {
    return vkmock::DisplayPowerControlEXT(device, display, pDisplayPowerInfo);
}

static VKAPI_ATTR VkResult VKAPI_CALL vkmock_RegisterDeviceEventEXT(VkDevice device, const VkDeviceEventInfoEXT* pDeviceEventInfo,
                                                                    const VkAllocationCallbacks* pAllocator, VkFence* pFence) {
    return vkmock::RegisterDeviceEventEXT(device, pDeviceEventInfo, pAllocator, pFence);
}

static VKAPI_ATTR VkResult VKAPI_CALL vkmock_RegisterDisplayEventEXT(VkDevice device, VkDisplayKHR display,
                                                                     const VkDisplayEventInfoEXT* pDisplayEventInfo,
                                                                     const VkAllocationCallbacks* pAllocator, VkFence* pFence) {
    return vkmock::RegisterDisplayEventEXT(device, display, pDisplayEventInfo, pAllocator, pFence);
}

static VKAPI_ATTR VkResult VKAPI_CALL vkmock_GetSwapchainCounterEXT(VkDevice device, VkSwapchainKHR swapchain,
                                                                    VkSurfaceCounterFlagBitsEXT counter, uint64_t* pCounterValue) {
    return vkmock::GetSwapchainCounterEXT(device, swapchain, counter, pCounterValue);
}

static VKAPI_ATTR VkResult VKAPI_CALL vkmock_GetRefreshCycleDurationGOOGLE(VkDevice device, VkSwapchainKHR swapchain,
                                                                           VkRefreshCycleDurationGOOGLE* pDisplayTimingProperties) {
    return vkmock::GetRefreshCycleDurationGOOGLE(device, swapchain, pDisplayTimingProperties);
}

static VKAPI_ATTR VkResult VKAPI_CALL vkmock_GetPastPresentationTimingGOOGLE(VkDevice device, VkSwapchainKHR swapchain,
                                                                             uint32_t* pPresentationTimingCount,
                                                                             VkPastPresentationTimingGOOGLE* pPresentationTimings) {
    return vkmock::GetPastPresentationTimingGOOGLE(device, swapchain, pPresentationTimingCount, pPresentationTimings);
}

static VKAPI_ATTR void VKAPI_CALL vkmock_CmdSetDiscardRectangleEXT(VkCommandBuffer commandBuffer, uint32_t firstDiscardRectangle,
                                                                   uint32_t discardRectangleCount,
                                                                   const VkRect2D* pDiscardRectangles) {
    return vkmock::CmdSetDiscardRectangleEXT(commandBuffer, firstDiscardRectangle, discardRectangleCount, pDiscardRectangles);
}

static VKAPI_ATTR void VKAPI_CALL vkmock_CmdSetDiscardRectangleEnableEXT(VkCommandBuffer commandBuffer,
                                                                         VkBool32 discardRectangleEnable) {
    return vkmock::CmdSetDiscardRectangleEnableEXT(commandBuffer, discardRectangleEnable);
}

static VKAPI_ATTR void VKAPI_CALL vkmock_CmdSetDiscardRectangleModeEXT(VkCommandBuffer commandBuffer,
                                                                       VkDiscardRectangleModeEXT discardRectangleMode) {
    return vkmock::CmdSetDiscardRectangleModeEXT(commandBuffer, discardRectangleMode);
}

static VKAPI_ATTR void VKAPI_CALL vkmock_SetHdrMetadataEXT(VkDevice device, uint32_t swapchainCount,
                                                           const VkSwapchainKHR* pSwapchains, const VkHdrMetadataEXT* pMetadata) {
    return vkmock::SetHdrMetadataEXT(device, swapchainCount, pSwapchains, pMetadata);
}

#ifdef VK_USE_PLATFORM_IOS_MVK
static VKAPI_ATTR VkResult VKAPI_CALL vkmock_CreateIOSSurfaceMVK(VkInstance instance, const VkIOSSurfaceCreateInfoMVK* pCreateInfo,
                                                                 const VkAllocationCallbacks* pAllocator, VkSurfaceKHR* pSurface) {
    return vkmock::CreateIOSSurfaceMVK(instance, pCreateInfo, pAllocator, pSurface);
}

#endif  // VK_USE_PLATFORM_IOS_MVK
#ifdef VK_USE_PLATFORM_MACOS_MVK
static VKAPI_ATTR VkResult VKAPI_CALL vkmock_CreateMacOSSurfaceMVK(VkInstance instance,
                                                                   const VkMacOSSurfaceCreateInfoMVK* pCreateInfo,
                                                                   const VkAllocationCallbacks* pAllocator,
                                                                   VkSurfaceKHR* pSurface) {
    return vkmock::CreateMacOSSurfaceMVK(instance, pCreateInfo, pAllocator, pSurface);
}

#endif  // VK_USE_PLATFORM_MACOS_MVK
static VKAPI_ATTR VkResult VKAPI_CALL vkmock_SetDebugUtilsObjectNameEXT(VkDevice device,
                                                                        const VkDebugUtilsObjectNameInfoEXT* pNameInfo) {
    return vkmock::SetDebugUtilsObjectNameEXT(device, pNameInfo);
}

static VKAPI_ATTR VkResult VKAPI_CALL vkmock_SetDebugUtilsObjectTagEXT(VkDevice device,
                                                                       const VkDebugUtilsObjectTagInfoEXT* pTagInfo) {
    return vkmock::SetDebugUtilsObjectTagEXT(device, pTagInfo);
}

static VKAPI_ATTR void VKAPI_CALL vkmock_QueueBeginDebugUtilsLabelEXT(VkQueue queue, const VkDebugUtilsLabelEXT* pLabelInfo) {
    return vkmock::QueueBeginDebugUtilsLabelEXT(queue, pLabelInfo);
}

static VKAPI_ATTR void VKAPI_CALL vkmock_QueueEndDebugUtilsLabelEXT(VkQueue queue) {
    return vkmock::QueueEndDebugUtilsLabelEXT(queue);
}

static VKAPI_ATTR void VKAPI_CALL vkmock_QueueInsertDebugUtilsLabelEXT(VkQueue queue, const VkDebugUtilsLabelEXT* pLabelInfo) {
    return vkmock::QueueInsertDebugUtilsLabelEXT(queue, pLabelInfo);
}

static VKAPI_ATTR void VKAPI_CALL vkmock_CmdBeginDebugUtilsLabelEXT(VkCommandBuffer commandBuffer,
                                                                    const VkDebugUtilsLabelEXT* pLabelInfo) {
    return vkmock::CmdBeginDebugUtilsLabelEXT(commandBuffer, pLabelInfo);
}

static VKAPI_ATTR void VKAPI_CALL vkmock_CmdEndDebugUtilsLabelEXT(VkCommandBuffer commandBuffer) {
    return vkmock::CmdEndDebugUtilsLabelEXT(commandBuffer);
}

static VKAPI_ATTR void VKAPI_CALL vkmock_CmdInsertDebugUtilsLabelEXT(VkCommandBuffer commandBuffer,
                                                                     const VkDebugUtilsLabelEXT* pLabelInfo) {
    return vkmock::CmdInsertDebugUtilsLabelEXT(commandBuffer, pLabelInfo);
}

static VKAPI_ATTR VkResult VKAPI_CALL vkmock_CreateDebugUtilsMessengerEXT(VkInstance instance,
                                                                          const VkDebugUtilsMessengerCreateInfoEXT* pCreateInfo,
                                                                          const VkAllocationCallbacks* pAllocator,
                                                                          VkDebugUtilsMessengerEXT* pMessenger) {
    return vkmock::CreateDebugUtilsMessengerEXT(instance, pCreateInfo, pAllocator, pMessenger);
}

static VKAPI_ATTR void VKAPI_CALL vkmock_DestroyDebugUtilsMessengerEXT(VkInstance instance, VkDebugUtilsMessengerEXT messenger,
                                                                       const VkAllocationCallbacks* pAllocator) {
    return vkmock::DestroyDebugUtilsMessengerEXT(instance, messenger, pAllocator);
}

static VKAPI_ATTR void VKAPI_CALL vkmock_SubmitDebugUtilsMessageEXT(VkInstance instance,
                                                                    VkDebugUtilsMessageSeverityFlagBitsEXT messageSeverity,
                                                                    VkDebugUtilsMessageTypeFlagsEXT messageTypes,
                                                                    const VkDebugUtilsMessengerCallbackDataEXT* pCallbackData) {
    return vkmock::SubmitDebugUtilsMessageEXT(instance, messageSeverity, messageTypes, pCallbackData);
}

#ifdef VK_USE_PLATFORM_ANDROID_KHR
static VKAPI_ATTR VkResult VKAPI_CALL vkmock_GetAndroidHardwareBufferPropertiesANDROID(
    VkDevice device, const struct AHardwareBuffer* buffer, VkAndroidHardwareBufferPropertiesANDROID* pProperties) {
    return vkmock::GetAndroidHardwareBufferPropertiesANDROID(device, buffer, pProperties);
}

static VKAPI_ATTR VkResult VKAPI_CALL vkmock_GetMemoryAndroidHardwareBufferANDROID(
    VkDevice device, const VkMemoryGetAndroidHardwareBufferInfoANDROID* pInfo, struct AHardwareBuffer** pBuffer) {
    return vkmock::GetMemoryAndroidHardwareBufferANDROID(device, pInfo, pBuffer);
}

#endif  // VK_USE_PLATFORM_ANDROID_KHR
#ifdef VK_ENABLE_BETA_EXTENSIONS
static VKAPI_ATTR VkResult VKAPI_CALL vkmock_CreateExecutionGraphPipelinesAMDX(
    VkDevice device, VkPipelineCache pipelineCache, uint32_t createInfoCount,
    const VkExecutionGraphPipelineCreateInfoAMDX* pCreateInfos, const VkAllocationCallbacks* pAllocator, VkPipeline* pPipelines) {
    return vkmock::CreateExecutionGraphPipelinesAMDX(device, pipelineCache, createInfoCount, pCreateInfos, pAllocator, pPipelines);
}

static VKAPI_ATTR VkResult VKAPI_CALL vkmock_GetExecutionGraphPipelineScratchSizeAMDX(
    VkDevice device, VkPipeline executionGraph, VkExecutionGraphPipelineScratchSizeAMDX* pSizeInfo) {
    return vkmock::GetExecutionGraphPipelineScratchSizeAMDX(device, executionGraph, pSizeInfo);
}

static VKAPI_ATTR VkResult VKAPI_CALL vkmock_GetExecutionGraphPipelineNodeIndexAMDX(
    VkDevice device, VkPipeline executionGraph, const VkPipelineShaderStageNodeCreateInfoAMDX* pNodeInfo, uint32_t* pNodeIndex) {
    return vkmock::GetExecutionGraphPipelineNodeIndexAMDX(device, executionGraph, pNodeInfo, pNodeIndex);
}

static VKAPI_ATTR void VKAPI_CALL vkmock_CmdInitializeGraphScratchMemoryAMDX(VkCommandBuffer commandBuffer,
                                                                             VkPipeline executionGraph, VkDeviceAddress scratch,
                                                                             VkDeviceSize scratchSize) {
    return vkmock::CmdInitializeGraphScratchMemoryAMDX(commandBuffer, executionGraph, scratch, scratchSize);
}

static VKAPI_ATTR void VKAPI_CALL vkmock_CmdDispatchGraphAMDX(VkCommandBuffer commandBuffer, VkDeviceAddress scratch,
                                                              VkDeviceSize scratchSize,
                                                              const VkDispatchGraphCountInfoAMDX* pCountInfo) {
    return vkmock::CmdDispatchGraphAMDX(commandBuffer, scratch, scratchSize, pCountInfo);
}

static VKAPI_ATTR void VKAPI_CALL vkmock_CmdDispatchGraphIndirectAMDX(VkCommandBuffer commandBuffer, VkDeviceAddress scratch,
                                                                      VkDeviceSize scratchSize,
                                                                      const VkDispatchGraphCountInfoAMDX* pCountInfo) {
    return vkmock::CmdDispatchGraphIndirectAMDX(commandBuffer, scratch, scratchSize, pCountInfo);
}

static VKAPI_ATTR void VKAPI_CALL vkmock_CmdDispatchGraphIndirectCountAMDX(VkCommandBuffer commandBuffer, VkDeviceAddress scratch,
                                                                           VkDeviceSize scratchSize, VkDeviceAddress countInfo) {
    return vkmock::CmdDispatchGraphIndirectCountAMDX(commandBuffer, scratch, scratchSize, countInfo);
}

#endif  // VK_ENABLE_BETA_EXTENSIONS
static VKAPI_ATTR void VKAPI_CALL vkmock_CmdSetSampleLocationsEXT(VkCommandBuffer commandBuffer,
                                                                  const VkSampleLocationsInfoEXT* pSampleLocationsInfo) {
    return vkmock::CmdSetSampleLocationsEXT(commandBuffer, pSampleLocationsInfo);
}

static VKAPI_ATTR void VKAPI_CALL vkmock_GetPhysicalDeviceMultisamplePropertiesEXT(
    VkPhysicalDevice physicalDevice, VkSampleCountFlagBits samples, VkMultisamplePropertiesEXT* pMultisampleProperties) {
    return vkmock::GetPhysicalDeviceMultisamplePropertiesEXT(physicalDevice, samples, pMultisampleProperties);
}

static VKAPI_ATTR VkResult VKAPI_CALL
vkmock_GetImageDrmFormatModifierPropertiesEXT(VkDevice device, VkImage image, VkImageDrmFormatModifierPropertiesEXT* pProperties) {
    return vkmock::GetImageDrmFormatModifierPropertiesEXT(device, image, pProperties);
}

static VKAPI_ATTR VkResult VKAPI_CALL vkmock_CreateValidationCacheEXT(VkDevice device,
                                                                      const VkValidationCacheCreateInfoEXT* pCreateInfo,
                                                                      const VkAllocationCallbacks* pAllocator,
                                                                      VkValidationCacheEXT* pValidationCache) {
    return vkmock::CreateValidationCacheEXT(device, pCreateInfo, pAllocator, pValidationCache);
}

static VKAPI_ATTR void VKAPI_CALL vkmock_DestroyValidationCacheEXT(VkDevice device, VkValidationCacheEXT validationCache,
                                                                   const VkAllocationCallbacks* pAllocator) {
    return vkmock::DestroyValidationCacheEXT(device, validationCache, pAllocator);
}

static VKAPI_ATTR VkResult VKAPI_CALL vkmock_MergeValidationCachesEXT(VkDevice device, VkValidationCacheEXT dstCache,
                                                                      uint32_t srcCacheCount,
                                                                      const VkValidationCacheEXT* pSrcCaches) {
    return vkmock::MergeValidationCachesEXT(device, dstCache, srcCacheCount, pSrcCaches);
}

static VKAPI_ATTR VkResult VKAPI_CALL vkmock_GetValidationCacheDataEXT(VkDevice device, VkValidationCacheEXT validationCache,
                                                                       size_t* pDataSize, void* pData) {
    return vkmock::GetValidationCacheDataEXT(device, validationCache, pDataSize, pData);
}

static VKAPI_ATTR void VKAPI_CALL vkmock_CmdBindShadingRateImageNV(VkCommandBuffer commandBuffer, VkImageView imageView,
                                                                   VkImageLayout imageLayout) {
    return vkmock::CmdBindShadingRateImageNV(commandBuffer, imageView, imageLayout);
}

static VKAPI_ATTR void VKAPI_CALL vkmock_CmdSetViewportShadingRatePaletteNV(VkCommandBuffer commandBuffer, uint32_t firstViewport,
                                                                            uint32_t viewportCount,
                                                                            const VkShadingRatePaletteNV* pShadingRatePalettes) {
    return vkmock::CmdSetViewportShadingRatePaletteNV(commandBuffer, firstViewport, viewportCount, pShadingRatePalettes);
}

static VKAPI_ATTR void VKAPI_CALL vkmock_CmdSetCoarseSampleOrderNV(VkCommandBuffer commandBuffer,
                                                                   VkCoarseSampleOrderTypeNV sampleOrderType,
                                                                   uint32_t customSampleOrderCount,
                                                                   const VkCoarseSampleOrderCustomNV* pCustomSampleOrders) {
    return vkmock::CmdSetCoarseSampleOrderNV(commandBuffer, sampleOrderType, customSampleOrderCount, pCustomSampleOrders);
}

static VKAPI_ATTR VkResult VKAPI_CALL vkmock_CreateAccelerationStructureNV(VkDevice device,
                                                                           const VkAccelerationStructureCreateInfoNV* pCreateInfo,
                                                                           const VkAllocationCallbacks* pAllocator,
                                                                           VkAccelerationStructureNV* pAccelerationStructure) {
    return vkmock::CreateAccelerationStructureNV(device, pCreateInfo, pAllocator, pAccelerationStructure);
}

static VKAPI_ATTR void VKAPI_CALL vkmock_DestroyAccelerationStructureNV(VkDevice device,
                                                                        VkAccelerationStructureNV accelerationStructure,
                                                                        const VkAllocationCallbacks* pAllocator) {
    return vkmock::DestroyAccelerationStructureNV(device, accelerationStructure, pAllocator);
}

static VKAPI_ATTR void VKAPI_CALL vkmock_GetAccelerationStructureMemoryRequirementsNV(
    VkDevice device, const VkAccelerationStructureMemoryRequirementsInfoNV* pInfo, VkMemoryRequirements2KHR* pMemoryRequirements) {
    return vkmock::GetAccelerationStructureMemoryRequirementsNV(device, pInfo, pMemoryRequirements);
}

static VKAPI_ATTR VkResult VKAPI_CALL vkmock_BindAccelerationStructureMemoryNV(
    VkDevice device, uint32_t bindInfoCount, const VkBindAccelerationStructureMemoryInfoNV* pBindInfos) {
    return vkmock::BindAccelerationStructureMemoryNV(device, bindInfoCount, pBindInfos);
}

static VKAPI_ATTR void VKAPI_CALL vkmock_CmdBuildAccelerationStructureNV(
    VkCommandBuffer commandBuffer, const VkAccelerationStructureInfoNV* pInfo, VkBuffer instanceData, VkDeviceSize instanceOffset,
    VkBool32 update, VkAccelerationStructureNV dst, VkAccelerationStructureNV src, VkBuffer scratch, VkDeviceSize scratchOffset) {
    return vkmock::CmdBuildAccelerationStructureNV(commandBuffer, pInfo, instanceData, instanceOffset, update, dst, src, scratch,
                                                   scratchOffset);
}

static VKAPI_ATTR void VKAPI_CALL vkmock_CmdCopyAccelerationStructureNV(VkCommandBuffer commandBuffer,
                                                                        VkAccelerationStructureNV dst,
                                                                        VkAccelerationStructureNV src,
                                                                        VkCopyAccelerationStructureModeKHR mode) {
    return vkmock::CmdCopyAccelerationStructureNV(commandBuffer, dst, src, mode);
}

static VKAPI_ATTR void VKAPI_CALL vkmock_CmdTraceRaysNV(
    VkCommandBuffer commandBuffer, VkBuffer raygenShaderBindingTableBuffer, VkDeviceSize raygenShaderBindingOffset,
    VkBuffer missShaderBindingTableBuffer, VkDeviceSize missShaderBindingOffset, VkDeviceSize missShaderBindingStride,
    VkBuffer hitShaderBindingTableBuffer, VkDeviceSize hitShaderBindingOffset, VkDeviceSize hitShaderBindingStride,
    VkBuffer callableShaderBindingTableBuffer, VkDeviceSize callableShaderBindingOffset, VkDeviceSize callableShaderBindingStride,
    uint32_t width, uint32_t height, uint32_t depth) {
    return vkmock::CmdTraceRaysNV(commandBuffer, raygenShaderBindingTableBuffer, raygenShaderBindingOffset,
                                  missShaderBindingTableBuffer, missShaderBindingOffset, missShaderBindingStride,
                                  hitShaderBindingTableBuffer, hitShaderBindingOffset, hitShaderBindingStride,
                                  callableShaderBindingTableBuffer, callableShaderBindingOffset, callableShaderBindingStride, width,
                                  height, depth);
}

static VKAPI_ATTR VkResult VKAPI_CALL vkmock_CreateRayTracingPipelinesNV(VkDevice device, VkPipelineCache pipelineCache,
                                                                         uint32_t createInfoCount,
                                                                         const VkRayTracingPipelineCreateInfoNV* pCreateInfos,
                                                                         const VkAllocationCallbacks* pAllocator,
                                                                         VkPipeline* pPipelines) {
    return vkmock::CreateRayTracingPipelinesNV(device, pipelineCache, createInfoCount, pCreateInfos, pAllocator, pPipelines);
}

static VKAPI_ATTR VkResult VKAPI_CALL vkmock_GetRayTracingShaderGroupHandlesKHR(VkDevice device, VkPipeline pipeline,
                                                                                uint32_t firstGroup, uint32_t groupCount,
                                                                                size_t dataSize, void* pData) {
    return vkmock::GetRayTracingShaderGroupHandlesKHR(device, pipeline, firstGroup, groupCount, dataSize, pData);
}

static VKAPI_ATTR VkResult VKAPI_CALL vkmock_GetRayTracingShaderGroupHandlesNV(VkDevice device, VkPipeline pipeline,
                                                                               uint32_t firstGroup, uint32_t groupCount,
                                                                               size_t dataSize, void* pData) {
    return vkmock::GetRayTracingShaderGroupHandlesNV(device, pipeline, firstGroup, groupCount, dataSize, pData);
}

static VKAPI_ATTR VkResult VKAPI_CALL vkmock_GetAccelerationStructureHandleNV(VkDevice device,
                                                                              VkAccelerationStructureNV accelerationStructure,
                                                                              size_t dataSize, void* pData) {
    return vkmock::GetAccelerationStructureHandleNV(device, accelerationStructure, dataSize, pData);
}

static VKAPI_ATTR void VKAPI_CALL vkmock_CmdWriteAccelerationStructuresPropertiesNV(
    VkCommandBuffer commandBuffer, uint32_t accelerationStructureCount, const VkAccelerationStructureNV* pAccelerationStructures,
    VkQueryType queryType, VkQueryPool queryPool, uint32_t firstQuery) {
    return vkmock::CmdWriteAccelerationStructuresPropertiesNV(commandBuffer, accelerationStructureCount, pAccelerationStructures,
                                                              queryType, queryPool, firstQuery);
}

static VKAPI_ATTR VkResult VKAPI_CALL vkmock_CompileDeferredNV(VkDevice device, VkPipeline pipeline, uint32_t shader) {
    return vkmock::CompileDeferredNV(device, pipeline, shader);
}

static VKAPI_ATTR VkResult VKAPI_CALL
vkmock_GetMemoryHostPointerPropertiesEXT(VkDevice device, VkExternalMemoryHandleTypeFlagBits handleType, const void* pHostPointer,
                                         VkMemoryHostPointerPropertiesEXT* pMemoryHostPointerProperties) {
    return vkmock::GetMemoryHostPointerPropertiesEXT(device, handleType, pHostPointer, pMemoryHostPointerProperties);
}

static VKAPI_ATTR void VKAPI_CALL vkmock_CmdWriteBufferMarkerAMD(VkCommandBuffer commandBuffer,
                                                                 VkPipelineStageFlagBits pipelineStage, VkBuffer dstBuffer,
                                                                 VkDeviceSize dstOffset, uint32_t marker) {
    return vkmock::CmdWriteBufferMarkerAMD(commandBuffer, pipelineStage, dstBuffer, dstOffset, marker);
}

static VKAPI_ATTR void VKAPI_CALL vkmock_CmdWriteBufferMarker2AMD(VkCommandBuffer commandBuffer, VkPipelineStageFlags2 stage,
                                                                  VkBuffer dstBuffer, VkDeviceSize dstOffset, uint32_t marker) {
    return vkmock::CmdWriteBufferMarker2AMD(commandBuffer, stage, dstBuffer, dstOffset, marker);
}

static VKAPI_ATTR VkResult VKAPI_CALL vkmock_GetPhysicalDeviceCalibrateableTimeDomainsEXT(VkPhysicalDevice physicalDevice,
                                                                                          uint32_t* pTimeDomainCount,
                                                                                          VkTimeDomainKHR* pTimeDomains) {
    return vkmock::GetPhysicalDeviceCalibrateableTimeDomainsEXT(physicalDevice, pTimeDomainCount, pTimeDomains);
}

static VKAPI_ATTR VkResult VKAPI_CALL vkmock_GetCalibratedTimestampsEXT(VkDevice device, uint32_t timestampCount,
                                                                        const VkCalibratedTimestampInfoKHR* pTimestampInfos,
                                                                        uint64_t* pTimestamps, uint64_t* pMaxDeviation) {
    return vkmock::GetCalibratedTimestampsEXT(device, timestampCount, pTimestampInfos, pTimestamps, pMaxDeviation);
}

static VKAPI_ATTR void VKAPI_CALL vkmock_CmdDrawMeshTasksNV(VkCommandBuffer commandBuffer, uint32_t taskCount, uint32_t firstTask) {
    return vkmock::CmdDrawMeshTasksNV(commandBuffer, taskCount, firstTask);
}

static VKAPI_ATTR void VKAPI_CALL vkmock_CmdDrawMeshTasksIndirectNV(VkCommandBuffer commandBuffer, VkBuffer buffer,
                                                                    VkDeviceSize offset, uint32_t drawCount, uint32_t stride) {
    return vkmock::CmdDrawMeshTasksIndirectNV(commandBuffer, buffer, offset, drawCount, stride);
}

static VKAPI_ATTR void VKAPI_CALL vkmock_CmdDrawMeshTasksIndirectCountNV(VkCommandBuffer commandBuffer, VkBuffer buffer,
                                                                         VkDeviceSize offset, VkBuffer countBuffer,
                                                                         VkDeviceSize countBufferOffset, uint32_t maxDrawCount,
                                                                         uint32_t stride) {
    return vkmock::CmdDrawMeshTasksIndirectCountNV(commandBuffer, buffer, offset, countBuffer, countBufferOffset, maxDrawCount,
                                                   stride);
}

static VKAPI_ATTR void VKAPI_CALL vkmock_CmdSetExclusiveScissorEnableNV(VkCommandBuffer commandBuffer,
                                                                        uint32_t firstExclusiveScissor,
                                                                        uint32_t exclusiveScissorCount,
                                                                        const VkBool32* pExclusiveScissorEnables) {
    return vkmock::CmdSetExclusiveScissorEnableNV(commandBuffer, firstExclusiveScissor, exclusiveScissorCount,
                                                  pExclusiveScissorEnables);
}

static VKAPI_ATTR void VKAPI_CALL vkmock_CmdSetExclusiveScissorNV(VkCommandBuffer commandBuffer, uint32_t firstExclusiveScissor,
                                                                  uint32_t exclusiveScissorCount,
                                                                  const VkRect2D* pExclusiveScissors) {
    return vkmock::CmdSetExclusiveScissorNV(commandBuffer, firstExclusiveScissor, exclusiveScissorCount, pExclusiveScissors);
}

static VKAPI_ATTR void VKAPI_CALL vkmock_CmdSetCheckpointNV(VkCommandBuffer commandBuffer, const void* pCheckpointMarker) {
    return vkmock::CmdSetCheckpointNV(commandBuffer, pCheckpointMarker);
}

static VKAPI_ATTR void VKAPI_CALL vkmock_GetQueueCheckpointDataNV(VkQueue queue, uint32_t* pCheckpointDataCount,
                                                                  VkCheckpointDataNV* pCheckpointData) {
    return vkmock::GetQueueCheckpointDataNV(queue, pCheckpointDataCount, pCheckpointData);
}

static VKAPI_ATTR void VKAPI_CALL vkmock_GetQueueCheckpointData2NV(VkQueue queue, uint32_t* pCheckpointDataCount,
                                                                   VkCheckpointData2NV* pCheckpointData) {
    return vkmock::GetQueueCheckpointData2NV(queue, pCheckpointDataCount, pCheckpointData);
}

static VKAPI_ATTR VkResult VKAPI_CALL
vkmock_InitializePerformanceApiINTEL(VkDevice device, const VkInitializePerformanceApiInfoINTEL* pInitializeInfo) {
    return vkmock::InitializePerformanceApiINTEL(device, pInitializeInfo);
}

static VKAPI_ATTR void VKAPI_CALL vkmock_UninitializePerformanceApiINTEL(VkDevice device) {
    return vkmock::UninitializePerformanceApiINTEL(device);
}

static VKAPI_ATTR VkResult VKAPI_CALL vkmock_CmdSetPerformanceMarkerINTEL(VkCommandBuffer commandBuffer,
                                                                          const VkPerformanceMarkerInfoINTEL* pMarkerInfo) {
    return vkmock::CmdSetPerformanceMarkerINTEL(commandBuffer, pMarkerInfo);
}

static VKAPI_ATTR VkResult VKAPI_CALL
vkmock_CmdSetPerformanceStreamMarkerINTEL(VkCommandBuffer commandBuffer, const VkPerformanceStreamMarkerInfoINTEL* pMarkerInfo) {
    return vkmock::CmdSetPerformanceStreamMarkerINTEL(commandBuffer, pMarkerInfo);
}

static VKAPI_ATTR VkResult VKAPI_CALL vkmock_CmdSetPerformanceOverrideINTEL(VkCommandBuffer commandBuffer,
                                                                            const VkPerformanceOverrideInfoINTEL* pOverrideInfo) {
    return vkmock::CmdSetPerformanceOverrideINTEL(commandBuffer, pOverrideInfo);
}

static VKAPI_ATTR VkResult VKAPI_CALL
vkmock_AcquirePerformanceConfigurationINTEL(VkDevice device, const VkPerformanceConfigurationAcquireInfoINTEL* pAcquireInfo,
                                            VkPerformanceConfigurationINTEL* pConfiguration) {
    return vkmock::AcquirePerformanceConfigurationINTEL(device, pAcquireInfo, pConfiguration);
}

static VKAPI_ATTR VkResult VKAPI_CALL vkmock_ReleasePerformanceConfigurationINTEL(VkDevice device,
                                                                                  VkPerformanceConfigurationINTEL configuration) {
    return vkmock::ReleasePerformanceConfigurationINTEL(device, configuration);
}

static VKAPI_ATTR VkResult VKAPI_CALL vkmock_QueueSetPerformanceConfigurationINTEL(VkQueue queue,
                                                                                   VkPerformanceConfigurationINTEL configuration) {
    return vkmock::QueueSetPerformanceConfigurationINTEL(queue, configuration);
}

static VKAPI_ATTR VkResult VKAPI_CALL vkmock_GetPerformanceParameterINTEL(VkDevice device,
                                                                          VkPerformanceParameterTypeINTEL parameter,
                                                                          VkPerformanceValueINTEL* pValue) {
    return vkmock::GetPerformanceParameterINTEL(device, parameter, pValue);
}

static VKAPI_ATTR void VKAPI_CALL vkmock_SetLocalDimmingAMD(VkDevice device, VkSwapchainKHR swapChain,
                                                            VkBool32 localDimmingEnable) {
    return vkmock::SetLocalDimmingAMD(device, swapChain, localDimmingEnable);
}

#ifdef VK_USE_PLATFORM_FUCHSIA
static VKAPI_ATTR VkResult VKAPI_CALL vkmock_CreateImagePipeSurfaceFUCHSIA(VkInstance instance,
                                                                           const VkImagePipeSurfaceCreateInfoFUCHSIA* pCreateInfo,
                                                                           const VkAllocationCallbacks* pAllocator,
                                                                           VkSurfaceKHR* pSurface) {
    return vkmock::CreateImagePipeSurfaceFUCHSIA(instance, pCreateInfo, pAllocator, pSurface);
}

#endif  // VK_USE_PLATFORM_FUCHSIA
#ifdef VK_USE_PLATFORM_METAL_EXT
static VKAPI_ATTR VkResult VKAPI_CALL vkmock_CreateMetalSurfaceEXT(VkInstance instance,
                                                                   const VkMetalSurfaceCreateInfoEXT* pCreateInfo,
                                                                   const VkAllocationCallbacks* pAllocator,
                                                                   VkSurfaceKHR* pSurface) {
    return vkmock::CreateMetalSurfaceEXT(instance, pCreateInfo, pAllocator, pSurface);
}

#endif  // VK_USE_PLATFORM_METAL_EXT
static VKAPI_ATTR VkDeviceAddress VKAPI_CALL vkmock_GetBufferDeviceAddressEXT(VkDevice device,
                                                                              const VkBufferDeviceAddressInfo* pInfo) {
    return vkmock::GetBufferDeviceAddressEXT(device, pInfo);
}

static VKAPI_ATTR VkResult VKAPI_CALL vkmock_GetPhysicalDeviceToolPropertiesEXT(VkPhysicalDevice physicalDevice,
                                                                                uint32_t* pToolCount,
                                                                                VkPhysicalDeviceToolProperties* pToolProperties) {
    return vkmock::GetPhysicalDeviceToolPropertiesEXT(physicalDevice, pToolCount, pToolProperties);
}

static VKAPI_ATTR VkResult VKAPI_CALL vkmock_GetPhysicalDeviceCooperativeMatrixPropertiesNV(
    VkPhysicalDevice physicalDevice, uint32_t* pPropertyCount, VkCooperativeMatrixPropertiesNV* pProperties) {
    return vkmock::GetPhysicalDeviceCooperativeMatrixPropertiesNV(physicalDevice, pPropertyCount, pProperties);
}

static VKAPI_ATTR VkResult VKAPI_CALL vkmock_GetPhysicalDeviceSupportedFramebufferMixedSamplesCombinationsNV(
    VkPhysicalDevice physicalDevice, uint32_t* pCombinationCount, VkFramebufferMixedSamplesCombinationNV* pCombinations) {
    return vkmock::GetPhysicalDeviceSupportedFramebufferMixedSamplesCombinationsNV(physicalDevice, pCombinationCount,
                                                                                   pCombinations);
}

#ifdef VK_USE_PLATFORM_WIN32_KHR
static VKAPI_ATTR VkResult VKAPI_CALL vkmock_GetPhysicalDeviceSurfacePresentModes2EXT(
    VkPhysicalDevice physicalDevice, const VkPhysicalDeviceSurfaceInfo2KHR* pSurfaceInfo, uint32_t* pPresentModeCount,
    VkPresentModeKHR* pPresentModes) {
    return vkmock::GetPhysicalDeviceSurfacePresentModes2EXT(physicalDevice, pSurfaceInfo, pPresentModeCount, pPresentModes);
}

static VKAPI_ATTR VkResult VKAPI_CALL vkmock_AcquireFullScreenExclusiveModeEXT(VkDevice device, VkSwapchainKHR swapchain) {
    return vkmock::AcquireFullScreenExclusiveModeEXT(device, swapchain);
}

static VKAPI_ATTR VkResult VKAPI_CALL vkmock_ReleaseFullScreenExclusiveModeEXT(VkDevice device, VkSwapchainKHR swapchain) {
    return vkmock::ReleaseFullScreenExclusiveModeEXT(device, swapchain);
}

static VKAPI_ATTR VkResult VKAPI_CALL vkmock_GetDeviceGroupSurfacePresentModes2EXT(
    VkDevice device, const VkPhysicalDeviceSurfaceInfo2KHR* pSurfaceInfo, VkDeviceGroupPresentModeFlagsKHR* pModes) {
    return vkmock::GetDeviceGroupSurfacePresentModes2EXT(device, pSurfaceInfo, pModes);
}

#endif  // VK_USE_PLATFORM_WIN32_KHR
static VKAPI_ATTR VkResult VKAPI_CALL vkmock_CreateHeadlessSurfaceEXT(VkInstance instance,
                                                                      const VkHeadlessSurfaceCreateInfoEXT* pCreateInfo,
                                                                      const VkAllocationCallbacks* pAllocator,
                                                                      VkSurfaceKHR* pSurface) {
    return vkmock::CreateHeadlessSurfaceEXT(instance, pCreateInfo, pAllocator, pSurface);
}

static VKAPI_ATTR void VKAPI_CALL vkmock_CmdSetLineStippleEXT(VkCommandBuffer commandBuffer, uint32_t lineStippleFactor,
                                                              uint16_t lineStipplePattern) {
    return vkmock::CmdSetLineStippleEXT(commandBuffer, lineStippleFactor, lineStipplePattern);
}

static VKAPI_ATTR void VKAPI_CALL vkmock_ResetQueryPoolEXT(VkDevice device, VkQueryPool queryPool, uint32_t firstQuery,
                                                           uint32_t queryCount) {
    return vkmock::ResetQueryPoolEXT(device, queryPool, firstQuery, queryCount);
}

static VKAPI_ATTR void VKAPI_CALL vkmock_CmdSetCullModeEXT(VkCommandBuffer commandBuffer, VkCullModeFlags cullMode) {
    return vkmock::CmdSetCullModeEXT(commandBuffer, cullMode);
}

static VKAPI_ATTR void VKAPI_CALL vkmock_CmdSetFrontFaceEXT(VkCommandBuffer commandBuffer, VkFrontFace frontFace) {
    return vkmock::CmdSetFrontFaceEXT(commandBuffer, frontFace);
}

static VKAPI_ATTR void VKAPI_CALL vkmock_CmdSetPrimitiveTopologyEXT(VkCommandBuffer commandBuffer,
                                                                    VkPrimitiveTopology primitiveTopology) {
    return vkmock::CmdSetPrimitiveTopologyEXT(commandBuffer, primitiveTopology);
}

static VKAPI_ATTR void VKAPI_CALL vkmock_CmdSetViewportWithCountEXT(VkCommandBuffer commandBuffer, uint32_t viewportCount,
                                                                    const VkViewport* pViewports) {
    return vkmock::CmdSetViewportWithCountEXT(commandBuffer, viewportCount, pViewports);
}

static VKAPI_ATTR void VKAPI_CALL vkmock_CmdSetScissorWithCountEXT(VkCommandBuffer commandBuffer, uint32_t scissorCount,
                                                                   const VkRect2D* pScissors) {
    return vkmock::CmdSetScissorWithCountEXT(commandBuffer, scissorCount, pScissors);
}

static VKAPI_ATTR void VKAPI_CALL vkmock_CmdBindVertexBuffers2EXT(VkCommandBuffer commandBuffer, uint32_t firstBinding,
                                                                  uint32_t bindingCount, const VkBuffer* pBuffers,
                                                                  const VkDeviceSize* pOffsets, const VkDeviceSize* pSizes,
                                                                  const VkDeviceSize* pStrides) {
    return vkmock::CmdBindVertexBuffers2EXT(commandBuffer, firstBinding, bindingCount, pBuffers, pOffsets, pSizes, pStrides);
}

static VKAPI_ATTR void VKAPI_CALL vkmock_CmdSetDepthTestEnableEXT(VkCommandBuffer commandBuffer, VkBool32 depthTestEnable) {
    return vkmock::CmdSetDepthTestEnableEXT(commandBuffer, depthTestEnable);
}

static VKAPI_ATTR void VKAPI_CALL vkmock_CmdSetDepthWriteEnableEXT(VkCommandBuffer commandBuffer, VkBool32 depthWriteEnable) {
    return vkmock::CmdSetDepthWriteEnableEXT(commandBuffer, depthWriteEnable);
}

static VKAPI_ATTR void VKAPI_CALL vkmock_CmdSetDepthCompareOpEXT(VkCommandBuffer commandBuffer, VkCompareOp depthCompareOp) {
    return vkmock::CmdSetDepthCompareOpEXT(commandBuffer, depthCompareOp);
}

static VKAPI_ATTR void VKAPI_CALL vkmock_CmdSetDepthBoundsTestEnableEXT(VkCommandBuffer commandBuffer,
                                                                        VkBool32 depthBoundsTestEnable) {
    return vkmock::CmdSetDepthBoundsTestEnableEXT(commandBuffer, depthBoundsTestEnable);
}

static VKAPI_ATTR void VKAPI_CALL vkmock_CmdSetStencilTestEnableEXT(VkCommandBuffer commandBuffer, VkBool32 stencilTestEnable) {
    return vkmock::CmdSetStencilTestEnableEXT(commandBuffer, stencilTestEnable);
}

static VKAPI_ATTR void VKAPI_CALL vkmock_CmdSetStencilOpEXT(VkCommandBuffer commandBuffer, VkStencilFaceFlags faceMask,
                                                            VkStencilOp failOp, VkStencilOp passOp, VkStencilOp depthFailOp,
                                                            VkCompareOp compareOp) {
    return vkmock::CmdSetStencilOpEXT(commandBuffer, faceMask, failOp, passOp, depthFailOp, compareOp);
}

static VKAPI_ATTR VkResult VKAPI_CALL vkmock_CopyMemoryToImageEXT(VkDevice device,
                                                                  const VkCopyMemoryToImageInfo* pCopyMemoryToImageInfo) {
    return vkmock::CopyMemoryToImageEXT(device, pCopyMemoryToImageInfo);
}

static VKAPI_ATTR VkResult VKAPI_CALL vkmock_CopyImageToMemoryEXT(VkDevice device,
                                                                  const VkCopyImageToMemoryInfo* pCopyImageToMemoryInfo) {
    return vkmock::CopyImageToMemoryEXT(device, pCopyImageToMemoryInfo);
}

static VKAPI_ATTR VkResult VKAPI_CALL vkmock_CopyImageToImageEXT(VkDevice device,
                                                                 const VkCopyImageToImageInfo* pCopyImageToImageInfo) {
    return vkmock::CopyImageToImageEXT(device, pCopyImageToImageInfo);
}

static VKAPI_ATTR VkResult VKAPI_CALL vkmock_TransitionImageLayoutEXT(VkDevice device, uint32_t transitionCount,
                                                                      const VkHostImageLayoutTransitionInfo* pTransitions) {
    return vkmock::TransitionImageLayoutEXT(device, transitionCount, pTransitions);
}

static VKAPI_ATTR void VKAPI_CALL vkmock_GetImageSubresourceLayout2EXT(VkDevice device, VkImage image,
                                                                       const VkImageSubresource2* pSubresource,
                                                                       VkSubresourceLayout2* pLayout) {
    return vkmock::GetImageSubresourceLayout2EXT(device, image, pSubresource, pLayout);
}

static VKAPI_ATTR VkResult VKAPI_CALL vkmock_ReleaseSwapchainImagesEXT(VkDevice device,
                                                                       const VkReleaseSwapchainImagesInfoEXT* pReleaseInfo) {
    return vkmock::ReleaseSwapchainImagesEXT(device, pReleaseInfo);
}

static VKAPI_ATTR void VKAPI_CALL vkmock_GetGeneratedCommandsMemoryRequirementsNV(
    VkDevice device, const VkGeneratedCommandsMemoryRequirementsInfoNV* pInfo, VkMemoryRequirements2* pMemoryRequirements) {
    return vkmock::GetGeneratedCommandsMemoryRequirementsNV(device, pInfo, pMemoryRequirements);
}

static VKAPI_ATTR void VKAPI_CALL vkmock_CmdPreprocessGeneratedCommandsNV(VkCommandBuffer commandBuffer,
                                                                          const VkGeneratedCommandsInfoNV* pGeneratedCommandsInfo) {
    return vkmock::CmdPreprocessGeneratedCommandsNV(commandBuffer, pGeneratedCommandsInfo);
}

static VKAPI_ATTR void VKAPI_CALL vkmock_CmdExecuteGeneratedCommandsNV(VkCommandBuffer commandBuffer, VkBool32 isPreprocessed,
                                                                       const VkGeneratedCommandsInfoNV* pGeneratedCommandsInfo) {
    return vkmock::CmdExecuteGeneratedCommandsNV(commandBuffer, isPreprocessed, pGeneratedCommandsInfo);
}

static VKAPI_ATTR void VKAPI_CALL vkmock_CmdBindPipelineShaderGroupNV(VkCommandBuffer commandBuffer,
                                                                      VkPipelineBindPoint pipelineBindPoint, VkPipeline pipeline,
                                                                      uint32_t groupIndex) {
    return vkmock::CmdBindPipelineShaderGroupNV(commandBuffer, pipelineBindPoint, pipeline, groupIndex);
}

static VKAPI_ATTR VkResult VKAPI_CALL vkmock_CreateIndirectCommandsLayoutNV(VkDevice device,
                                                                            const VkIndirectCommandsLayoutCreateInfoNV* pCreateInfo,
                                                                            const VkAllocationCallbacks* pAllocator,
                                                                            VkIndirectCommandsLayoutNV* pIndirectCommandsLayout) {
    return vkmock::CreateIndirectCommandsLayoutNV(device, pCreateInfo, pAllocator, pIndirectCommandsLayout);
}

static VKAPI_ATTR void VKAPI_CALL vkmock_DestroyIndirectCommandsLayoutNV(VkDevice device,
                                                                         VkIndirectCommandsLayoutNV indirectCommandsLayout,
                                                                         const VkAllocationCallbacks* pAllocator) {
    return vkmock::DestroyIndirectCommandsLayoutNV(device, indirectCommandsLayout, pAllocator);
}

static VKAPI_ATTR void VKAPI_CALL vkmock_CmdSetDepthBias2EXT(VkCommandBuffer commandBuffer,
                                                             const VkDepthBiasInfoEXT* pDepthBiasInfo) {
    return vkmock::CmdSetDepthBias2EXT(commandBuffer, pDepthBiasInfo);
}

static VKAPI_ATTR VkResult VKAPI_CALL vkmock_AcquireDrmDisplayEXT(VkPhysicalDevice physicalDevice, int32_t drmFd,
                                                                  VkDisplayKHR display) {
    return vkmock::AcquireDrmDisplayEXT(physicalDevice, drmFd, display);
}

static VKAPI_ATTR VkResult VKAPI_CALL vkmock_GetDrmDisplayEXT(VkPhysicalDevice physicalDevice, int32_t drmFd, uint32_t connectorId,
                                                              VkDisplayKHR* display) {
    return vkmock::GetDrmDisplayEXT(physicalDevice, drmFd, connectorId, display);
}

static VKAPI_ATTR VkResult VKAPI_CALL vkmock_CreatePrivateDataSlotEXT(VkDevice device,
                                                                      const VkPrivateDataSlotCreateInfo* pCreateInfo,
                                                                      const VkAllocationCallbacks* pAllocator,
                                                                      VkPrivateDataSlot* pPrivateDataSlot) {
    return vkmock::CreatePrivateDataSlotEXT(device, pCreateInfo, pAllocator, pPrivateDataSlot);
}

static VKAPI_ATTR void VKAPI_CALL vkmock_DestroyPrivateDataSlotEXT(VkDevice device, VkPrivateDataSlot privateDataSlot,
                                                                   const VkAllocationCallbacks* pAllocator) {
    return vkmock::DestroyPrivateDataSlotEXT(device, privateDataSlot, pAllocator);
}

static VKAPI_ATTR VkResult VKAPI_CALL vkmock_SetPrivateDataEXT(VkDevice device, VkObjectType objectType, uint64_t objectHandle,
                                                               VkPrivateDataSlot privateDataSlot, uint64_t data) {
    return vkmock::SetPrivateDataEXT(device, objectType, objectHandle, privateDataSlot, data);
}

static VKAPI_ATTR void VKAPI_CALL vkmock_GetPrivateDataEXT(VkDevice device, VkObjectType objectType, uint64_t objectHandle,
                                                           VkPrivateDataSlot privateDataSlot, uint64_t* pData) {
    return vkmock::GetPrivateDataEXT(device, objectType, objectHandle, privateDataSlot, pData);
}

#ifdef VK_ENABLE_BETA_EXTENSIONS
static VKAPI_ATTR VkResult VKAPI_CALL vkmock_CreateCudaModuleNV(VkDevice device, const VkCudaModuleCreateInfoNV* pCreateInfo,
                                                                const VkAllocationCallbacks* pAllocator, VkCudaModuleNV* pModule) {
    return vkmock::CreateCudaModuleNV(device, pCreateInfo, pAllocator, pModule);
}

static VKAPI_ATTR VkResult VKAPI_CALL vkmock_GetCudaModuleCacheNV(VkDevice device, VkCudaModuleNV module, size_t* pCacheSize,
                                                                  void* pCacheData) {
    return vkmock::GetCudaModuleCacheNV(device, module, pCacheSize, pCacheData);
}

static VKAPI_ATTR VkResult VKAPI_CALL vkmock_CreateCudaFunctionNV(VkDevice device, const VkCudaFunctionCreateInfoNV* pCreateInfo,
                                                                  const VkAllocationCallbacks* pAllocator,
                                                                  VkCudaFunctionNV* pFunction) {
    return vkmock::CreateCudaFunctionNV(device, pCreateInfo, pAllocator, pFunction);
}

static VKAPI_ATTR void VKAPI_CALL vkmock_DestroyCudaModuleNV(VkDevice device, VkCudaModuleNV module,
                                                             const VkAllocationCallbacks* pAllocator) {
    return vkmock::DestroyCudaModuleNV(device, module, pAllocator);
}

static VKAPI_ATTR void VKAPI_CALL vkmock_DestroyCudaFunctionNV(VkDevice device, VkCudaFunctionNV function,
                                                               const VkAllocationCallbacks* pAllocator) {
    return vkmock::DestroyCudaFunctionNV(device, function, pAllocator);
}

static VKAPI_ATTR void VKAPI_CALL vkmock_CmdCudaLaunchKernelNV(VkCommandBuffer commandBuffer,
                                                               const VkCudaLaunchInfoNV* pLaunchInfo) {
    return vkmock::CmdCudaLaunchKernelNV(commandBuffer, pLaunchInfo);
}

#endif  // VK_ENABLE_BETA_EXTENSIONS
#ifdef VK_USE_PLATFORM_METAL_EXT
static VKAPI_ATTR void VKAPI_CALL vkmock_ExportMetalObjectsEXT(VkDevice device, VkExportMetalObjectsInfoEXT* pMetalObjectsInfo) {
    return vkmock::ExportMetalObjectsEXT(device, pMetalObjectsInfo);
}

#endif  // VK_USE_PLATFORM_METAL_EXT
static VKAPI_ATTR void VKAPI_CALL vkmock_GetDescriptorSetLayoutSizeEXT(VkDevice device, VkDescriptorSetLayout layout,
                                                                       VkDeviceSize* pLayoutSizeInBytes) {
    return vkmock::GetDescriptorSetLayoutSizeEXT(device, layout, pLayoutSizeInBytes);
}

static VKAPI_ATTR void VKAPI_CALL vkmock_GetDescriptorSetLayoutBindingOffsetEXT(VkDevice device, VkDescriptorSetLayout layout,
                                                                                uint32_t binding, VkDeviceSize* pOffset) {
    return vkmock::GetDescriptorSetLayoutBindingOffsetEXT(device, layout, binding, pOffset);
}

static VKAPI_ATTR void VKAPI_CALL vkmock_GetDescriptorEXT(VkDevice device, const VkDescriptorGetInfoEXT* pDescriptorInfo,
                                                          size_t dataSize, void* pDescriptor) {
    return vkmock::GetDescriptorEXT(device, pDescriptorInfo, dataSize, pDescriptor);
}

static VKAPI_ATTR void VKAPI_CALL vkmock_CmdBindDescriptorBuffersEXT(VkCommandBuffer commandBuffer, uint32_t bufferCount,
                                                                     const VkDescriptorBufferBindingInfoEXT* pBindingInfos) {
    return vkmock::CmdBindDescriptorBuffersEXT(commandBuffer, bufferCount, pBindingInfos);
}

static VKAPI_ATTR void VKAPI_CALL vkmock_CmdSetDescriptorBufferOffsetsEXT(VkCommandBuffer commandBuffer,
                                                                          VkPipelineBindPoint pipelineBindPoint,
                                                                          VkPipelineLayout layout, uint32_t firstSet,
                                                                          uint32_t setCount, const uint32_t* pBufferIndices,
                                                                          const VkDeviceSize* pOffsets) {
    return vkmock::CmdSetDescriptorBufferOffsetsEXT(commandBuffer, pipelineBindPoint, layout, firstSet, setCount, pBufferIndices,
                                                    pOffsets);
}

static VKAPI_ATTR void VKAPI_CALL vkmock_CmdBindDescriptorBufferEmbeddedSamplersEXT(VkCommandBuffer commandBuffer,
                                                                                    VkPipelineBindPoint pipelineBindPoint,
                                                                                    VkPipelineLayout layout, uint32_t set) {
    return vkmock::CmdBindDescriptorBufferEmbeddedSamplersEXT(commandBuffer, pipelineBindPoint, layout, set);
}

static VKAPI_ATTR VkResult VKAPI_CALL
vkmock_GetBufferOpaqueCaptureDescriptorDataEXT(VkDevice device, const VkBufferCaptureDescriptorDataInfoEXT* pInfo, void* pData) {
    return vkmock::GetBufferOpaqueCaptureDescriptorDataEXT(device, pInfo, pData);
}

static VKAPI_ATTR VkResult VKAPI_CALL
vkmock_GetImageOpaqueCaptureDescriptorDataEXT(VkDevice device, const VkImageCaptureDescriptorDataInfoEXT* pInfo, void* pData) {
    return vkmock::GetImageOpaqueCaptureDescriptorDataEXT(device, pInfo, pData);
}

static VKAPI_ATTR VkResult VKAPI_CALL vkmock_GetImageViewOpaqueCaptureDescriptorDataEXT(
    VkDevice device, const VkImageViewCaptureDescriptorDataInfoEXT* pInfo, void* pData) {
    return vkmock::GetImageViewOpaqueCaptureDescriptorDataEXT(device, pInfo, pData);
}

static VKAPI_ATTR VkResult VKAPI_CALL
vkmock_GetSamplerOpaqueCaptureDescriptorDataEXT(VkDevice device, const VkSamplerCaptureDescriptorDataInfoEXT* pInfo, void* pData) {
    return vkmock::GetSamplerOpaqueCaptureDescriptorDataEXT(device, pInfo, pData);
}

static VKAPI_ATTR VkResult VKAPI_CALL vkmock_GetAccelerationStructureOpaqueCaptureDescriptorDataEXT(
    VkDevice device, const VkAccelerationStructureCaptureDescriptorDataInfoEXT* pInfo, void* pData) {
    return vkmock::GetAccelerationStructureOpaqueCaptureDescriptorDataEXT(device, pInfo, pData);
}

static VKAPI_ATTR void VKAPI_CALL vkmock_CmdSetFragmentShadingRateEnumNV(VkCommandBuffer commandBuffer,
                                                                         VkFragmentShadingRateNV shadingRate,
                                                                         const VkFragmentShadingRateCombinerOpKHR combinerOps[2]) {
    return vkmock::CmdSetFragmentShadingRateEnumNV(commandBuffer, shadingRate, combinerOps);
}

static VKAPI_ATTR VkResult VKAPI_CALL vkmock_GetDeviceFaultInfoEXT(VkDevice device, VkDeviceFaultCountsEXT* pFaultCounts,
                                                                   VkDeviceFaultInfoEXT* pFaultInfo) {
    return vkmock::GetDeviceFaultInfoEXT(device, pFaultCounts, pFaultInfo);
}

#ifdef VK_USE_PLATFORM_WIN32_KHR
static VKAPI_ATTR VkResult VKAPI_CALL vkmock_AcquireWinrtDisplayNV(VkPhysicalDevice physicalDevice, VkDisplayKHR display) {
    return vkmock::AcquireWinrtDisplayNV(physicalDevice, display);
}

static VKAPI_ATTR VkResult VKAPI_CALL vkmock_GetWinrtDisplayNV(VkPhysicalDevice physicalDevice, uint32_t deviceRelativeId,
                                                               VkDisplayKHR* pDisplay) {
    return vkmock::GetWinrtDisplayNV(physicalDevice, deviceRelativeId, pDisplay);
}

#endif  // VK_USE_PLATFORM_WIN32_KHR
#ifdef VK_USE_PLATFORM_DIRECTFB_EXT
static VKAPI_ATTR VkResult VKAPI_CALL vkmock_CreateDirectFBSurfaceEXT(VkInstance instance,
                                                                      const VkDirectFBSurfaceCreateInfoEXT* pCreateInfo,
                                                                      const VkAllocationCallbacks* pAllocator,
                                                                      VkSurfaceKHR* pSurface) {
    return vkmock::CreateDirectFBSurfaceEXT(instance, pCreateInfo, pAllocator, pSurface);
}

static VKAPI_ATTR VkBool32 VKAPI_CALL vkmock_GetPhysicalDeviceDirectFBPresentationSupportEXT(VkPhysicalDevice physicalDevice,
                                                                                             uint32_t queueFamilyIndex,
                                                                                             IDirectFB* dfb) {
    return vkmock::GetPhysicalDeviceDirectFBPresentationSupportEXT(physicalDevice, queueFamilyIndex, dfb);
}

#endif  // VK_USE_PLATFORM_DIRECTFB_EXT
static VKAPI_ATTR void VKAPI_CALL vkmock_CmdSetVertexInputEXT(
    VkCommandBuffer commandBuffer, uint32_t vertexBindingDescriptionCount,
    const VkVertexInputBindingDescription2EXT* pVertexBindingDescriptions, uint32_t vertexAttributeDescriptionCount,
    const VkVertexInputAttributeDescription2EXT* pVertexAttributeDescriptions) {
    return vkmock::CmdSetVertexInputEXT(commandBuffer, vertexBindingDescriptionCount, pVertexBindingDescriptions,
                                        vertexAttributeDescriptionCount, pVertexAttributeDescriptions);
}

#ifdef VK_USE_PLATFORM_FUCHSIA
static VKAPI_ATTR VkResult VKAPI_CALL vkmock_GetMemoryZirconHandleFUCHSIA(
    VkDevice device, const VkMemoryGetZirconHandleInfoFUCHSIA* pGetZirconHandleInfo, zx_handle_t* pZirconHandle) {
    return vkmock::GetMemoryZirconHandleFUCHSIA(device, pGetZirconHandleInfo, pZirconHandle);
}

static VKAPI_ATTR VkResult VKAPI_CALL vkmock_GetMemoryZirconHandlePropertiesFUCHSIA(
    VkDevice device, VkExternalMemoryHandleTypeFlagBits handleType, zx_handle_t zirconHandle,
    VkMemoryZirconHandlePropertiesFUCHSIA* pMemoryZirconHandleProperties) {
    return vkmock::GetMemoryZirconHandlePropertiesFUCHSIA(device, handleType, zirconHandle, pMemoryZirconHandleProperties);
}

static VKAPI_ATTR VkResult VKAPI_CALL vkmock_ImportSemaphoreZirconHandleFUCHSIA(
    VkDevice device, const VkImportSemaphoreZirconHandleInfoFUCHSIA* pImportSemaphoreZirconHandleInfo) {
    return vkmock::ImportSemaphoreZirconHandleFUCHSIA(device, pImportSemaphoreZirconHandleInfo);
}

static VKAPI_ATTR VkResult VKAPI_CALL vkmock_GetSemaphoreZirconHandleFUCHSIA(
    VkDevice device, const VkSemaphoreGetZirconHandleInfoFUCHSIA* pGetZirconHandleInfo, zx_handle_t* pZirconHandle) {
    return vkmock::GetSemaphoreZirconHandleFUCHSIA(device, pGetZirconHandleInfo, pZirconHandle);
}

static VKAPI_ATTR VkResult VKAPI_CALL vkmock_CreateBufferCollectionFUCHSIA(VkDevice device,
                                                                           const VkBufferCollectionCreateInfoFUCHSIA* pCreateInfo,
                                                                           const VkAllocationCallbacks* pAllocator,
                                                                           VkBufferCollectionFUCHSIA* pCollection) {
    return vkmock::CreateBufferCollectionFUCHSIA(device, pCreateInfo, pAllocator, pCollection);
}

static VKAPI_ATTR VkResult VKAPI_CALL vkmock_SetBufferCollectionImageConstraintsFUCHSIA(
    VkDevice device, VkBufferCollectionFUCHSIA collection, const VkImageConstraintsInfoFUCHSIA* pImageConstraintsInfo) {
    return vkmock::SetBufferCollectionImageConstraintsFUCHSIA(device, collection, pImageConstraintsInfo);
}

static VKAPI_ATTR VkResult VKAPI_CALL vkmock_SetBufferCollectionBufferConstraintsFUCHSIA(
    VkDevice device, VkBufferCollectionFUCHSIA collection, const VkBufferConstraintsInfoFUCHSIA* pBufferConstraintsInfo) {
    return vkmock::SetBufferCollectionBufferConstraintsFUCHSIA(device, collection, pBufferConstraintsInfo);
}

static VKAPI_ATTR void VKAPI_CALL vkmock_DestroyBufferCollectionFUCHSIA(VkDevice device, VkBufferCollectionFUCHSIA collection,
                                                                        const VkAllocationCallbacks* pAllocator) {
    return vkmock::DestroyBufferCollectionFUCHSIA(device, collection, pAllocator);
}

static VKAPI_ATTR VkResult VKAPI_CALL vkmock_GetBufferCollectionPropertiesFUCHSIA(
    VkDevice device, VkBufferCollectionFUCHSIA collection, VkBufferCollectionPropertiesFUCHSIA* pProperties) {
    return vkmock::GetBufferCollectionPropertiesFUCHSIA(device, collection, pProperties);
}

#endif  // VK_USE_PLATFORM_FUCHSIA
static VKAPI_ATTR VkResult VKAPI_CALL vkmock_GetDeviceSubpassShadingMaxWorkgroupSizeHUAWEI(VkDevice device, VkRenderPass renderpass,
                                                                                           VkExtent2D* pMaxWorkgroupSize) {
    return vkmock::GetDeviceSubpassShadingMaxWorkgroupSizeHUAWEI(device, renderpass, pMaxWorkgroupSize);
}

static VKAPI_ATTR void VKAPI_CALL vkmock_CmdSubpassShadingHUAWEI(VkCommandBuffer commandBuffer) {
    return vkmock::CmdSubpassShadingHUAWEI(commandBuffer);
}

static VKAPI_ATTR void VKAPI_CALL vkmock_CmdBindInvocationMaskHUAWEI(VkCommandBuffer commandBuffer, VkImageView imageView,
                                                                     VkImageLayout imageLayout) {
    return vkmock::CmdBindInvocationMaskHUAWEI(commandBuffer, imageView, imageLayout);
}

static VKAPI_ATTR VkResult VKAPI_CALL vkmock_GetMemoryRemoteAddressNV(
    VkDevice device, const VkMemoryGetRemoteAddressInfoNV* pMemoryGetRemoteAddressInfo, VkRemoteAddressNV* pAddress) {
    return vkmock::GetMemoryRemoteAddressNV(device, pMemoryGetRemoteAddressInfo, pAddress);
}

static VKAPI_ATTR VkResult VKAPI_CALL vkmock_GetPipelinePropertiesEXT(VkDevice device, const VkPipelineInfoEXT* pPipelineInfo,
                                                                      VkBaseOutStructure* pPipelineProperties) {
    return vkmock::GetPipelinePropertiesEXT(device, pPipelineInfo, pPipelineProperties);
}

static VKAPI_ATTR void VKAPI_CALL vkmock_CmdSetPatchControlPointsEXT(VkCommandBuffer commandBuffer, uint32_t patchControlPoints) {
    return vkmock::CmdSetPatchControlPointsEXT(commandBuffer, patchControlPoints);
}

static VKAPI_ATTR void VKAPI_CALL vkmock_CmdSetRasterizerDiscardEnableEXT(VkCommandBuffer commandBuffer,
                                                                          VkBool32 rasterizerDiscardEnable) {
    return vkmock::CmdSetRasterizerDiscardEnableEXT(commandBuffer, rasterizerDiscardEnable);
}

static VKAPI_ATTR void VKAPI_CALL vkmock_CmdSetDepthBiasEnableEXT(VkCommandBuffer commandBuffer, VkBool32 depthBiasEnable) {
    return vkmock::CmdSetDepthBiasEnableEXT(commandBuffer, depthBiasEnable);
}

static VKAPI_ATTR void VKAPI_CALL vkmock_CmdSetLogicOpEXT(VkCommandBuffer commandBuffer, VkLogicOp logicOp) {
    return vkmock::CmdSetLogicOpEXT(commandBuffer, logicOp);
}

static VKAPI_ATTR void VKAPI_CALL vkmock_CmdSetPrimitiveRestartEnableEXT(VkCommandBuffer commandBuffer,
                                                                         VkBool32 primitiveRestartEnable) {
    return vkmock::CmdSetPrimitiveRestartEnableEXT(commandBuffer, primitiveRestartEnable);
}

#ifdef VK_USE_PLATFORM_SCREEN_QNX
static VKAPI_ATTR VkResult VKAPI_CALL vkmock_CreateScreenSurfaceQNX(VkInstance instance,
                                                                    const VkScreenSurfaceCreateInfoQNX* pCreateInfo,
                                                                    const VkAllocationCallbacks* pAllocator,
                                                                    VkSurfaceKHR* pSurface) {
    return vkmock::CreateScreenSurfaceQNX(instance, pCreateInfo, pAllocator, pSurface);
}

static VKAPI_ATTR VkBool32 VKAPI_CALL vkmock_GetPhysicalDeviceScreenPresentationSupportQNX(VkPhysicalDevice physicalDevice,
                                                                                           uint32_t queueFamilyIndex,
                                                                                           struct _screen_window* window) {
    return vkmock::GetPhysicalDeviceScreenPresentationSupportQNX(physicalDevice, queueFamilyIndex, window);
}

#endif  // VK_USE_PLATFORM_SCREEN_QNX
static VKAPI_ATTR void VKAPI_CALL vkmock_CmdSetColorWriteEnableEXT(VkCommandBuffer commandBuffer, uint32_t attachmentCount,
                                                                   const VkBool32* pColorWriteEnables) {
    return vkmock::CmdSetColorWriteEnableEXT(commandBuffer, attachmentCount, pColorWriteEnables);
}

static VKAPI_ATTR void VKAPI_CALL vkmock_CmdDrawMultiEXT(VkCommandBuffer commandBuffer, uint32_t drawCount,
                                                         const VkMultiDrawInfoEXT* pVertexInfo, uint32_t instanceCount,
                                                         uint32_t firstInstance, uint32_t stride) {
    return vkmock::CmdDrawMultiEXT(commandBuffer, drawCount, pVertexInfo, instanceCount, firstInstance, stride);
}

static VKAPI_ATTR void VKAPI_CALL vkmock_CmdDrawMultiIndexedEXT(VkCommandBuffer commandBuffer, uint32_t drawCount,
                                                                const VkMultiDrawIndexedInfoEXT* pIndexInfo, uint32_t instanceCount,
                                                                uint32_t firstInstance, uint32_t stride,
                                                                const int32_t* pVertexOffset) {
    return vkmock::CmdDrawMultiIndexedEXT(commandBuffer, drawCount, pIndexInfo, instanceCount, firstInstance, stride,
                                          pVertexOffset);
}

static VKAPI_ATTR VkResult VKAPI_CALL vkmock_CreateMicromapEXT(VkDevice device, const VkMicromapCreateInfoEXT* pCreateInfo,
                                                               const VkAllocationCallbacks* pAllocator, VkMicromapEXT* pMicromap) {
    return vkmock::CreateMicromapEXT(device, pCreateInfo, pAllocator, pMicromap);
}

static VKAPI_ATTR void VKAPI_CALL vkmock_DestroyMicromapEXT(VkDevice device, VkMicromapEXT micromap,
                                                            const VkAllocationCallbacks* pAllocator) {
    return vkmock::DestroyMicromapEXT(device, micromap, pAllocator);
}

static VKAPI_ATTR void VKAPI_CALL vkmock_CmdBuildMicromapsEXT(VkCommandBuffer commandBuffer, uint32_t infoCount,
                                                              const VkMicromapBuildInfoEXT* pInfos) {
    return vkmock::CmdBuildMicromapsEXT(commandBuffer, infoCount, pInfos);
}

static VKAPI_ATTR VkResult VKAPI_CALL vkmock_BuildMicromapsEXT(VkDevice device, VkDeferredOperationKHR deferredOperation,
                                                               uint32_t infoCount, const VkMicromapBuildInfoEXT* pInfos) {
    return vkmock::BuildMicromapsEXT(device, deferredOperation, infoCount, pInfos);
}

static VKAPI_ATTR VkResult VKAPI_CALL vkmock_CopyMicromapEXT(VkDevice device, VkDeferredOperationKHR deferredOperation,
                                                             const VkCopyMicromapInfoEXT* pInfo) {
    return vkmock::CopyMicromapEXT(device, deferredOperation, pInfo);
}

static VKAPI_ATTR VkResult VKAPI_CALL vkmock_CopyMicromapToMemoryEXT(VkDevice device, VkDeferredOperationKHR deferredOperation,
                                                                     const VkCopyMicromapToMemoryInfoEXT* pInfo) {
    return vkmock::CopyMicromapToMemoryEXT(device, deferredOperation, pInfo);
}

static VKAPI_ATTR VkResult VKAPI_CALL vkmock_CopyMemoryToMicromapEXT(VkDevice device, VkDeferredOperationKHR deferredOperation,
                                                                     const VkCopyMemoryToMicromapInfoEXT* pInfo) {
    return vkmock::CopyMemoryToMicromapEXT(device, deferredOperation, pInfo);
}

static VKAPI_ATTR VkResult VKAPI_CALL vkmock_WriteMicromapsPropertiesEXT(VkDevice device, uint32_t micromapCount,
                                                                         const VkMicromapEXT* pMicromaps, VkQueryType queryType,
                                                                         size_t dataSize, void* pData, size_t stride) {
    return vkmock::WriteMicromapsPropertiesEXT(device, micromapCount, pMicromaps, queryType, dataSize, pData, stride);
}

static VKAPI_ATTR void VKAPI_CALL vkmock_CmdCopyMicromapEXT(VkCommandBuffer commandBuffer, const VkCopyMicromapInfoEXT* pInfo) {
    return vkmock::CmdCopyMicromapEXT(commandBuffer, pInfo);
}

static VKAPI_ATTR void VKAPI_CALL vkmock_CmdCopyMicromapToMemoryEXT(VkCommandBuffer commandBuffer,
                                                                    const VkCopyMicromapToMemoryInfoEXT* pInfo) {
    return vkmock::CmdCopyMicromapToMemoryEXT(commandBuffer, pInfo);
}

static VKAPI_ATTR void VKAPI_CALL vkmock_CmdCopyMemoryToMicromapEXT(VkCommandBuffer commandBuffer,
                                                                    const VkCopyMemoryToMicromapInfoEXT* pInfo) {
    return vkmock::CmdCopyMemoryToMicromapEXT(commandBuffer, pInfo);
}

static VKAPI_ATTR void VKAPI_CALL vkmock_CmdWriteMicromapsPropertiesEXT(VkCommandBuffer commandBuffer, uint32_t micromapCount,
                                                                        const VkMicromapEXT* pMicromaps, VkQueryType queryType,
                                                                        VkQueryPool queryPool, uint32_t firstQuery) {
    return vkmock::CmdWriteMicromapsPropertiesEXT(commandBuffer, micromapCount, pMicromaps, queryType, queryPool, firstQuery);
}

static VKAPI_ATTR void VKAPI_CALL vkmock_GetDeviceMicromapCompatibilityEXT(
    VkDevice device, const VkMicromapVersionInfoEXT* pVersionInfo, VkAccelerationStructureCompatibilityKHR* pCompatibility) {
    return vkmock::GetDeviceMicromapCompatibilityEXT(device, pVersionInfo, pCompatibility);
}

static VKAPI_ATTR void VKAPI_CALL vkmock_GetMicromapBuildSizesEXT(VkDevice device, VkAccelerationStructureBuildTypeKHR buildType,
                                                                  const VkMicromapBuildInfoEXT* pBuildInfo,
                                                                  VkMicromapBuildSizesInfoEXT* pSizeInfo) {
    return vkmock::GetMicromapBuildSizesEXT(device, buildType, pBuildInfo, pSizeInfo);
}

static VKAPI_ATTR void VKAPI_CALL vkmock_CmdDrawClusterHUAWEI(VkCommandBuffer commandBuffer, uint32_t groupCountX,
                                                              uint32_t groupCountY, uint32_t groupCountZ) {
    return vkmock::CmdDrawClusterHUAWEI(commandBuffer, groupCountX, groupCountY, groupCountZ);
}

static VKAPI_ATTR void VKAPI_CALL vkmock_CmdDrawClusterIndirectHUAWEI(VkCommandBuffer commandBuffer, VkBuffer buffer,
                                                                      VkDeviceSize offset) {
    return vkmock::CmdDrawClusterIndirectHUAWEI(commandBuffer, buffer, offset);
}

static VKAPI_ATTR void VKAPI_CALL vkmock_SetDeviceMemoryPriorityEXT(VkDevice device, VkDeviceMemory memory, float priority) {
    return vkmock::SetDeviceMemoryPriorityEXT(device, memory, priority);
}

static VKAPI_ATTR void VKAPI_CALL
vkmock_GetDescriptorSetLayoutHostMappingInfoVALVE(VkDevice device, const VkDescriptorSetBindingReferenceVALVE* pBindingReference,
                                                  VkDescriptorSetLayoutHostMappingInfoVALVE* pHostMapping) {
    return vkmock::GetDescriptorSetLayoutHostMappingInfoVALVE(device, pBindingReference, pHostMapping);
}

static VKAPI_ATTR void VKAPI_CALL vkmock_GetDescriptorSetHostMappingVALVE(VkDevice device, VkDescriptorSet descriptorSet,
                                                                          void** ppData) {
    return vkmock::GetDescriptorSetHostMappingVALVE(device, descriptorSet, ppData);
}

static VKAPI_ATTR void VKAPI_CALL vkmock_CmdCopyMemoryIndirectNV(VkCommandBuffer commandBuffer, VkDeviceAddress copyBufferAddress,
                                                                 uint32_t copyCount, uint32_t stride) {
    return vkmock::CmdCopyMemoryIndirectNV(commandBuffer, copyBufferAddress, copyCount, stride);
}

static VKAPI_ATTR void VKAPI_CALL vkmock_CmdCopyMemoryToImageIndirectNV(VkCommandBuffer commandBuffer,
                                                                        VkDeviceAddress copyBufferAddress, uint32_t copyCount,
                                                                        uint32_t stride, VkImage dstImage,
                                                                        VkImageLayout dstImageLayout,
                                                                        const VkImageSubresourceLayers* pImageSubresources) {
    return vkmock::CmdCopyMemoryToImageIndirectNV(commandBuffer, copyBufferAddress, copyCount, stride, dstImage, dstImageLayout,
                                                  pImageSubresources);
}

static VKAPI_ATTR void VKAPI_CALL vkmock_CmdDecompressMemoryNV(VkCommandBuffer commandBuffer, uint32_t decompressRegionCount,
                                                               const VkDecompressMemoryRegionNV* pDecompressMemoryRegions) {
    return vkmock::CmdDecompressMemoryNV(commandBuffer, decompressRegionCount, pDecompressMemoryRegions);
}

static VKAPI_ATTR void VKAPI_CALL vkmock_CmdDecompressMemoryIndirectCountNV(VkCommandBuffer commandBuffer,
                                                                            VkDeviceAddress indirectCommandsAddress,
                                                                            VkDeviceAddress indirectCommandsCountAddress,
                                                                            uint32_t stride) {
    return vkmock::CmdDecompressMemoryIndirectCountNV(commandBuffer, indirectCommandsAddress, indirectCommandsCountAddress, stride);
}

static VKAPI_ATTR void VKAPI_CALL vkmock_GetPipelineIndirectMemoryRequirementsNV(VkDevice device,
                                                                                 const VkComputePipelineCreateInfo* pCreateInfo,
                                                                                 VkMemoryRequirements2* pMemoryRequirements) {
    return vkmock::GetPipelineIndirectMemoryRequirementsNV(device, pCreateInfo, pMemoryRequirements);
}

static VKAPI_ATTR void VKAPI_CALL vkmock_CmdUpdatePipelineIndirectBufferNV(VkCommandBuffer commandBuffer,
                                                                           VkPipelineBindPoint pipelineBindPoint,
                                                                           VkPipeline pipeline) {
    return vkmock::CmdUpdatePipelineIndirectBufferNV(commandBuffer, pipelineBindPoint, pipeline);
}

static VKAPI_ATTR VkDeviceAddress VKAPI_CALL
vkmock_GetPipelineIndirectDeviceAddressNV(VkDevice device, const VkPipelineIndirectDeviceAddressInfoNV* pInfo) {
    return vkmock::GetPipelineIndirectDeviceAddressNV(device, pInfo);
}

static VKAPI_ATTR void VKAPI_CALL vkmock_CmdSetDepthClampEnableEXT(VkCommandBuffer commandBuffer, VkBool32 depthClampEnable) {
    return vkmock::CmdSetDepthClampEnableEXT(commandBuffer, depthClampEnable);
}

static VKAPI_ATTR void VKAPI_CALL vkmock_CmdSetPolygonModeEXT(VkCommandBuffer commandBuffer, VkPolygonMode polygonMode) {
    return vkmock::CmdSetPolygonModeEXT(commandBuffer, polygonMode);
}

static VKAPI_ATTR void VKAPI_CALL vkmock_CmdSetRasterizationSamplesEXT(VkCommandBuffer commandBuffer,
                                                                       VkSampleCountFlagBits rasterizationSamples) {
    return vkmock::CmdSetRasterizationSamplesEXT(commandBuffer, rasterizationSamples);
}

static VKAPI_ATTR void VKAPI_CALL vkmock_CmdSetSampleMaskEXT(VkCommandBuffer commandBuffer, VkSampleCountFlagBits samples,
                                                             const VkSampleMask* pSampleMask) {
    return vkmock::CmdSetSampleMaskEXT(commandBuffer, samples, pSampleMask);
}

static VKAPI_ATTR void VKAPI_CALL vkmock_CmdSetAlphaToCoverageEnableEXT(VkCommandBuffer commandBuffer,
                                                                        VkBool32 alphaToCoverageEnable) {
    return vkmock::CmdSetAlphaToCoverageEnableEXT(commandBuffer, alphaToCoverageEnable);
}

static VKAPI_ATTR void VKAPI_CALL vkmock_CmdSetAlphaToOneEnableEXT(VkCommandBuffer commandBuffer, VkBool32 alphaToOneEnable) {
    return vkmock::CmdSetAlphaToOneEnableEXT(commandBuffer, alphaToOneEnable);
}

static VKAPI_ATTR void VKAPI_CALL vkmock_CmdSetLogicOpEnableEXT(VkCommandBuffer commandBuffer, VkBool32 logicOpEnable) {
    return vkmock::CmdSetLogicOpEnableEXT(commandBuffer, logicOpEnable);
}

static VKAPI_ATTR void VKAPI_CALL vkmock_CmdSetColorBlendEnableEXT(VkCommandBuffer commandBuffer, uint32_t firstAttachment,
                                                                   uint32_t attachmentCount, const VkBool32* pColorBlendEnables) {
    return vkmock::CmdSetColorBlendEnableEXT(commandBuffer, firstAttachment, attachmentCount, pColorBlendEnables);
}

static VKAPI_ATTR void VKAPI_CALL vkmock_CmdSetColorBlendEquationEXT(VkCommandBuffer commandBuffer, uint32_t firstAttachment,
                                                                     uint32_t attachmentCount,
                                                                     const VkColorBlendEquationEXT* pColorBlendEquations) {
    return vkmock::CmdSetColorBlendEquationEXT(commandBuffer, firstAttachment, attachmentCount, pColorBlendEquations);
}

static VKAPI_ATTR void VKAPI_CALL vkmock_CmdSetColorWriteMaskEXT(VkCommandBuffer commandBuffer, uint32_t firstAttachment,
                                                                 uint32_t attachmentCount,
                                                                 const VkColorComponentFlags* pColorWriteMasks) {
    return vkmock::CmdSetColorWriteMaskEXT(commandBuffer, firstAttachment, attachmentCount, pColorWriteMasks);
}

static VKAPI_ATTR void VKAPI_CALL vkmock_CmdSetTessellationDomainOriginEXT(VkCommandBuffer commandBuffer,
                                                                           VkTessellationDomainOrigin domainOrigin) {
    return vkmock::CmdSetTessellationDomainOriginEXT(commandBuffer, domainOrigin);
}

static VKAPI_ATTR void VKAPI_CALL vkmock_CmdSetRasterizationStreamEXT(VkCommandBuffer commandBuffer, uint32_t rasterizationStream) {
    return vkmock::CmdSetRasterizationStreamEXT(commandBuffer, rasterizationStream);
}

static VKAPI_ATTR void VKAPI_CALL vkmock_CmdSetConservativeRasterizationModeEXT(
    VkCommandBuffer commandBuffer, VkConservativeRasterizationModeEXT conservativeRasterizationMode) {
    return vkmock::CmdSetConservativeRasterizationModeEXT(commandBuffer, conservativeRasterizationMode);
}

static VKAPI_ATTR void VKAPI_CALL vkmock_CmdSetExtraPrimitiveOverestimationSizeEXT(VkCommandBuffer commandBuffer,
                                                                                   float extraPrimitiveOverestimationSize) {
    return vkmock::CmdSetExtraPrimitiveOverestimationSizeEXT(commandBuffer, extraPrimitiveOverestimationSize);
}

static VKAPI_ATTR void VKAPI_CALL vkmock_CmdSetDepthClipEnableEXT(VkCommandBuffer commandBuffer, VkBool32 depthClipEnable) {
    return vkmock::CmdSetDepthClipEnableEXT(commandBuffer, depthClipEnable);
}

static VKAPI_ATTR void VKAPI_CALL vkmock_CmdSetSampleLocationsEnableEXT(VkCommandBuffer commandBuffer,
                                                                        VkBool32 sampleLocationsEnable) {
    return vkmock::CmdSetSampleLocationsEnableEXT(commandBuffer, sampleLocationsEnable);
}

static VKAPI_ATTR void VKAPI_CALL vkmock_CmdSetColorBlendAdvancedEXT(VkCommandBuffer commandBuffer, uint32_t firstAttachment,
                                                                     uint32_t attachmentCount,
                                                                     const VkColorBlendAdvancedEXT* pColorBlendAdvanced) {
    return vkmock::CmdSetColorBlendAdvancedEXT(commandBuffer, firstAttachment, attachmentCount, pColorBlendAdvanced);
}

static VKAPI_ATTR void VKAPI_CALL vkmock_CmdSetProvokingVertexModeEXT(VkCommandBuffer commandBuffer,
                                                                      VkProvokingVertexModeEXT provokingVertexMode) {
    return vkmock::CmdSetProvokingVertexModeEXT(commandBuffer, provokingVertexMode);
}

static VKAPI_ATTR void VKAPI_CALL vkmock_CmdSetLineRasterizationModeEXT(VkCommandBuffer commandBuffer,
                                                                        VkLineRasterizationModeEXT lineRasterizationMode) {
    return vkmock::CmdSetLineRasterizationModeEXT(commandBuffer, lineRasterizationMode);
}

static VKAPI_ATTR void VKAPI_CALL vkmock_CmdSetLineStippleEnableEXT(VkCommandBuffer commandBuffer, VkBool32 stippledLineEnable) {
    return vkmock::CmdSetLineStippleEnableEXT(commandBuffer, stippledLineEnable);
}

static VKAPI_ATTR void VKAPI_CALL vkmock_CmdSetDepthClipNegativeOneToOneEXT(VkCommandBuffer commandBuffer,
                                                                            VkBool32 negativeOneToOne) {
    return vkmock::CmdSetDepthClipNegativeOneToOneEXT(commandBuffer, negativeOneToOne);
}

static VKAPI_ATTR void VKAPI_CALL vkmock_CmdSetViewportWScalingEnableNV(VkCommandBuffer commandBuffer,
                                                                        VkBool32 viewportWScalingEnable) {
    return vkmock::CmdSetViewportWScalingEnableNV(commandBuffer, viewportWScalingEnable);
}

static VKAPI_ATTR void VKAPI_CALL vkmock_CmdSetViewportSwizzleNV(VkCommandBuffer commandBuffer, uint32_t firstViewport,
                                                                 uint32_t viewportCount,
                                                                 const VkViewportSwizzleNV* pViewportSwizzles) {
    return vkmock::CmdSetViewportSwizzleNV(commandBuffer, firstViewport, viewportCount, pViewportSwizzles);
}

static VKAPI_ATTR void VKAPI_CALL vkmock_CmdSetCoverageToColorEnableNV(VkCommandBuffer commandBuffer,
                                                                       VkBool32 coverageToColorEnable) {
    return vkmock::CmdSetCoverageToColorEnableNV(commandBuffer, coverageToColorEnable);
}

static VKAPI_ATTR void VKAPI_CALL vkmock_CmdSetCoverageToColorLocationNV(VkCommandBuffer commandBuffer,
                                                                         uint32_t coverageToColorLocation) {
    return vkmock::CmdSetCoverageToColorLocationNV(commandBuffer, coverageToColorLocation);
}

static VKAPI_ATTR void VKAPI_CALL vkmock_CmdSetCoverageModulationModeNV(VkCommandBuffer commandBuffer,
                                                                        VkCoverageModulationModeNV coverageModulationMode) {
    return vkmock::CmdSetCoverageModulationModeNV(commandBuffer, coverageModulationMode);
}

static VKAPI_ATTR void VKAPI_CALL vkmock_CmdSetCoverageModulationTableEnableNV(VkCommandBuffer commandBuffer,
                                                                               VkBool32 coverageModulationTableEnable) {
    return vkmock::CmdSetCoverageModulationTableEnableNV(commandBuffer, coverageModulationTableEnable);
}

static VKAPI_ATTR void VKAPI_CALL vkmock_CmdSetCoverageModulationTableNV(VkCommandBuffer commandBuffer,
                                                                         uint32_t coverageModulationTableCount,
                                                                         const float* pCoverageModulationTable) {
    return vkmock::CmdSetCoverageModulationTableNV(commandBuffer, coverageModulationTableCount, pCoverageModulationTable);
}

static VKAPI_ATTR void VKAPI_CALL vkmock_CmdSetShadingRateImageEnableNV(VkCommandBuffer commandBuffer,
                                                                        VkBool32 shadingRateImageEnable) {
    return vkmock::CmdSetShadingRateImageEnableNV(commandBuffer, shadingRateImageEnable);
}

static VKAPI_ATTR void VKAPI_CALL vkmock_CmdSetRepresentativeFragmentTestEnableNV(VkCommandBuffer commandBuffer,
                                                                                  VkBool32 representativeFragmentTestEnable) {
    return vkmock::CmdSetRepresentativeFragmentTestEnableNV(commandBuffer, representativeFragmentTestEnable);
}

static VKAPI_ATTR void VKAPI_CALL vkmock_CmdSetCoverageReductionModeNV(VkCommandBuffer commandBuffer,
                                                                       VkCoverageReductionModeNV coverageReductionMode) {
    return vkmock::CmdSetCoverageReductionModeNV(commandBuffer, coverageReductionMode);
}

static VKAPI_ATTR void VKAPI_CALL vkmock_GetShaderModuleIdentifierEXT(VkDevice device, VkShaderModule shaderModule,
                                                                      VkShaderModuleIdentifierEXT* pIdentifier) {
    return vkmock::GetShaderModuleIdentifierEXT(device, shaderModule, pIdentifier);
}

static VKAPI_ATTR void VKAPI_CALL vkmock_GetShaderModuleCreateInfoIdentifierEXT(VkDevice device,
                                                                                const VkShaderModuleCreateInfo* pCreateInfo,
                                                                                VkShaderModuleIdentifierEXT* pIdentifier) {
    return vkmock::GetShaderModuleCreateInfoIdentifierEXT(device, pCreateInfo, pIdentifier);
}

static VKAPI_ATTR VkResult VKAPI_CALL vkmock_GetPhysicalDeviceOpticalFlowImageFormatsNV(
    VkPhysicalDevice physicalDevice, const VkOpticalFlowImageFormatInfoNV* pOpticalFlowImageFormatInfo, uint32_t* pFormatCount,
    VkOpticalFlowImageFormatPropertiesNV* pImageFormatProperties) {
    return vkmock::GetPhysicalDeviceOpticalFlowImageFormatsNV(physicalDevice, pOpticalFlowImageFormatInfo, pFormatCount,
                                                              pImageFormatProperties);
}

static VKAPI_ATTR VkResult VKAPI_CALL vkmock_CreateOpticalFlowSessionNV(VkDevice device,
                                                                        const VkOpticalFlowSessionCreateInfoNV* pCreateInfo,
                                                                        const VkAllocationCallbacks* pAllocator,
                                                                        VkOpticalFlowSessionNV* pSession) {
    return vkmock::CreateOpticalFlowSessionNV(device, pCreateInfo, pAllocator, pSession);
}

static VKAPI_ATTR void VKAPI_CALL vkmock_DestroyOpticalFlowSessionNV(VkDevice device, VkOpticalFlowSessionNV session,
                                                                     const VkAllocationCallbacks* pAllocator) {
    return vkmock::DestroyOpticalFlowSessionNV(device, session, pAllocator);
}

static VKAPI_ATTR VkResult VKAPI_CALL vkmock_BindOpticalFlowSessionImageNV(VkDevice device, VkOpticalFlowSessionNV session,
                                                                           VkOpticalFlowSessionBindingPointNV bindingPoint,
                                                                           VkImageView view, VkImageLayout layout) {
    return vkmock::BindOpticalFlowSessionImageNV(device, session, bindingPoint, view, layout);
}

static VKAPI_ATTR void VKAPI_CALL vkmock_CmdOpticalFlowExecuteNV(VkCommandBuffer commandBuffer, VkOpticalFlowSessionNV session,
                                                                 const VkOpticalFlowExecuteInfoNV* pExecuteInfo) {
    return vkmock::CmdOpticalFlowExecuteNV(commandBuffer, session, pExecuteInfo);
}

static VKAPI_ATTR void VKAPI_CALL vkmock_AntiLagUpdateAMD(VkDevice device, const VkAntiLagDataAMD* pData) {
    return vkmock::AntiLagUpdateAMD(device, pData);
}

static VKAPI_ATTR VkResult VKAPI_CALL vkmock_CreateShadersEXT(VkDevice device, uint32_t createInfoCount,
                                                              const VkShaderCreateInfoEXT* pCreateInfos,
                                                              const VkAllocationCallbacks* pAllocator, VkShaderEXT* pShaders) {
    return vkmock::CreateShadersEXT(device, createInfoCount, pCreateInfos, pAllocator, pShaders);
}

static VKAPI_ATTR void VKAPI_CALL vkmock_DestroyShaderEXT(VkDevice device, VkShaderEXT shader,
                                                          const VkAllocationCallbacks* pAllocator) {
    return vkmock::DestroyShaderEXT(device, shader, pAllocator);
}

static VKAPI_ATTR VkResult VKAPI_CALL vkmock_GetShaderBinaryDataEXT(VkDevice device, VkShaderEXT shader, size_t* pDataSize,
                                                                    void* pData) {
    return vkmock::GetShaderBinaryDataEXT(device, shader, pDataSize, pData);
}

static VKAPI_ATTR void VKAPI_CALL vkmock_CmdBindShadersEXT(VkCommandBuffer commandBuffer, uint32_t stageCount,
                                                           const VkShaderStageFlagBits* pStages, const VkShaderEXT* pShaders) {
    return vkmock::CmdBindShadersEXT(commandBuffer, stageCount, pStages, pShaders);
}

static VKAPI_ATTR void VKAPI_CALL vkmock_CmdSetDepthClampRangeEXT(VkCommandBuffer commandBuffer, VkDepthClampModeEXT depthClampMode,
                                                                  const VkDepthClampRangeEXT* pDepthClampRange) {
    return vkmock::CmdSetDepthClampRangeEXT(commandBuffer, depthClampMode, pDepthClampRange);
}

static VKAPI_ATTR VkResult VKAPI_CALL vkmock_GetFramebufferTilePropertiesQCOM(VkDevice device, VkFramebuffer framebuffer,
                                                                              uint32_t* pPropertiesCount,
                                                                              VkTilePropertiesQCOM* pProperties) {
    return vkmock::GetFramebufferTilePropertiesQCOM(device, framebuffer, pPropertiesCount, pProperties);
}

static VKAPI_ATTR VkResult VKAPI_CALL vkmock_GetDynamicRenderingTilePropertiesQCOM(VkDevice device,
                                                                                   const VkRenderingInfo* pRenderingInfo,
                                                                                   VkTilePropertiesQCOM* pProperties) {
    return vkmock::GetDynamicRenderingTilePropertiesQCOM(device, pRenderingInfo, pProperties);
}

static VKAPI_ATTR VkResult VKAPI_CALL vkmock_GetPhysicalDeviceCooperativeVectorPropertiesNV(
    VkPhysicalDevice physicalDevice, uint32_t* pPropertyCount, VkCooperativeVectorPropertiesNV* pProperties) {
    return vkmock::GetPhysicalDeviceCooperativeVectorPropertiesNV(physicalDevice, pPropertyCount, pProperties);
}

static VKAPI_ATTR VkResult VKAPI_CALL vkmock_ConvertCooperativeVectorMatrixNV(VkDevice device,
                                                                              const VkConvertCooperativeVectorMatrixInfoNV* pInfo) {
    return vkmock::ConvertCooperativeVectorMatrixNV(device, pInfo);
}

static VKAPI_ATTR void VKAPI_CALL vkmock_CmdConvertCooperativeVectorMatrixNV(VkCommandBuffer commandBuffer, uint32_t infoCount,
                                                                             const VkConvertCooperativeVectorMatrixInfoNV* pInfos) {
    return vkmock::CmdConvertCooperativeVectorMatrixNV(commandBuffer, infoCount, pInfos);
}

static VKAPI_ATTR VkResult VKAPI_CALL vkmock_SetLatencySleepModeNV(VkDevice device, VkSwapchainKHR swapchain,
                                                                   const VkLatencySleepModeInfoNV* pSleepModeInfo) {
    return vkmock::SetLatencySleepModeNV(device, swapchain, pSleepModeInfo);
}

static VKAPI_ATTR VkResult VKAPI_CALL vkmock_LatencySleepNV(VkDevice device, VkSwapchainKHR swapchain,
                                                            const VkLatencySleepInfoNV* pSleepInfo) {
    return vkmock::LatencySleepNV(device, swapchain, pSleepInfo);
}

static VKAPI_ATTR void VKAPI_CALL vkmock_SetLatencyMarkerNV(VkDevice device, VkSwapchainKHR swapchain,
                                                            const VkSetLatencyMarkerInfoNV* pLatencyMarkerInfo) {
    return vkmock::SetLatencyMarkerNV(device, swapchain, pLatencyMarkerInfo);
}

static VKAPI_ATTR void VKAPI_CALL vkmock_GetLatencyTimingsNV(VkDevice device, VkSwapchainKHR swapchain,
                                                             VkGetLatencyMarkerInfoNV* pLatencyMarkerInfo) {
    return vkmock::GetLatencyTimingsNV(device, swapchain, pLatencyMarkerInfo);
}

static VKAPI_ATTR void VKAPI_CALL vkmock_QueueNotifyOutOfBandNV(VkQueue queue, const VkOutOfBandQueueTypeInfoNV* pQueueTypeInfo) {
    return vkmock::QueueNotifyOutOfBandNV(queue, pQueueTypeInfo);
}

static VKAPI_ATTR void VKAPI_CALL vkmock_CmdSetAttachmentFeedbackLoopEnableEXT(VkCommandBuffer commandBuffer,
                                                                               VkImageAspectFlags aspectMask) {
    return vkmock::CmdSetAttachmentFeedbackLoopEnableEXT(commandBuffer, aspectMask);
}

#ifdef VK_USE_PLATFORM_SCREEN_QNX
static VKAPI_ATTR VkResult VKAPI_CALL vkmock_GetScreenBufferPropertiesQNX(VkDevice device, const struct _screen_buffer* buffer,
                                                                          VkScreenBufferPropertiesQNX* pProperties) {
    return vkmock::GetScreenBufferPropertiesQNX(device, buffer, pProperties);
}

#endif  // VK_USE_PLATFORM_SCREEN_QNX
static VKAPI_ATTR void VKAPI_CALL vkmock_GetClusterAccelerationStructureBuildSizesNV(
    VkDevice device, const VkClusterAccelerationStructureInputInfoNV* pInfo, VkAccelerationStructureBuildSizesInfoKHR* pSizeInfo) {
    return vkmock::GetClusterAccelerationStructureBuildSizesNV(device, pInfo, pSizeInfo);
}

static VKAPI_ATTR void VKAPI_CALL vkmock_CmdBuildClusterAccelerationStructureIndirectNV(
    VkCommandBuffer commandBuffer, const VkClusterAccelerationStructureCommandsInfoNV* pCommandInfos) {
    return vkmock::CmdBuildClusterAccelerationStructureIndirectNV(commandBuffer, pCommandInfos);
}

static VKAPI_ATTR void VKAPI_CALL vkmock_GetPartitionedAccelerationStructuresBuildSizesNV(
    VkDevice device, const VkPartitionedAccelerationStructureInstancesInputNV* pInfo,
    VkAccelerationStructureBuildSizesInfoKHR* pSizeInfo) {
    return vkmock::GetPartitionedAccelerationStructuresBuildSizesNV(device, pInfo, pSizeInfo);
}

static VKAPI_ATTR void VKAPI_CALL vkmock_CmdBuildPartitionedAccelerationStructuresNV(
    VkCommandBuffer commandBuffer, const VkBuildPartitionedAccelerationStructureInfoNV* pBuildInfo) {
    return vkmock::CmdBuildPartitionedAccelerationStructuresNV(commandBuffer, pBuildInfo);
}

static VKAPI_ATTR void VKAPI_CALL vkmock_GetGeneratedCommandsMemoryRequirementsEXT(
    VkDevice device, const VkGeneratedCommandsMemoryRequirementsInfoEXT* pInfo, VkMemoryRequirements2* pMemoryRequirements) {
    return vkmock::GetGeneratedCommandsMemoryRequirementsEXT(device, pInfo, pMemoryRequirements);
}

static VKAPI_ATTR void VKAPI_CALL vkmock_CmdPreprocessGeneratedCommandsEXT(VkCommandBuffer commandBuffer,
                                                                           const VkGeneratedCommandsInfoEXT* pGeneratedCommandsInfo,
                                                                           VkCommandBuffer stateCommandBuffer) {
    return vkmock::CmdPreprocessGeneratedCommandsEXT(commandBuffer, pGeneratedCommandsInfo, stateCommandBuffer);
}

static VKAPI_ATTR void VKAPI_CALL vkmock_CmdExecuteGeneratedCommandsEXT(VkCommandBuffer commandBuffer, VkBool32 isPreprocessed,
                                                                        const VkGeneratedCommandsInfoEXT* pGeneratedCommandsInfo) {
    return vkmock::CmdExecuteGeneratedCommandsEXT(commandBuffer, isPreprocessed, pGeneratedCommandsInfo);
}

static VKAPI_ATTR VkResult VKAPI_CALL vkmock_CreateIndirectCommandsLayoutEXT(
    VkDevice device, const VkIndirectCommandsLayoutCreateInfoEXT* pCreateInfo, const VkAllocationCallbacks* pAllocator,
    VkIndirectCommandsLayoutEXT* pIndirectCommandsLayout) {
    return vkmock::CreateIndirectCommandsLayoutEXT(device, pCreateInfo, pAllocator, pIndirectCommandsLayout);
}

static VKAPI_ATTR void VKAPI_CALL vkmock_DestroyIndirectCommandsLayoutEXT(VkDevice device,
                                                                          VkIndirectCommandsLayoutEXT indirectCommandsLayout,
                                                                          const VkAllocationCallbacks* pAllocator) {
    return vkmock::DestroyIndirectCommandsLayoutEXT(device, indirectCommandsLayout, pAllocator);
}

static VKAPI_ATTR VkResult VKAPI_CALL vkmock_CreateIndirectExecutionSetEXT(VkDevice device,
                                                                           const VkIndirectExecutionSetCreateInfoEXT* pCreateInfo,
                                                                           const VkAllocationCallbacks* pAllocator,
                                                                           VkIndirectExecutionSetEXT* pIndirectExecutionSet) {
    return vkmock::CreateIndirectExecutionSetEXT(device, pCreateInfo, pAllocator, pIndirectExecutionSet);
}

static VKAPI_ATTR void VKAPI_CALL vkmock_DestroyIndirectExecutionSetEXT(VkDevice device,
                                                                        VkIndirectExecutionSetEXT indirectExecutionSet,
                                                                        const VkAllocationCallbacks* pAllocator) {
    return vkmock::DestroyIndirectExecutionSetEXT(device, indirectExecutionSet, pAllocator);
}

static VKAPI_ATTR void VKAPI_CALL vkmock_UpdateIndirectExecutionSetPipelineEXT(
    VkDevice device, VkIndirectExecutionSetEXT indirectExecutionSet, uint32_t executionSetWriteCount,
    const VkWriteIndirectExecutionSetPipelineEXT* pExecutionSetWrites) {
    return vkmock::UpdateIndirectExecutionSetPipelineEXT(device, indirectExecutionSet, executionSetWriteCount, pExecutionSetWrites);
}

static VKAPI_ATTR void VKAPI_CALL vkmock_UpdateIndirectExecutionSetShaderEXT(
    VkDevice device, VkIndirectExecutionSetEXT indirectExecutionSet, uint32_t executionSetWriteCount,
    const VkWriteIndirectExecutionSetShaderEXT* pExecutionSetWrites) {
    return vkmock::UpdateIndirectExecutionSetShaderEXT(device, indirectExecutionSet, executionSetWriteCount, pExecutionSetWrites);
}

static VKAPI_ATTR VkResult VKAPI_CALL vkmock_GetPhysicalDeviceCooperativeMatrixFlexibleDimensionsPropertiesNV(
    VkPhysicalDevice physicalDevice, uint32_t* pPropertyCount, VkCooperativeMatrixFlexibleDimensionsPropertiesNV* pProperties) {
    return vkmock::GetPhysicalDeviceCooperativeMatrixFlexibleDimensionsPropertiesNV(physicalDevice, pPropertyCount, pProperties);
}

#ifdef VK_USE_PLATFORM_METAL_EXT
static VKAPI_ATTR VkResult VKAPI_CALL vkmock_GetMemoryMetalHandleEXT(VkDevice device,
                                                                     const VkMemoryGetMetalHandleInfoEXT* pGetMetalHandleInfo,
                                                                     void** pHandle) {
    return vkmock::GetMemoryMetalHandleEXT(device, pGetMetalHandleInfo, pHandle);
}

static VKAPI_ATTR VkResult VKAPI_CALL
vkmock_GetMemoryMetalHandlePropertiesEXT(VkDevice device, VkExternalMemoryHandleTypeFlagBits handleType, const void* pHandle,
                                         VkMemoryMetalHandlePropertiesEXT* pMemoryMetalHandleProperties) {
    return vkmock::GetMemoryMetalHandlePropertiesEXT(device, handleType, pHandle, pMemoryMetalHandleProperties);
}

#endif  // VK_USE_PLATFORM_METAL_EXT
static VKAPI_ATTR VkResult VKAPI_CALL vkmock_CreateAccelerationStructureKHR(VkDevice device,
                                                                            const VkAccelerationStructureCreateInfoKHR* pCreateInfo,
                                                                            const VkAllocationCallbacks* pAllocator,
                                                                            VkAccelerationStructureKHR* pAccelerationStructure) {
    return vkmock::CreateAccelerationStructureKHR(device, pCreateInfo, pAllocator, pAccelerationStructure);
}

static VKAPI_ATTR void VKAPI_CALL vkmock_DestroyAccelerationStructureKHR(VkDevice device,
                                                                         VkAccelerationStructureKHR accelerationStructure,
                                                                         const VkAllocationCallbacks* pAllocator) {
    return vkmock::DestroyAccelerationStructureKHR(device, accelerationStructure, pAllocator);
}

static VKAPI_ATTR void VKAPI_CALL vkmock_CmdBuildAccelerationStructuresKHR(
    VkCommandBuffer commandBuffer, uint32_t infoCount, const VkAccelerationStructureBuildGeometryInfoKHR* pInfos,
    const VkAccelerationStructureBuildRangeInfoKHR* const* ppBuildRangeInfos) {
    return vkmock::CmdBuildAccelerationStructuresKHR(commandBuffer, infoCount, pInfos, ppBuildRangeInfos);
}

static VKAPI_ATTR void VKAPI_CALL vkmock_CmdBuildAccelerationStructuresIndirectKHR(
    VkCommandBuffer commandBuffer, uint32_t infoCount, const VkAccelerationStructureBuildGeometryInfoKHR* pInfos,
    const VkDeviceAddress* pIndirectDeviceAddresses, const uint32_t* pIndirectStrides,
    const uint32_t* const* ppMaxPrimitiveCounts) {
    return vkmock::CmdBuildAccelerationStructuresIndirectKHR(commandBuffer, infoCount, pInfos, pIndirectDeviceAddresses,
                                                             pIndirectStrides, ppMaxPrimitiveCounts);
}

static VKAPI_ATTR VkResult VKAPI_CALL
vkmock_BuildAccelerationStructuresKHR(VkDevice device, VkDeferredOperationKHR deferredOperation, uint32_t infoCount,
                                      const VkAccelerationStructureBuildGeometryInfoKHR* pInfos,
                                      const VkAccelerationStructureBuildRangeInfoKHR* const* ppBuildRangeInfos) {
    return vkmock::BuildAccelerationStructuresKHR(device, deferredOperation, infoCount, pInfos, ppBuildRangeInfos);
}

static VKAPI_ATTR VkResult VKAPI_CALL vkmock_CopyAccelerationStructureKHR(VkDevice device, VkDeferredOperationKHR deferredOperation,
                                                                          const VkCopyAccelerationStructureInfoKHR* pInfo) {
    return vkmock::CopyAccelerationStructureKHR(device, deferredOperation, pInfo);
}

static VKAPI_ATTR VkResult VKAPI_CALL vkmock_CopyAccelerationStructureToMemoryKHR(
    VkDevice device, VkDeferredOperationKHR deferredOperation, const VkCopyAccelerationStructureToMemoryInfoKHR* pInfo) {
    return vkmock::CopyAccelerationStructureToMemoryKHR(device, deferredOperation, pInfo);
}

static VKAPI_ATTR VkResult VKAPI_CALL vkmock_CopyMemoryToAccelerationStructureKHR(
    VkDevice device, VkDeferredOperationKHR deferredOperation, const VkCopyMemoryToAccelerationStructureInfoKHR* pInfo) {
    return vkmock::CopyMemoryToAccelerationStructureKHR(device, deferredOperation, pInfo);
}

static VKAPI_ATTR VkResult VKAPI_CALL vkmock_WriteAccelerationStructuresPropertiesKHR(
    VkDevice device, uint32_t accelerationStructureCount, const VkAccelerationStructureKHR* pAccelerationStructures,
    VkQueryType queryType, size_t dataSize, void* pData, size_t stride) {
    return vkmock::WriteAccelerationStructuresPropertiesKHR(device, accelerationStructureCount, pAccelerationStructures, queryType,
                                                            dataSize, pData, stride);
}

static VKAPI_ATTR void VKAPI_CALL vkmock_CmdCopyAccelerationStructureKHR(VkCommandBuffer commandBuffer,
                                                                         const VkCopyAccelerationStructureInfoKHR* pInfo) {
    return vkmock::CmdCopyAccelerationStructureKHR(commandBuffer, pInfo);
}

static VKAPI_ATTR void VKAPI_CALL vkmock_CmdCopyAccelerationStructureToMemoryKHR(
    VkCommandBuffer commandBuffer, const VkCopyAccelerationStructureToMemoryInfoKHR* pInfo) {
    return vkmock::CmdCopyAccelerationStructureToMemoryKHR(commandBuffer, pInfo);
}

static VKAPI_ATTR void VKAPI_CALL vkmock_CmdCopyMemoryToAccelerationStructureKHR(
    VkCommandBuffer commandBuffer, const VkCopyMemoryToAccelerationStructureInfoKHR* pInfo) {
    return vkmock::CmdCopyMemoryToAccelerationStructureKHR(commandBuffer, pInfo);
}

static VKAPI_ATTR VkDeviceAddress VKAPI_CALL
vkmock_GetAccelerationStructureDeviceAddressKHR(VkDevice device, const VkAccelerationStructureDeviceAddressInfoKHR* pInfo) {
    return vkmock::GetAccelerationStructureDeviceAddressKHR(device, pInfo);
}

static VKAPI_ATTR void VKAPI_CALL vkmock_CmdWriteAccelerationStructuresPropertiesKHR(
    VkCommandBuffer commandBuffer, uint32_t accelerationStructureCount, const VkAccelerationStructureKHR* pAccelerationStructures,
    VkQueryType queryType, VkQueryPool queryPool, uint32_t firstQuery) {
    return vkmock::CmdWriteAccelerationStructuresPropertiesKHR(commandBuffer, accelerationStructureCount, pAccelerationStructures,
                                                               queryType, queryPool, firstQuery);
}

static VKAPI_ATTR void VKAPI_CALL
vkmock_GetDeviceAccelerationStructureCompatibilityKHR(VkDevice device, const VkAccelerationStructureVersionInfoKHR* pVersionInfo,
                                                      VkAccelerationStructureCompatibilityKHR* pCompatibility) {
    return vkmock::GetDeviceAccelerationStructureCompatibilityKHR(device, pVersionInfo, pCompatibility);
}

static VKAPI_ATTR void VKAPI_CALL vkmock_GetAccelerationStructureBuildSizesKHR(
    VkDevice device, VkAccelerationStructureBuildTypeKHR buildType, const VkAccelerationStructureBuildGeometryInfoKHR* pBuildInfo,
    const uint32_t* pMaxPrimitiveCounts, VkAccelerationStructureBuildSizesInfoKHR* pSizeInfo) {
    return vkmock::GetAccelerationStructureBuildSizesKHR(device, buildType, pBuildInfo, pMaxPrimitiveCounts, pSizeInfo);
}

static VKAPI_ATTR void VKAPI_CALL vkmock_CmdTraceRaysKHR(VkCommandBuffer commandBuffer,
                                                         const VkStridedDeviceAddressRegionKHR* pRaygenShaderBindingTable,
                                                         const VkStridedDeviceAddressRegionKHR* pMissShaderBindingTable,
                                                         const VkStridedDeviceAddressRegionKHR* pHitShaderBindingTable,
                                                         const VkStridedDeviceAddressRegionKHR* pCallableShaderBindingTable,
                                                         uint32_t width, uint32_t height, uint32_t depth) {
    return vkmock::CmdTraceRaysKHR(commandBuffer, pRaygenShaderBindingTable, pMissShaderBindingTable, pHitShaderBindingTable,
                                   pCallableShaderBindingTable, width, height, depth);
}

static VKAPI_ATTR VkResult VKAPI_CALL vkmock_CreateRayTracingPipelinesKHR(VkDevice device, VkDeferredOperationKHR deferredOperation,
                                                                          VkPipelineCache pipelineCache, uint32_t createInfoCount,
                                                                          const VkRayTracingPipelineCreateInfoKHR* pCreateInfos,
                                                                          const VkAllocationCallbacks* pAllocator,
                                                                          VkPipeline* pPipelines) {
    return vkmock::CreateRayTracingPipelinesKHR(device, deferredOperation, pipelineCache, createInfoCount, pCreateInfos, pAllocator,
                                                pPipelines);
}

static VKAPI_ATTR VkResult VKAPI_CALL vkmock_GetRayTracingCaptureReplayShaderGroupHandlesKHR(VkDevice device, VkPipeline pipeline,
                                                                                             uint32_t firstGroup,
                                                                                             uint32_t groupCount, size_t dataSize,
                                                                                             void* pData) {
    return vkmock::GetRayTracingCaptureReplayShaderGroupHandlesKHR(device, pipeline, firstGroup, groupCount, dataSize, pData);
}

static VKAPI_ATTR void VKAPI_CALL vkmock_CmdTraceRaysIndirectKHR(VkCommandBuffer commandBuffer,
                                                                 const VkStridedDeviceAddressRegionKHR* pRaygenShaderBindingTable,
                                                                 const VkStridedDeviceAddressRegionKHR* pMissShaderBindingTable,
                                                                 const VkStridedDeviceAddressRegionKHR* pHitShaderBindingTable,
                                                                 const VkStridedDeviceAddressRegionKHR* pCallableShaderBindingTable,
                                                                 VkDeviceAddress indirectDeviceAddress) {
    return vkmock::CmdTraceRaysIndirectKHR(commandBuffer, pRaygenShaderBindingTable, pMissShaderBindingTable,
                                           pHitShaderBindingTable, pCallableShaderBindingTable, indirectDeviceAddress);
}

static VKAPI_ATTR VkDeviceSize VKAPI_CALL vkmock_GetRayTracingShaderGroupStackSizeKHR(VkDevice device, VkPipeline pipeline,
                                                                                      uint32_t group,
                                                                                      VkShaderGroupShaderKHR groupShader) {
    return vkmock::GetRayTracingShaderGroupStackSizeKHR(device, pipeline, group, groupShader);
}

static VKAPI_ATTR void VKAPI_CALL vkmock_CmdSetRayTracingPipelineStackSizeKHR(VkCommandBuffer commandBuffer,
                                                                              uint32_t pipelineStackSize) {
    return vkmock::CmdSetRayTracingPipelineStackSizeKHR(commandBuffer, pipelineStackSize);
}

static VKAPI_ATTR void VKAPI_CALL vkmock_CmdDrawMeshTasksEXT(VkCommandBuffer commandBuffer, uint32_t groupCountX,
                                                             uint32_t groupCountY, uint32_t groupCountZ) {
    return vkmock::CmdDrawMeshTasksEXT(commandBuffer, groupCountX, groupCountY, groupCountZ);
}

static VKAPI_ATTR void VKAPI_CALL vkmock_CmdDrawMeshTasksIndirectEXT(VkCommandBuffer commandBuffer, VkBuffer buffer,
                                                                     VkDeviceSize offset, uint32_t drawCount, uint32_t stride) {
    return vkmock::CmdDrawMeshTasksIndirectEXT(commandBuffer, buffer, offset, drawCount, stride);
}

static VKAPI_ATTR void VKAPI_CALL vkmock_CmdDrawMeshTasksIndirectCountEXT(VkCommandBuffer commandBuffer, VkBuffer buffer,
                                                                          VkDeviceSize offset, VkBuffer countBuffer,
                                                                          VkDeviceSize countBufferOffset, uint32_t maxDrawCount,
                                                                          uint32_t stride) {
    return vkmock::CmdDrawMeshTasksIndirectCountEXT(commandBuffer, buffer, offset, countBuffer, countBufferOffset, maxDrawCount,
                                                    stride);
}

PFN_vkVoidFunction vkmock::GetProcAddr(const char* pName) {
    if (strcmp(pName, "vkCreateInstance") == 0) {
        return (PFN_vkVoidFunction)vkmock_CreateInstance;
    }
    if (strcmp(pName, "vkDestroyInstance") == 0) {
        return (PFN_vkVoidFunction)vkmock_DestroyInstance;
    }
    if (strcmp(pName, "vkEnumeratePhysicalDevices") == 0) {
        return (PFN_vkVoidFunction)vkmock_EnumeratePhysicalDevices;
    }
    if (strcmp(pName, "vkGetPhysicalDeviceFeatures") == 0) {
        return (PFN_vkVoidFunction)vkmock_GetPhysicalDeviceFeatures;
    }
    if (strcmp(pName, "vkGetPhysicalDeviceFormatProperties") == 0) {
        return (PFN_vkVoidFunction)vkmock_GetPhysicalDeviceFormatProperties;
    }
    if (strcmp(pName, "vkGetPhysicalDeviceImageFormatProperties") == 0) {
        return (PFN_vkVoidFunction)vkmock_GetPhysicalDeviceImageFormatProperties;
    }
    if (strcmp(pName, "vkGetPhysicalDeviceProperties") == 0) {
        return (PFN_vkVoidFunction)vkmock_GetPhysicalDeviceProperties;
    }
    if (strcmp(pName, "vkGetPhysicalDeviceQueueFamilyProperties") == 0) {
        return (PFN_vkVoidFunction)vkmock_GetPhysicalDeviceQueueFamilyProperties;
    }
    if (strcmp(pName, "vkGetPhysicalDeviceMemoryProperties") == 0) {
        return (PFN_vkVoidFunction)vkmock_GetPhysicalDeviceMemoryProperties;
    }
    if (strcmp(pName, "vkGetInstanceProcAddr") == 0) {
        return (PFN_vkVoidFunction)vkmock_GetInstanceProcAddr;
    }
    if (strcmp(pName, "vkGetDeviceProcAddr") == 0) {
        return (PFN_vkVoidFunction)vkmock_GetDeviceProcAddr;
    }
    if (strcmp(pName, "vkCreateDevice") == 0) {
        return (PFN_vkVoidFunction)vkmock_CreateDevice;
    }
    if (strcmp(pName, "vkDestroyDevice") == 0) {
        return (PFN_vkVoidFunction)vkmock_DestroyDevice;
    }
    if (strcmp(pName, "vkEnumerateInstanceExtensionProperties") == 0) {
        return (PFN_vkVoidFunction)vkmock_EnumerateInstanceExtensionProperties;
    }
    if (strcmp(pName, "vkEnumerateDeviceExtensionProperties") == 0) {
        return (PFN_vkVoidFunction)vkmock_EnumerateDeviceExtensionProperties;
    }
    if (strcmp(pName, "vkEnumerateInstanceLayerProperties") == 0) {
        return (PFN_vkVoidFunction)vkmock_EnumerateInstanceLayerProperties;
    }
    if (strcmp(pName, "vkEnumerateDeviceLayerProperties") == 0) {
        return (PFN_vkVoidFunction)vkmock_EnumerateDeviceLayerProperties;
    }
    if (strcmp(pName, "vkGetDeviceQueue") == 0) {
        return (PFN_vkVoidFunction)vkmock_GetDeviceQueue;
    }
    if (strcmp(pName, "vkQueueSubmit") == 0) {
        return (PFN_vkVoidFunction)vkmock_QueueSubmit;
    }
    if (strcmp(pName, "vkQueueWaitIdle") == 0) {
        return (PFN_vkVoidFunction)vkmock_QueueWaitIdle;
    }
    if (strcmp(pName, "vkDeviceWaitIdle") == 0) {
        return (PFN_vkVoidFunction)vkmock_DeviceWaitIdle;
    }
    if (strcmp(pName, "vkAllocateMemory") == 0) {
        return (PFN_vkVoidFunction)vkmock_AllocateMemory;
    }
    if (strcmp(pName, "vkFreeMemory") == 0) {
        return (PFN_vkVoidFunction)vkmock_FreeMemory;
    }
    if (strcmp(pName, "vkMapMemory") == 0) {
        return (PFN_vkVoidFunction)vkmock_MapMemory;
    }
    if (strcmp(pName, "vkUnmapMemory") == 0) {
        return (PFN_vkVoidFunction)vkmock_UnmapMemory;
    }
    if (strcmp(pName, "vkFlushMappedMemoryRanges") == 0) {
        return (PFN_vkVoidFunction)vkmock_FlushMappedMemoryRanges;
    }
    if (strcmp(pName, "vkInvalidateMappedMemoryRanges") == 0) {
        return (PFN_vkVoidFunction)vkmock_InvalidateMappedMemoryRanges;
    }
    if (strcmp(pName, "vkGetDeviceMemoryCommitment") == 0) {
        return (PFN_vkVoidFunction)vkmock_GetDeviceMemoryCommitment;
    }
    if (strcmp(pName, "vkBindBufferMemory") == 0) {
        return (PFN_vkVoidFunction)vkmock_BindBufferMemory;
    }
    if (strcmp(pName, "vkBindImageMemory") == 0) {
        return (PFN_vkVoidFunction)vkmock_BindImageMemory;
    }
    if (strcmp(pName, "vkGetBufferMemoryRequirements") == 0) {
        return (PFN_vkVoidFunction)vkmock_GetBufferMemoryRequirements;
    }
    if (strcmp(pName, "vkGetImageMemoryRequirements") == 0) {
        return (PFN_vkVoidFunction)vkmock_GetImageMemoryRequirements;
    }
    if (strcmp(pName, "vkGetImageSparseMemoryRequirements") == 0) {
        return (PFN_vkVoidFunction)vkmock_GetImageSparseMemoryRequirements;
    }
    if (strcmp(pName, "vkGetPhysicalDeviceSparseImageFormatProperties") == 0) {
        return (PFN_vkVoidFunction)vkmock_GetPhysicalDeviceSparseImageFormatProperties;
    }
    if (strcmp(pName, "vkQueueBindSparse") == 0) {
        return (PFN_vkVoidFunction)vkmock_QueueBindSparse;
    }
    if (strcmp(pName, "vkCreateFence") == 0) {
        return (PFN_vkVoidFunction)vkmock_CreateFence;
    }
    if (strcmp(pName, "vkDestroyFence") == 0) {
        return (PFN_vkVoidFunction)vkmock_DestroyFence;
    }
    if (strcmp(pName, "vkResetFences") == 0) {
        return (PFN_vkVoidFunction)vkmock_ResetFences;
    }
    if (strcmp(pName, "vkGetFenceStatus") == 0) {
        return (PFN_vkVoidFunction)vkmock_GetFenceStatus;
    }
    if (strcmp(pName, "vkWaitForFences") == 0) {
        return (PFN_vkVoidFunction)vkmock_WaitForFences;
    }
    if (strcmp(pName, "vkCreateSemaphore") == 0) {
        return (PFN_vkVoidFunction)vkmock_CreateSemaphore;
    }
    if (strcmp(pName, "vkDestroySemaphore") == 0) {
        return (PFN_vkVoidFunction)vkmock_DestroySemaphore;
    }
    if (strcmp(pName, "vkCreateEvent") == 0) {
        return (PFN_vkVoidFunction)vkmock_CreateEvent;
    }
    if (strcmp(pName, "vkDestroyEvent") == 0) {
        return (PFN_vkVoidFunction)vkmock_DestroyEvent;
    }
    if (strcmp(pName, "vkGetEventStatus") == 0) {
        return (PFN_vkVoidFunction)vkmock_GetEventStatus;
    }
    if (strcmp(pName, "vkSetEvent") == 0) {
        return (PFN_vkVoidFunction)vkmock_SetEvent;
    }
    if (strcmp(pName, "vkResetEvent") == 0) {
        return (PFN_vkVoidFunction)vkmock_ResetEvent;
    }
    if (strcmp(pName, "vkCreateQueryPool") == 0) {
        return (PFN_vkVoidFunction)vkmock_CreateQueryPool;
    }
    if (strcmp(pName, "vkDestroyQueryPool") == 0) {
        return (PFN_vkVoidFunction)vkmock_DestroyQueryPool;
    }
    if (strcmp(pName, "vkGetQueryPoolResults") == 0) {
        return (PFN_vkVoidFunction)vkmock_GetQueryPoolResults;
    }
    if (strcmp(pName, "vkCreateBuffer") == 0) {
        return (PFN_vkVoidFunction)vkmock_CreateBuffer;
    }
    if (strcmp(pName, "vkDestroyBuffer") == 0) {
        return (PFN_vkVoidFunction)vkmock_DestroyBuffer;
    }
    if (strcmp(pName, "vkCreateBufferView") == 0) {
        return (PFN_vkVoidFunction)vkmock_CreateBufferView;
    }
    if (strcmp(pName, "vkDestroyBufferView") == 0) {
        return (PFN_vkVoidFunction)vkmock_DestroyBufferView;
    }
    if (strcmp(pName, "vkCreateImage") == 0) {
        return (PFN_vkVoidFunction)vkmock_CreateImage;
    }
    if (strcmp(pName, "vkDestroyImage") == 0) {
        return (PFN_vkVoidFunction)vkmock_DestroyImage;
    }
    if (strcmp(pName, "vkGetImageSubresourceLayout") == 0) {
        return (PFN_vkVoidFunction)vkmock_GetImageSubresourceLayout;
    }
    if (strcmp(pName, "vkCreateImageView") == 0) {
        return (PFN_vkVoidFunction)vkmock_CreateImageView;
    }
    if (strcmp(pName, "vkDestroyImageView") == 0) {
        return (PFN_vkVoidFunction)vkmock_DestroyImageView;
    }
    if (strcmp(pName, "vkCreateShaderModule") == 0) {
        return (PFN_vkVoidFunction)vkmock_CreateShaderModule;
    }
    if (strcmp(pName, "vkDestroyShaderModule") == 0) {
        return (PFN_vkVoidFunction)vkmock_DestroyShaderModule;
    }
    if (strcmp(pName, "vkCreatePipelineCache") == 0) {
        return (PFN_vkVoidFunction)vkmock_CreatePipelineCache;
    }
    if (strcmp(pName, "vkDestroyPipelineCache") == 0) {
        return (PFN_vkVoidFunction)vkmock_DestroyPipelineCache;
    }
    if (strcmp(pName, "vkGetPipelineCacheData") == 0) {
        return (PFN_vkVoidFunction)vkmock_GetPipelineCacheData;
    }
    if (strcmp(pName, "vkMergePipelineCaches") == 0) {
        return (PFN_vkVoidFunction)vkmock_MergePipelineCaches;
    }
    if (strcmp(pName, "vkCreateGraphicsPipelines") == 0) {
        return (PFN_vkVoidFunction)vkmock_CreateGraphicsPipelines;
    }
    if (strcmp(pName, "vkCreateComputePipelines") == 0) {
        return (PFN_vkVoidFunction)vkmock_CreateComputePipelines;
    }
    if (strcmp(pName, "vkDestroyPipeline") == 0) {
        return (PFN_vkVoidFunction)vkmock_DestroyPipeline;
    }
    if (strcmp(pName, "vkCreatePipelineLayout") == 0) {
        return (PFN_vkVoidFunction)vkmock_CreatePipelineLayout;
    }
    if (strcmp(pName, "vkDestroyPipelineLayout") == 0) {
        return (PFN_vkVoidFunction)vkmock_DestroyPipelineLayout;
    }
    if (strcmp(pName, "vkCreateSampler") == 0) {
        return (PFN_vkVoidFunction)vkmock_CreateSampler;
    }
    if (strcmp(pName, "vkDestroySampler") == 0) {
        return (PFN_vkVoidFunction)vkmock_DestroySampler;
    }
    if (strcmp(pName, "vkCreateDescriptorSetLayout") == 0) {
        return (PFN_vkVoidFunction)vkmock_CreateDescriptorSetLayout;
    }
    if (strcmp(pName, "vkDestroyDescriptorSetLayout") == 0) {
        return (PFN_vkVoidFunction)vkmock_DestroyDescriptorSetLayout;
    }
    if (strcmp(pName, "vkCreateDescriptorPool") == 0) {
        return (PFN_vkVoidFunction)vkmock_CreateDescriptorPool;
    }
    if (strcmp(pName, "vkDestroyDescriptorPool") == 0) {
        return (PFN_vkVoidFunction)vkmock_DestroyDescriptorPool;
    }
    if (strcmp(pName, "vkResetDescriptorPool") == 0) {
        return (PFN_vkVoidFunction)vkmock_ResetDescriptorPool;
    }
    if (strcmp(pName, "vkAllocateDescriptorSets") == 0) {
        return (PFN_vkVoidFunction)vkmock_AllocateDescriptorSets;
    }
    if (strcmp(pName, "vkFreeDescriptorSets") == 0) {
        return (PFN_vkVoidFunction)vkmock_FreeDescriptorSets;
    }
    if (strcmp(pName, "vkUpdateDescriptorSets") == 0) {
        return (PFN_vkVoidFunction)vkmock_UpdateDescriptorSets;
    }
    if (strcmp(pName, "vkCreateFramebuffer") == 0) {
        return (PFN_vkVoidFunction)vkmock_CreateFramebuffer;
    }
    if (strcmp(pName, "vkDestroyFramebuffer") == 0) {
        return (PFN_vkVoidFunction)vkmock_DestroyFramebuffer;
    }
    if (strcmp(pName, "vkCreateRenderPass") == 0) {
        return (PFN_vkVoidFunction)vkmock_CreateRenderPass;
    }
    if (strcmp(pName, "vkDestroyRenderPass") == 0) {
        return (PFN_vkVoidFunction)vkmock_DestroyRenderPass;
    }
    if (strcmp(pName, "vkGetRenderAreaGranularity") == 0) {
        return (PFN_vkVoidFunction)vkmock_GetRenderAreaGranularity;
    }
    if (strcmp(pName, "vkCreateCommandPool") == 0) {
        return (PFN_vkVoidFunction)vkmock_CreateCommandPool;
    }
    if (strcmp(pName, "vkDestroyCommandPool") == 0) {
        return (PFN_vkVoidFunction)vkmock_DestroyCommandPool;
    }
    if (strcmp(pName, "vkResetCommandPool") == 0) {
        return (PFN_vkVoidFunction)vkmock_ResetCommandPool;
    }
    if (strcmp(pName, "vkAllocateCommandBuffers") == 0) {
        return (PFN_vkVoidFunction)vkmock_AllocateCommandBuffers;
    }
    if (strcmp(pName, "vkFreeCommandBuffers") == 0) {
        return (PFN_vkVoidFunction)vkmock_FreeCommandBuffers;
    }
    if (strcmp(pName, "vkBeginCommandBuffer") == 0) {
        return (PFN_vkVoidFunction)vkmock_BeginCommandBuffer;
    }
    if (strcmp(pName, "vkEndCommandBuffer") == 0) {
        return (PFN_vkVoidFunction)vkmock_EndCommandBuffer;
    }
    if (strcmp(pName, "vkResetCommandBuffer") == 0) {
        return (PFN_vkVoidFunction)vkmock_ResetCommandBuffer;
    }
    if (strcmp(pName, "vkCmdBindPipeline") == 0) {
        return (PFN_vkVoidFunction)vkmock_CmdBindPipeline;
    }
    if (strcmp(pName, "vkCmdSetViewport") == 0) {
        return (PFN_vkVoidFunction)vkmock_CmdSetViewport;
    }
    if (strcmp(pName, "vkCmdSetScissor") == 0) {
        return (PFN_vkVoidFunction)vkmock_CmdSetScissor;
    }
    if (strcmp(pName, "vkCmdSetLineWidth") == 0) {
        return (PFN_vkVoidFunction)vkmock_CmdSetLineWidth;
    }
    if (strcmp(pName, "vkCmdSetDepthBias") == 0) {
        return (PFN_vkVoidFunction)vkmock_CmdSetDepthBias;
    }
    if (strcmp(pName, "vkCmdSetBlendConstants") == 0) {
        return (PFN_vkVoidFunction)vkmock_CmdSetBlendConstants;
    }
    if (strcmp(pName, "vkCmdSetDepthBounds") == 0) {
        return (PFN_vkVoidFunction)vkmock_CmdSetDepthBounds;
    }
    if (strcmp(pName, "vkCmdSetStencilCompareMask") == 0) {
        return (PFN_vkVoidFunction)vkmock_CmdSetStencilCompareMask;
    }
    if (strcmp(pName, "vkCmdSetStencilWriteMask") == 0) {
        return (PFN_vkVoidFunction)vkmock_CmdSetStencilWriteMask;
    }
    if (strcmp(pName, "vkCmdSetStencilReference") == 0) {
        return (PFN_vkVoidFunction)vkmock_CmdSetStencilReference;
    }
    if (strcmp(pName, "vkCmdBindDescriptorSets") == 0) {
        return (PFN_vkVoidFunction)vkmock_CmdBindDescriptorSets;
    }
    if (strcmp(pName, "vkCmdBindIndexBuffer") == 0) {
        return (PFN_vkVoidFunction)vkmock_CmdBindIndexBuffer;
    }
    if (strcmp(pName, "vkCmdBindVertexBuffers") == 0) {
        return (PFN_vkVoidFunction)vkmock_CmdBindVertexBuffers;
    }
    if (strcmp(pName, "vkCmdDraw") == 0) {
        return (PFN_vkVoidFunction)vkmock_CmdDraw;
    }
    if (strcmp(pName, "vkCmdDrawIndexed") == 0) {
        return (PFN_vkVoidFunction)vkmock_CmdDrawIndexed;
    }
    if (strcmp(pName, "vkCmdDrawIndirect") == 0) {
        return (PFN_vkVoidFunction)vkmock_CmdDrawIndirect;
    }
    if (strcmp(pName, "vkCmdDrawIndexedIndirect") == 0) {
        return (PFN_vkVoidFunction)vkmock_CmdDrawIndexedIndirect;
    }
    if (strcmp(pName, "vkCmdDispatch") == 0) {
        return (PFN_vkVoidFunction)vkmock_CmdDispatch;
    }
    if (strcmp(pName, "vkCmdDispatchIndirect") == 0) {
        return (PFN_vkVoidFunction)vkmock_CmdDispatchIndirect;
    }
    if (strcmp(pName, "vkCmdCopyBuffer") == 0) {
        return (PFN_vkVoidFunction)vkmock_CmdCopyBuffer;
    }
    if (strcmp(pName, "vkCmdCopyImage") == 0) {
        return (PFN_vkVoidFunction)vkmock_CmdCopyImage;
    }
    if (strcmp(pName, "vkCmdBlitImage") == 0) {
        return (PFN_vkVoidFunction)vkmock_CmdBlitImage;
    }
    if (strcmp(pName, "vkCmdCopyBufferToImage") == 0) {
        return (PFN_vkVoidFunction)vkmock_CmdCopyBufferToImage;
    }
    if (strcmp(pName, "vkCmdCopyImageToBuffer") == 0) {
        return (PFN_vkVoidFunction)vkmock_CmdCopyImageToBuffer;
    }
    if (strcmp(pName, "vkCmdUpdateBuffer") == 0) {
        return (PFN_vkVoidFunction)vkmock_CmdUpdateBuffer;
    }
    if (strcmp(pName, "vkCmdFillBuffer") == 0) {
        return (PFN_vkVoidFunction)vkmock_CmdFillBuffer;
    }
    if (strcmp(pName, "vkCmdClearColorImage") == 0) {
        return (PFN_vkVoidFunction)vkmock_CmdClearColorImage;
    }
    if (strcmp(pName, "vkCmdClearDepthStencilImage") == 0) {
        return (PFN_vkVoidFunction)vkmock_CmdClearDepthStencilImage;
    }
    if (strcmp(pName, "vkCmdClearAttachments") == 0) {
        return (PFN_vkVoidFunction)vkmock_CmdClearAttachments;
    }
    if (strcmp(pName, "vkCmdResolveImage") == 0) {
        return (PFN_vkVoidFunction)vkmock_CmdResolveImage;
    }
    if (strcmp(pName, "vkCmdSetEvent") == 0) {
        return (PFN_vkVoidFunction)vkmock_CmdSetEvent;
    }
    if (strcmp(pName, "vkCmdResetEvent") == 0) {
        return (PFN_vkVoidFunction)vkmock_CmdResetEvent;
    }
    if (strcmp(pName, "vkCmdWaitEvents") == 0) {
        return (PFN_vkVoidFunction)vkmock_CmdWaitEvents;
    }
    if (strcmp(pName, "vkCmdPipelineBarrier") == 0) {
        return (PFN_vkVoidFunction)vkmock_CmdPipelineBarrier;
    }
    if (strcmp(pName, "vkCmdBeginQuery") == 0) {
        return (PFN_vkVoidFunction)vkmock_CmdBeginQuery;
    }
    if (strcmp(pName, "vkCmdEndQuery") == 0) {
        return (PFN_vkVoidFunction)vkmock_CmdEndQuery;
    }
    if (strcmp(pName, "vkCmdResetQueryPool") == 0) {
        return (PFN_vkVoidFunction)vkmock_CmdResetQueryPool;
    }
    if (strcmp(pName, "vkCmdWriteTimestamp") == 0) {
        return (PFN_vkVoidFunction)vkmock_CmdWriteTimestamp;
    }
    if (strcmp(pName, "vkCmdCopyQueryPoolResults") == 0) {
        return (PFN_vkVoidFunction)vkmock_CmdCopyQueryPoolResults;
    }
    if (strcmp(pName, "vkCmdPushConstants") == 0) {
        return (PFN_vkVoidFunction)vkmock_CmdPushConstants;
    }
    if (strcmp(pName, "vkCmdBeginRenderPass") == 0) {
        return (PFN_vkVoidFunction)vkmock_CmdBeginRenderPass;
    }
    if (strcmp(pName, "vkCmdNextSubpass") == 0) {
        return (PFN_vkVoidFunction)vkmock_CmdNextSubpass;
    }
    if (strcmp(pName, "vkCmdEndRenderPass") == 0) {
        return (PFN_vkVoidFunction)vkmock_CmdEndRenderPass;
    }
    if (strcmp(pName, "vkCmdExecuteCommands") == 0) {
        return (PFN_vkVoidFunction)vkmock_CmdExecuteCommands;
    }
    if (strcmp(pName, "vkEnumerateInstanceVersion") == 0) {
        return (PFN_vkVoidFunction)vkmock_EnumerateInstanceVersion;
    }
    if (strcmp(pName, "vkBindBufferMemory2") == 0) {
        return (PFN_vkVoidFunction)vkmock_BindBufferMemory2;
    }
    if (strcmp(pName, "vkBindImageMemory2") == 0) {
        return (PFN_vkVoidFunction)vkmock_BindImageMemory2;
    }
    if (strcmp(pName, "vkGetDeviceGroupPeerMemoryFeatures") == 0) {
        return (PFN_vkVoidFunction)vkmock_GetDeviceGroupPeerMemoryFeatures;
    }
    if (strcmp(pName, "vkCmdSetDeviceMask") == 0) {
        return (PFN_vkVoidFunction)vkmock_CmdSetDeviceMask;
    }
    if (strcmp(pName, "vkCmdDispatchBase") == 0) {
        return (PFN_vkVoidFunction)vkmock_CmdDispatchBase;
    }
    if (strcmp(pName, "vkEnumeratePhysicalDeviceGroups") == 0) {
        return (PFN_vkVoidFunction)vkmock_EnumeratePhysicalDeviceGroups;
    }
    if (strcmp(pName, "vkGetImageMemoryRequirements2") == 0) {
        return (PFN_vkVoidFunction)vkmock_GetImageMemoryRequirements2;
    }
    if (strcmp(pName, "vkGetBufferMemoryRequirements2") == 0) {
        return (PFN_vkVoidFunction)vkmock_GetBufferMemoryRequirements2;
    }
    if (strcmp(pName, "vkGetImageSparseMemoryRequirements2") == 0) {
        return (PFN_vkVoidFunction)vkmock_GetImageSparseMemoryRequirements2;
    }
    if (strcmp(pName, "vkGetPhysicalDeviceFeatures2") == 0) {
        return (PFN_vkVoidFunction)vkmock_GetPhysicalDeviceFeatures2;
    }
    if (strcmp(pName, "vkGetPhysicalDeviceProperties2") == 0) {
        return (PFN_vkVoidFunction)vkmock_GetPhysicalDeviceProperties2;
    }
    if (strcmp(pName, "vkGetPhysicalDeviceFormatProperties2") == 0) {
        return (PFN_vkVoidFunction)vkmock_GetPhysicalDeviceFormatProperties2;
    }
    if (strcmp(pName, "vkGetPhysicalDeviceImageFormatProperties2") == 0) {
        return (PFN_vkVoidFunction)vkmock_GetPhysicalDeviceImageFormatProperties2;
    }
    if (strcmp(pName, "vkGetPhysicalDeviceQueueFamilyProperties2") == 0) {
        return (PFN_vkVoidFunction)vkmock_GetPhysicalDeviceQueueFamilyProperties2;
    }
    if (strcmp(pName, "vkGetPhysicalDeviceMemoryProperties2") == 0) {
        return (PFN_vkVoidFunction)vkmock_GetPhysicalDeviceMemoryProperties2;
    }
    if (strcmp(pName, "vkGetPhysicalDeviceSparseImageFormatProperties2") == 0) {
        return (PFN_vkVoidFunction)vkmock_GetPhysicalDeviceSparseImageFormatProperties2;
    }
    if (strcmp(pName, "vkTrimCommandPool") == 0) {
        return (PFN_vkVoidFunction)vkmock_TrimCommandPool;
    }
    if (strcmp(pName, "vkGetDeviceQueue2") == 0) {
        return (PFN_vkVoidFunction)vkmock_GetDeviceQueue2;
    }
    if (strcmp(pName, "vkCreateSamplerYcbcrConversion") == 0) {
        return (PFN_vkVoidFunction)vkmock_CreateSamplerYcbcrConversion;
    }
    if (strcmp(pName, "vkDestroySamplerYcbcrConversion") == 0) {
        return (PFN_vkVoidFunction)vkmock_DestroySamplerYcbcrConversion;
    }
    if (strcmp(pName, "vkCreateDescriptorUpdateTemplate") == 0) {
        return (PFN_vkVoidFunction)vkmock_CreateDescriptorUpdateTemplate;
    }
    if (strcmp(pName, "vkDestroyDescriptorUpdateTemplate") == 0) {
        return (PFN_vkVoidFunction)vkmock_DestroyDescriptorUpdateTemplate;
    }
    if (strcmp(pName, "vkUpdateDescriptorSetWithTemplate") == 0) {
        return (PFN_vkVoidFunction)vkmock_UpdateDescriptorSetWithTemplate;
    }
    if (strcmp(pName, "vkGetPhysicalDeviceExternalBufferProperties") == 0) {
        return (PFN_vkVoidFunction)vkmock_GetPhysicalDeviceExternalBufferProperties;
    }
    if (strcmp(pName, "vkGetPhysicalDeviceExternalFenceProperties") == 0) {
        return (PFN_vkVoidFunction)vkmock_GetPhysicalDeviceExternalFenceProperties;
    }
    if (strcmp(pName, "vkGetPhysicalDeviceExternalSemaphoreProperties") == 0) {
        return (PFN_vkVoidFunction)vkmock_GetPhysicalDeviceExternalSemaphoreProperties;
    }
    if (strcmp(pName, "vkGetDescriptorSetLayoutSupport") == 0) {
        return (PFN_vkVoidFunction)vkmock_GetDescriptorSetLayoutSupport;
    }
    if (strcmp(pName, "vkCmdDrawIndirectCount") == 0) {
        return (PFN_vkVoidFunction)vkmock_CmdDrawIndirectCount;
    }
    if (strcmp(pName, "vkCmdDrawIndexedIndirectCount") == 0) {
        return (PFN_vkVoidFunction)vkmock_CmdDrawIndexedIndirectCount;
    }
    if (strcmp(pName, "vkCreateRenderPass2") == 0) {
        return (PFN_vkVoidFunction)vkmock_CreateRenderPass2;
    }
    if (strcmp(pName, "vkCmdBeginRenderPass2") == 0) {
        return (PFN_vkVoidFunction)vkmock_CmdBeginRenderPass2;
    }
    if (strcmp(pName, "vkCmdNextSubpass2") == 0) {
        return (PFN_vkVoidFunction)vkmock_CmdNextSubpass2;
    }
    if (strcmp(pName, "vkCmdEndRenderPass2") == 0) {
        return (PFN_vkVoidFunction)vkmock_CmdEndRenderPass2;
    }
    if (strcmp(pName, "vkResetQueryPool") == 0) {
        return (PFN_vkVoidFunction)vkmock_ResetQueryPool;
    }
    if (strcmp(pName, "vkGetSemaphoreCounterValue") == 0) {
        return (PFN_vkVoidFunction)vkmock_GetSemaphoreCounterValue;
    }
    if (strcmp(pName, "vkWaitSemaphores") == 0) {
        return (PFN_vkVoidFunction)vkmock_WaitSemaphores;
    }
    if (strcmp(pName, "vkSignalSemaphore") == 0) {
        return (PFN_vkVoidFunction)vkmock_SignalSemaphore;
    }
    if (strcmp(pName, "vkGetBufferDeviceAddress") == 0) {
        return (PFN_vkVoidFunction)vkmock_GetBufferDeviceAddress;
    }
    if (strcmp(pName, "vkGetBufferOpaqueCaptureAddress") == 0) {
        return (PFN_vkVoidFunction)vkmock_GetBufferOpaqueCaptureAddress;
    }
    if (strcmp(pName, "vkGetDeviceMemoryOpaqueCaptureAddress") == 0) {
        return (PFN_vkVoidFunction)vkmock_GetDeviceMemoryOpaqueCaptureAddress;
    }
    if (strcmp(pName, "vkGetPhysicalDeviceToolProperties") == 0) {
        return (PFN_vkVoidFunction)vkmock_GetPhysicalDeviceToolProperties;
    }
    if (strcmp(pName, "vkCreatePrivateDataSlot") == 0) {
        return (PFN_vkVoidFunction)vkmock_CreatePrivateDataSlot;
    }
    if (strcmp(pName, "vkDestroyPrivateDataSlot") == 0) {
        return (PFN_vkVoidFunction)vkmock_DestroyPrivateDataSlot;
    }
    if (strcmp(pName, "vkSetPrivateData") == 0) {
        return (PFN_vkVoidFunction)vkmock_SetPrivateData;
    }
    if (strcmp(pName, "vkGetPrivateData") == 0) {
        return (PFN_vkVoidFunction)vkmock_GetPrivateData;
    }
    if (strcmp(pName, "vkCmdSetEvent2") == 0) {
        return (PFN_vkVoidFunction)vkmock_CmdSetEvent2;
    }
    if (strcmp(pName, "vkCmdResetEvent2") == 0) {
        return (PFN_vkVoidFunction)vkmock_CmdResetEvent2;
    }
    if (strcmp(pName, "vkCmdWaitEvents2") == 0) {
        return (PFN_vkVoidFunction)vkmock_CmdWaitEvents2;
    }
    if (strcmp(pName, "vkCmdPipelineBarrier2") == 0) {
        return (PFN_vkVoidFunction)vkmock_CmdPipelineBarrier2;
    }
    if (strcmp(pName, "vkCmdWriteTimestamp2") == 0) {
        return (PFN_vkVoidFunction)vkmock_CmdWriteTimestamp2;
    }
    if (strcmp(pName, "vkQueueSubmit2") == 0) {
        return (PFN_vkVoidFunction)vkmock_QueueSubmit2;
    }
    if (strcmp(pName, "vkCmdCopyBuffer2") == 0) {
        return (PFN_vkVoidFunction)vkmock_CmdCopyBuffer2;
    }
    if (strcmp(pName, "vkCmdCopyImage2") == 0) {
        return (PFN_vkVoidFunction)vkmock_CmdCopyImage2;
    }
    if (strcmp(pName, "vkCmdCopyBufferToImage2") == 0) {
        return (PFN_vkVoidFunction)vkmock_CmdCopyBufferToImage2;
    }
    if (strcmp(pName, "vkCmdCopyImageToBuffer2") == 0) {
        return (PFN_vkVoidFunction)vkmock_CmdCopyImageToBuffer2;
    }
    if (strcmp(pName, "vkCmdBlitImage2") == 0) {
        return (PFN_vkVoidFunction)vkmock_CmdBlitImage2;
    }
    if (strcmp(pName, "vkCmdResolveImage2") == 0) {
        return (PFN_vkVoidFunction)vkmock_CmdResolveImage2;
    }
    if (strcmp(pName, "vkCmdBeginRendering") == 0) {
        return (PFN_vkVoidFunction)vkmock_CmdBeginRendering;
    }
    if (strcmp(pName, "vkCmdEndRendering") == 0) {
        return (PFN_vkVoidFunction)vkmock_CmdEndRendering;
    }
    if (strcmp(pName, "vkCmdSetCullMode") == 0) {
        return (PFN_vkVoidFunction)vkmock_CmdSetCullMode;
    }
    if (strcmp(pName, "vkCmdSetFrontFace") == 0) {
        return (PFN_vkVoidFunction)vkmock_CmdSetFrontFace;
    }
    if (strcmp(pName, "vkCmdSetPrimitiveTopology") == 0) {
        return (PFN_vkVoidFunction)vkmock_CmdSetPrimitiveTopology;
    }
    if (strcmp(pName, "vkCmdSetViewportWithCount") == 0) {
        return (PFN_vkVoidFunction)vkmock_CmdSetViewportWithCount;
    }
    if (strcmp(pName, "vkCmdSetScissorWithCount") == 0) {
        return (PFN_vkVoidFunction)vkmock_CmdSetScissorWithCount;
    }
    if (strcmp(pName, "vkCmdBindVertexBuffers2") == 0) {
        return (PFN_vkVoidFunction)vkmock_CmdBindVertexBuffers2;
    }
    if (strcmp(pName, "vkCmdSetDepthTestEnable") == 0) {
        return (PFN_vkVoidFunction)vkmock_CmdSetDepthTestEnable;
    }
    if (strcmp(pName, "vkCmdSetDepthWriteEnable") == 0) {
        return (PFN_vkVoidFunction)vkmock_CmdSetDepthWriteEnable;
    }
    if (strcmp(pName, "vkCmdSetDepthCompareOp") == 0) {
        return (PFN_vkVoidFunction)vkmock_CmdSetDepthCompareOp;
    }
    if (strcmp(pName, "vkCmdSetDepthBoundsTestEnable") == 0) {
        return (PFN_vkVoidFunction)vkmock_CmdSetDepthBoundsTestEnable;
    }
    if (strcmp(pName, "vkCmdSetStencilTestEnable") == 0) {
        return (PFN_vkVoidFunction)vkmock_CmdSetStencilTestEnable;
    }
    if (strcmp(pName, "vkCmdSetStencilOp") == 0) {
        return (PFN_vkVoidFunction)vkmock_CmdSetStencilOp;
    }
    if (strcmp(pName, "vkCmdSetRasterizerDiscardEnable") == 0) {
        return (PFN_vkVoidFunction)vkmock_CmdSetRasterizerDiscardEnable;
    }
    if (strcmp(pName, "vkCmdSetDepthBiasEnable") == 0) {
        return (PFN_vkVoidFunction)vkmock_CmdSetDepthBiasEnable;
    }
    if (strcmp(pName, "vkCmdSetPrimitiveRestartEnable") == 0) {
        return (PFN_vkVoidFunction)vkmock_CmdSetPrimitiveRestartEnable;
    }
    if (strcmp(pName, "vkGetDeviceBufferMemoryRequirements") == 0) {
        return (PFN_vkVoidFunction)vkmock_GetDeviceBufferMemoryRequirements;
    }
    if (strcmp(pName, "vkGetDeviceImageMemoryRequirements") == 0) {
        return (PFN_vkVoidFunction)vkmock_GetDeviceImageMemoryRequirements;
    }
    if (strcmp(pName, "vkGetDeviceImageSparseMemoryRequirements") == 0) {
        return (PFN_vkVoidFunction)vkmock_GetDeviceImageSparseMemoryRequirements;
    }
    if (strcmp(pName, "vkCmdSetLineStipple") == 0) {
        return (PFN_vkVoidFunction)vkmock_CmdSetLineStipple;
    }
    if (strcmp(pName, "vkMapMemory2") == 0) {
        return (PFN_vkVoidFunction)vkmock_MapMemory2;
    }
    if (strcmp(pName, "vkUnmapMemory2") == 0) {
        return (PFN_vkVoidFunction)vkmock_UnmapMemory2;
    }
    if (strcmp(pName, "vkCmdBindIndexBuffer2") == 0) {
        return (PFN_vkVoidFunction)vkmock_CmdBindIndexBuffer2;
    }
    if (strcmp(pName, "vkGetRenderingAreaGranularity") == 0) {
        return (PFN_vkVoidFunction)vkmock_GetRenderingAreaGranularity;
    }
    if (strcmp(pName, "vkGetDeviceImageSubresourceLayout") == 0) {
        return (PFN_vkVoidFunction)vkmock_GetDeviceImageSubresourceLayout;
    }
    if (strcmp(pName, "vkGetImageSubresourceLayout2") == 0) {
        return (PFN_vkVoidFunction)vkmock_GetImageSubresourceLayout2;
    }
    if (strcmp(pName, "vkCmdPushDescriptorSet") == 0) {
        return (PFN_vkVoidFunction)vkmock_CmdPushDescriptorSet;
    }
    if (strcmp(pName, "vkCmdPushDescriptorSetWithTemplate") == 0) {
        return (PFN_vkVoidFunction)vkmock_CmdPushDescriptorSetWithTemplate;
    }
    if (strcmp(pName, "vkCmdSetRenderingAttachmentLocations") == 0) {
        return (PFN_vkVoidFunction)vkmock_CmdSetRenderingAttachmentLocations;
    }
    if (strcmp(pName, "vkCmdSetRenderingInputAttachmentIndices") == 0) {
        return (PFN_vkVoidFunction)vkmock_CmdSetRenderingInputAttachmentIndices;
    }
    if (strcmp(pName, "vkCmdBindDescriptorSets2") == 0) {
        return (PFN_vkVoidFunction)vkmock_CmdBindDescriptorSets2;
    }
    if (strcmp(pName, "vkCmdPushConstants2") == 0) {
        return (PFN_vkVoidFunction)vkmock_CmdPushConstants2;
    }
    if (strcmp(pName, "vkCmdPushDescriptorSet2") == 0) {
        return (PFN_vkVoidFunction)vkmock_CmdPushDescriptorSet2;
    }
    if (strcmp(pName, "vkCmdPushDescriptorSetWithTemplate2") == 0) {
        return (PFN_vkVoidFunction)vkmock_CmdPushDescriptorSetWithTemplate2;
    }
    if (strcmp(pName, "vkCopyMemoryToImage") == 0) {
        return (PFN_vkVoidFunction)vkmock_CopyMemoryToImage;
    }
    if (strcmp(pName, "vkCopyImageToMemory") == 0) {
        return (PFN_vkVoidFunction)vkmock_CopyImageToMemory;
    }
    if (strcmp(pName, "vkCopyImageToImage") == 0) {
        return (PFN_vkVoidFunction)vkmock_CopyImageToImage;
    }
    if (strcmp(pName, "vkTransitionImageLayout") == 0) {
        return (PFN_vkVoidFunction)vkmock_TransitionImageLayout;
    }
    if (strcmp(pName, "vkDestroySurfaceKHR") == 0) {
        return (PFN_vkVoidFunction)vkmock_DestroySurfaceKHR;
    }
    if (strcmp(pName, "vkGetPhysicalDeviceSurfaceSupportKHR") == 0) {
        return (PFN_vkVoidFunction)vkmock_GetPhysicalDeviceSurfaceSupportKHR;
    }
    if (strcmp(pName, "vkGetPhysicalDeviceSurfaceCapabilitiesKHR") == 0) {
        return (PFN_vkVoidFunction)vkmock_GetPhysicalDeviceSurfaceCapabilitiesKHR;
    }
    if (strcmp(pName, "vkGetPhysicalDeviceSurfaceFormatsKHR") == 0) {
        return (PFN_vkVoidFunction)vkmock_GetPhysicalDeviceSurfaceFormatsKHR;
    }
    if (strcmp(pName, "vkGetPhysicalDeviceSurfacePresentModesKHR") == 0) {
        return (PFN_vkVoidFunction)vkmock_GetPhysicalDeviceSurfacePresentModesKHR;
    }
    if (strcmp(pName, "vkCreateSwapchainKHR") == 0) {
        return (PFN_vkVoidFunction)vkmock_CreateSwapchainKHR;
    }
    if (strcmp(pName, "vkDestroySwapchainKHR") == 0) {
        return (PFN_vkVoidFunction)vkmock_DestroySwapchainKHR;
    }
    if (strcmp(pName, "vkGetSwapchainImagesKHR") == 0) {
        return (PFN_vkVoidFunction)vkmock_GetSwapchainImagesKHR;
    }
    if (strcmp(pName, "vkAcquireNextImageKHR") == 0) {
        return (PFN_vkVoidFunction)vkmock_AcquireNextImageKHR;
    }
    if (strcmp(pName, "vkQueuePresentKHR") == 0) {
        return (PFN_vkVoidFunction)vkmock_QueuePresentKHR;
    }
    if (strcmp(pName, "vkGetDeviceGroupPresentCapabilitiesKHR") == 0) {
        return (PFN_vkVoidFunction)vkmock_GetDeviceGroupPresentCapabilitiesKHR;
    }
    if (strcmp(pName, "vkGetDeviceGroupSurfacePresentModesKHR") == 0) {
        return (PFN_vkVoidFunction)vkmock_GetDeviceGroupSurfacePresentModesKHR;
    }
    if (strcmp(pName, "vkGetPhysicalDevicePresentRectanglesKHR") == 0) {
        return (PFN_vkVoidFunction)vkmock_GetPhysicalDevicePresentRectanglesKHR;
    }
    if (strcmp(pName, "vkAcquireNextImage2KHR") == 0) {
        return (PFN_vkVoidFunction)vkmock_AcquireNextImage2KHR;
    }
    if (strcmp(pName, "vkGetPhysicalDeviceDisplayPropertiesKHR") == 0) {
        return (PFN_vkVoidFunction)vkmock_GetPhysicalDeviceDisplayPropertiesKHR;
    }
    if (strcmp(pName, "vkGetPhysicalDeviceDisplayPlanePropertiesKHR") == 0) {
        return (PFN_vkVoidFunction)vkmock_GetPhysicalDeviceDisplayPlanePropertiesKHR;
    }
    if (strcmp(pName, "vkGetDisplayPlaneSupportedDisplaysKHR") == 0) {
        return (PFN_vkVoidFunction)vkmock_GetDisplayPlaneSupportedDisplaysKHR;
    }
    if (strcmp(pName, "vkGetDisplayModePropertiesKHR") == 0) {
        return (PFN_vkVoidFunction)vkmock_GetDisplayModePropertiesKHR;
    }
    if (strcmp(pName, "vkCreateDisplayModeKHR") == 0) {
        return (PFN_vkVoidFunction)vkmock_CreateDisplayModeKHR;
    }
    if (strcmp(pName, "vkGetDisplayPlaneCapabilitiesKHR") == 0) {
        return (PFN_vkVoidFunction)vkmock_GetDisplayPlaneCapabilitiesKHR;
    }
    if (strcmp(pName, "vkCreateDisplayPlaneSurfaceKHR") == 0) {
        return (PFN_vkVoidFunction)vkmock_CreateDisplayPlaneSurfaceKHR;
    }
    if (strcmp(pName, "vkCreateSharedSwapchainsKHR") == 0) {
        return (PFN_vkVoidFunction)vkmock_CreateSharedSwapchainsKHR;
    }
#ifdef VK_USE_PLATFORM_XLIB_KHR
    if (strcmp(pName, "vkCreateXlibSurfaceKHR") == 0) {
        return (PFN_vkVoidFunction)vkmock_CreateXlibSurfaceKHR;
    }
    if (strcmp(pName, "vkGetPhysicalDeviceXlibPresentationSupportKHR") == 0) {
        return (PFN_vkVoidFunction)vkmock_GetPhysicalDeviceXlibPresentationSupportKHR;
    }
#endif  // VK_USE_PLATFORM_XLIB_KHR
#ifdef VK_USE_PLATFORM_XCB_KHR
    if (strcmp(pName, "vkCreateXcbSurfaceKHR") == 0) {
        return (PFN_vkVoidFunction)vkmock_CreateXcbSurfaceKHR;
    }
    if (strcmp(pName, "vkGetPhysicalDeviceXcbPresentationSupportKHR") == 0) {
        return (PFN_vkVoidFunction)vkmock_GetPhysicalDeviceXcbPresentationSupportKHR;
    }
#endif  // VK_USE_PLATFORM_XCB_KHR
#ifdef VK_USE_PLATFORM_WAYLAND_KHR
    if (strcmp(pName, "vkCreateWaylandSurfaceKHR") == 0) {
        return (PFN_vkVoidFunction)vkmock_CreateWaylandSurfaceKHR;
    }
    if (strcmp(pName, "vkGetPhysicalDeviceWaylandPresentationSupportKHR") == 0) {
        return (PFN_vkVoidFunction)vkmock_GetPhysicalDeviceWaylandPresentationSupportKHR;
    }
#endif  // VK_USE_PLATFORM_WAYLAND_KHR
#ifdef VK_USE_PLATFORM_ANDROID_KHR
    if (strcmp(pName, "vkCreateAndroidSurfaceKHR") == 0) {
        return (PFN_vkVoidFunction)vkmock_CreateAndroidSurfaceKHR;
    }
#endif  // VK_USE_PLATFORM_ANDROID_KHR
#ifdef VK_USE_PLATFORM_WIN32_KHR
    if (strcmp(pName, "vkCreateWin32SurfaceKHR") == 0) {
        return (PFN_vkVoidFunction)vkmock_CreateWin32SurfaceKHR;
    }
    if (strcmp(pName, "vkGetPhysicalDeviceWin32PresentationSupportKHR") == 0) {
        return (PFN_vkVoidFunction)vkmock_GetPhysicalDeviceWin32PresentationSupportKHR;
    }
#endif  // VK_USE_PLATFORM_WIN32_KHR
    if (strcmp(pName, "vkGetPhysicalDeviceVideoCapabilitiesKHR") == 0) {
        return (PFN_vkVoidFunction)vkmock_GetPhysicalDeviceVideoCapabilitiesKHR;
    }
    if (strcmp(pName, "vkGetPhysicalDeviceVideoFormatPropertiesKHR") == 0) {
        return (PFN_vkVoidFunction)vkmock_GetPhysicalDeviceVideoFormatPropertiesKHR;
    }
    if (strcmp(pName, "vkCreateVideoSessionKHR") == 0) {
        return (PFN_vkVoidFunction)vkmock_CreateVideoSessionKHR;
    }
    if (strcmp(pName, "vkDestroyVideoSessionKHR") == 0) {
        return (PFN_vkVoidFunction)vkmock_DestroyVideoSessionKHR;
    }
    if (strcmp(pName, "vkGetVideoSessionMemoryRequirementsKHR") == 0) {
        return (PFN_vkVoidFunction)vkmock_GetVideoSessionMemoryRequirementsKHR;
    }
    if (strcmp(pName, "vkBindVideoSessionMemoryKHR") == 0) {
        return (PFN_vkVoidFunction)vkmock_BindVideoSessionMemoryKHR;
    }
    if (strcmp(pName, "vkCreateVideoSessionParametersKHR") == 0) {
        return (PFN_vkVoidFunction)vkmock_CreateVideoSessionParametersKHR;
    }
    if (strcmp(pName, "vkUpdateVideoSessionParametersKHR") == 0) {
        return (PFN_vkVoidFunction)vkmock_UpdateVideoSessionParametersKHR;
    }
    if (strcmp(pName, "vkDestroyVideoSessionParametersKHR") == 0) {
        return (PFN_vkVoidFunction)vkmock_DestroyVideoSessionParametersKHR;
    }
    if (strcmp(pName, "vkCmdBeginVideoCodingKHR") == 0) {
        return (PFN_vkVoidFunction)vkmock_CmdBeginVideoCodingKHR;
    }
    if (strcmp(pName, "vkCmdEndVideoCodingKHR") == 0) {
        return (PFN_vkVoidFunction)vkmock_CmdEndVideoCodingKHR;
    }
    if (strcmp(pName, "vkCmdControlVideoCodingKHR") == 0) {
        return (PFN_vkVoidFunction)vkmock_CmdControlVideoCodingKHR;
    }
    if (strcmp(pName, "vkCmdDecodeVideoKHR") == 0) {
        return (PFN_vkVoidFunction)vkmock_CmdDecodeVideoKHR;
    }
    if (strcmp(pName, "vkCmdBeginRenderingKHR") == 0) {
        return (PFN_vkVoidFunction)vkmock_CmdBeginRenderingKHR;
    }
    if (strcmp(pName, "vkCmdEndRenderingKHR") == 0) {
        return (PFN_vkVoidFunction)vkmock_CmdEndRenderingKHR;
    }
    if (strcmp(pName, "vkGetPhysicalDeviceFeatures2KHR") == 0) {
        return (PFN_vkVoidFunction)vkmock_GetPhysicalDeviceFeatures2KHR;
    }
    if (strcmp(pName, "vkGetPhysicalDeviceProperties2KHR") == 0) {
        return (PFN_vkVoidFunction)vkmock_GetPhysicalDeviceProperties2KHR;
    }
    if (strcmp(pName, "vkGetPhysicalDeviceFormatProperties2KHR") == 0) {
        return (PFN_vkVoidFunction)vkmock_GetPhysicalDeviceFormatProperties2KHR;
    }
    if (strcmp(pName, "vkGetPhysicalDeviceImageFormatProperties2KHR") == 0) {
        return (PFN_vkVoidFunction)vkmock_GetPhysicalDeviceImageFormatProperties2KHR;
    }
    if (strcmp(pName, "vkGetPhysicalDeviceQueueFamilyProperties2KHR") == 0) {
        return (PFN_vkVoidFunction)vkmock_GetPhysicalDeviceQueueFamilyProperties2KHR;
    }
    if (strcmp(pName, "vkGetPhysicalDeviceMemoryProperties2KHR") == 0) {
        return (PFN_vkVoidFunction)vkmock_GetPhysicalDeviceMemoryProperties2KHR;
    }
    if (strcmp(pName, "vkGetPhysicalDeviceSparseImageFormatProperties2KHR") == 0) {
        return (PFN_vkVoidFunction)vkmock_GetPhysicalDeviceSparseImageFormatProperties2KHR;
    }
    if (strcmp(pName, "vkGetDeviceGroupPeerMemoryFeaturesKHR") == 0) {
        return (PFN_vkVoidFunction)vkmock_GetDeviceGroupPeerMemoryFeaturesKHR;
    }
    if (strcmp(pName, "vkCmdSetDeviceMaskKHR") == 0) {
        return (PFN_vkVoidFunction)vkmock_CmdSetDeviceMaskKHR;
    }
    if (strcmp(pName, "vkCmdDispatchBaseKHR") == 0) {
        return (PFN_vkVoidFunction)vkmock_CmdDispatchBaseKHR;
    }
    if (strcmp(pName, "vkTrimCommandPoolKHR") == 0) {
        return (PFN_vkVoidFunction)vkmock_TrimCommandPoolKHR;
    }
    if (strcmp(pName, "vkEnumeratePhysicalDeviceGroupsKHR") == 0) {
        return (PFN_vkVoidFunction)vkmock_EnumeratePhysicalDeviceGroupsKHR;
    }
    if (strcmp(pName, "vkGetPhysicalDeviceExternalBufferPropertiesKHR") == 0) {
        return (PFN_vkVoidFunction)vkmock_GetPhysicalDeviceExternalBufferPropertiesKHR;
    }
#ifdef VK_USE_PLATFORM_WIN32_KHR
    if (strcmp(pName, "vkGetMemoryWin32HandleKHR") == 0) {
        return (PFN_vkVoidFunction)vkmock_GetMemoryWin32HandleKHR;
    }
    if (strcmp(pName, "vkGetMemoryWin32HandlePropertiesKHR") == 0) {
        return (PFN_vkVoidFunction)vkmock_GetMemoryWin32HandlePropertiesKHR;
    }
#endif  // VK_USE_PLATFORM_WIN32_KHR
    if (strcmp(pName, "vkGetMemoryFdKHR") == 0) {
        return (PFN_vkVoidFunction)vkmock_GetMemoryFdKHR;
    }
    if (strcmp(pName, "vkGetMemoryFdPropertiesKHR") == 0) {
        return (PFN_vkVoidFunction)vkmock_GetMemoryFdPropertiesKHR;
    }
    if (strcmp(pName, "vkGetPhysicalDeviceExternalSemaphorePropertiesKHR") == 0) {
        return (PFN_vkVoidFunction)vkmock_GetPhysicalDeviceExternalSemaphorePropertiesKHR;
    }
#ifdef VK_USE_PLATFORM_WIN32_KHR
    if (strcmp(pName, "vkImportSemaphoreWin32HandleKHR") == 0) {
        return (PFN_vkVoidFunction)vkmock_ImportSemaphoreWin32HandleKHR;
    }
    if (strcmp(pName, "vkGetSemaphoreWin32HandleKHR") == 0) {
        return (PFN_vkVoidFunction)vkmock_GetSemaphoreWin32HandleKHR;
    }
#endif  // VK_USE_PLATFORM_WIN32_KHR
    if (strcmp(pName, "vkImportSemaphoreFdKHR") == 0) {
        return (PFN_vkVoidFunction)vkmock_ImportSemaphoreFdKHR;
    }
    if (strcmp(pName, "vkGetSemaphoreFdKHR") == 0) {
        return (PFN_vkVoidFunction)vkmock_GetSemaphoreFdKHR;
    }
    if (strcmp(pName, "vkCmdPushDescriptorSetKHR") == 0) {
        return (PFN_vkVoidFunction)vkmock_CmdPushDescriptorSetKHR;
    }
    if (strcmp(pName, "vkCmdPushDescriptorSetWithTemplateKHR") == 0) {
        return (PFN_vkVoidFunction)vkmock_CmdPushDescriptorSetWithTemplateKHR;
    }
    if (strcmp(pName, "vkCreateDescriptorUpdateTemplateKHR") == 0) {
        return (PFN_vkVoidFunction)vkmock_CreateDescriptorUpdateTemplateKHR;
    }
    if (strcmp(pName, "vkDestroyDescriptorUpdateTemplateKHR") == 0) {
        return (PFN_vkVoidFunction)vkmock_DestroyDescriptorUpdateTemplateKHR;
    }
    if (strcmp(pName, "vkUpdateDescriptorSetWithTemplateKHR") == 0) {
        return (PFN_vkVoidFunction)vkmock_UpdateDescriptorSetWithTemplateKHR;
    }
    if (strcmp(pName, "vkCreateRenderPass2KHR") == 0) {
        return (PFN_vkVoidFunction)vkmock_CreateRenderPass2KHR;
    }
    if (strcmp(pName, "vkCmdBeginRenderPass2KHR") == 0) {
        return (PFN_vkVoidFunction)vkmock_CmdBeginRenderPass2KHR;
    }
    if (strcmp(pName, "vkCmdNextSubpass2KHR") == 0) {
        return (PFN_vkVoidFunction)vkmock_CmdNextSubpass2KHR;
    }
    if (strcmp(pName, "vkCmdEndRenderPass2KHR") == 0) {
        return (PFN_vkVoidFunction)vkmock_CmdEndRenderPass2KHR;
    }
    if (strcmp(pName, "vkGetSwapchainStatusKHR") == 0) {
        return (PFN_vkVoidFunction)vkmock_GetSwapchainStatusKHR;
    }
    if (strcmp(pName, "vkGetPhysicalDeviceExternalFencePropertiesKHR") == 0) {
        return (PFN_vkVoidFunction)vkmock_GetPhysicalDeviceExternalFencePropertiesKHR;
    }
#ifdef VK_USE_PLATFORM_WIN32_KHR
    if (strcmp(pName, "vkImportFenceWin32HandleKHR") == 0) {
        return (PFN_vkVoidFunction)vkmock_ImportFenceWin32HandleKHR;
    }
    if (strcmp(pName, "vkGetFenceWin32HandleKHR") == 0) {
        return (PFN_vkVoidFunction)vkmock_GetFenceWin32HandleKHR;
    }
#endif  // VK_USE_PLATFORM_WIN32_KHR
    if (strcmp(pName, "vkImportFenceFdKHR") == 0) {
        return (PFN_vkVoidFunction)vkmock_ImportFenceFdKHR;
    }
    if (strcmp(pName, "vkGetFenceFdKHR") == 0) {
        return (PFN_vkVoidFunction)vkmock_GetFenceFdKHR;
    }
    if (strcmp(pName, "vkEnumeratePhysicalDeviceQueueFamilyPerformanceQueryCountersKHR") == 0) {
        return (PFN_vkVoidFunction)vkmock_EnumeratePhysicalDeviceQueueFamilyPerformanceQueryCountersKHR;
    }
    if (strcmp(pName, "vkGetPhysicalDeviceQueueFamilyPerformanceQueryPassesKHR") == 0) {
        return (PFN_vkVoidFunction)vkmock_GetPhysicalDeviceQueueFamilyPerformanceQueryPassesKHR;
    }
    if (strcmp(pName, "vkAcquireProfilingLockKHR") == 0) {
        return (PFN_vkVoidFunction)vkmock_AcquireProfilingLockKHR;
    }
    if (strcmp(pName, "vkReleaseProfilingLockKHR") == 0) {
        return (PFN_vkVoidFunction)vkmock_ReleaseProfilingLockKHR;
    }
    if (strcmp(pName, "vkGetPhysicalDeviceSurfaceCapabilities2KHR") == 0) {
        return (PFN_vkVoidFunction)vkmock_GetPhysicalDeviceSurfaceCapabilities2KHR;
    }
    if (strcmp(pName, "vkGetPhysicalDeviceSurfaceFormats2KHR") == 0) {
        return (PFN_vkVoidFunction)vkmock_GetPhysicalDeviceSurfaceFormats2KHR;
    }
    if (strcmp(pName, "vkGetPhysicalDeviceDisplayProperties2KHR") == 0) {
        return (PFN_vkVoidFunction)vkmock_GetPhysicalDeviceDisplayProperties2KHR;
    }
    if (strcmp(pName, "vkGetPhysicalDeviceDisplayPlaneProperties2KHR") == 0) {
        return (PFN_vkVoidFunction)vkmock_GetPhysicalDeviceDisplayPlaneProperties2KHR;
    }
    if (strcmp(pName, "vkGetDisplayModeProperties2KHR") == 0) {
        return (PFN_vkVoidFunction)vkmock_GetDisplayModeProperties2KHR;
    }
    if (strcmp(pName, "vkGetDisplayPlaneCapabilities2KHR") == 0) {
        return (PFN_vkVoidFunction)vkmock_GetDisplayPlaneCapabilities2KHR;
    }
    if (strcmp(pName, "vkGetImageMemoryRequirements2KHR") == 0) {
        return (PFN_vkVoidFunction)vkmock_GetImageMemoryRequirements2KHR;
    }
    if (strcmp(pName, "vkGetBufferMemoryRequirements2KHR") == 0) {
        return (PFN_vkVoidFunction)vkmock_GetBufferMemoryRequirements2KHR;
    }
    if (strcmp(pName, "vkGetImageSparseMemoryRequirements2KHR") == 0) {
        return (PFN_vkVoidFunction)vkmock_GetImageSparseMemoryRequirements2KHR;
    }
    if (strcmp(pName, "vkCreateSamplerYcbcrConversionKHR") == 0) {
        return (PFN_vkVoidFunction)vkmock_CreateSamplerYcbcrConversionKHR;
    }
    if (strcmp(pName, "vkDestroySamplerYcbcrConversionKHR") == 0) {
        return (PFN_vkVoidFunction)vkmock_DestroySamplerYcbcrConversionKHR;
    }
    if (strcmp(pName, "vkBindBufferMemory2KHR") == 0) {
        return (PFN_vkVoidFunction)vkmock_BindBufferMemory2KHR;
    }
    if (strcmp(pName, "vkBindImageMemory2KHR") == 0) {
        return (PFN_vkVoidFunction)vkmock_BindImageMemory2KHR;
    }
    if (strcmp(pName, "vkGetDescriptorSetLayoutSupportKHR") == 0) {
        return (PFN_vkVoidFunction)vkmock_GetDescriptorSetLayoutSupportKHR;
    }
    if (strcmp(pName, "vkCmdDrawIndirectCountKHR") == 0) {
        return (PFN_vkVoidFunction)vkmock_CmdDrawIndirectCountKHR;
    }
    if (strcmp(pName, "vkCmdDrawIndexedIndirectCountKHR") == 0) {
        return (PFN_vkVoidFunction)vkmock_CmdDrawIndexedIndirectCountKHR;
    }
    if (strcmp(pName, "vkGetSemaphoreCounterValueKHR") == 0) {
        return (PFN_vkVoidFunction)vkmock_GetSemaphoreCounterValueKHR;
    }
    if (strcmp(pName, "vkWaitSemaphoresKHR") == 0) {
        return (PFN_vkVoidFunction)vkmock_WaitSemaphoresKHR;
    }
    if (strcmp(pName, "vkSignalSemaphoreKHR") == 0) {
        return (PFN_vkVoidFunction)vkmock_SignalSemaphoreKHR;
    }
    if (strcmp(pName, "vkGetPhysicalDeviceFragmentShadingRatesKHR") == 0) {
        return (PFN_vkVoidFunction)vkmock_GetPhysicalDeviceFragmentShadingRatesKHR;
    }
    if (strcmp(pName, "vkCmdSetFragmentShadingRateKHR") == 0) {
        return (PFN_vkVoidFunction)vkmock_CmdSetFragmentShadingRateKHR;
    }
    if (strcmp(pName, "vkCmdSetRenderingAttachmentLocationsKHR") == 0) {
        return (PFN_vkVoidFunction)vkmock_CmdSetRenderingAttachmentLocationsKHR;
    }
    if (strcmp(pName, "vkCmdSetRenderingInputAttachmentIndicesKHR") == 0) {
        return (PFN_vkVoidFunction)vkmock_CmdSetRenderingInputAttachmentIndicesKHR;
    }
    if (strcmp(pName, "vkWaitForPresentKHR") == 0) {
        return (PFN_vkVoidFunction)vkmock_WaitForPresentKHR;
    }
    if (strcmp(pName, "vkGetBufferDeviceAddressKHR") == 0) {
        return (PFN_vkVoidFunction)vkmock_GetBufferDeviceAddressKHR;
    }
    if (strcmp(pName, "vkGetBufferOpaqueCaptureAddressKHR") == 0) {
        return (PFN_vkVoidFunction)vkmock_GetBufferOpaqueCaptureAddressKHR;
    }
    if (strcmp(pName, "vkGetDeviceMemoryOpaqueCaptureAddressKHR") == 0) {
        return (PFN_vkVoidFunction)vkmock_GetDeviceMemoryOpaqueCaptureAddressKHR;
    }
    if (strcmp(pName, "vkCreateDeferredOperationKHR") == 0) {
        return (PFN_vkVoidFunction)vkmock_CreateDeferredOperationKHR;
    }
    if (strcmp(pName, "vkDestroyDeferredOperationKHR") == 0) {
        return (PFN_vkVoidFunction)vkmock_DestroyDeferredOperationKHR;
    }
    if (strcmp(pName, "vkGetDeferredOperationMaxConcurrencyKHR") == 0) {
        return (PFN_vkVoidFunction)vkmock_GetDeferredOperationMaxConcurrencyKHR;
    }
    if (strcmp(pName, "vkGetDeferredOperationResultKHR") == 0) {
        return (PFN_vkVoidFunction)vkmock_GetDeferredOperationResultKHR;
    }
    if (strcmp(pName, "vkDeferredOperationJoinKHR") == 0) {
        return (PFN_vkVoidFunction)vkmock_DeferredOperationJoinKHR;
    }
    if (strcmp(pName, "vkGetPipelineExecutablePropertiesKHR") == 0) {
        return (PFN_vkVoidFunction)vkmock_GetPipelineExecutablePropertiesKHR;
    }
    if (strcmp(pName, "vkGetPipelineExecutableStatisticsKHR") == 0) {
        return (PFN_vkVoidFunction)vkmock_GetPipelineExecutableStatisticsKHR;
    }
    if (strcmp(pName, "vkGetPipelineExecutableInternalRepresentationsKHR") == 0) {
        return (PFN_vkVoidFunction)vkmock_GetPipelineExecutableInternalRepresentationsKHR;
    }
    if (strcmp(pName, "vkMapMemory2KHR") == 0) {
        return (PFN_vkVoidFunction)vkmock_MapMemory2KHR;
    }
    if (strcmp(pName, "vkUnmapMemory2KHR") == 0) {
        return (PFN_vkVoidFunction)vkmock_UnmapMemory2KHR;
    }
    if (strcmp(pName, "vkGetPhysicalDeviceVideoEncodeQualityLevelPropertiesKHR") == 0) {
        return (PFN_vkVoidFunction)vkmock_GetPhysicalDeviceVideoEncodeQualityLevelPropertiesKHR;
    }
    if (strcmp(pName, "vkGetEncodedVideoSessionParametersKHR") == 0) {
        return (PFN_vkVoidFunction)vkmock_GetEncodedVideoSessionParametersKHR;
    }
    if (strcmp(pName, "vkCmdEncodeVideoKHR") == 0) {
        return (PFN_vkVoidFunction)vkmock_CmdEncodeVideoKHR;
    }
    if (strcmp(pName, "vkCmdSetEvent2KHR") == 0) {
        return (PFN_vkVoidFunction)vkmock_CmdSetEvent2KHR;
    }
    if (strcmp(pName, "vkCmdResetEvent2KHR") == 0) {
        return (PFN_vkVoidFunction)vkmock_CmdResetEvent2KHR;
    }
    if (strcmp(pName, "vkCmdWaitEvents2KHR") == 0) {
        return (PFN_vkVoidFunction)vkmock_CmdWaitEvents2KHR;
    }
    if (strcmp(pName, "vkCmdPipelineBarrier2KHR") == 0) {
        return (PFN_vkVoidFunction)vkmock_CmdPipelineBarrier2KHR;
    }
    if (strcmp(pName, "vkCmdWriteTimestamp2KHR") == 0) {
        return (PFN_vkVoidFunction)vkmock_CmdWriteTimestamp2KHR;
    }
    if (strcmp(pName, "vkQueueSubmit2KHR") == 0) {
        return (PFN_vkVoidFunction)vkmock_QueueSubmit2KHR;
    }
    if (strcmp(pName, "vkCmdCopyBuffer2KHR") == 0) {
        return (PFN_vkVoidFunction)vkmock_CmdCopyBuffer2KHR;
    }
    if (strcmp(pName, "vkCmdCopyImage2KHR") == 0) {
        return (PFN_vkVoidFunction)vkmock_CmdCopyImage2KHR;
    }
    if (strcmp(pName, "vkCmdCopyBufferToImage2KHR") == 0) {
        return (PFN_vkVoidFunction)vkmock_CmdCopyBufferToImage2KHR;
    }
    if (strcmp(pName, "vkCmdCopyImageToBuffer2KHR") == 0) {
        return (PFN_vkVoidFunction)vkmock_CmdCopyImageToBuffer2KHR;
    }
    if (strcmp(pName, "vkCmdBlitImage2KHR") == 0) {
        return (PFN_vkVoidFunction)vkmock_CmdBlitImage2KHR;
    }
    if (strcmp(pName, "vkCmdResolveImage2KHR") == 0) {
        return (PFN_vkVoidFunction)vkmock_CmdResolveImage2KHR;
    }
    if (strcmp(pName, "vkCmdTraceRaysIndirect2KHR") == 0) {
        return (PFN_vkVoidFunction)vkmock_CmdTraceRaysIndirect2KHR;
    }
    if (strcmp(pName, "vkGetDeviceBufferMemoryRequirementsKHR") == 0) {
        return (PFN_vkVoidFunction)vkmock_GetDeviceBufferMemoryRequirementsKHR;
    }
    if (strcmp(pName, "vkGetDeviceImageMemoryRequirementsKHR") == 0) {
        return (PFN_vkVoidFunction)vkmock_GetDeviceImageMemoryRequirementsKHR;
    }
    if (strcmp(pName, "vkGetDeviceImageSparseMemoryRequirementsKHR") == 0) {
        return (PFN_vkVoidFunction)vkmock_GetDeviceImageSparseMemoryRequirementsKHR;
    }
    if (strcmp(pName, "vkCmdBindIndexBuffer2KHR") == 0) {
        return (PFN_vkVoidFunction)vkmock_CmdBindIndexBuffer2KHR;
    }
    if (strcmp(pName, "vkGetRenderingAreaGranularityKHR") == 0) {
        return (PFN_vkVoidFunction)vkmock_GetRenderingAreaGranularityKHR;
    }
    if (strcmp(pName, "vkGetDeviceImageSubresourceLayoutKHR") == 0) {
        return (PFN_vkVoidFunction)vkmock_GetDeviceImageSubresourceLayoutKHR;
    }
    if (strcmp(pName, "vkGetImageSubresourceLayout2KHR") == 0) {
        return (PFN_vkVoidFunction)vkmock_GetImageSubresourceLayout2KHR;
    }
    if (strcmp(pName, "vkCreatePipelineBinariesKHR") == 0) {
        return (PFN_vkVoidFunction)vkmock_CreatePipelineBinariesKHR;
    }
    if (strcmp(pName, "vkDestroyPipelineBinaryKHR") == 0) {
        return (PFN_vkVoidFunction)vkmock_DestroyPipelineBinaryKHR;
    }
    if (strcmp(pName, "vkGetPipelineKeyKHR") == 0) {
        return (PFN_vkVoidFunction)vkmock_GetPipelineKeyKHR;
    }
    if (strcmp(pName, "vkGetPipelineBinaryDataKHR") == 0) {
        return (PFN_vkVoidFunction)vkmock_GetPipelineBinaryDataKHR;
    }
    if (strcmp(pName, "vkReleaseCapturedPipelineDataKHR") == 0) {
        return (PFN_vkVoidFunction)vkmock_ReleaseCapturedPipelineDataKHR;
    }
    if (strcmp(pName, "vkGetPhysicalDeviceCooperativeMatrixPropertiesKHR") == 0) {
        return (PFN_vkVoidFunction)vkmock_GetPhysicalDeviceCooperativeMatrixPropertiesKHR;
    }
    if (strcmp(pName, "vkCmdSetLineStippleKHR") == 0) {
        return (PFN_vkVoidFunction)vkmock_CmdSetLineStippleKHR;
    }
    if (strcmp(pName, "vkGetPhysicalDeviceCalibrateableTimeDomainsKHR") == 0) {
        return (PFN_vkVoidFunction)vkmock_GetPhysicalDeviceCalibrateableTimeDomainsKHR;
    }
    if (strcmp(pName, "vkGetCalibratedTimestampsKHR") == 0) {
        return (PFN_vkVoidFunction)vkmock_GetCalibratedTimestampsKHR;
    }
    if (strcmp(pName, "vkCmdBindDescriptorSets2KHR") == 0) {
        return (PFN_vkVoidFunction)vkmock_CmdBindDescriptorSets2KHR;
    }
    if (strcmp(pName, "vkCmdPushConstants2KHR") == 0) {
        return (PFN_vkVoidFunction)vkmock_CmdPushConstants2KHR;
    }
    if (strcmp(pName, "vkCmdPushDescriptorSet2KHR") == 0) {
        return (PFN_vkVoidFunction)vkmock_CmdPushDescriptorSet2KHR;
    }
    if (strcmp(pName, "vkCmdPushDescriptorSetWithTemplate2KHR") == 0) {
        return (PFN_vkVoidFunction)vkmock_CmdPushDescriptorSetWithTemplate2KHR;
    }
    if (strcmp(pName, "vkCmdSetDescriptorBufferOffsets2EXT") == 0) {
        return (PFN_vkVoidFunction)vkmock_CmdSetDescriptorBufferOffsets2EXT;
    }
    if (strcmp(pName, "vkCmdBindDescriptorBufferEmbeddedSamplers2EXT") == 0) {
        return (PFN_vkVoidFunction)vkmock_CmdBindDescriptorBufferEmbeddedSamplers2EXT;
    }
    if (strcmp(pName, "vkCreateDebugReportCallbackEXT") == 0) {
        return (PFN_vkVoidFunction)vkmock_CreateDebugReportCallbackEXT;
    }
    if (strcmp(pName, "vkDestroyDebugReportCallbackEXT") == 0) {
        return (PFN_vkVoidFunction)vkmock_DestroyDebugReportCallbackEXT;
    }
    if (strcmp(pName, "vkDebugReportMessageEXT") == 0) {
        return (PFN_vkVoidFunction)vkmock_DebugReportMessageEXT;
    }
    if (strcmp(pName, "vkDebugMarkerSetObjectTagEXT") == 0) {
        return (PFN_vkVoidFunction)vkmock_DebugMarkerSetObjectTagEXT;
    }
    if (strcmp(pName, "vkDebugMarkerSetObjectNameEXT") == 0) {
        return (PFN_vkVoidFunction)vkmock_DebugMarkerSetObjectNameEXT;
    }
    if (strcmp(pName, "vkCmdDebugMarkerBeginEXT") == 0) {
        return (PFN_vkVoidFunction)vkmock_CmdDebugMarkerBeginEXT;
    }
    if (strcmp(pName, "vkCmdDebugMarkerEndEXT") == 0) {
        return (PFN_vkVoidFunction)vkmock_CmdDebugMarkerEndEXT;
    }
    if (strcmp(pName, "vkCmdDebugMarkerInsertEXT") == 0) {
        return (PFN_vkVoidFunction)vkmock_CmdDebugMarkerInsertEXT;
    }
    if (strcmp(pName, "vkCmdBindTransformFeedbackBuffersEXT") == 0) {
        return (PFN_vkVoidFunction)vkmock_CmdBindTransformFeedbackBuffersEXT;
    }
    if (strcmp(pName, "vkCmdBeginTransformFeedbackEXT") == 0) {
        return (PFN_vkVoidFunction)vkmock_CmdBeginTransformFeedbackEXT;
    }
    if (strcmp(pName, "vkCmdEndTransformFeedbackEXT") == 0) {
        return (PFN_vkVoidFunction)vkmock_CmdEndTransformFeedbackEXT;
    }
    if (strcmp(pName, "vkCmdBeginQueryIndexedEXT") == 0) {
        return (PFN_vkVoidFunction)vkmock_CmdBeginQueryIndexedEXT;
    }
    if (strcmp(pName, "vkCmdEndQueryIndexedEXT") == 0) {
        return (PFN_vkVoidFunction)vkmock_CmdEndQueryIndexedEXT;
    }
    if (strcmp(pName, "vkCmdDrawIndirectByteCountEXT") == 0) {
        return (PFN_vkVoidFunction)vkmock_CmdDrawIndirectByteCountEXT;
    }
    if (strcmp(pName, "vkCreateCuModuleNVX") == 0) {
        return (PFN_vkVoidFunction)vkmock_CreateCuModuleNVX;
    }
    if (strcmp(pName, "vkCreateCuFunctionNVX") == 0) {
        return (PFN_vkVoidFunction)vkmock_CreateCuFunctionNVX;
    }
    if (strcmp(pName, "vkDestroyCuModuleNVX") == 0) {
        return (PFN_vkVoidFunction)vkmock_DestroyCuModuleNVX;
    }
    if (strcmp(pName, "vkDestroyCuFunctionNVX") == 0) {
        return (PFN_vkVoidFunction)vkmock_DestroyCuFunctionNVX;
    }
    if (strcmp(pName, "vkCmdCuLaunchKernelNVX") == 0) {
        return (PFN_vkVoidFunction)vkmock_CmdCuLaunchKernelNVX;
    }
    if (strcmp(pName, "vkGetImageViewHandleNVX") == 0) {
        return (PFN_vkVoidFunction)vkmock_GetImageViewHandleNVX;
    }
    if (strcmp(pName, "vkGetImageViewHandle64NVX") == 0) {
        return (PFN_vkVoidFunction)vkmock_GetImageViewHandle64NVX;
    }
    if (strcmp(pName, "vkGetImageViewAddressNVX") == 0) {
        return (PFN_vkVoidFunction)vkmock_GetImageViewAddressNVX;
    }
    if (strcmp(pName, "vkCmdDrawIndirectCountAMD") == 0) {
        return (PFN_vkVoidFunction)vkmock_CmdDrawIndirectCountAMD;
    }
    if (strcmp(pName, "vkCmdDrawIndexedIndirectCountAMD") == 0) {
        return (PFN_vkVoidFunction)vkmock_CmdDrawIndexedIndirectCountAMD;
    }
    if (strcmp(pName, "vkGetShaderInfoAMD") == 0) {
        return (PFN_vkVoidFunction)vkmock_GetShaderInfoAMD;
    }
#ifdef VK_USE_PLATFORM_GGP
    if (strcmp(pName, "vkCreateStreamDescriptorSurfaceGGP") == 0) {
        return (PFN_vkVoidFunction)vkmock_CreateStreamDescriptorSurfaceGGP;
    }
#endif  // VK_USE_PLATFORM_GGP
    if (strcmp(pName, "vkGetPhysicalDeviceExternalImageFormatPropertiesNV") == 0) {
        return (PFN_vkVoidFunction)vkmock_GetPhysicalDeviceExternalImageFormatPropertiesNV;
    }
#ifdef VK_USE_PLATFORM_WIN32_KHR
    if (strcmp(pName, "vkGetMemoryWin32HandleNV") == 0) {
        return (PFN_vkVoidFunction)vkmock_GetMemoryWin32HandleNV;
    }
#endif  // VK_USE_PLATFORM_WIN32_KHR
#ifdef VK_USE_PLATFORM_VI_NN
    if (strcmp(pName, "vkCreateViSurfaceNN") == 0) {
        return (PFN_vkVoidFunction)vkmock_CreateViSurfaceNN;
    }
#endif  // VK_USE_PLATFORM_VI_NN
    if (strcmp(pName, "vkCmdBeginConditionalRenderingEXT") == 0) {
        return (PFN_vkVoidFunction)vkmock_CmdBeginConditionalRenderingEXT;
    }
    if (strcmp(pName, "vkCmdEndConditionalRenderingEXT") == 0) {
        return (PFN_vkVoidFunction)vkmock_CmdEndConditionalRenderingEXT;
    }
    if (strcmp(pName, "vkCmdSetViewportWScalingNV") == 0) {
        return (PFN_vkVoidFunction)vkmock_CmdSetViewportWScalingNV;
    }
    if (strcmp(pName, "vkReleaseDisplayEXT") == 0) {
        return (PFN_vkVoidFunction)vkmock_ReleaseDisplayEXT;
    }
#ifdef VK_USE_PLATFORM_XLIB_XRANDR_EXT
    if (strcmp(pName, "vkAcquireXlibDisplayEXT") == 0) {
        return (PFN_vkVoidFunction)vkmock_AcquireXlibDisplayEXT;
    }
    if (strcmp(pName, "vkGetRandROutputDisplayEXT") == 0) {
        return (PFN_vkVoidFunction)vkmock_GetRandROutputDisplayEXT;
    }
#endif  // VK_USE_PLATFORM_XLIB_XRANDR_EXT
    if (strcmp(pName, "vkGetPhysicalDeviceSurfaceCapabilities2EXT") == 0) {
        return (PFN_vkVoidFunction)vkmock_GetPhysicalDeviceSurfaceCapabilities2EXT;
    }
    if (strcmp(pName, "vkDisplayPowerControlEXT") == 0) {
        return (PFN_vkVoidFunction)vkmock_DisplayPowerControlEXT;
    }
    if (strcmp(pName, "vkRegisterDeviceEventEXT") == 0) {
        return (PFN_vkVoidFunction)vkmock_RegisterDeviceEventEXT;
    }
    if (strcmp(pName, "vkRegisterDisplayEventEXT") == 0) {
        return (PFN_vkVoidFunction)vkmock_RegisterDisplayEventEXT;
    }
    if (strcmp(pName, "vkGetSwapchainCounterEXT") == 0) {
        return (PFN_vkVoidFunction)vkmock_GetSwapchainCounterEXT;
    }
    if (strcmp(pName, "vkGetRefreshCycleDurationGOOGLE") == 0) {
        return (PFN_vkVoidFunction)vkmock_GetRefreshCycleDurationGOOGLE;
    }
    if (strcmp(pName, "vkGetPastPresentationTimingGOOGLE") == 0) {
        return (PFN_vkVoidFunction)vkmock_GetPastPresentationTimingGOOGLE;
    }
    if (strcmp(pName, "vkCmdSetDiscardRectangleEXT") == 0) {
        return (PFN_vkVoidFunction)vkmock_CmdSetDiscardRectangleEXT;
    }
    if (strcmp(pName, "vkCmdSetDiscardRectangleEnableEXT") == 0) {
        return (PFN_vkVoidFunction)vkmock_CmdSetDiscardRectangleEnableEXT;
    }
    if (strcmp(pName, "vkCmdSetDiscardRectangleModeEXT") == 0) {
        return (PFN_vkVoidFunction)vkmock_CmdSetDiscardRectangleModeEXT;
    }
    if (strcmp(pName, "vkSetHdrMetadataEXT") == 0) {
        return (PFN_vkVoidFunction)vkmock_SetHdrMetadataEXT;
    }
#ifdef VK_USE_PLATFORM_IOS_MVK
    if (strcmp(pName, "vkCreateIOSSurfaceMVK") == 0) {
        return (PFN_vkVoidFunction)vkmock_CreateIOSSurfaceMVK;
    }
#endif  // VK_USE_PLATFORM_IOS_MVK
#ifdef VK_USE_PLATFORM_MACOS_MVK
    if (strcmp(pName, "vkCreateMacOSSurfaceMVK") == 0) {
        return (PFN_vkVoidFunction)vkmock_CreateMacOSSurfaceMVK;
    }
#endif  // VK_USE_PLATFORM_MACOS_MVK
    if (strcmp(pName, "vkSetDebugUtilsObjectNameEXT") == 0) {
        return (PFN_vkVoidFunction)vkmock_SetDebugUtilsObjectNameEXT;
    }
    if (strcmp(pName, "vkSetDebugUtilsObjectTagEXT") == 0) {
        return (PFN_vkVoidFunction)vkmock_SetDebugUtilsObjectTagEXT;
    }
    if (strcmp(pName, "vkQueueBeginDebugUtilsLabelEXT") == 0) {
        return (PFN_vkVoidFunction)vkmock_QueueBeginDebugUtilsLabelEXT;
    }
    if (strcmp(pName, "vkQueueEndDebugUtilsLabelEXT") == 0) {
        return (PFN_vkVoidFunction)vkmock_QueueEndDebugUtilsLabelEXT;
    }
    if (strcmp(pName, "vkQueueInsertDebugUtilsLabelEXT") == 0) {
        return (PFN_vkVoidFunction)vkmock_QueueInsertDebugUtilsLabelEXT;
    }
    if (strcmp(pName, "vkCmdBeginDebugUtilsLabelEXT") == 0) {
        return (PFN_vkVoidFunction)vkmock_CmdBeginDebugUtilsLabelEXT;
    }
    if (strcmp(pName, "vkCmdEndDebugUtilsLabelEXT") == 0) {
        return (PFN_vkVoidFunction)vkmock_CmdEndDebugUtilsLabelEXT;
    }
    if (strcmp(pName, "vkCmdInsertDebugUtilsLabelEXT") == 0) {
        return (PFN_vkVoidFunction)vkmock_CmdInsertDebugUtilsLabelEXT;
    }
    if (strcmp(pName, "vkCreateDebugUtilsMessengerEXT") == 0) {
        return (PFN_vkVoidFunction)vkmock_CreateDebugUtilsMessengerEXT;
    }
    if (strcmp(pName, "vkDestroyDebugUtilsMessengerEXT") == 0) {
        return (PFN_vkVoidFunction)vkmock_DestroyDebugUtilsMessengerEXT;
    }
    if (strcmp(pName, "vkSubmitDebugUtilsMessageEXT") == 0) {
        return (PFN_vkVoidFunction)vkmock_SubmitDebugUtilsMessageEXT;
    }
#ifdef VK_USE_PLATFORM_ANDROID_KHR
    if (strcmp(pName, "vkGetAndroidHardwareBufferPropertiesANDROID") == 0) {
        return (PFN_vkVoidFunction)vkmock_GetAndroidHardwareBufferPropertiesANDROID;
    }
    if (strcmp(pName, "vkGetMemoryAndroidHardwareBufferANDROID") == 0) {
        return (PFN_vkVoidFunction)vkmock_GetMemoryAndroidHardwareBufferANDROID;
    }
#endif  // VK_USE_PLATFORM_ANDROID_KHR
#ifdef VK_ENABLE_BETA_EXTENSIONS
    if (strcmp(pName, "vkCreateExecutionGraphPipelinesAMDX") == 0) {
        return (PFN_vkVoidFunction)vkmock_CreateExecutionGraphPipelinesAMDX;
    }
    if (strcmp(pName, "vkGetExecutionGraphPipelineScratchSizeAMDX") == 0) {
        return (PFN_vkVoidFunction)vkmock_GetExecutionGraphPipelineScratchSizeAMDX;
    }
    if (strcmp(pName, "vkGetExecutionGraphPipelineNodeIndexAMDX") == 0) {
        return (PFN_vkVoidFunction)vkmock_GetExecutionGraphPipelineNodeIndexAMDX;
    }
    if (strcmp(pName, "vkCmdInitializeGraphScratchMemoryAMDX") == 0) {
        return (PFN_vkVoidFunction)vkmock_CmdInitializeGraphScratchMemoryAMDX;
    }
    if (strcmp(pName, "vkCmdDispatchGraphAMDX") == 0) {
        return (PFN_vkVoidFunction)vkmock_CmdDispatchGraphAMDX;
    }
    if (strcmp(pName, "vkCmdDispatchGraphIndirectAMDX") == 0) {
        return (PFN_vkVoidFunction)vkmock_CmdDispatchGraphIndirectAMDX;
    }
    if (strcmp(pName, "vkCmdDispatchGraphIndirectCountAMDX") == 0) {
        return (PFN_vkVoidFunction)vkmock_CmdDispatchGraphIndirectCountAMDX;
    }
#endif  // VK_ENABLE_BETA_EXTENSIONS
    if (strcmp(pName, "vkCmdSetSampleLocationsEXT") == 0) {
        return (PFN_vkVoidFunction)vkmock_CmdSetSampleLocationsEXT;
    }
    if (strcmp(pName, "vkGetPhysicalDeviceMultisamplePropertiesEXT") == 0) {
        return (PFN_vkVoidFunction)vkmock_GetPhysicalDeviceMultisamplePropertiesEXT;
    }
    if (strcmp(pName, "vkGetImageDrmFormatModifierPropertiesEXT") == 0) {
        return (PFN_vkVoidFunction)vkmock_GetImageDrmFormatModifierPropertiesEXT;
    }
    if (strcmp(pName, "vkCreateValidationCacheEXT") == 0) {
        return (PFN_vkVoidFunction)vkmock_CreateValidationCacheEXT;
    }
    if (strcmp(pName, "vkDestroyValidationCacheEXT") == 0) {
        return (PFN_vkVoidFunction)vkmock_DestroyValidationCacheEXT;
    }
    if (strcmp(pName, "vkMergeValidationCachesEXT") == 0) {
        return (PFN_vkVoidFunction)vkmock_MergeValidationCachesEXT;
    }
    if (strcmp(pName, "vkGetValidationCacheDataEXT") == 0) {
        return (PFN_vkVoidFunction)vkmock_GetValidationCacheDataEXT;
    }
    if (strcmp(pName, "vkCmdBindShadingRateImageNV") == 0) {
        return (PFN_vkVoidFunction)vkmock_CmdBindShadingRateImageNV;
    }
    if (strcmp(pName, "vkCmdSetViewportShadingRatePaletteNV") == 0) {
        return (PFN_vkVoidFunction)vkmock_CmdSetViewportShadingRatePaletteNV;
    }
    if (strcmp(pName, "vkCmdSetCoarseSampleOrderNV") == 0) {
        return (PFN_vkVoidFunction)vkmock_CmdSetCoarseSampleOrderNV;
    }
    if (strcmp(pName, "vkCreateAccelerationStructureNV") == 0) {
        return (PFN_vkVoidFunction)vkmock_CreateAccelerationStructureNV;
    }
    if (strcmp(pName, "vkDestroyAccelerationStructureNV") == 0) {
        return (PFN_vkVoidFunction)vkmock_DestroyAccelerationStructureNV;
    }
    if (strcmp(pName, "vkGetAccelerationStructureMemoryRequirementsNV") == 0) {
        return (PFN_vkVoidFunction)vkmock_GetAccelerationStructureMemoryRequirementsNV;
    }
    if (strcmp(pName, "vkBindAccelerationStructureMemoryNV") == 0) {
        return (PFN_vkVoidFunction)vkmock_BindAccelerationStructureMemoryNV;
    }
    if (strcmp(pName, "vkCmdBuildAccelerationStructureNV") == 0) {
        return (PFN_vkVoidFunction)vkmock_CmdBuildAccelerationStructureNV;
    }
    if (strcmp(pName, "vkCmdCopyAccelerationStructureNV") == 0) {
        return (PFN_vkVoidFunction)vkmock_CmdCopyAccelerationStructureNV;
    }
    if (strcmp(pName, "vkCmdTraceRaysNV") == 0) {
        return (PFN_vkVoidFunction)vkmock_CmdTraceRaysNV;
    }
    if (strcmp(pName, "vkCreateRayTracingPipelinesNV") == 0) {
        return (PFN_vkVoidFunction)vkmock_CreateRayTracingPipelinesNV;
    }
    if (strcmp(pName, "vkGetRayTracingShaderGroupHandlesKHR") == 0) {
        return (PFN_vkVoidFunction)vkmock_GetRayTracingShaderGroupHandlesKHR;
    }
    if (strcmp(pName, "vkGetRayTracingShaderGroupHandlesNV") == 0) {
        return (PFN_vkVoidFunction)vkmock_GetRayTracingShaderGroupHandlesNV;
    }
    if (strcmp(pName, "vkGetAccelerationStructureHandleNV") == 0) {
        return (PFN_vkVoidFunction)vkmock_GetAccelerationStructureHandleNV;
    }
    if (strcmp(pName, "vkCmdWriteAccelerationStructuresPropertiesNV") == 0) {
        return (PFN_vkVoidFunction)vkmock_CmdWriteAccelerationStructuresPropertiesNV;
    }
    if (strcmp(pName, "vkCompileDeferredNV") == 0) {
        return (PFN_vkVoidFunction)vkmock_CompileDeferredNV;
    }
    if (strcmp(pName, "vkGetMemoryHostPointerPropertiesEXT") == 0) {
        return (PFN_vkVoidFunction)vkmock_GetMemoryHostPointerPropertiesEXT;
    }
    if (strcmp(pName, "vkCmdWriteBufferMarkerAMD") == 0) {
        return (PFN_vkVoidFunction)vkmock_CmdWriteBufferMarkerAMD;
    }
    if (strcmp(pName, "vkCmdWriteBufferMarker2AMD") == 0) {
        return (PFN_vkVoidFunction)vkmock_CmdWriteBufferMarker2AMD;
    }
    if (strcmp(pName, "vkGetPhysicalDeviceCalibrateableTimeDomainsEXT") == 0) {
        return (PFN_vkVoidFunction)vkmock_GetPhysicalDeviceCalibrateableTimeDomainsEXT;
    }
    if (strcmp(pName, "vkGetCalibratedTimestampsEXT") == 0) {
        return (PFN_vkVoidFunction)vkmock_GetCalibratedTimestampsEXT;
    }
    if (strcmp(pName, "vkCmdDrawMeshTasksNV") == 0) {
        return (PFN_vkVoidFunction)vkmock_CmdDrawMeshTasksNV;
    }
    if (strcmp(pName, "vkCmdDrawMeshTasksIndirectNV") == 0) {
        return (PFN_vkVoidFunction)vkmock_CmdDrawMeshTasksIndirectNV;
    }
    if (strcmp(pName, "vkCmdDrawMeshTasksIndirectCountNV") == 0) {
        return (PFN_vkVoidFunction)vkmock_CmdDrawMeshTasksIndirectCountNV;
    }
    if (strcmp(pName, "vkCmdSetExclusiveScissorEnableNV") == 0) {
        return (PFN_vkVoidFunction)vkmock_CmdSetExclusiveScissorEnableNV;
    }
    if (strcmp(pName, "vkCmdSetExclusiveScissorNV") == 0) {
        return (PFN_vkVoidFunction)vkmock_CmdSetExclusiveScissorNV;
    }
    if (strcmp(pName, "vkCmdSetCheckpointNV") == 0) {
        return (PFN_vkVoidFunction)vkmock_CmdSetCheckpointNV;
    }
    if (strcmp(pName, "vkGetQueueCheckpointDataNV") == 0) {
        return (PFN_vkVoidFunction)vkmock_GetQueueCheckpointDataNV;
    }
    if (strcmp(pName, "vkGetQueueCheckpointData2NV") == 0) {
        return (PFN_vkVoidFunction)vkmock_GetQueueCheckpointData2NV;
    }
    if (strcmp(pName, "vkInitializePerformanceApiINTEL") == 0) {
        return (PFN_vkVoidFunction)vkmock_InitializePerformanceApiINTEL;
    }
    if (strcmp(pName, "vkUninitializePerformanceApiINTEL") == 0) {
        return (PFN_vkVoidFunction)vkmock_UninitializePerformanceApiINTEL;
    }
    if (strcmp(pName, "vkCmdSetPerformanceMarkerINTEL") == 0) {
        return (PFN_vkVoidFunction)vkmock_CmdSetPerformanceMarkerINTEL;
    }
    if (strcmp(pName, "vkCmdSetPerformanceStreamMarkerINTEL") == 0) {
        return (PFN_vkVoidFunction)vkmock_CmdSetPerformanceStreamMarkerINTEL;
    }
    if (strcmp(pName, "vkCmdSetPerformanceOverrideINTEL") == 0) {
        return (PFN_vkVoidFunction)vkmock_CmdSetPerformanceOverrideINTEL;
    }
    if (strcmp(pName, "vkAcquirePerformanceConfigurationINTEL") == 0) {
        return (PFN_vkVoidFunction)vkmock_AcquirePerformanceConfigurationINTEL;
    }
    if (strcmp(pName, "vkReleasePerformanceConfigurationINTEL") == 0) {
        return (PFN_vkVoidFunction)vkmock_ReleasePerformanceConfigurationINTEL;
    }
    if (strcmp(pName, "vkQueueSetPerformanceConfigurationINTEL") == 0) {
        return (PFN_vkVoidFunction)vkmock_QueueSetPerformanceConfigurationINTEL;
    }
    if (strcmp(pName, "vkGetPerformanceParameterINTEL") == 0) {
        return (PFN_vkVoidFunction)vkmock_GetPerformanceParameterINTEL;
    }
    if (strcmp(pName, "vkSetLocalDimmingAMD") == 0) {
        return (PFN_vkVoidFunction)vkmock_SetLocalDimmingAMD;
    }
#ifdef VK_USE_PLATFORM_FUCHSIA
    if (strcmp(pName, "vkCreateImagePipeSurfaceFUCHSIA") == 0) {
        return (PFN_vkVoidFunction)vkmock_CreateImagePipeSurfaceFUCHSIA;
    }
#endif  // VK_USE_PLATFORM_FUCHSIA
#ifdef VK_USE_PLATFORM_METAL_EXT
    if (strcmp(pName, "vkCreateMetalSurfaceEXT") == 0) {
        return (PFN_vkVoidFunction)vkmock_CreateMetalSurfaceEXT;
    }
#endif  // VK_USE_PLATFORM_METAL_EXT
    if (strcmp(pName, "vkGetBufferDeviceAddressEXT") == 0) {
        return (PFN_vkVoidFunction)vkmock_GetBufferDeviceAddressEXT;
    }
    if (strcmp(pName, "vkGetPhysicalDeviceToolPropertiesEXT") == 0) {
        return (PFN_vkVoidFunction)vkmock_GetPhysicalDeviceToolPropertiesEXT;
    }
    if (strcmp(pName, "vkGetPhysicalDeviceCooperativeMatrixPropertiesNV") == 0) {
        return (PFN_vkVoidFunction)vkmock_GetPhysicalDeviceCooperativeMatrixPropertiesNV;
    }
    if (strcmp(pName, "vkGetPhysicalDeviceSupportedFramebufferMixedSamplesCombinationsNV") == 0) {
        return (PFN_vkVoidFunction)vkmock_GetPhysicalDeviceSupportedFramebufferMixedSamplesCombinationsNV;
    }
#ifdef VK_USE_PLATFORM_WIN32_KHR
    if (strcmp(pName, "vkGetPhysicalDeviceSurfacePresentModes2EXT") == 0) {
        return (PFN_vkVoidFunction)vkmock_GetPhysicalDeviceSurfacePresentModes2EXT;
    }
    if (strcmp(pName, "vkAcquireFullScreenExclusiveModeEXT") == 0) {
        return (PFN_vkVoidFunction)vkmock_AcquireFullScreenExclusiveModeEXT;
    }
    if (strcmp(pName, "vkReleaseFullScreenExclusiveModeEXT") == 0) {
        return (PFN_vkVoidFunction)vkmock_ReleaseFullScreenExclusiveModeEXT;
    }
    if (strcmp(pName, "vkGetDeviceGroupSurfacePresentModes2EXT") == 0) {
        return (PFN_vkVoidFunction)vkmock_GetDeviceGroupSurfacePresentModes2EXT;
    }
#endif  // VK_USE_PLATFORM_WIN32_KHR
    if (strcmp(pName, "vkCreateHeadlessSurfaceEXT") == 0) {
        return (PFN_vkVoidFunction)vkmock_CreateHeadlessSurfaceEXT;
    }
    if (strcmp(pName, "vkCmdSetLineStippleEXT") == 0) {
        return (PFN_vkVoidFunction)vkmock_CmdSetLineStippleEXT;
    }
    if (strcmp(pName, "vkResetQueryPoolEXT") == 0) {
        return (PFN_vkVoidFunction)vkmock_ResetQueryPoolEXT;
    }
    if (strcmp(pName, "vkCmdSetCullModeEXT") == 0) {
        return (PFN_vkVoidFunction)vkmock_CmdSetCullModeEXT;
    }
    if (strcmp(pName, "vkCmdSetFrontFaceEXT") == 0) {
        return (PFN_vkVoidFunction)vkmock_CmdSetFrontFaceEXT;
    }
    if (strcmp(pName, "vkCmdSetPrimitiveTopologyEXT") == 0) {
        return (PFN_vkVoidFunction)vkmock_CmdSetPrimitiveTopologyEXT;
    }
    if (strcmp(pName, "vkCmdSetViewportWithCountEXT") == 0) {
        return (PFN_vkVoidFunction)vkmock_CmdSetViewportWithCountEXT;
    }
    if (strcmp(pName, "vkCmdSetScissorWithCountEXT") == 0) {
        return (PFN_vkVoidFunction)vkmock_CmdSetScissorWithCountEXT;
    }
    if (strcmp(pName, "vkCmdBindVertexBuffers2EXT") == 0) {
        return (PFN_vkVoidFunction)vkmock_CmdBindVertexBuffers2EXT;
    }
    if (strcmp(pName, "vkCmdSetDepthTestEnableEXT") == 0) {
        return (PFN_vkVoidFunction)vkmock_CmdSetDepthTestEnableEXT;
    }
    if (strcmp(pName, "vkCmdSetDepthWriteEnableEXT") == 0) {
        return (PFN_vkVoidFunction)vkmock_CmdSetDepthWriteEnableEXT;
    }
    if (strcmp(pName, "vkCmdSetDepthCompareOpEXT") == 0) {
        return (PFN_vkVoidFunction)vkmock_CmdSetDepthCompareOpEXT;
    }
    if (strcmp(pName, "vkCmdSetDepthBoundsTestEnableEXT") == 0) {
        return (PFN_vkVoidFunction)vkmock_CmdSetDepthBoundsTestEnableEXT;
    }
    if (strcmp(pName, "vkCmdSetStencilTestEnableEXT") == 0) {
        return (PFN_vkVoidFunction)vkmock_CmdSetStencilTestEnableEXT;
    }
    if (strcmp(pName, "vkCmdSetStencilOpEXT") == 0) {
        return (PFN_vkVoidFunction)vkmock_CmdSetStencilOpEXT;
    }
    if (strcmp(pName, "vkCopyMemoryToImageEXT") == 0) {
        return (PFN_vkVoidFunction)vkmock_CopyMemoryToImageEXT;
    }
    if (strcmp(pName, "vkCopyImageToMemoryEXT") == 0) {
        return (PFN_vkVoidFunction)vkmock_CopyImageToMemoryEXT;
    }
    if (strcmp(pName, "vkCopyImageToImageEXT") == 0) {
        return (PFN_vkVoidFunction)vkmock_CopyImageToImageEXT;
    }
    if (strcmp(pName, "vkTransitionImageLayoutEXT") == 0) {
        return (PFN_vkVoidFunction)vkmock_TransitionImageLayoutEXT;
    }
    if (strcmp(pName, "vkGetImageSubresourceLayout2EXT") == 0) {
        return (PFN_vkVoidFunction)vkmock_GetImageSubresourceLayout2EXT;
    }
    if (strcmp(pName, "vkReleaseSwapchainImagesEXT") == 0) {
        return (PFN_vkVoidFunction)vkmock_ReleaseSwapchainImagesEXT;
    }
    if (strcmp(pName, "vkGetGeneratedCommandsMemoryRequirementsNV") == 0) {
        return (PFN_vkVoidFunction)vkmock_GetGeneratedCommandsMemoryRequirementsNV;
    }
    if (strcmp(pName, "vkCmdPreprocessGeneratedCommandsNV") == 0) {
        return (PFN_vkVoidFunction)vkmock_CmdPreprocessGeneratedCommandsNV;
    }
    if (strcmp(pName, "vkCmdExecuteGeneratedCommandsNV") == 0) {
        return (PFN_vkVoidFunction)vkmock_CmdExecuteGeneratedCommandsNV;
    }
    if (strcmp(pName, "vkCmdBindPipelineShaderGroupNV") == 0) {
        return (PFN_vkVoidFunction)vkmock_CmdBindPipelineShaderGroupNV;
    }
    if (strcmp(pName, "vkCreateIndirectCommandsLayoutNV") == 0) {
        return (PFN_vkVoidFunction)vkmock_CreateIndirectCommandsLayoutNV;
    }
    if (strcmp(pName, "vkDestroyIndirectCommandsLayoutNV") == 0) {
        return (PFN_vkVoidFunction)vkmock_DestroyIndirectCommandsLayoutNV;
    }
    if (strcmp(pName, "vkCmdSetDepthBias2EXT") == 0) {
        return (PFN_vkVoidFunction)vkmock_CmdSetDepthBias2EXT;
    }
    if (strcmp(pName, "vkAcquireDrmDisplayEXT") == 0) {
        return (PFN_vkVoidFunction)vkmock_AcquireDrmDisplayEXT;
    }
    if (strcmp(pName, "vkGetDrmDisplayEXT") == 0) {
        return (PFN_vkVoidFunction)vkmock_GetDrmDisplayEXT;
    }
    if (strcmp(pName, "vkCreatePrivateDataSlotEXT") == 0) {
        return (PFN_vkVoidFunction)vkmock_CreatePrivateDataSlotEXT;
    }
    if (strcmp(pName, "vkDestroyPrivateDataSlotEXT") == 0) {
        return (PFN_vkVoidFunction)vkmock_DestroyPrivateDataSlotEXT;
    }
    if (strcmp(pName, "vkSetPrivateDataEXT") == 0) {
        return (PFN_vkVoidFunction)vkmock_SetPrivateDataEXT;
    }
    if (strcmp(pName, "vkGetPrivateDataEXT") == 0) {
        return (PFN_vkVoidFunction)vkmock_GetPrivateDataEXT;
    }
#ifdef VK_ENABLE_BETA_EXTENSIONS
    if (strcmp(pName, "vkCreateCudaModuleNV") == 0) {
        return (PFN_vkVoidFunction)vkmock_CreateCudaModuleNV;
    }
    if (strcmp(pName, "vkGetCudaModuleCacheNV") == 0) {
        return (PFN_vkVoidFunction)vkmock_GetCudaModuleCacheNV;
    }
    if (strcmp(pName, "vkCreateCudaFunctionNV") == 0) {
        return (PFN_vkVoidFunction)vkmock_CreateCudaFunctionNV;
    }
    if (strcmp(pName, "vkDestroyCudaModuleNV") == 0) {
        return (PFN_vkVoidFunction)vkmock_DestroyCudaModuleNV;
    }
    if (strcmp(pName, "vkDestroyCudaFunctionNV") == 0) {
        return (PFN_vkVoidFunction)vkmock_DestroyCudaFunctionNV;
    }
    if (strcmp(pName, "vkCmdCudaLaunchKernelNV") == 0) {
        return (PFN_vkVoidFunction)vkmock_CmdCudaLaunchKernelNV;
    }
#endif  // VK_ENABLE_BETA_EXTENSIONS
#ifdef VK_USE_PLATFORM_METAL_EXT
    if (strcmp(pName, "vkExportMetalObjectsEXT") == 0) {
        return (PFN_vkVoidFunction)vkmock_ExportMetalObjectsEXT;
    }
#endif  // VK_USE_PLATFORM_METAL_EXT
    if (strcmp(pName, "vkGetDescriptorSetLayoutSizeEXT") == 0) {
        return (PFN_vkVoidFunction)vkmock_GetDescriptorSetLayoutSizeEXT;
    }
    if (strcmp(pName, "vkGetDescriptorSetLayoutBindingOffsetEXT") == 0) {
        return (PFN_vkVoidFunction)vkmock_GetDescriptorSetLayoutBindingOffsetEXT;
    }
    if (strcmp(pName, "vkGetDescriptorEXT") == 0) {
        return (PFN_vkVoidFunction)vkmock_GetDescriptorEXT;
    }
    if (strcmp(pName, "vkCmdBindDescriptorBuffersEXT") == 0) {
        return (PFN_vkVoidFunction)vkmock_CmdBindDescriptorBuffersEXT;
    }
    if (strcmp(pName, "vkCmdSetDescriptorBufferOffsetsEXT") == 0) {
        return (PFN_vkVoidFunction)vkmock_CmdSetDescriptorBufferOffsetsEXT;
    }
    if (strcmp(pName, "vkCmdBindDescriptorBufferEmbeddedSamplersEXT") == 0) {
        return (PFN_vkVoidFunction)vkmock_CmdBindDescriptorBufferEmbeddedSamplersEXT;
    }
    if (strcmp(pName, "vkGetBufferOpaqueCaptureDescriptorDataEXT") == 0) {
        return (PFN_vkVoidFunction)vkmock_GetBufferOpaqueCaptureDescriptorDataEXT;
    }
    if (strcmp(pName, "vkGetImageOpaqueCaptureDescriptorDataEXT") == 0) {
        return (PFN_vkVoidFunction)vkmock_GetImageOpaqueCaptureDescriptorDataEXT;
    }
    if (strcmp(pName, "vkGetImageViewOpaqueCaptureDescriptorDataEXT") == 0) {
        return (PFN_vkVoidFunction)vkmock_GetImageViewOpaqueCaptureDescriptorDataEXT;
    }
    if (strcmp(pName, "vkGetSamplerOpaqueCaptureDescriptorDataEXT") == 0) {
        return (PFN_vkVoidFunction)vkmock_GetSamplerOpaqueCaptureDescriptorDataEXT;
    }
    if (strcmp(pName, "vkGetAccelerationStructureOpaqueCaptureDescriptorDataEXT") == 0) {
        return (PFN_vkVoidFunction)vkmock_GetAccelerationStructureOpaqueCaptureDescriptorDataEXT;
    }
    if (strcmp(pName, "vkCmdSetFragmentShadingRateEnumNV") == 0) {
        return (PFN_vkVoidFunction)vkmock_CmdSetFragmentShadingRateEnumNV;
    }
    if (strcmp(pName, "vkGetDeviceFaultInfoEXT") == 0) {
        return (PFN_vkVoidFunction)vkmock_GetDeviceFaultInfoEXT;
    }
#ifdef VK_USE_PLATFORM_WIN32_KHR
    if (strcmp(pName, "vkAcquireWinrtDisplayNV") == 0) {
        return (PFN_vkVoidFunction)vkmock_AcquireWinrtDisplayNV;
    }
    if (strcmp(pName, "vkGetWinrtDisplayNV") == 0) {
        return (PFN_vkVoidFunction)vkmock_GetWinrtDisplayNV;
    }
#endif  // VK_USE_PLATFORM_WIN32_KHR
#ifdef VK_USE_PLATFORM_DIRECTFB_EXT
    if (strcmp(pName, "vkCreateDirectFBSurfaceEXT") == 0) {
        return (PFN_vkVoidFunction)vkmock_CreateDirectFBSurfaceEXT;
    }
    if (strcmp(pName, "vkGetPhysicalDeviceDirectFBPresentationSupportEXT") == 0) {
        return (PFN_vkVoidFunction)vkmock_GetPhysicalDeviceDirectFBPresentationSupportEXT;
    }
#endif  // VK_USE_PLATFORM_DIRECTFB_EXT
    if (strcmp(pName, "vkCmdSetVertexInputEXT") == 0) {
        return (PFN_vkVoidFunction)vkmock_CmdSetVertexInputEXT;
    }
#ifdef VK_USE_PLATFORM_FUCHSIA
    if (strcmp(pName, "vkGetMemoryZirconHandleFUCHSIA") == 0) {
        return (PFN_vkVoidFunction)vkmock_GetMemoryZirconHandleFUCHSIA;
    }
    if (strcmp(pName, "vkGetMemoryZirconHandlePropertiesFUCHSIA") == 0) {
        return (PFN_vkVoidFunction)vkmock_GetMemoryZirconHandlePropertiesFUCHSIA;
    }
    if (strcmp(pName, "vkImportSemaphoreZirconHandleFUCHSIA") == 0) {
        return (PFN_vkVoidFunction)vkmock_ImportSemaphoreZirconHandleFUCHSIA;
    }
    if (strcmp(pName, "vkGetSemaphoreZirconHandleFUCHSIA") == 0) {
        return (PFN_vkVoidFunction)vkmock_GetSemaphoreZirconHandleFUCHSIA;
    }
    if (strcmp(pName, "vkCreateBufferCollectionFUCHSIA") == 0) {
        return (PFN_vkVoidFunction)vkmock_CreateBufferCollectionFUCHSIA;
    }
    if (strcmp(pName, "vkSetBufferCollectionImageConstraintsFUCHSIA") == 0) {
        return (PFN_vkVoidFunction)vkmock_SetBufferCollectionImageConstraintsFUCHSIA;
    }
    if (strcmp(pName, "vkSetBufferCollectionBufferConstraintsFUCHSIA") == 0) {
        return (PFN_vkVoidFunction)vkmock_SetBufferCollectionBufferConstraintsFUCHSIA;
    }
    if (strcmp(pName, "vkDestroyBufferCollectionFUCHSIA") == 0) {
        return (PFN_vkVoidFunction)vkmock_DestroyBufferCollectionFUCHSIA;
    }
    if (strcmp(pName, "vkGetBufferCollectionPropertiesFUCHSIA") == 0) {
        return (PFN_vkVoidFunction)vkmock_GetBufferCollectionPropertiesFUCHSIA;
    }
#endif  // VK_USE_PLATFORM_FUCHSIA
    if (strcmp(pName, "vkGetDeviceSubpassShadingMaxWorkgroupSizeHUAWEI") == 0) {
        return (PFN_vkVoidFunction)vkmock_GetDeviceSubpassShadingMaxWorkgroupSizeHUAWEI;
    }
    if (strcmp(pName, "vkCmdSubpassShadingHUAWEI") == 0) {
        return (PFN_vkVoidFunction)vkmock_CmdSubpassShadingHUAWEI;
    }
    if (strcmp(pName, "vkCmdBindInvocationMaskHUAWEI") == 0) {
        return (PFN_vkVoidFunction)vkmock_CmdBindInvocationMaskHUAWEI;
    }
    if (strcmp(pName, "vkGetMemoryRemoteAddressNV") == 0) {
        return (PFN_vkVoidFunction)vkmock_GetMemoryRemoteAddressNV;
    }
    if (strcmp(pName, "vkGetPipelinePropertiesEXT") == 0) {
        return (PFN_vkVoidFunction)vkmock_GetPipelinePropertiesEXT;
    }
    if (strcmp(pName, "vkCmdSetPatchControlPointsEXT") == 0) {
        return (PFN_vkVoidFunction)vkmock_CmdSetPatchControlPointsEXT;
    }
    if (strcmp(pName, "vkCmdSetRasterizerDiscardEnableEXT") == 0) {
        return (PFN_vkVoidFunction)vkmock_CmdSetRasterizerDiscardEnableEXT;
    }
    if (strcmp(pName, "vkCmdSetDepthBiasEnableEXT") == 0) {
        return (PFN_vkVoidFunction)vkmock_CmdSetDepthBiasEnableEXT;
    }
    if (strcmp(pName, "vkCmdSetLogicOpEXT") == 0) {
        return (PFN_vkVoidFunction)vkmock_CmdSetLogicOpEXT;
    }
    if (strcmp(pName, "vkCmdSetPrimitiveRestartEnableEXT") == 0) {
        return (PFN_vkVoidFunction)vkmock_CmdSetPrimitiveRestartEnableEXT;
    }
#ifdef VK_USE_PLATFORM_SCREEN_QNX
    if (strcmp(pName, "vkCreateScreenSurfaceQNX") == 0) {
        return (PFN_vkVoidFunction)vkmock_CreateScreenSurfaceQNX;
    }
    if (strcmp(pName, "vkGetPhysicalDeviceScreenPresentationSupportQNX") == 0) {
        return (PFN_vkVoidFunction)vkmock_GetPhysicalDeviceScreenPresentationSupportQNX;
    }
#endif  // VK_USE_PLATFORM_SCREEN_QNX
    if (strcmp(pName, "vkCmdSetColorWriteEnableEXT") == 0) {
        return (PFN_vkVoidFunction)vkmock_CmdSetColorWriteEnableEXT;
    }
    if (strcmp(pName, "vkCmdDrawMultiEXT") == 0) {
        return (PFN_vkVoidFunction)vkmock_CmdDrawMultiEXT;
    }
    if (strcmp(pName, "vkCmdDrawMultiIndexedEXT") == 0) {
        return (PFN_vkVoidFunction)vkmock_CmdDrawMultiIndexedEXT;
    }
    if (strcmp(pName, "vkCreateMicromapEXT") == 0) {
        return (PFN_vkVoidFunction)vkmock_CreateMicromapEXT;
    }
    if (strcmp(pName, "vkDestroyMicromapEXT") == 0) {
        return (PFN_vkVoidFunction)vkmock_DestroyMicromapEXT;
    }
    if (strcmp(pName, "vkCmdBuildMicromapsEXT") == 0) {
        return (PFN_vkVoidFunction)vkmock_CmdBuildMicromapsEXT;
    }
    if (strcmp(pName, "vkBuildMicromapsEXT") == 0) {
        return (PFN_vkVoidFunction)vkmock_BuildMicromapsEXT;
    }
    if (strcmp(pName, "vkCopyMicromapEXT") == 0) {
        return (PFN_vkVoidFunction)vkmock_CopyMicromapEXT;
    }
    if (strcmp(pName, "vkCopyMicromapToMemoryEXT") == 0) {
        return (PFN_vkVoidFunction)vkmock_CopyMicromapToMemoryEXT;
    }
    if (strcmp(pName, "vkCopyMemoryToMicromapEXT") == 0) {
        return (PFN_vkVoidFunction)vkmock_CopyMemoryToMicromapEXT;
    }
    if (strcmp(pName, "vkWriteMicromapsPropertiesEXT") == 0) {
        return (PFN_vkVoidFunction)vkmock_WriteMicromapsPropertiesEXT;
    }
    if (strcmp(pName, "vkCmdCopyMicromapEXT") == 0) {
        return (PFN_vkVoidFunction)vkmock_CmdCopyMicromapEXT;
    }
    if (strcmp(pName, "vkCmdCopyMicromapToMemoryEXT") == 0) {
        return (PFN_vkVoidFunction)vkmock_CmdCopyMicromapToMemoryEXT;
    }
    if (strcmp(pName, "vkCmdCopyMemoryToMicromapEXT") == 0) {
        return (PFN_vkVoidFunction)vkmock_CmdCopyMemoryToMicromapEXT;
    }
    if (strcmp(pName, "vkCmdWriteMicromapsPropertiesEXT") == 0) {
        return (PFN_vkVoidFunction)vkmock_CmdWriteMicromapsPropertiesEXT;
    }
    if (strcmp(pName, "vkGetDeviceMicromapCompatibilityEXT") == 0) {
        return (PFN_vkVoidFunction)vkmock_GetDeviceMicromapCompatibilityEXT;
    }
    if (strcmp(pName, "vkGetMicromapBuildSizesEXT") == 0) {
        return (PFN_vkVoidFunction)vkmock_GetMicromapBuildSizesEXT;
    }
    if (strcmp(pName, "vkCmdDrawClusterHUAWEI") == 0) {
        return (PFN_vkVoidFunction)vkmock_CmdDrawClusterHUAWEI;
    }
    if (strcmp(pName, "vkCmdDrawClusterIndirectHUAWEI") == 0) {
        return (PFN_vkVoidFunction)vkmock_CmdDrawClusterIndirectHUAWEI;
    }
    if (strcmp(pName, "vkSetDeviceMemoryPriorityEXT") == 0) {
        return (PFN_vkVoidFunction)vkmock_SetDeviceMemoryPriorityEXT;
    }
    if (strcmp(pName, "vkGetDescriptorSetLayoutHostMappingInfoVALVE") == 0) {
        return (PFN_vkVoidFunction)vkmock_GetDescriptorSetLayoutHostMappingInfoVALVE;
    }
    if (strcmp(pName, "vkGetDescriptorSetHostMappingVALVE") == 0) {
        return (PFN_vkVoidFunction)vkmock_GetDescriptorSetHostMappingVALVE;
    }
    if (strcmp(pName, "vkCmdCopyMemoryIndirectNV") == 0) {
        return (PFN_vkVoidFunction)vkmock_CmdCopyMemoryIndirectNV;
    }
    if (strcmp(pName, "vkCmdCopyMemoryToImageIndirectNV") == 0) {
        return (PFN_vkVoidFunction)vkmock_CmdCopyMemoryToImageIndirectNV;
    }
    if (strcmp(pName, "vkCmdDecompressMemoryNV") == 0) {
        return (PFN_vkVoidFunction)vkmock_CmdDecompressMemoryNV;
    }
    if (strcmp(pName, "vkCmdDecompressMemoryIndirectCountNV") == 0) {
        return (PFN_vkVoidFunction)vkmock_CmdDecompressMemoryIndirectCountNV;
    }
    if (strcmp(pName, "vkGetPipelineIndirectMemoryRequirementsNV") == 0) {
        return (PFN_vkVoidFunction)vkmock_GetPipelineIndirectMemoryRequirementsNV;
    }
    if (strcmp(pName, "vkCmdUpdatePipelineIndirectBufferNV") == 0) {
        return (PFN_vkVoidFunction)vkmock_CmdUpdatePipelineIndirectBufferNV;
    }
    if (strcmp(pName, "vkGetPipelineIndirectDeviceAddressNV") == 0) {
        return (PFN_vkVoidFunction)vkmock_GetPipelineIndirectDeviceAddressNV;
    }
    if (strcmp(pName, "vkCmdSetDepthClampEnableEXT") == 0) {
        return (PFN_vkVoidFunction)vkmock_CmdSetDepthClampEnableEXT;
    }
    if (strcmp(pName, "vkCmdSetPolygonModeEXT") == 0) {
        return (PFN_vkVoidFunction)vkmock_CmdSetPolygonModeEXT;
    }
    if (strcmp(pName, "vkCmdSetRasterizationSamplesEXT") == 0) {
        return (PFN_vkVoidFunction)vkmock_CmdSetRasterizationSamplesEXT;
    }
    if (strcmp(pName, "vkCmdSetSampleMaskEXT") == 0) {
        return (PFN_vkVoidFunction)vkmock_CmdSetSampleMaskEXT;
    }
    if (strcmp(pName, "vkCmdSetAlphaToCoverageEnableEXT") == 0) {
        return (PFN_vkVoidFunction)vkmock_CmdSetAlphaToCoverageEnableEXT;
    }
    if (strcmp(pName, "vkCmdSetAlphaToOneEnableEXT") == 0) {
        return (PFN_vkVoidFunction)vkmock_CmdSetAlphaToOneEnableEXT;
    }
    if (strcmp(pName, "vkCmdSetLogicOpEnableEXT") == 0) {
        return (PFN_vkVoidFunction)vkmock_CmdSetLogicOpEnableEXT;
    }
    if (strcmp(pName, "vkCmdSetColorBlendEnableEXT") == 0) {
        return (PFN_vkVoidFunction)vkmock_CmdSetColorBlendEnableEXT;
    }
    if (strcmp(pName, "vkCmdSetColorBlendEquationEXT") == 0) {
        return (PFN_vkVoidFunction)vkmock_CmdSetColorBlendEquationEXT;
    }
    if (strcmp(pName, "vkCmdSetColorWriteMaskEXT") == 0) {
        return (PFN_vkVoidFunction)vkmock_CmdSetColorWriteMaskEXT;
    }
    if (strcmp(pName, "vkCmdSetTessellationDomainOriginEXT") == 0) {
        return (PFN_vkVoidFunction)vkmock_CmdSetTessellationDomainOriginEXT;
    }
    if (strcmp(pName, "vkCmdSetRasterizationStreamEXT") == 0) {
        return (PFN_vkVoidFunction)vkmock_CmdSetRasterizationStreamEXT;
    }
    if (strcmp(pName, "vkCmdSetConservativeRasterizationModeEXT") == 0) {
        return (PFN_vkVoidFunction)vkmock_CmdSetConservativeRasterizationModeEXT;
    }
    if (strcmp(pName, "vkCmdSetExtraPrimitiveOverestimationSizeEXT") == 0) {
        return (PFN_vkVoidFunction)vkmock_CmdSetExtraPrimitiveOverestimationSizeEXT;
    }
    if (strcmp(pName, "vkCmdSetDepthClipEnableEXT") == 0) {
        return (PFN_vkVoidFunction)vkmock_CmdSetDepthClipEnableEXT;
    }
    if (strcmp(pName, "vkCmdSetSampleLocationsEnableEXT") == 0) {
        return (PFN_vkVoidFunction)vkmock_CmdSetSampleLocationsEnableEXT;
    }
    if (strcmp(pName, "vkCmdSetColorBlendAdvancedEXT") == 0) {
        return (PFN_vkVoidFunction)vkmock_CmdSetColorBlendAdvancedEXT;
    }
    if (strcmp(pName, "vkCmdSetProvokingVertexModeEXT") == 0) {
        return (PFN_vkVoidFunction)vkmock_CmdSetProvokingVertexModeEXT;
    }
    if (strcmp(pName, "vkCmdSetLineRasterizationModeEXT") == 0) {
        return (PFN_vkVoidFunction)vkmock_CmdSetLineRasterizationModeEXT;
    }
    if (strcmp(pName, "vkCmdSetLineStippleEnableEXT") == 0) {
        return (PFN_vkVoidFunction)vkmock_CmdSetLineStippleEnableEXT;
    }
    if (strcmp(pName, "vkCmdSetDepthClipNegativeOneToOneEXT") == 0) {
        return (PFN_vkVoidFunction)vkmock_CmdSetDepthClipNegativeOneToOneEXT;
    }
    if (strcmp(pName, "vkCmdSetViewportWScalingEnableNV") == 0) {
        return (PFN_vkVoidFunction)vkmock_CmdSetViewportWScalingEnableNV;
    }
    if (strcmp(pName, "vkCmdSetViewportSwizzleNV") == 0) {
        return (PFN_vkVoidFunction)vkmock_CmdSetViewportSwizzleNV;
    }
    if (strcmp(pName, "vkCmdSetCoverageToColorEnableNV") == 0) {
        return (PFN_vkVoidFunction)vkmock_CmdSetCoverageToColorEnableNV;
    }
    if (strcmp(pName, "vkCmdSetCoverageToColorLocationNV") == 0) {
        return (PFN_vkVoidFunction)vkmock_CmdSetCoverageToColorLocationNV;
    }
    if (strcmp(pName, "vkCmdSetCoverageModulationModeNV") == 0) {
        return (PFN_vkVoidFunction)vkmock_CmdSetCoverageModulationModeNV;
    }
    if (strcmp(pName, "vkCmdSetCoverageModulationTableEnableNV") == 0) {
        return (PFN_vkVoidFunction)vkmock_CmdSetCoverageModulationTableEnableNV;
    }
    if (strcmp(pName, "vkCmdSetCoverageModulationTableNV") == 0) {
        return (PFN_vkVoidFunction)vkmock_CmdSetCoverageModulationTableNV;
    }
    if (strcmp(pName, "vkCmdSetShadingRateImageEnableNV") == 0) {
        return (PFN_vkVoidFunction)vkmock_CmdSetShadingRateImageEnableNV;
    }
    if (strcmp(pName, "vkCmdSetRepresentativeFragmentTestEnableNV") == 0) {
        return (PFN_vkVoidFunction)vkmock_CmdSetRepresentativeFragmentTestEnableNV;
    }
    if (strcmp(pName, "vkCmdSetCoverageReductionModeNV") == 0) {
        return (PFN_vkVoidFunction)vkmock_CmdSetCoverageReductionModeNV;
    }
    if (strcmp(pName, "vkGetShaderModuleIdentifierEXT") == 0) {
        return (PFN_vkVoidFunction)vkmock_GetShaderModuleIdentifierEXT;
    }
    if (strcmp(pName, "vkGetShaderModuleCreateInfoIdentifierEXT") == 0) {
        return (PFN_vkVoidFunction)vkmock_GetShaderModuleCreateInfoIdentifierEXT;
    }
    if (strcmp(pName, "vkGetPhysicalDeviceOpticalFlowImageFormatsNV") == 0) {
        return (PFN_vkVoidFunction)vkmock_GetPhysicalDeviceOpticalFlowImageFormatsNV;
    }
    if (strcmp(pName, "vkCreateOpticalFlowSessionNV") == 0) {
        return (PFN_vkVoidFunction)vkmock_CreateOpticalFlowSessionNV;
    }
    if (strcmp(pName, "vkDestroyOpticalFlowSessionNV") == 0) {
        return (PFN_vkVoidFunction)vkmock_DestroyOpticalFlowSessionNV;
    }
    if (strcmp(pName, "vkBindOpticalFlowSessionImageNV") == 0) {
        return (PFN_vkVoidFunction)vkmock_BindOpticalFlowSessionImageNV;
    }
    if (strcmp(pName, "vkCmdOpticalFlowExecuteNV") == 0) {
        return (PFN_vkVoidFunction)vkmock_CmdOpticalFlowExecuteNV;
    }
    if (strcmp(pName, "vkAntiLagUpdateAMD") == 0) {
        return (PFN_vkVoidFunction)vkmock_AntiLagUpdateAMD;
    }
    if (strcmp(pName, "vkCreateShadersEXT") == 0) {
        return (PFN_vkVoidFunction)vkmock_CreateShadersEXT;
    }
    if (strcmp(pName, "vkDestroyShaderEXT") == 0) {
        return (PFN_vkVoidFunction)vkmock_DestroyShaderEXT;
    }
    if (strcmp(pName, "vkGetShaderBinaryDataEXT") == 0) {
        return (PFN_vkVoidFunction)vkmock_GetShaderBinaryDataEXT;
    }
    if (strcmp(pName, "vkCmdBindShadersEXT") == 0) {
        return (PFN_vkVoidFunction)vkmock_CmdBindShadersEXT;
    }
    if (strcmp(pName, "vkCmdSetDepthClampRangeEXT") == 0) {
        return (PFN_vkVoidFunction)vkmock_CmdSetDepthClampRangeEXT;
    }
    if (strcmp(pName, "vkGetFramebufferTilePropertiesQCOM") == 0) {
        return (PFN_vkVoidFunction)vkmock_GetFramebufferTilePropertiesQCOM;
    }
    if (strcmp(pName, "vkGetDynamicRenderingTilePropertiesQCOM") == 0) {
        return (PFN_vkVoidFunction)vkmock_GetDynamicRenderingTilePropertiesQCOM;
    }
    if (strcmp(pName, "vkGetPhysicalDeviceCooperativeVectorPropertiesNV") == 0) {
        return (PFN_vkVoidFunction)vkmock_GetPhysicalDeviceCooperativeVectorPropertiesNV;
    }
    if (strcmp(pName, "vkConvertCooperativeVectorMatrixNV") == 0) {
        return (PFN_vkVoidFunction)vkmock_ConvertCooperativeVectorMatrixNV;
    }
    if (strcmp(pName, "vkCmdConvertCooperativeVectorMatrixNV") == 0) {
        return (PFN_vkVoidFunction)vkmock_CmdConvertCooperativeVectorMatrixNV;
    }
    if (strcmp(pName, "vkSetLatencySleepModeNV") == 0) {
        return (PFN_vkVoidFunction)vkmock_SetLatencySleepModeNV;
    }
    if (strcmp(pName, "vkLatencySleepNV") == 0) {
        return (PFN_vkVoidFunction)vkmock_LatencySleepNV;
    }
    if (strcmp(pName, "vkSetLatencyMarkerNV") == 0) {
        return (PFN_vkVoidFunction)vkmock_SetLatencyMarkerNV;
    }
    if (strcmp(pName, "vkGetLatencyTimingsNV") == 0) {
        return (PFN_vkVoidFunction)vkmock_GetLatencyTimingsNV;
    }
    if (strcmp(pName, "vkQueueNotifyOutOfBandNV") == 0) {
        return (PFN_vkVoidFunction)vkmock_QueueNotifyOutOfBandNV;
    }
    if (strcmp(pName, "vkCmdSetAttachmentFeedbackLoopEnableEXT") == 0) {
        return (PFN_vkVoidFunction)vkmock_CmdSetAttachmentFeedbackLoopEnableEXT;
    }
#ifdef VK_USE_PLATFORM_SCREEN_QNX
    if (strcmp(pName, "vkGetScreenBufferPropertiesQNX") == 0) {
        return (PFN_vkVoidFunction)vkmock_GetScreenBufferPropertiesQNX;
    }
#endif  // VK_USE_PLATFORM_SCREEN_QNX
    if (strcmp(pName, "vkGetClusterAccelerationStructureBuildSizesNV") == 0) {
        return (PFN_vkVoidFunction)vkmock_GetClusterAccelerationStructureBuildSizesNV;
    }
    if (strcmp(pName, "vkCmdBuildClusterAccelerationStructureIndirectNV") == 0) {
        return (PFN_vkVoidFunction)vkmock_CmdBuildClusterAccelerationStructureIndirectNV;
    }
    if (strcmp(pName, "vkGetPartitionedAccelerationStructuresBuildSizesNV") == 0) {
        return (PFN_vkVoidFunction)vkmock_GetPartitionedAccelerationStructuresBuildSizesNV;
    }
    if (strcmp(pName, "vkCmdBuildPartitionedAccelerationStructuresNV") == 0) {
        return (PFN_vkVoidFunction)vkmock_CmdBuildPartitionedAccelerationStructuresNV;
    }
    if (strcmp(pName, "vkGetGeneratedCommandsMemoryRequirementsEXT") == 0) {
        return (PFN_vkVoidFunction)vkmock_GetGeneratedCommandsMemoryRequirementsEXT;
    }
    if (strcmp(pName, "vkCmdPreprocessGeneratedCommandsEXT") == 0) {
        return (PFN_vkVoidFunction)vkmock_CmdPreprocessGeneratedCommandsEXT;
    }
    if (strcmp(pName, "vkCmdExecuteGeneratedCommandsEXT") == 0) {
        return (PFN_vkVoidFunction)vkmock_CmdExecuteGeneratedCommandsEXT;
    }
    if (strcmp(pName, "vkCreateIndirectCommandsLayoutEXT") == 0) {
        return (PFN_vkVoidFunction)vkmock_CreateIndirectCommandsLayoutEXT;
    }
    if (strcmp(pName, "vkDestroyIndirectCommandsLayoutEXT") == 0) {
        return (PFN_vkVoidFunction)vkmock_DestroyIndirectCommandsLayoutEXT;
    }
    if (strcmp(pName, "vkCreateIndirectExecutionSetEXT") == 0) {
        return (PFN_vkVoidFunction)vkmock_CreateIndirectExecutionSetEXT;
    }
    if (strcmp(pName, "vkDestroyIndirectExecutionSetEXT") == 0) {
        return (PFN_vkVoidFunction)vkmock_DestroyIndirectExecutionSetEXT;
    }
    if (strcmp(pName, "vkUpdateIndirectExecutionSetPipelineEXT") == 0) {
        return (PFN_vkVoidFunction)vkmock_UpdateIndirectExecutionSetPipelineEXT;
    }
    if (strcmp(pName, "vkUpdateIndirectExecutionSetShaderEXT") == 0) {
        return (PFN_vkVoidFunction)vkmock_UpdateIndirectExecutionSetShaderEXT;
    }
    if (strcmp(pName, "vkGetPhysicalDeviceCooperativeMatrixFlexibleDimensionsPropertiesNV") == 0) {
        return (PFN_vkVoidFunction)vkmock_GetPhysicalDeviceCooperativeMatrixFlexibleDimensionsPropertiesNV;
    }
#ifdef VK_USE_PLATFORM_METAL_EXT
    if (strcmp(pName, "vkGetMemoryMetalHandleEXT") == 0) {
        return (PFN_vkVoidFunction)vkmock_GetMemoryMetalHandleEXT;
    }
    if (strcmp(pName, "vkGetMemoryMetalHandlePropertiesEXT") == 0) {
        return (PFN_vkVoidFunction)vkmock_GetMemoryMetalHandlePropertiesEXT;
    }
#endif  // VK_USE_PLATFORM_METAL_EXT
    if (strcmp(pName, "vkCreateAccelerationStructureKHR") == 0) {
        return (PFN_vkVoidFunction)vkmock_CreateAccelerationStructureKHR;
    }
    if (strcmp(pName, "vkDestroyAccelerationStructureKHR") == 0) {
        return (PFN_vkVoidFunction)vkmock_DestroyAccelerationStructureKHR;
    }
    if (strcmp(pName, "vkCmdBuildAccelerationStructuresKHR") == 0) {
        return (PFN_vkVoidFunction)vkmock_CmdBuildAccelerationStructuresKHR;
    }
    if (strcmp(pName, "vkCmdBuildAccelerationStructuresIndirectKHR") == 0) {
        return (PFN_vkVoidFunction)vkmock_CmdBuildAccelerationStructuresIndirectKHR;
    }
    if (strcmp(pName, "vkBuildAccelerationStructuresKHR") == 0) {
        return (PFN_vkVoidFunction)vkmock_BuildAccelerationStructuresKHR;
    }
    if (strcmp(pName, "vkCopyAccelerationStructureKHR") == 0) {
        return (PFN_vkVoidFunction)vkmock_CopyAccelerationStructureKHR;
    }
    if (strcmp(pName, "vkCopyAccelerationStructureToMemoryKHR") == 0) {
        return (PFN_vkVoidFunction)vkmock_CopyAccelerationStructureToMemoryKHR;
    }
    if (strcmp(pName, "vkCopyMemoryToAccelerationStructureKHR") == 0) {
        return (PFN_vkVoidFunction)vkmock_CopyMemoryToAccelerationStructureKHR;
    }
    if (strcmp(pName, "vkWriteAccelerationStructuresPropertiesKHR") == 0) {
        return (PFN_vkVoidFunction)vkmock_WriteAccelerationStructuresPropertiesKHR;
    }
    if (strcmp(pName, "vkCmdCopyAccelerationStructureKHR") == 0) {
        return (PFN_vkVoidFunction)vkmock_CmdCopyAccelerationStructureKHR;
    }
    if (strcmp(pName, "vkCmdCopyAccelerationStructureToMemoryKHR") == 0) {
        return (PFN_vkVoidFunction)vkmock_CmdCopyAccelerationStructureToMemoryKHR;
    }
    if (strcmp(pName, "vkCmdCopyMemoryToAccelerationStructureKHR") == 0) {
        return (PFN_vkVoidFunction)vkmock_CmdCopyMemoryToAccelerationStructureKHR;
    }
    if (strcmp(pName, "vkGetAccelerationStructureDeviceAddressKHR") == 0) {
        return (PFN_vkVoidFunction)vkmock_GetAccelerationStructureDeviceAddressKHR;
    }
    if (strcmp(pName, "vkCmdWriteAccelerationStructuresPropertiesKHR") == 0) {
        return (PFN_vkVoidFunction)vkmock_CmdWriteAccelerationStructuresPropertiesKHR;
    }
    if (strcmp(pName, "vkGetDeviceAccelerationStructureCompatibilityKHR") == 0) {
        return (PFN_vkVoidFunction)vkmock_GetDeviceAccelerationStructureCompatibilityKHR;
    }
    if (strcmp(pName, "vkGetAccelerationStructureBuildSizesKHR") == 0) {
        return (PFN_vkVoidFunction)vkmock_GetAccelerationStructureBuildSizesKHR;
    }
    if (strcmp(pName, "vkCmdTraceRaysKHR") == 0) {
        return (PFN_vkVoidFunction)vkmock_CmdTraceRaysKHR;
    }
    if (strcmp(pName, "vkCreateRayTracingPipelinesKHR") == 0) {
        return (PFN_vkVoidFunction)vkmock_CreateRayTracingPipelinesKHR;
    }
    if (strcmp(pName, "vkGetRayTracingCaptureReplayShaderGroupHandlesKHR") == 0) {
        return (PFN_vkVoidFunction)vkmock_GetRayTracingCaptureReplayShaderGroupHandlesKHR;
    }
    if (strcmp(pName, "vkCmdTraceRaysIndirectKHR") == 0) {
        return (PFN_vkVoidFunction)vkmock_CmdTraceRaysIndirectKHR;
    }
    if (strcmp(pName, "vkGetRayTracingShaderGroupStackSizeKHR") == 0) {
        return (PFN_vkVoidFunction)vkmock_GetRayTracingShaderGroupStackSizeKHR;
    }
    if (strcmp(pName, "vkCmdSetRayTracingPipelineStackSizeKHR") == 0) {
        return (PFN_vkVoidFunction)vkmock_CmdSetRayTracingPipelineStackSizeKHR;
    }
    if (strcmp(pName, "vkCmdDrawMeshTasksEXT") == 0) {
        return (PFN_vkVoidFunction)vkmock_CmdDrawMeshTasksEXT;
    }
    if (strcmp(pName, "vkCmdDrawMeshTasksIndirectEXT") == 0) {
        return (PFN_vkVoidFunction)vkmock_CmdDrawMeshTasksIndirectEXT;
    }
    if (strcmp(pName, "vkCmdDrawMeshTasksIndirectCountEXT") == 0) {
        return (PFN_vkVoidFunction)vkmock_CmdDrawMeshTasksIndirectCountEXT;
    }
    return nullptr;
}

void vkmock::Reset() {
    CreateInstance = {};
    DestroyInstance = {};
    EnumeratePhysicalDevices = {};
    GetPhysicalDeviceFeatures = {};
    GetPhysicalDeviceFormatProperties = {};
    GetPhysicalDeviceImageFormatProperties = {};
    GetPhysicalDeviceProperties = {};
    GetPhysicalDeviceQueueFamilyProperties = {};
    GetPhysicalDeviceMemoryProperties = {};
    GetInstanceProcAddr = {};
    GetDeviceProcAddr = {};
    CreateDevice = {};
    DestroyDevice = {};
    EnumerateInstanceExtensionProperties = {};
    EnumerateDeviceExtensionProperties = {};
    EnumerateInstanceLayerProperties = {};
    EnumerateDeviceLayerProperties = {};
    GetDeviceQueue = {};
    QueueSubmit = {};
    QueueWaitIdle = {};
    DeviceWaitIdle = {};
    AllocateMemory = {};
    FreeMemory = {};
    MapMemory = {};
    UnmapMemory = {};
    FlushMappedMemoryRanges = {};
    InvalidateMappedMemoryRanges = {};
    GetDeviceMemoryCommitment = {};
    BindBufferMemory = {};
    BindImageMemory = {};
    GetBufferMemoryRequirements = {};
    GetImageMemoryRequirements = {};
    GetImageSparseMemoryRequirements = {};
    GetPhysicalDeviceSparseImageFormatProperties = {};
    QueueBindSparse = {};
    CreateFence = {};
    DestroyFence = {};
    ResetFences = {};
    GetFenceStatus = {};
    WaitForFences = {};
    CreateSemaphore = {};
    DestroySemaphore = {};
    CreateEvent = {};
    DestroyEvent = {};
    GetEventStatus = {};
    SetEvent = {};
    ResetEvent = {};
    CreateQueryPool = {};
    DestroyQueryPool = {};
    GetQueryPoolResults = {};
    CreateBuffer = {};
    DestroyBuffer = {};
    CreateBufferView = {};
    DestroyBufferView = {};
    CreateImage = {};
    DestroyImage = {};
    GetImageSubresourceLayout = {};
    CreateImageView = {};
    DestroyImageView = {};
    CreateShaderModule = {};
    DestroyShaderModule = {};
    CreatePipelineCache = {};
    DestroyPipelineCache = {};
    GetPipelineCacheData = {};
    MergePipelineCaches = {};
    CreateGraphicsPipelines = {};
    CreateComputePipelines = {};
    DestroyPipeline = {};
    CreatePipelineLayout = {};
    DestroyPipelineLayout = {};
    CreateSampler = {};
    DestroySampler = {};
    CreateDescriptorSetLayout = {};
    DestroyDescriptorSetLayout = {};
    CreateDescriptorPool = {};
    DestroyDescriptorPool = {};
    ResetDescriptorPool = {};
    AllocateDescriptorSets = {};
    FreeDescriptorSets = {};
    UpdateDescriptorSets = {};
    CreateFramebuffer = {};
    DestroyFramebuffer = {};
    CreateRenderPass = {};
    DestroyRenderPass = {};
    GetRenderAreaGranularity = {};
    CreateCommandPool = {};
    DestroyCommandPool = {};
    ResetCommandPool = {};
    AllocateCommandBuffers = {};
    FreeCommandBuffers = {};
    BeginCommandBuffer = {};
    EndCommandBuffer = {};
    ResetCommandBuffer = {};
    CmdBindPipeline = {};
    CmdSetViewport = {};
    CmdSetScissor = {};
    CmdSetLineWidth = {};
    CmdSetDepthBias = {};
    CmdSetBlendConstants = {};
    CmdSetDepthBounds = {};
    CmdSetStencilCompareMask = {};
    CmdSetStencilWriteMask = {};
    CmdSetStencilReference = {};
    CmdBindDescriptorSets = {};
    CmdBindIndexBuffer = {};
    CmdBindVertexBuffers = {};
    CmdDraw = {};
    CmdDrawIndexed = {};
    CmdDrawIndirect = {};
    CmdDrawIndexedIndirect = {};
    CmdDispatch = {};
    CmdDispatchIndirect = {};
    CmdCopyBuffer = {};
    CmdCopyImage = {};
    CmdBlitImage = {};
    CmdCopyBufferToImage = {};
    CmdCopyImageToBuffer = {};
    CmdUpdateBuffer = {};
    CmdFillBuffer = {};
    CmdClearColorImage = {};
    CmdClearDepthStencilImage = {};
    CmdClearAttachments = {};
    CmdResolveImage = {};
    CmdSetEvent = {};
    CmdResetEvent = {};
    CmdWaitEvents = {};
    CmdPipelineBarrier = {};
    CmdBeginQuery = {};
    CmdEndQuery = {};
    CmdResetQueryPool = {};
    CmdWriteTimestamp = {};
    CmdCopyQueryPoolResults = {};
    CmdPushConstants = {};
    CmdBeginRenderPass = {};
    CmdNextSubpass = {};
    CmdEndRenderPass = {};
    CmdExecuteCommands = {};
    EnumerateInstanceVersion = {};
    BindBufferMemory2 = {};
    BindImageMemory2 = {};
    GetDeviceGroupPeerMemoryFeatures = {};
    CmdSetDeviceMask = {};
    CmdDispatchBase = {};
    EnumeratePhysicalDeviceGroups = {};
    GetImageMemoryRequirements2 = {};
    GetBufferMemoryRequirements2 = {};
    GetImageSparseMemoryRequirements2 = {};
    GetPhysicalDeviceFeatures2 = {};
    GetPhysicalDeviceProperties2 = {};
    GetPhysicalDeviceFormatProperties2 = {};
    GetPhysicalDeviceImageFormatProperties2 = {};
    GetPhysicalDeviceQueueFamilyProperties2 = {};
    GetPhysicalDeviceMemoryProperties2 = {};
    GetPhysicalDeviceSparseImageFormatProperties2 = {};
    TrimCommandPool = {};
    GetDeviceQueue2 = {};
    CreateSamplerYcbcrConversion = {};
    DestroySamplerYcbcrConversion = {};
    CreateDescriptorUpdateTemplate = {};
    DestroyDescriptorUpdateTemplate = {};
    UpdateDescriptorSetWithTemplate = {};
    GetPhysicalDeviceExternalBufferProperties = {};
    GetPhysicalDeviceExternalFenceProperties = {};
    GetPhysicalDeviceExternalSemaphoreProperties = {};
    GetDescriptorSetLayoutSupport = {};
    CmdDrawIndirectCount = {};
    CmdDrawIndexedIndirectCount = {};
    CreateRenderPass2 = {};
    CmdBeginRenderPass2 = {};
    CmdNextSubpass2 = {};
    CmdEndRenderPass2 = {};
    ResetQueryPool = {};
    GetSemaphoreCounterValue = {};
    WaitSemaphores = {};
    SignalSemaphore = {};
    GetBufferDeviceAddress = {};
    GetBufferOpaqueCaptureAddress = {};
    GetDeviceMemoryOpaqueCaptureAddress = {};
    GetPhysicalDeviceToolProperties = {};
    CreatePrivateDataSlot = {};
    DestroyPrivateDataSlot = {};
    SetPrivateData = {};
    GetPrivateData = {};
    CmdSetEvent2 = {};
    CmdResetEvent2 = {};
    CmdWaitEvents2 = {};
    CmdPipelineBarrier2 = {};
    CmdWriteTimestamp2 = {};
    QueueSubmit2 = {};
    CmdCopyBuffer2 = {};
    CmdCopyImage2 = {};
    CmdCopyBufferToImage2 = {};
    CmdCopyImageToBuffer2 = {};
    CmdBlitImage2 = {};
    CmdResolveImage2 = {};
    CmdBeginRendering = {};
    CmdEndRendering = {};
    CmdSetCullMode = {};
    CmdSetFrontFace = {};
    CmdSetPrimitiveTopology = {};
    CmdSetViewportWithCount = {};
    CmdSetScissorWithCount = {};
    CmdBindVertexBuffers2 = {};
    CmdSetDepthTestEnable = {};
    CmdSetDepthWriteEnable = {};
    CmdSetDepthCompareOp = {};
    CmdSetDepthBoundsTestEnable = {};
    CmdSetStencilTestEnable = {};
    CmdSetStencilOp = {};
    CmdSetRasterizerDiscardEnable = {};
    CmdSetDepthBiasEnable = {};
    CmdSetPrimitiveRestartEnable = {};
    GetDeviceBufferMemoryRequirements = {};
    GetDeviceImageMemoryRequirements = {};
    GetDeviceImageSparseMemoryRequirements = {};
    CmdSetLineStipple = {};
    MapMemory2 = {};
    UnmapMemory2 = {};
    CmdBindIndexBuffer2 = {};
    GetRenderingAreaGranularity = {};
    GetDeviceImageSubresourceLayout = {};
    GetImageSubresourceLayout2 = {};
    CmdPushDescriptorSet = {};
    CmdPushDescriptorSetWithTemplate = {};
    CmdSetRenderingAttachmentLocations = {};
    CmdSetRenderingInputAttachmentIndices = {};
    CmdBindDescriptorSets2 = {};
    CmdPushConstants2 = {};
    CmdPushDescriptorSet2 = {};
    CmdPushDescriptorSetWithTemplate2 = {};
    CopyMemoryToImage = {};
    CopyImageToMemory = {};
    CopyImageToImage = {};
    TransitionImageLayout = {};
    DestroySurfaceKHR = {};
    GetPhysicalDeviceSurfaceSupportKHR = {};
    GetPhysicalDeviceSurfaceCapabilitiesKHR = {};
    GetPhysicalDeviceSurfaceFormatsKHR = {};
    GetPhysicalDeviceSurfacePresentModesKHR = {};
    CreateSwapchainKHR = {};
    DestroySwapchainKHR = {};
    GetSwapchainImagesKHR = {};
    AcquireNextImageKHR = {};
    QueuePresentKHR = {};
    GetDeviceGroupPresentCapabilitiesKHR = {};
    GetDeviceGroupSurfacePresentModesKHR = {};
    GetPhysicalDevicePresentRectanglesKHR = {};
    AcquireNextImage2KHR = {};
    GetPhysicalDeviceDisplayPropertiesKHR = {};
    GetPhysicalDeviceDisplayPlanePropertiesKHR = {};
    GetDisplayPlaneSupportedDisplaysKHR = {};
    GetDisplayModePropertiesKHR = {};
    CreateDisplayModeKHR = {};
    GetDisplayPlaneCapabilitiesKHR = {};
    CreateDisplayPlaneSurfaceKHR = {};
    CreateSharedSwapchainsKHR = {};
#ifdef VK_USE_PLATFORM_XLIB_KHR
    CreateXlibSurfaceKHR = {};
    GetPhysicalDeviceXlibPresentationSupportKHR = {};
#endif  // VK_USE_PLATFORM_XLIB_KHR
#ifdef VK_USE_PLATFORM_XCB_KHR
    CreateXcbSurfaceKHR = {};
    GetPhysicalDeviceXcbPresentationSupportKHR = {};
#endif  // VK_USE_PLATFORM_XCB_KHR
#ifdef VK_USE_PLATFORM_WAYLAND_KHR
    CreateWaylandSurfaceKHR = {};
    GetPhysicalDeviceWaylandPresentationSupportKHR = {};
#endif  // VK_USE_PLATFORM_WAYLAND_KHR
#ifdef VK_USE_PLATFORM_ANDROID_KHR
    CreateAndroidSurfaceKHR = {};
#endif  // VK_USE_PLATFORM_ANDROID_KHR
#ifdef VK_USE_PLATFORM_WIN32_KHR
    CreateWin32SurfaceKHR = {};
    GetPhysicalDeviceWin32PresentationSupportKHR = {};
#endif  // VK_USE_PLATFORM_WIN32_KHR
    GetPhysicalDeviceVideoCapabilitiesKHR = {};
    GetPhysicalDeviceVideoFormatPropertiesKHR = {};
    CreateVideoSessionKHR = {};
    DestroyVideoSessionKHR = {};
    GetVideoSessionMemoryRequirementsKHR = {};
    BindVideoSessionMemoryKHR = {};
    CreateVideoSessionParametersKHR = {};
    UpdateVideoSessionParametersKHR = {};
    DestroyVideoSessionParametersKHR = {};
    CmdBeginVideoCodingKHR = {};
    CmdEndVideoCodingKHR = {};
    CmdControlVideoCodingKHR = {};
    CmdDecodeVideoKHR = {};
    CmdBeginRenderingKHR = {};
    CmdEndRenderingKHR = {};
    GetPhysicalDeviceFeatures2KHR = {};
    GetPhysicalDeviceProperties2KHR = {};
    GetPhysicalDeviceFormatProperties2KHR = {};
    GetPhysicalDeviceImageFormatProperties2KHR = {};
    GetPhysicalDeviceQueueFamilyProperties2KHR = {};
    GetPhysicalDeviceMemoryProperties2KHR = {};
    GetPhysicalDeviceSparseImageFormatProperties2KHR = {};
    GetDeviceGroupPeerMemoryFeaturesKHR = {};
    CmdSetDeviceMaskKHR = {};
    CmdDispatchBaseKHR = {};
    TrimCommandPoolKHR = {};
    EnumeratePhysicalDeviceGroupsKHR = {};
    GetPhysicalDeviceExternalBufferPropertiesKHR = {};
#ifdef VK_USE_PLATFORM_WIN32_KHR
    GetMemoryWin32HandleKHR = {};
    GetMemoryWin32HandlePropertiesKHR = {};
#endif  // VK_USE_PLATFORM_WIN32_KHR
    GetMemoryFdKHR = {};
    GetMemoryFdPropertiesKHR = {};
    GetPhysicalDeviceExternalSemaphorePropertiesKHR = {};
#ifdef VK_USE_PLATFORM_WIN32_KHR
    ImportSemaphoreWin32HandleKHR = {};
    GetSemaphoreWin32HandleKHR = {};
#endif  // VK_USE_PLATFORM_WIN32_KHR
    ImportSemaphoreFdKHR = {};
    GetSemaphoreFdKHR = {};
    CmdPushDescriptorSetKHR = {};
    CmdPushDescriptorSetWithTemplateKHR = {};
    CreateDescriptorUpdateTemplateKHR = {};
    DestroyDescriptorUpdateTemplateKHR = {};
    UpdateDescriptorSetWithTemplateKHR = {};
    CreateRenderPass2KHR = {};
    CmdBeginRenderPass2KHR = {};
    CmdNextSubpass2KHR = {};
    CmdEndRenderPass2KHR = {};
    GetSwapchainStatusKHR = {};
    GetPhysicalDeviceExternalFencePropertiesKHR = {};
#ifdef VK_USE_PLATFORM_WIN32_KHR
    ImportFenceWin32HandleKHR = {};
    GetFenceWin32HandleKHR = {};
#endif  // VK_USE_PLATFORM_WIN32_KHR
    ImportFenceFdKHR = {};
    GetFenceFdKHR = {};
    EnumeratePhysicalDeviceQueueFamilyPerformanceQueryCountersKHR = {};
    GetPhysicalDeviceQueueFamilyPerformanceQueryPassesKHR = {};
    AcquireProfilingLockKHR = {};
    ReleaseProfilingLockKHR = {};
    GetPhysicalDeviceSurfaceCapabilities2KHR = {};
    GetPhysicalDeviceSurfaceFormats2KHR = {};
    GetPhysicalDeviceDisplayProperties2KHR = {};
    GetPhysicalDeviceDisplayPlaneProperties2KHR = {};
    GetDisplayModeProperties2KHR = {};
    GetDisplayPlaneCapabilities2KHR = {};
    GetImageMemoryRequirements2KHR = {};
    GetBufferMemoryRequirements2KHR = {};
    GetImageSparseMemoryRequirements2KHR = {};
    CreateSamplerYcbcrConversionKHR = {};
    DestroySamplerYcbcrConversionKHR = {};
    BindBufferMemory2KHR = {};
    BindImageMemory2KHR = {};
    GetDescriptorSetLayoutSupportKHR = {};
    CmdDrawIndirectCountKHR = {};
    CmdDrawIndexedIndirectCountKHR = {};
    GetSemaphoreCounterValueKHR = {};
    WaitSemaphoresKHR = {};
    SignalSemaphoreKHR = {};
    GetPhysicalDeviceFragmentShadingRatesKHR = {};
    CmdSetFragmentShadingRateKHR = {};
    CmdSetRenderingAttachmentLocationsKHR = {};
    CmdSetRenderingInputAttachmentIndicesKHR = {};
    WaitForPresentKHR = {};
    GetBufferDeviceAddressKHR = {};
    GetBufferOpaqueCaptureAddressKHR = {};
    GetDeviceMemoryOpaqueCaptureAddressKHR = {};
    CreateDeferredOperationKHR = {};
    DestroyDeferredOperationKHR = {};
    GetDeferredOperationMaxConcurrencyKHR = {};
    GetDeferredOperationResultKHR = {};
    DeferredOperationJoinKHR = {};
    GetPipelineExecutablePropertiesKHR = {};
    GetPipelineExecutableStatisticsKHR = {};
    GetPipelineExecutableInternalRepresentationsKHR = {};
    MapMemory2KHR = {};
    UnmapMemory2KHR = {};
    GetPhysicalDeviceVideoEncodeQualityLevelPropertiesKHR = {};
    GetEncodedVideoSessionParametersKHR = {};
    CmdEncodeVideoKHR = {};
    CmdSetEvent2KHR = {};
    CmdResetEvent2KHR = {};
    CmdWaitEvents2KHR = {};
    CmdPipelineBarrier2KHR = {};
    CmdWriteTimestamp2KHR = {};
    QueueSubmit2KHR = {};
    CmdCopyBuffer2KHR = {};
    CmdCopyImage2KHR = {};
    CmdCopyBufferToImage2KHR = {};
    CmdCopyImageToBuffer2KHR = {};
    CmdBlitImage2KHR = {};
    CmdResolveImage2KHR = {};
    CmdTraceRaysIndirect2KHR = {};
    GetDeviceBufferMemoryRequirementsKHR = {};
    GetDeviceImageMemoryRequirementsKHR = {};
    GetDeviceImageSparseMemoryRequirementsKHR = {};
    CmdBindIndexBuffer2KHR = {};
    GetRenderingAreaGranularityKHR = {};
    GetDeviceImageSubresourceLayoutKHR = {};
    GetImageSubresourceLayout2KHR = {};
    CreatePipelineBinariesKHR = {};
    DestroyPipelineBinaryKHR = {};
    GetPipelineKeyKHR = {};
    GetPipelineBinaryDataKHR = {};
    ReleaseCapturedPipelineDataKHR = {};
    GetPhysicalDeviceCooperativeMatrixPropertiesKHR = {};
    CmdSetLineStippleKHR = {};
    GetPhysicalDeviceCalibrateableTimeDomainsKHR = {};
    GetCalibratedTimestampsKHR = {};
    CmdBindDescriptorSets2KHR = {};
    CmdPushConstants2KHR = {};
    CmdPushDescriptorSet2KHR = {};
    CmdPushDescriptorSetWithTemplate2KHR = {};
    CmdSetDescriptorBufferOffsets2EXT = {};
    CmdBindDescriptorBufferEmbeddedSamplers2EXT = {};
    CreateDebugReportCallbackEXT = {};
    DestroyDebugReportCallbackEXT = {};
    DebugReportMessageEXT = {};
    DebugMarkerSetObjectTagEXT = {};
    DebugMarkerSetObjectNameEXT = {};
    CmdDebugMarkerBeginEXT = {};
    CmdDebugMarkerEndEXT = {};
    CmdDebugMarkerInsertEXT = {};
    CmdBindTransformFeedbackBuffersEXT = {};
    CmdBeginTransformFeedbackEXT = {};
    CmdEndTransformFeedbackEXT = {};
    CmdBeginQueryIndexedEXT = {};
    CmdEndQueryIndexedEXT = {};
    CmdDrawIndirectByteCountEXT = {};
    CreateCuModuleNVX = {};
    CreateCuFunctionNVX = {};
    DestroyCuModuleNVX = {};
    DestroyCuFunctionNVX = {};
    CmdCuLaunchKernelNVX = {};
    GetImageViewHandleNVX = {};
    GetImageViewHandle64NVX = {};
    GetImageViewAddressNVX = {};
    CmdDrawIndirectCountAMD = {};
    CmdDrawIndexedIndirectCountAMD = {};
    GetShaderInfoAMD = {};
#ifdef VK_USE_PLATFORM_GGP
    CreateStreamDescriptorSurfaceGGP = {};
#endif  // VK_USE_PLATFORM_GGP
    GetPhysicalDeviceExternalImageFormatPropertiesNV = {};
#ifdef VK_USE_PLATFORM_WIN32_KHR
    GetMemoryWin32HandleNV = {};
#endif  // VK_USE_PLATFORM_WIN32_KHR
#ifdef VK_USE_PLATFORM_VI_NN
    CreateViSurfaceNN = {};
#endif  // VK_USE_PLATFORM_VI_NN
    CmdBeginConditionalRenderingEXT = {};
    CmdEndConditionalRenderingEXT = {};
    CmdSetViewportWScalingNV = {};
    ReleaseDisplayEXT = {};
#ifdef VK_USE_PLATFORM_XLIB_XRANDR_EXT
    AcquireXlibDisplayEXT = {};
    GetRandROutputDisplayEXT = {};
#endif  // VK_USE_PLATFORM_XLIB_XRANDR_EXT
    GetPhysicalDeviceSurfaceCapabilities2EXT = {};
    DisplayPowerControlEXT = {};
    RegisterDeviceEventEXT = {};
    RegisterDisplayEventEXT = {};
    GetSwapchainCounterEXT = {};
    GetRefreshCycleDurationGOOGLE = {};
    GetPastPresentationTimingGOOGLE = {};
    CmdSetDiscardRectangleEXT = {};
    CmdSetDiscardRectangleEnableEXT = {};
    CmdSetDiscardRectangleModeEXT = {};
    SetHdrMetadataEXT = {};
#ifdef VK_USE_PLATFORM_IOS_MVK
    CreateIOSSurfaceMVK = {};
#endif  // VK_USE_PLATFORM_IOS_MVK
#ifdef VK_USE_PLATFORM_MACOS_MVK
    CreateMacOSSurfaceMVK = {};
#endif  // VK_USE_PLATFORM_MACOS_MVK
    SetDebugUtilsObjectNameEXT = {};
    SetDebugUtilsObjectTagEXT = {};
    QueueBeginDebugUtilsLabelEXT = {};
    QueueEndDebugUtilsLabelEXT = {};
    QueueInsertDebugUtilsLabelEXT = {};
    CmdBeginDebugUtilsLabelEXT = {};
    CmdEndDebugUtilsLabelEXT = {};
    CmdInsertDebugUtilsLabelEXT = {};
    CreateDebugUtilsMessengerEXT = {};
    DestroyDebugUtilsMessengerEXT = {};
    SubmitDebugUtilsMessageEXT = {};
#ifdef VK_USE_PLATFORM_ANDROID_KHR
    GetAndroidHardwareBufferPropertiesANDROID = {};
    GetMemoryAndroidHardwareBufferANDROID = {};
#endif  // VK_USE_PLATFORM_ANDROID_KHR
#ifdef VK_ENABLE_BETA_EXTENSIONS
    CreateExecutionGraphPipelinesAMDX = {};
    GetExecutionGraphPipelineScratchSizeAMDX = {};
    GetExecutionGraphPipelineNodeIndexAMDX = {};
    CmdInitializeGraphScratchMemoryAMDX = {};
    CmdDispatchGraphAMDX = {};
    CmdDispatchGraphIndirectAMDX = {};
    CmdDispatchGraphIndirectCountAMDX = {};
#endif  // VK_ENABLE_BETA_EXTENSIONS
    CmdSetSampleLocationsEXT = {};
    GetPhysicalDeviceMultisamplePropertiesEXT = {};
    GetImageDrmFormatModifierPropertiesEXT = {};
    CreateValidationCacheEXT = {};
    DestroyValidationCacheEXT = {};
    MergeValidationCachesEXT = {};
    GetValidationCacheDataEXT = {};
    CmdBindShadingRateImageNV = {};
    CmdSetViewportShadingRatePaletteNV = {};
    CmdSetCoarseSampleOrderNV = {};
    CreateAccelerationStructureNV = {};
    DestroyAccelerationStructureNV = {};
    GetAccelerationStructureMemoryRequirementsNV = {};
    BindAccelerationStructureMemoryNV = {};
    CmdBuildAccelerationStructureNV = {};
    CmdCopyAccelerationStructureNV = {};
    CmdTraceRaysNV = {};
    CreateRayTracingPipelinesNV = {};
    GetRayTracingShaderGroupHandlesKHR = {};
    GetRayTracingShaderGroupHandlesNV = {};
    GetAccelerationStructureHandleNV = {};
    CmdWriteAccelerationStructuresPropertiesNV = {};
    CompileDeferredNV = {};
    GetMemoryHostPointerPropertiesEXT = {};
    CmdWriteBufferMarkerAMD = {};
    CmdWriteBufferMarker2AMD = {};
    GetPhysicalDeviceCalibrateableTimeDomainsEXT = {};
    GetCalibratedTimestampsEXT = {};
    CmdDrawMeshTasksNV = {};
    CmdDrawMeshTasksIndirectNV = {};
    CmdDrawMeshTasksIndirectCountNV = {};
    CmdSetExclusiveScissorEnableNV = {};
    CmdSetExclusiveScissorNV = {};
    CmdSetCheckpointNV = {};
    GetQueueCheckpointDataNV = {};
    GetQueueCheckpointData2NV = {};
    InitializePerformanceApiINTEL = {};
    UninitializePerformanceApiINTEL = {};
    CmdSetPerformanceMarkerINTEL = {};
    CmdSetPerformanceStreamMarkerINTEL = {};
    CmdSetPerformanceOverrideINTEL = {};
    AcquirePerformanceConfigurationINTEL = {};
    ReleasePerformanceConfigurationINTEL = {};
    QueueSetPerformanceConfigurationINTEL = {};
    GetPerformanceParameterINTEL = {};
    SetLocalDimmingAMD = {};
#ifdef VK_USE_PLATFORM_FUCHSIA
    CreateImagePipeSurfaceFUCHSIA = {};
#endif  // VK_USE_PLATFORM_FUCHSIA
#ifdef VK_USE_PLATFORM_METAL_EXT
    CreateMetalSurfaceEXT = {};
#endif  // VK_USE_PLATFORM_METAL_EXT
    GetBufferDeviceAddressEXT = {};
    GetPhysicalDeviceToolPropertiesEXT = {};
    GetPhysicalDeviceCooperativeMatrixPropertiesNV = {};
    GetPhysicalDeviceSupportedFramebufferMixedSamplesCombinationsNV = {};
#ifdef VK_USE_PLATFORM_WIN32_KHR
    GetPhysicalDeviceSurfacePresentModes2EXT = {};
    AcquireFullScreenExclusiveModeEXT = {};
    ReleaseFullScreenExclusiveModeEXT = {};
    GetDeviceGroupSurfacePresentModes2EXT = {};
#endif  // VK_USE_PLATFORM_WIN32_KHR
    CreateHeadlessSurfaceEXT = {};
    CmdSetLineStippleEXT = {};
    ResetQueryPoolEXT = {};
    CmdSetCullModeEXT = {};
    CmdSetFrontFaceEXT = {};
    CmdSetPrimitiveTopologyEXT = {};
    CmdSetViewportWithCountEXT = {};
    CmdSetScissorWithCountEXT = {};
    CmdBindVertexBuffers2EXT = {};
    CmdSetDepthTestEnableEXT = {};
    CmdSetDepthWriteEnableEXT = {};
    CmdSetDepthCompareOpEXT = {};
    CmdSetDepthBoundsTestEnableEXT = {};
    CmdSetStencilTestEnableEXT = {};
    CmdSetStencilOpEXT = {};
    CopyMemoryToImageEXT = {};
    CopyImageToMemoryEXT = {};
    CopyImageToImageEXT = {};
    TransitionImageLayoutEXT = {};
    GetImageSubresourceLayout2EXT = {};
    ReleaseSwapchainImagesEXT = {};
    GetGeneratedCommandsMemoryRequirementsNV = {};
    CmdPreprocessGeneratedCommandsNV = {};
    CmdExecuteGeneratedCommandsNV = {};
    CmdBindPipelineShaderGroupNV = {};
    CreateIndirectCommandsLayoutNV = {};
    DestroyIndirectCommandsLayoutNV = {};
    CmdSetDepthBias2EXT = {};
    AcquireDrmDisplayEXT = {};
    GetDrmDisplayEXT = {};
    CreatePrivateDataSlotEXT = {};
    DestroyPrivateDataSlotEXT = {};
    SetPrivateDataEXT = {};
    GetPrivateDataEXT = {};
#ifdef VK_ENABLE_BETA_EXTENSIONS
    CreateCudaModuleNV = {};
    GetCudaModuleCacheNV = {};
    CreateCudaFunctionNV = {};
    DestroyCudaModuleNV = {};
    DestroyCudaFunctionNV = {};
    CmdCudaLaunchKernelNV = {};
#endif  // VK_ENABLE_BETA_EXTENSIONS
#ifdef VK_USE_PLATFORM_METAL_EXT
    ExportMetalObjectsEXT = {};
#endif  // VK_USE_PLATFORM_METAL_EXT
    GetDescriptorSetLayoutSizeEXT = {};
    GetDescriptorSetLayoutBindingOffsetEXT = {};
    GetDescriptorEXT = {};
    CmdBindDescriptorBuffersEXT = {};
    CmdSetDescriptorBufferOffsetsEXT = {};
    CmdBindDescriptorBufferEmbeddedSamplersEXT = {};
    GetBufferOpaqueCaptureDescriptorDataEXT = {};
    GetImageOpaqueCaptureDescriptorDataEXT = {};
    GetImageViewOpaqueCaptureDescriptorDataEXT = {};
    GetSamplerOpaqueCaptureDescriptorDataEXT = {};
    GetAccelerationStructureOpaqueCaptureDescriptorDataEXT = {};
    CmdSetFragmentShadingRateEnumNV = {};
    GetDeviceFaultInfoEXT = {};
#ifdef VK_USE_PLATFORM_WIN32_KHR
    AcquireWinrtDisplayNV = {};
    GetWinrtDisplayNV = {};
#endif  // VK_USE_PLATFORM_WIN32_KHR
#ifdef VK_USE_PLATFORM_DIRECTFB_EXT
    CreateDirectFBSurfaceEXT = {};
    GetPhysicalDeviceDirectFBPresentationSupportEXT = {};
#endif  // VK_USE_PLATFORM_DIRECTFB_EXT
    CmdSetVertexInputEXT = {};
#ifdef VK_USE_PLATFORM_FUCHSIA
    GetMemoryZirconHandleFUCHSIA = {};
    GetMemoryZirconHandlePropertiesFUCHSIA = {};
    ImportSemaphoreZirconHandleFUCHSIA = {};
    GetSemaphoreZirconHandleFUCHSIA = {};
    CreateBufferCollectionFUCHSIA = {};
    SetBufferCollectionImageConstraintsFUCHSIA = {};
    SetBufferCollectionBufferConstraintsFUCHSIA = {};
    DestroyBufferCollectionFUCHSIA = {};
    GetBufferCollectionPropertiesFUCHSIA = {};
#endif  // VK_USE_PLATFORM_FUCHSIA
    GetDeviceSubpassShadingMaxWorkgroupSizeHUAWEI = {};
    CmdSubpassShadingHUAWEI = {};
    CmdBindInvocationMaskHUAWEI = {};
    GetMemoryRemoteAddressNV = {};
    GetPipelinePropertiesEXT = {};
    CmdSetPatchControlPointsEXT = {};
    CmdSetRasterizerDiscardEnableEXT = {};
    CmdSetDepthBiasEnableEXT = {};
    CmdSetLogicOpEXT = {};
    CmdSetPrimitiveRestartEnableEXT = {};
#ifdef VK_USE_PLATFORM_SCREEN_QNX
    CreateScreenSurfaceQNX = {};
    GetPhysicalDeviceScreenPresentationSupportQNX = {};
#endif  // VK_USE_PLATFORM_SCREEN_QNX
    CmdSetColorWriteEnableEXT = {};
    CmdDrawMultiEXT = {};
    CmdDrawMultiIndexedEXT = {};
    CreateMicromapEXT = {};
    DestroyMicromapEXT = {};
    CmdBuildMicromapsEXT = {};
    BuildMicromapsEXT = {};
    CopyMicromapEXT = {};
    CopyMicromapToMemoryEXT = {};
    CopyMemoryToMicromapEXT = {};
    WriteMicromapsPropertiesEXT = {};
    CmdCopyMicromapEXT = {};
    CmdCopyMicromapToMemoryEXT = {};
    CmdCopyMemoryToMicromapEXT = {};
    CmdWriteMicromapsPropertiesEXT = {};
    GetDeviceMicromapCompatibilityEXT = {};
    GetMicromapBuildSizesEXT = {};
    CmdDrawClusterHUAWEI = {};
    CmdDrawClusterIndirectHUAWEI = {};
    SetDeviceMemoryPriorityEXT = {};
    GetDescriptorSetLayoutHostMappingInfoVALVE = {};
    GetDescriptorSetHostMappingVALVE = {};
    CmdCopyMemoryIndirectNV = {};
    CmdCopyMemoryToImageIndirectNV = {};
    CmdDecompressMemoryNV = {};
    CmdDecompressMemoryIndirectCountNV = {};
    GetPipelineIndirectMemoryRequirementsNV = {};
    CmdUpdatePipelineIndirectBufferNV = {};
    GetPipelineIndirectDeviceAddressNV = {};
    CmdSetDepthClampEnableEXT = {};
    CmdSetPolygonModeEXT = {};
    CmdSetRasterizationSamplesEXT = {};
    CmdSetSampleMaskEXT = {};
    CmdSetAlphaToCoverageEnableEXT = {};
    CmdSetAlphaToOneEnableEXT = {};
    CmdSetLogicOpEnableEXT = {};
    CmdSetColorBlendEnableEXT = {};
    CmdSetColorBlendEquationEXT = {};
    CmdSetColorWriteMaskEXT = {};
    CmdSetTessellationDomainOriginEXT = {};
    CmdSetRasterizationStreamEXT = {};
    CmdSetConservativeRasterizationModeEXT = {};
    CmdSetExtraPrimitiveOverestimationSizeEXT = {};
    CmdSetDepthClipEnableEXT = {};
    CmdSetSampleLocationsEnableEXT = {};
    CmdSetColorBlendAdvancedEXT = {};
    CmdSetProvokingVertexModeEXT = {};
    CmdSetLineRasterizationModeEXT = {};
    CmdSetLineStippleEnableEXT = {};
    CmdSetDepthClipNegativeOneToOneEXT = {};
    CmdSetViewportWScalingEnableNV = {};
    CmdSetViewportSwizzleNV = {};
    CmdSetCoverageToColorEnableNV = {};
    CmdSetCoverageToColorLocationNV = {};
    CmdSetCoverageModulationModeNV = {};
    CmdSetCoverageModulationTableEnableNV = {};
    CmdSetCoverageModulationTableNV = {};
    CmdSetShadingRateImageEnableNV = {};
    CmdSetRepresentativeFragmentTestEnableNV = {};
    CmdSetCoverageReductionModeNV = {};
    GetShaderModuleIdentifierEXT = {};
    GetShaderModuleCreateInfoIdentifierEXT = {};
    GetPhysicalDeviceOpticalFlowImageFormatsNV = {};
    CreateOpticalFlowSessionNV = {};
    DestroyOpticalFlowSessionNV = {};
    BindOpticalFlowSessionImageNV = {};
    CmdOpticalFlowExecuteNV = {};
    AntiLagUpdateAMD = {};
    CreateShadersEXT = {};
    DestroyShaderEXT = {};
    GetShaderBinaryDataEXT = {};
    CmdBindShadersEXT = {};
    CmdSetDepthClampRangeEXT = {};
    GetFramebufferTilePropertiesQCOM = {};
    GetDynamicRenderingTilePropertiesQCOM = {};
    GetPhysicalDeviceCooperativeVectorPropertiesNV = {};
    ConvertCooperativeVectorMatrixNV = {};
    CmdConvertCooperativeVectorMatrixNV = {};
    SetLatencySleepModeNV = {};
    LatencySleepNV = {};
    SetLatencyMarkerNV = {};
    GetLatencyTimingsNV = {};
    QueueNotifyOutOfBandNV = {};
    CmdSetAttachmentFeedbackLoopEnableEXT = {};
#ifdef VK_USE_PLATFORM_SCREEN_QNX
    GetScreenBufferPropertiesQNX = {};
#endif  // VK_USE_PLATFORM_SCREEN_QNX
    GetClusterAccelerationStructureBuildSizesNV = {};
    CmdBuildClusterAccelerationStructureIndirectNV = {};
    GetPartitionedAccelerationStructuresBuildSizesNV = {};
    CmdBuildPartitionedAccelerationStructuresNV = {};
    GetGeneratedCommandsMemoryRequirementsEXT = {};
    CmdPreprocessGeneratedCommandsEXT = {};
    CmdExecuteGeneratedCommandsEXT = {};
    CreateIndirectCommandsLayoutEXT = {};
    DestroyIndirectCommandsLayoutEXT = {};
    CreateIndirectExecutionSetEXT = {};
    DestroyIndirectExecutionSetEXT = {};
    UpdateIndirectExecutionSetPipelineEXT = {};
    UpdateIndirectExecutionSetShaderEXT = {};
    GetPhysicalDeviceCooperativeMatrixFlexibleDimensionsPropertiesNV = {};
#ifdef VK_USE_PLATFORM_METAL_EXT
    GetMemoryMetalHandleEXT = {};
    GetMemoryMetalHandlePropertiesEXT = {};
#endif  // VK_USE_PLATFORM_METAL_EXT
    CreateAccelerationStructureKHR = {};
    DestroyAccelerationStructureKHR = {};
    CmdBuildAccelerationStructuresKHR = {};
    CmdBuildAccelerationStructuresIndirectKHR = {};
    BuildAccelerationStructuresKHR = {};
    CopyAccelerationStructureKHR = {};
    CopyAccelerationStructureToMemoryKHR = {};
    CopyMemoryToAccelerationStructureKHR = {};
    WriteAccelerationStructuresPropertiesKHR = {};
    CmdCopyAccelerationStructureKHR = {};
    CmdCopyAccelerationStructureToMemoryKHR = {};
    CmdCopyMemoryToAccelerationStructureKHR = {};
    GetAccelerationStructureDeviceAddressKHR = {};
    CmdWriteAccelerationStructuresPropertiesKHR = {};
    GetDeviceAccelerationStructureCompatibilityKHR = {};
    GetAccelerationStructureBuildSizesKHR = {};
    CmdTraceRaysKHR = {};
    CreateRayTracingPipelinesKHR = {};
    GetRayTracingCaptureReplayShaderGroupHandlesKHR = {};
    CmdTraceRaysIndirectKHR = {};
    GetRayTracingShaderGroupStackSizeKHR = {};
    CmdSetRayTracingPipelineStackSizeKHR = {};
    CmdDrawMeshTasksEXT = {};
    CmdDrawMeshTasksIndirectEXT = {};
    CmdDrawMeshTasksIndirectCountEXT = {};
}

// NOLINTEND
