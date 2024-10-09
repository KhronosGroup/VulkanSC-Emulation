// *** THIS FILE IS GENERATED - DO NOT EDIT ***
// See test_vkmock_framework_generator.py for modifications

/*
 * Copyright (c) 2024 The Khronos Group Inc.
 * Copyright (c) 2024 RasterGrid Kft.
 *
 * SPDX-License-Identifier: Apache-2.0
 */
// NOLINTBEGIN

#pragma once

#include "icd_test_defs.h"

#ifdef _WIN32
#include <windows.h>
#else
#include <dlfcn.h>
#endif

#include <functional>
#include <stdio.h>
#include <stdlib.h>

extern "C" VKAPI_ATTR PFN_vkVoidFunction VKAPI_CALL vkmockGetProcAddr(const char* pName);

class vkmock {
    inline static void* lib_handle_{nullptr};

  public:
    static PFN_vkVoidFunction GetProcAddr(const char* pName);

    static void UnloadLib() {
        if (lib_handle_) {
#if defined(_WIN32)
            FreeLibrary((HMODULE)lib_handle_);
#else
            dlclose(lib_handle_);
#endif
        }
    }

    static void LoadLib(const char* full_lib_name) {
#if defined(_WIN32)
        lib_handle_ = LoadLibraryA(full_lib_name);
#else
        lib_handle_ = dlopen(full_lib_name, RTLD_NOW | RTLD_LOCAL);
#endif
        if (!lib_handle_) {
            printf("Failed to open vkmock ICD library '%s'\n", full_lib_name);
            exit(1);
        }
#if defined(_WIN32)
        auto vkmockInit = (PFN_vkmockInit)(void (*)(void))GetProcAddress((HMODULE)lib_handle_, "vkmockInit");
#else
        auto vkmockInit = (PFN_vkmockInit)dlsym(lib_handle_, "vkmockInit");
#endif
        vkmockInit(vkmockGetProcAddr);
    }

    static void Reset();
    inline static std::function<VkResult(const VkInstanceCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator,
                                         VkInstance* pInstance)>
        CreateInstance{};
    inline static std::function<void(VkInstance instance, const VkAllocationCallbacks* pAllocator)> DestroyInstance{};
    inline static std::function<VkResult(VkInstance instance, uint32_t* pPhysicalDeviceCount, VkPhysicalDevice* pPhysicalDevices)>
        EnumeratePhysicalDevices{};
    inline static std::function<void(VkPhysicalDevice physicalDevice, VkPhysicalDeviceFeatures* pFeatures)>
        GetPhysicalDeviceFeatures{};
    inline static std::function<void(VkPhysicalDevice physicalDevice, VkFormat format, VkFormatProperties* pFormatProperties)>
        GetPhysicalDeviceFormatProperties{};
    inline static std::function<VkResult(VkPhysicalDevice physicalDevice, VkFormat format, VkImageType type, VkImageTiling tiling,
                                         VkImageUsageFlags usage, VkImageCreateFlags flags,
                                         VkImageFormatProperties* pImageFormatProperties)>
        GetPhysicalDeviceImageFormatProperties{};
    inline static std::function<void(VkPhysicalDevice physicalDevice, VkPhysicalDeviceProperties* pProperties)>
        GetPhysicalDeviceProperties{};
    inline static std::function<void(VkPhysicalDevice physicalDevice, uint32_t* pQueueFamilyPropertyCount,
                                     VkQueueFamilyProperties* pQueueFamilyProperties)>
        GetPhysicalDeviceQueueFamilyProperties{};
    inline static std::function<void(VkPhysicalDevice physicalDevice, VkPhysicalDeviceMemoryProperties* pMemoryProperties)>
        GetPhysicalDeviceMemoryProperties{};
    inline static std::function<PFN_vkVoidFunction(VkInstance instance, const char* pName)> GetInstanceProcAddr{};
    inline static std::function<PFN_vkVoidFunction(VkDevice device, const char* pName)> GetDeviceProcAddr{};
    inline static std::function<VkResult(VkPhysicalDevice physicalDevice, const VkDeviceCreateInfo* pCreateInfo,
                                         const VkAllocationCallbacks* pAllocator, VkDevice* pDevice)>
        CreateDevice{};
    inline static std::function<void(VkDevice device, const VkAllocationCallbacks* pAllocator)> DestroyDevice{};
    inline static std::function<VkResult(const char* pLayerName, uint32_t* pPropertyCount, VkExtensionProperties* pProperties)>
        EnumerateInstanceExtensionProperties{};
    inline static std::function<VkResult(VkPhysicalDevice physicalDevice, const char* pLayerName, uint32_t* pPropertyCount,
                                         VkExtensionProperties* pProperties)>
        EnumerateDeviceExtensionProperties{};
    inline static std::function<VkResult(uint32_t* pPropertyCount, VkLayerProperties* pProperties)>
        EnumerateInstanceLayerProperties{};
    inline static std::function<VkResult(VkPhysicalDevice physicalDevice, uint32_t* pPropertyCount, VkLayerProperties* pProperties)>
        EnumerateDeviceLayerProperties{};
    inline static std::function<void(VkDevice device, uint32_t queueFamilyIndex, uint32_t queueIndex, VkQueue* pQueue)>
        GetDeviceQueue{};
    inline static std::function<VkResult(VkQueue queue, uint32_t submitCount, const VkSubmitInfo* pSubmits, VkFence fence)>
        QueueSubmit{};
    inline static std::function<VkResult(VkQueue queue)> QueueWaitIdle{};
    inline static std::function<VkResult(VkDevice device)> DeviceWaitIdle{};
    inline static std::function<VkResult(VkDevice device, const VkMemoryAllocateInfo* pAllocateInfo,
                                         const VkAllocationCallbacks* pAllocator, VkDeviceMemory* pMemory)>
        AllocateMemory{};
    inline static std::function<void(VkDevice device, VkDeviceMemory memory, const VkAllocationCallbacks* pAllocator)> FreeMemory{};
    inline static std::function<VkResult(VkDevice device, VkDeviceMemory memory, VkDeviceSize offset, VkDeviceSize size,
                                         VkMemoryMapFlags flags, void** ppData)>
        MapMemory{};
    inline static std::function<void(VkDevice device, VkDeviceMemory memory)> UnmapMemory{};
    inline static std::function<VkResult(VkDevice device, uint32_t memoryRangeCount, const VkMappedMemoryRange* pMemoryRanges)>
        FlushMappedMemoryRanges{};
    inline static std::function<VkResult(VkDevice device, uint32_t memoryRangeCount, const VkMappedMemoryRange* pMemoryRanges)>
        InvalidateMappedMemoryRanges{};
    inline static std::function<void(VkDevice device, VkDeviceMemory memory, VkDeviceSize* pCommittedMemoryInBytes)>
        GetDeviceMemoryCommitment{};
    inline static std::function<VkResult(VkDevice device, VkBuffer buffer, VkDeviceMemory memory, VkDeviceSize memoryOffset)>
        BindBufferMemory{};
    inline static std::function<VkResult(VkDevice device, VkImage image, VkDeviceMemory memory, VkDeviceSize memoryOffset)>
        BindImageMemory{};
    inline static std::function<void(VkDevice device, VkBuffer buffer, VkMemoryRequirements* pMemoryRequirements)>
        GetBufferMemoryRequirements{};
    inline static std::function<void(VkDevice device, VkImage image, VkMemoryRequirements* pMemoryRequirements)>
        GetImageMemoryRequirements{};
    inline static std::function<void(VkDevice device, VkImage image, uint32_t* pSparseMemoryRequirementCount,
                                     VkSparseImageMemoryRequirements* pSparseMemoryRequirements)>
        GetImageSparseMemoryRequirements{};
    inline static std::function<void(VkPhysicalDevice physicalDevice, VkFormat format, VkImageType type,
                                     VkSampleCountFlagBits samples, VkImageUsageFlags usage, VkImageTiling tiling,
                                     uint32_t* pPropertyCount, VkSparseImageFormatProperties* pProperties)>
        GetPhysicalDeviceSparseImageFormatProperties{};
    inline static std::function<VkResult(VkQueue queue, uint32_t bindInfoCount, const VkBindSparseInfo* pBindInfo, VkFence fence)>
        QueueBindSparse{};
    inline static std::function<VkResult(VkDevice device, const VkFenceCreateInfo* pCreateInfo,
                                         const VkAllocationCallbacks* pAllocator, VkFence* pFence)>
        CreateFence{};
    inline static std::function<void(VkDevice device, VkFence fence, const VkAllocationCallbacks* pAllocator)> DestroyFence{};
    inline static std::function<VkResult(VkDevice device, uint32_t fenceCount, const VkFence* pFences)> ResetFences{};
    inline static std::function<VkResult(VkDevice device, VkFence fence)> GetFenceStatus{};
    inline static std::function<VkResult(VkDevice device, uint32_t fenceCount, const VkFence* pFences, VkBool32 waitAll,
                                         uint64_t timeout)>
        WaitForFences{};
    inline static std::function<VkResult(VkDevice device, const VkSemaphoreCreateInfo* pCreateInfo,
                                         const VkAllocationCallbacks* pAllocator, VkSemaphore* pSemaphore)>
        CreateSemaphore{};
    inline static std::function<void(VkDevice device, VkSemaphore semaphore, const VkAllocationCallbacks* pAllocator)>
        DestroySemaphore{};
    inline static std::function<VkResult(VkDevice device, const VkEventCreateInfo* pCreateInfo,
                                         const VkAllocationCallbacks* pAllocator, VkEvent* pEvent)>
        CreateEvent{};
    inline static std::function<void(VkDevice device, VkEvent event, const VkAllocationCallbacks* pAllocator)> DestroyEvent{};
    inline static std::function<VkResult(VkDevice device, VkEvent event)> GetEventStatus{};
    inline static std::function<VkResult(VkDevice device, VkEvent event)> SetEvent{};
    inline static std::function<VkResult(VkDevice device, VkEvent event)> ResetEvent{};
    inline static std::function<VkResult(VkDevice device, const VkQueryPoolCreateInfo* pCreateInfo,
                                         const VkAllocationCallbacks* pAllocator, VkQueryPool* pQueryPool)>
        CreateQueryPool{};
    inline static std::function<void(VkDevice device, VkQueryPool queryPool, const VkAllocationCallbacks* pAllocator)>
        DestroyQueryPool{};
    inline static std::function<VkResult(VkDevice device, VkQueryPool queryPool, uint32_t firstQuery, uint32_t queryCount,
                                         size_t dataSize, void* pData, VkDeviceSize stride, VkQueryResultFlags flags)>
        GetQueryPoolResults{};
    inline static std::function<VkResult(VkDevice device, const VkBufferCreateInfo* pCreateInfo,
                                         const VkAllocationCallbacks* pAllocator, VkBuffer* pBuffer)>
        CreateBuffer{};
    inline static std::function<void(VkDevice device, VkBuffer buffer, const VkAllocationCallbacks* pAllocator)> DestroyBuffer{};
    inline static std::function<VkResult(VkDevice device, const VkBufferViewCreateInfo* pCreateInfo,
                                         const VkAllocationCallbacks* pAllocator, VkBufferView* pView)>
        CreateBufferView{};
    inline static std::function<void(VkDevice device, VkBufferView bufferView, const VkAllocationCallbacks* pAllocator)>
        DestroyBufferView{};
    inline static std::function<VkResult(VkDevice device, const VkImageCreateInfo* pCreateInfo,
                                         const VkAllocationCallbacks* pAllocator, VkImage* pImage)>
        CreateImage{};
    inline static std::function<void(VkDevice device, VkImage image, const VkAllocationCallbacks* pAllocator)> DestroyImage{};
    inline static std::function<void(VkDevice device, VkImage image, const VkImageSubresource* pSubresource,
                                     VkSubresourceLayout* pLayout)>
        GetImageSubresourceLayout{};
    inline static std::function<VkResult(VkDevice device, const VkImageViewCreateInfo* pCreateInfo,
                                         const VkAllocationCallbacks* pAllocator, VkImageView* pView)>
        CreateImageView{};
    inline static std::function<void(VkDevice device, VkImageView imageView, const VkAllocationCallbacks* pAllocator)>
        DestroyImageView{};
    inline static std::function<VkResult(VkDevice device, const VkShaderModuleCreateInfo* pCreateInfo,
                                         const VkAllocationCallbacks* pAllocator, VkShaderModule* pShaderModule)>
        CreateShaderModule{};
    inline static std::function<void(VkDevice device, VkShaderModule shaderModule, const VkAllocationCallbacks* pAllocator)>
        DestroyShaderModule{};
    inline static std::function<VkResult(VkDevice device, const VkPipelineCacheCreateInfo* pCreateInfo,
                                         const VkAllocationCallbacks* pAllocator, VkPipelineCache* pPipelineCache)>
        CreatePipelineCache{};
    inline static std::function<void(VkDevice device, VkPipelineCache pipelineCache, const VkAllocationCallbacks* pAllocator)>
        DestroyPipelineCache{};
    inline static std::function<VkResult(VkDevice device, VkPipelineCache pipelineCache, size_t* pDataSize, void* pData)>
        GetPipelineCacheData{};
    inline static std::function<VkResult(VkDevice device, VkPipelineCache dstCache, uint32_t srcCacheCount,
                                         const VkPipelineCache* pSrcCaches)>
        MergePipelineCaches{};
    inline static std::function<VkResult(VkDevice device, VkPipelineCache pipelineCache, uint32_t createInfoCount,
                                         const VkGraphicsPipelineCreateInfo* pCreateInfos, const VkAllocationCallbacks* pAllocator,
                                         VkPipeline* pPipelines)>
        CreateGraphicsPipelines{};
    inline static std::function<VkResult(VkDevice device, VkPipelineCache pipelineCache, uint32_t createInfoCount,
                                         const VkComputePipelineCreateInfo* pCreateInfos, const VkAllocationCallbacks* pAllocator,
                                         VkPipeline* pPipelines)>
        CreateComputePipelines{};
    inline static std::function<void(VkDevice device, VkPipeline pipeline, const VkAllocationCallbacks* pAllocator)>
        DestroyPipeline{};
    inline static std::function<VkResult(VkDevice device, const VkPipelineLayoutCreateInfo* pCreateInfo,
                                         const VkAllocationCallbacks* pAllocator, VkPipelineLayout* pPipelineLayout)>
        CreatePipelineLayout{};
    inline static std::function<void(VkDevice device, VkPipelineLayout pipelineLayout, const VkAllocationCallbacks* pAllocator)>
        DestroyPipelineLayout{};
    inline static std::function<VkResult(VkDevice device, const VkSamplerCreateInfo* pCreateInfo,
                                         const VkAllocationCallbacks* pAllocator, VkSampler* pSampler)>
        CreateSampler{};
    inline static std::function<void(VkDevice device, VkSampler sampler, const VkAllocationCallbacks* pAllocator)> DestroySampler{};
    inline static std::function<VkResult(VkDevice device, const VkDescriptorSetLayoutCreateInfo* pCreateInfo,
                                         const VkAllocationCallbacks* pAllocator, VkDescriptorSetLayout* pSetLayout)>
        CreateDescriptorSetLayout{};
    inline static std::function<void(VkDevice device, VkDescriptorSetLayout descriptorSetLayout,
                                     const VkAllocationCallbacks* pAllocator)>
        DestroyDescriptorSetLayout{};
    inline static std::function<VkResult(VkDevice device, const VkDescriptorPoolCreateInfo* pCreateInfo,
                                         const VkAllocationCallbacks* pAllocator, VkDescriptorPool* pDescriptorPool)>
        CreateDescriptorPool{};
    inline static std::function<void(VkDevice device, VkDescriptorPool descriptorPool, const VkAllocationCallbacks* pAllocator)>
        DestroyDescriptorPool{};
    inline static std::function<VkResult(VkDevice device, VkDescriptorPool descriptorPool, VkDescriptorPoolResetFlags flags)>
        ResetDescriptorPool{};
    inline static std::function<VkResult(VkDevice device, const VkDescriptorSetAllocateInfo* pAllocateInfo,
                                         VkDescriptorSet* pDescriptorSets)>
        AllocateDescriptorSets{};
    inline static std::function<VkResult(VkDevice device, VkDescriptorPool descriptorPool, uint32_t descriptorSetCount,
                                         const VkDescriptorSet* pDescriptorSets)>
        FreeDescriptorSets{};
    inline static std::function<void(VkDevice device, uint32_t descriptorWriteCount, const VkWriteDescriptorSet* pDescriptorWrites,
                                     uint32_t descriptorCopyCount, const VkCopyDescriptorSet* pDescriptorCopies)>
        UpdateDescriptorSets{};
    inline static std::function<VkResult(VkDevice device, const VkFramebufferCreateInfo* pCreateInfo,
                                         const VkAllocationCallbacks* pAllocator, VkFramebuffer* pFramebuffer)>
        CreateFramebuffer{};
    inline static std::function<void(VkDevice device, VkFramebuffer framebuffer, const VkAllocationCallbacks* pAllocator)>
        DestroyFramebuffer{};
    inline static std::function<VkResult(VkDevice device, const VkRenderPassCreateInfo* pCreateInfo,
                                         const VkAllocationCallbacks* pAllocator, VkRenderPass* pRenderPass)>
        CreateRenderPass{};
    inline static std::function<void(VkDevice device, VkRenderPass renderPass, const VkAllocationCallbacks* pAllocator)>
        DestroyRenderPass{};
    inline static std::function<void(VkDevice device, VkRenderPass renderPass, VkExtent2D* pGranularity)>
        GetRenderAreaGranularity{};
    inline static std::function<VkResult(VkDevice device, const VkCommandPoolCreateInfo* pCreateInfo,
                                         const VkAllocationCallbacks* pAllocator, VkCommandPool* pCommandPool)>
        CreateCommandPool{};
    inline static std::function<void(VkDevice device, VkCommandPool commandPool, const VkAllocationCallbacks* pAllocator)>
        DestroyCommandPool{};
    inline static std::function<VkResult(VkDevice device, VkCommandPool commandPool, VkCommandPoolResetFlags flags)>
        ResetCommandPool{};
    inline static std::function<VkResult(VkDevice device, const VkCommandBufferAllocateInfo* pAllocateInfo,
                                         VkCommandBuffer* pCommandBuffers)>
        AllocateCommandBuffers{};
    inline static std::function<void(VkDevice device, VkCommandPool commandPool, uint32_t commandBufferCount,
                                     const VkCommandBuffer* pCommandBuffers)>
        FreeCommandBuffers{};
    inline static std::function<VkResult(VkCommandBuffer commandBuffer, const VkCommandBufferBeginInfo* pBeginInfo)>
        BeginCommandBuffer{};
    inline static std::function<VkResult(VkCommandBuffer commandBuffer)> EndCommandBuffer{};
    inline static std::function<VkResult(VkCommandBuffer commandBuffer, VkCommandBufferResetFlags flags)> ResetCommandBuffer{};
    inline static std::function<void(VkCommandBuffer commandBuffer, VkPipelineBindPoint pipelineBindPoint, VkPipeline pipeline)>
        CmdBindPipeline{};
    inline static std::function<void(VkCommandBuffer commandBuffer, uint32_t firstViewport, uint32_t viewportCount,
                                     const VkViewport* pViewports)>
        CmdSetViewport{};
    inline static std::function<void(VkCommandBuffer commandBuffer, uint32_t firstScissor, uint32_t scissorCount,
                                     const VkRect2D* pScissors)>
        CmdSetScissor{};
    inline static std::function<void(VkCommandBuffer commandBuffer, float lineWidth)> CmdSetLineWidth{};
    inline static std::function<void(VkCommandBuffer commandBuffer, float depthBiasConstantFactor, float depthBiasClamp,
                                     float depthBiasSlopeFactor)>
        CmdSetDepthBias{};
    inline static std::function<void(VkCommandBuffer commandBuffer, const float blendConstants[4])> CmdSetBlendConstants{};
    inline static std::function<void(VkCommandBuffer commandBuffer, float minDepthBounds, float maxDepthBounds)>
        CmdSetDepthBounds{};
    inline static std::function<void(VkCommandBuffer commandBuffer, VkStencilFaceFlags faceMask, uint32_t compareMask)>
        CmdSetStencilCompareMask{};
    inline static std::function<void(VkCommandBuffer commandBuffer, VkStencilFaceFlags faceMask, uint32_t writeMask)>
        CmdSetStencilWriteMask{};
    inline static std::function<void(VkCommandBuffer commandBuffer, VkStencilFaceFlags faceMask, uint32_t reference)>
        CmdSetStencilReference{};
    inline static std::function<void(VkCommandBuffer commandBuffer, VkPipelineBindPoint pipelineBindPoint, VkPipelineLayout layout,
                                     uint32_t firstSet, uint32_t descriptorSetCount, const VkDescriptorSet* pDescriptorSets,
                                     uint32_t dynamicOffsetCount, const uint32_t* pDynamicOffsets)>
        CmdBindDescriptorSets{};
    inline static std::function<void(VkCommandBuffer commandBuffer, VkBuffer buffer, VkDeviceSize offset, VkIndexType indexType)>
        CmdBindIndexBuffer{};
    inline static std::function<void(VkCommandBuffer commandBuffer, uint32_t firstBinding, uint32_t bindingCount,
                                     const VkBuffer* pBuffers, const VkDeviceSize* pOffsets)>
        CmdBindVertexBuffers{};
    inline static std::function<void(VkCommandBuffer commandBuffer, uint32_t vertexCount, uint32_t instanceCount,
                                     uint32_t firstVertex, uint32_t firstInstance)>
        CmdDraw{};
    inline static std::function<void(VkCommandBuffer commandBuffer, uint32_t indexCount, uint32_t instanceCount,
                                     uint32_t firstIndex, int32_t vertexOffset, uint32_t firstInstance)>
        CmdDrawIndexed{};
    inline static std::function<void(VkCommandBuffer commandBuffer, VkBuffer buffer, VkDeviceSize offset, uint32_t drawCount,
                                     uint32_t stride)>
        CmdDrawIndirect{};
    inline static std::function<void(VkCommandBuffer commandBuffer, VkBuffer buffer, VkDeviceSize offset, uint32_t drawCount,
                                     uint32_t stride)>
        CmdDrawIndexedIndirect{};
    inline static std::function<void(VkCommandBuffer commandBuffer, uint32_t groupCountX, uint32_t groupCountY,
                                     uint32_t groupCountZ)>
        CmdDispatch{};
    inline static std::function<void(VkCommandBuffer commandBuffer, VkBuffer buffer, VkDeviceSize offset)> CmdDispatchIndirect{};
    inline static std::function<void(VkCommandBuffer commandBuffer, VkBuffer srcBuffer, VkBuffer dstBuffer, uint32_t regionCount,
                                     const VkBufferCopy* pRegions)>
        CmdCopyBuffer{};
    inline static std::function<void(VkCommandBuffer commandBuffer, VkImage srcImage, VkImageLayout srcImageLayout,
                                     VkImage dstImage, VkImageLayout dstImageLayout, uint32_t regionCount,
                                     const VkImageCopy* pRegions)>
        CmdCopyImage{};
    inline static std::function<void(VkCommandBuffer commandBuffer, VkImage srcImage, VkImageLayout srcImageLayout,
                                     VkImage dstImage, VkImageLayout dstImageLayout, uint32_t regionCount,
                                     const VkImageBlit* pRegions, VkFilter filter)>
        CmdBlitImage{};
    inline static std::function<void(VkCommandBuffer commandBuffer, VkBuffer srcBuffer, VkImage dstImage,
                                     VkImageLayout dstImageLayout, uint32_t regionCount, const VkBufferImageCopy* pRegions)>
        CmdCopyBufferToImage{};
    inline static std::function<void(VkCommandBuffer commandBuffer, VkImage srcImage, VkImageLayout srcImageLayout,
                                     VkBuffer dstBuffer, uint32_t regionCount, const VkBufferImageCopy* pRegions)>
        CmdCopyImageToBuffer{};
    inline static std::function<void(VkCommandBuffer commandBuffer, VkBuffer dstBuffer, VkDeviceSize dstOffset,
                                     VkDeviceSize dataSize, const void* pData)>
        CmdUpdateBuffer{};
    inline static std::function<void(VkCommandBuffer commandBuffer, VkBuffer dstBuffer, VkDeviceSize dstOffset, VkDeviceSize size,
                                     uint32_t data)>
        CmdFillBuffer{};
    inline static std::function<void(VkCommandBuffer commandBuffer, VkImage image, VkImageLayout imageLayout,
                                     const VkClearColorValue* pColor, uint32_t rangeCount, const VkImageSubresourceRange* pRanges)>
        CmdClearColorImage{};
    inline static std::function<void(VkCommandBuffer commandBuffer, VkImage image, VkImageLayout imageLayout,
                                     const VkClearDepthStencilValue* pDepthStencil, uint32_t rangeCount,
                                     const VkImageSubresourceRange* pRanges)>
        CmdClearDepthStencilImage{};
    inline static std::function<void(VkCommandBuffer commandBuffer, uint32_t attachmentCount, const VkClearAttachment* pAttachments,
                                     uint32_t rectCount, const VkClearRect* pRects)>
        CmdClearAttachments{};
    inline static std::function<void(VkCommandBuffer commandBuffer, VkImage srcImage, VkImageLayout srcImageLayout,
                                     VkImage dstImage, VkImageLayout dstImageLayout, uint32_t regionCount,
                                     const VkImageResolve* pRegions)>
        CmdResolveImage{};
    inline static std::function<void(VkCommandBuffer commandBuffer, VkEvent event, VkPipelineStageFlags stageMask)> CmdSetEvent{};
    inline static std::function<void(VkCommandBuffer commandBuffer, VkEvent event, VkPipelineStageFlags stageMask)> CmdResetEvent{};
    inline static std::function<void(VkCommandBuffer commandBuffer, uint32_t eventCount, const VkEvent* pEvents,
                                     VkPipelineStageFlags srcStageMask, VkPipelineStageFlags dstStageMask,
                                     uint32_t memoryBarrierCount, const VkMemoryBarrier* pMemoryBarriers,
                                     uint32_t bufferMemoryBarrierCount, const VkBufferMemoryBarrier* pBufferMemoryBarriers,
                                     uint32_t imageMemoryBarrierCount, const VkImageMemoryBarrier* pImageMemoryBarriers)>
        CmdWaitEvents{};
    inline static std::function<void(VkCommandBuffer commandBuffer, VkPipelineStageFlags srcStageMask,
                                     VkPipelineStageFlags dstStageMask, VkDependencyFlags dependencyFlags,
                                     uint32_t memoryBarrierCount, const VkMemoryBarrier* pMemoryBarriers,
                                     uint32_t bufferMemoryBarrierCount, const VkBufferMemoryBarrier* pBufferMemoryBarriers,
                                     uint32_t imageMemoryBarrierCount, const VkImageMemoryBarrier* pImageMemoryBarriers)>
        CmdPipelineBarrier{};
    inline static std::function<void(VkCommandBuffer commandBuffer, VkQueryPool queryPool, uint32_t query,
                                     VkQueryControlFlags flags)>
        CmdBeginQuery{};
    inline static std::function<void(VkCommandBuffer commandBuffer, VkQueryPool queryPool, uint32_t query)> CmdEndQuery{};
    inline static std::function<void(VkCommandBuffer commandBuffer, VkQueryPool queryPool, uint32_t firstQuery,
                                     uint32_t queryCount)>
        CmdResetQueryPool{};
    inline static std::function<void(VkCommandBuffer commandBuffer, VkPipelineStageFlagBits pipelineStage, VkQueryPool queryPool,
                                     uint32_t query)>
        CmdWriteTimestamp{};
    inline static std::function<void(VkCommandBuffer commandBuffer, VkQueryPool queryPool, uint32_t firstQuery, uint32_t queryCount,
                                     VkBuffer dstBuffer, VkDeviceSize dstOffset, VkDeviceSize stride, VkQueryResultFlags flags)>
        CmdCopyQueryPoolResults{};
    inline static std::function<void(VkCommandBuffer commandBuffer, VkPipelineLayout layout, VkShaderStageFlags stageFlags,
                                     uint32_t offset, uint32_t size, const void* pValues)>
        CmdPushConstants{};
    inline static std::function<void(VkCommandBuffer commandBuffer, const VkRenderPassBeginInfo* pRenderPassBegin,
                                     VkSubpassContents contents)>
        CmdBeginRenderPass{};
    inline static std::function<void(VkCommandBuffer commandBuffer, VkSubpassContents contents)> CmdNextSubpass{};
    inline static std::function<void(VkCommandBuffer commandBuffer)> CmdEndRenderPass{};
    inline static std::function<void(VkCommandBuffer commandBuffer, uint32_t commandBufferCount,
                                     const VkCommandBuffer* pCommandBuffers)>
        CmdExecuteCommands{};
    inline static std::function<VkResult(uint32_t* pApiVersion)> EnumerateInstanceVersion{};
    inline static std::function<VkResult(VkDevice device, uint32_t bindInfoCount, const VkBindBufferMemoryInfo* pBindInfos)>
        BindBufferMemory2{};
    inline static std::function<VkResult(VkDevice device, uint32_t bindInfoCount, const VkBindImageMemoryInfo* pBindInfos)>
        BindImageMemory2{};
    inline static std::function<void(VkDevice device, uint32_t heapIndex, uint32_t localDeviceIndex, uint32_t remoteDeviceIndex,
                                     VkPeerMemoryFeatureFlags* pPeerMemoryFeatures)>
        GetDeviceGroupPeerMemoryFeatures{};
    inline static std::function<void(VkCommandBuffer commandBuffer, uint32_t deviceMask)> CmdSetDeviceMask{};
    inline static std::function<void(VkCommandBuffer commandBuffer, uint32_t baseGroupX, uint32_t baseGroupY, uint32_t baseGroupZ,
                                     uint32_t groupCountX, uint32_t groupCountY, uint32_t groupCountZ)>
        CmdDispatchBase{};
    inline static std::function<VkResult(VkInstance instance, uint32_t* pPhysicalDeviceGroupCount,
                                         VkPhysicalDeviceGroupProperties* pPhysicalDeviceGroupProperties)>
        EnumeratePhysicalDeviceGroups{};
    inline static std::function<void(VkDevice device, const VkImageMemoryRequirementsInfo2* pInfo,
                                     VkMemoryRequirements2* pMemoryRequirements)>
        GetImageMemoryRequirements2{};
    inline static std::function<void(VkDevice device, const VkBufferMemoryRequirementsInfo2* pInfo,
                                     VkMemoryRequirements2* pMemoryRequirements)>
        GetBufferMemoryRequirements2{};
    inline static std::function<void(VkDevice device, const VkImageSparseMemoryRequirementsInfo2* pInfo,
                                     uint32_t* pSparseMemoryRequirementCount,
                                     VkSparseImageMemoryRequirements2* pSparseMemoryRequirements)>
        GetImageSparseMemoryRequirements2{};
    inline static std::function<void(VkPhysicalDevice physicalDevice, VkPhysicalDeviceFeatures2* pFeatures)>
        GetPhysicalDeviceFeatures2{};
    inline static std::function<void(VkPhysicalDevice physicalDevice, VkPhysicalDeviceProperties2* pProperties)>
        GetPhysicalDeviceProperties2{};
    inline static std::function<void(VkPhysicalDevice physicalDevice, VkFormat format, VkFormatProperties2* pFormatProperties)>
        GetPhysicalDeviceFormatProperties2{};
    inline static std::function<VkResult(VkPhysicalDevice physicalDevice, const VkPhysicalDeviceImageFormatInfo2* pImageFormatInfo,
                                         VkImageFormatProperties2* pImageFormatProperties)>
        GetPhysicalDeviceImageFormatProperties2{};
    inline static std::function<void(VkPhysicalDevice physicalDevice, uint32_t* pQueueFamilyPropertyCount,
                                     VkQueueFamilyProperties2* pQueueFamilyProperties)>
        GetPhysicalDeviceQueueFamilyProperties2{};
    inline static std::function<void(VkPhysicalDevice physicalDevice, VkPhysicalDeviceMemoryProperties2* pMemoryProperties)>
        GetPhysicalDeviceMemoryProperties2{};
    inline static std::function<void(VkPhysicalDevice physicalDevice, const VkPhysicalDeviceSparseImageFormatInfo2* pFormatInfo,
                                     uint32_t* pPropertyCount, VkSparseImageFormatProperties2* pProperties)>
        GetPhysicalDeviceSparseImageFormatProperties2{};
    inline static std::function<void(VkDevice device, VkCommandPool commandPool, VkCommandPoolTrimFlags flags)> TrimCommandPool{};
    inline static std::function<void(VkDevice device, const VkDeviceQueueInfo2* pQueueInfo, VkQueue* pQueue)> GetDeviceQueue2{};
    inline static std::function<VkResult(VkDevice device, const VkSamplerYcbcrConversionCreateInfo* pCreateInfo,
                                         const VkAllocationCallbacks* pAllocator, VkSamplerYcbcrConversion* pYcbcrConversion)>
        CreateSamplerYcbcrConversion{};
    inline static std::function<void(VkDevice device, VkSamplerYcbcrConversion ycbcrConversion,
                                     const VkAllocationCallbacks* pAllocator)>
        DestroySamplerYcbcrConversion{};
    inline static std::function<VkResult(VkDevice device, const VkDescriptorUpdateTemplateCreateInfo* pCreateInfo,
                                         const VkAllocationCallbacks* pAllocator,
                                         VkDescriptorUpdateTemplate* pDescriptorUpdateTemplate)>
        CreateDescriptorUpdateTemplate{};
    inline static std::function<void(VkDevice device, VkDescriptorUpdateTemplate descriptorUpdateTemplate,
                                     const VkAllocationCallbacks* pAllocator)>
        DestroyDescriptorUpdateTemplate{};
    inline static std::function<void(VkDevice device, VkDescriptorSet descriptorSet,
                                     VkDescriptorUpdateTemplate descriptorUpdateTemplate, const void* pData)>
        UpdateDescriptorSetWithTemplate{};
    inline static std::function<void(VkPhysicalDevice physicalDevice, const VkPhysicalDeviceExternalBufferInfo* pExternalBufferInfo,
                                     VkExternalBufferProperties* pExternalBufferProperties)>
        GetPhysicalDeviceExternalBufferProperties{};
    inline static std::function<void(VkPhysicalDevice physicalDevice, const VkPhysicalDeviceExternalFenceInfo* pExternalFenceInfo,
                                     VkExternalFenceProperties* pExternalFenceProperties)>
        GetPhysicalDeviceExternalFenceProperties{};
    inline static std::function<void(VkPhysicalDevice physicalDevice,
                                     const VkPhysicalDeviceExternalSemaphoreInfo* pExternalSemaphoreInfo,
                                     VkExternalSemaphoreProperties* pExternalSemaphoreProperties)>
        GetPhysicalDeviceExternalSemaphoreProperties{};
    inline static std::function<void(VkDevice device, const VkDescriptorSetLayoutCreateInfo* pCreateInfo,
                                     VkDescriptorSetLayoutSupport* pSupport)>
        GetDescriptorSetLayoutSupport{};
    inline static std::function<void(VkCommandBuffer commandBuffer, VkBuffer buffer, VkDeviceSize offset, VkBuffer countBuffer,
                                     VkDeviceSize countBufferOffset, uint32_t maxDrawCount, uint32_t stride)>
        CmdDrawIndirectCount{};
    inline static std::function<void(VkCommandBuffer commandBuffer, VkBuffer buffer, VkDeviceSize offset, VkBuffer countBuffer,
                                     VkDeviceSize countBufferOffset, uint32_t maxDrawCount, uint32_t stride)>
        CmdDrawIndexedIndirectCount{};
    inline static std::function<VkResult(VkDevice device, const VkRenderPassCreateInfo2* pCreateInfo,
                                         const VkAllocationCallbacks* pAllocator, VkRenderPass* pRenderPass)>
        CreateRenderPass2{};
    inline static std::function<void(VkCommandBuffer commandBuffer, const VkRenderPassBeginInfo* pRenderPassBegin,
                                     const VkSubpassBeginInfo* pSubpassBeginInfo)>
        CmdBeginRenderPass2{};
    inline static std::function<void(VkCommandBuffer commandBuffer, const VkSubpassBeginInfo* pSubpassBeginInfo,
                                     const VkSubpassEndInfo* pSubpassEndInfo)>
        CmdNextSubpass2{};
    inline static std::function<void(VkCommandBuffer commandBuffer, const VkSubpassEndInfo* pSubpassEndInfo)> CmdEndRenderPass2{};
    inline static std::function<void(VkDevice device, VkQueryPool queryPool, uint32_t firstQuery, uint32_t queryCount)>
        ResetQueryPool{};
    inline static std::function<VkResult(VkDevice device, VkSemaphore semaphore, uint64_t* pValue)> GetSemaphoreCounterValue{};
    inline static std::function<VkResult(VkDevice device, const VkSemaphoreWaitInfo* pWaitInfo, uint64_t timeout)> WaitSemaphores{};
    inline static std::function<VkResult(VkDevice device, const VkSemaphoreSignalInfo* pSignalInfo)> SignalSemaphore{};
    inline static std::function<VkDeviceAddress(VkDevice device, const VkBufferDeviceAddressInfo* pInfo)> GetBufferDeviceAddress{};
    inline static std::function<uint64_t(VkDevice device, const VkBufferDeviceAddressInfo* pInfo)> GetBufferOpaqueCaptureAddress{};
    inline static std::function<uint64_t(VkDevice device, const VkDeviceMemoryOpaqueCaptureAddressInfo* pInfo)>
        GetDeviceMemoryOpaqueCaptureAddress{};
    inline static std::function<VkResult(VkPhysicalDevice physicalDevice, uint32_t* pToolCount,
                                         VkPhysicalDeviceToolProperties* pToolProperties)>
        GetPhysicalDeviceToolProperties{};
    inline static std::function<VkResult(VkDevice device, const VkPrivateDataSlotCreateInfo* pCreateInfo,
                                         const VkAllocationCallbacks* pAllocator, VkPrivateDataSlot* pPrivateDataSlot)>
        CreatePrivateDataSlot{};
    inline static std::function<void(VkDevice device, VkPrivateDataSlot privateDataSlot, const VkAllocationCallbacks* pAllocator)>
        DestroyPrivateDataSlot{};
    inline static std::function<VkResult(VkDevice device, VkObjectType objectType, uint64_t objectHandle,
                                         VkPrivateDataSlot privateDataSlot, uint64_t data)>
        SetPrivateData{};
    inline static std::function<void(VkDevice device, VkObjectType objectType, uint64_t objectHandle,
                                     VkPrivateDataSlot privateDataSlot, uint64_t* pData)>
        GetPrivateData{};
    inline static std::function<void(VkCommandBuffer commandBuffer, VkEvent event, const VkDependencyInfo* pDependencyInfo)>
        CmdSetEvent2{};
    inline static std::function<void(VkCommandBuffer commandBuffer, VkEvent event, VkPipelineStageFlags2 stageMask)>
        CmdResetEvent2{};
    inline static std::function<void(VkCommandBuffer commandBuffer, uint32_t eventCount, const VkEvent* pEvents,
                                     const VkDependencyInfo* pDependencyInfos)>
        CmdWaitEvents2{};
    inline static std::function<void(VkCommandBuffer commandBuffer, const VkDependencyInfo* pDependencyInfo)> CmdPipelineBarrier2{};
    inline static std::function<void(VkCommandBuffer commandBuffer, VkPipelineStageFlags2 stage, VkQueryPool queryPool,
                                     uint32_t query)>
        CmdWriteTimestamp2{};
    inline static std::function<VkResult(VkQueue queue, uint32_t submitCount, const VkSubmitInfo2* pSubmits, VkFence fence)>
        QueueSubmit2{};
    inline static std::function<void(VkCommandBuffer commandBuffer, const VkCopyBufferInfo2* pCopyBufferInfo)> CmdCopyBuffer2{};
    inline static std::function<void(VkCommandBuffer commandBuffer, const VkCopyImageInfo2* pCopyImageInfo)> CmdCopyImage2{};
    inline static std::function<void(VkCommandBuffer commandBuffer, const VkCopyBufferToImageInfo2* pCopyBufferToImageInfo)>
        CmdCopyBufferToImage2{};
    inline static std::function<void(VkCommandBuffer commandBuffer, const VkCopyImageToBufferInfo2* pCopyImageToBufferInfo)>
        CmdCopyImageToBuffer2{};
    inline static std::function<void(VkCommandBuffer commandBuffer, const VkBlitImageInfo2* pBlitImageInfo)> CmdBlitImage2{};
    inline static std::function<void(VkCommandBuffer commandBuffer, const VkResolveImageInfo2* pResolveImageInfo)>
        CmdResolveImage2{};
    inline static std::function<void(VkCommandBuffer commandBuffer, const VkRenderingInfo* pRenderingInfo)> CmdBeginRendering{};
    inline static std::function<void(VkCommandBuffer commandBuffer)> CmdEndRendering{};
    inline static std::function<void(VkCommandBuffer commandBuffer, VkCullModeFlags cullMode)> CmdSetCullMode{};
    inline static std::function<void(VkCommandBuffer commandBuffer, VkFrontFace frontFace)> CmdSetFrontFace{};
    inline static std::function<void(VkCommandBuffer commandBuffer, VkPrimitiveTopology primitiveTopology)>
        CmdSetPrimitiveTopology{};
    inline static std::function<void(VkCommandBuffer commandBuffer, uint32_t viewportCount, const VkViewport* pViewports)>
        CmdSetViewportWithCount{};
    inline static std::function<void(VkCommandBuffer commandBuffer, uint32_t scissorCount, const VkRect2D* pScissors)>
        CmdSetScissorWithCount{};
    inline static std::function<void(VkCommandBuffer commandBuffer, uint32_t firstBinding, uint32_t bindingCount,
                                     const VkBuffer* pBuffers, const VkDeviceSize* pOffsets, const VkDeviceSize* pSizes,
                                     const VkDeviceSize* pStrides)>
        CmdBindVertexBuffers2{};
    inline static std::function<void(VkCommandBuffer commandBuffer, VkBool32 depthTestEnable)> CmdSetDepthTestEnable{};
    inline static std::function<void(VkCommandBuffer commandBuffer, VkBool32 depthWriteEnable)> CmdSetDepthWriteEnable{};
    inline static std::function<void(VkCommandBuffer commandBuffer, VkCompareOp depthCompareOp)> CmdSetDepthCompareOp{};
    inline static std::function<void(VkCommandBuffer commandBuffer, VkBool32 depthBoundsTestEnable)> CmdSetDepthBoundsTestEnable{};
    inline static std::function<void(VkCommandBuffer commandBuffer, VkBool32 stencilTestEnable)> CmdSetStencilTestEnable{};
    inline static std::function<void(VkCommandBuffer commandBuffer, VkStencilFaceFlags faceMask, VkStencilOp failOp,
                                     VkStencilOp passOp, VkStencilOp depthFailOp, VkCompareOp compareOp)>
        CmdSetStencilOp{};
    inline static std::function<void(VkCommandBuffer commandBuffer, VkBool32 rasterizerDiscardEnable)>
        CmdSetRasterizerDiscardEnable{};
    inline static std::function<void(VkCommandBuffer commandBuffer, VkBool32 depthBiasEnable)> CmdSetDepthBiasEnable{};
    inline static std::function<void(VkCommandBuffer commandBuffer, VkBool32 primitiveRestartEnable)>
        CmdSetPrimitiveRestartEnable{};
    inline static std::function<void(VkDevice device, const VkDeviceBufferMemoryRequirements* pInfo,
                                     VkMemoryRequirements2* pMemoryRequirements)>
        GetDeviceBufferMemoryRequirements{};
    inline static std::function<void(VkDevice device, const VkDeviceImageMemoryRequirements* pInfo,
                                     VkMemoryRequirements2* pMemoryRequirements)>
        GetDeviceImageMemoryRequirements{};
    inline static std::function<void(VkDevice device, const VkDeviceImageMemoryRequirements* pInfo,
                                     uint32_t* pSparseMemoryRequirementCount,
                                     VkSparseImageMemoryRequirements2* pSparseMemoryRequirements)>
        GetDeviceImageSparseMemoryRequirements{};
    inline static std::function<void(VkInstance instance, VkSurfaceKHR surface, const VkAllocationCallbacks* pAllocator)>
        DestroySurfaceKHR{};
    inline static std::function<VkResult(VkPhysicalDevice physicalDevice, uint32_t queueFamilyIndex, VkSurfaceKHR surface,
                                         VkBool32* pSupported)>
        GetPhysicalDeviceSurfaceSupportKHR{};
    inline static std::function<VkResult(VkPhysicalDevice physicalDevice, VkSurfaceKHR surface,
                                         VkSurfaceCapabilitiesKHR* pSurfaceCapabilities)>
        GetPhysicalDeviceSurfaceCapabilitiesKHR{};
    inline static std::function<VkResult(VkPhysicalDevice physicalDevice, VkSurfaceKHR surface, uint32_t* pSurfaceFormatCount,
                                         VkSurfaceFormatKHR* pSurfaceFormats)>
        GetPhysicalDeviceSurfaceFormatsKHR{};
    inline static std::function<VkResult(VkPhysicalDevice physicalDevice, VkSurfaceKHR surface, uint32_t* pPresentModeCount,
                                         VkPresentModeKHR* pPresentModes)>
        GetPhysicalDeviceSurfacePresentModesKHR{};
    inline static std::function<VkResult(VkDevice device, const VkSwapchainCreateInfoKHR* pCreateInfo,
                                         const VkAllocationCallbacks* pAllocator, VkSwapchainKHR* pSwapchain)>
        CreateSwapchainKHR{};
    inline static std::function<void(VkDevice device, VkSwapchainKHR swapchain, const VkAllocationCallbacks* pAllocator)>
        DestroySwapchainKHR{};
    inline static std::function<VkResult(VkDevice device, VkSwapchainKHR swapchain, uint32_t* pSwapchainImageCount,
                                         VkImage* pSwapchainImages)>
        GetSwapchainImagesKHR{};
    inline static std::function<VkResult(VkDevice device, VkSwapchainKHR swapchain, uint64_t timeout, VkSemaphore semaphore,
                                         VkFence fence, uint32_t* pImageIndex)>
        AcquireNextImageKHR{};
    inline static std::function<VkResult(VkQueue queue, const VkPresentInfoKHR* pPresentInfo)> QueuePresentKHR{};
    inline static std::function<VkResult(VkDevice device, VkDeviceGroupPresentCapabilitiesKHR* pDeviceGroupPresentCapabilities)>
        GetDeviceGroupPresentCapabilitiesKHR{};
    inline static std::function<VkResult(VkDevice device, VkSurfaceKHR surface, VkDeviceGroupPresentModeFlagsKHR* pModes)>
        GetDeviceGroupSurfacePresentModesKHR{};
    inline static std::function<VkResult(VkPhysicalDevice physicalDevice, VkSurfaceKHR surface, uint32_t* pRectCount,
                                         VkRect2D* pRects)>
        GetPhysicalDevicePresentRectanglesKHR{};
    inline static std::function<VkResult(VkDevice device, const VkAcquireNextImageInfoKHR* pAcquireInfo, uint32_t* pImageIndex)>
        AcquireNextImage2KHR{};
    inline static std::function<VkResult(VkPhysicalDevice physicalDevice, uint32_t* pPropertyCount,
                                         VkDisplayPropertiesKHR* pProperties)>
        GetPhysicalDeviceDisplayPropertiesKHR{};
    inline static std::function<VkResult(VkPhysicalDevice physicalDevice, uint32_t* pPropertyCount,
                                         VkDisplayPlanePropertiesKHR* pProperties)>
        GetPhysicalDeviceDisplayPlanePropertiesKHR{};
    inline static std::function<VkResult(VkPhysicalDevice physicalDevice, uint32_t planeIndex, uint32_t* pDisplayCount,
                                         VkDisplayKHR* pDisplays)>
        GetDisplayPlaneSupportedDisplaysKHR{};
    inline static std::function<VkResult(VkPhysicalDevice physicalDevice, VkDisplayKHR display, uint32_t* pPropertyCount,
                                         VkDisplayModePropertiesKHR* pProperties)>
        GetDisplayModePropertiesKHR{};
    inline static std::function<VkResult(VkPhysicalDevice physicalDevice, VkDisplayKHR display,
                                         const VkDisplayModeCreateInfoKHR* pCreateInfo, const VkAllocationCallbacks* pAllocator,
                                         VkDisplayModeKHR* pMode)>
        CreateDisplayModeKHR{};
    inline static std::function<VkResult(VkPhysicalDevice physicalDevice, VkDisplayModeKHR mode, uint32_t planeIndex,
                                         VkDisplayPlaneCapabilitiesKHR* pCapabilities)>
        GetDisplayPlaneCapabilitiesKHR{};
    inline static std::function<VkResult(VkInstance instance, const VkDisplaySurfaceCreateInfoKHR* pCreateInfo,
                                         const VkAllocationCallbacks* pAllocator, VkSurfaceKHR* pSurface)>
        CreateDisplayPlaneSurfaceKHR{};
    inline static std::function<VkResult(VkDevice device, uint32_t swapchainCount, const VkSwapchainCreateInfoKHR* pCreateInfos,
                                         const VkAllocationCallbacks* pAllocator, VkSwapchainKHR* pSwapchains)>
        CreateSharedSwapchainsKHR{};
#ifdef VK_USE_PLATFORM_XLIB_KHR
    inline static std::function<VkResult(VkInstance instance, const VkXlibSurfaceCreateInfoKHR* pCreateInfo,
                                         const VkAllocationCallbacks* pAllocator, VkSurfaceKHR* pSurface)>
        CreateXlibSurfaceKHR{};
    inline static std::function<VkBool32(VkPhysicalDevice physicalDevice, uint32_t queueFamilyIndex, Display* dpy,
                                         VisualID visualID)>
        GetPhysicalDeviceXlibPresentationSupportKHR{};
#endif  // VK_USE_PLATFORM_XLIB_KHR
#ifdef VK_USE_PLATFORM_XCB_KHR
    inline static std::function<VkResult(VkInstance instance, const VkXcbSurfaceCreateInfoKHR* pCreateInfo,
                                         const VkAllocationCallbacks* pAllocator, VkSurfaceKHR* pSurface)>
        CreateXcbSurfaceKHR{};
    inline static std::function<VkBool32(VkPhysicalDevice physicalDevice, uint32_t queueFamilyIndex, xcb_connection_t* connection,
                                         xcb_visualid_t visual_id)>
        GetPhysicalDeviceXcbPresentationSupportKHR{};
#endif  // VK_USE_PLATFORM_XCB_KHR
#ifdef VK_USE_PLATFORM_WAYLAND_KHR
    inline static std::function<VkResult(VkInstance instance, const VkWaylandSurfaceCreateInfoKHR* pCreateInfo,
                                         const VkAllocationCallbacks* pAllocator, VkSurfaceKHR* pSurface)>
        CreateWaylandSurfaceKHR{};
    inline static std::function<VkBool32(VkPhysicalDevice physicalDevice, uint32_t queueFamilyIndex, struct wl_display* display)>
        GetPhysicalDeviceWaylandPresentationSupportKHR{};
#endif  // VK_USE_PLATFORM_WAYLAND_KHR
#ifdef VK_USE_PLATFORM_ANDROID_KHR
    inline static std::function<VkResult(VkInstance instance, const VkAndroidSurfaceCreateInfoKHR* pCreateInfo,
                                         const VkAllocationCallbacks* pAllocator, VkSurfaceKHR* pSurface)>
        CreateAndroidSurfaceKHR{};
#endif  // VK_USE_PLATFORM_ANDROID_KHR
#ifdef VK_USE_PLATFORM_WIN32_KHR
    inline static std::function<VkResult(VkInstance instance, const VkWin32SurfaceCreateInfoKHR* pCreateInfo,
                                         const VkAllocationCallbacks* pAllocator, VkSurfaceKHR* pSurface)>
        CreateWin32SurfaceKHR{};
    inline static std::function<VkBool32(VkPhysicalDevice physicalDevice, uint32_t queueFamilyIndex)>
        GetPhysicalDeviceWin32PresentationSupportKHR{};
#endif  // VK_USE_PLATFORM_WIN32_KHR
    inline static std::function<VkResult(VkPhysicalDevice physicalDevice, const VkVideoProfileInfoKHR* pVideoProfile,
                                         VkVideoCapabilitiesKHR* pCapabilities)>
        GetPhysicalDeviceVideoCapabilitiesKHR{};
    inline static std::function<VkResult(VkPhysicalDevice physicalDevice,
                                         const VkPhysicalDeviceVideoFormatInfoKHR* pVideoFormatInfo,
                                         uint32_t* pVideoFormatPropertyCount, VkVideoFormatPropertiesKHR* pVideoFormatProperties)>
        GetPhysicalDeviceVideoFormatPropertiesKHR{};
    inline static std::function<VkResult(VkDevice device, const VkVideoSessionCreateInfoKHR* pCreateInfo,
                                         const VkAllocationCallbacks* pAllocator, VkVideoSessionKHR* pVideoSession)>
        CreateVideoSessionKHR{};
    inline static std::function<void(VkDevice device, VkVideoSessionKHR videoSession, const VkAllocationCallbacks* pAllocator)>
        DestroyVideoSessionKHR{};
    inline static std::function<VkResult(VkDevice device, VkVideoSessionKHR videoSession, uint32_t* pMemoryRequirementsCount,
                                         VkVideoSessionMemoryRequirementsKHR* pMemoryRequirements)>
        GetVideoSessionMemoryRequirementsKHR{};
    inline static std::function<VkResult(VkDevice device, VkVideoSessionKHR videoSession, uint32_t bindSessionMemoryInfoCount,
                                         const VkBindVideoSessionMemoryInfoKHR* pBindSessionMemoryInfos)>
        BindVideoSessionMemoryKHR{};
    inline static std::function<VkResult(VkDevice device, const VkVideoSessionParametersCreateInfoKHR* pCreateInfo,
                                         const VkAllocationCallbacks* pAllocator,
                                         VkVideoSessionParametersKHR* pVideoSessionParameters)>
        CreateVideoSessionParametersKHR{};
    inline static std::function<VkResult(VkDevice device, VkVideoSessionParametersKHR videoSessionParameters,
                                         const VkVideoSessionParametersUpdateInfoKHR* pUpdateInfo)>
        UpdateVideoSessionParametersKHR{};
    inline static std::function<void(VkDevice device, VkVideoSessionParametersKHR videoSessionParameters,
                                     const VkAllocationCallbacks* pAllocator)>
        DestroyVideoSessionParametersKHR{};
    inline static std::function<void(VkCommandBuffer commandBuffer, const VkVideoBeginCodingInfoKHR* pBeginInfo)>
        CmdBeginVideoCodingKHR{};
    inline static std::function<void(VkCommandBuffer commandBuffer, const VkVideoEndCodingInfoKHR* pEndCodingInfo)>
        CmdEndVideoCodingKHR{};
    inline static std::function<void(VkCommandBuffer commandBuffer, const VkVideoCodingControlInfoKHR* pCodingControlInfo)>
        CmdControlVideoCodingKHR{};
    inline static std::function<void(VkCommandBuffer commandBuffer, const VkVideoDecodeInfoKHR* pDecodeInfo)> CmdDecodeVideoKHR{};
    inline static std::function<void(VkCommandBuffer commandBuffer, const VkRenderingInfo* pRenderingInfo)> CmdBeginRenderingKHR{};
    inline static std::function<void(VkCommandBuffer commandBuffer)> CmdEndRenderingKHR{};
    inline static std::function<void(VkPhysicalDevice physicalDevice, VkPhysicalDeviceFeatures2* pFeatures)>
        GetPhysicalDeviceFeatures2KHR{};
    inline static std::function<void(VkPhysicalDevice physicalDevice, VkPhysicalDeviceProperties2* pProperties)>
        GetPhysicalDeviceProperties2KHR{};
    inline static std::function<void(VkPhysicalDevice physicalDevice, VkFormat format, VkFormatProperties2* pFormatProperties)>
        GetPhysicalDeviceFormatProperties2KHR{};
    inline static std::function<VkResult(VkPhysicalDevice physicalDevice, const VkPhysicalDeviceImageFormatInfo2* pImageFormatInfo,
                                         VkImageFormatProperties2* pImageFormatProperties)>
        GetPhysicalDeviceImageFormatProperties2KHR{};
    inline static std::function<void(VkPhysicalDevice physicalDevice, uint32_t* pQueueFamilyPropertyCount,
                                     VkQueueFamilyProperties2* pQueueFamilyProperties)>
        GetPhysicalDeviceQueueFamilyProperties2KHR{};
    inline static std::function<void(VkPhysicalDevice physicalDevice, VkPhysicalDeviceMemoryProperties2* pMemoryProperties)>
        GetPhysicalDeviceMemoryProperties2KHR{};
    inline static std::function<void(VkPhysicalDevice physicalDevice, const VkPhysicalDeviceSparseImageFormatInfo2* pFormatInfo,
                                     uint32_t* pPropertyCount, VkSparseImageFormatProperties2* pProperties)>
        GetPhysicalDeviceSparseImageFormatProperties2KHR{};
    inline static std::function<void(VkDevice device, uint32_t heapIndex, uint32_t localDeviceIndex, uint32_t remoteDeviceIndex,
                                     VkPeerMemoryFeatureFlags* pPeerMemoryFeatures)>
        GetDeviceGroupPeerMemoryFeaturesKHR{};
    inline static std::function<void(VkCommandBuffer commandBuffer, uint32_t deviceMask)> CmdSetDeviceMaskKHR{};
    inline static std::function<void(VkCommandBuffer commandBuffer, uint32_t baseGroupX, uint32_t baseGroupY, uint32_t baseGroupZ,
                                     uint32_t groupCountX, uint32_t groupCountY, uint32_t groupCountZ)>
        CmdDispatchBaseKHR{};
    inline static std::function<void(VkDevice device, VkCommandPool commandPool, VkCommandPoolTrimFlags flags)>
        TrimCommandPoolKHR{};
    inline static std::function<VkResult(VkInstance instance, uint32_t* pPhysicalDeviceGroupCount,
                                         VkPhysicalDeviceGroupProperties* pPhysicalDeviceGroupProperties)>
        EnumeratePhysicalDeviceGroupsKHR{};
    inline static std::function<void(VkPhysicalDevice physicalDevice, const VkPhysicalDeviceExternalBufferInfo* pExternalBufferInfo,
                                     VkExternalBufferProperties* pExternalBufferProperties)>
        GetPhysicalDeviceExternalBufferPropertiesKHR{};
#ifdef VK_USE_PLATFORM_WIN32_KHR
    inline static std::function<VkResult(VkDevice device, const VkMemoryGetWin32HandleInfoKHR* pGetWin32HandleInfo,
                                         HANDLE* pHandle)>
        GetMemoryWin32HandleKHR{};
    inline static std::function<VkResult(VkDevice device, VkExternalMemoryHandleTypeFlagBits handleType, HANDLE handle,
                                         VkMemoryWin32HandlePropertiesKHR* pMemoryWin32HandleProperties)>
        GetMemoryWin32HandlePropertiesKHR{};
#endif  // VK_USE_PLATFORM_WIN32_KHR
    inline static std::function<VkResult(VkDevice device, const VkMemoryGetFdInfoKHR* pGetFdInfo, int* pFd)> GetMemoryFdKHR{};
    inline static std::function<VkResult(VkDevice device, VkExternalMemoryHandleTypeFlagBits handleType, int fd,
                                         VkMemoryFdPropertiesKHR* pMemoryFdProperties)>
        GetMemoryFdPropertiesKHR{};
    inline static std::function<void(VkPhysicalDevice physicalDevice,
                                     const VkPhysicalDeviceExternalSemaphoreInfo* pExternalSemaphoreInfo,
                                     VkExternalSemaphoreProperties* pExternalSemaphoreProperties)>
        GetPhysicalDeviceExternalSemaphorePropertiesKHR{};
#ifdef VK_USE_PLATFORM_WIN32_KHR
    inline static std::function<VkResult(VkDevice device,
                                         const VkImportSemaphoreWin32HandleInfoKHR* pImportSemaphoreWin32HandleInfo)>
        ImportSemaphoreWin32HandleKHR{};
    inline static std::function<VkResult(VkDevice device, const VkSemaphoreGetWin32HandleInfoKHR* pGetWin32HandleInfo,
                                         HANDLE* pHandle)>
        GetSemaphoreWin32HandleKHR{};
#endif  // VK_USE_PLATFORM_WIN32_KHR
    inline static std::function<VkResult(VkDevice device, const VkImportSemaphoreFdInfoKHR* pImportSemaphoreFdInfo)>
        ImportSemaphoreFdKHR{};
    inline static std::function<VkResult(VkDevice device, const VkSemaphoreGetFdInfoKHR* pGetFdInfo, int* pFd)> GetSemaphoreFdKHR{};
    inline static std::function<void(VkCommandBuffer commandBuffer, VkPipelineBindPoint pipelineBindPoint, VkPipelineLayout layout,
                                     uint32_t set, uint32_t descriptorWriteCount, const VkWriteDescriptorSet* pDescriptorWrites)>
        CmdPushDescriptorSetKHR{};
    inline static std::function<void(VkCommandBuffer commandBuffer, VkDescriptorUpdateTemplate descriptorUpdateTemplate,
                                     VkPipelineLayout layout, uint32_t set, const void* pData)>
        CmdPushDescriptorSetWithTemplateKHR{};
    inline static std::function<VkResult(VkDevice device, const VkDescriptorUpdateTemplateCreateInfo* pCreateInfo,
                                         const VkAllocationCallbacks* pAllocator,
                                         VkDescriptorUpdateTemplate* pDescriptorUpdateTemplate)>
        CreateDescriptorUpdateTemplateKHR{};
    inline static std::function<void(VkDevice device, VkDescriptorUpdateTemplate descriptorUpdateTemplate,
                                     const VkAllocationCallbacks* pAllocator)>
        DestroyDescriptorUpdateTemplateKHR{};
    inline static std::function<void(VkDevice device, VkDescriptorSet descriptorSet,
                                     VkDescriptorUpdateTemplate descriptorUpdateTemplate, const void* pData)>
        UpdateDescriptorSetWithTemplateKHR{};
    inline static std::function<VkResult(VkDevice device, const VkRenderPassCreateInfo2* pCreateInfo,
                                         const VkAllocationCallbacks* pAllocator, VkRenderPass* pRenderPass)>
        CreateRenderPass2KHR{};
    inline static std::function<void(VkCommandBuffer commandBuffer, const VkRenderPassBeginInfo* pRenderPassBegin,
                                     const VkSubpassBeginInfo* pSubpassBeginInfo)>
        CmdBeginRenderPass2KHR{};
    inline static std::function<void(VkCommandBuffer commandBuffer, const VkSubpassBeginInfo* pSubpassBeginInfo,
                                     const VkSubpassEndInfo* pSubpassEndInfo)>
        CmdNextSubpass2KHR{};
    inline static std::function<void(VkCommandBuffer commandBuffer, const VkSubpassEndInfo* pSubpassEndInfo)>
        CmdEndRenderPass2KHR{};
    inline static std::function<VkResult(VkDevice device, VkSwapchainKHR swapchain)> GetSwapchainStatusKHR{};
    inline static std::function<void(VkPhysicalDevice physicalDevice, const VkPhysicalDeviceExternalFenceInfo* pExternalFenceInfo,
                                     VkExternalFenceProperties* pExternalFenceProperties)>
        GetPhysicalDeviceExternalFencePropertiesKHR{};
#ifdef VK_USE_PLATFORM_WIN32_KHR
    inline static std::function<VkResult(VkDevice device, const VkImportFenceWin32HandleInfoKHR* pImportFenceWin32HandleInfo)>
        ImportFenceWin32HandleKHR{};
    inline static std::function<VkResult(VkDevice device, const VkFenceGetWin32HandleInfoKHR* pGetWin32HandleInfo, HANDLE* pHandle)>
        GetFenceWin32HandleKHR{};
#endif  // VK_USE_PLATFORM_WIN32_KHR
    inline static std::function<VkResult(VkDevice device, const VkImportFenceFdInfoKHR* pImportFenceFdInfo)> ImportFenceFdKHR{};
    inline static std::function<VkResult(VkDevice device, const VkFenceGetFdInfoKHR* pGetFdInfo, int* pFd)> GetFenceFdKHR{};
    inline static std::function<VkResult(VkPhysicalDevice physicalDevice, uint32_t queueFamilyIndex, uint32_t* pCounterCount,
                                         VkPerformanceCounterKHR* pCounters,
                                         VkPerformanceCounterDescriptionKHR* pCounterDescriptions)>
        EnumeratePhysicalDeviceQueueFamilyPerformanceQueryCountersKHR{};
    inline static std::function<void(VkPhysicalDevice physicalDevice,
                                     const VkQueryPoolPerformanceCreateInfoKHR* pPerformanceQueryCreateInfo, uint32_t* pNumPasses)>
        GetPhysicalDeviceQueueFamilyPerformanceQueryPassesKHR{};
    inline static std::function<VkResult(VkDevice device, const VkAcquireProfilingLockInfoKHR* pInfo)> AcquireProfilingLockKHR{};
    inline static std::function<void(VkDevice device)> ReleaseProfilingLockKHR{};
    inline static std::function<VkResult(VkPhysicalDevice physicalDevice, const VkPhysicalDeviceSurfaceInfo2KHR* pSurfaceInfo,
                                         VkSurfaceCapabilities2KHR* pSurfaceCapabilities)>
        GetPhysicalDeviceSurfaceCapabilities2KHR{};
    inline static std::function<VkResult(VkPhysicalDevice physicalDevice, const VkPhysicalDeviceSurfaceInfo2KHR* pSurfaceInfo,
                                         uint32_t* pSurfaceFormatCount, VkSurfaceFormat2KHR* pSurfaceFormats)>
        GetPhysicalDeviceSurfaceFormats2KHR{};
    inline static std::function<VkResult(VkPhysicalDevice physicalDevice, uint32_t* pPropertyCount,
                                         VkDisplayProperties2KHR* pProperties)>
        GetPhysicalDeviceDisplayProperties2KHR{};
    inline static std::function<VkResult(VkPhysicalDevice physicalDevice, uint32_t* pPropertyCount,
                                         VkDisplayPlaneProperties2KHR* pProperties)>
        GetPhysicalDeviceDisplayPlaneProperties2KHR{};
    inline static std::function<VkResult(VkPhysicalDevice physicalDevice, VkDisplayKHR display, uint32_t* pPropertyCount,
                                         VkDisplayModeProperties2KHR* pProperties)>
        GetDisplayModeProperties2KHR{};
    inline static std::function<VkResult(VkPhysicalDevice physicalDevice, const VkDisplayPlaneInfo2KHR* pDisplayPlaneInfo,
                                         VkDisplayPlaneCapabilities2KHR* pCapabilities)>
        GetDisplayPlaneCapabilities2KHR{};
    inline static std::function<void(VkDevice device, const VkImageMemoryRequirementsInfo2* pInfo,
                                     VkMemoryRequirements2* pMemoryRequirements)>
        GetImageMemoryRequirements2KHR{};
    inline static std::function<void(VkDevice device, const VkBufferMemoryRequirementsInfo2* pInfo,
                                     VkMemoryRequirements2* pMemoryRequirements)>
        GetBufferMemoryRequirements2KHR{};
    inline static std::function<void(VkDevice device, const VkImageSparseMemoryRequirementsInfo2* pInfo,
                                     uint32_t* pSparseMemoryRequirementCount,
                                     VkSparseImageMemoryRequirements2* pSparseMemoryRequirements)>
        GetImageSparseMemoryRequirements2KHR{};
    inline static std::function<VkResult(VkDevice device, const VkSamplerYcbcrConversionCreateInfo* pCreateInfo,
                                         const VkAllocationCallbacks* pAllocator, VkSamplerYcbcrConversion* pYcbcrConversion)>
        CreateSamplerYcbcrConversionKHR{};
    inline static std::function<void(VkDevice device, VkSamplerYcbcrConversion ycbcrConversion,
                                     const VkAllocationCallbacks* pAllocator)>
        DestroySamplerYcbcrConversionKHR{};
    inline static std::function<VkResult(VkDevice device, uint32_t bindInfoCount, const VkBindBufferMemoryInfo* pBindInfos)>
        BindBufferMemory2KHR{};
    inline static std::function<VkResult(VkDevice device, uint32_t bindInfoCount, const VkBindImageMemoryInfo* pBindInfos)>
        BindImageMemory2KHR{};
    inline static std::function<void(VkDevice device, const VkDescriptorSetLayoutCreateInfo* pCreateInfo,
                                     VkDescriptorSetLayoutSupport* pSupport)>
        GetDescriptorSetLayoutSupportKHR{};
    inline static std::function<void(VkCommandBuffer commandBuffer, VkBuffer buffer, VkDeviceSize offset, VkBuffer countBuffer,
                                     VkDeviceSize countBufferOffset, uint32_t maxDrawCount, uint32_t stride)>
        CmdDrawIndirectCountKHR{};
    inline static std::function<void(VkCommandBuffer commandBuffer, VkBuffer buffer, VkDeviceSize offset, VkBuffer countBuffer,
                                     VkDeviceSize countBufferOffset, uint32_t maxDrawCount, uint32_t stride)>
        CmdDrawIndexedIndirectCountKHR{};
    inline static std::function<VkResult(VkDevice device, VkSemaphore semaphore, uint64_t* pValue)> GetSemaphoreCounterValueKHR{};
    inline static std::function<VkResult(VkDevice device, const VkSemaphoreWaitInfo* pWaitInfo, uint64_t timeout)>
        WaitSemaphoresKHR{};
    inline static std::function<VkResult(VkDevice device, const VkSemaphoreSignalInfo* pSignalInfo)> SignalSemaphoreKHR{};
    inline static std::function<VkResult(VkPhysicalDevice physicalDevice, uint32_t* pFragmentShadingRateCount,
                                         VkPhysicalDeviceFragmentShadingRateKHR* pFragmentShadingRates)>
        GetPhysicalDeviceFragmentShadingRatesKHR{};
    inline static std::function<void(VkCommandBuffer commandBuffer, const VkExtent2D* pFragmentSize,
                                     const VkFragmentShadingRateCombinerOpKHR combinerOps[2])>
        CmdSetFragmentShadingRateKHR{};
    inline static std::function<void(VkCommandBuffer commandBuffer, const VkRenderingAttachmentLocationInfoKHR* pLocationInfo)>
        CmdSetRenderingAttachmentLocationsKHR{};
    inline static std::function<void(VkCommandBuffer commandBuffer, const VkRenderingInputAttachmentIndexInfoKHR* pLocationInfo)>
        CmdSetRenderingInputAttachmentIndicesKHR{};
    inline static std::function<VkResult(VkDevice device, VkSwapchainKHR swapchain, uint64_t presentId, uint64_t timeout)>
        WaitForPresentKHR{};
    inline static std::function<VkDeviceAddress(VkDevice device, const VkBufferDeviceAddressInfo* pInfo)>
        GetBufferDeviceAddressKHR{};
    inline static std::function<uint64_t(VkDevice device, const VkBufferDeviceAddressInfo* pInfo)>
        GetBufferOpaqueCaptureAddressKHR{};
    inline static std::function<uint64_t(VkDevice device, const VkDeviceMemoryOpaqueCaptureAddressInfo* pInfo)>
        GetDeviceMemoryOpaqueCaptureAddressKHR{};
    inline static std::function<VkResult(VkDevice device, const VkAllocationCallbacks* pAllocator,
                                         VkDeferredOperationKHR* pDeferredOperation)>
        CreateDeferredOperationKHR{};
    inline static std::function<void(VkDevice device, VkDeferredOperationKHR operation, const VkAllocationCallbacks* pAllocator)>
        DestroyDeferredOperationKHR{};
    inline static std::function<uint32_t(VkDevice device, VkDeferredOperationKHR operation)>
        GetDeferredOperationMaxConcurrencyKHR{};
    inline static std::function<VkResult(VkDevice device, VkDeferredOperationKHR operation)> GetDeferredOperationResultKHR{};
    inline static std::function<VkResult(VkDevice device, VkDeferredOperationKHR operation)> DeferredOperationJoinKHR{};
    inline static std::function<VkResult(VkDevice device, const VkPipelineInfoKHR* pPipelineInfo, uint32_t* pExecutableCount,
                                         VkPipelineExecutablePropertiesKHR* pProperties)>
        GetPipelineExecutablePropertiesKHR{};
    inline static std::function<VkResult(VkDevice device, const VkPipelineExecutableInfoKHR* pExecutableInfo,
                                         uint32_t* pStatisticCount, VkPipelineExecutableStatisticKHR* pStatistics)>
        GetPipelineExecutableStatisticsKHR{};
    inline static std::function<VkResult(VkDevice device, const VkPipelineExecutableInfoKHR* pExecutableInfo,
                                         uint32_t* pInternalRepresentationCount,
                                         VkPipelineExecutableInternalRepresentationKHR* pInternalRepresentations)>
        GetPipelineExecutableInternalRepresentationsKHR{};
    inline static std::function<VkResult(VkDevice device, const VkMemoryMapInfoKHR* pMemoryMapInfo, void** ppData)> MapMemory2KHR{};
    inline static std::function<VkResult(VkDevice device, const VkMemoryUnmapInfoKHR* pMemoryUnmapInfo)> UnmapMemory2KHR{};
    inline static std::function<VkResult(VkPhysicalDevice physicalDevice,
                                         const VkPhysicalDeviceVideoEncodeQualityLevelInfoKHR* pQualityLevelInfo,
                                         VkVideoEncodeQualityLevelPropertiesKHR* pQualityLevelProperties)>
        GetPhysicalDeviceVideoEncodeQualityLevelPropertiesKHR{};
    inline static std::function<VkResult(
        VkDevice device, const VkVideoEncodeSessionParametersGetInfoKHR* pVideoSessionParametersInfo,
        VkVideoEncodeSessionParametersFeedbackInfoKHR* pFeedbackInfo, size_t* pDataSize, void* pData)>
        GetEncodedVideoSessionParametersKHR{};
    inline static std::function<void(VkCommandBuffer commandBuffer, const VkVideoEncodeInfoKHR* pEncodeInfo)> CmdEncodeVideoKHR{};
    inline static std::function<void(VkCommandBuffer commandBuffer, VkEvent event, const VkDependencyInfo* pDependencyInfo)>
        CmdSetEvent2KHR{};
    inline static std::function<void(VkCommandBuffer commandBuffer, VkEvent event, VkPipelineStageFlags2 stageMask)>
        CmdResetEvent2KHR{};
    inline static std::function<void(VkCommandBuffer commandBuffer, uint32_t eventCount, const VkEvent* pEvents,
                                     const VkDependencyInfo* pDependencyInfos)>
        CmdWaitEvents2KHR{};
    inline static std::function<void(VkCommandBuffer commandBuffer, const VkDependencyInfo* pDependencyInfo)>
        CmdPipelineBarrier2KHR{};
    inline static std::function<void(VkCommandBuffer commandBuffer, VkPipelineStageFlags2 stage, VkQueryPool queryPool,
                                     uint32_t query)>
        CmdWriteTimestamp2KHR{};
    inline static std::function<VkResult(VkQueue queue, uint32_t submitCount, const VkSubmitInfo2* pSubmits, VkFence fence)>
        QueueSubmit2KHR{};
    inline static std::function<void(VkCommandBuffer commandBuffer, VkPipelineStageFlags2 stage, VkBuffer dstBuffer,
                                     VkDeviceSize dstOffset, uint32_t marker)>
        CmdWriteBufferMarker2AMD{};
    inline static std::function<void(VkQueue queue, uint32_t* pCheckpointDataCount, VkCheckpointData2NV* pCheckpointData)>
        GetQueueCheckpointData2NV{};
    inline static std::function<void(VkCommandBuffer commandBuffer, const VkCopyBufferInfo2* pCopyBufferInfo)> CmdCopyBuffer2KHR{};
    inline static std::function<void(VkCommandBuffer commandBuffer, const VkCopyImageInfo2* pCopyImageInfo)> CmdCopyImage2KHR{};
    inline static std::function<void(VkCommandBuffer commandBuffer, const VkCopyBufferToImageInfo2* pCopyBufferToImageInfo)>
        CmdCopyBufferToImage2KHR{};
    inline static std::function<void(VkCommandBuffer commandBuffer, const VkCopyImageToBufferInfo2* pCopyImageToBufferInfo)>
        CmdCopyImageToBuffer2KHR{};
    inline static std::function<void(VkCommandBuffer commandBuffer, const VkBlitImageInfo2* pBlitImageInfo)> CmdBlitImage2KHR{};
    inline static std::function<void(VkCommandBuffer commandBuffer, const VkResolveImageInfo2* pResolveImageInfo)>
        CmdResolveImage2KHR{};
    inline static std::function<void(VkCommandBuffer commandBuffer, VkDeviceAddress indirectDeviceAddress)>
        CmdTraceRaysIndirect2KHR{};
    inline static std::function<void(VkDevice device, const VkDeviceBufferMemoryRequirements* pInfo,
                                     VkMemoryRequirements2* pMemoryRequirements)>
        GetDeviceBufferMemoryRequirementsKHR{};
    inline static std::function<void(VkDevice device, const VkDeviceImageMemoryRequirements* pInfo,
                                     VkMemoryRequirements2* pMemoryRequirements)>
        GetDeviceImageMemoryRequirementsKHR{};
    inline static std::function<void(VkDevice device, const VkDeviceImageMemoryRequirements* pInfo,
                                     uint32_t* pSparseMemoryRequirementCount,
                                     VkSparseImageMemoryRequirements2* pSparseMemoryRequirements)>
        GetDeviceImageSparseMemoryRequirementsKHR{};
    inline static std::function<void(VkCommandBuffer commandBuffer, VkBuffer buffer, VkDeviceSize offset, VkDeviceSize size,
                                     VkIndexType indexType)>
        CmdBindIndexBuffer2KHR{};
    inline static std::function<void(VkDevice device, const VkRenderingAreaInfoKHR* pRenderingAreaInfo, VkExtent2D* pGranularity)>
        GetRenderingAreaGranularityKHR{};
    inline static std::function<void(VkDevice device, const VkDeviceImageSubresourceInfoKHR* pInfo,
                                     VkSubresourceLayout2KHR* pLayout)>
        GetDeviceImageSubresourceLayoutKHR{};
    inline static std::function<void(VkDevice device, VkImage image, const VkImageSubresource2KHR* pSubresource,
                                     VkSubresourceLayout2KHR* pLayout)>
        GetImageSubresourceLayout2KHR{};
    inline static std::function<VkResult(VkPhysicalDevice physicalDevice, uint32_t* pPropertyCount,
                                         VkCooperativeMatrixPropertiesKHR* pProperties)>
        GetPhysicalDeviceCooperativeMatrixPropertiesKHR{};
    inline static std::function<void(VkCommandBuffer commandBuffer, uint32_t lineStippleFactor, uint16_t lineStipplePattern)>
        CmdSetLineStippleKHR{};
    inline static std::function<VkResult(VkPhysicalDevice physicalDevice, uint32_t* pTimeDomainCount,
                                         VkTimeDomainKHR* pTimeDomains)>
        GetPhysicalDeviceCalibrateableTimeDomainsKHR{};
    inline static std::function<VkResult(VkDevice device, uint32_t timestampCount,
                                         const VkCalibratedTimestampInfoKHR* pTimestampInfos, uint64_t* pTimestamps,
                                         uint64_t* pMaxDeviation)>
        GetCalibratedTimestampsKHR{};
    inline static std::function<void(VkCommandBuffer commandBuffer, const VkBindDescriptorSetsInfoKHR* pBindDescriptorSetsInfo)>
        CmdBindDescriptorSets2KHR{};
    inline static std::function<void(VkCommandBuffer commandBuffer, const VkPushConstantsInfoKHR* pPushConstantsInfo)>
        CmdPushConstants2KHR{};
    inline static std::function<void(VkCommandBuffer commandBuffer, const VkPushDescriptorSetInfoKHR* pPushDescriptorSetInfo)>
        CmdPushDescriptorSet2KHR{};
    inline static std::function<void(VkCommandBuffer commandBuffer,
                                     const VkPushDescriptorSetWithTemplateInfoKHR* pPushDescriptorSetWithTemplateInfo)>
        CmdPushDescriptorSetWithTemplate2KHR{};
    inline static std::function<void(VkCommandBuffer commandBuffer,
                                     const VkSetDescriptorBufferOffsetsInfoEXT* pSetDescriptorBufferOffsetsInfo)>
        CmdSetDescriptorBufferOffsets2EXT{};
    inline static std::function<void(VkCommandBuffer commandBuffer, const VkBindDescriptorBufferEmbeddedSamplersInfoEXT*
                                                                        pBindDescriptorBufferEmbeddedSamplersInfo)>
        CmdBindDescriptorBufferEmbeddedSamplers2EXT{};
    inline static std::function<VkResult(VkInstance instance, const VkDebugReportCallbackCreateInfoEXT* pCreateInfo,
                                         const VkAllocationCallbacks* pAllocator, VkDebugReportCallbackEXT* pCallback)>
        CreateDebugReportCallbackEXT{};
    inline static std::function<void(VkInstance instance, VkDebugReportCallbackEXT callback,
                                     const VkAllocationCallbacks* pAllocator)>
        DestroyDebugReportCallbackEXT{};
    inline static std::function<void(VkInstance instance, VkDebugReportFlagsEXT flags, VkDebugReportObjectTypeEXT objectType,
                                     uint64_t object, size_t location, int32_t messageCode, const char* pLayerPrefix,
                                     const char* pMessage)>
        DebugReportMessageEXT{};
    inline static std::function<VkResult(VkDevice device, const VkDebugMarkerObjectTagInfoEXT* pTagInfo)>
        DebugMarkerSetObjectTagEXT{};
    inline static std::function<VkResult(VkDevice device, const VkDebugMarkerObjectNameInfoEXT* pNameInfo)>
        DebugMarkerSetObjectNameEXT{};
    inline static std::function<void(VkCommandBuffer commandBuffer, const VkDebugMarkerMarkerInfoEXT* pMarkerInfo)>
        CmdDebugMarkerBeginEXT{};
    inline static std::function<void(VkCommandBuffer commandBuffer)> CmdDebugMarkerEndEXT{};
    inline static std::function<void(VkCommandBuffer commandBuffer, const VkDebugMarkerMarkerInfoEXT* pMarkerInfo)>
        CmdDebugMarkerInsertEXT{};
    inline static std::function<void(VkCommandBuffer commandBuffer, uint32_t firstBinding, uint32_t bindingCount,
                                     const VkBuffer* pBuffers, const VkDeviceSize* pOffsets, const VkDeviceSize* pSizes)>
        CmdBindTransformFeedbackBuffersEXT{};
    inline static std::function<void(VkCommandBuffer commandBuffer, uint32_t firstCounterBuffer, uint32_t counterBufferCount,
                                     const VkBuffer* pCounterBuffers, const VkDeviceSize* pCounterBufferOffsets)>
        CmdBeginTransformFeedbackEXT{};
    inline static std::function<void(VkCommandBuffer commandBuffer, uint32_t firstCounterBuffer, uint32_t counterBufferCount,
                                     const VkBuffer* pCounterBuffers, const VkDeviceSize* pCounterBufferOffsets)>
        CmdEndTransformFeedbackEXT{};
    inline static std::function<void(VkCommandBuffer commandBuffer, VkQueryPool queryPool, uint32_t query,
                                     VkQueryControlFlags flags, uint32_t index)>
        CmdBeginQueryIndexedEXT{};
    inline static std::function<void(VkCommandBuffer commandBuffer, VkQueryPool queryPool, uint32_t query, uint32_t index)>
        CmdEndQueryIndexedEXT{};
    inline static std::function<void(VkCommandBuffer commandBuffer, uint32_t instanceCount, uint32_t firstInstance,
                                     VkBuffer counterBuffer, VkDeviceSize counterBufferOffset, uint32_t counterOffset,
                                     uint32_t vertexStride)>
        CmdDrawIndirectByteCountEXT{};
    inline static std::function<VkResult(VkDevice device, const VkCuModuleCreateInfoNVX* pCreateInfo,
                                         const VkAllocationCallbacks* pAllocator, VkCuModuleNVX* pModule)>
        CreateCuModuleNVX{};
    inline static std::function<VkResult(VkDevice device, const VkCuFunctionCreateInfoNVX* pCreateInfo,
                                         const VkAllocationCallbacks* pAllocator, VkCuFunctionNVX* pFunction)>
        CreateCuFunctionNVX{};
    inline static std::function<void(VkDevice device, VkCuModuleNVX module, const VkAllocationCallbacks* pAllocator)>
        DestroyCuModuleNVX{};
    inline static std::function<void(VkDevice device, VkCuFunctionNVX function, const VkAllocationCallbacks* pAllocator)>
        DestroyCuFunctionNVX{};
    inline static std::function<void(VkCommandBuffer commandBuffer, const VkCuLaunchInfoNVX* pLaunchInfo)> CmdCuLaunchKernelNVX{};
    inline static std::function<uint32_t(VkDevice device, const VkImageViewHandleInfoNVX* pInfo)> GetImageViewHandleNVX{};
    inline static std::function<VkResult(VkDevice device, VkImageView imageView, VkImageViewAddressPropertiesNVX* pProperties)>
        GetImageViewAddressNVX{};
    inline static std::function<void(VkCommandBuffer commandBuffer, VkBuffer buffer, VkDeviceSize offset, VkBuffer countBuffer,
                                     VkDeviceSize countBufferOffset, uint32_t maxDrawCount, uint32_t stride)>
        CmdDrawIndirectCountAMD{};
    inline static std::function<void(VkCommandBuffer commandBuffer, VkBuffer buffer, VkDeviceSize offset, VkBuffer countBuffer,
                                     VkDeviceSize countBufferOffset, uint32_t maxDrawCount, uint32_t stride)>
        CmdDrawIndexedIndirectCountAMD{};
    inline static std::function<VkResult(VkDevice device, VkPipeline pipeline, VkShaderStageFlagBits shaderStage,
                                         VkShaderInfoTypeAMD infoType, size_t* pInfoSize, void* pInfo)>
        GetShaderInfoAMD{};
#ifdef VK_USE_PLATFORM_GGP
    inline static std::function<VkResult(VkInstance instance, const VkStreamDescriptorSurfaceCreateInfoGGP* pCreateInfo,
                                         const VkAllocationCallbacks* pAllocator, VkSurfaceKHR* pSurface)>
        CreateStreamDescriptorSurfaceGGP{};
#endif  // VK_USE_PLATFORM_GGP
    inline static std::function<VkResult(VkPhysicalDevice physicalDevice, VkFormat format, VkImageType type, VkImageTiling tiling,
                                         VkImageUsageFlags usage, VkImageCreateFlags flags,
                                         VkExternalMemoryHandleTypeFlagsNV externalHandleType,
                                         VkExternalImageFormatPropertiesNV* pExternalImageFormatProperties)>
        GetPhysicalDeviceExternalImageFormatPropertiesNV{};
#ifdef VK_USE_PLATFORM_WIN32_KHR
    inline static std::function<VkResult(VkDevice device, VkDeviceMemory memory, VkExternalMemoryHandleTypeFlagsNV handleType,
                                         HANDLE* pHandle)>
        GetMemoryWin32HandleNV{};
#endif  // VK_USE_PLATFORM_WIN32_KHR
#ifdef VK_USE_PLATFORM_VI_NN
    inline static std::function<VkResult(VkInstance instance, const VkViSurfaceCreateInfoNN* pCreateInfo,
                                         const VkAllocationCallbacks* pAllocator, VkSurfaceKHR* pSurface)>
        CreateViSurfaceNN{};
#endif  // VK_USE_PLATFORM_VI_NN
    inline static std::function<void(VkCommandBuffer commandBuffer,
                                     const VkConditionalRenderingBeginInfoEXT* pConditionalRenderingBegin)>
        CmdBeginConditionalRenderingEXT{};
    inline static std::function<void(VkCommandBuffer commandBuffer)> CmdEndConditionalRenderingEXT{};
    inline static std::function<void(VkCommandBuffer commandBuffer, uint32_t firstViewport, uint32_t viewportCount,
                                     const VkViewportWScalingNV* pViewportWScalings)>
        CmdSetViewportWScalingNV{};
    inline static std::function<VkResult(VkPhysicalDevice physicalDevice, VkDisplayKHR display)> ReleaseDisplayEXT{};
#ifdef VK_USE_PLATFORM_XLIB_XRANDR_EXT
    inline static std::function<VkResult(VkPhysicalDevice physicalDevice, Display* dpy, VkDisplayKHR display)>
        AcquireXlibDisplayEXT{};
    inline static std::function<VkResult(VkPhysicalDevice physicalDevice, Display* dpy, RROutput rrOutput, VkDisplayKHR* pDisplay)>
        GetRandROutputDisplayEXT{};
#endif  // VK_USE_PLATFORM_XLIB_XRANDR_EXT
    inline static std::function<VkResult(VkPhysicalDevice physicalDevice, VkSurfaceKHR surface,
                                         VkSurfaceCapabilities2EXT* pSurfaceCapabilities)>
        GetPhysicalDeviceSurfaceCapabilities2EXT{};
    inline static std::function<VkResult(VkDevice device, VkDisplayKHR display, const VkDisplayPowerInfoEXT* pDisplayPowerInfo)>
        DisplayPowerControlEXT{};
    inline static std::function<VkResult(VkDevice device, const VkDeviceEventInfoEXT* pDeviceEventInfo,
                                         const VkAllocationCallbacks* pAllocator, VkFence* pFence)>
        RegisterDeviceEventEXT{};
    inline static std::function<VkResult(VkDevice device, VkDisplayKHR display, const VkDisplayEventInfoEXT* pDisplayEventInfo,
                                         const VkAllocationCallbacks* pAllocator, VkFence* pFence)>
        RegisterDisplayEventEXT{};
    inline static std::function<VkResult(VkDevice device, VkSwapchainKHR swapchain, VkSurfaceCounterFlagBitsEXT counter,
                                         uint64_t* pCounterValue)>
        GetSwapchainCounterEXT{};
    inline static std::function<VkResult(VkDevice device, VkSwapchainKHR swapchain,
                                         VkRefreshCycleDurationGOOGLE* pDisplayTimingProperties)>
        GetRefreshCycleDurationGOOGLE{};
    inline static std::function<VkResult(VkDevice device, VkSwapchainKHR swapchain, uint32_t* pPresentationTimingCount,
                                         VkPastPresentationTimingGOOGLE* pPresentationTimings)>
        GetPastPresentationTimingGOOGLE{};
    inline static std::function<void(VkCommandBuffer commandBuffer, uint32_t firstDiscardRectangle, uint32_t discardRectangleCount,
                                     const VkRect2D* pDiscardRectangles)>
        CmdSetDiscardRectangleEXT{};
    inline static std::function<void(VkCommandBuffer commandBuffer, VkBool32 discardRectangleEnable)>
        CmdSetDiscardRectangleEnableEXT{};
    inline static std::function<void(VkCommandBuffer commandBuffer, VkDiscardRectangleModeEXT discardRectangleMode)>
        CmdSetDiscardRectangleModeEXT{};
    inline static std::function<void(VkDevice device, uint32_t swapchainCount, const VkSwapchainKHR* pSwapchains,
                                     const VkHdrMetadataEXT* pMetadata)>
        SetHdrMetadataEXT{};
#ifdef VK_USE_PLATFORM_IOS_MVK
    inline static std::function<VkResult(VkInstance instance, const VkIOSSurfaceCreateInfoMVK* pCreateInfo,
                                         const VkAllocationCallbacks* pAllocator, VkSurfaceKHR* pSurface)>
        CreateIOSSurfaceMVK{};
#endif  // VK_USE_PLATFORM_IOS_MVK
#ifdef VK_USE_PLATFORM_MACOS_MVK
    inline static std::function<VkResult(VkInstance instance, const VkMacOSSurfaceCreateInfoMVK* pCreateInfo,
                                         const VkAllocationCallbacks* pAllocator, VkSurfaceKHR* pSurface)>
        CreateMacOSSurfaceMVK{};
#endif  // VK_USE_PLATFORM_MACOS_MVK
    inline static std::function<VkResult(VkDevice device, const VkDebugUtilsObjectNameInfoEXT* pNameInfo)>
        SetDebugUtilsObjectNameEXT{};
    inline static std::function<VkResult(VkDevice device, const VkDebugUtilsObjectTagInfoEXT* pTagInfo)>
        SetDebugUtilsObjectTagEXT{};
    inline static std::function<void(VkQueue queue, const VkDebugUtilsLabelEXT* pLabelInfo)> QueueBeginDebugUtilsLabelEXT{};
    inline static std::function<void(VkQueue queue)> QueueEndDebugUtilsLabelEXT{};
    inline static std::function<void(VkQueue queue, const VkDebugUtilsLabelEXT* pLabelInfo)> QueueInsertDebugUtilsLabelEXT{};
    inline static std::function<void(VkCommandBuffer commandBuffer, const VkDebugUtilsLabelEXT* pLabelInfo)>
        CmdBeginDebugUtilsLabelEXT{};
    inline static std::function<void(VkCommandBuffer commandBuffer)> CmdEndDebugUtilsLabelEXT{};
    inline static std::function<void(VkCommandBuffer commandBuffer, const VkDebugUtilsLabelEXT* pLabelInfo)>
        CmdInsertDebugUtilsLabelEXT{};
    inline static std::function<VkResult(VkInstance instance, const VkDebugUtilsMessengerCreateInfoEXT* pCreateInfo,
                                         const VkAllocationCallbacks* pAllocator, VkDebugUtilsMessengerEXT* pMessenger)>
        CreateDebugUtilsMessengerEXT{};
    inline static std::function<void(VkInstance instance, VkDebugUtilsMessengerEXT messenger,
                                     const VkAllocationCallbacks* pAllocator)>
        DestroyDebugUtilsMessengerEXT{};
    inline static std::function<void(VkInstance instance, VkDebugUtilsMessageSeverityFlagBitsEXT messageSeverity,
                                     VkDebugUtilsMessageTypeFlagsEXT messageTypes,
                                     const VkDebugUtilsMessengerCallbackDataEXT* pCallbackData)>
        SubmitDebugUtilsMessageEXT{};
#ifdef VK_USE_PLATFORM_ANDROID_KHR
    inline static std::function<VkResult(VkDevice device, const struct AHardwareBuffer* buffer,
                                         VkAndroidHardwareBufferPropertiesANDROID* pProperties)>
        GetAndroidHardwareBufferPropertiesANDROID{};
    inline static std::function<VkResult(VkDevice device, const VkMemoryGetAndroidHardwareBufferInfoANDROID* pInfo,
                                         struct AHardwareBuffer** pBuffer)>
        GetMemoryAndroidHardwareBufferANDROID{};
#endif  // VK_USE_PLATFORM_ANDROID_KHR
#ifdef VK_ENABLE_BETA_EXTENSIONS
    inline static std::function<VkResult(VkDevice device, VkPipelineCache pipelineCache, uint32_t createInfoCount,
                                         const VkExecutionGraphPipelineCreateInfoAMDX* pCreateInfos,
                                         const VkAllocationCallbacks* pAllocator, VkPipeline* pPipelines)>
        CreateExecutionGraphPipelinesAMDX{};
    inline static std::function<VkResult(VkDevice device, VkPipeline executionGraph,
                                         VkExecutionGraphPipelineScratchSizeAMDX* pSizeInfo)>
        GetExecutionGraphPipelineScratchSizeAMDX{};
    inline static std::function<VkResult(VkDevice device, VkPipeline executionGraph,
                                         const VkPipelineShaderStageNodeCreateInfoAMDX* pNodeInfo, uint32_t* pNodeIndex)>
        GetExecutionGraphPipelineNodeIndexAMDX{};
    inline static std::function<void(VkCommandBuffer commandBuffer, VkDeviceAddress scratch)> CmdInitializeGraphScratchMemoryAMDX{};
    inline static std::function<void(VkCommandBuffer commandBuffer, VkDeviceAddress scratch,
                                     const VkDispatchGraphCountInfoAMDX* pCountInfo)>
        CmdDispatchGraphAMDX{};
    inline static std::function<void(VkCommandBuffer commandBuffer, VkDeviceAddress scratch,
                                     const VkDispatchGraphCountInfoAMDX* pCountInfo)>
        CmdDispatchGraphIndirectAMDX{};
    inline static std::function<void(VkCommandBuffer commandBuffer, VkDeviceAddress scratch, VkDeviceAddress countInfo)>
        CmdDispatchGraphIndirectCountAMDX{};
#endif  // VK_ENABLE_BETA_EXTENSIONS
    inline static std::function<void(VkCommandBuffer commandBuffer, const VkSampleLocationsInfoEXT* pSampleLocationsInfo)>
        CmdSetSampleLocationsEXT{};
    inline static std::function<void(VkPhysicalDevice physicalDevice, VkSampleCountFlagBits samples,
                                     VkMultisamplePropertiesEXT* pMultisampleProperties)>
        GetPhysicalDeviceMultisamplePropertiesEXT{};
    inline static std::function<VkResult(VkDevice device, VkImage image, VkImageDrmFormatModifierPropertiesEXT* pProperties)>
        GetImageDrmFormatModifierPropertiesEXT{};
    inline static std::function<VkResult(VkDevice device, const VkValidationCacheCreateInfoEXT* pCreateInfo,
                                         const VkAllocationCallbacks* pAllocator, VkValidationCacheEXT* pValidationCache)>
        CreateValidationCacheEXT{};
    inline static std::function<void(VkDevice device, VkValidationCacheEXT validationCache,
                                     const VkAllocationCallbacks* pAllocator)>
        DestroyValidationCacheEXT{};
    inline static std::function<VkResult(VkDevice device, VkValidationCacheEXT dstCache, uint32_t srcCacheCount,
                                         const VkValidationCacheEXT* pSrcCaches)>
        MergeValidationCachesEXT{};
    inline static std::function<VkResult(VkDevice device, VkValidationCacheEXT validationCache, size_t* pDataSize, void* pData)>
        GetValidationCacheDataEXT{};
    inline static std::function<void(VkCommandBuffer commandBuffer, VkImageView imageView, VkImageLayout imageLayout)>
        CmdBindShadingRateImageNV{};
    inline static std::function<void(VkCommandBuffer commandBuffer, uint32_t firstViewport, uint32_t viewportCount,
                                     const VkShadingRatePaletteNV* pShadingRatePalettes)>
        CmdSetViewportShadingRatePaletteNV{};
    inline static std::function<void(VkCommandBuffer commandBuffer, VkCoarseSampleOrderTypeNV sampleOrderType,
                                     uint32_t customSampleOrderCount, const VkCoarseSampleOrderCustomNV* pCustomSampleOrders)>
        CmdSetCoarseSampleOrderNV{};
    inline static std::function<VkResult(VkDevice device, const VkAccelerationStructureCreateInfoNV* pCreateInfo,
                                         const VkAllocationCallbacks* pAllocator,
                                         VkAccelerationStructureNV* pAccelerationStructure)>
        CreateAccelerationStructureNV{};
    inline static std::function<void(VkDevice device, VkAccelerationStructureNV accelerationStructure,
                                     const VkAllocationCallbacks* pAllocator)>
        DestroyAccelerationStructureNV{};
    inline static std::function<void(VkDevice device, const VkAccelerationStructureMemoryRequirementsInfoNV* pInfo,
                                     VkMemoryRequirements2KHR* pMemoryRequirements)>
        GetAccelerationStructureMemoryRequirementsNV{};
    inline static std::function<VkResult(VkDevice device, uint32_t bindInfoCount,
                                         const VkBindAccelerationStructureMemoryInfoNV* pBindInfos)>
        BindAccelerationStructureMemoryNV{};
    inline static std::function<void(VkCommandBuffer commandBuffer, const VkAccelerationStructureInfoNV* pInfo,
                                     VkBuffer instanceData, VkDeviceSize instanceOffset, VkBool32 update,
                                     VkAccelerationStructureNV dst, VkAccelerationStructureNV src, VkBuffer scratch,
                                     VkDeviceSize scratchOffset)>
        CmdBuildAccelerationStructureNV{};
    inline static std::function<void(VkCommandBuffer commandBuffer, VkAccelerationStructureNV dst, VkAccelerationStructureNV src,
                                     VkCopyAccelerationStructureModeKHR mode)>
        CmdCopyAccelerationStructureNV{};
    inline static std::function<void(
        VkCommandBuffer commandBuffer, VkBuffer raygenShaderBindingTableBuffer, VkDeviceSize raygenShaderBindingOffset,
        VkBuffer missShaderBindingTableBuffer, VkDeviceSize missShaderBindingOffset, VkDeviceSize missShaderBindingStride,
        VkBuffer hitShaderBindingTableBuffer, VkDeviceSize hitShaderBindingOffset, VkDeviceSize hitShaderBindingStride,
        VkBuffer callableShaderBindingTableBuffer, VkDeviceSize callableShaderBindingOffset,
        VkDeviceSize callableShaderBindingStride, uint32_t width, uint32_t height, uint32_t depth)>
        CmdTraceRaysNV{};
    inline static std::function<VkResult(VkDevice device, VkPipelineCache pipelineCache, uint32_t createInfoCount,
                                         const VkRayTracingPipelineCreateInfoNV* pCreateInfos,
                                         const VkAllocationCallbacks* pAllocator, VkPipeline* pPipelines)>
        CreateRayTracingPipelinesNV{};
    inline static std::function<VkResult(VkDevice device, VkPipeline pipeline, uint32_t firstGroup, uint32_t groupCount,
                                         size_t dataSize, void* pData)>
        GetRayTracingShaderGroupHandlesKHR{};
    inline static std::function<VkResult(VkDevice device, VkPipeline pipeline, uint32_t firstGroup, uint32_t groupCount,
                                         size_t dataSize, void* pData)>
        GetRayTracingShaderGroupHandlesNV{};
    inline static std::function<VkResult(VkDevice device, VkAccelerationStructureNV accelerationStructure, size_t dataSize,
                                         void* pData)>
        GetAccelerationStructureHandleNV{};
    inline static std::function<void(VkCommandBuffer commandBuffer, uint32_t accelerationStructureCount,
                                     const VkAccelerationStructureNV* pAccelerationStructures, VkQueryType queryType,
                                     VkQueryPool queryPool, uint32_t firstQuery)>
        CmdWriteAccelerationStructuresPropertiesNV{};
    inline static std::function<VkResult(VkDevice device, VkPipeline pipeline, uint32_t shader)> CompileDeferredNV{};
    inline static std::function<VkResult(VkDevice device, VkExternalMemoryHandleTypeFlagBits handleType, const void* pHostPointer,
                                         VkMemoryHostPointerPropertiesEXT* pMemoryHostPointerProperties)>
        GetMemoryHostPointerPropertiesEXT{};
    inline static std::function<void(VkCommandBuffer commandBuffer, VkPipelineStageFlagBits pipelineStage, VkBuffer dstBuffer,
                                     VkDeviceSize dstOffset, uint32_t marker)>
        CmdWriteBufferMarkerAMD{};
    inline static std::function<VkResult(VkPhysicalDevice physicalDevice, uint32_t* pTimeDomainCount,
                                         VkTimeDomainKHR* pTimeDomains)>
        GetPhysicalDeviceCalibrateableTimeDomainsEXT{};
    inline static std::function<VkResult(VkDevice device, uint32_t timestampCount,
                                         const VkCalibratedTimestampInfoKHR* pTimestampInfos, uint64_t* pTimestamps,
                                         uint64_t* pMaxDeviation)>
        GetCalibratedTimestampsEXT{};
    inline static std::function<void(VkCommandBuffer commandBuffer, uint32_t taskCount, uint32_t firstTask)> CmdDrawMeshTasksNV{};
    inline static std::function<void(VkCommandBuffer commandBuffer, VkBuffer buffer, VkDeviceSize offset, uint32_t drawCount,
                                     uint32_t stride)>
        CmdDrawMeshTasksIndirectNV{};
    inline static std::function<void(VkCommandBuffer commandBuffer, VkBuffer buffer, VkDeviceSize offset, VkBuffer countBuffer,
                                     VkDeviceSize countBufferOffset, uint32_t maxDrawCount, uint32_t stride)>
        CmdDrawMeshTasksIndirectCountNV{};
    inline static std::function<void(VkCommandBuffer commandBuffer, uint32_t firstExclusiveScissor, uint32_t exclusiveScissorCount,
                                     const VkBool32* pExclusiveScissorEnables)>
        CmdSetExclusiveScissorEnableNV{};
    inline static std::function<void(VkCommandBuffer commandBuffer, uint32_t firstExclusiveScissor, uint32_t exclusiveScissorCount,
                                     const VkRect2D* pExclusiveScissors)>
        CmdSetExclusiveScissorNV{};
    inline static std::function<void(VkCommandBuffer commandBuffer, const void* pCheckpointMarker)> CmdSetCheckpointNV{};
    inline static std::function<void(VkQueue queue, uint32_t* pCheckpointDataCount, VkCheckpointDataNV* pCheckpointData)>
        GetQueueCheckpointDataNV{};
    inline static std::function<VkResult(VkDevice device, const VkInitializePerformanceApiInfoINTEL* pInitializeInfo)>
        InitializePerformanceApiINTEL{};
    inline static std::function<void(VkDevice device)> UninitializePerformanceApiINTEL{};
    inline static std::function<VkResult(VkCommandBuffer commandBuffer, const VkPerformanceMarkerInfoINTEL* pMarkerInfo)>
        CmdSetPerformanceMarkerINTEL{};
    inline static std::function<VkResult(VkCommandBuffer commandBuffer, const VkPerformanceStreamMarkerInfoINTEL* pMarkerInfo)>
        CmdSetPerformanceStreamMarkerINTEL{};
    inline static std::function<VkResult(VkCommandBuffer commandBuffer, const VkPerformanceOverrideInfoINTEL* pOverrideInfo)>
        CmdSetPerformanceOverrideINTEL{};
    inline static std::function<VkResult(VkDevice device, const VkPerformanceConfigurationAcquireInfoINTEL* pAcquireInfo,
                                         VkPerformanceConfigurationINTEL* pConfiguration)>
        AcquirePerformanceConfigurationINTEL{};
    inline static std::function<VkResult(VkDevice device, VkPerformanceConfigurationINTEL configuration)>
        ReleasePerformanceConfigurationINTEL{};
    inline static std::function<VkResult(VkQueue queue, VkPerformanceConfigurationINTEL configuration)>
        QueueSetPerformanceConfigurationINTEL{};
    inline static std::function<VkResult(VkDevice device, VkPerformanceParameterTypeINTEL parameter,
                                         VkPerformanceValueINTEL* pValue)>
        GetPerformanceParameterINTEL{};
    inline static std::function<void(VkDevice device, VkSwapchainKHR swapChain, VkBool32 localDimmingEnable)> SetLocalDimmingAMD{};
#ifdef VK_USE_PLATFORM_FUCHSIA
    inline static std::function<VkResult(VkInstance instance, const VkImagePipeSurfaceCreateInfoFUCHSIA* pCreateInfo,
                                         const VkAllocationCallbacks* pAllocator, VkSurfaceKHR* pSurface)>
        CreateImagePipeSurfaceFUCHSIA{};
#endif  // VK_USE_PLATFORM_FUCHSIA
#ifdef VK_USE_PLATFORM_METAL_EXT
    inline static std::function<VkResult(VkInstance instance, const VkMetalSurfaceCreateInfoEXT* pCreateInfo,
                                         const VkAllocationCallbacks* pAllocator, VkSurfaceKHR* pSurface)>
        CreateMetalSurfaceEXT{};
#endif  // VK_USE_PLATFORM_METAL_EXT
    inline static std::function<VkDeviceAddress(VkDevice device, const VkBufferDeviceAddressInfo* pInfo)>
        GetBufferDeviceAddressEXT{};
    inline static std::function<VkResult(VkPhysicalDevice physicalDevice, uint32_t* pToolCount,
                                         VkPhysicalDeviceToolProperties* pToolProperties)>
        GetPhysicalDeviceToolPropertiesEXT{};
    inline static std::function<VkResult(VkPhysicalDevice physicalDevice, uint32_t* pPropertyCount,
                                         VkCooperativeMatrixPropertiesNV* pProperties)>
        GetPhysicalDeviceCooperativeMatrixPropertiesNV{};
    inline static std::function<VkResult(VkPhysicalDevice physicalDevice, uint32_t* pCombinationCount,
                                         VkFramebufferMixedSamplesCombinationNV* pCombinations)>
        GetPhysicalDeviceSupportedFramebufferMixedSamplesCombinationsNV{};
#ifdef VK_USE_PLATFORM_WIN32_KHR
    inline static std::function<VkResult(VkPhysicalDevice physicalDevice, const VkPhysicalDeviceSurfaceInfo2KHR* pSurfaceInfo,
                                         uint32_t* pPresentModeCount, VkPresentModeKHR* pPresentModes)>
        GetPhysicalDeviceSurfacePresentModes2EXT{};
    inline static std::function<VkResult(VkDevice device, VkSwapchainKHR swapchain)> AcquireFullScreenExclusiveModeEXT{};
    inline static std::function<VkResult(VkDevice device, VkSwapchainKHR swapchain)> ReleaseFullScreenExclusiveModeEXT{};
    inline static std::function<VkResult(VkDevice device, const VkPhysicalDeviceSurfaceInfo2KHR* pSurfaceInfo,
                                         VkDeviceGroupPresentModeFlagsKHR* pModes)>
        GetDeviceGroupSurfacePresentModes2EXT{};
#endif  // VK_USE_PLATFORM_WIN32_KHR
    inline static std::function<VkResult(VkInstance instance, const VkHeadlessSurfaceCreateInfoEXT* pCreateInfo,
                                         const VkAllocationCallbacks* pAllocator, VkSurfaceKHR* pSurface)>
        CreateHeadlessSurfaceEXT{};
    inline static std::function<void(VkCommandBuffer commandBuffer, uint32_t lineStippleFactor, uint16_t lineStipplePattern)>
        CmdSetLineStippleEXT{};
    inline static std::function<void(VkDevice device, VkQueryPool queryPool, uint32_t firstQuery, uint32_t queryCount)>
        ResetQueryPoolEXT{};
    inline static std::function<void(VkCommandBuffer commandBuffer, VkCullModeFlags cullMode)> CmdSetCullModeEXT{};
    inline static std::function<void(VkCommandBuffer commandBuffer, VkFrontFace frontFace)> CmdSetFrontFaceEXT{};
    inline static std::function<void(VkCommandBuffer commandBuffer, VkPrimitiveTopology primitiveTopology)>
        CmdSetPrimitiveTopologyEXT{};
    inline static std::function<void(VkCommandBuffer commandBuffer, uint32_t viewportCount, const VkViewport* pViewports)>
        CmdSetViewportWithCountEXT{};
    inline static std::function<void(VkCommandBuffer commandBuffer, uint32_t scissorCount, const VkRect2D* pScissors)>
        CmdSetScissorWithCountEXT{};
    inline static std::function<void(VkCommandBuffer commandBuffer, uint32_t firstBinding, uint32_t bindingCount,
                                     const VkBuffer* pBuffers, const VkDeviceSize* pOffsets, const VkDeviceSize* pSizes,
                                     const VkDeviceSize* pStrides)>
        CmdBindVertexBuffers2EXT{};
    inline static std::function<void(VkCommandBuffer commandBuffer, VkBool32 depthTestEnable)> CmdSetDepthTestEnableEXT{};
    inline static std::function<void(VkCommandBuffer commandBuffer, VkBool32 depthWriteEnable)> CmdSetDepthWriteEnableEXT{};
    inline static std::function<void(VkCommandBuffer commandBuffer, VkCompareOp depthCompareOp)> CmdSetDepthCompareOpEXT{};
    inline static std::function<void(VkCommandBuffer commandBuffer, VkBool32 depthBoundsTestEnable)>
        CmdSetDepthBoundsTestEnableEXT{};
    inline static std::function<void(VkCommandBuffer commandBuffer, VkBool32 stencilTestEnable)> CmdSetStencilTestEnableEXT{};
    inline static std::function<void(VkCommandBuffer commandBuffer, VkStencilFaceFlags faceMask, VkStencilOp failOp,
                                     VkStencilOp passOp, VkStencilOp depthFailOp, VkCompareOp compareOp)>
        CmdSetStencilOpEXT{};
    inline static std::function<VkResult(VkDevice device, const VkCopyMemoryToImageInfoEXT* pCopyMemoryToImageInfo)>
        CopyMemoryToImageEXT{};
    inline static std::function<VkResult(VkDevice device, const VkCopyImageToMemoryInfoEXT* pCopyImageToMemoryInfo)>
        CopyImageToMemoryEXT{};
    inline static std::function<VkResult(VkDevice device, const VkCopyImageToImageInfoEXT* pCopyImageToImageInfo)>
        CopyImageToImageEXT{};
    inline static std::function<VkResult(VkDevice device, uint32_t transitionCount,
                                         const VkHostImageLayoutTransitionInfoEXT* pTransitions)>
        TransitionImageLayoutEXT{};
    inline static std::function<void(VkDevice device, VkImage image, const VkImageSubresource2KHR* pSubresource,
                                     VkSubresourceLayout2KHR* pLayout)>
        GetImageSubresourceLayout2EXT{};
    inline static std::function<VkResult(VkDevice device, const VkReleaseSwapchainImagesInfoEXT* pReleaseInfo)>
        ReleaseSwapchainImagesEXT{};
    inline static std::function<void(VkDevice device, const VkGeneratedCommandsMemoryRequirementsInfoNV* pInfo,
                                     VkMemoryRequirements2* pMemoryRequirements)>
        GetGeneratedCommandsMemoryRequirementsNV{};
    inline static std::function<void(VkCommandBuffer commandBuffer, const VkGeneratedCommandsInfoNV* pGeneratedCommandsInfo)>
        CmdPreprocessGeneratedCommandsNV{};
    inline static std::function<void(VkCommandBuffer commandBuffer, VkBool32 isPreprocessed,
                                     const VkGeneratedCommandsInfoNV* pGeneratedCommandsInfo)>
        CmdExecuteGeneratedCommandsNV{};
    inline static std::function<void(VkCommandBuffer commandBuffer, VkPipelineBindPoint pipelineBindPoint, VkPipeline pipeline,
                                     uint32_t groupIndex)>
        CmdBindPipelineShaderGroupNV{};
    inline static std::function<VkResult(VkDevice device, const VkIndirectCommandsLayoutCreateInfoNV* pCreateInfo,
                                         const VkAllocationCallbacks* pAllocator,
                                         VkIndirectCommandsLayoutNV* pIndirectCommandsLayout)>
        CreateIndirectCommandsLayoutNV{};
    inline static std::function<void(VkDevice device, VkIndirectCommandsLayoutNV indirectCommandsLayout,
                                     const VkAllocationCallbacks* pAllocator)>
        DestroyIndirectCommandsLayoutNV{};
    inline static std::function<void(VkCommandBuffer commandBuffer, const VkDepthBiasInfoEXT* pDepthBiasInfo)>
        CmdSetDepthBias2EXT{};
    inline static std::function<VkResult(VkPhysicalDevice physicalDevice, int32_t drmFd, VkDisplayKHR display)>
        AcquireDrmDisplayEXT{};
    inline static std::function<VkResult(VkPhysicalDevice physicalDevice, int32_t drmFd, uint32_t connectorId,
                                         VkDisplayKHR* display)>
        GetDrmDisplayEXT{};
    inline static std::function<VkResult(VkDevice device, const VkPrivateDataSlotCreateInfo* pCreateInfo,
                                         const VkAllocationCallbacks* pAllocator, VkPrivateDataSlot* pPrivateDataSlot)>
        CreatePrivateDataSlotEXT{};
    inline static std::function<void(VkDevice device, VkPrivateDataSlot privateDataSlot, const VkAllocationCallbacks* pAllocator)>
        DestroyPrivateDataSlotEXT{};
    inline static std::function<VkResult(VkDevice device, VkObjectType objectType, uint64_t objectHandle,
                                         VkPrivateDataSlot privateDataSlot, uint64_t data)>
        SetPrivateDataEXT{};
    inline static std::function<void(VkDevice device, VkObjectType objectType, uint64_t objectHandle,
                                     VkPrivateDataSlot privateDataSlot, uint64_t* pData)>
        GetPrivateDataEXT{};
    inline static std::function<VkResult(VkDevice device, const VkCudaModuleCreateInfoNV* pCreateInfo,
                                         const VkAllocationCallbacks* pAllocator, VkCudaModuleNV* pModule)>
        CreateCudaModuleNV{};
    inline static std::function<VkResult(VkDevice device, VkCudaModuleNV module, size_t* pCacheSize, void* pCacheData)>
        GetCudaModuleCacheNV{};
    inline static std::function<VkResult(VkDevice device, const VkCudaFunctionCreateInfoNV* pCreateInfo,
                                         const VkAllocationCallbacks* pAllocator, VkCudaFunctionNV* pFunction)>
        CreateCudaFunctionNV{};
    inline static std::function<void(VkDevice device, VkCudaModuleNV module, const VkAllocationCallbacks* pAllocator)>
        DestroyCudaModuleNV{};
    inline static std::function<void(VkDevice device, VkCudaFunctionNV function, const VkAllocationCallbacks* pAllocator)>
        DestroyCudaFunctionNV{};
    inline static std::function<void(VkCommandBuffer commandBuffer, const VkCudaLaunchInfoNV* pLaunchInfo)> CmdCudaLaunchKernelNV{};
#ifdef VK_USE_PLATFORM_METAL_EXT
    inline static std::function<void(VkDevice device, VkExportMetalObjectsInfoEXT* pMetalObjectsInfo)> ExportMetalObjectsEXT{};
#endif  // VK_USE_PLATFORM_METAL_EXT
    inline static std::function<void(VkDevice device, VkDescriptorSetLayout layout, VkDeviceSize* pLayoutSizeInBytes)>
        GetDescriptorSetLayoutSizeEXT{};
    inline static std::function<void(VkDevice device, VkDescriptorSetLayout layout, uint32_t binding, VkDeviceSize* pOffset)>
        GetDescriptorSetLayoutBindingOffsetEXT{};
    inline static std::function<void(VkDevice device, const VkDescriptorGetInfoEXT* pDescriptorInfo, size_t dataSize,
                                     void* pDescriptor)>
        GetDescriptorEXT{};
    inline static std::function<void(VkCommandBuffer commandBuffer, uint32_t bufferCount,
                                     const VkDescriptorBufferBindingInfoEXT* pBindingInfos)>
        CmdBindDescriptorBuffersEXT{};
    inline static std::function<void(VkCommandBuffer commandBuffer, VkPipelineBindPoint pipelineBindPoint, VkPipelineLayout layout,
                                     uint32_t firstSet, uint32_t setCount, const uint32_t* pBufferIndices,
                                     const VkDeviceSize* pOffsets)>
        CmdSetDescriptorBufferOffsetsEXT{};
    inline static std::function<void(VkCommandBuffer commandBuffer, VkPipelineBindPoint pipelineBindPoint, VkPipelineLayout layout,
                                     uint32_t set)>
        CmdBindDescriptorBufferEmbeddedSamplersEXT{};
    inline static std::function<VkResult(VkDevice device, const VkBufferCaptureDescriptorDataInfoEXT* pInfo, void* pData)>
        GetBufferOpaqueCaptureDescriptorDataEXT{};
    inline static std::function<VkResult(VkDevice device, const VkImageCaptureDescriptorDataInfoEXT* pInfo, void* pData)>
        GetImageOpaqueCaptureDescriptorDataEXT{};
    inline static std::function<VkResult(VkDevice device, const VkImageViewCaptureDescriptorDataInfoEXT* pInfo, void* pData)>
        GetImageViewOpaqueCaptureDescriptorDataEXT{};
    inline static std::function<VkResult(VkDevice device, const VkSamplerCaptureDescriptorDataInfoEXT* pInfo, void* pData)>
        GetSamplerOpaqueCaptureDescriptorDataEXT{};
    inline static std::function<VkResult(VkDevice device, const VkAccelerationStructureCaptureDescriptorDataInfoEXT* pInfo,
                                         void* pData)>
        GetAccelerationStructureOpaqueCaptureDescriptorDataEXT{};
    inline static std::function<void(VkCommandBuffer commandBuffer, VkFragmentShadingRateNV shadingRate,
                                     const VkFragmentShadingRateCombinerOpKHR combinerOps[2])>
        CmdSetFragmentShadingRateEnumNV{};
    inline static std::function<VkResult(VkDevice device, VkDeviceFaultCountsEXT* pFaultCounts, VkDeviceFaultInfoEXT* pFaultInfo)>
        GetDeviceFaultInfoEXT{};
#ifdef VK_USE_PLATFORM_WIN32_KHR
    inline static std::function<VkResult(VkPhysicalDevice physicalDevice, VkDisplayKHR display)> AcquireWinrtDisplayNV{};
    inline static std::function<VkResult(VkPhysicalDevice physicalDevice, uint32_t deviceRelativeId, VkDisplayKHR* pDisplay)>
        GetWinrtDisplayNV{};
#endif  // VK_USE_PLATFORM_WIN32_KHR
#ifdef VK_USE_PLATFORM_DIRECTFB_EXT
    inline static std::function<VkResult(VkInstance instance, const VkDirectFBSurfaceCreateInfoEXT* pCreateInfo,
                                         const VkAllocationCallbacks* pAllocator, VkSurfaceKHR* pSurface)>
        CreateDirectFBSurfaceEXT{};
    inline static std::function<VkBool32(VkPhysicalDevice physicalDevice, uint32_t queueFamilyIndex, IDirectFB* dfb)>
        GetPhysicalDeviceDirectFBPresentationSupportEXT{};
#endif  // VK_USE_PLATFORM_DIRECTFB_EXT
    inline static std::function<void(VkCommandBuffer commandBuffer, uint32_t vertexBindingDescriptionCount,
                                     const VkVertexInputBindingDescription2EXT* pVertexBindingDescriptions,
                                     uint32_t vertexAttributeDescriptionCount,
                                     const VkVertexInputAttributeDescription2EXT* pVertexAttributeDescriptions)>
        CmdSetVertexInputEXT{};
#ifdef VK_USE_PLATFORM_FUCHSIA
    inline static std::function<VkResult(VkDevice device, const VkMemoryGetZirconHandleInfoFUCHSIA* pGetZirconHandleInfo,
                                         zx_handle_t* pZirconHandle)>
        GetMemoryZirconHandleFUCHSIA{};
    inline static std::function<VkResult(VkDevice device, VkExternalMemoryHandleTypeFlagBits handleType, zx_handle_t zirconHandle,
                                         VkMemoryZirconHandlePropertiesFUCHSIA* pMemoryZirconHandleProperties)>
        GetMemoryZirconHandlePropertiesFUCHSIA{};
    inline static std::function<VkResult(VkDevice device,
                                         const VkImportSemaphoreZirconHandleInfoFUCHSIA* pImportSemaphoreZirconHandleInfo)>
        ImportSemaphoreZirconHandleFUCHSIA{};
    inline static std::function<VkResult(VkDevice device, const VkSemaphoreGetZirconHandleInfoFUCHSIA* pGetZirconHandleInfo,
                                         zx_handle_t* pZirconHandle)>
        GetSemaphoreZirconHandleFUCHSIA{};
    inline static std::function<VkResult(VkDevice device, const VkBufferCollectionCreateInfoFUCHSIA* pCreateInfo,
                                         const VkAllocationCallbacks* pAllocator, VkBufferCollectionFUCHSIA* pCollection)>
        CreateBufferCollectionFUCHSIA{};
    inline static std::function<VkResult(VkDevice device, VkBufferCollectionFUCHSIA collection,
                                         const VkImageConstraintsInfoFUCHSIA* pImageConstraintsInfo)>
        SetBufferCollectionImageConstraintsFUCHSIA{};
    inline static std::function<VkResult(VkDevice device, VkBufferCollectionFUCHSIA collection,
                                         const VkBufferConstraintsInfoFUCHSIA* pBufferConstraintsInfo)>
        SetBufferCollectionBufferConstraintsFUCHSIA{};
    inline static std::function<void(VkDevice device, VkBufferCollectionFUCHSIA collection,
                                     const VkAllocationCallbacks* pAllocator)>
        DestroyBufferCollectionFUCHSIA{};
    inline static std::function<VkResult(VkDevice device, VkBufferCollectionFUCHSIA collection,
                                         VkBufferCollectionPropertiesFUCHSIA* pProperties)>
        GetBufferCollectionPropertiesFUCHSIA{};
#endif  // VK_USE_PLATFORM_FUCHSIA
    inline static std::function<VkResult(VkDevice device, VkRenderPass renderpass, VkExtent2D* pMaxWorkgroupSize)>
        GetDeviceSubpassShadingMaxWorkgroupSizeHUAWEI{};
    inline static std::function<void(VkCommandBuffer commandBuffer)> CmdSubpassShadingHUAWEI{};
    inline static std::function<void(VkCommandBuffer commandBuffer, VkImageView imageView, VkImageLayout imageLayout)>
        CmdBindInvocationMaskHUAWEI{};
    inline static std::function<VkResult(VkDevice device, const VkMemoryGetRemoteAddressInfoNV* pMemoryGetRemoteAddressInfo,
                                         VkRemoteAddressNV* pAddress)>
        GetMemoryRemoteAddressNV{};
    inline static std::function<VkResult(VkDevice device, const VkPipelineInfoEXT* pPipelineInfo,
                                         VkBaseOutStructure* pPipelineProperties)>
        GetPipelinePropertiesEXT{};
    inline static std::function<void(VkCommandBuffer commandBuffer, uint32_t patchControlPoints)> CmdSetPatchControlPointsEXT{};
    inline static std::function<void(VkCommandBuffer commandBuffer, VkBool32 rasterizerDiscardEnable)>
        CmdSetRasterizerDiscardEnableEXT{};
    inline static std::function<void(VkCommandBuffer commandBuffer, VkBool32 depthBiasEnable)> CmdSetDepthBiasEnableEXT{};
    inline static std::function<void(VkCommandBuffer commandBuffer, VkLogicOp logicOp)> CmdSetLogicOpEXT{};
    inline static std::function<void(VkCommandBuffer commandBuffer, VkBool32 primitiveRestartEnable)>
        CmdSetPrimitiveRestartEnableEXT{};
#ifdef VK_USE_PLATFORM_SCREEN_QNX
    inline static std::function<VkResult(VkInstance instance, const VkScreenSurfaceCreateInfoQNX* pCreateInfo,
                                         const VkAllocationCallbacks* pAllocator, VkSurfaceKHR* pSurface)>
        CreateScreenSurfaceQNX{};
    inline static std::function<VkBool32(VkPhysicalDevice physicalDevice, uint32_t queueFamilyIndex, struct _screen_window* window)>
        GetPhysicalDeviceScreenPresentationSupportQNX{};
#endif  // VK_USE_PLATFORM_SCREEN_QNX
    inline static std::function<void(VkCommandBuffer commandBuffer, uint32_t attachmentCount, const VkBool32* pColorWriteEnables)>
        CmdSetColorWriteEnableEXT{};
    inline static std::function<void(VkCommandBuffer commandBuffer, uint32_t drawCount, const VkMultiDrawInfoEXT* pVertexInfo,
                                     uint32_t instanceCount, uint32_t firstInstance, uint32_t stride)>
        CmdDrawMultiEXT{};
    inline static std::function<void(VkCommandBuffer commandBuffer, uint32_t drawCount, const VkMultiDrawIndexedInfoEXT* pIndexInfo,
                                     uint32_t instanceCount, uint32_t firstInstance, uint32_t stride, const int32_t* pVertexOffset)>
        CmdDrawMultiIndexedEXT{};
    inline static std::function<VkResult(VkDevice device, const VkMicromapCreateInfoEXT* pCreateInfo,
                                         const VkAllocationCallbacks* pAllocator, VkMicromapEXT* pMicromap)>
        CreateMicromapEXT{};
    inline static std::function<void(VkDevice device, VkMicromapEXT micromap, const VkAllocationCallbacks* pAllocator)>
        DestroyMicromapEXT{};
    inline static std::function<void(VkCommandBuffer commandBuffer, uint32_t infoCount, const VkMicromapBuildInfoEXT* pInfos)>
        CmdBuildMicromapsEXT{};
    inline static std::function<VkResult(VkDevice device, VkDeferredOperationKHR deferredOperation, uint32_t infoCount,
                                         const VkMicromapBuildInfoEXT* pInfos)>
        BuildMicromapsEXT{};
    inline static std::function<VkResult(VkDevice device, VkDeferredOperationKHR deferredOperation,
                                         const VkCopyMicromapInfoEXT* pInfo)>
        CopyMicromapEXT{};
    inline static std::function<VkResult(VkDevice device, VkDeferredOperationKHR deferredOperation,
                                         const VkCopyMicromapToMemoryInfoEXT* pInfo)>
        CopyMicromapToMemoryEXT{};
    inline static std::function<VkResult(VkDevice device, VkDeferredOperationKHR deferredOperation,
                                         const VkCopyMemoryToMicromapInfoEXT* pInfo)>
        CopyMemoryToMicromapEXT{};
    inline static std::function<VkResult(VkDevice device, uint32_t micromapCount, const VkMicromapEXT* pMicromaps,
                                         VkQueryType queryType, size_t dataSize, void* pData, size_t stride)>
        WriteMicromapsPropertiesEXT{};
    inline static std::function<void(VkCommandBuffer commandBuffer, const VkCopyMicromapInfoEXT* pInfo)> CmdCopyMicromapEXT{};
    inline static std::function<void(VkCommandBuffer commandBuffer, const VkCopyMicromapToMemoryInfoEXT* pInfo)>
        CmdCopyMicromapToMemoryEXT{};
    inline static std::function<void(VkCommandBuffer commandBuffer, const VkCopyMemoryToMicromapInfoEXT* pInfo)>
        CmdCopyMemoryToMicromapEXT{};
    inline static std::function<void(VkCommandBuffer commandBuffer, uint32_t micromapCount, const VkMicromapEXT* pMicromaps,
                                     VkQueryType queryType, VkQueryPool queryPool, uint32_t firstQuery)>
        CmdWriteMicromapsPropertiesEXT{};
    inline static std::function<void(VkDevice device, const VkMicromapVersionInfoEXT* pVersionInfo,
                                     VkAccelerationStructureCompatibilityKHR* pCompatibility)>
        GetDeviceMicromapCompatibilityEXT{};
    inline static std::function<void(VkDevice device, VkAccelerationStructureBuildTypeKHR buildType,
                                     const VkMicromapBuildInfoEXT* pBuildInfo, VkMicromapBuildSizesInfoEXT* pSizeInfo)>
        GetMicromapBuildSizesEXT{};
    inline static std::function<void(VkCommandBuffer commandBuffer, uint32_t groupCountX, uint32_t groupCountY,
                                     uint32_t groupCountZ)>
        CmdDrawClusterHUAWEI{};
    inline static std::function<void(VkCommandBuffer commandBuffer, VkBuffer buffer, VkDeviceSize offset)>
        CmdDrawClusterIndirectHUAWEI{};
    inline static std::function<void(VkDevice device, VkDeviceMemory memory, float priority)> SetDeviceMemoryPriorityEXT{};
    inline static std::function<void(VkDevice device, const VkDescriptorSetBindingReferenceVALVE* pBindingReference,
                                     VkDescriptorSetLayoutHostMappingInfoVALVE* pHostMapping)>
        GetDescriptorSetLayoutHostMappingInfoVALVE{};
    inline static std::function<void(VkDevice device, VkDescriptorSet descriptorSet, void** ppData)>
        GetDescriptorSetHostMappingVALVE{};
    inline static std::function<void(VkCommandBuffer commandBuffer, VkDeviceAddress copyBufferAddress, uint32_t copyCount,
                                     uint32_t stride)>
        CmdCopyMemoryIndirectNV{};
    inline static std::function<void(VkCommandBuffer commandBuffer, VkDeviceAddress copyBufferAddress, uint32_t copyCount,
                                     uint32_t stride, VkImage dstImage, VkImageLayout dstImageLayout,
                                     const VkImageSubresourceLayers* pImageSubresources)>
        CmdCopyMemoryToImageIndirectNV{};
    inline static std::function<void(VkCommandBuffer commandBuffer, uint32_t decompressRegionCount,
                                     const VkDecompressMemoryRegionNV* pDecompressMemoryRegions)>
        CmdDecompressMemoryNV{};
    inline static std::function<void(VkCommandBuffer commandBuffer, VkDeviceAddress indirectCommandsAddress,
                                     VkDeviceAddress indirectCommandsCountAddress, uint32_t stride)>
        CmdDecompressMemoryIndirectCountNV{};
    inline static std::function<void(VkDevice device, const VkComputePipelineCreateInfo* pCreateInfo,
                                     VkMemoryRequirements2* pMemoryRequirements)>
        GetPipelineIndirectMemoryRequirementsNV{};
    inline static std::function<void(VkCommandBuffer commandBuffer, VkPipelineBindPoint pipelineBindPoint, VkPipeline pipeline)>
        CmdUpdatePipelineIndirectBufferNV{};
    inline static std::function<VkDeviceAddress(VkDevice device, const VkPipelineIndirectDeviceAddressInfoNV* pInfo)>
        GetPipelineIndirectDeviceAddressNV{};
    inline static std::function<void(VkCommandBuffer commandBuffer, VkBool32 depthClampEnable)> CmdSetDepthClampEnableEXT{};
    inline static std::function<void(VkCommandBuffer commandBuffer, VkPolygonMode polygonMode)> CmdSetPolygonModeEXT{};
    inline static std::function<void(VkCommandBuffer commandBuffer, VkSampleCountFlagBits rasterizationSamples)>
        CmdSetRasterizationSamplesEXT{};
    inline static std::function<void(VkCommandBuffer commandBuffer, VkSampleCountFlagBits samples, const VkSampleMask* pSampleMask)>
        CmdSetSampleMaskEXT{};
    inline static std::function<void(VkCommandBuffer commandBuffer, VkBool32 alphaToCoverageEnable)>
        CmdSetAlphaToCoverageEnableEXT{};
    inline static std::function<void(VkCommandBuffer commandBuffer, VkBool32 alphaToOneEnable)> CmdSetAlphaToOneEnableEXT{};
    inline static std::function<void(VkCommandBuffer commandBuffer, VkBool32 logicOpEnable)> CmdSetLogicOpEnableEXT{};
    inline static std::function<void(VkCommandBuffer commandBuffer, uint32_t firstAttachment, uint32_t attachmentCount,
                                     const VkBool32* pColorBlendEnables)>
        CmdSetColorBlendEnableEXT{};
    inline static std::function<void(VkCommandBuffer commandBuffer, uint32_t firstAttachment, uint32_t attachmentCount,
                                     const VkColorBlendEquationEXT* pColorBlendEquations)>
        CmdSetColorBlendEquationEXT{};
    inline static std::function<void(VkCommandBuffer commandBuffer, uint32_t firstAttachment, uint32_t attachmentCount,
                                     const VkColorComponentFlags* pColorWriteMasks)>
        CmdSetColorWriteMaskEXT{};
    inline static std::function<void(VkCommandBuffer commandBuffer, VkTessellationDomainOrigin domainOrigin)>
        CmdSetTessellationDomainOriginEXT{};
    inline static std::function<void(VkCommandBuffer commandBuffer, uint32_t rasterizationStream)> CmdSetRasterizationStreamEXT{};
    inline static std::function<void(VkCommandBuffer commandBuffer,
                                     VkConservativeRasterizationModeEXT conservativeRasterizationMode)>
        CmdSetConservativeRasterizationModeEXT{};
    inline static std::function<void(VkCommandBuffer commandBuffer, float extraPrimitiveOverestimationSize)>
        CmdSetExtraPrimitiveOverestimationSizeEXT{};
    inline static std::function<void(VkCommandBuffer commandBuffer, VkBool32 depthClipEnable)> CmdSetDepthClipEnableEXT{};
    inline static std::function<void(VkCommandBuffer commandBuffer, VkBool32 sampleLocationsEnable)>
        CmdSetSampleLocationsEnableEXT{};
    inline static std::function<void(VkCommandBuffer commandBuffer, uint32_t firstAttachment, uint32_t attachmentCount,
                                     const VkColorBlendAdvancedEXT* pColorBlendAdvanced)>
        CmdSetColorBlendAdvancedEXT{};
    inline static std::function<void(VkCommandBuffer commandBuffer, VkProvokingVertexModeEXT provokingVertexMode)>
        CmdSetProvokingVertexModeEXT{};
    inline static std::function<void(VkCommandBuffer commandBuffer, VkLineRasterizationModeEXT lineRasterizationMode)>
        CmdSetLineRasterizationModeEXT{};
    inline static std::function<void(VkCommandBuffer commandBuffer, VkBool32 stippledLineEnable)> CmdSetLineStippleEnableEXT{};
    inline static std::function<void(VkCommandBuffer commandBuffer, VkBool32 negativeOneToOne)>
        CmdSetDepthClipNegativeOneToOneEXT{};
    inline static std::function<void(VkCommandBuffer commandBuffer, VkBool32 viewportWScalingEnable)>
        CmdSetViewportWScalingEnableNV{};
    inline static std::function<void(VkCommandBuffer commandBuffer, uint32_t firstViewport, uint32_t viewportCount,
                                     const VkViewportSwizzleNV* pViewportSwizzles)>
        CmdSetViewportSwizzleNV{};
    inline static std::function<void(VkCommandBuffer commandBuffer, VkBool32 coverageToColorEnable)>
        CmdSetCoverageToColorEnableNV{};
    inline static std::function<void(VkCommandBuffer commandBuffer, uint32_t coverageToColorLocation)>
        CmdSetCoverageToColorLocationNV{};
    inline static std::function<void(VkCommandBuffer commandBuffer, VkCoverageModulationModeNV coverageModulationMode)>
        CmdSetCoverageModulationModeNV{};
    inline static std::function<void(VkCommandBuffer commandBuffer, VkBool32 coverageModulationTableEnable)>
        CmdSetCoverageModulationTableEnableNV{};
    inline static std::function<void(VkCommandBuffer commandBuffer, uint32_t coverageModulationTableCount,
                                     const float* pCoverageModulationTable)>
        CmdSetCoverageModulationTableNV{};
    inline static std::function<void(VkCommandBuffer commandBuffer, VkBool32 shadingRateImageEnable)>
        CmdSetShadingRateImageEnableNV{};
    inline static std::function<void(VkCommandBuffer commandBuffer, VkBool32 representativeFragmentTestEnable)>
        CmdSetRepresentativeFragmentTestEnableNV{};
    inline static std::function<void(VkCommandBuffer commandBuffer, VkCoverageReductionModeNV coverageReductionMode)>
        CmdSetCoverageReductionModeNV{};
    inline static std::function<void(VkDevice device, VkShaderModule shaderModule, VkShaderModuleIdentifierEXT* pIdentifier)>
        GetShaderModuleIdentifierEXT{};
    inline static std::function<void(VkDevice device, const VkShaderModuleCreateInfo* pCreateInfo,
                                     VkShaderModuleIdentifierEXT* pIdentifier)>
        GetShaderModuleCreateInfoIdentifierEXT{};
    inline static std::function<VkResult(VkPhysicalDevice physicalDevice,
                                         const VkOpticalFlowImageFormatInfoNV* pOpticalFlowImageFormatInfo, uint32_t* pFormatCount,
                                         VkOpticalFlowImageFormatPropertiesNV* pImageFormatProperties)>
        GetPhysicalDeviceOpticalFlowImageFormatsNV{};
    inline static std::function<VkResult(VkDevice device, const VkOpticalFlowSessionCreateInfoNV* pCreateInfo,
                                         const VkAllocationCallbacks* pAllocator, VkOpticalFlowSessionNV* pSession)>
        CreateOpticalFlowSessionNV{};
    inline static std::function<void(VkDevice device, VkOpticalFlowSessionNV session, const VkAllocationCallbacks* pAllocator)>
        DestroyOpticalFlowSessionNV{};
    inline static std::function<VkResult(VkDevice device, VkOpticalFlowSessionNV session,
                                         VkOpticalFlowSessionBindingPointNV bindingPoint, VkImageView view, VkImageLayout layout)>
        BindOpticalFlowSessionImageNV{};
    inline static std::function<void(VkCommandBuffer commandBuffer, VkOpticalFlowSessionNV session,
                                     const VkOpticalFlowExecuteInfoNV* pExecuteInfo)>
        CmdOpticalFlowExecuteNV{};
    inline static std::function<VkResult(VkDevice device, uint32_t createInfoCount, const VkShaderCreateInfoEXT* pCreateInfos,
                                         const VkAllocationCallbacks* pAllocator, VkShaderEXT* pShaders)>
        CreateShadersEXT{};
    inline static std::function<void(VkDevice device, VkShaderEXT shader, const VkAllocationCallbacks* pAllocator)>
        DestroyShaderEXT{};
    inline static std::function<VkResult(VkDevice device, VkShaderEXT shader, size_t* pDataSize, void* pData)>
        GetShaderBinaryDataEXT{};
    inline static std::function<void(VkCommandBuffer commandBuffer, uint32_t stageCount, const VkShaderStageFlagBits* pStages,
                                     const VkShaderEXT* pShaders)>
        CmdBindShadersEXT{};
    inline static std::function<VkResult(VkDevice device, VkFramebuffer framebuffer, uint32_t* pPropertiesCount,
                                         VkTilePropertiesQCOM* pProperties)>
        GetFramebufferTilePropertiesQCOM{};
    inline static std::function<VkResult(VkDevice device, const VkRenderingInfo* pRenderingInfo, VkTilePropertiesQCOM* pProperties)>
        GetDynamicRenderingTilePropertiesQCOM{};
    inline static std::function<VkResult(VkDevice device, VkSwapchainKHR swapchain, const VkLatencySleepModeInfoNV* pSleepModeInfo)>
        SetLatencySleepModeNV{};
    inline static std::function<VkResult(VkDevice device, VkSwapchainKHR swapchain, const VkLatencySleepInfoNV* pSleepInfo)>
        LatencySleepNV{};
    inline static std::function<void(VkDevice device, VkSwapchainKHR swapchain, const VkSetLatencyMarkerInfoNV* pLatencyMarkerInfo)>
        SetLatencyMarkerNV{};
    inline static std::function<void(VkDevice device, VkSwapchainKHR swapchain, VkGetLatencyMarkerInfoNV* pLatencyMarkerInfo)>
        GetLatencyTimingsNV{};
    inline static std::function<void(VkQueue queue, const VkOutOfBandQueueTypeInfoNV* pQueueTypeInfo)> QueueNotifyOutOfBandNV{};
    inline static std::function<void(VkCommandBuffer commandBuffer, VkImageAspectFlags aspectMask)>
        CmdSetAttachmentFeedbackLoopEnableEXT{};
#ifdef VK_USE_PLATFORM_SCREEN_QNX
    inline static std::function<VkResult(VkDevice device, const struct _screen_buffer* buffer,
                                         VkScreenBufferPropertiesQNX* pProperties)>
        GetScreenBufferPropertiesQNX{};
#endif  // VK_USE_PLATFORM_SCREEN_QNX
    inline static std::function<VkResult(VkDevice device, const VkAccelerationStructureCreateInfoKHR* pCreateInfo,
                                         const VkAllocationCallbacks* pAllocator,
                                         VkAccelerationStructureKHR* pAccelerationStructure)>
        CreateAccelerationStructureKHR{};
    inline static std::function<void(VkDevice device, VkAccelerationStructureKHR accelerationStructure,
                                     const VkAllocationCallbacks* pAllocator)>
        DestroyAccelerationStructureKHR{};
    inline static std::function<void(VkCommandBuffer commandBuffer, uint32_t infoCount,
                                     const VkAccelerationStructureBuildGeometryInfoKHR* pInfos,
                                     const VkAccelerationStructureBuildRangeInfoKHR* const* ppBuildRangeInfos)>
        CmdBuildAccelerationStructuresKHR{};
    inline static std::function<void(VkCommandBuffer commandBuffer, uint32_t infoCount,
                                     const VkAccelerationStructureBuildGeometryInfoKHR* pInfos,
                                     const VkDeviceAddress* pIndirectDeviceAddresses, const uint32_t* pIndirectStrides,
                                     const uint32_t* const* ppMaxPrimitiveCounts)>
        CmdBuildAccelerationStructuresIndirectKHR{};
    inline static std::function<VkResult(VkDevice device, VkDeferredOperationKHR deferredOperation, uint32_t infoCount,
                                         const VkAccelerationStructureBuildGeometryInfoKHR* pInfos,
                                         const VkAccelerationStructureBuildRangeInfoKHR* const* ppBuildRangeInfos)>
        BuildAccelerationStructuresKHR{};
    inline static std::function<VkResult(VkDevice device, VkDeferredOperationKHR deferredOperation,
                                         const VkCopyAccelerationStructureInfoKHR* pInfo)>
        CopyAccelerationStructureKHR{};
    inline static std::function<VkResult(VkDevice device, VkDeferredOperationKHR deferredOperation,
                                         const VkCopyAccelerationStructureToMemoryInfoKHR* pInfo)>
        CopyAccelerationStructureToMemoryKHR{};
    inline static std::function<VkResult(VkDevice device, VkDeferredOperationKHR deferredOperation,
                                         const VkCopyMemoryToAccelerationStructureInfoKHR* pInfo)>
        CopyMemoryToAccelerationStructureKHR{};
    inline static std::function<VkResult(VkDevice device, uint32_t accelerationStructureCount,
                                         const VkAccelerationStructureKHR* pAccelerationStructures, VkQueryType queryType,
                                         size_t dataSize, void* pData, size_t stride)>
        WriteAccelerationStructuresPropertiesKHR{};
    inline static std::function<void(VkCommandBuffer commandBuffer, const VkCopyAccelerationStructureInfoKHR* pInfo)>
        CmdCopyAccelerationStructureKHR{};
    inline static std::function<void(VkCommandBuffer commandBuffer, const VkCopyAccelerationStructureToMemoryInfoKHR* pInfo)>
        CmdCopyAccelerationStructureToMemoryKHR{};
    inline static std::function<void(VkCommandBuffer commandBuffer, const VkCopyMemoryToAccelerationStructureInfoKHR* pInfo)>
        CmdCopyMemoryToAccelerationStructureKHR{};
    inline static std::function<VkDeviceAddress(VkDevice device, const VkAccelerationStructureDeviceAddressInfoKHR* pInfo)>
        GetAccelerationStructureDeviceAddressKHR{};
    inline static std::function<void(VkCommandBuffer commandBuffer, uint32_t accelerationStructureCount,
                                     const VkAccelerationStructureKHR* pAccelerationStructures, VkQueryType queryType,
                                     VkQueryPool queryPool, uint32_t firstQuery)>
        CmdWriteAccelerationStructuresPropertiesKHR{};
    inline static std::function<void(VkDevice device, const VkAccelerationStructureVersionInfoKHR* pVersionInfo,
                                     VkAccelerationStructureCompatibilityKHR* pCompatibility)>
        GetDeviceAccelerationStructureCompatibilityKHR{};
    inline static std::function<void(VkDevice device, VkAccelerationStructureBuildTypeKHR buildType,
                                     const VkAccelerationStructureBuildGeometryInfoKHR* pBuildInfo,
                                     const uint32_t* pMaxPrimitiveCounts, VkAccelerationStructureBuildSizesInfoKHR* pSizeInfo)>
        GetAccelerationStructureBuildSizesKHR{};
    inline static std::function<void(
        VkCommandBuffer commandBuffer, const VkStridedDeviceAddressRegionKHR* pRaygenShaderBindingTable,
        const VkStridedDeviceAddressRegionKHR* pMissShaderBindingTable,
        const VkStridedDeviceAddressRegionKHR* pHitShaderBindingTable,
        const VkStridedDeviceAddressRegionKHR* pCallableShaderBindingTable, uint32_t width, uint32_t height, uint32_t depth)>
        CmdTraceRaysKHR{};
    inline static std::function<VkResult(VkDevice device, VkDeferredOperationKHR deferredOperation, VkPipelineCache pipelineCache,
                                         uint32_t createInfoCount, const VkRayTracingPipelineCreateInfoKHR* pCreateInfos,
                                         const VkAllocationCallbacks* pAllocator, VkPipeline* pPipelines)>
        CreateRayTracingPipelinesKHR{};
    inline static std::function<VkResult(VkDevice device, VkPipeline pipeline, uint32_t firstGroup, uint32_t groupCount,
                                         size_t dataSize, void* pData)>
        GetRayTracingCaptureReplayShaderGroupHandlesKHR{};
    inline static std::function<void(
        VkCommandBuffer commandBuffer, const VkStridedDeviceAddressRegionKHR* pRaygenShaderBindingTable,
        const VkStridedDeviceAddressRegionKHR* pMissShaderBindingTable,
        const VkStridedDeviceAddressRegionKHR* pHitShaderBindingTable,
        const VkStridedDeviceAddressRegionKHR* pCallableShaderBindingTable, VkDeviceAddress indirectDeviceAddress)>
        CmdTraceRaysIndirectKHR{};
    inline static std::function<VkDeviceSize(VkDevice device, VkPipeline pipeline, uint32_t group,
                                             VkShaderGroupShaderKHR groupShader)>
        GetRayTracingShaderGroupStackSizeKHR{};
    inline static std::function<void(VkCommandBuffer commandBuffer, uint32_t pipelineStackSize)>
        CmdSetRayTracingPipelineStackSizeKHR{};
    inline static std::function<void(VkCommandBuffer commandBuffer, uint32_t groupCountX, uint32_t groupCountY,
                                     uint32_t groupCountZ)>
        CmdDrawMeshTasksEXT{};
    inline static std::function<void(VkCommandBuffer commandBuffer, VkBuffer buffer, VkDeviceSize offset, uint32_t drawCount,
                                     uint32_t stride)>
        CmdDrawMeshTasksIndirectEXT{};
    inline static std::function<void(VkCommandBuffer commandBuffer, VkBuffer buffer, VkDeviceSize offset, VkBuffer countBuffer,
                                     VkDeviceSize countBufferOffset, uint32_t maxDrawCount, uint32_t stride)>
        CmdDrawMeshTasksIndirectCountEXT{};
};

// NOLINTEND
