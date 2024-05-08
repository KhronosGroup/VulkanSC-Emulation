// *** THIS FILE IS GENERATED - DO NOT EDIT ***
// See vk_dispatchable_generator.py for modifications

/*
 * Copyright (c) 2024 The Khronos Group Inc.
 * Copyright (c) 2024 RasterGrid Kft.
 *
 * SPDX-License-Identifier: Apache-2.0
 */
// NOLINTBEGIN

#pragma once

#include "vk_dispatch_table.h"

namespace vk {

class Device {
  public:
    Device(VkDevice handle, const DispatchTable& dispatch_table) : handle_(handle), dispatch_table_(dispatch_table) {}

    PFN_vkVoidFunction GetDeviceProcAddr(const char* pName);
    void DestroyDevice(const VkAllocationCallbacks* pAllocator);
    void GetDeviceQueue(uint32_t queueFamilyIndex, uint32_t queueIndex, VkQueue* pQueue);
    VkResult DeviceWaitIdle();
    VkResult AllocateMemory(const VkMemoryAllocateInfo* pAllocateInfo, const VkAllocationCallbacks* pAllocator,
                            VkDeviceMemory* pMemory);
    void FreeMemory(VkDeviceMemory memory, const VkAllocationCallbacks* pAllocator);
    VkResult MapMemory(VkDeviceMemory memory, VkDeviceSize offset, VkDeviceSize size, VkMemoryMapFlags flags, void** ppData);
    void UnmapMemory(VkDeviceMemory memory);
    VkResult FlushMappedMemoryRanges(uint32_t memoryRangeCount, const VkMappedMemoryRange* pMemoryRanges);
    VkResult InvalidateMappedMemoryRanges(uint32_t memoryRangeCount, const VkMappedMemoryRange* pMemoryRanges);
    void GetDeviceMemoryCommitment(VkDeviceMemory memory, VkDeviceSize* pCommittedMemoryInBytes);
    VkResult BindBufferMemory(VkBuffer buffer, VkDeviceMemory memory, VkDeviceSize memoryOffset);
    VkResult BindImageMemory(VkImage image, VkDeviceMemory memory, VkDeviceSize memoryOffset);
    void GetBufferMemoryRequirements(VkBuffer buffer, VkMemoryRequirements* pMemoryRequirements);
    void GetImageMemoryRequirements(VkImage image, VkMemoryRequirements* pMemoryRequirements);
    void GetImageSparseMemoryRequirements(VkImage image, uint32_t* pSparseMemoryRequirementCount,
                                          VkSparseImageMemoryRequirements* pSparseMemoryRequirements);
    VkResult CreateFence(const VkFenceCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkFence* pFence);
    void DestroyFence(VkFence fence, const VkAllocationCallbacks* pAllocator);
    VkResult ResetFences(uint32_t fenceCount, const VkFence* pFences);
    VkResult GetFenceStatus(VkFence fence);
    VkResult WaitForFences(uint32_t fenceCount, const VkFence* pFences, VkBool32 waitAll, uint64_t timeout);
    VkResult CreateSemaphore(const VkSemaphoreCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator,
                             VkSemaphore* pSemaphore);
    void DestroySemaphore(VkSemaphore semaphore, const VkAllocationCallbacks* pAllocator);
    VkResult CreateEvent(const VkEventCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkEvent* pEvent);
    void DestroyEvent(VkEvent event, const VkAllocationCallbacks* pAllocator);
    VkResult GetEventStatus(VkEvent event);
    VkResult SetEvent(VkEvent event);
    VkResult ResetEvent(VkEvent event);
    VkResult CreateQueryPool(const VkQueryPoolCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator,
                             VkQueryPool* pQueryPool);
    void DestroyQueryPool(VkQueryPool queryPool, const VkAllocationCallbacks* pAllocator);
    VkResult GetQueryPoolResults(VkQueryPool queryPool, uint32_t firstQuery, uint32_t queryCount, size_t dataSize, void* pData,
                                 VkDeviceSize stride, VkQueryResultFlags flags);
    VkResult CreateBuffer(const VkBufferCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkBuffer* pBuffer);
    void DestroyBuffer(VkBuffer buffer, const VkAllocationCallbacks* pAllocator);
    VkResult CreateBufferView(const VkBufferViewCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator,
                              VkBufferView* pView);
    void DestroyBufferView(VkBufferView bufferView, const VkAllocationCallbacks* pAllocator);
    VkResult CreateImage(const VkImageCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkImage* pImage);
    void DestroyImage(VkImage image, const VkAllocationCallbacks* pAllocator);
    void GetImageSubresourceLayout(VkImage image, const VkImageSubresource* pSubresource, VkSubresourceLayout* pLayout);
    VkResult CreateImageView(const VkImageViewCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkImageView* pView);
    void DestroyImageView(VkImageView imageView, const VkAllocationCallbacks* pAllocator);
    VkResult CreateShaderModule(const VkShaderModuleCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator,
                                VkShaderModule* pShaderModule);
    void DestroyShaderModule(VkShaderModule shaderModule, const VkAllocationCallbacks* pAllocator);
    VkResult CreatePipelineCache(const VkPipelineCacheCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator,
                                 VkPipelineCache* pPipelineCache);
    void DestroyPipelineCache(VkPipelineCache pipelineCache, const VkAllocationCallbacks* pAllocator);
    VkResult GetPipelineCacheData(VkPipelineCache pipelineCache, size_t* pDataSize, void* pData);
    VkResult MergePipelineCaches(VkPipelineCache dstCache, uint32_t srcCacheCount, const VkPipelineCache* pSrcCaches);
    VkResult CreateGraphicsPipelines(VkPipelineCache pipelineCache, uint32_t createInfoCount,
                                     const VkGraphicsPipelineCreateInfo* pCreateInfos, const VkAllocationCallbacks* pAllocator,
                                     VkPipeline* pPipelines);
    VkResult CreateComputePipelines(VkPipelineCache pipelineCache, uint32_t createInfoCount,
                                    const VkComputePipelineCreateInfo* pCreateInfos, const VkAllocationCallbacks* pAllocator,
                                    VkPipeline* pPipelines);
    void DestroyPipeline(VkPipeline pipeline, const VkAllocationCallbacks* pAllocator);
    VkResult CreatePipelineLayout(const VkPipelineLayoutCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator,
                                  VkPipelineLayout* pPipelineLayout);
    void DestroyPipelineLayout(VkPipelineLayout pipelineLayout, const VkAllocationCallbacks* pAllocator);
    VkResult CreateSampler(const VkSamplerCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkSampler* pSampler);
    void DestroySampler(VkSampler sampler, const VkAllocationCallbacks* pAllocator);
    VkResult CreateDescriptorSetLayout(const VkDescriptorSetLayoutCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator,
                                       VkDescriptorSetLayout* pSetLayout);
    void DestroyDescriptorSetLayout(VkDescriptorSetLayout descriptorSetLayout, const VkAllocationCallbacks* pAllocator);
    VkResult CreateDescriptorPool(const VkDescriptorPoolCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator,
                                  VkDescriptorPool* pDescriptorPool);
    void DestroyDescriptorPool(VkDescriptorPool descriptorPool, const VkAllocationCallbacks* pAllocator);
    VkResult ResetDescriptorPool(VkDescriptorPool descriptorPool, VkDescriptorPoolResetFlags flags);
    VkResult AllocateDescriptorSets(const VkDescriptorSetAllocateInfo* pAllocateInfo, VkDescriptorSet* pDescriptorSets);
    VkResult FreeDescriptorSets(VkDescriptorPool descriptorPool, uint32_t descriptorSetCount,
                                const VkDescriptorSet* pDescriptorSets);
    void UpdateDescriptorSets(uint32_t descriptorWriteCount, const VkWriteDescriptorSet* pDescriptorWrites,
                              uint32_t descriptorCopyCount, const VkCopyDescriptorSet* pDescriptorCopies);
    VkResult CreateFramebuffer(const VkFramebufferCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator,
                               VkFramebuffer* pFramebuffer);
    void DestroyFramebuffer(VkFramebuffer framebuffer, const VkAllocationCallbacks* pAllocator);
    VkResult CreateRenderPass(const VkRenderPassCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator,
                              VkRenderPass* pRenderPass);
    void DestroyRenderPass(VkRenderPass renderPass, const VkAllocationCallbacks* pAllocator);
    void GetRenderAreaGranularity(VkRenderPass renderPass, VkExtent2D* pGranularity);
    VkResult CreateCommandPool(const VkCommandPoolCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator,
                               VkCommandPool* pCommandPool);
    void DestroyCommandPool(VkCommandPool commandPool, const VkAllocationCallbacks* pAllocator);
    VkResult ResetCommandPool(VkCommandPool commandPool, VkCommandPoolResetFlags flags);
    VkResult AllocateCommandBuffers(const VkCommandBufferAllocateInfo* pAllocateInfo, VkCommandBuffer* pCommandBuffers);
    void FreeCommandBuffers(VkCommandPool commandPool, uint32_t commandBufferCount, const VkCommandBuffer* pCommandBuffers);
    VkResult BindBufferMemory2(uint32_t bindInfoCount, const VkBindBufferMemoryInfo* pBindInfos);
    VkResult BindImageMemory2(uint32_t bindInfoCount, const VkBindImageMemoryInfo* pBindInfos);
    void GetDeviceGroupPeerMemoryFeatures(uint32_t heapIndex, uint32_t localDeviceIndex, uint32_t remoteDeviceIndex,
                                          VkPeerMemoryFeatureFlags* pPeerMemoryFeatures);
    void GetImageMemoryRequirements2(const VkImageMemoryRequirementsInfo2* pInfo, VkMemoryRequirements2* pMemoryRequirements);
    void GetBufferMemoryRequirements2(const VkBufferMemoryRequirementsInfo2* pInfo, VkMemoryRequirements2* pMemoryRequirements);
    void GetImageSparseMemoryRequirements2(const VkImageSparseMemoryRequirementsInfo2* pInfo,
                                           uint32_t* pSparseMemoryRequirementCount,
                                           VkSparseImageMemoryRequirements2* pSparseMemoryRequirements);
    void TrimCommandPool(VkCommandPool commandPool, VkCommandPoolTrimFlags flags);
    void GetDeviceQueue2(const VkDeviceQueueInfo2* pQueueInfo, VkQueue* pQueue);
    VkResult CreateSamplerYcbcrConversion(const VkSamplerYcbcrConversionCreateInfo* pCreateInfo,
                                          const VkAllocationCallbacks* pAllocator, VkSamplerYcbcrConversion* pYcbcrConversion);
    void DestroySamplerYcbcrConversion(VkSamplerYcbcrConversion ycbcrConversion, const VkAllocationCallbacks* pAllocator);
    VkResult CreateDescriptorUpdateTemplate(const VkDescriptorUpdateTemplateCreateInfo* pCreateInfo,
                                            const VkAllocationCallbacks* pAllocator,
                                            VkDescriptorUpdateTemplate* pDescriptorUpdateTemplate);
    void DestroyDescriptorUpdateTemplate(VkDescriptorUpdateTemplate descriptorUpdateTemplate,
                                         const VkAllocationCallbacks* pAllocator);
    void UpdateDescriptorSetWithTemplate(VkDescriptorSet descriptorSet, VkDescriptorUpdateTemplate descriptorUpdateTemplate,
                                         const void* pData);
    void GetDescriptorSetLayoutSupport(const VkDescriptorSetLayoutCreateInfo* pCreateInfo, VkDescriptorSetLayoutSupport* pSupport);
    VkResult CreateRenderPass2(const VkRenderPassCreateInfo2* pCreateInfo, const VkAllocationCallbacks* pAllocator,
                               VkRenderPass* pRenderPass);
    void ResetQueryPool(VkQueryPool queryPool, uint32_t firstQuery, uint32_t queryCount);
    VkResult GetSemaphoreCounterValue(VkSemaphore semaphore, uint64_t* pValue);
    VkResult WaitSemaphores(const VkSemaphoreWaitInfo* pWaitInfo, uint64_t timeout);
    VkResult SignalSemaphore(const VkSemaphoreSignalInfo* pSignalInfo);
    VkDeviceAddress GetBufferDeviceAddress(const VkBufferDeviceAddressInfo* pInfo);
    uint64_t GetBufferOpaqueCaptureAddress(const VkBufferDeviceAddressInfo* pInfo);
    uint64_t GetDeviceMemoryOpaqueCaptureAddress(const VkDeviceMemoryOpaqueCaptureAddressInfo* pInfo);
    VkResult CreatePrivateDataSlot(const VkPrivateDataSlotCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator,
                                   VkPrivateDataSlot* pPrivateDataSlot);
    void DestroyPrivateDataSlot(VkPrivateDataSlot privateDataSlot, const VkAllocationCallbacks* pAllocator);
    VkResult SetPrivateData(VkObjectType objectType, uint64_t objectHandle, VkPrivateDataSlot privateDataSlot, uint64_t data);
    void GetPrivateData(VkObjectType objectType, uint64_t objectHandle, VkPrivateDataSlot privateDataSlot, uint64_t* pData);
    void GetDeviceBufferMemoryRequirements(const VkDeviceBufferMemoryRequirements* pInfo,
                                           VkMemoryRequirements2* pMemoryRequirements);
    void GetDeviceImageMemoryRequirements(const VkDeviceImageMemoryRequirements* pInfo, VkMemoryRequirements2* pMemoryRequirements);
    void GetDeviceImageSparseMemoryRequirements(const VkDeviceImageMemoryRequirements* pInfo,
                                                uint32_t* pSparseMemoryRequirementCount,
                                                VkSparseImageMemoryRequirements2* pSparseMemoryRequirements);
    VkResult CreateSwapchainKHR(const VkSwapchainCreateInfoKHR* pCreateInfo, const VkAllocationCallbacks* pAllocator,
                                VkSwapchainKHR* pSwapchain);
    void DestroySwapchainKHR(VkSwapchainKHR swapchain, const VkAllocationCallbacks* pAllocator);
    VkResult GetSwapchainImagesKHR(VkSwapchainKHR swapchain, uint32_t* pSwapchainImageCount, VkImage* pSwapchainImages);
    VkResult AcquireNextImageKHR(VkSwapchainKHR swapchain, uint64_t timeout, VkSemaphore semaphore, VkFence fence,
                                 uint32_t* pImageIndex);
    VkResult GetDeviceGroupPresentCapabilitiesKHR(VkDeviceGroupPresentCapabilitiesKHR* pDeviceGroupPresentCapabilities);
    VkResult GetDeviceGroupSurfacePresentModesKHR(VkSurfaceKHR surface, VkDeviceGroupPresentModeFlagsKHR* pModes);
    VkResult AcquireNextImage2KHR(const VkAcquireNextImageInfoKHR* pAcquireInfo, uint32_t* pImageIndex);
    VkResult CreateSharedSwapchainsKHR(uint32_t swapchainCount, const VkSwapchainCreateInfoKHR* pCreateInfos,
                                       const VkAllocationCallbacks* pAllocator, VkSwapchainKHR* pSwapchains);
    VkResult CreateVideoSessionKHR(const VkVideoSessionCreateInfoKHR* pCreateInfo, const VkAllocationCallbacks* pAllocator,
                                   VkVideoSessionKHR* pVideoSession);
    void DestroyVideoSessionKHR(VkVideoSessionKHR videoSession, const VkAllocationCallbacks* pAllocator);
    VkResult GetVideoSessionMemoryRequirementsKHR(VkVideoSessionKHR videoSession, uint32_t* pMemoryRequirementsCount,
                                                  VkVideoSessionMemoryRequirementsKHR* pMemoryRequirements);
    VkResult BindVideoSessionMemoryKHR(VkVideoSessionKHR videoSession, uint32_t bindSessionMemoryInfoCount,
                                       const VkBindVideoSessionMemoryInfoKHR* pBindSessionMemoryInfos);
    VkResult CreateVideoSessionParametersKHR(const VkVideoSessionParametersCreateInfoKHR* pCreateInfo,
                                             const VkAllocationCallbacks* pAllocator,
                                             VkVideoSessionParametersKHR* pVideoSessionParameters);
    VkResult UpdateVideoSessionParametersKHR(VkVideoSessionParametersKHR videoSessionParameters,
                                             const VkVideoSessionParametersUpdateInfoKHR* pUpdateInfo);
    void DestroyVideoSessionParametersKHR(VkVideoSessionParametersKHR videoSessionParameters,
                                          const VkAllocationCallbacks* pAllocator);
#ifdef VK_USE_PLATFORM_WIN32_KHR

    VkResult GetMemoryWin32HandleKHR(const VkMemoryGetWin32HandleInfoKHR* pGetWin32HandleInfo, HANDLE* pHandle);
    VkResult GetMemoryWin32HandlePropertiesKHR(VkExternalMemoryHandleTypeFlagBits handleType, HANDLE handle,
                                               VkMemoryWin32HandlePropertiesKHR* pMemoryWin32HandleProperties);
#endif  // VK_USE_PLATFORM_WIN32_KHR

    VkResult GetMemoryFdKHR(const VkMemoryGetFdInfoKHR* pGetFdInfo, int* pFd);
    VkResult GetMemoryFdPropertiesKHR(VkExternalMemoryHandleTypeFlagBits handleType, int fd,
                                      VkMemoryFdPropertiesKHR* pMemoryFdProperties);
#ifdef VK_USE_PLATFORM_WIN32_KHR

    VkResult ImportSemaphoreWin32HandleKHR(const VkImportSemaphoreWin32HandleInfoKHR* pImportSemaphoreWin32HandleInfo);
    VkResult GetSemaphoreWin32HandleKHR(const VkSemaphoreGetWin32HandleInfoKHR* pGetWin32HandleInfo, HANDLE* pHandle);
#endif  // VK_USE_PLATFORM_WIN32_KHR

    VkResult ImportSemaphoreFdKHR(const VkImportSemaphoreFdInfoKHR* pImportSemaphoreFdInfo);
    VkResult GetSemaphoreFdKHR(const VkSemaphoreGetFdInfoKHR* pGetFdInfo, int* pFd);
    VkResult GetSwapchainStatusKHR(VkSwapchainKHR swapchain);
#ifdef VK_USE_PLATFORM_WIN32_KHR

    VkResult ImportFenceWin32HandleKHR(const VkImportFenceWin32HandleInfoKHR* pImportFenceWin32HandleInfo);
    VkResult GetFenceWin32HandleKHR(const VkFenceGetWin32HandleInfoKHR* pGetWin32HandleInfo, HANDLE* pHandle);
#endif  // VK_USE_PLATFORM_WIN32_KHR

    VkResult ImportFenceFdKHR(const VkImportFenceFdInfoKHR* pImportFenceFdInfo);
    VkResult GetFenceFdKHR(const VkFenceGetFdInfoKHR* pGetFdInfo, int* pFd);
    VkResult AcquireProfilingLockKHR(const VkAcquireProfilingLockInfoKHR* pInfo);
    void ReleaseProfilingLockKHR();
    VkResult WaitForPresentKHR(VkSwapchainKHR swapchain, uint64_t presentId, uint64_t timeout);
    VkResult CreateDeferredOperationKHR(const VkAllocationCallbacks* pAllocator, VkDeferredOperationKHR* pDeferredOperation);
    void DestroyDeferredOperationKHR(VkDeferredOperationKHR operation, const VkAllocationCallbacks* pAllocator);
    uint32_t GetDeferredOperationMaxConcurrencyKHR(VkDeferredOperationKHR operation);
    VkResult GetDeferredOperationResultKHR(VkDeferredOperationKHR operation);
    VkResult DeferredOperationJoinKHR(VkDeferredOperationKHR operation);
    VkResult GetPipelineExecutablePropertiesKHR(const VkPipelineInfoKHR* pPipelineInfo, uint32_t* pExecutableCount,
                                                VkPipelineExecutablePropertiesKHR* pProperties);
    VkResult GetPipelineExecutableStatisticsKHR(const VkPipelineExecutableInfoKHR* pExecutableInfo, uint32_t* pStatisticCount,
                                                VkPipelineExecutableStatisticKHR* pStatistics);
    VkResult GetPipelineExecutableInternalRepresentationsKHR(
        const VkPipelineExecutableInfoKHR* pExecutableInfo, uint32_t* pInternalRepresentationCount,
        VkPipelineExecutableInternalRepresentationKHR* pInternalRepresentations);
    VkResult MapMemory2KHR(const VkMemoryMapInfoKHR* pMemoryMapInfo, void** ppData);
    VkResult UnmapMemory2KHR(const VkMemoryUnmapInfoKHR* pMemoryUnmapInfo);
    VkResult GetEncodedVideoSessionParametersKHR(const VkVideoEncodeSessionParametersGetInfoKHR* pVideoSessionParametersInfo,
                                                 VkVideoEncodeSessionParametersFeedbackInfoKHR* pFeedbackInfo, size_t* pDataSize,
                                                 void* pData);
    void GetRenderingAreaGranularityKHR(const VkRenderingAreaInfoKHR* pRenderingAreaInfo, VkExtent2D* pGranularity);
    void GetDeviceImageSubresourceLayoutKHR(const VkDeviceImageSubresourceInfoKHR* pInfo, VkSubresourceLayout2KHR* pLayout);
    void GetImageSubresourceLayout2KHR(VkImage image, const VkImageSubresource2KHR* pSubresource, VkSubresourceLayout2KHR* pLayout);
    VkResult GetCalibratedTimestampsKHR(uint32_t timestampCount, const VkCalibratedTimestampInfoKHR* pTimestampInfos,
                                        uint64_t* pTimestamps, uint64_t* pMaxDeviation);
    VkResult DebugMarkerSetObjectTagEXT(const VkDebugMarkerObjectTagInfoEXT* pTagInfo);
    VkResult DebugMarkerSetObjectNameEXT(const VkDebugMarkerObjectNameInfoEXT* pNameInfo);
    VkResult CreateCuModuleNVX(const VkCuModuleCreateInfoNVX* pCreateInfo, const VkAllocationCallbacks* pAllocator,
                               VkCuModuleNVX* pModule);
    VkResult CreateCuFunctionNVX(const VkCuFunctionCreateInfoNVX* pCreateInfo, const VkAllocationCallbacks* pAllocator,
                                 VkCuFunctionNVX* pFunction);
    void DestroyCuModuleNVX(VkCuModuleNVX module, const VkAllocationCallbacks* pAllocator);
    void DestroyCuFunctionNVX(VkCuFunctionNVX function, const VkAllocationCallbacks* pAllocator);
    uint32_t GetImageViewHandleNVX(const VkImageViewHandleInfoNVX* pInfo);
    VkResult GetImageViewAddressNVX(VkImageView imageView, VkImageViewAddressPropertiesNVX* pProperties);
    VkResult GetShaderInfoAMD(VkPipeline pipeline, VkShaderStageFlagBits shaderStage, VkShaderInfoTypeAMD infoType,
                              size_t* pInfoSize, void* pInfo);
#ifdef VK_USE_PLATFORM_WIN32_KHR

    VkResult GetMemoryWin32HandleNV(VkDeviceMemory memory, VkExternalMemoryHandleTypeFlagsNV handleType, HANDLE* pHandle);
#endif  // VK_USE_PLATFORM_WIN32_KHR

    VkResult DisplayPowerControlEXT(VkDisplayKHR display, const VkDisplayPowerInfoEXT* pDisplayPowerInfo);
    VkResult RegisterDeviceEventEXT(const VkDeviceEventInfoEXT* pDeviceEventInfo, const VkAllocationCallbacks* pAllocator,
                                    VkFence* pFence);
    VkResult RegisterDisplayEventEXT(VkDisplayKHR display, const VkDisplayEventInfoEXT* pDisplayEventInfo,
                                     const VkAllocationCallbacks* pAllocator, VkFence* pFence);
    VkResult GetSwapchainCounterEXT(VkSwapchainKHR swapchain, VkSurfaceCounterFlagBitsEXT counter, uint64_t* pCounterValue);
    VkResult GetRefreshCycleDurationGOOGLE(VkSwapchainKHR swapchain, VkRefreshCycleDurationGOOGLE* pDisplayTimingProperties);
    VkResult GetPastPresentationTimingGOOGLE(VkSwapchainKHR swapchain, uint32_t* pPresentationTimingCount,
                                             VkPastPresentationTimingGOOGLE* pPresentationTimings);
    void SetHdrMetadataEXT(uint32_t swapchainCount, const VkSwapchainKHR* pSwapchains, const VkHdrMetadataEXT* pMetadata);
    VkResult SetDebugUtilsObjectNameEXT(const VkDebugUtilsObjectNameInfoEXT* pNameInfo);
    VkResult SetDebugUtilsObjectTagEXT(const VkDebugUtilsObjectTagInfoEXT* pTagInfo);
#ifdef VK_USE_PLATFORM_ANDROID_KHR

    VkResult GetAndroidHardwareBufferPropertiesANDROID(const struct AHardwareBuffer* buffer,
                                                       VkAndroidHardwareBufferPropertiesANDROID* pProperties);
    VkResult GetMemoryAndroidHardwareBufferANDROID(const VkMemoryGetAndroidHardwareBufferInfoANDROID* pInfo,
                                                   struct AHardwareBuffer** pBuffer);
#endif  // VK_USE_PLATFORM_ANDROID_KHR

#ifdef VK_ENABLE_BETA_EXTENSIONS

    VkResult CreateExecutionGraphPipelinesAMDX(VkPipelineCache pipelineCache, uint32_t createInfoCount,
                                               const VkExecutionGraphPipelineCreateInfoAMDX* pCreateInfos,
                                               const VkAllocationCallbacks* pAllocator, VkPipeline* pPipelines);
    VkResult GetExecutionGraphPipelineScratchSizeAMDX(VkPipeline executionGraph,
                                                      VkExecutionGraphPipelineScratchSizeAMDX* pSizeInfo);
    VkResult GetExecutionGraphPipelineNodeIndexAMDX(VkPipeline executionGraph,
                                                    const VkPipelineShaderStageNodeCreateInfoAMDX* pNodeInfo, uint32_t* pNodeIndex);
#endif  // VK_ENABLE_BETA_EXTENSIONS

    VkResult GetImageDrmFormatModifierPropertiesEXT(VkImage image, VkImageDrmFormatModifierPropertiesEXT* pProperties);
    VkResult CreateValidationCacheEXT(const VkValidationCacheCreateInfoEXT* pCreateInfo, const VkAllocationCallbacks* pAllocator,
                                      VkValidationCacheEXT* pValidationCache);
    void DestroyValidationCacheEXT(VkValidationCacheEXT validationCache, const VkAllocationCallbacks* pAllocator);
    VkResult MergeValidationCachesEXT(VkValidationCacheEXT dstCache, uint32_t srcCacheCount,
                                      const VkValidationCacheEXT* pSrcCaches);
    VkResult GetValidationCacheDataEXT(VkValidationCacheEXT validationCache, size_t* pDataSize, void* pData);
    VkResult CreateAccelerationStructureNV(const VkAccelerationStructureCreateInfoNV* pCreateInfo,
                                           const VkAllocationCallbacks* pAllocator,
                                           VkAccelerationStructureNV* pAccelerationStructure);
    void DestroyAccelerationStructureNV(VkAccelerationStructureNV accelerationStructure, const VkAllocationCallbacks* pAllocator);
    void GetAccelerationStructureMemoryRequirementsNV(const VkAccelerationStructureMemoryRequirementsInfoNV* pInfo,
                                                      VkMemoryRequirements2KHR* pMemoryRequirements);
    VkResult BindAccelerationStructureMemoryNV(uint32_t bindInfoCount, const VkBindAccelerationStructureMemoryInfoNV* pBindInfos);
    VkResult CreateRayTracingPipelinesNV(VkPipelineCache pipelineCache, uint32_t createInfoCount,
                                         const VkRayTracingPipelineCreateInfoNV* pCreateInfos,
                                         const VkAllocationCallbacks* pAllocator, VkPipeline* pPipelines);
    VkResult GetRayTracingShaderGroupHandlesKHR(VkPipeline pipeline, uint32_t firstGroup, uint32_t groupCount, size_t dataSize,
                                                void* pData);
    VkResult GetAccelerationStructureHandleNV(VkAccelerationStructureNV accelerationStructure, size_t dataSize, void* pData);
    VkResult CompileDeferredNV(VkPipeline pipeline, uint32_t shader);
    VkResult GetMemoryHostPointerPropertiesEXT(VkExternalMemoryHandleTypeFlagBits handleType, const void* pHostPointer,
                                               VkMemoryHostPointerPropertiesEXT* pMemoryHostPointerProperties);
    VkResult InitializePerformanceApiINTEL(const VkInitializePerformanceApiInfoINTEL* pInitializeInfo);
    void UninitializePerformanceApiINTEL();
    VkResult AcquirePerformanceConfigurationINTEL(const VkPerformanceConfigurationAcquireInfoINTEL* pAcquireInfo,
                                                  VkPerformanceConfigurationINTEL* pConfiguration);
    VkResult ReleasePerformanceConfigurationINTEL(VkPerformanceConfigurationINTEL configuration);
    VkResult GetPerformanceParameterINTEL(VkPerformanceParameterTypeINTEL parameter, VkPerformanceValueINTEL* pValue);
    void SetLocalDimmingAMD(VkSwapchainKHR swapChain, VkBool32 localDimmingEnable);
#ifdef VK_USE_PLATFORM_WIN32_KHR

    VkResult AcquireFullScreenExclusiveModeEXT(VkSwapchainKHR swapchain);
    VkResult ReleaseFullScreenExclusiveModeEXT(VkSwapchainKHR swapchain);
    VkResult GetDeviceGroupSurfacePresentModes2EXT(const VkPhysicalDeviceSurfaceInfo2KHR* pSurfaceInfo,
                                                   VkDeviceGroupPresentModeFlagsKHR* pModes);
#endif  // VK_USE_PLATFORM_WIN32_KHR

    VkResult CopyMemoryToImageEXT(const VkCopyMemoryToImageInfoEXT* pCopyMemoryToImageInfo);
    VkResult CopyImageToMemoryEXT(const VkCopyImageToMemoryInfoEXT* pCopyImageToMemoryInfo);
    VkResult CopyImageToImageEXT(const VkCopyImageToImageInfoEXT* pCopyImageToImageInfo);
    VkResult TransitionImageLayoutEXT(uint32_t transitionCount, const VkHostImageLayoutTransitionInfoEXT* pTransitions);
    VkResult ReleaseSwapchainImagesEXT(const VkReleaseSwapchainImagesInfoEXT* pReleaseInfo);
    void GetGeneratedCommandsMemoryRequirementsNV(const VkGeneratedCommandsMemoryRequirementsInfoNV* pInfo,
                                                  VkMemoryRequirements2* pMemoryRequirements);
    VkResult CreateIndirectCommandsLayoutNV(const VkIndirectCommandsLayoutCreateInfoNV* pCreateInfo,
                                            const VkAllocationCallbacks* pAllocator,
                                            VkIndirectCommandsLayoutNV* pIndirectCommandsLayout);
    void DestroyIndirectCommandsLayoutNV(VkIndirectCommandsLayoutNV indirectCommandsLayout,
                                         const VkAllocationCallbacks* pAllocator);
    VkResult CreateCudaModuleNV(const VkCudaModuleCreateInfoNV* pCreateInfo, const VkAllocationCallbacks* pAllocator,
                                VkCudaModuleNV* pModule);
    VkResult GetCudaModuleCacheNV(VkCudaModuleNV module, size_t* pCacheSize, void* pCacheData);
    VkResult CreateCudaFunctionNV(const VkCudaFunctionCreateInfoNV* pCreateInfo, const VkAllocationCallbacks* pAllocator,
                                  VkCudaFunctionNV* pFunction);
    void DestroyCudaModuleNV(VkCudaModuleNV module, const VkAllocationCallbacks* pAllocator);
    void DestroyCudaFunctionNV(VkCudaFunctionNV function, const VkAllocationCallbacks* pAllocator);
#ifdef VK_USE_PLATFORM_METAL_EXT

    void ExportMetalObjectsEXT(VkExportMetalObjectsInfoEXT* pMetalObjectsInfo);
#endif  // VK_USE_PLATFORM_METAL_EXT

    void GetDescriptorSetLayoutSizeEXT(VkDescriptorSetLayout layout, VkDeviceSize* pLayoutSizeInBytes);
    void GetDescriptorSetLayoutBindingOffsetEXT(VkDescriptorSetLayout layout, uint32_t binding, VkDeviceSize* pOffset);
    void GetDescriptorEXT(const VkDescriptorGetInfoEXT* pDescriptorInfo, size_t dataSize, void* pDescriptor);
    VkResult GetBufferOpaqueCaptureDescriptorDataEXT(const VkBufferCaptureDescriptorDataInfoEXT* pInfo, void* pData);
    VkResult GetImageOpaqueCaptureDescriptorDataEXT(const VkImageCaptureDescriptorDataInfoEXT* pInfo, void* pData);
    VkResult GetImageViewOpaqueCaptureDescriptorDataEXT(const VkImageViewCaptureDescriptorDataInfoEXT* pInfo, void* pData);
    VkResult GetSamplerOpaqueCaptureDescriptorDataEXT(const VkSamplerCaptureDescriptorDataInfoEXT* pInfo, void* pData);
    VkResult GetAccelerationStructureOpaqueCaptureDescriptorDataEXT(
        const VkAccelerationStructureCaptureDescriptorDataInfoEXT* pInfo, void* pData);
    VkResult GetDeviceFaultInfoEXT(VkDeviceFaultCountsEXT* pFaultCounts, VkDeviceFaultInfoEXT* pFaultInfo);
#ifdef VK_USE_PLATFORM_FUCHSIA

    VkResult GetMemoryZirconHandleFUCHSIA(const VkMemoryGetZirconHandleInfoFUCHSIA* pGetZirconHandleInfo,
                                          zx_handle_t* pZirconHandle);
    VkResult GetMemoryZirconHandlePropertiesFUCHSIA(VkExternalMemoryHandleTypeFlagBits handleType, zx_handle_t zirconHandle,
                                                    VkMemoryZirconHandlePropertiesFUCHSIA* pMemoryZirconHandleProperties);
    VkResult ImportSemaphoreZirconHandleFUCHSIA(const VkImportSemaphoreZirconHandleInfoFUCHSIA* pImportSemaphoreZirconHandleInfo);
    VkResult GetSemaphoreZirconHandleFUCHSIA(const VkSemaphoreGetZirconHandleInfoFUCHSIA* pGetZirconHandleInfo,
                                             zx_handle_t* pZirconHandle);
    VkResult CreateBufferCollectionFUCHSIA(const VkBufferCollectionCreateInfoFUCHSIA* pCreateInfo,
                                           const VkAllocationCallbacks* pAllocator, VkBufferCollectionFUCHSIA* pCollection);
    VkResult SetBufferCollectionImageConstraintsFUCHSIA(VkBufferCollectionFUCHSIA collection,
                                                        const VkImageConstraintsInfoFUCHSIA* pImageConstraintsInfo);
    VkResult SetBufferCollectionBufferConstraintsFUCHSIA(VkBufferCollectionFUCHSIA collection,
                                                         const VkBufferConstraintsInfoFUCHSIA* pBufferConstraintsInfo);
    void DestroyBufferCollectionFUCHSIA(VkBufferCollectionFUCHSIA collection, const VkAllocationCallbacks* pAllocator);
    VkResult GetBufferCollectionPropertiesFUCHSIA(VkBufferCollectionFUCHSIA collection,
                                                  VkBufferCollectionPropertiesFUCHSIA* pProperties);
#endif  // VK_USE_PLATFORM_FUCHSIA

    VkResult GetDeviceSubpassShadingMaxWorkgroupSizeHUAWEI(VkRenderPass renderpass, VkExtent2D* pMaxWorkgroupSize);
    VkResult GetMemoryRemoteAddressNV(const VkMemoryGetRemoteAddressInfoNV* pMemoryGetRemoteAddressInfo,
                                      VkRemoteAddressNV* pAddress);
    VkResult GetPipelinePropertiesEXT(const VkPipelineInfoEXT* pPipelineInfo, VkBaseOutStructure* pPipelineProperties);
    VkResult CreateMicromapEXT(const VkMicromapCreateInfoEXT* pCreateInfo, const VkAllocationCallbacks* pAllocator,
                               VkMicromapEXT* pMicromap);
    void DestroyMicromapEXT(VkMicromapEXT micromap, const VkAllocationCallbacks* pAllocator);
    VkResult BuildMicromapsEXT(VkDeferredOperationKHR deferredOperation, uint32_t infoCount, const VkMicromapBuildInfoEXT* pInfos);
    VkResult CopyMicromapEXT(VkDeferredOperationKHR deferredOperation, const VkCopyMicromapInfoEXT* pInfo);
    VkResult CopyMicromapToMemoryEXT(VkDeferredOperationKHR deferredOperation, const VkCopyMicromapToMemoryInfoEXT* pInfo);
    VkResult CopyMemoryToMicromapEXT(VkDeferredOperationKHR deferredOperation, const VkCopyMemoryToMicromapInfoEXT* pInfo);
    VkResult WriteMicromapsPropertiesEXT(uint32_t micromapCount, const VkMicromapEXT* pMicromaps, VkQueryType queryType,
                                         size_t dataSize, void* pData, size_t stride);
    void GetDeviceMicromapCompatibilityEXT(const VkMicromapVersionInfoEXT* pVersionInfo,
                                           VkAccelerationStructureCompatibilityKHR* pCompatibility);
    void GetMicromapBuildSizesEXT(VkAccelerationStructureBuildTypeKHR buildType, const VkMicromapBuildInfoEXT* pBuildInfo,
                                  VkMicromapBuildSizesInfoEXT* pSizeInfo);
    void SetDeviceMemoryPriorityEXT(VkDeviceMemory memory, float priority);
    void GetDescriptorSetLayoutHostMappingInfoVALVE(const VkDescriptorSetBindingReferenceVALVE* pBindingReference,
                                                    VkDescriptorSetLayoutHostMappingInfoVALVE* pHostMapping);
    void GetDescriptorSetHostMappingVALVE(VkDescriptorSet descriptorSet, void** ppData);
    void GetPipelineIndirectMemoryRequirementsNV(const VkComputePipelineCreateInfo* pCreateInfo,
                                                 VkMemoryRequirements2* pMemoryRequirements);
    VkDeviceAddress GetPipelineIndirectDeviceAddressNV(const VkPipelineIndirectDeviceAddressInfoNV* pInfo);
    void GetShaderModuleIdentifierEXT(VkShaderModule shaderModule, VkShaderModuleIdentifierEXT* pIdentifier);
    void GetShaderModuleCreateInfoIdentifierEXT(const VkShaderModuleCreateInfo* pCreateInfo,
                                                VkShaderModuleIdentifierEXT* pIdentifier);
    VkResult CreateOpticalFlowSessionNV(const VkOpticalFlowSessionCreateInfoNV* pCreateInfo,
                                        const VkAllocationCallbacks* pAllocator, VkOpticalFlowSessionNV* pSession);
    void DestroyOpticalFlowSessionNV(VkOpticalFlowSessionNV session, const VkAllocationCallbacks* pAllocator);
    VkResult BindOpticalFlowSessionImageNV(VkOpticalFlowSessionNV session, VkOpticalFlowSessionBindingPointNV bindingPoint,
                                           VkImageView view, VkImageLayout layout);
    VkResult CreateShadersEXT(uint32_t createInfoCount, const VkShaderCreateInfoEXT* pCreateInfos,
                              const VkAllocationCallbacks* pAllocator, VkShaderEXT* pShaders);
    void DestroyShaderEXT(VkShaderEXT shader, const VkAllocationCallbacks* pAllocator);
    VkResult GetShaderBinaryDataEXT(VkShaderEXT shader, size_t* pDataSize, void* pData);
    VkResult GetFramebufferTilePropertiesQCOM(VkFramebuffer framebuffer, uint32_t* pPropertiesCount,
                                              VkTilePropertiesQCOM* pProperties);
    VkResult GetDynamicRenderingTilePropertiesQCOM(const VkRenderingInfo* pRenderingInfo, VkTilePropertiesQCOM* pProperties);
    VkResult SetLatencySleepModeNV(VkSwapchainKHR swapchain, const VkLatencySleepModeInfoNV* pSleepModeInfo);
    VkResult LatencySleepNV(VkSwapchainKHR swapchain, const VkLatencySleepInfoNV* pSleepInfo);
    void SetLatencyMarkerNV(VkSwapchainKHR swapchain, const VkSetLatencyMarkerInfoNV* pLatencyMarkerInfo);
    void GetLatencyTimingsNV(VkSwapchainKHR swapchain, VkGetLatencyMarkerInfoNV* pLatencyMarkerInfo);
#ifdef VK_USE_PLATFORM_SCREEN_QNX

    VkResult GetScreenBufferPropertiesQNX(const struct _screen_buffer* buffer, VkScreenBufferPropertiesQNX* pProperties);
#endif  // VK_USE_PLATFORM_SCREEN_QNX

    VkResult CreateAccelerationStructureKHR(const VkAccelerationStructureCreateInfoKHR* pCreateInfo,
                                            const VkAllocationCallbacks* pAllocator,
                                            VkAccelerationStructureKHR* pAccelerationStructure);
    void DestroyAccelerationStructureKHR(VkAccelerationStructureKHR accelerationStructure, const VkAllocationCallbacks* pAllocator);
    VkResult BuildAccelerationStructuresKHR(VkDeferredOperationKHR deferredOperation, uint32_t infoCount,
                                            const VkAccelerationStructureBuildGeometryInfoKHR* pInfos,
                                            const VkAccelerationStructureBuildRangeInfoKHR* const* ppBuildRangeInfos);
    VkResult CopyAccelerationStructureKHR(VkDeferredOperationKHR deferredOperation,
                                          const VkCopyAccelerationStructureInfoKHR* pInfo);
    VkResult CopyAccelerationStructureToMemoryKHR(VkDeferredOperationKHR deferredOperation,
                                                  const VkCopyAccelerationStructureToMemoryInfoKHR* pInfo);
    VkResult CopyMemoryToAccelerationStructureKHR(VkDeferredOperationKHR deferredOperation,
                                                  const VkCopyMemoryToAccelerationStructureInfoKHR* pInfo);
    VkResult WriteAccelerationStructuresPropertiesKHR(uint32_t accelerationStructureCount,
                                                      const VkAccelerationStructureKHR* pAccelerationStructures,
                                                      VkQueryType queryType, size_t dataSize, void* pData, size_t stride);
    VkDeviceAddress GetAccelerationStructureDeviceAddressKHR(const VkAccelerationStructureDeviceAddressInfoKHR* pInfo);
    void GetDeviceAccelerationStructureCompatibilityKHR(const VkAccelerationStructureVersionInfoKHR* pVersionInfo,
                                                        VkAccelerationStructureCompatibilityKHR* pCompatibility);
    void GetAccelerationStructureBuildSizesKHR(VkAccelerationStructureBuildTypeKHR buildType,
                                               const VkAccelerationStructureBuildGeometryInfoKHR* pBuildInfo,
                                               const uint32_t* pMaxPrimitiveCounts,
                                               VkAccelerationStructureBuildSizesInfoKHR* pSizeInfo);
    VkResult CreateRayTracingPipelinesKHR(VkDeferredOperationKHR deferredOperation, VkPipelineCache pipelineCache,
                                          uint32_t createInfoCount, const VkRayTracingPipelineCreateInfoKHR* pCreateInfos,
                                          const VkAllocationCallbacks* pAllocator, VkPipeline* pPipelines);
    VkResult GetRayTracingCaptureReplayShaderGroupHandlesKHR(VkPipeline pipeline, uint32_t firstGroup, uint32_t groupCount,
                                                             size_t dataSize, void* pData);
    VkDeviceSize GetRayTracingShaderGroupStackSizeKHR(VkPipeline pipeline, uint32_t group, VkShaderGroupShaderKHR groupShader);

    VkDevice VkHandle() const { return handle_; }
    const DispatchTable& VkDispatch() const { return dispatch_table_; }

  private:
    const VkDevice handle_;
    const DispatchTable& dispatch_table_;
};

}  // namespace vk

// NOLINTEND
