// *** THIS FILE IS GENERATED - DO NOT EDIT ***
// See vk_dispatchable_generator.py for modifications

/*
 * Copyright (c) 2024 The Khronos Group Inc.
 * Copyright (c) 2024 RasterGrid Kft.
 *
 * SPDX-License-Identifier: Apache-2.0
 */
// NOLINTBEGIN

#include "vk_device.h"
#include "vksc_output_struct_sanitizer.h"

namespace vk {

PFN_vkVoidFunction Device::GetDeviceProcAddr(const char* pName) { return dispatch_table_.GetDeviceProcAddr(handle_, pName); }
void Device::DestroyDevice(const VkAllocationCallbacks* pAllocator) { dispatch_table_.DestroyDevice(handle_, pAllocator); }
void Device::GetDeviceQueue(uint32_t queueFamilyIndex, uint32_t queueIndex, VkQueue* pQueue) {
    dispatch_table_.GetDeviceQueue(handle_, queueFamilyIndex, queueIndex, pQueue);
}
VkResult Device::DeviceWaitIdle() { return dispatch_table_.DeviceWaitIdle(handle_); }
VkResult Device::AllocateMemory(const VkMemoryAllocateInfo* pAllocateInfo, const VkAllocationCallbacks* pAllocator,
                                VkDeviceMemory* pMemory) {
    return dispatch_table_.AllocateMemory(handle_, pAllocateInfo, pAllocator, pMemory);
}
void Device::FreeMemory(VkDeviceMemory memory, const VkAllocationCallbacks* pAllocator) {
    dispatch_table_.FreeMemory(handle_, memory, pAllocator);
}
VkResult Device::MapMemory(VkDeviceMemory memory, VkDeviceSize offset, VkDeviceSize size, VkMemoryMapFlags flags, void** ppData) {
    return dispatch_table_.MapMemory(handle_, memory, offset, size, flags, ppData);
}
void Device::UnmapMemory(VkDeviceMemory memory) { dispatch_table_.UnmapMemory(handle_, memory); }
VkResult Device::FlushMappedMemoryRanges(uint32_t memoryRangeCount, const VkMappedMemoryRange* pMemoryRanges) {
    return dispatch_table_.FlushMappedMemoryRanges(handle_, memoryRangeCount, pMemoryRanges);
}
VkResult Device::InvalidateMappedMemoryRanges(uint32_t memoryRangeCount, const VkMappedMemoryRange* pMemoryRanges) {
    return dispatch_table_.InvalidateMappedMemoryRanges(handle_, memoryRangeCount, pMemoryRanges);
}
void Device::GetDeviceMemoryCommitment(VkDeviceMemory memory, VkDeviceSize* pCommittedMemoryInBytes) {
    dispatch_table_.GetDeviceMemoryCommitment(handle_, memory, pCommittedMemoryInBytes);
}
VkResult Device::BindBufferMemory(VkBuffer buffer, VkDeviceMemory memory, VkDeviceSize memoryOffset) {
    return dispatch_table_.BindBufferMemory(handle_, buffer, memory, memoryOffset);
}
VkResult Device::BindImageMemory(VkImage image, VkDeviceMemory memory, VkDeviceSize memoryOffset) {
    return dispatch_table_.BindImageMemory(handle_, image, memory, memoryOffset);
}
void Device::GetBufferMemoryRequirements(VkBuffer buffer, VkMemoryRequirements* pMemoryRequirements) {
    dispatch_table_.GetBufferMemoryRequirements(handle_, buffer, pMemoryRequirements);
    if (pMemoryRequirements != nullptr) {
        vksc::ConvertOutStructToVulkanSC<VkMemoryRequirements>(pMemoryRequirements);
    }
}
void Device::GetImageMemoryRequirements(VkImage image, VkMemoryRequirements* pMemoryRequirements) {
    dispatch_table_.GetImageMemoryRequirements(handle_, image, pMemoryRequirements);
    if (pMemoryRequirements != nullptr) {
        vksc::ConvertOutStructToVulkanSC<VkMemoryRequirements>(pMemoryRequirements);
    }
}
void Device::GetImageSparseMemoryRequirements(VkImage image, uint32_t* pSparseMemoryRequirementCount,
                                              VkSparseImageMemoryRequirements* pSparseMemoryRequirements) {
    dispatch_table_.GetImageSparseMemoryRequirements(handle_, image, pSparseMemoryRequirementCount, pSparseMemoryRequirements);
    if (pSparseMemoryRequirements != nullptr) {
        for (uint32_t i = 0; i < *pSparseMemoryRequirementCount; ++i)
            vksc::ConvertOutStructToVulkanSC<VkSparseImageMemoryRequirements>(&pSparseMemoryRequirements[i]);
    }
}
VkResult Device::CreateFence(const VkFenceCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkFence* pFence) {
    return dispatch_table_.CreateFence(handle_, pCreateInfo, pAllocator, pFence);
}
void Device::DestroyFence(VkFence fence, const VkAllocationCallbacks* pAllocator) {
    dispatch_table_.DestroyFence(handle_, fence, pAllocator);
}
VkResult Device::ResetFences(uint32_t fenceCount, const VkFence* pFences) {
    return dispatch_table_.ResetFences(handle_, fenceCount, pFences);
}
VkResult Device::GetFenceStatus(VkFence fence) { return dispatch_table_.GetFenceStatus(handle_, fence); }
VkResult Device::WaitForFences(uint32_t fenceCount, const VkFence* pFences, VkBool32 waitAll, uint64_t timeout) {
    return dispatch_table_.WaitForFences(handle_, fenceCount, pFences, waitAll, timeout);
}
VkResult Device::CreateSemaphore(const VkSemaphoreCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator,
                                 VkSemaphore* pSemaphore) {
    return dispatch_table_.CreateSemaphore(handle_, pCreateInfo, pAllocator, pSemaphore);
}
void Device::DestroySemaphore(VkSemaphore semaphore, const VkAllocationCallbacks* pAllocator) {
    dispatch_table_.DestroySemaphore(handle_, semaphore, pAllocator);
}
VkResult Device::CreateEvent(const VkEventCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkEvent* pEvent) {
    return dispatch_table_.CreateEvent(handle_, pCreateInfo, pAllocator, pEvent);
}
void Device::DestroyEvent(VkEvent event, const VkAllocationCallbacks* pAllocator) {
    dispatch_table_.DestroyEvent(handle_, event, pAllocator);
}
VkResult Device::GetEventStatus(VkEvent event) { return dispatch_table_.GetEventStatus(handle_, event); }
VkResult Device::SetEvent(VkEvent event) { return dispatch_table_.SetEvent(handle_, event); }
VkResult Device::ResetEvent(VkEvent event) { return dispatch_table_.ResetEvent(handle_, event); }
VkResult Device::CreateQueryPool(const VkQueryPoolCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator,
                                 VkQueryPool* pQueryPool) {
    return dispatch_table_.CreateQueryPool(handle_, pCreateInfo, pAllocator, pQueryPool);
}
void Device::DestroyQueryPool(VkQueryPool queryPool, const VkAllocationCallbacks* pAllocator) {
    dispatch_table_.DestroyQueryPool(handle_, queryPool, pAllocator);
}
VkResult Device::GetQueryPoolResults(VkQueryPool queryPool, uint32_t firstQuery, uint32_t queryCount, size_t dataSize, void* pData,
                                     VkDeviceSize stride, VkQueryResultFlags flags) {
    return dispatch_table_.GetQueryPoolResults(handle_, queryPool, firstQuery, queryCount, dataSize, pData, stride, flags);
}
VkResult Device::CreateBuffer(const VkBufferCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkBuffer* pBuffer) {
    return dispatch_table_.CreateBuffer(handle_, pCreateInfo, pAllocator, pBuffer);
}
void Device::DestroyBuffer(VkBuffer buffer, const VkAllocationCallbacks* pAllocator) {
    dispatch_table_.DestroyBuffer(handle_, buffer, pAllocator);
}
VkResult Device::CreateBufferView(const VkBufferViewCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator,
                                  VkBufferView* pView) {
    return dispatch_table_.CreateBufferView(handle_, pCreateInfo, pAllocator, pView);
}
void Device::DestroyBufferView(VkBufferView bufferView, const VkAllocationCallbacks* pAllocator) {
    dispatch_table_.DestroyBufferView(handle_, bufferView, pAllocator);
}
VkResult Device::CreateImage(const VkImageCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkImage* pImage) {
    return dispatch_table_.CreateImage(handle_, pCreateInfo, pAllocator, pImage);
}
void Device::DestroyImage(VkImage image, const VkAllocationCallbacks* pAllocator) {
    dispatch_table_.DestroyImage(handle_, image, pAllocator);
}
void Device::GetImageSubresourceLayout(VkImage image, const VkImageSubresource* pSubresource, VkSubresourceLayout* pLayout) {
    dispatch_table_.GetImageSubresourceLayout(handle_, image, pSubresource, pLayout);
    if (pLayout != nullptr) {
        vksc::ConvertOutStructToVulkanSC<VkSubresourceLayout>(pLayout);
    }
}
VkResult Device::CreateImageView(const VkImageViewCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator,
                                 VkImageView* pView) {
    return dispatch_table_.CreateImageView(handle_, pCreateInfo, pAllocator, pView);
}
void Device::DestroyImageView(VkImageView imageView, const VkAllocationCallbacks* pAllocator) {
    dispatch_table_.DestroyImageView(handle_, imageView, pAllocator);
}
VkResult Device::CreateShaderModule(const VkShaderModuleCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator,
                                    VkShaderModule* pShaderModule) {
    return dispatch_table_.CreateShaderModule(handle_, pCreateInfo, pAllocator, pShaderModule);
}
void Device::DestroyShaderModule(VkShaderModule shaderModule, const VkAllocationCallbacks* pAllocator) {
    dispatch_table_.DestroyShaderModule(handle_, shaderModule, pAllocator);
}
VkResult Device::CreatePipelineCache(const VkPipelineCacheCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator,
                                     VkPipelineCache* pPipelineCache) {
    return dispatch_table_.CreatePipelineCache(handle_, pCreateInfo, pAllocator, pPipelineCache);
}
void Device::DestroyPipelineCache(VkPipelineCache pipelineCache, const VkAllocationCallbacks* pAllocator) {
    dispatch_table_.DestroyPipelineCache(handle_, pipelineCache, pAllocator);
}
VkResult Device::GetPipelineCacheData(VkPipelineCache pipelineCache, size_t* pDataSize, void* pData) {
    return dispatch_table_.GetPipelineCacheData(handle_, pipelineCache, pDataSize, pData);
}
VkResult Device::MergePipelineCaches(VkPipelineCache dstCache, uint32_t srcCacheCount, const VkPipelineCache* pSrcCaches) {
    return dispatch_table_.MergePipelineCaches(handle_, dstCache, srcCacheCount, pSrcCaches);
}
VkResult Device::CreateGraphicsPipelines(VkPipelineCache pipelineCache, uint32_t createInfoCount,
                                         const VkGraphicsPipelineCreateInfo* pCreateInfos, const VkAllocationCallbacks* pAllocator,
                                         VkPipeline* pPipelines) {
    return dispatch_table_.CreateGraphicsPipelines(handle_, pipelineCache, createInfoCount, pCreateInfos, pAllocator, pPipelines);
}
VkResult Device::CreateComputePipelines(VkPipelineCache pipelineCache, uint32_t createInfoCount,
                                        const VkComputePipelineCreateInfo* pCreateInfos, const VkAllocationCallbacks* pAllocator,
                                        VkPipeline* pPipelines) {
    return dispatch_table_.CreateComputePipelines(handle_, pipelineCache, createInfoCount, pCreateInfos, pAllocator, pPipelines);
}
void Device::DestroyPipeline(VkPipeline pipeline, const VkAllocationCallbacks* pAllocator) {
    dispatch_table_.DestroyPipeline(handle_, pipeline, pAllocator);
}
VkResult Device::CreatePipelineLayout(const VkPipelineLayoutCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator,
                                      VkPipelineLayout* pPipelineLayout) {
    return dispatch_table_.CreatePipelineLayout(handle_, pCreateInfo, pAllocator, pPipelineLayout);
}
void Device::DestroyPipelineLayout(VkPipelineLayout pipelineLayout, const VkAllocationCallbacks* pAllocator) {
    dispatch_table_.DestroyPipelineLayout(handle_, pipelineLayout, pAllocator);
}
VkResult Device::CreateSampler(const VkSamplerCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator,
                               VkSampler* pSampler) {
    return dispatch_table_.CreateSampler(handle_, pCreateInfo, pAllocator, pSampler);
}
void Device::DestroySampler(VkSampler sampler, const VkAllocationCallbacks* pAllocator) {
    dispatch_table_.DestroySampler(handle_, sampler, pAllocator);
}
VkResult Device::CreateDescriptorSetLayout(const VkDescriptorSetLayoutCreateInfo* pCreateInfo,
                                           const VkAllocationCallbacks* pAllocator, VkDescriptorSetLayout* pSetLayout) {
    return dispatch_table_.CreateDescriptorSetLayout(handle_, pCreateInfo, pAllocator, pSetLayout);
}
void Device::DestroyDescriptorSetLayout(VkDescriptorSetLayout descriptorSetLayout, const VkAllocationCallbacks* pAllocator) {
    dispatch_table_.DestroyDescriptorSetLayout(handle_, descriptorSetLayout, pAllocator);
}
VkResult Device::CreateDescriptorPool(const VkDescriptorPoolCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator,
                                      VkDescriptorPool* pDescriptorPool) {
    return dispatch_table_.CreateDescriptorPool(handle_, pCreateInfo, pAllocator, pDescriptorPool);
}
void Device::DestroyDescriptorPool(VkDescriptorPool descriptorPool, const VkAllocationCallbacks* pAllocator) {
    dispatch_table_.DestroyDescriptorPool(handle_, descriptorPool, pAllocator);
}
VkResult Device::ResetDescriptorPool(VkDescriptorPool descriptorPool, VkDescriptorPoolResetFlags flags) {
    return dispatch_table_.ResetDescriptorPool(handle_, descriptorPool, flags);
}
VkResult Device::AllocateDescriptorSets(const VkDescriptorSetAllocateInfo* pAllocateInfo, VkDescriptorSet* pDescriptorSets) {
    return dispatch_table_.AllocateDescriptorSets(handle_, pAllocateInfo, pDescriptorSets);
}
VkResult Device::FreeDescriptorSets(VkDescriptorPool descriptorPool, uint32_t descriptorSetCount,
                                    const VkDescriptorSet* pDescriptorSets) {
    return dispatch_table_.FreeDescriptorSets(handle_, descriptorPool, descriptorSetCount, pDescriptorSets);
}
void Device::UpdateDescriptorSets(uint32_t descriptorWriteCount, const VkWriteDescriptorSet* pDescriptorWrites,
                                  uint32_t descriptorCopyCount, const VkCopyDescriptorSet* pDescriptorCopies) {
    dispatch_table_.UpdateDescriptorSets(handle_, descriptorWriteCount, pDescriptorWrites, descriptorCopyCount, pDescriptorCopies);
}
VkResult Device::CreateFramebuffer(const VkFramebufferCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator,
                                   VkFramebuffer* pFramebuffer) {
    return dispatch_table_.CreateFramebuffer(handle_, pCreateInfo, pAllocator, pFramebuffer);
}
void Device::DestroyFramebuffer(VkFramebuffer framebuffer, const VkAllocationCallbacks* pAllocator) {
    dispatch_table_.DestroyFramebuffer(handle_, framebuffer, pAllocator);
}
VkResult Device::CreateRenderPass(const VkRenderPassCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator,
                                  VkRenderPass* pRenderPass) {
    return dispatch_table_.CreateRenderPass(handle_, pCreateInfo, pAllocator, pRenderPass);
}
void Device::DestroyRenderPass(VkRenderPass renderPass, const VkAllocationCallbacks* pAllocator) {
    dispatch_table_.DestroyRenderPass(handle_, renderPass, pAllocator);
}
void Device::GetRenderAreaGranularity(VkRenderPass renderPass, VkExtent2D* pGranularity) {
    dispatch_table_.GetRenderAreaGranularity(handle_, renderPass, pGranularity);
    if (pGranularity != nullptr) {
        vksc::ConvertOutStructToVulkanSC<VkExtent2D>(pGranularity);
    }
}
VkResult Device::CreateCommandPool(const VkCommandPoolCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator,
                                   VkCommandPool* pCommandPool) {
    return dispatch_table_.CreateCommandPool(handle_, pCreateInfo, pAllocator, pCommandPool);
}
void Device::DestroyCommandPool(VkCommandPool commandPool, const VkAllocationCallbacks* pAllocator) {
    dispatch_table_.DestroyCommandPool(handle_, commandPool, pAllocator);
}
VkResult Device::ResetCommandPool(VkCommandPool commandPool, VkCommandPoolResetFlags flags) {
    return dispatch_table_.ResetCommandPool(handle_, commandPool, flags);
}
VkResult Device::AllocateCommandBuffers(const VkCommandBufferAllocateInfo* pAllocateInfo, VkCommandBuffer* pCommandBuffers) {
    return dispatch_table_.AllocateCommandBuffers(handle_, pAllocateInfo, pCommandBuffers);
}
void Device::FreeCommandBuffers(VkCommandPool commandPool, uint32_t commandBufferCount, const VkCommandBuffer* pCommandBuffers) {
    dispatch_table_.FreeCommandBuffers(handle_, commandPool, commandBufferCount, pCommandBuffers);
}
VkResult Device::BindBufferMemory2(uint32_t bindInfoCount, const VkBindBufferMemoryInfo* pBindInfos) {
    return dispatch_table_.BindBufferMemory2(handle_, bindInfoCount, pBindInfos);
}
VkResult Device::BindImageMemory2(uint32_t bindInfoCount, const VkBindImageMemoryInfo* pBindInfos) {
    return dispatch_table_.BindImageMemory2(handle_, bindInfoCount, pBindInfos);
}
void Device::GetDeviceGroupPeerMemoryFeatures(uint32_t heapIndex, uint32_t localDeviceIndex, uint32_t remoteDeviceIndex,
                                              VkPeerMemoryFeatureFlags* pPeerMemoryFeatures) {
    dispatch_table_.GetDeviceGroupPeerMemoryFeatures(handle_, heapIndex, localDeviceIndex, remoteDeviceIndex, pPeerMemoryFeatures);
}
void Device::GetImageMemoryRequirements2(const VkImageMemoryRequirementsInfo2* pInfo, VkMemoryRequirements2* pMemoryRequirements) {
    dispatch_table_.GetImageMemoryRequirements2(handle_, pInfo, pMemoryRequirements);
    if (pMemoryRequirements != nullptr) {
        vksc::ConvertOutStructChainToVulkanSC<VkMemoryRequirements2>(pMemoryRequirements);
    }
}
void Device::GetBufferMemoryRequirements2(const VkBufferMemoryRequirementsInfo2* pInfo,
                                          VkMemoryRequirements2* pMemoryRequirements) {
    dispatch_table_.GetBufferMemoryRequirements2(handle_, pInfo, pMemoryRequirements);
    if (pMemoryRequirements != nullptr) {
        vksc::ConvertOutStructChainToVulkanSC<VkMemoryRequirements2>(pMemoryRequirements);
    }
}
void Device::GetImageSparseMemoryRequirements2(const VkImageSparseMemoryRequirementsInfo2* pInfo,
                                               uint32_t* pSparseMemoryRequirementCount,
                                               VkSparseImageMemoryRequirements2* pSparseMemoryRequirements) {
    dispatch_table_.GetImageSparseMemoryRequirements2(handle_, pInfo, pSparseMemoryRequirementCount, pSparseMemoryRequirements);
    if (pSparseMemoryRequirements != nullptr) {
        for (uint32_t i = 0; i < *pSparseMemoryRequirementCount; ++i)
            vksc::ConvertOutStructChainToVulkanSC<VkSparseImageMemoryRequirements2>(&pSparseMemoryRequirements[i]);
    }
}
void Device::TrimCommandPool(VkCommandPool commandPool, VkCommandPoolTrimFlags flags) {
    dispatch_table_.TrimCommandPool(handle_, commandPool, flags);
}
void Device::GetDeviceQueue2(const VkDeviceQueueInfo2* pQueueInfo, VkQueue* pQueue) {
    dispatch_table_.GetDeviceQueue2(handle_, pQueueInfo, pQueue);
}
VkResult Device::CreateSamplerYcbcrConversion(const VkSamplerYcbcrConversionCreateInfo* pCreateInfo,
                                              const VkAllocationCallbacks* pAllocator, VkSamplerYcbcrConversion* pYcbcrConversion) {
    return dispatch_table_.CreateSamplerYcbcrConversion(handle_, pCreateInfo, pAllocator, pYcbcrConversion);
}
void Device::DestroySamplerYcbcrConversion(VkSamplerYcbcrConversion ycbcrConversion, const VkAllocationCallbacks* pAllocator) {
    dispatch_table_.DestroySamplerYcbcrConversion(handle_, ycbcrConversion, pAllocator);
}
VkResult Device::CreateDescriptorUpdateTemplate(const VkDescriptorUpdateTemplateCreateInfo* pCreateInfo,
                                                const VkAllocationCallbacks* pAllocator,
                                                VkDescriptorUpdateTemplate* pDescriptorUpdateTemplate) {
    return dispatch_table_.CreateDescriptorUpdateTemplate(handle_, pCreateInfo, pAllocator, pDescriptorUpdateTemplate);
}
void Device::DestroyDescriptorUpdateTemplate(VkDescriptorUpdateTemplate descriptorUpdateTemplate,
                                             const VkAllocationCallbacks* pAllocator) {
    dispatch_table_.DestroyDescriptorUpdateTemplate(handle_, descriptorUpdateTemplate, pAllocator);
}
void Device::UpdateDescriptorSetWithTemplate(VkDescriptorSet descriptorSet, VkDescriptorUpdateTemplate descriptorUpdateTemplate,
                                             const void* pData) {
    dispatch_table_.UpdateDescriptorSetWithTemplate(handle_, descriptorSet, descriptorUpdateTemplate, pData);
}
void Device::GetDescriptorSetLayoutSupport(const VkDescriptorSetLayoutCreateInfo* pCreateInfo,
                                           VkDescriptorSetLayoutSupport* pSupport) {
    dispatch_table_.GetDescriptorSetLayoutSupport(handle_, pCreateInfo, pSupport);
    if (pSupport != nullptr) {
        vksc::ConvertOutStructChainToVulkanSC<VkDescriptorSetLayoutSupport>(pSupport);
    }
}
VkResult Device::CreateRenderPass2(const VkRenderPassCreateInfo2* pCreateInfo, const VkAllocationCallbacks* pAllocator,
                                   VkRenderPass* pRenderPass) {
    return dispatch_table_.CreateRenderPass2(handle_, pCreateInfo, pAllocator, pRenderPass);
}
void Device::ResetQueryPool(VkQueryPool queryPool, uint32_t firstQuery, uint32_t queryCount) {
    dispatch_table_.ResetQueryPool(handle_, queryPool, firstQuery, queryCount);
}
VkResult Device::GetSemaphoreCounterValue(VkSemaphore semaphore, uint64_t* pValue) {
    return dispatch_table_.GetSemaphoreCounterValue(handle_, semaphore, pValue);
}
VkResult Device::WaitSemaphores(const VkSemaphoreWaitInfo* pWaitInfo, uint64_t timeout) {
    return dispatch_table_.WaitSemaphores(handle_, pWaitInfo, timeout);
}
VkResult Device::SignalSemaphore(const VkSemaphoreSignalInfo* pSignalInfo) {
    return dispatch_table_.SignalSemaphore(handle_, pSignalInfo);
}
VkDeviceAddress Device::GetBufferDeviceAddress(const VkBufferDeviceAddressInfo* pInfo) {
    return dispatch_table_.GetBufferDeviceAddress(handle_, pInfo);
}
uint64_t Device::GetBufferOpaqueCaptureAddress(const VkBufferDeviceAddressInfo* pInfo) {
    return dispatch_table_.GetBufferOpaqueCaptureAddress(handle_, pInfo);
}
uint64_t Device::GetDeviceMemoryOpaqueCaptureAddress(const VkDeviceMemoryOpaqueCaptureAddressInfo* pInfo) {
    return dispatch_table_.GetDeviceMemoryOpaqueCaptureAddress(handle_, pInfo);
}
VkResult Device::CreatePrivateDataSlot(const VkPrivateDataSlotCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator,
                                       VkPrivateDataSlot* pPrivateDataSlot) {
    return dispatch_table_.CreatePrivateDataSlot(handle_, pCreateInfo, pAllocator, pPrivateDataSlot);
}
void Device::DestroyPrivateDataSlot(VkPrivateDataSlot privateDataSlot, const VkAllocationCallbacks* pAllocator) {
    dispatch_table_.DestroyPrivateDataSlot(handle_, privateDataSlot, pAllocator);
}
VkResult Device::SetPrivateData(VkObjectType objectType, uint64_t objectHandle, VkPrivateDataSlot privateDataSlot, uint64_t data) {
    return dispatch_table_.SetPrivateData(handle_, objectType, objectHandle, privateDataSlot, data);
}
void Device::GetPrivateData(VkObjectType objectType, uint64_t objectHandle, VkPrivateDataSlot privateDataSlot, uint64_t* pData) {
    dispatch_table_.GetPrivateData(handle_, objectType, objectHandle, privateDataSlot, pData);
}
void Device::GetDeviceBufferMemoryRequirements(const VkDeviceBufferMemoryRequirements* pInfo,
                                               VkMemoryRequirements2* pMemoryRequirements) {
    dispatch_table_.GetDeviceBufferMemoryRequirements(handle_, pInfo, pMemoryRequirements);
    if (pMemoryRequirements != nullptr) {
        vksc::ConvertOutStructChainToVulkanSC<VkMemoryRequirements2>(pMemoryRequirements);
    }
}
void Device::GetDeviceImageMemoryRequirements(const VkDeviceImageMemoryRequirements* pInfo,
                                              VkMemoryRequirements2* pMemoryRequirements) {
    dispatch_table_.GetDeviceImageMemoryRequirements(handle_, pInfo, pMemoryRequirements);
    if (pMemoryRequirements != nullptr) {
        vksc::ConvertOutStructChainToVulkanSC<VkMemoryRequirements2>(pMemoryRequirements);
    }
}
void Device::GetDeviceImageSparseMemoryRequirements(const VkDeviceImageMemoryRequirements* pInfo,
                                                    uint32_t* pSparseMemoryRequirementCount,
                                                    VkSparseImageMemoryRequirements2* pSparseMemoryRequirements) {
    dispatch_table_.GetDeviceImageSparseMemoryRequirements(handle_, pInfo, pSparseMemoryRequirementCount,
                                                           pSparseMemoryRequirements);
    if (pSparseMemoryRequirements != nullptr) {
        for (uint32_t i = 0; i < *pSparseMemoryRequirementCount; ++i)
            vksc::ConvertOutStructChainToVulkanSC<VkSparseImageMemoryRequirements2>(&pSparseMemoryRequirements[i]);
    }
}
VkResult Device::CreateSwapchainKHR(const VkSwapchainCreateInfoKHR* pCreateInfo, const VkAllocationCallbacks* pAllocator,
                                    VkSwapchainKHR* pSwapchain) {
    return dispatch_table_.CreateSwapchainKHR(handle_, pCreateInfo, pAllocator, pSwapchain);
}
void Device::DestroySwapchainKHR(VkSwapchainKHR swapchain, const VkAllocationCallbacks* pAllocator) {
    dispatch_table_.DestroySwapchainKHR(handle_, swapchain, pAllocator);
}
VkResult Device::GetSwapchainImagesKHR(VkSwapchainKHR swapchain, uint32_t* pSwapchainImageCount, VkImage* pSwapchainImages) {
    return dispatch_table_.GetSwapchainImagesKHR(handle_, swapchain, pSwapchainImageCount, pSwapchainImages);
}
VkResult Device::AcquireNextImageKHR(VkSwapchainKHR swapchain, uint64_t timeout, VkSemaphore semaphore, VkFence fence,
                                     uint32_t* pImageIndex) {
    return dispatch_table_.AcquireNextImageKHR(handle_, swapchain, timeout, semaphore, fence, pImageIndex);
}
VkResult Device::GetDeviceGroupPresentCapabilitiesKHR(VkDeviceGroupPresentCapabilitiesKHR* pDeviceGroupPresentCapabilities) {
    VkResult result = dispatch_table_.GetDeviceGroupPresentCapabilitiesKHR(handle_, pDeviceGroupPresentCapabilities);
    if (pDeviceGroupPresentCapabilities != nullptr) {
        vksc::ConvertOutStructChainToVulkanSC<VkDeviceGroupPresentCapabilitiesKHR>(pDeviceGroupPresentCapabilities);
    }
    return result;
}
VkResult Device::GetDeviceGroupSurfacePresentModesKHR(VkSurfaceKHR surface, VkDeviceGroupPresentModeFlagsKHR* pModes) {
    return dispatch_table_.GetDeviceGroupSurfacePresentModesKHR(handle_, surface, pModes);
}
VkResult Device::AcquireNextImage2KHR(const VkAcquireNextImageInfoKHR* pAcquireInfo, uint32_t* pImageIndex) {
    return dispatch_table_.AcquireNextImage2KHR(handle_, pAcquireInfo, pImageIndex);
}
VkResult Device::CreateSharedSwapchainsKHR(uint32_t swapchainCount, const VkSwapchainCreateInfoKHR* pCreateInfos,
                                           const VkAllocationCallbacks* pAllocator, VkSwapchainKHR* pSwapchains) {
    return dispatch_table_.CreateSharedSwapchainsKHR(handle_, swapchainCount, pCreateInfos, pAllocator, pSwapchains);
}
VkResult Device::CreateVideoSessionKHR(const VkVideoSessionCreateInfoKHR* pCreateInfo, const VkAllocationCallbacks* pAllocator,
                                       VkVideoSessionKHR* pVideoSession) {
    return dispatch_table_.CreateVideoSessionKHR(handle_, pCreateInfo, pAllocator, pVideoSession);
}
void Device::DestroyVideoSessionKHR(VkVideoSessionKHR videoSession, const VkAllocationCallbacks* pAllocator) {
    dispatch_table_.DestroyVideoSessionKHR(handle_, videoSession, pAllocator);
}
VkResult Device::GetVideoSessionMemoryRequirementsKHR(VkVideoSessionKHR videoSession, uint32_t* pMemoryRequirementsCount,
                                                      VkVideoSessionMemoryRequirementsKHR* pMemoryRequirements) {
    VkResult result =
        dispatch_table_.GetVideoSessionMemoryRequirementsKHR(handle_, videoSession, pMemoryRequirementsCount, pMemoryRequirements);
    if (pMemoryRequirements != nullptr) {
        for (uint32_t i = 0; i < *pMemoryRequirementsCount; ++i)
            vksc::ConvertOutStructChainToVulkanSC<VkVideoSessionMemoryRequirementsKHR>(&pMemoryRequirements[i]);
    }
    return result;
}
VkResult Device::BindVideoSessionMemoryKHR(VkVideoSessionKHR videoSession, uint32_t bindSessionMemoryInfoCount,
                                           const VkBindVideoSessionMemoryInfoKHR* pBindSessionMemoryInfos) {
    return dispatch_table_.BindVideoSessionMemoryKHR(handle_, videoSession, bindSessionMemoryInfoCount, pBindSessionMemoryInfos);
}
VkResult Device::CreateVideoSessionParametersKHR(const VkVideoSessionParametersCreateInfoKHR* pCreateInfo,
                                                 const VkAllocationCallbacks* pAllocator,
                                                 VkVideoSessionParametersKHR* pVideoSessionParameters) {
    return dispatch_table_.CreateVideoSessionParametersKHR(handle_, pCreateInfo, pAllocator, pVideoSessionParameters);
}
VkResult Device::UpdateVideoSessionParametersKHR(VkVideoSessionParametersKHR videoSessionParameters,
                                                 const VkVideoSessionParametersUpdateInfoKHR* pUpdateInfo) {
    return dispatch_table_.UpdateVideoSessionParametersKHR(handle_, videoSessionParameters, pUpdateInfo);
}
void Device::DestroyVideoSessionParametersKHR(VkVideoSessionParametersKHR videoSessionParameters,
                                              const VkAllocationCallbacks* pAllocator) {
    dispatch_table_.DestroyVideoSessionParametersKHR(handle_, videoSessionParameters, pAllocator);
}
#ifdef VK_USE_PLATFORM_WIN32_KHR
VkResult Device::GetMemoryWin32HandleKHR(const VkMemoryGetWin32HandleInfoKHR* pGetWin32HandleInfo, HANDLE* pHandle) {
    return dispatch_table_.GetMemoryWin32HandleKHR(handle_, pGetWin32HandleInfo, pHandle);
}
VkResult Device::GetMemoryWin32HandlePropertiesKHR(VkExternalMemoryHandleTypeFlagBits handleType, HANDLE handle,
                                                   VkMemoryWin32HandlePropertiesKHR* pMemoryWin32HandleProperties) {
    VkResult result = dispatch_table_.GetMemoryWin32HandlePropertiesKHR(handle_, handleType, handle, pMemoryWin32HandleProperties);
    if (pMemoryWin32HandleProperties != nullptr) {
        vksc::ConvertOutStructChainToVulkanSC<VkMemoryWin32HandlePropertiesKHR>(pMemoryWin32HandleProperties);
    }
    return result;
}
#endif  // VK_USE_PLATFORM_WIN32_KHR
VkResult Device::GetMemoryFdKHR(const VkMemoryGetFdInfoKHR* pGetFdInfo, int* pFd) {
    return dispatch_table_.GetMemoryFdKHR(handle_, pGetFdInfo, pFd);
}
VkResult Device::GetMemoryFdPropertiesKHR(VkExternalMemoryHandleTypeFlagBits handleType, int fd,
                                          VkMemoryFdPropertiesKHR* pMemoryFdProperties) {
    VkResult result = dispatch_table_.GetMemoryFdPropertiesKHR(handle_, handleType, fd, pMemoryFdProperties);
    if (pMemoryFdProperties != nullptr) {
        vksc::ConvertOutStructChainToVulkanSC<VkMemoryFdPropertiesKHR>(pMemoryFdProperties);
    }
    return result;
}
#ifdef VK_USE_PLATFORM_WIN32_KHR
VkResult Device::ImportSemaphoreWin32HandleKHR(const VkImportSemaphoreWin32HandleInfoKHR* pImportSemaphoreWin32HandleInfo) {
    return dispatch_table_.ImportSemaphoreWin32HandleKHR(handle_, pImportSemaphoreWin32HandleInfo);
}
VkResult Device::GetSemaphoreWin32HandleKHR(const VkSemaphoreGetWin32HandleInfoKHR* pGetWin32HandleInfo, HANDLE* pHandle) {
    return dispatch_table_.GetSemaphoreWin32HandleKHR(handle_, pGetWin32HandleInfo, pHandle);
}
#endif  // VK_USE_PLATFORM_WIN32_KHR
VkResult Device::ImportSemaphoreFdKHR(const VkImportSemaphoreFdInfoKHR* pImportSemaphoreFdInfo) {
    return dispatch_table_.ImportSemaphoreFdKHR(handle_, pImportSemaphoreFdInfo);
}
VkResult Device::GetSemaphoreFdKHR(const VkSemaphoreGetFdInfoKHR* pGetFdInfo, int* pFd) {
    return dispatch_table_.GetSemaphoreFdKHR(handle_, pGetFdInfo, pFd);
}
VkResult Device::GetSwapchainStatusKHR(VkSwapchainKHR swapchain) {
    return dispatch_table_.GetSwapchainStatusKHR(handle_, swapchain);
}
#ifdef VK_USE_PLATFORM_WIN32_KHR
VkResult Device::ImportFenceWin32HandleKHR(const VkImportFenceWin32HandleInfoKHR* pImportFenceWin32HandleInfo) {
    return dispatch_table_.ImportFenceWin32HandleKHR(handle_, pImportFenceWin32HandleInfo);
}
VkResult Device::GetFenceWin32HandleKHR(const VkFenceGetWin32HandleInfoKHR* pGetWin32HandleInfo, HANDLE* pHandle) {
    return dispatch_table_.GetFenceWin32HandleKHR(handle_, pGetWin32HandleInfo, pHandle);
}
#endif  // VK_USE_PLATFORM_WIN32_KHR
VkResult Device::ImportFenceFdKHR(const VkImportFenceFdInfoKHR* pImportFenceFdInfo) {
    return dispatch_table_.ImportFenceFdKHR(handle_, pImportFenceFdInfo);
}
VkResult Device::GetFenceFdKHR(const VkFenceGetFdInfoKHR* pGetFdInfo, int* pFd) {
    return dispatch_table_.GetFenceFdKHR(handle_, pGetFdInfo, pFd);
}
VkResult Device::AcquireProfilingLockKHR(const VkAcquireProfilingLockInfoKHR* pInfo) {
    return dispatch_table_.AcquireProfilingLockKHR(handle_, pInfo);
}
void Device::ReleaseProfilingLockKHR() { dispatch_table_.ReleaseProfilingLockKHR(handle_); }
VkResult Device::WaitForPresentKHR(VkSwapchainKHR swapchain, uint64_t presentId, uint64_t timeout) {
    return dispatch_table_.WaitForPresentKHR(handle_, swapchain, presentId, timeout);
}
VkResult Device::CreateDeferredOperationKHR(const VkAllocationCallbacks* pAllocator, VkDeferredOperationKHR* pDeferredOperation) {
    return dispatch_table_.CreateDeferredOperationKHR(handle_, pAllocator, pDeferredOperation);
}
void Device::DestroyDeferredOperationKHR(VkDeferredOperationKHR operation, const VkAllocationCallbacks* pAllocator) {
    dispatch_table_.DestroyDeferredOperationKHR(handle_, operation, pAllocator);
}
uint32_t Device::GetDeferredOperationMaxConcurrencyKHR(VkDeferredOperationKHR operation) {
    return dispatch_table_.GetDeferredOperationMaxConcurrencyKHR(handle_, operation);
}
VkResult Device::GetDeferredOperationResultKHR(VkDeferredOperationKHR operation) {
    return dispatch_table_.GetDeferredOperationResultKHR(handle_, operation);
}
VkResult Device::DeferredOperationJoinKHR(VkDeferredOperationKHR operation) {
    return dispatch_table_.DeferredOperationJoinKHR(handle_, operation);
}
VkResult Device::GetPipelineExecutablePropertiesKHR(const VkPipelineInfoKHR* pPipelineInfo, uint32_t* pExecutableCount,
                                                    VkPipelineExecutablePropertiesKHR* pProperties) {
    VkResult result = dispatch_table_.GetPipelineExecutablePropertiesKHR(handle_, pPipelineInfo, pExecutableCount, pProperties);
    if (pProperties != nullptr) {
        for (uint32_t i = 0; i < *pExecutableCount; ++i)
            vksc::ConvertOutStructChainToVulkanSC<VkPipelineExecutablePropertiesKHR>(&pProperties[i]);
    }
    return result;
}
VkResult Device::GetPipelineExecutableStatisticsKHR(const VkPipelineExecutableInfoKHR* pExecutableInfo, uint32_t* pStatisticCount,
                                                    VkPipelineExecutableStatisticKHR* pStatistics) {
    VkResult result = dispatch_table_.GetPipelineExecutableStatisticsKHR(handle_, pExecutableInfo, pStatisticCount, pStatistics);
    if (pStatistics != nullptr) {
        for (uint32_t i = 0; i < *pStatisticCount; ++i)
            vksc::ConvertOutStructChainToVulkanSC<VkPipelineExecutableStatisticKHR>(&pStatistics[i]);
    }
    return result;
}
VkResult Device::GetPipelineExecutableInternalRepresentationsKHR(
    const VkPipelineExecutableInfoKHR* pExecutableInfo, uint32_t* pInternalRepresentationCount,
    VkPipelineExecutableInternalRepresentationKHR* pInternalRepresentations) {
    VkResult result = dispatch_table_.GetPipelineExecutableInternalRepresentationsKHR(
        handle_, pExecutableInfo, pInternalRepresentationCount, pInternalRepresentations);
    if (pInternalRepresentations != nullptr) {
        for (uint32_t i = 0; i < *pInternalRepresentationCount; ++i)
            vksc::ConvertOutStructChainToVulkanSC<VkPipelineExecutableInternalRepresentationKHR>(&pInternalRepresentations[i]);
    }
    return result;
}
VkResult Device::MapMemory2KHR(const VkMemoryMapInfoKHR* pMemoryMapInfo, void** ppData) {
    return dispatch_table_.MapMemory2KHR(handle_, pMemoryMapInfo, ppData);
}
VkResult Device::UnmapMemory2KHR(const VkMemoryUnmapInfoKHR* pMemoryUnmapInfo) {
    return dispatch_table_.UnmapMemory2KHR(handle_, pMemoryUnmapInfo);
}
VkResult Device::GetEncodedVideoSessionParametersKHR(const VkVideoEncodeSessionParametersGetInfoKHR* pVideoSessionParametersInfo,
                                                     VkVideoEncodeSessionParametersFeedbackInfoKHR* pFeedbackInfo,
                                                     size_t* pDataSize, void* pData) {
    VkResult result =
        dispatch_table_.GetEncodedVideoSessionParametersKHR(handle_, pVideoSessionParametersInfo, pFeedbackInfo, pDataSize, pData);
    if (pFeedbackInfo != nullptr) {
        vksc::ConvertOutStructChainToVulkanSC<VkVideoEncodeSessionParametersFeedbackInfoKHR>(pFeedbackInfo);
    }
    return result;
}
void Device::GetRenderingAreaGranularityKHR(const VkRenderingAreaInfoKHR* pRenderingAreaInfo, VkExtent2D* pGranularity) {
    dispatch_table_.GetRenderingAreaGranularityKHR(handle_, pRenderingAreaInfo, pGranularity);
    if (pGranularity != nullptr) {
        vksc::ConvertOutStructToVulkanSC<VkExtent2D>(pGranularity);
    }
}
void Device::GetDeviceImageSubresourceLayoutKHR(const VkDeviceImageSubresourceInfoKHR* pInfo, VkSubresourceLayout2KHR* pLayout) {
    dispatch_table_.GetDeviceImageSubresourceLayoutKHR(handle_, pInfo, pLayout);
    if (pLayout != nullptr) {
        vksc::ConvertOutStructChainToVulkanSC<VkSubresourceLayout2KHR>(pLayout);
    }
}
void Device::GetImageSubresourceLayout2KHR(VkImage image, const VkImageSubresource2KHR* pSubresource,
                                           VkSubresourceLayout2KHR* pLayout) {
    dispatch_table_.GetImageSubresourceLayout2KHR(handle_, image, pSubresource, pLayout);
    if (pLayout != nullptr) {
        vksc::ConvertOutStructChainToVulkanSC<VkSubresourceLayout2KHR>(pLayout);
    }
}
VkResult Device::CreatePipelineBinariesKHR(const VkPipelineBinaryCreateInfoKHR* pCreateInfo,
                                           const VkAllocationCallbacks* pAllocator, VkPipelineBinaryHandlesInfoKHR* pBinaries) {
    VkResult result = dispatch_table_.CreatePipelineBinariesKHR(handle_, pCreateInfo, pAllocator, pBinaries);
    if (pBinaries != nullptr) {
        vksc::ConvertOutStructChainToVulkanSC<VkPipelineBinaryHandlesInfoKHR>(pBinaries);
    }
    return result;
}
void Device::DestroyPipelineBinaryKHR(VkPipelineBinaryKHR pipelineBinary, const VkAllocationCallbacks* pAllocator) {
    dispatch_table_.DestroyPipelineBinaryKHR(handle_, pipelineBinary, pAllocator);
}
VkResult Device::GetPipelineKeyKHR(const VkPipelineCreateInfoKHR* pPipelineCreateInfo, VkPipelineBinaryKeyKHR* pPipelineKey) {
    VkResult result = dispatch_table_.GetPipelineKeyKHR(handle_, pPipelineCreateInfo, pPipelineKey);
    if (pPipelineKey != nullptr) {
        vksc::ConvertOutStructChainToVulkanSC<VkPipelineBinaryKeyKHR>(pPipelineKey);
    }
    return result;
}
VkResult Device::GetPipelineBinaryDataKHR(const VkPipelineBinaryDataInfoKHR* pInfo, VkPipelineBinaryKeyKHR* pPipelineBinaryKey,
                                          size_t* pPipelineBinaryDataSize, void* pPipelineBinaryData) {
    VkResult result =
        dispatch_table_.GetPipelineBinaryDataKHR(handle_, pInfo, pPipelineBinaryKey, pPipelineBinaryDataSize, pPipelineBinaryData);
    if (pPipelineBinaryKey != nullptr) {
        vksc::ConvertOutStructChainToVulkanSC<VkPipelineBinaryKeyKHR>(pPipelineBinaryKey);
    }
    return result;
}
VkResult Device::ReleaseCapturedPipelineDataKHR(const VkReleaseCapturedPipelineDataInfoKHR* pInfo,
                                                const VkAllocationCallbacks* pAllocator) {
    return dispatch_table_.ReleaseCapturedPipelineDataKHR(handle_, pInfo, pAllocator);
}
VkResult Device::GetCalibratedTimestampsKHR(uint32_t timestampCount, const VkCalibratedTimestampInfoKHR* pTimestampInfos,
                                            uint64_t* pTimestamps, uint64_t* pMaxDeviation) {
    return dispatch_table_.GetCalibratedTimestampsKHR(handle_, timestampCount, pTimestampInfos, pTimestamps, pMaxDeviation);
}
VkResult Device::DebugMarkerSetObjectTagEXT(const VkDebugMarkerObjectTagInfoEXT* pTagInfo) {
    return dispatch_table_.DebugMarkerSetObjectTagEXT(handle_, pTagInfo);
}
VkResult Device::DebugMarkerSetObjectNameEXT(const VkDebugMarkerObjectNameInfoEXT* pNameInfo) {
    return dispatch_table_.DebugMarkerSetObjectNameEXT(handle_, pNameInfo);
}
VkResult Device::CreateCuModuleNVX(const VkCuModuleCreateInfoNVX* pCreateInfo, const VkAllocationCallbacks* pAllocator,
                                   VkCuModuleNVX* pModule) {
    return dispatch_table_.CreateCuModuleNVX(handle_, pCreateInfo, pAllocator, pModule);
}
VkResult Device::CreateCuFunctionNVX(const VkCuFunctionCreateInfoNVX* pCreateInfo, const VkAllocationCallbacks* pAllocator,
                                     VkCuFunctionNVX* pFunction) {
    return dispatch_table_.CreateCuFunctionNVX(handle_, pCreateInfo, pAllocator, pFunction);
}
void Device::DestroyCuModuleNVX(VkCuModuleNVX module, const VkAllocationCallbacks* pAllocator) {
    dispatch_table_.DestroyCuModuleNVX(handle_, module, pAllocator);
}
void Device::DestroyCuFunctionNVX(VkCuFunctionNVX function, const VkAllocationCallbacks* pAllocator) {
    dispatch_table_.DestroyCuFunctionNVX(handle_, function, pAllocator);
}
uint32_t Device::GetImageViewHandleNVX(const VkImageViewHandleInfoNVX* pInfo) {
    return dispatch_table_.GetImageViewHandleNVX(handle_, pInfo);
}
VkResult Device::GetImageViewAddressNVX(VkImageView imageView, VkImageViewAddressPropertiesNVX* pProperties) {
    VkResult result = dispatch_table_.GetImageViewAddressNVX(handle_, imageView, pProperties);
    if (pProperties != nullptr) {
        vksc::ConvertOutStructChainToVulkanSC<VkImageViewAddressPropertiesNVX>(pProperties);
    }
    return result;
}
VkResult Device::GetShaderInfoAMD(VkPipeline pipeline, VkShaderStageFlagBits shaderStage, VkShaderInfoTypeAMD infoType,
                                  size_t* pInfoSize, void* pInfo) {
    return dispatch_table_.GetShaderInfoAMD(handle_, pipeline, shaderStage, infoType, pInfoSize, pInfo);
}
#ifdef VK_USE_PLATFORM_WIN32_KHR
VkResult Device::GetMemoryWin32HandleNV(VkDeviceMemory memory, VkExternalMemoryHandleTypeFlagsNV handleType, HANDLE* pHandle) {
    return dispatch_table_.GetMemoryWin32HandleNV(handle_, memory, handleType, pHandle);
}
#endif  // VK_USE_PLATFORM_WIN32_KHR
VkResult Device::DisplayPowerControlEXT(VkDisplayKHR display, const VkDisplayPowerInfoEXT* pDisplayPowerInfo) {
    return dispatch_table_.DisplayPowerControlEXT(handle_, display, pDisplayPowerInfo);
}
VkResult Device::RegisterDeviceEventEXT(const VkDeviceEventInfoEXT* pDeviceEventInfo, const VkAllocationCallbacks* pAllocator,
                                        VkFence* pFence) {
    return dispatch_table_.RegisterDeviceEventEXT(handle_, pDeviceEventInfo, pAllocator, pFence);
}
VkResult Device::RegisterDisplayEventEXT(VkDisplayKHR display, const VkDisplayEventInfoEXT* pDisplayEventInfo,
                                         const VkAllocationCallbacks* pAllocator, VkFence* pFence) {
    return dispatch_table_.RegisterDisplayEventEXT(handle_, display, pDisplayEventInfo, pAllocator, pFence);
}
VkResult Device::GetSwapchainCounterEXT(VkSwapchainKHR swapchain, VkSurfaceCounterFlagBitsEXT counter, uint64_t* pCounterValue) {
    return dispatch_table_.GetSwapchainCounterEXT(handle_, swapchain, counter, pCounterValue);
}
VkResult Device::GetRefreshCycleDurationGOOGLE(VkSwapchainKHR swapchain, VkRefreshCycleDurationGOOGLE* pDisplayTimingProperties) {
    VkResult result = dispatch_table_.GetRefreshCycleDurationGOOGLE(handle_, swapchain, pDisplayTimingProperties);
    if (pDisplayTimingProperties != nullptr) {
        vksc::ConvertOutStructToVulkanSC<VkRefreshCycleDurationGOOGLE>(pDisplayTimingProperties);
    }
    return result;
}
VkResult Device::GetPastPresentationTimingGOOGLE(VkSwapchainKHR swapchain, uint32_t* pPresentationTimingCount,
                                                 VkPastPresentationTimingGOOGLE* pPresentationTimings) {
    VkResult result =
        dispatch_table_.GetPastPresentationTimingGOOGLE(handle_, swapchain, pPresentationTimingCount, pPresentationTimings);
    if (pPresentationTimings != nullptr) {
        for (uint32_t i = 0; i < *pPresentationTimingCount; ++i)
            vksc::ConvertOutStructToVulkanSC<VkPastPresentationTimingGOOGLE>(&pPresentationTimings[i]);
    }
    return result;
}
void Device::SetHdrMetadataEXT(uint32_t swapchainCount, const VkSwapchainKHR* pSwapchains, const VkHdrMetadataEXT* pMetadata) {
    dispatch_table_.SetHdrMetadataEXT(handle_, swapchainCount, pSwapchains, pMetadata);
}
VkResult Device::SetDebugUtilsObjectNameEXT(const VkDebugUtilsObjectNameInfoEXT* pNameInfo) {
    return dispatch_table_.SetDebugUtilsObjectNameEXT(handle_, pNameInfo);
}
VkResult Device::SetDebugUtilsObjectTagEXT(const VkDebugUtilsObjectTagInfoEXT* pTagInfo) {
    return dispatch_table_.SetDebugUtilsObjectTagEXT(handle_, pTagInfo);
}
#ifdef VK_USE_PLATFORM_ANDROID_KHR
VkResult Device::GetAndroidHardwareBufferPropertiesANDROID(const struct AHardwareBuffer* buffer,
                                                           VkAndroidHardwareBufferPropertiesANDROID* pProperties) {
    VkResult result = dispatch_table_.GetAndroidHardwareBufferPropertiesANDROID(handle_, buffer, pProperties);
    if (pProperties != nullptr) {
        vksc::ConvertOutStructChainToVulkanSC<VkAndroidHardwareBufferPropertiesANDROID>(pProperties);
    }
    return result;
}
VkResult Device::GetMemoryAndroidHardwareBufferANDROID(const VkMemoryGetAndroidHardwareBufferInfoANDROID* pInfo,
                                                       struct AHardwareBuffer** pBuffer) {
    return dispatch_table_.GetMemoryAndroidHardwareBufferANDROID(handle_, pInfo, pBuffer);
}
#endif  // VK_USE_PLATFORM_ANDROID_KHR
#ifdef VK_ENABLE_BETA_EXTENSIONS
VkResult Device::CreateExecutionGraphPipelinesAMDX(VkPipelineCache pipelineCache, uint32_t createInfoCount,
                                                   const VkExecutionGraphPipelineCreateInfoAMDX* pCreateInfos,
                                                   const VkAllocationCallbacks* pAllocator, VkPipeline* pPipelines) {
    return dispatch_table_.CreateExecutionGraphPipelinesAMDX(handle_, pipelineCache, createInfoCount, pCreateInfos, pAllocator,
                                                             pPipelines);
}
VkResult Device::GetExecutionGraphPipelineScratchSizeAMDX(VkPipeline executionGraph,
                                                          VkExecutionGraphPipelineScratchSizeAMDX* pSizeInfo) {
    VkResult result = dispatch_table_.GetExecutionGraphPipelineScratchSizeAMDX(handle_, executionGraph, pSizeInfo);
    if (pSizeInfo != nullptr) {
        vksc::ConvertOutStructChainToVulkanSC<VkExecutionGraphPipelineScratchSizeAMDX>(pSizeInfo);
    }
    return result;
}
VkResult Device::GetExecutionGraphPipelineNodeIndexAMDX(VkPipeline executionGraph,
                                                        const VkPipelineShaderStageNodeCreateInfoAMDX* pNodeInfo,
                                                        uint32_t* pNodeIndex) {
    return dispatch_table_.GetExecutionGraphPipelineNodeIndexAMDX(handle_, executionGraph, pNodeInfo, pNodeIndex);
}
#endif  // VK_ENABLE_BETA_EXTENSIONS
VkResult Device::GetImageDrmFormatModifierPropertiesEXT(VkImage image, VkImageDrmFormatModifierPropertiesEXT* pProperties) {
    VkResult result = dispatch_table_.GetImageDrmFormatModifierPropertiesEXT(handle_, image, pProperties);
    if (pProperties != nullptr) {
        vksc::ConvertOutStructChainToVulkanSC<VkImageDrmFormatModifierPropertiesEXT>(pProperties);
    }
    return result;
}
VkResult Device::CreateValidationCacheEXT(const VkValidationCacheCreateInfoEXT* pCreateInfo,
                                          const VkAllocationCallbacks* pAllocator, VkValidationCacheEXT* pValidationCache) {
    return dispatch_table_.CreateValidationCacheEXT(handle_, pCreateInfo, pAllocator, pValidationCache);
}
void Device::DestroyValidationCacheEXT(VkValidationCacheEXT validationCache, const VkAllocationCallbacks* pAllocator) {
    dispatch_table_.DestroyValidationCacheEXT(handle_, validationCache, pAllocator);
}
VkResult Device::MergeValidationCachesEXT(VkValidationCacheEXT dstCache, uint32_t srcCacheCount,
                                          const VkValidationCacheEXT* pSrcCaches) {
    return dispatch_table_.MergeValidationCachesEXT(handle_, dstCache, srcCacheCount, pSrcCaches);
}
VkResult Device::GetValidationCacheDataEXT(VkValidationCacheEXT validationCache, size_t* pDataSize, void* pData) {
    return dispatch_table_.GetValidationCacheDataEXT(handle_, validationCache, pDataSize, pData);
}
VkResult Device::CreateAccelerationStructureNV(const VkAccelerationStructureCreateInfoNV* pCreateInfo,
                                               const VkAllocationCallbacks* pAllocator,
                                               VkAccelerationStructureNV* pAccelerationStructure) {
    return dispatch_table_.CreateAccelerationStructureNV(handle_, pCreateInfo, pAllocator, pAccelerationStructure);
}
void Device::DestroyAccelerationStructureNV(VkAccelerationStructureNV accelerationStructure,
                                            const VkAllocationCallbacks* pAllocator) {
    dispatch_table_.DestroyAccelerationStructureNV(handle_, accelerationStructure, pAllocator);
}
void Device::GetAccelerationStructureMemoryRequirementsNV(const VkAccelerationStructureMemoryRequirementsInfoNV* pInfo,
                                                          VkMemoryRequirements2KHR* pMemoryRequirements) {
    dispatch_table_.GetAccelerationStructureMemoryRequirementsNV(handle_, pInfo, pMemoryRequirements);
}
VkResult Device::BindAccelerationStructureMemoryNV(uint32_t bindInfoCount,
                                                   const VkBindAccelerationStructureMemoryInfoNV* pBindInfos) {
    return dispatch_table_.BindAccelerationStructureMemoryNV(handle_, bindInfoCount, pBindInfos);
}
VkResult Device::CreateRayTracingPipelinesNV(VkPipelineCache pipelineCache, uint32_t createInfoCount,
                                             const VkRayTracingPipelineCreateInfoNV* pCreateInfos,
                                             const VkAllocationCallbacks* pAllocator, VkPipeline* pPipelines) {
    return dispatch_table_.CreateRayTracingPipelinesNV(handle_, pipelineCache, createInfoCount, pCreateInfos, pAllocator,
                                                       pPipelines);
}
VkResult Device::GetRayTracingShaderGroupHandlesKHR(VkPipeline pipeline, uint32_t firstGroup, uint32_t groupCount, size_t dataSize,
                                                    void* pData) {
    return dispatch_table_.GetRayTracingShaderGroupHandlesKHR(handle_, pipeline, firstGroup, groupCount, dataSize, pData);
}
VkResult Device::GetAccelerationStructureHandleNV(VkAccelerationStructureNV accelerationStructure, size_t dataSize, void* pData) {
    return dispatch_table_.GetAccelerationStructureHandleNV(handle_, accelerationStructure, dataSize, pData);
}
VkResult Device::CompileDeferredNV(VkPipeline pipeline, uint32_t shader) {
    return dispatch_table_.CompileDeferredNV(handle_, pipeline, shader);
}
VkResult Device::GetMemoryHostPointerPropertiesEXT(VkExternalMemoryHandleTypeFlagBits handleType, const void* pHostPointer,
                                                   VkMemoryHostPointerPropertiesEXT* pMemoryHostPointerProperties) {
    VkResult result =
        dispatch_table_.GetMemoryHostPointerPropertiesEXT(handle_, handleType, pHostPointer, pMemoryHostPointerProperties);
    if (pMemoryHostPointerProperties != nullptr) {
        vksc::ConvertOutStructChainToVulkanSC<VkMemoryHostPointerPropertiesEXT>(pMemoryHostPointerProperties);
    }
    return result;
}
VkResult Device::InitializePerformanceApiINTEL(const VkInitializePerformanceApiInfoINTEL* pInitializeInfo) {
    return dispatch_table_.InitializePerformanceApiINTEL(handle_, pInitializeInfo);
}
void Device::UninitializePerformanceApiINTEL() { dispatch_table_.UninitializePerformanceApiINTEL(handle_); }
VkResult Device::AcquirePerformanceConfigurationINTEL(const VkPerformanceConfigurationAcquireInfoINTEL* pAcquireInfo,
                                                      VkPerformanceConfigurationINTEL* pConfiguration) {
    return dispatch_table_.AcquirePerformanceConfigurationINTEL(handle_, pAcquireInfo, pConfiguration);
}
VkResult Device::ReleasePerformanceConfigurationINTEL(VkPerformanceConfigurationINTEL configuration) {
    return dispatch_table_.ReleasePerformanceConfigurationINTEL(handle_, configuration);
}
VkResult Device::GetPerformanceParameterINTEL(VkPerformanceParameterTypeINTEL parameter, VkPerformanceValueINTEL* pValue) {
    VkResult result = dispatch_table_.GetPerformanceParameterINTEL(handle_, parameter, pValue);
    if (pValue != nullptr) {
        vksc::ConvertOutStructToVulkanSC<VkPerformanceValueINTEL>(pValue);
    }
    return result;
}
void Device::SetLocalDimmingAMD(VkSwapchainKHR swapChain, VkBool32 localDimmingEnable) {
    dispatch_table_.SetLocalDimmingAMD(handle_, swapChain, localDimmingEnable);
}
#ifdef VK_USE_PLATFORM_WIN32_KHR
VkResult Device::AcquireFullScreenExclusiveModeEXT(VkSwapchainKHR swapchain) {
    return dispatch_table_.AcquireFullScreenExclusiveModeEXT(handle_, swapchain);
}
VkResult Device::ReleaseFullScreenExclusiveModeEXT(VkSwapchainKHR swapchain) {
    return dispatch_table_.ReleaseFullScreenExclusiveModeEXT(handle_, swapchain);
}
VkResult Device::GetDeviceGroupSurfacePresentModes2EXT(const VkPhysicalDeviceSurfaceInfo2KHR* pSurfaceInfo,
                                                       VkDeviceGroupPresentModeFlagsKHR* pModes) {
    return dispatch_table_.GetDeviceGroupSurfacePresentModes2EXT(handle_, pSurfaceInfo, pModes);
}
#endif  // VK_USE_PLATFORM_WIN32_KHR
VkResult Device::CopyMemoryToImageEXT(const VkCopyMemoryToImageInfoEXT* pCopyMemoryToImageInfo) {
    return dispatch_table_.CopyMemoryToImageEXT(handle_, pCopyMemoryToImageInfo);
}
VkResult Device::CopyImageToMemoryEXT(const VkCopyImageToMemoryInfoEXT* pCopyImageToMemoryInfo) {
    return dispatch_table_.CopyImageToMemoryEXT(handle_, pCopyImageToMemoryInfo);
}
VkResult Device::CopyImageToImageEXT(const VkCopyImageToImageInfoEXT* pCopyImageToImageInfo) {
    return dispatch_table_.CopyImageToImageEXT(handle_, pCopyImageToImageInfo);
}
VkResult Device::TransitionImageLayoutEXT(uint32_t transitionCount, const VkHostImageLayoutTransitionInfoEXT* pTransitions) {
    return dispatch_table_.TransitionImageLayoutEXT(handle_, transitionCount, pTransitions);
}
VkResult Device::ReleaseSwapchainImagesEXT(const VkReleaseSwapchainImagesInfoEXT* pReleaseInfo) {
    return dispatch_table_.ReleaseSwapchainImagesEXT(handle_, pReleaseInfo);
}
void Device::GetGeneratedCommandsMemoryRequirementsNV(const VkGeneratedCommandsMemoryRequirementsInfoNV* pInfo,
                                                      VkMemoryRequirements2* pMemoryRequirements) {
    dispatch_table_.GetGeneratedCommandsMemoryRequirementsNV(handle_, pInfo, pMemoryRequirements);
    if (pMemoryRequirements != nullptr) {
        vksc::ConvertOutStructChainToVulkanSC<VkMemoryRequirements2>(pMemoryRequirements);
    }
}
VkResult Device::CreateIndirectCommandsLayoutNV(const VkIndirectCommandsLayoutCreateInfoNV* pCreateInfo,
                                                const VkAllocationCallbacks* pAllocator,
                                                VkIndirectCommandsLayoutNV* pIndirectCommandsLayout) {
    return dispatch_table_.CreateIndirectCommandsLayoutNV(handle_, pCreateInfo, pAllocator, pIndirectCommandsLayout);
}
void Device::DestroyIndirectCommandsLayoutNV(VkIndirectCommandsLayoutNV indirectCommandsLayout,
                                             const VkAllocationCallbacks* pAllocator) {
    dispatch_table_.DestroyIndirectCommandsLayoutNV(handle_, indirectCommandsLayout, pAllocator);
}
VkResult Device::CreateCudaModuleNV(const VkCudaModuleCreateInfoNV* pCreateInfo, const VkAllocationCallbacks* pAllocator,
                                    VkCudaModuleNV* pModule) {
    return dispatch_table_.CreateCudaModuleNV(handle_, pCreateInfo, pAllocator, pModule);
}
VkResult Device::GetCudaModuleCacheNV(VkCudaModuleNV module, size_t* pCacheSize, void* pCacheData) {
    return dispatch_table_.GetCudaModuleCacheNV(handle_, module, pCacheSize, pCacheData);
}
VkResult Device::CreateCudaFunctionNV(const VkCudaFunctionCreateInfoNV* pCreateInfo, const VkAllocationCallbacks* pAllocator,
                                      VkCudaFunctionNV* pFunction) {
    return dispatch_table_.CreateCudaFunctionNV(handle_, pCreateInfo, pAllocator, pFunction);
}
void Device::DestroyCudaModuleNV(VkCudaModuleNV module, const VkAllocationCallbacks* pAllocator) {
    dispatch_table_.DestroyCudaModuleNV(handle_, module, pAllocator);
}
void Device::DestroyCudaFunctionNV(VkCudaFunctionNV function, const VkAllocationCallbacks* pAllocator) {
    dispatch_table_.DestroyCudaFunctionNV(handle_, function, pAllocator);
}
#ifdef VK_USE_PLATFORM_METAL_EXT
void Device::ExportMetalObjectsEXT(VkExportMetalObjectsInfoEXT* pMetalObjectsInfo) {
    dispatch_table_.ExportMetalObjectsEXT(handle_, pMetalObjectsInfo);
    if (pMetalObjectsInfo != nullptr) {
        vksc::ConvertOutStructChainToVulkanSC<VkExportMetalObjectsInfoEXT>(pMetalObjectsInfo);
    }
}
#endif  // VK_USE_PLATFORM_METAL_EXT
void Device::GetDescriptorSetLayoutSizeEXT(VkDescriptorSetLayout layout, VkDeviceSize* pLayoutSizeInBytes) {
    dispatch_table_.GetDescriptorSetLayoutSizeEXT(handle_, layout, pLayoutSizeInBytes);
}
void Device::GetDescriptorSetLayoutBindingOffsetEXT(VkDescriptorSetLayout layout, uint32_t binding, VkDeviceSize* pOffset) {
    dispatch_table_.GetDescriptorSetLayoutBindingOffsetEXT(handle_, layout, binding, pOffset);
}
void Device::GetDescriptorEXT(const VkDescriptorGetInfoEXT* pDescriptorInfo, size_t dataSize, void* pDescriptor) {
    dispatch_table_.GetDescriptorEXT(handle_, pDescriptorInfo, dataSize, pDescriptor);
}
VkResult Device::GetBufferOpaqueCaptureDescriptorDataEXT(const VkBufferCaptureDescriptorDataInfoEXT* pInfo, void* pData) {
    return dispatch_table_.GetBufferOpaqueCaptureDescriptorDataEXT(handle_, pInfo, pData);
}
VkResult Device::GetImageOpaqueCaptureDescriptorDataEXT(const VkImageCaptureDescriptorDataInfoEXT* pInfo, void* pData) {
    return dispatch_table_.GetImageOpaqueCaptureDescriptorDataEXT(handle_, pInfo, pData);
}
VkResult Device::GetImageViewOpaqueCaptureDescriptorDataEXT(const VkImageViewCaptureDescriptorDataInfoEXT* pInfo, void* pData) {
    return dispatch_table_.GetImageViewOpaqueCaptureDescriptorDataEXT(handle_, pInfo, pData);
}
VkResult Device::GetSamplerOpaqueCaptureDescriptorDataEXT(const VkSamplerCaptureDescriptorDataInfoEXT* pInfo, void* pData) {
    return dispatch_table_.GetSamplerOpaqueCaptureDescriptorDataEXT(handle_, pInfo, pData);
}
VkResult Device::GetAccelerationStructureOpaqueCaptureDescriptorDataEXT(
    const VkAccelerationStructureCaptureDescriptorDataInfoEXT* pInfo, void* pData) {
    return dispatch_table_.GetAccelerationStructureOpaqueCaptureDescriptorDataEXT(handle_, pInfo, pData);
}
VkResult Device::GetDeviceFaultInfoEXT(VkDeviceFaultCountsEXT* pFaultCounts, VkDeviceFaultInfoEXT* pFaultInfo) {
    VkResult result = dispatch_table_.GetDeviceFaultInfoEXT(handle_, pFaultCounts, pFaultInfo);
    if (pFaultCounts != nullptr) {
        vksc::ConvertOutStructChainToVulkanSC<VkDeviceFaultCountsEXT>(pFaultCounts);
    }
    if (pFaultInfo != nullptr) {
        vksc::ConvertOutStructChainToVulkanSC<VkDeviceFaultInfoEXT>(pFaultInfo);
    }
    return result;
}
#ifdef VK_USE_PLATFORM_FUCHSIA
VkResult Device::GetMemoryZirconHandleFUCHSIA(const VkMemoryGetZirconHandleInfoFUCHSIA* pGetZirconHandleInfo,
                                              zx_handle_t* pZirconHandle) {
    return dispatch_table_.GetMemoryZirconHandleFUCHSIA(handle_, pGetZirconHandleInfo, pZirconHandle);
}
VkResult Device::GetMemoryZirconHandlePropertiesFUCHSIA(VkExternalMemoryHandleTypeFlagBits handleType, zx_handle_t zirconHandle,
                                                        VkMemoryZirconHandlePropertiesFUCHSIA* pMemoryZirconHandleProperties) {
    VkResult result =
        dispatch_table_.GetMemoryZirconHandlePropertiesFUCHSIA(handle_, handleType, zirconHandle, pMemoryZirconHandleProperties);
    if (pMemoryZirconHandleProperties != nullptr) {
        vksc::ConvertOutStructChainToVulkanSC<VkMemoryZirconHandlePropertiesFUCHSIA>(pMemoryZirconHandleProperties);
    }
    return result;
}
VkResult Device::ImportSemaphoreZirconHandleFUCHSIA(
    const VkImportSemaphoreZirconHandleInfoFUCHSIA* pImportSemaphoreZirconHandleInfo) {
    return dispatch_table_.ImportSemaphoreZirconHandleFUCHSIA(handle_, pImportSemaphoreZirconHandleInfo);
}
VkResult Device::GetSemaphoreZirconHandleFUCHSIA(const VkSemaphoreGetZirconHandleInfoFUCHSIA* pGetZirconHandleInfo,
                                                 zx_handle_t* pZirconHandle) {
    return dispatch_table_.GetSemaphoreZirconHandleFUCHSIA(handle_, pGetZirconHandleInfo, pZirconHandle);
}
VkResult Device::CreateBufferCollectionFUCHSIA(const VkBufferCollectionCreateInfoFUCHSIA* pCreateInfo,
                                               const VkAllocationCallbacks* pAllocator, VkBufferCollectionFUCHSIA* pCollection) {
    return dispatch_table_.CreateBufferCollectionFUCHSIA(handle_, pCreateInfo, pAllocator, pCollection);
}
VkResult Device::SetBufferCollectionImageConstraintsFUCHSIA(VkBufferCollectionFUCHSIA collection,
                                                            const VkImageConstraintsInfoFUCHSIA* pImageConstraintsInfo) {
    return dispatch_table_.SetBufferCollectionImageConstraintsFUCHSIA(handle_, collection, pImageConstraintsInfo);
}
VkResult Device::SetBufferCollectionBufferConstraintsFUCHSIA(VkBufferCollectionFUCHSIA collection,
                                                             const VkBufferConstraintsInfoFUCHSIA* pBufferConstraintsInfo) {
    return dispatch_table_.SetBufferCollectionBufferConstraintsFUCHSIA(handle_, collection, pBufferConstraintsInfo);
}
void Device::DestroyBufferCollectionFUCHSIA(VkBufferCollectionFUCHSIA collection, const VkAllocationCallbacks* pAllocator) {
    dispatch_table_.DestroyBufferCollectionFUCHSIA(handle_, collection, pAllocator);
}
VkResult Device::GetBufferCollectionPropertiesFUCHSIA(VkBufferCollectionFUCHSIA collection,
                                                      VkBufferCollectionPropertiesFUCHSIA* pProperties) {
    VkResult result = dispatch_table_.GetBufferCollectionPropertiesFUCHSIA(handle_, collection, pProperties);
    if (pProperties != nullptr) {
        vksc::ConvertOutStructChainToVulkanSC<VkBufferCollectionPropertiesFUCHSIA>(pProperties);
    }
    return result;
}
#endif  // VK_USE_PLATFORM_FUCHSIA
VkResult Device::GetDeviceSubpassShadingMaxWorkgroupSizeHUAWEI(VkRenderPass renderpass, VkExtent2D* pMaxWorkgroupSize) {
    VkResult result = dispatch_table_.GetDeviceSubpassShadingMaxWorkgroupSizeHUAWEI(handle_, renderpass, pMaxWorkgroupSize);
    if (pMaxWorkgroupSize != nullptr) {
        vksc::ConvertOutStructToVulkanSC<VkExtent2D>(pMaxWorkgroupSize);
    }
    return result;
}
VkResult Device::GetMemoryRemoteAddressNV(const VkMemoryGetRemoteAddressInfoNV* pMemoryGetRemoteAddressInfo,
                                          VkRemoteAddressNV* pAddress) {
    return dispatch_table_.GetMemoryRemoteAddressNV(handle_, pMemoryGetRemoteAddressInfo, pAddress);
}
VkResult Device::GetPipelinePropertiesEXT(const VkPipelineInfoEXT* pPipelineInfo, VkBaseOutStructure* pPipelineProperties) {
    VkResult result = dispatch_table_.GetPipelinePropertiesEXT(handle_, pPipelineInfo, pPipelineProperties);
    if (pPipelineProperties != nullptr) {
        vksc::ConvertOutStructToVulkanSC<VkBaseOutStructure>(pPipelineProperties);
    }
    return result;
}
VkResult Device::CreateMicromapEXT(const VkMicromapCreateInfoEXT* pCreateInfo, const VkAllocationCallbacks* pAllocator,
                                   VkMicromapEXT* pMicromap) {
    return dispatch_table_.CreateMicromapEXT(handle_, pCreateInfo, pAllocator, pMicromap);
}
void Device::DestroyMicromapEXT(VkMicromapEXT micromap, const VkAllocationCallbacks* pAllocator) {
    dispatch_table_.DestroyMicromapEXT(handle_, micromap, pAllocator);
}
VkResult Device::BuildMicromapsEXT(VkDeferredOperationKHR deferredOperation, uint32_t infoCount,
                                   const VkMicromapBuildInfoEXT* pInfos) {
    return dispatch_table_.BuildMicromapsEXT(handle_, deferredOperation, infoCount, pInfos);
}
VkResult Device::CopyMicromapEXT(VkDeferredOperationKHR deferredOperation, const VkCopyMicromapInfoEXT* pInfo) {
    return dispatch_table_.CopyMicromapEXT(handle_, deferredOperation, pInfo);
}
VkResult Device::CopyMicromapToMemoryEXT(VkDeferredOperationKHR deferredOperation, const VkCopyMicromapToMemoryInfoEXT* pInfo) {
    return dispatch_table_.CopyMicromapToMemoryEXT(handle_, deferredOperation, pInfo);
}
VkResult Device::CopyMemoryToMicromapEXT(VkDeferredOperationKHR deferredOperation, const VkCopyMemoryToMicromapInfoEXT* pInfo) {
    return dispatch_table_.CopyMemoryToMicromapEXT(handle_, deferredOperation, pInfo);
}
VkResult Device::WriteMicromapsPropertiesEXT(uint32_t micromapCount, const VkMicromapEXT* pMicromaps, VkQueryType queryType,
                                             size_t dataSize, void* pData, size_t stride) {
    return dispatch_table_.WriteMicromapsPropertiesEXT(handle_, micromapCount, pMicromaps, queryType, dataSize, pData, stride);
}
void Device::GetDeviceMicromapCompatibilityEXT(const VkMicromapVersionInfoEXT* pVersionInfo,
                                               VkAccelerationStructureCompatibilityKHR* pCompatibility) {
    dispatch_table_.GetDeviceMicromapCompatibilityEXT(handle_, pVersionInfo, pCompatibility);
}
void Device::GetMicromapBuildSizesEXT(VkAccelerationStructureBuildTypeKHR buildType, const VkMicromapBuildInfoEXT* pBuildInfo,
                                      VkMicromapBuildSizesInfoEXT* pSizeInfo) {
    dispatch_table_.GetMicromapBuildSizesEXT(handle_, buildType, pBuildInfo, pSizeInfo);
    if (pSizeInfo != nullptr) {
        vksc::ConvertOutStructChainToVulkanSC<VkMicromapBuildSizesInfoEXT>(pSizeInfo);
    }
}
void Device::SetDeviceMemoryPriorityEXT(VkDeviceMemory memory, float priority) {
    dispatch_table_.SetDeviceMemoryPriorityEXT(handle_, memory, priority);
}
void Device::GetDescriptorSetLayoutHostMappingInfoVALVE(const VkDescriptorSetBindingReferenceVALVE* pBindingReference,
                                                        VkDescriptorSetLayoutHostMappingInfoVALVE* pHostMapping) {
    dispatch_table_.GetDescriptorSetLayoutHostMappingInfoVALVE(handle_, pBindingReference, pHostMapping);
    if (pHostMapping != nullptr) {
        vksc::ConvertOutStructChainToVulkanSC<VkDescriptorSetLayoutHostMappingInfoVALVE>(pHostMapping);
    }
}
void Device::GetDescriptorSetHostMappingVALVE(VkDescriptorSet descriptorSet, void** ppData) {
    dispatch_table_.GetDescriptorSetHostMappingVALVE(handle_, descriptorSet, ppData);
}
void Device::GetPipelineIndirectMemoryRequirementsNV(const VkComputePipelineCreateInfo* pCreateInfo,
                                                     VkMemoryRequirements2* pMemoryRequirements) {
    dispatch_table_.GetPipelineIndirectMemoryRequirementsNV(handle_, pCreateInfo, pMemoryRequirements);
    if (pMemoryRequirements != nullptr) {
        vksc::ConvertOutStructChainToVulkanSC<VkMemoryRequirements2>(pMemoryRequirements);
    }
}
VkDeviceAddress Device::GetPipelineIndirectDeviceAddressNV(const VkPipelineIndirectDeviceAddressInfoNV* pInfo) {
    return dispatch_table_.GetPipelineIndirectDeviceAddressNV(handle_, pInfo);
}
void Device::GetShaderModuleIdentifierEXT(VkShaderModule shaderModule, VkShaderModuleIdentifierEXT* pIdentifier) {
    dispatch_table_.GetShaderModuleIdentifierEXT(handle_, shaderModule, pIdentifier);
    if (pIdentifier != nullptr) {
        vksc::ConvertOutStructChainToVulkanSC<VkShaderModuleIdentifierEXT>(pIdentifier);
    }
}
void Device::GetShaderModuleCreateInfoIdentifierEXT(const VkShaderModuleCreateInfo* pCreateInfo,
                                                    VkShaderModuleIdentifierEXT* pIdentifier) {
    dispatch_table_.GetShaderModuleCreateInfoIdentifierEXT(handle_, pCreateInfo, pIdentifier);
    if (pIdentifier != nullptr) {
        vksc::ConvertOutStructChainToVulkanSC<VkShaderModuleIdentifierEXT>(pIdentifier);
    }
}
VkResult Device::CreateOpticalFlowSessionNV(const VkOpticalFlowSessionCreateInfoNV* pCreateInfo,
                                            const VkAllocationCallbacks* pAllocator, VkOpticalFlowSessionNV* pSession) {
    return dispatch_table_.CreateOpticalFlowSessionNV(handle_, pCreateInfo, pAllocator, pSession);
}
void Device::DestroyOpticalFlowSessionNV(VkOpticalFlowSessionNV session, const VkAllocationCallbacks* pAllocator) {
    dispatch_table_.DestroyOpticalFlowSessionNV(handle_, session, pAllocator);
}
VkResult Device::BindOpticalFlowSessionImageNV(VkOpticalFlowSessionNV session, VkOpticalFlowSessionBindingPointNV bindingPoint,
                                               VkImageView view, VkImageLayout layout) {
    return dispatch_table_.BindOpticalFlowSessionImageNV(handle_, session, bindingPoint, view, layout);
}
void Device::AntiLagUpdateAMD(const VkAntiLagDataAMD* pData) { dispatch_table_.AntiLagUpdateAMD(handle_, pData); }
VkResult Device::CreateShadersEXT(uint32_t createInfoCount, const VkShaderCreateInfoEXT* pCreateInfos,
                                  const VkAllocationCallbacks* pAllocator, VkShaderEXT* pShaders) {
    return dispatch_table_.CreateShadersEXT(handle_, createInfoCount, pCreateInfos, pAllocator, pShaders);
}
void Device::DestroyShaderEXT(VkShaderEXT shader, const VkAllocationCallbacks* pAllocator) {
    dispatch_table_.DestroyShaderEXT(handle_, shader, pAllocator);
}
VkResult Device::GetShaderBinaryDataEXT(VkShaderEXT shader, size_t* pDataSize, void* pData) {
    return dispatch_table_.GetShaderBinaryDataEXT(handle_, shader, pDataSize, pData);
}
VkResult Device::GetFramebufferTilePropertiesQCOM(VkFramebuffer framebuffer, uint32_t* pPropertiesCount,
                                                  VkTilePropertiesQCOM* pProperties) {
    VkResult result = dispatch_table_.GetFramebufferTilePropertiesQCOM(handle_, framebuffer, pPropertiesCount, pProperties);
    if (pProperties != nullptr) {
        for (uint32_t i = 0; i < *pPropertiesCount; ++i)
            vksc::ConvertOutStructChainToVulkanSC<VkTilePropertiesQCOM>(&pProperties[i]);
    }
    return result;
}
VkResult Device::GetDynamicRenderingTilePropertiesQCOM(const VkRenderingInfo* pRenderingInfo, VkTilePropertiesQCOM* pProperties) {
    VkResult result = dispatch_table_.GetDynamicRenderingTilePropertiesQCOM(handle_, pRenderingInfo, pProperties);
    if (pProperties != nullptr) {
        vksc::ConvertOutStructChainToVulkanSC<VkTilePropertiesQCOM>(pProperties);
    }
    return result;
}
VkResult Device::SetLatencySleepModeNV(VkSwapchainKHR swapchain, const VkLatencySleepModeInfoNV* pSleepModeInfo) {
    return dispatch_table_.SetLatencySleepModeNV(handle_, swapchain, pSleepModeInfo);
}
VkResult Device::LatencySleepNV(VkSwapchainKHR swapchain, const VkLatencySleepInfoNV* pSleepInfo) {
    return dispatch_table_.LatencySleepNV(handle_, swapchain, pSleepInfo);
}
void Device::SetLatencyMarkerNV(VkSwapchainKHR swapchain, const VkSetLatencyMarkerInfoNV* pLatencyMarkerInfo) {
    dispatch_table_.SetLatencyMarkerNV(handle_, swapchain, pLatencyMarkerInfo);
}
void Device::GetLatencyTimingsNV(VkSwapchainKHR swapchain, VkGetLatencyMarkerInfoNV* pLatencyMarkerInfo) {
    dispatch_table_.GetLatencyTimingsNV(handle_, swapchain, pLatencyMarkerInfo);
    if (pLatencyMarkerInfo != nullptr) {
        vksc::ConvertOutStructChainToVulkanSC<VkGetLatencyMarkerInfoNV>(pLatencyMarkerInfo);
    }
}
#ifdef VK_USE_PLATFORM_SCREEN_QNX
VkResult Device::GetScreenBufferPropertiesQNX(const struct _screen_buffer* buffer, VkScreenBufferPropertiesQNX* pProperties) {
    VkResult result = dispatch_table_.GetScreenBufferPropertiesQNX(handle_, buffer, pProperties);
    if (pProperties != nullptr) {
        vksc::ConvertOutStructChainToVulkanSC<VkScreenBufferPropertiesQNX>(pProperties);
    }
    return result;
}
#endif  // VK_USE_PLATFORM_SCREEN_QNX
VkResult Device::CreateAccelerationStructureKHR(const VkAccelerationStructureCreateInfoKHR* pCreateInfo,
                                                const VkAllocationCallbacks* pAllocator,
                                                VkAccelerationStructureKHR* pAccelerationStructure) {
    return dispatch_table_.CreateAccelerationStructureKHR(handle_, pCreateInfo, pAllocator, pAccelerationStructure);
}
void Device::DestroyAccelerationStructureKHR(VkAccelerationStructureKHR accelerationStructure,
                                             const VkAllocationCallbacks* pAllocator) {
    dispatch_table_.DestroyAccelerationStructureKHR(handle_, accelerationStructure, pAllocator);
}
VkResult Device::BuildAccelerationStructuresKHR(VkDeferredOperationKHR deferredOperation, uint32_t infoCount,
                                                const VkAccelerationStructureBuildGeometryInfoKHR* pInfos,
                                                const VkAccelerationStructureBuildRangeInfoKHR* const* ppBuildRangeInfos) {
    return dispatch_table_.BuildAccelerationStructuresKHR(handle_, deferredOperation, infoCount, pInfos, ppBuildRangeInfos);
}
VkResult Device::CopyAccelerationStructureKHR(VkDeferredOperationKHR deferredOperation,
                                              const VkCopyAccelerationStructureInfoKHR* pInfo) {
    return dispatch_table_.CopyAccelerationStructureKHR(handle_, deferredOperation, pInfo);
}
VkResult Device::CopyAccelerationStructureToMemoryKHR(VkDeferredOperationKHR deferredOperation,
                                                      const VkCopyAccelerationStructureToMemoryInfoKHR* pInfo) {
    return dispatch_table_.CopyAccelerationStructureToMemoryKHR(handle_, deferredOperation, pInfo);
}
VkResult Device::CopyMemoryToAccelerationStructureKHR(VkDeferredOperationKHR deferredOperation,
                                                      const VkCopyMemoryToAccelerationStructureInfoKHR* pInfo) {
    return dispatch_table_.CopyMemoryToAccelerationStructureKHR(handle_, deferredOperation, pInfo);
}
VkResult Device::WriteAccelerationStructuresPropertiesKHR(uint32_t accelerationStructureCount,
                                                          const VkAccelerationStructureKHR* pAccelerationStructures,
                                                          VkQueryType queryType, size_t dataSize, void* pData, size_t stride) {
    return dispatch_table_.WriteAccelerationStructuresPropertiesKHR(handle_, accelerationStructureCount, pAccelerationStructures,
                                                                    queryType, dataSize, pData, stride);
}
VkDeviceAddress Device::GetAccelerationStructureDeviceAddressKHR(const VkAccelerationStructureDeviceAddressInfoKHR* pInfo) {
    return dispatch_table_.GetAccelerationStructureDeviceAddressKHR(handle_, pInfo);
}
void Device::GetDeviceAccelerationStructureCompatibilityKHR(const VkAccelerationStructureVersionInfoKHR* pVersionInfo,
                                                            VkAccelerationStructureCompatibilityKHR* pCompatibility) {
    dispatch_table_.GetDeviceAccelerationStructureCompatibilityKHR(handle_, pVersionInfo, pCompatibility);
}
void Device::GetAccelerationStructureBuildSizesKHR(VkAccelerationStructureBuildTypeKHR buildType,
                                                   const VkAccelerationStructureBuildGeometryInfoKHR* pBuildInfo,
                                                   const uint32_t* pMaxPrimitiveCounts,
                                                   VkAccelerationStructureBuildSizesInfoKHR* pSizeInfo) {
    dispatch_table_.GetAccelerationStructureBuildSizesKHR(handle_, buildType, pBuildInfo, pMaxPrimitiveCounts, pSizeInfo);
    if (pSizeInfo != nullptr) {
        vksc::ConvertOutStructChainToVulkanSC<VkAccelerationStructureBuildSizesInfoKHR>(pSizeInfo);
    }
}
VkResult Device::CreateRayTracingPipelinesKHR(VkDeferredOperationKHR deferredOperation, VkPipelineCache pipelineCache,
                                              uint32_t createInfoCount, const VkRayTracingPipelineCreateInfoKHR* pCreateInfos,
                                              const VkAllocationCallbacks* pAllocator, VkPipeline* pPipelines) {
    return dispatch_table_.CreateRayTracingPipelinesKHR(handle_, deferredOperation, pipelineCache, createInfoCount, pCreateInfos,
                                                        pAllocator, pPipelines);
}
VkResult Device::GetRayTracingCaptureReplayShaderGroupHandlesKHR(VkPipeline pipeline, uint32_t firstGroup, uint32_t groupCount,
                                                                 size_t dataSize, void* pData) {
    return dispatch_table_.GetRayTracingCaptureReplayShaderGroupHandlesKHR(handle_, pipeline, firstGroup, groupCount, dataSize,
                                                                           pData);
}
VkDeviceSize Device::GetRayTracingShaderGroupStackSizeKHR(VkPipeline pipeline, uint32_t group, VkShaderGroupShaderKHR groupShader) {
    return dispatch_table_.GetRayTracingShaderGroupStackSizeKHR(handle_, pipeline, group, groupShader);
}

}  // namespace vk

// NOLINTEND
