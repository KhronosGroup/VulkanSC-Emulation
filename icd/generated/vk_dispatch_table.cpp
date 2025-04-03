// *** THIS FILE IS GENERATED - DO NOT EDIT ***
// See vk_dispatch_table_generator.py for modifications

/*
 * Copyright (c) 2024-2025 The Khronos Group Inc.
 * Copyright (c) 2024-2025 RasterGrid Kft.
 *
 * SPDX-License-Identifier: Apache-2.0
 */
// NOLINTBEGIN

#include "vk_dispatch_table.h"

namespace vk {

DispatchTable::DispatchTable(VkInstance instance, PFN_vkGetInstanceProcAddr get_proc_addr)
    : DestroyInstance(reinterpret_cast<PFN_vkDestroyInstance>(get_proc_addr(instance, "vkDestroyInstance"))),
      EnumeratePhysicalDevices(
          reinterpret_cast<PFN_vkEnumeratePhysicalDevices>(get_proc_addr(instance, "vkEnumeratePhysicalDevices"))),
      GetPhysicalDeviceFeatures(
          reinterpret_cast<PFN_vkGetPhysicalDeviceFeatures>(get_proc_addr(instance, "vkGetPhysicalDeviceFeatures"))),
      GetPhysicalDeviceFormatProperties(reinterpret_cast<PFN_vkGetPhysicalDeviceFormatProperties>(
          get_proc_addr(instance, "vkGetPhysicalDeviceFormatProperties"))),
      GetPhysicalDeviceImageFormatProperties(reinterpret_cast<PFN_vkGetPhysicalDeviceImageFormatProperties>(
          get_proc_addr(instance, "vkGetPhysicalDeviceImageFormatProperties"))),
      GetPhysicalDeviceProperties(
          reinterpret_cast<PFN_vkGetPhysicalDeviceProperties>(get_proc_addr(instance, "vkGetPhysicalDeviceProperties"))),
      GetPhysicalDeviceQueueFamilyProperties(reinterpret_cast<PFN_vkGetPhysicalDeviceQueueFamilyProperties>(
          get_proc_addr(instance, "vkGetPhysicalDeviceQueueFamilyProperties"))),
      GetPhysicalDeviceMemoryProperties(reinterpret_cast<PFN_vkGetPhysicalDeviceMemoryProperties>(
          get_proc_addr(instance, "vkGetPhysicalDeviceMemoryProperties"))),
      GetInstanceProcAddr(reinterpret_cast<PFN_vkGetInstanceProcAddr>(get_proc_addr(instance, "vkGetInstanceProcAddr"))),
      GetDeviceProcAddr(reinterpret_cast<PFN_vkGetDeviceProcAddr>(get_proc_addr(instance, "vkGetDeviceProcAddr"))),
      CreateDevice(reinterpret_cast<PFN_vkCreateDevice>(get_proc_addr(instance, "vkCreateDevice"))),
      DestroyDevice(reinterpret_cast<PFN_vkDestroyDevice>(get_proc_addr(instance, "vkDestroyDevice"))),
      EnumerateDeviceExtensionProperties(reinterpret_cast<PFN_vkEnumerateDeviceExtensionProperties>(
          get_proc_addr(instance, "vkEnumerateDeviceExtensionProperties"))),
      EnumerateDeviceLayerProperties(
          reinterpret_cast<PFN_vkEnumerateDeviceLayerProperties>(get_proc_addr(instance, "vkEnumerateDeviceLayerProperties"))),
      GetDeviceQueue(reinterpret_cast<PFN_vkGetDeviceQueue>(get_proc_addr(instance, "vkGetDeviceQueue"))),
      QueueSubmit(reinterpret_cast<PFN_vkQueueSubmit>(get_proc_addr(instance, "vkQueueSubmit"))),
      QueueWaitIdle(reinterpret_cast<PFN_vkQueueWaitIdle>(get_proc_addr(instance, "vkQueueWaitIdle"))),
      DeviceWaitIdle(reinterpret_cast<PFN_vkDeviceWaitIdle>(get_proc_addr(instance, "vkDeviceWaitIdle"))),
      AllocateMemory(reinterpret_cast<PFN_vkAllocateMemory>(get_proc_addr(instance, "vkAllocateMemory"))),
      FreeMemory(reinterpret_cast<PFN_vkFreeMemory>(get_proc_addr(instance, "vkFreeMemory"))),
      MapMemory(reinterpret_cast<PFN_vkMapMemory>(get_proc_addr(instance, "vkMapMemory"))),
      UnmapMemory(reinterpret_cast<PFN_vkUnmapMemory>(get_proc_addr(instance, "vkUnmapMemory"))),
      FlushMappedMemoryRanges(
          reinterpret_cast<PFN_vkFlushMappedMemoryRanges>(get_proc_addr(instance, "vkFlushMappedMemoryRanges"))),
      InvalidateMappedMemoryRanges(
          reinterpret_cast<PFN_vkInvalidateMappedMemoryRanges>(get_proc_addr(instance, "vkInvalidateMappedMemoryRanges"))),
      GetDeviceMemoryCommitment(
          reinterpret_cast<PFN_vkGetDeviceMemoryCommitment>(get_proc_addr(instance, "vkGetDeviceMemoryCommitment"))),
      BindBufferMemory(reinterpret_cast<PFN_vkBindBufferMemory>(get_proc_addr(instance, "vkBindBufferMemory"))),
      BindImageMemory(reinterpret_cast<PFN_vkBindImageMemory>(get_proc_addr(instance, "vkBindImageMemory"))),
      GetBufferMemoryRequirements(
          reinterpret_cast<PFN_vkGetBufferMemoryRequirements>(get_proc_addr(instance, "vkGetBufferMemoryRequirements"))),
      GetImageMemoryRequirements(
          reinterpret_cast<PFN_vkGetImageMemoryRequirements>(get_proc_addr(instance, "vkGetImageMemoryRequirements"))),
      GetImageSparseMemoryRequirements(
          reinterpret_cast<PFN_vkGetImageSparseMemoryRequirements>(get_proc_addr(instance, "vkGetImageSparseMemoryRequirements"))),
      GetPhysicalDeviceSparseImageFormatProperties(reinterpret_cast<PFN_vkGetPhysicalDeviceSparseImageFormatProperties>(
          get_proc_addr(instance, "vkGetPhysicalDeviceSparseImageFormatProperties"))),
      QueueBindSparse(reinterpret_cast<PFN_vkQueueBindSparse>(get_proc_addr(instance, "vkQueueBindSparse"))),
      CreateFence(reinterpret_cast<PFN_vkCreateFence>(get_proc_addr(instance, "vkCreateFence"))),
      DestroyFence(reinterpret_cast<PFN_vkDestroyFence>(get_proc_addr(instance, "vkDestroyFence"))),
      ResetFences(reinterpret_cast<PFN_vkResetFences>(get_proc_addr(instance, "vkResetFences"))),
      GetFenceStatus(reinterpret_cast<PFN_vkGetFenceStatus>(get_proc_addr(instance, "vkGetFenceStatus"))),
      WaitForFences(reinterpret_cast<PFN_vkWaitForFences>(get_proc_addr(instance, "vkWaitForFences"))),
      CreateSemaphore(reinterpret_cast<PFN_vkCreateSemaphore>(get_proc_addr(instance, "vkCreateSemaphore"))),
      DestroySemaphore(reinterpret_cast<PFN_vkDestroySemaphore>(get_proc_addr(instance, "vkDestroySemaphore"))),
      CreateEvent(reinterpret_cast<PFN_vkCreateEvent>(get_proc_addr(instance, "vkCreateEvent"))),
      DestroyEvent(reinterpret_cast<PFN_vkDestroyEvent>(get_proc_addr(instance, "vkDestroyEvent"))),
      GetEventStatus(reinterpret_cast<PFN_vkGetEventStatus>(get_proc_addr(instance, "vkGetEventStatus"))),
      SetEvent(reinterpret_cast<PFN_vkSetEvent>(get_proc_addr(instance, "vkSetEvent"))),
      ResetEvent(reinterpret_cast<PFN_vkResetEvent>(get_proc_addr(instance, "vkResetEvent"))),
      CreateQueryPool(reinterpret_cast<PFN_vkCreateQueryPool>(get_proc_addr(instance, "vkCreateQueryPool"))),
      DestroyQueryPool(reinterpret_cast<PFN_vkDestroyQueryPool>(get_proc_addr(instance, "vkDestroyQueryPool"))),
      GetQueryPoolResults(reinterpret_cast<PFN_vkGetQueryPoolResults>(get_proc_addr(instance, "vkGetQueryPoolResults"))),
      CreateBuffer(reinterpret_cast<PFN_vkCreateBuffer>(get_proc_addr(instance, "vkCreateBuffer"))),
      DestroyBuffer(reinterpret_cast<PFN_vkDestroyBuffer>(get_proc_addr(instance, "vkDestroyBuffer"))),
      CreateBufferView(reinterpret_cast<PFN_vkCreateBufferView>(get_proc_addr(instance, "vkCreateBufferView"))),
      DestroyBufferView(reinterpret_cast<PFN_vkDestroyBufferView>(get_proc_addr(instance, "vkDestroyBufferView"))),
      CreateImage(reinterpret_cast<PFN_vkCreateImage>(get_proc_addr(instance, "vkCreateImage"))),
      DestroyImage(reinterpret_cast<PFN_vkDestroyImage>(get_proc_addr(instance, "vkDestroyImage"))),
      GetImageSubresourceLayout(
          reinterpret_cast<PFN_vkGetImageSubresourceLayout>(get_proc_addr(instance, "vkGetImageSubresourceLayout"))),
      CreateImageView(reinterpret_cast<PFN_vkCreateImageView>(get_proc_addr(instance, "vkCreateImageView"))),
      DestroyImageView(reinterpret_cast<PFN_vkDestroyImageView>(get_proc_addr(instance, "vkDestroyImageView"))),
      CreateShaderModule(reinterpret_cast<PFN_vkCreateShaderModule>(get_proc_addr(instance, "vkCreateShaderModule"))),
      DestroyShaderModule(reinterpret_cast<PFN_vkDestroyShaderModule>(get_proc_addr(instance, "vkDestroyShaderModule"))),
      CreatePipelineCache(reinterpret_cast<PFN_vkCreatePipelineCache>(get_proc_addr(instance, "vkCreatePipelineCache"))),
      DestroyPipelineCache(reinterpret_cast<PFN_vkDestroyPipelineCache>(get_proc_addr(instance, "vkDestroyPipelineCache"))),
      GetPipelineCacheData(reinterpret_cast<PFN_vkGetPipelineCacheData>(get_proc_addr(instance, "vkGetPipelineCacheData"))),
      MergePipelineCaches(reinterpret_cast<PFN_vkMergePipelineCaches>(get_proc_addr(instance, "vkMergePipelineCaches"))),
      CreateGraphicsPipelines(
          reinterpret_cast<PFN_vkCreateGraphicsPipelines>(get_proc_addr(instance, "vkCreateGraphicsPipelines"))),
      CreateComputePipelines(reinterpret_cast<PFN_vkCreateComputePipelines>(get_proc_addr(instance, "vkCreateComputePipelines"))),
      DestroyPipeline(reinterpret_cast<PFN_vkDestroyPipeline>(get_proc_addr(instance, "vkDestroyPipeline"))),
      CreatePipelineLayout(reinterpret_cast<PFN_vkCreatePipelineLayout>(get_proc_addr(instance, "vkCreatePipelineLayout"))),
      DestroyPipelineLayout(reinterpret_cast<PFN_vkDestroyPipelineLayout>(get_proc_addr(instance, "vkDestroyPipelineLayout"))),
      CreateSampler(reinterpret_cast<PFN_vkCreateSampler>(get_proc_addr(instance, "vkCreateSampler"))),
      DestroySampler(reinterpret_cast<PFN_vkDestroySampler>(get_proc_addr(instance, "vkDestroySampler"))),
      CreateDescriptorSetLayout(
          reinterpret_cast<PFN_vkCreateDescriptorSetLayout>(get_proc_addr(instance, "vkCreateDescriptorSetLayout"))),
      DestroyDescriptorSetLayout(
          reinterpret_cast<PFN_vkDestroyDescriptorSetLayout>(get_proc_addr(instance, "vkDestroyDescriptorSetLayout"))),
      CreateDescriptorPool(reinterpret_cast<PFN_vkCreateDescriptorPool>(get_proc_addr(instance, "vkCreateDescriptorPool"))),
      DestroyDescriptorPool(reinterpret_cast<PFN_vkDestroyDescriptorPool>(get_proc_addr(instance, "vkDestroyDescriptorPool"))),
      ResetDescriptorPool(reinterpret_cast<PFN_vkResetDescriptorPool>(get_proc_addr(instance, "vkResetDescriptorPool"))),
      AllocateDescriptorSets(reinterpret_cast<PFN_vkAllocateDescriptorSets>(get_proc_addr(instance, "vkAllocateDescriptorSets"))),
      FreeDescriptorSets(reinterpret_cast<PFN_vkFreeDescriptorSets>(get_proc_addr(instance, "vkFreeDescriptorSets"))),
      UpdateDescriptorSets(reinterpret_cast<PFN_vkUpdateDescriptorSets>(get_proc_addr(instance, "vkUpdateDescriptorSets"))),
      CreateFramebuffer(reinterpret_cast<PFN_vkCreateFramebuffer>(get_proc_addr(instance, "vkCreateFramebuffer"))),
      DestroyFramebuffer(reinterpret_cast<PFN_vkDestroyFramebuffer>(get_proc_addr(instance, "vkDestroyFramebuffer"))),
      CreateRenderPass(reinterpret_cast<PFN_vkCreateRenderPass>(get_proc_addr(instance, "vkCreateRenderPass"))),
      DestroyRenderPass(reinterpret_cast<PFN_vkDestroyRenderPass>(get_proc_addr(instance, "vkDestroyRenderPass"))),
      GetRenderAreaGranularity(
          reinterpret_cast<PFN_vkGetRenderAreaGranularity>(get_proc_addr(instance, "vkGetRenderAreaGranularity"))),
      CreateCommandPool(reinterpret_cast<PFN_vkCreateCommandPool>(get_proc_addr(instance, "vkCreateCommandPool"))),
      DestroyCommandPool(reinterpret_cast<PFN_vkDestroyCommandPool>(get_proc_addr(instance, "vkDestroyCommandPool"))),
      ResetCommandPool(reinterpret_cast<PFN_vkResetCommandPool>(get_proc_addr(instance, "vkResetCommandPool"))),
      AllocateCommandBuffers(reinterpret_cast<PFN_vkAllocateCommandBuffers>(get_proc_addr(instance, "vkAllocateCommandBuffers"))),
      FreeCommandBuffers(reinterpret_cast<PFN_vkFreeCommandBuffers>(get_proc_addr(instance, "vkFreeCommandBuffers"))),
      BeginCommandBuffer(reinterpret_cast<PFN_vkBeginCommandBuffer>(get_proc_addr(instance, "vkBeginCommandBuffer"))),
      EndCommandBuffer(reinterpret_cast<PFN_vkEndCommandBuffer>(get_proc_addr(instance, "vkEndCommandBuffer"))),
      ResetCommandBuffer(reinterpret_cast<PFN_vkResetCommandBuffer>(get_proc_addr(instance, "vkResetCommandBuffer"))),
      CmdBindPipeline(reinterpret_cast<PFN_vkCmdBindPipeline>(get_proc_addr(instance, "vkCmdBindPipeline"))),
      CmdSetViewport(reinterpret_cast<PFN_vkCmdSetViewport>(get_proc_addr(instance, "vkCmdSetViewport"))),
      CmdSetScissor(reinterpret_cast<PFN_vkCmdSetScissor>(get_proc_addr(instance, "vkCmdSetScissor"))),
      CmdSetLineWidth(reinterpret_cast<PFN_vkCmdSetLineWidth>(get_proc_addr(instance, "vkCmdSetLineWidth"))),
      CmdSetDepthBias(reinterpret_cast<PFN_vkCmdSetDepthBias>(get_proc_addr(instance, "vkCmdSetDepthBias"))),
      CmdSetBlendConstants(reinterpret_cast<PFN_vkCmdSetBlendConstants>(get_proc_addr(instance, "vkCmdSetBlendConstants"))),
      CmdSetDepthBounds(reinterpret_cast<PFN_vkCmdSetDepthBounds>(get_proc_addr(instance, "vkCmdSetDepthBounds"))),
      CmdSetStencilCompareMask(
          reinterpret_cast<PFN_vkCmdSetStencilCompareMask>(get_proc_addr(instance, "vkCmdSetStencilCompareMask"))),
      CmdSetStencilWriteMask(reinterpret_cast<PFN_vkCmdSetStencilWriteMask>(get_proc_addr(instance, "vkCmdSetStencilWriteMask"))),
      CmdSetStencilReference(reinterpret_cast<PFN_vkCmdSetStencilReference>(get_proc_addr(instance, "vkCmdSetStencilReference"))),
      CmdBindDescriptorSets(reinterpret_cast<PFN_vkCmdBindDescriptorSets>(get_proc_addr(instance, "vkCmdBindDescriptorSets"))),
      CmdBindIndexBuffer(reinterpret_cast<PFN_vkCmdBindIndexBuffer>(get_proc_addr(instance, "vkCmdBindIndexBuffer"))),
      CmdBindVertexBuffers(reinterpret_cast<PFN_vkCmdBindVertexBuffers>(get_proc_addr(instance, "vkCmdBindVertexBuffers"))),
      CmdDraw(reinterpret_cast<PFN_vkCmdDraw>(get_proc_addr(instance, "vkCmdDraw"))),
      CmdDrawIndexed(reinterpret_cast<PFN_vkCmdDrawIndexed>(get_proc_addr(instance, "vkCmdDrawIndexed"))),
      CmdDrawIndirect(reinterpret_cast<PFN_vkCmdDrawIndirect>(get_proc_addr(instance, "vkCmdDrawIndirect"))),
      CmdDrawIndexedIndirect(reinterpret_cast<PFN_vkCmdDrawIndexedIndirect>(get_proc_addr(instance, "vkCmdDrawIndexedIndirect"))),
      CmdDispatch(reinterpret_cast<PFN_vkCmdDispatch>(get_proc_addr(instance, "vkCmdDispatch"))),
      CmdDispatchIndirect(reinterpret_cast<PFN_vkCmdDispatchIndirect>(get_proc_addr(instance, "vkCmdDispatchIndirect"))),
      CmdCopyBuffer(reinterpret_cast<PFN_vkCmdCopyBuffer>(get_proc_addr(instance, "vkCmdCopyBuffer"))),
      CmdCopyImage(reinterpret_cast<PFN_vkCmdCopyImage>(get_proc_addr(instance, "vkCmdCopyImage"))),
      CmdBlitImage(reinterpret_cast<PFN_vkCmdBlitImage>(get_proc_addr(instance, "vkCmdBlitImage"))),
      CmdCopyBufferToImage(reinterpret_cast<PFN_vkCmdCopyBufferToImage>(get_proc_addr(instance, "vkCmdCopyBufferToImage"))),
      CmdCopyImageToBuffer(reinterpret_cast<PFN_vkCmdCopyImageToBuffer>(get_proc_addr(instance, "vkCmdCopyImageToBuffer"))),
      CmdUpdateBuffer(reinterpret_cast<PFN_vkCmdUpdateBuffer>(get_proc_addr(instance, "vkCmdUpdateBuffer"))),
      CmdFillBuffer(reinterpret_cast<PFN_vkCmdFillBuffer>(get_proc_addr(instance, "vkCmdFillBuffer"))),
      CmdClearColorImage(reinterpret_cast<PFN_vkCmdClearColorImage>(get_proc_addr(instance, "vkCmdClearColorImage"))),
      CmdClearDepthStencilImage(
          reinterpret_cast<PFN_vkCmdClearDepthStencilImage>(get_proc_addr(instance, "vkCmdClearDepthStencilImage"))),
      CmdClearAttachments(reinterpret_cast<PFN_vkCmdClearAttachments>(get_proc_addr(instance, "vkCmdClearAttachments"))),
      CmdResolveImage(reinterpret_cast<PFN_vkCmdResolveImage>(get_proc_addr(instance, "vkCmdResolveImage"))),
      CmdSetEvent(reinterpret_cast<PFN_vkCmdSetEvent>(get_proc_addr(instance, "vkCmdSetEvent"))),
      CmdResetEvent(reinterpret_cast<PFN_vkCmdResetEvent>(get_proc_addr(instance, "vkCmdResetEvent"))),
      CmdWaitEvents(reinterpret_cast<PFN_vkCmdWaitEvents>(get_proc_addr(instance, "vkCmdWaitEvents"))),
      CmdPipelineBarrier(reinterpret_cast<PFN_vkCmdPipelineBarrier>(get_proc_addr(instance, "vkCmdPipelineBarrier"))),
      CmdBeginQuery(reinterpret_cast<PFN_vkCmdBeginQuery>(get_proc_addr(instance, "vkCmdBeginQuery"))),
      CmdEndQuery(reinterpret_cast<PFN_vkCmdEndQuery>(get_proc_addr(instance, "vkCmdEndQuery"))),
      CmdResetQueryPool(reinterpret_cast<PFN_vkCmdResetQueryPool>(get_proc_addr(instance, "vkCmdResetQueryPool"))),
      CmdWriteTimestamp(reinterpret_cast<PFN_vkCmdWriteTimestamp>(get_proc_addr(instance, "vkCmdWriteTimestamp"))),
      CmdCopyQueryPoolResults(
          reinterpret_cast<PFN_vkCmdCopyQueryPoolResults>(get_proc_addr(instance, "vkCmdCopyQueryPoolResults"))),
      CmdPushConstants(reinterpret_cast<PFN_vkCmdPushConstants>(get_proc_addr(instance, "vkCmdPushConstants"))),
      CmdBeginRenderPass(reinterpret_cast<PFN_vkCmdBeginRenderPass>(get_proc_addr(instance, "vkCmdBeginRenderPass"))),
      CmdNextSubpass(reinterpret_cast<PFN_vkCmdNextSubpass>(get_proc_addr(instance, "vkCmdNextSubpass"))),
      CmdEndRenderPass(reinterpret_cast<PFN_vkCmdEndRenderPass>(get_proc_addr(instance, "vkCmdEndRenderPass"))),
      CmdExecuteCommands(reinterpret_cast<PFN_vkCmdExecuteCommands>(get_proc_addr(instance, "vkCmdExecuteCommands"))),
      BindBufferMemory2(reinterpret_cast<PFN_vkBindBufferMemory2>(get_proc_addr(instance, "vkBindBufferMemory2"))),
      BindImageMemory2(reinterpret_cast<PFN_vkBindImageMemory2>(get_proc_addr(instance, "vkBindImageMemory2"))),
      GetDeviceGroupPeerMemoryFeatures(
          reinterpret_cast<PFN_vkGetDeviceGroupPeerMemoryFeatures>(get_proc_addr(instance, "vkGetDeviceGroupPeerMemoryFeatures"))),
      CmdSetDeviceMask(reinterpret_cast<PFN_vkCmdSetDeviceMask>(get_proc_addr(instance, "vkCmdSetDeviceMask"))),
      CmdDispatchBase(reinterpret_cast<PFN_vkCmdDispatchBase>(get_proc_addr(instance, "vkCmdDispatchBase"))),
      EnumeratePhysicalDeviceGroups(
          reinterpret_cast<PFN_vkEnumeratePhysicalDeviceGroups>(get_proc_addr(instance, "vkEnumeratePhysicalDeviceGroups"))),
      GetImageMemoryRequirements2(
          reinterpret_cast<PFN_vkGetImageMemoryRequirements2>(get_proc_addr(instance, "vkGetImageMemoryRequirements2"))),
      GetBufferMemoryRequirements2(
          reinterpret_cast<PFN_vkGetBufferMemoryRequirements2>(get_proc_addr(instance, "vkGetBufferMemoryRequirements2"))),
      GetImageSparseMemoryRequirements2(reinterpret_cast<PFN_vkGetImageSparseMemoryRequirements2>(
          get_proc_addr(instance, "vkGetImageSparseMemoryRequirements2"))),
      GetPhysicalDeviceFeatures2(
          reinterpret_cast<PFN_vkGetPhysicalDeviceFeatures2>(get_proc_addr(instance, "vkGetPhysicalDeviceFeatures2"))),
      GetPhysicalDeviceProperties2(
          reinterpret_cast<PFN_vkGetPhysicalDeviceProperties2>(get_proc_addr(instance, "vkGetPhysicalDeviceProperties2"))),
      GetPhysicalDeviceFormatProperties2(reinterpret_cast<PFN_vkGetPhysicalDeviceFormatProperties2>(
          get_proc_addr(instance, "vkGetPhysicalDeviceFormatProperties2"))),
      GetPhysicalDeviceImageFormatProperties2(reinterpret_cast<PFN_vkGetPhysicalDeviceImageFormatProperties2>(
          get_proc_addr(instance, "vkGetPhysicalDeviceImageFormatProperties2"))),
      GetPhysicalDeviceQueueFamilyProperties2(reinterpret_cast<PFN_vkGetPhysicalDeviceQueueFamilyProperties2>(
          get_proc_addr(instance, "vkGetPhysicalDeviceQueueFamilyProperties2"))),
      GetPhysicalDeviceMemoryProperties2(reinterpret_cast<PFN_vkGetPhysicalDeviceMemoryProperties2>(
          get_proc_addr(instance, "vkGetPhysicalDeviceMemoryProperties2"))),
      GetPhysicalDeviceSparseImageFormatProperties2(reinterpret_cast<PFN_vkGetPhysicalDeviceSparseImageFormatProperties2>(
          get_proc_addr(instance, "vkGetPhysicalDeviceSparseImageFormatProperties2"))),
      TrimCommandPool(reinterpret_cast<PFN_vkTrimCommandPool>(get_proc_addr(instance, "vkTrimCommandPool"))),
      GetDeviceQueue2(reinterpret_cast<PFN_vkGetDeviceQueue2>(get_proc_addr(instance, "vkGetDeviceQueue2"))),
      CreateSamplerYcbcrConversion(
          reinterpret_cast<PFN_vkCreateSamplerYcbcrConversion>(get_proc_addr(instance, "vkCreateSamplerYcbcrConversion"))),
      DestroySamplerYcbcrConversion(
          reinterpret_cast<PFN_vkDestroySamplerYcbcrConversion>(get_proc_addr(instance, "vkDestroySamplerYcbcrConversion"))),
      CreateDescriptorUpdateTemplate(
          reinterpret_cast<PFN_vkCreateDescriptorUpdateTemplate>(get_proc_addr(instance, "vkCreateDescriptorUpdateTemplate"))),
      DestroyDescriptorUpdateTemplate(
          reinterpret_cast<PFN_vkDestroyDescriptorUpdateTemplate>(get_proc_addr(instance, "vkDestroyDescriptorUpdateTemplate"))),
      UpdateDescriptorSetWithTemplate(
          reinterpret_cast<PFN_vkUpdateDescriptorSetWithTemplate>(get_proc_addr(instance, "vkUpdateDescriptorSetWithTemplate"))),
      GetPhysicalDeviceExternalBufferProperties(reinterpret_cast<PFN_vkGetPhysicalDeviceExternalBufferProperties>(
          get_proc_addr(instance, "vkGetPhysicalDeviceExternalBufferProperties"))),
      GetPhysicalDeviceExternalFenceProperties(reinterpret_cast<PFN_vkGetPhysicalDeviceExternalFenceProperties>(
          get_proc_addr(instance, "vkGetPhysicalDeviceExternalFenceProperties"))),
      GetPhysicalDeviceExternalSemaphoreProperties(reinterpret_cast<PFN_vkGetPhysicalDeviceExternalSemaphoreProperties>(
          get_proc_addr(instance, "vkGetPhysicalDeviceExternalSemaphoreProperties"))),
      GetDescriptorSetLayoutSupport(
          reinterpret_cast<PFN_vkGetDescriptorSetLayoutSupport>(get_proc_addr(instance, "vkGetDescriptorSetLayoutSupport"))),
      CmdDrawIndirectCount(reinterpret_cast<PFN_vkCmdDrawIndirectCount>(get_proc_addr(instance, "vkCmdDrawIndirectCount"))),
      CmdDrawIndexedIndirectCount(
          reinterpret_cast<PFN_vkCmdDrawIndexedIndirectCount>(get_proc_addr(instance, "vkCmdDrawIndexedIndirectCount"))),
      CreateRenderPass2(reinterpret_cast<PFN_vkCreateRenderPass2>(get_proc_addr(instance, "vkCreateRenderPass2"))),
      CmdBeginRenderPass2(reinterpret_cast<PFN_vkCmdBeginRenderPass2>(get_proc_addr(instance, "vkCmdBeginRenderPass2"))),
      CmdNextSubpass2(reinterpret_cast<PFN_vkCmdNextSubpass2>(get_proc_addr(instance, "vkCmdNextSubpass2"))),
      CmdEndRenderPass2(reinterpret_cast<PFN_vkCmdEndRenderPass2>(get_proc_addr(instance, "vkCmdEndRenderPass2"))),
      ResetQueryPool(reinterpret_cast<PFN_vkResetQueryPool>(get_proc_addr(instance, "vkResetQueryPool"))),
      GetSemaphoreCounterValue(
          reinterpret_cast<PFN_vkGetSemaphoreCounterValue>(get_proc_addr(instance, "vkGetSemaphoreCounterValue"))),
      WaitSemaphores(reinterpret_cast<PFN_vkWaitSemaphores>(get_proc_addr(instance, "vkWaitSemaphores"))),
      SignalSemaphore(reinterpret_cast<PFN_vkSignalSemaphore>(get_proc_addr(instance, "vkSignalSemaphore"))),
      GetBufferDeviceAddress(reinterpret_cast<PFN_vkGetBufferDeviceAddress>(get_proc_addr(instance, "vkGetBufferDeviceAddress"))),
      GetBufferOpaqueCaptureAddress(
          reinterpret_cast<PFN_vkGetBufferOpaqueCaptureAddress>(get_proc_addr(instance, "vkGetBufferOpaqueCaptureAddress"))),
      GetDeviceMemoryOpaqueCaptureAddress(reinterpret_cast<PFN_vkGetDeviceMemoryOpaqueCaptureAddress>(
          get_proc_addr(instance, "vkGetDeviceMemoryOpaqueCaptureAddress"))),
      GetPhysicalDeviceToolProperties(
          reinterpret_cast<PFN_vkGetPhysicalDeviceToolProperties>(get_proc_addr(instance, "vkGetPhysicalDeviceToolProperties"))),
      CreatePrivateDataSlot(reinterpret_cast<PFN_vkCreatePrivateDataSlot>(get_proc_addr(instance, "vkCreatePrivateDataSlot"))),
      DestroyPrivateDataSlot(reinterpret_cast<PFN_vkDestroyPrivateDataSlot>(get_proc_addr(instance, "vkDestroyPrivateDataSlot"))),
      SetPrivateData(reinterpret_cast<PFN_vkSetPrivateData>(get_proc_addr(instance, "vkSetPrivateData"))),
      GetPrivateData(reinterpret_cast<PFN_vkGetPrivateData>(get_proc_addr(instance, "vkGetPrivateData"))),
      CmdSetEvent2(reinterpret_cast<PFN_vkCmdSetEvent2>(get_proc_addr(instance, "vkCmdSetEvent2"))),
      CmdResetEvent2(reinterpret_cast<PFN_vkCmdResetEvent2>(get_proc_addr(instance, "vkCmdResetEvent2"))),
      CmdWaitEvents2(reinterpret_cast<PFN_vkCmdWaitEvents2>(get_proc_addr(instance, "vkCmdWaitEvents2"))),
      CmdPipelineBarrier2(reinterpret_cast<PFN_vkCmdPipelineBarrier2>(get_proc_addr(instance, "vkCmdPipelineBarrier2"))),
      CmdWriteTimestamp2(reinterpret_cast<PFN_vkCmdWriteTimestamp2>(get_proc_addr(instance, "vkCmdWriteTimestamp2"))),
      QueueSubmit2(reinterpret_cast<PFN_vkQueueSubmit2>(get_proc_addr(instance, "vkQueueSubmit2"))),
      CmdCopyBuffer2(reinterpret_cast<PFN_vkCmdCopyBuffer2>(get_proc_addr(instance, "vkCmdCopyBuffer2"))),
      CmdCopyImage2(reinterpret_cast<PFN_vkCmdCopyImage2>(get_proc_addr(instance, "vkCmdCopyImage2"))),
      CmdCopyBufferToImage2(reinterpret_cast<PFN_vkCmdCopyBufferToImage2>(get_proc_addr(instance, "vkCmdCopyBufferToImage2"))),
      CmdCopyImageToBuffer2(reinterpret_cast<PFN_vkCmdCopyImageToBuffer2>(get_proc_addr(instance, "vkCmdCopyImageToBuffer2"))),
      CmdBlitImage2(reinterpret_cast<PFN_vkCmdBlitImage2>(get_proc_addr(instance, "vkCmdBlitImage2"))),
      CmdResolveImage2(reinterpret_cast<PFN_vkCmdResolveImage2>(get_proc_addr(instance, "vkCmdResolveImage2"))),
      CmdBeginRendering(reinterpret_cast<PFN_vkCmdBeginRendering>(get_proc_addr(instance, "vkCmdBeginRendering"))),
      CmdEndRendering(reinterpret_cast<PFN_vkCmdEndRendering>(get_proc_addr(instance, "vkCmdEndRendering"))),
      CmdSetCullMode(reinterpret_cast<PFN_vkCmdSetCullMode>(get_proc_addr(instance, "vkCmdSetCullMode"))),
      CmdSetFrontFace(reinterpret_cast<PFN_vkCmdSetFrontFace>(get_proc_addr(instance, "vkCmdSetFrontFace"))),
      CmdSetPrimitiveTopology(
          reinterpret_cast<PFN_vkCmdSetPrimitiveTopology>(get_proc_addr(instance, "vkCmdSetPrimitiveTopology"))),
      CmdSetViewportWithCount(
          reinterpret_cast<PFN_vkCmdSetViewportWithCount>(get_proc_addr(instance, "vkCmdSetViewportWithCount"))),
      CmdSetScissorWithCount(reinterpret_cast<PFN_vkCmdSetScissorWithCount>(get_proc_addr(instance, "vkCmdSetScissorWithCount"))),
      CmdBindVertexBuffers2(reinterpret_cast<PFN_vkCmdBindVertexBuffers2>(get_proc_addr(instance, "vkCmdBindVertexBuffers2"))),
      CmdSetDepthTestEnable(reinterpret_cast<PFN_vkCmdSetDepthTestEnable>(get_proc_addr(instance, "vkCmdSetDepthTestEnable"))),
      CmdSetDepthWriteEnable(reinterpret_cast<PFN_vkCmdSetDepthWriteEnable>(get_proc_addr(instance, "vkCmdSetDepthWriteEnable"))),
      CmdSetDepthCompareOp(reinterpret_cast<PFN_vkCmdSetDepthCompareOp>(get_proc_addr(instance, "vkCmdSetDepthCompareOp"))),
      CmdSetDepthBoundsTestEnable(
          reinterpret_cast<PFN_vkCmdSetDepthBoundsTestEnable>(get_proc_addr(instance, "vkCmdSetDepthBoundsTestEnable"))),
      CmdSetStencilTestEnable(
          reinterpret_cast<PFN_vkCmdSetStencilTestEnable>(get_proc_addr(instance, "vkCmdSetStencilTestEnable"))),
      CmdSetStencilOp(reinterpret_cast<PFN_vkCmdSetStencilOp>(get_proc_addr(instance, "vkCmdSetStencilOp"))),
      CmdSetRasterizerDiscardEnable(
          reinterpret_cast<PFN_vkCmdSetRasterizerDiscardEnable>(get_proc_addr(instance, "vkCmdSetRasterizerDiscardEnable"))),
      CmdSetDepthBiasEnable(reinterpret_cast<PFN_vkCmdSetDepthBiasEnable>(get_proc_addr(instance, "vkCmdSetDepthBiasEnable"))),
      CmdSetPrimitiveRestartEnable(
          reinterpret_cast<PFN_vkCmdSetPrimitiveRestartEnable>(get_proc_addr(instance, "vkCmdSetPrimitiveRestartEnable"))),
      GetDeviceBufferMemoryRequirements(reinterpret_cast<PFN_vkGetDeviceBufferMemoryRequirements>(
          get_proc_addr(instance, "vkGetDeviceBufferMemoryRequirements"))),
      GetDeviceImageMemoryRequirements(
          reinterpret_cast<PFN_vkGetDeviceImageMemoryRequirements>(get_proc_addr(instance, "vkGetDeviceImageMemoryRequirements"))),
      GetDeviceImageSparseMemoryRequirements(reinterpret_cast<PFN_vkGetDeviceImageSparseMemoryRequirements>(
          get_proc_addr(instance, "vkGetDeviceImageSparseMemoryRequirements"))),
      CmdSetLineStipple(reinterpret_cast<PFN_vkCmdSetLineStipple>(get_proc_addr(instance, "vkCmdSetLineStipple"))),
      MapMemory2(reinterpret_cast<PFN_vkMapMemory2>(get_proc_addr(instance, "vkMapMemory2"))),
      UnmapMemory2(reinterpret_cast<PFN_vkUnmapMemory2>(get_proc_addr(instance, "vkUnmapMemory2"))),
      CmdBindIndexBuffer2(reinterpret_cast<PFN_vkCmdBindIndexBuffer2>(get_proc_addr(instance, "vkCmdBindIndexBuffer2"))),
      GetRenderingAreaGranularity(
          reinterpret_cast<PFN_vkGetRenderingAreaGranularity>(get_proc_addr(instance, "vkGetRenderingAreaGranularity"))),
      GetDeviceImageSubresourceLayout(
          reinterpret_cast<PFN_vkGetDeviceImageSubresourceLayout>(get_proc_addr(instance, "vkGetDeviceImageSubresourceLayout"))),
      GetImageSubresourceLayout2(
          reinterpret_cast<PFN_vkGetImageSubresourceLayout2>(get_proc_addr(instance, "vkGetImageSubresourceLayout2"))),
      CmdPushDescriptorSet(reinterpret_cast<PFN_vkCmdPushDescriptorSet>(get_proc_addr(instance, "vkCmdPushDescriptorSet"))),
      CmdPushDescriptorSetWithTemplate(
          reinterpret_cast<PFN_vkCmdPushDescriptorSetWithTemplate>(get_proc_addr(instance, "vkCmdPushDescriptorSetWithTemplate"))),
      CmdSetRenderingAttachmentLocations(reinterpret_cast<PFN_vkCmdSetRenderingAttachmentLocations>(
          get_proc_addr(instance, "vkCmdSetRenderingAttachmentLocations"))),
      CmdSetRenderingInputAttachmentIndices(reinterpret_cast<PFN_vkCmdSetRenderingInputAttachmentIndices>(
          get_proc_addr(instance, "vkCmdSetRenderingInputAttachmentIndices"))),
      CmdBindDescriptorSets2(reinterpret_cast<PFN_vkCmdBindDescriptorSets2>(get_proc_addr(instance, "vkCmdBindDescriptorSets2"))),
      CmdPushConstants2(reinterpret_cast<PFN_vkCmdPushConstants2>(get_proc_addr(instance, "vkCmdPushConstants2"))),
      CmdPushDescriptorSet2(reinterpret_cast<PFN_vkCmdPushDescriptorSet2>(get_proc_addr(instance, "vkCmdPushDescriptorSet2"))),
      CmdPushDescriptorSetWithTemplate2(reinterpret_cast<PFN_vkCmdPushDescriptorSetWithTemplate2>(
          get_proc_addr(instance, "vkCmdPushDescriptorSetWithTemplate2"))),
      CopyMemoryToImage(reinterpret_cast<PFN_vkCopyMemoryToImage>(get_proc_addr(instance, "vkCopyMemoryToImage"))),
      CopyImageToMemory(reinterpret_cast<PFN_vkCopyImageToMemory>(get_proc_addr(instance, "vkCopyImageToMemory"))),
      CopyImageToImage(reinterpret_cast<PFN_vkCopyImageToImage>(get_proc_addr(instance, "vkCopyImageToImage"))),
      TransitionImageLayout(reinterpret_cast<PFN_vkTransitionImageLayout>(get_proc_addr(instance, "vkTransitionImageLayout"))),
      DestroySurfaceKHR(reinterpret_cast<PFN_vkDestroySurfaceKHR>(get_proc_addr(instance, "vkDestroySurfaceKHR"))),
      GetPhysicalDeviceSurfaceSupportKHR(reinterpret_cast<PFN_vkGetPhysicalDeviceSurfaceSupportKHR>(
          get_proc_addr(instance, "vkGetPhysicalDeviceSurfaceSupportKHR"))),
      GetPhysicalDeviceSurfaceCapabilitiesKHR(reinterpret_cast<PFN_vkGetPhysicalDeviceSurfaceCapabilitiesKHR>(
          get_proc_addr(instance, "vkGetPhysicalDeviceSurfaceCapabilitiesKHR"))),
      GetPhysicalDeviceSurfaceFormatsKHR(reinterpret_cast<PFN_vkGetPhysicalDeviceSurfaceFormatsKHR>(
          get_proc_addr(instance, "vkGetPhysicalDeviceSurfaceFormatsKHR"))),
      GetPhysicalDeviceSurfacePresentModesKHR(reinterpret_cast<PFN_vkGetPhysicalDeviceSurfacePresentModesKHR>(
          get_proc_addr(instance, "vkGetPhysicalDeviceSurfacePresentModesKHR"))),
      CreateSwapchainKHR(reinterpret_cast<PFN_vkCreateSwapchainKHR>(get_proc_addr(instance, "vkCreateSwapchainKHR"))),
      DestroySwapchainKHR(reinterpret_cast<PFN_vkDestroySwapchainKHR>(get_proc_addr(instance, "vkDestroySwapchainKHR"))),
      GetSwapchainImagesKHR(reinterpret_cast<PFN_vkGetSwapchainImagesKHR>(get_proc_addr(instance, "vkGetSwapchainImagesKHR"))),
      AcquireNextImageKHR(reinterpret_cast<PFN_vkAcquireNextImageKHR>(get_proc_addr(instance, "vkAcquireNextImageKHR"))),
      QueuePresentKHR(reinterpret_cast<PFN_vkQueuePresentKHR>(get_proc_addr(instance, "vkQueuePresentKHR"))),
      GetDeviceGroupPresentCapabilitiesKHR(reinterpret_cast<PFN_vkGetDeviceGroupPresentCapabilitiesKHR>(
          get_proc_addr(instance, "vkGetDeviceGroupPresentCapabilitiesKHR"))),
      GetDeviceGroupSurfacePresentModesKHR(reinterpret_cast<PFN_vkGetDeviceGroupSurfacePresentModesKHR>(
          get_proc_addr(instance, "vkGetDeviceGroupSurfacePresentModesKHR"))),
      GetPhysicalDevicePresentRectanglesKHR(reinterpret_cast<PFN_vkGetPhysicalDevicePresentRectanglesKHR>(
          get_proc_addr(instance, "vkGetPhysicalDevicePresentRectanglesKHR"))),
      AcquireNextImage2KHR(reinterpret_cast<PFN_vkAcquireNextImage2KHR>(get_proc_addr(instance, "vkAcquireNextImage2KHR"))),
      GetPhysicalDeviceDisplayPropertiesKHR(reinterpret_cast<PFN_vkGetPhysicalDeviceDisplayPropertiesKHR>(
          get_proc_addr(instance, "vkGetPhysicalDeviceDisplayPropertiesKHR"))),
      GetPhysicalDeviceDisplayPlanePropertiesKHR(reinterpret_cast<PFN_vkGetPhysicalDeviceDisplayPlanePropertiesKHR>(
          get_proc_addr(instance, "vkGetPhysicalDeviceDisplayPlanePropertiesKHR"))),
      GetDisplayPlaneSupportedDisplaysKHR(reinterpret_cast<PFN_vkGetDisplayPlaneSupportedDisplaysKHR>(
          get_proc_addr(instance, "vkGetDisplayPlaneSupportedDisplaysKHR"))),
      GetDisplayModePropertiesKHR(
          reinterpret_cast<PFN_vkGetDisplayModePropertiesKHR>(get_proc_addr(instance, "vkGetDisplayModePropertiesKHR"))),
      CreateDisplayModeKHR(reinterpret_cast<PFN_vkCreateDisplayModeKHR>(get_proc_addr(instance, "vkCreateDisplayModeKHR"))),
      GetDisplayPlaneCapabilitiesKHR(
          reinterpret_cast<PFN_vkGetDisplayPlaneCapabilitiesKHR>(get_proc_addr(instance, "vkGetDisplayPlaneCapabilitiesKHR"))),
      CreateDisplayPlaneSurfaceKHR(
          reinterpret_cast<PFN_vkCreateDisplayPlaneSurfaceKHR>(get_proc_addr(instance, "vkCreateDisplayPlaneSurfaceKHR"))),
      CreateSharedSwapchainsKHR(
          reinterpret_cast<PFN_vkCreateSharedSwapchainsKHR>(get_proc_addr(instance, "vkCreateSharedSwapchainsKHR"))),
#ifdef VK_USE_PLATFORM_XLIB_KHR
      CreateXlibSurfaceKHR(reinterpret_cast<PFN_vkCreateXlibSurfaceKHR>(get_proc_addr(instance, "vkCreateXlibSurfaceKHR"))),
      GetPhysicalDeviceXlibPresentationSupportKHR(reinterpret_cast<PFN_vkGetPhysicalDeviceXlibPresentationSupportKHR>(
          get_proc_addr(instance, "vkGetPhysicalDeviceXlibPresentationSupportKHR"))),
#endif  // VK_USE_PLATFORM_XLIB_KHR
#ifdef VK_USE_PLATFORM_XCB_KHR
      CreateXcbSurfaceKHR(reinterpret_cast<PFN_vkCreateXcbSurfaceKHR>(get_proc_addr(instance, "vkCreateXcbSurfaceKHR"))),
      GetPhysicalDeviceXcbPresentationSupportKHR(reinterpret_cast<PFN_vkGetPhysicalDeviceXcbPresentationSupportKHR>(
          get_proc_addr(instance, "vkGetPhysicalDeviceXcbPresentationSupportKHR"))),
#endif  // VK_USE_PLATFORM_XCB_KHR
#ifdef VK_USE_PLATFORM_WAYLAND_KHR
      CreateWaylandSurfaceKHR(
          reinterpret_cast<PFN_vkCreateWaylandSurfaceKHR>(get_proc_addr(instance, "vkCreateWaylandSurfaceKHR"))),
      GetPhysicalDeviceWaylandPresentationSupportKHR(reinterpret_cast<PFN_vkGetPhysicalDeviceWaylandPresentationSupportKHR>(
          get_proc_addr(instance, "vkGetPhysicalDeviceWaylandPresentationSupportKHR"))),
#endif  // VK_USE_PLATFORM_WAYLAND_KHR
#ifdef VK_USE_PLATFORM_ANDROID_KHR
      CreateAndroidSurfaceKHR(
          reinterpret_cast<PFN_vkCreateAndroidSurfaceKHR>(get_proc_addr(instance, "vkCreateAndroidSurfaceKHR"))),
#endif  // VK_USE_PLATFORM_ANDROID_KHR
#ifdef VK_USE_PLATFORM_WIN32_KHR
      CreateWin32SurfaceKHR(reinterpret_cast<PFN_vkCreateWin32SurfaceKHR>(get_proc_addr(instance, "vkCreateWin32SurfaceKHR"))),
      GetPhysicalDeviceWin32PresentationSupportKHR(reinterpret_cast<PFN_vkGetPhysicalDeviceWin32PresentationSupportKHR>(
          get_proc_addr(instance, "vkGetPhysicalDeviceWin32PresentationSupportKHR"))),
#endif  // VK_USE_PLATFORM_WIN32_KHR
      GetPhysicalDeviceVideoCapabilitiesKHR(reinterpret_cast<PFN_vkGetPhysicalDeviceVideoCapabilitiesKHR>(
          get_proc_addr(instance, "vkGetPhysicalDeviceVideoCapabilitiesKHR"))),
      GetPhysicalDeviceVideoFormatPropertiesKHR(reinterpret_cast<PFN_vkGetPhysicalDeviceVideoFormatPropertiesKHR>(
          get_proc_addr(instance, "vkGetPhysicalDeviceVideoFormatPropertiesKHR"))),
      CreateVideoSessionKHR(reinterpret_cast<PFN_vkCreateVideoSessionKHR>(get_proc_addr(instance, "vkCreateVideoSessionKHR"))),
      DestroyVideoSessionKHR(reinterpret_cast<PFN_vkDestroyVideoSessionKHR>(get_proc_addr(instance, "vkDestroyVideoSessionKHR"))),
      GetVideoSessionMemoryRequirementsKHR(reinterpret_cast<PFN_vkGetVideoSessionMemoryRequirementsKHR>(
          get_proc_addr(instance, "vkGetVideoSessionMemoryRequirementsKHR"))),
      BindVideoSessionMemoryKHR(
          reinterpret_cast<PFN_vkBindVideoSessionMemoryKHR>(get_proc_addr(instance, "vkBindVideoSessionMemoryKHR"))),
      CreateVideoSessionParametersKHR(
          reinterpret_cast<PFN_vkCreateVideoSessionParametersKHR>(get_proc_addr(instance, "vkCreateVideoSessionParametersKHR"))),
      UpdateVideoSessionParametersKHR(
          reinterpret_cast<PFN_vkUpdateVideoSessionParametersKHR>(get_proc_addr(instance, "vkUpdateVideoSessionParametersKHR"))),
      DestroyVideoSessionParametersKHR(
          reinterpret_cast<PFN_vkDestroyVideoSessionParametersKHR>(get_proc_addr(instance, "vkDestroyVideoSessionParametersKHR"))),
      CmdBeginVideoCodingKHR(reinterpret_cast<PFN_vkCmdBeginVideoCodingKHR>(get_proc_addr(instance, "vkCmdBeginVideoCodingKHR"))),
      CmdEndVideoCodingKHR(reinterpret_cast<PFN_vkCmdEndVideoCodingKHR>(get_proc_addr(instance, "vkCmdEndVideoCodingKHR"))),
      CmdControlVideoCodingKHR(
          reinterpret_cast<PFN_vkCmdControlVideoCodingKHR>(get_proc_addr(instance, "vkCmdControlVideoCodingKHR"))),
      CmdDecodeVideoKHR(reinterpret_cast<PFN_vkCmdDecodeVideoKHR>(get_proc_addr(instance, "vkCmdDecodeVideoKHR"))),
      CmdBeginRenderingKHR(reinterpret_cast<PFN_vkCmdBeginRenderingKHR>(get_proc_addr(instance, "vkCmdBeginRenderingKHR"))),
      CmdEndRenderingKHR(reinterpret_cast<PFN_vkCmdEndRenderingKHR>(get_proc_addr(instance, "vkCmdEndRenderingKHR"))),
      GetPhysicalDeviceFeatures2KHR(
          reinterpret_cast<PFN_vkGetPhysicalDeviceFeatures2KHR>(get_proc_addr(instance, "vkGetPhysicalDeviceFeatures2KHR"))),
      GetPhysicalDeviceProperties2KHR(
          reinterpret_cast<PFN_vkGetPhysicalDeviceProperties2KHR>(get_proc_addr(instance, "vkGetPhysicalDeviceProperties2KHR"))),
      GetPhysicalDeviceFormatProperties2KHR(reinterpret_cast<PFN_vkGetPhysicalDeviceFormatProperties2KHR>(
          get_proc_addr(instance, "vkGetPhysicalDeviceFormatProperties2KHR"))),
      GetPhysicalDeviceImageFormatProperties2KHR(reinterpret_cast<PFN_vkGetPhysicalDeviceImageFormatProperties2KHR>(
          get_proc_addr(instance, "vkGetPhysicalDeviceImageFormatProperties2KHR"))),
      GetPhysicalDeviceQueueFamilyProperties2KHR(reinterpret_cast<PFN_vkGetPhysicalDeviceQueueFamilyProperties2KHR>(
          get_proc_addr(instance, "vkGetPhysicalDeviceQueueFamilyProperties2KHR"))),
      GetPhysicalDeviceMemoryProperties2KHR(reinterpret_cast<PFN_vkGetPhysicalDeviceMemoryProperties2KHR>(
          get_proc_addr(instance, "vkGetPhysicalDeviceMemoryProperties2KHR"))),
      GetPhysicalDeviceSparseImageFormatProperties2KHR(reinterpret_cast<PFN_vkGetPhysicalDeviceSparseImageFormatProperties2KHR>(
          get_proc_addr(instance, "vkGetPhysicalDeviceSparseImageFormatProperties2KHR"))),
      GetDeviceGroupPeerMemoryFeaturesKHR(reinterpret_cast<PFN_vkGetDeviceGroupPeerMemoryFeaturesKHR>(
          get_proc_addr(instance, "vkGetDeviceGroupPeerMemoryFeaturesKHR"))),
      CmdSetDeviceMaskKHR(reinterpret_cast<PFN_vkCmdSetDeviceMaskKHR>(get_proc_addr(instance, "vkCmdSetDeviceMaskKHR"))),
      CmdDispatchBaseKHR(reinterpret_cast<PFN_vkCmdDispatchBaseKHR>(get_proc_addr(instance, "vkCmdDispatchBaseKHR"))),
      TrimCommandPoolKHR(reinterpret_cast<PFN_vkTrimCommandPoolKHR>(get_proc_addr(instance, "vkTrimCommandPoolKHR"))),
      EnumeratePhysicalDeviceGroupsKHR(
          reinterpret_cast<PFN_vkEnumeratePhysicalDeviceGroupsKHR>(get_proc_addr(instance, "vkEnumeratePhysicalDeviceGroupsKHR"))),
      GetPhysicalDeviceExternalBufferPropertiesKHR(reinterpret_cast<PFN_vkGetPhysicalDeviceExternalBufferPropertiesKHR>(
          get_proc_addr(instance, "vkGetPhysicalDeviceExternalBufferPropertiesKHR"))),
#ifdef VK_USE_PLATFORM_WIN32_KHR
      GetMemoryWin32HandleKHR(
          reinterpret_cast<PFN_vkGetMemoryWin32HandleKHR>(get_proc_addr(instance, "vkGetMemoryWin32HandleKHR"))),
      GetMemoryWin32HandlePropertiesKHR(reinterpret_cast<PFN_vkGetMemoryWin32HandlePropertiesKHR>(
          get_proc_addr(instance, "vkGetMemoryWin32HandlePropertiesKHR"))),
#endif  // VK_USE_PLATFORM_WIN32_KHR
      GetMemoryFdKHR(reinterpret_cast<PFN_vkGetMemoryFdKHR>(get_proc_addr(instance, "vkGetMemoryFdKHR"))),
      GetMemoryFdPropertiesKHR(
          reinterpret_cast<PFN_vkGetMemoryFdPropertiesKHR>(get_proc_addr(instance, "vkGetMemoryFdPropertiesKHR"))),
      GetPhysicalDeviceExternalSemaphorePropertiesKHR(reinterpret_cast<PFN_vkGetPhysicalDeviceExternalSemaphorePropertiesKHR>(
          get_proc_addr(instance, "vkGetPhysicalDeviceExternalSemaphorePropertiesKHR"))),
#ifdef VK_USE_PLATFORM_WIN32_KHR
      ImportSemaphoreWin32HandleKHR(
          reinterpret_cast<PFN_vkImportSemaphoreWin32HandleKHR>(get_proc_addr(instance, "vkImportSemaphoreWin32HandleKHR"))),
      GetSemaphoreWin32HandleKHR(
          reinterpret_cast<PFN_vkGetSemaphoreWin32HandleKHR>(get_proc_addr(instance, "vkGetSemaphoreWin32HandleKHR"))),
#endif  // VK_USE_PLATFORM_WIN32_KHR
      ImportSemaphoreFdKHR(reinterpret_cast<PFN_vkImportSemaphoreFdKHR>(get_proc_addr(instance, "vkImportSemaphoreFdKHR"))),
      GetSemaphoreFdKHR(reinterpret_cast<PFN_vkGetSemaphoreFdKHR>(get_proc_addr(instance, "vkGetSemaphoreFdKHR"))),
      CmdPushDescriptorSetKHR(
          reinterpret_cast<PFN_vkCmdPushDescriptorSetKHR>(get_proc_addr(instance, "vkCmdPushDescriptorSetKHR"))),
      CmdPushDescriptorSetWithTemplateKHR(reinterpret_cast<PFN_vkCmdPushDescriptorSetWithTemplateKHR>(
          get_proc_addr(instance, "vkCmdPushDescriptorSetWithTemplateKHR"))),
      CreateDescriptorUpdateTemplateKHR(reinterpret_cast<PFN_vkCreateDescriptorUpdateTemplateKHR>(
          get_proc_addr(instance, "vkCreateDescriptorUpdateTemplateKHR"))),
      DestroyDescriptorUpdateTemplateKHR(reinterpret_cast<PFN_vkDestroyDescriptorUpdateTemplateKHR>(
          get_proc_addr(instance, "vkDestroyDescriptorUpdateTemplateKHR"))),
      UpdateDescriptorSetWithTemplateKHR(reinterpret_cast<PFN_vkUpdateDescriptorSetWithTemplateKHR>(
          get_proc_addr(instance, "vkUpdateDescriptorSetWithTemplateKHR"))),
      CreateRenderPass2KHR(reinterpret_cast<PFN_vkCreateRenderPass2KHR>(get_proc_addr(instance, "vkCreateRenderPass2KHR"))),
      CmdBeginRenderPass2KHR(reinterpret_cast<PFN_vkCmdBeginRenderPass2KHR>(get_proc_addr(instance, "vkCmdBeginRenderPass2KHR"))),
      CmdNextSubpass2KHR(reinterpret_cast<PFN_vkCmdNextSubpass2KHR>(get_proc_addr(instance, "vkCmdNextSubpass2KHR"))),
      CmdEndRenderPass2KHR(reinterpret_cast<PFN_vkCmdEndRenderPass2KHR>(get_proc_addr(instance, "vkCmdEndRenderPass2KHR"))),
      GetSwapchainStatusKHR(reinterpret_cast<PFN_vkGetSwapchainStatusKHR>(get_proc_addr(instance, "vkGetSwapchainStatusKHR"))),
      GetPhysicalDeviceExternalFencePropertiesKHR(reinterpret_cast<PFN_vkGetPhysicalDeviceExternalFencePropertiesKHR>(
          get_proc_addr(instance, "vkGetPhysicalDeviceExternalFencePropertiesKHR"))),
#ifdef VK_USE_PLATFORM_WIN32_KHR
      ImportFenceWin32HandleKHR(
          reinterpret_cast<PFN_vkImportFenceWin32HandleKHR>(get_proc_addr(instance, "vkImportFenceWin32HandleKHR"))),
      GetFenceWin32HandleKHR(reinterpret_cast<PFN_vkGetFenceWin32HandleKHR>(get_proc_addr(instance, "vkGetFenceWin32HandleKHR"))),
#endif  // VK_USE_PLATFORM_WIN32_KHR
      ImportFenceFdKHR(reinterpret_cast<PFN_vkImportFenceFdKHR>(get_proc_addr(instance, "vkImportFenceFdKHR"))),
      GetFenceFdKHR(reinterpret_cast<PFN_vkGetFenceFdKHR>(get_proc_addr(instance, "vkGetFenceFdKHR"))),
      EnumeratePhysicalDeviceQueueFamilyPerformanceQueryCountersKHR(
          reinterpret_cast<PFN_vkEnumeratePhysicalDeviceQueueFamilyPerformanceQueryCountersKHR>(
              get_proc_addr(instance, "vkEnumeratePhysicalDeviceQueueFamilyPerformanceQueryCountersKHR"))),
      GetPhysicalDeviceQueueFamilyPerformanceQueryPassesKHR(
          reinterpret_cast<PFN_vkGetPhysicalDeviceQueueFamilyPerformanceQueryPassesKHR>(
              get_proc_addr(instance, "vkGetPhysicalDeviceQueueFamilyPerformanceQueryPassesKHR"))),
      AcquireProfilingLockKHR(
          reinterpret_cast<PFN_vkAcquireProfilingLockKHR>(get_proc_addr(instance, "vkAcquireProfilingLockKHR"))),
      ReleaseProfilingLockKHR(
          reinterpret_cast<PFN_vkReleaseProfilingLockKHR>(get_proc_addr(instance, "vkReleaseProfilingLockKHR"))),
      GetPhysicalDeviceSurfaceCapabilities2KHR(reinterpret_cast<PFN_vkGetPhysicalDeviceSurfaceCapabilities2KHR>(
          get_proc_addr(instance, "vkGetPhysicalDeviceSurfaceCapabilities2KHR"))),
      GetPhysicalDeviceSurfaceFormats2KHR(reinterpret_cast<PFN_vkGetPhysicalDeviceSurfaceFormats2KHR>(
          get_proc_addr(instance, "vkGetPhysicalDeviceSurfaceFormats2KHR"))),
      GetPhysicalDeviceDisplayProperties2KHR(reinterpret_cast<PFN_vkGetPhysicalDeviceDisplayProperties2KHR>(
          get_proc_addr(instance, "vkGetPhysicalDeviceDisplayProperties2KHR"))),
      GetPhysicalDeviceDisplayPlaneProperties2KHR(reinterpret_cast<PFN_vkGetPhysicalDeviceDisplayPlaneProperties2KHR>(
          get_proc_addr(instance, "vkGetPhysicalDeviceDisplayPlaneProperties2KHR"))),
      GetDisplayModeProperties2KHR(
          reinterpret_cast<PFN_vkGetDisplayModeProperties2KHR>(get_proc_addr(instance, "vkGetDisplayModeProperties2KHR"))),
      GetDisplayPlaneCapabilities2KHR(
          reinterpret_cast<PFN_vkGetDisplayPlaneCapabilities2KHR>(get_proc_addr(instance, "vkGetDisplayPlaneCapabilities2KHR"))),
      GetImageMemoryRequirements2KHR(
          reinterpret_cast<PFN_vkGetImageMemoryRequirements2KHR>(get_proc_addr(instance, "vkGetImageMemoryRequirements2KHR"))),
      GetBufferMemoryRequirements2KHR(
          reinterpret_cast<PFN_vkGetBufferMemoryRequirements2KHR>(get_proc_addr(instance, "vkGetBufferMemoryRequirements2KHR"))),
      GetImageSparseMemoryRequirements2KHR(reinterpret_cast<PFN_vkGetImageSparseMemoryRequirements2KHR>(
          get_proc_addr(instance, "vkGetImageSparseMemoryRequirements2KHR"))),
      CreateSamplerYcbcrConversionKHR(
          reinterpret_cast<PFN_vkCreateSamplerYcbcrConversionKHR>(get_proc_addr(instance, "vkCreateSamplerYcbcrConversionKHR"))),
      DestroySamplerYcbcrConversionKHR(
          reinterpret_cast<PFN_vkDestroySamplerYcbcrConversionKHR>(get_proc_addr(instance, "vkDestroySamplerYcbcrConversionKHR"))),
      BindBufferMemory2KHR(reinterpret_cast<PFN_vkBindBufferMemory2KHR>(get_proc_addr(instance, "vkBindBufferMemory2KHR"))),
      BindImageMemory2KHR(reinterpret_cast<PFN_vkBindImageMemory2KHR>(get_proc_addr(instance, "vkBindImageMemory2KHR"))),
      GetDescriptorSetLayoutSupportKHR(
          reinterpret_cast<PFN_vkGetDescriptorSetLayoutSupportKHR>(get_proc_addr(instance, "vkGetDescriptorSetLayoutSupportKHR"))),
      CmdDrawIndirectCountKHR(
          reinterpret_cast<PFN_vkCmdDrawIndirectCountKHR>(get_proc_addr(instance, "vkCmdDrawIndirectCountKHR"))),
      CmdDrawIndexedIndirectCountKHR(
          reinterpret_cast<PFN_vkCmdDrawIndexedIndirectCountKHR>(get_proc_addr(instance, "vkCmdDrawIndexedIndirectCountKHR"))),
      GetSemaphoreCounterValueKHR(
          reinterpret_cast<PFN_vkGetSemaphoreCounterValueKHR>(get_proc_addr(instance, "vkGetSemaphoreCounterValueKHR"))),
      WaitSemaphoresKHR(reinterpret_cast<PFN_vkWaitSemaphoresKHR>(get_proc_addr(instance, "vkWaitSemaphoresKHR"))),
      SignalSemaphoreKHR(reinterpret_cast<PFN_vkSignalSemaphoreKHR>(get_proc_addr(instance, "vkSignalSemaphoreKHR"))),
      GetPhysicalDeviceFragmentShadingRatesKHR(reinterpret_cast<PFN_vkGetPhysicalDeviceFragmentShadingRatesKHR>(
          get_proc_addr(instance, "vkGetPhysicalDeviceFragmentShadingRatesKHR"))),
      CmdSetFragmentShadingRateKHR(
          reinterpret_cast<PFN_vkCmdSetFragmentShadingRateKHR>(get_proc_addr(instance, "vkCmdSetFragmentShadingRateKHR"))),
      CmdSetRenderingAttachmentLocationsKHR(reinterpret_cast<PFN_vkCmdSetRenderingAttachmentLocationsKHR>(
          get_proc_addr(instance, "vkCmdSetRenderingAttachmentLocationsKHR"))),
      CmdSetRenderingInputAttachmentIndicesKHR(reinterpret_cast<PFN_vkCmdSetRenderingInputAttachmentIndicesKHR>(
          get_proc_addr(instance, "vkCmdSetRenderingInputAttachmentIndicesKHR"))),
      WaitForPresentKHR(reinterpret_cast<PFN_vkWaitForPresentKHR>(get_proc_addr(instance, "vkWaitForPresentKHR"))),
      GetBufferDeviceAddressKHR(
          reinterpret_cast<PFN_vkGetBufferDeviceAddressKHR>(get_proc_addr(instance, "vkGetBufferDeviceAddressKHR"))),
      GetBufferOpaqueCaptureAddressKHR(
          reinterpret_cast<PFN_vkGetBufferOpaqueCaptureAddressKHR>(get_proc_addr(instance, "vkGetBufferOpaqueCaptureAddressKHR"))),
      GetDeviceMemoryOpaqueCaptureAddressKHR(reinterpret_cast<PFN_vkGetDeviceMemoryOpaqueCaptureAddressKHR>(
          get_proc_addr(instance, "vkGetDeviceMemoryOpaqueCaptureAddressKHR"))),
      CreateDeferredOperationKHR(
          reinterpret_cast<PFN_vkCreateDeferredOperationKHR>(get_proc_addr(instance, "vkCreateDeferredOperationKHR"))),
      DestroyDeferredOperationKHR(
          reinterpret_cast<PFN_vkDestroyDeferredOperationKHR>(get_proc_addr(instance, "vkDestroyDeferredOperationKHR"))),
      GetDeferredOperationMaxConcurrencyKHR(reinterpret_cast<PFN_vkGetDeferredOperationMaxConcurrencyKHR>(
          get_proc_addr(instance, "vkGetDeferredOperationMaxConcurrencyKHR"))),
      GetDeferredOperationResultKHR(
          reinterpret_cast<PFN_vkGetDeferredOperationResultKHR>(get_proc_addr(instance, "vkGetDeferredOperationResultKHR"))),
      DeferredOperationJoinKHR(
          reinterpret_cast<PFN_vkDeferredOperationJoinKHR>(get_proc_addr(instance, "vkDeferredOperationJoinKHR"))),
      GetPipelineExecutablePropertiesKHR(reinterpret_cast<PFN_vkGetPipelineExecutablePropertiesKHR>(
          get_proc_addr(instance, "vkGetPipelineExecutablePropertiesKHR"))),
      GetPipelineExecutableStatisticsKHR(reinterpret_cast<PFN_vkGetPipelineExecutableStatisticsKHR>(
          get_proc_addr(instance, "vkGetPipelineExecutableStatisticsKHR"))),
      GetPipelineExecutableInternalRepresentationsKHR(reinterpret_cast<PFN_vkGetPipelineExecutableInternalRepresentationsKHR>(
          get_proc_addr(instance, "vkGetPipelineExecutableInternalRepresentationsKHR"))),
      MapMemory2KHR(reinterpret_cast<PFN_vkMapMemory2KHR>(get_proc_addr(instance, "vkMapMemory2KHR"))),
      UnmapMemory2KHR(reinterpret_cast<PFN_vkUnmapMemory2KHR>(get_proc_addr(instance, "vkUnmapMemory2KHR"))),
      GetPhysicalDeviceVideoEncodeQualityLevelPropertiesKHR(
          reinterpret_cast<PFN_vkGetPhysicalDeviceVideoEncodeQualityLevelPropertiesKHR>(
              get_proc_addr(instance, "vkGetPhysicalDeviceVideoEncodeQualityLevelPropertiesKHR"))),
      GetEncodedVideoSessionParametersKHR(reinterpret_cast<PFN_vkGetEncodedVideoSessionParametersKHR>(
          get_proc_addr(instance, "vkGetEncodedVideoSessionParametersKHR"))),
      CmdEncodeVideoKHR(reinterpret_cast<PFN_vkCmdEncodeVideoKHR>(get_proc_addr(instance, "vkCmdEncodeVideoKHR"))),
      CmdSetEvent2KHR(reinterpret_cast<PFN_vkCmdSetEvent2KHR>(get_proc_addr(instance, "vkCmdSetEvent2KHR"))),
      CmdResetEvent2KHR(reinterpret_cast<PFN_vkCmdResetEvent2KHR>(get_proc_addr(instance, "vkCmdResetEvent2KHR"))),
      CmdWaitEvents2KHR(reinterpret_cast<PFN_vkCmdWaitEvents2KHR>(get_proc_addr(instance, "vkCmdWaitEvents2KHR"))),
      CmdPipelineBarrier2KHR(reinterpret_cast<PFN_vkCmdPipelineBarrier2KHR>(get_proc_addr(instance, "vkCmdPipelineBarrier2KHR"))),
      CmdWriteTimestamp2KHR(reinterpret_cast<PFN_vkCmdWriteTimestamp2KHR>(get_proc_addr(instance, "vkCmdWriteTimestamp2KHR"))),
      QueueSubmit2KHR(reinterpret_cast<PFN_vkQueueSubmit2KHR>(get_proc_addr(instance, "vkQueueSubmit2KHR"))),
      CmdCopyBuffer2KHR(reinterpret_cast<PFN_vkCmdCopyBuffer2KHR>(get_proc_addr(instance, "vkCmdCopyBuffer2KHR"))),
      CmdCopyImage2KHR(reinterpret_cast<PFN_vkCmdCopyImage2KHR>(get_proc_addr(instance, "vkCmdCopyImage2KHR"))),
      CmdCopyBufferToImage2KHR(
          reinterpret_cast<PFN_vkCmdCopyBufferToImage2KHR>(get_proc_addr(instance, "vkCmdCopyBufferToImage2KHR"))),
      CmdCopyImageToBuffer2KHR(
          reinterpret_cast<PFN_vkCmdCopyImageToBuffer2KHR>(get_proc_addr(instance, "vkCmdCopyImageToBuffer2KHR"))),
      CmdBlitImage2KHR(reinterpret_cast<PFN_vkCmdBlitImage2KHR>(get_proc_addr(instance, "vkCmdBlitImage2KHR"))),
      CmdResolveImage2KHR(reinterpret_cast<PFN_vkCmdResolveImage2KHR>(get_proc_addr(instance, "vkCmdResolveImage2KHR"))),
      CmdTraceRaysIndirect2KHR(
          reinterpret_cast<PFN_vkCmdTraceRaysIndirect2KHR>(get_proc_addr(instance, "vkCmdTraceRaysIndirect2KHR"))),
      GetDeviceBufferMemoryRequirementsKHR(reinterpret_cast<PFN_vkGetDeviceBufferMemoryRequirementsKHR>(
          get_proc_addr(instance, "vkGetDeviceBufferMemoryRequirementsKHR"))),
      GetDeviceImageMemoryRequirementsKHR(reinterpret_cast<PFN_vkGetDeviceImageMemoryRequirementsKHR>(
          get_proc_addr(instance, "vkGetDeviceImageMemoryRequirementsKHR"))),
      GetDeviceImageSparseMemoryRequirementsKHR(reinterpret_cast<PFN_vkGetDeviceImageSparseMemoryRequirementsKHR>(
          get_proc_addr(instance, "vkGetDeviceImageSparseMemoryRequirementsKHR"))),
      CmdBindIndexBuffer2KHR(reinterpret_cast<PFN_vkCmdBindIndexBuffer2KHR>(get_proc_addr(instance, "vkCmdBindIndexBuffer2KHR"))),
      GetRenderingAreaGranularityKHR(
          reinterpret_cast<PFN_vkGetRenderingAreaGranularityKHR>(get_proc_addr(instance, "vkGetRenderingAreaGranularityKHR"))),
      GetDeviceImageSubresourceLayoutKHR(reinterpret_cast<PFN_vkGetDeviceImageSubresourceLayoutKHR>(
          get_proc_addr(instance, "vkGetDeviceImageSubresourceLayoutKHR"))),
      GetImageSubresourceLayout2KHR(
          reinterpret_cast<PFN_vkGetImageSubresourceLayout2KHR>(get_proc_addr(instance, "vkGetImageSubresourceLayout2KHR"))),
      CreatePipelineBinariesKHR(
          reinterpret_cast<PFN_vkCreatePipelineBinariesKHR>(get_proc_addr(instance, "vkCreatePipelineBinariesKHR"))),
      DestroyPipelineBinaryKHR(
          reinterpret_cast<PFN_vkDestroyPipelineBinaryKHR>(get_proc_addr(instance, "vkDestroyPipelineBinaryKHR"))),
      GetPipelineKeyKHR(reinterpret_cast<PFN_vkGetPipelineKeyKHR>(get_proc_addr(instance, "vkGetPipelineKeyKHR"))),
      GetPipelineBinaryDataKHR(
          reinterpret_cast<PFN_vkGetPipelineBinaryDataKHR>(get_proc_addr(instance, "vkGetPipelineBinaryDataKHR"))),
      ReleaseCapturedPipelineDataKHR(
          reinterpret_cast<PFN_vkReleaseCapturedPipelineDataKHR>(get_proc_addr(instance, "vkReleaseCapturedPipelineDataKHR"))),
      GetPhysicalDeviceCooperativeMatrixPropertiesKHR(reinterpret_cast<PFN_vkGetPhysicalDeviceCooperativeMatrixPropertiesKHR>(
          get_proc_addr(instance, "vkGetPhysicalDeviceCooperativeMatrixPropertiesKHR"))),
      CmdSetLineStippleKHR(reinterpret_cast<PFN_vkCmdSetLineStippleKHR>(get_proc_addr(instance, "vkCmdSetLineStippleKHR"))),
      GetPhysicalDeviceCalibrateableTimeDomainsKHR(reinterpret_cast<PFN_vkGetPhysicalDeviceCalibrateableTimeDomainsKHR>(
          get_proc_addr(instance, "vkGetPhysicalDeviceCalibrateableTimeDomainsKHR"))),
      GetCalibratedTimestampsKHR(
          reinterpret_cast<PFN_vkGetCalibratedTimestampsKHR>(get_proc_addr(instance, "vkGetCalibratedTimestampsKHR"))),
      CmdBindDescriptorSets2KHR(
          reinterpret_cast<PFN_vkCmdBindDescriptorSets2KHR>(get_proc_addr(instance, "vkCmdBindDescriptorSets2KHR"))),
      CmdPushConstants2KHR(reinterpret_cast<PFN_vkCmdPushConstants2KHR>(get_proc_addr(instance, "vkCmdPushConstants2KHR"))),
      CmdPushDescriptorSet2KHR(
          reinterpret_cast<PFN_vkCmdPushDescriptorSet2KHR>(get_proc_addr(instance, "vkCmdPushDescriptorSet2KHR"))),
      CmdPushDescriptorSetWithTemplate2KHR(reinterpret_cast<PFN_vkCmdPushDescriptorSetWithTemplate2KHR>(
          get_proc_addr(instance, "vkCmdPushDescriptorSetWithTemplate2KHR"))),
      CmdSetDescriptorBufferOffsets2EXT(reinterpret_cast<PFN_vkCmdSetDescriptorBufferOffsets2EXT>(
          get_proc_addr(instance, "vkCmdSetDescriptorBufferOffsets2EXT"))),
      CmdBindDescriptorBufferEmbeddedSamplers2EXT(reinterpret_cast<PFN_vkCmdBindDescriptorBufferEmbeddedSamplers2EXT>(
          get_proc_addr(instance, "vkCmdBindDescriptorBufferEmbeddedSamplers2EXT"))),
      CreateDebugReportCallbackEXT(
          reinterpret_cast<PFN_vkCreateDebugReportCallbackEXT>(get_proc_addr(instance, "vkCreateDebugReportCallbackEXT"))),
      DestroyDebugReportCallbackEXT(
          reinterpret_cast<PFN_vkDestroyDebugReportCallbackEXT>(get_proc_addr(instance, "vkDestroyDebugReportCallbackEXT"))),
      DebugReportMessageEXT(reinterpret_cast<PFN_vkDebugReportMessageEXT>(get_proc_addr(instance, "vkDebugReportMessageEXT"))),
      DebugMarkerSetObjectTagEXT(
          reinterpret_cast<PFN_vkDebugMarkerSetObjectTagEXT>(get_proc_addr(instance, "vkDebugMarkerSetObjectTagEXT"))),
      DebugMarkerSetObjectNameEXT(
          reinterpret_cast<PFN_vkDebugMarkerSetObjectNameEXT>(get_proc_addr(instance, "vkDebugMarkerSetObjectNameEXT"))),
      CmdDebugMarkerBeginEXT(reinterpret_cast<PFN_vkCmdDebugMarkerBeginEXT>(get_proc_addr(instance, "vkCmdDebugMarkerBeginEXT"))),
      CmdDebugMarkerEndEXT(reinterpret_cast<PFN_vkCmdDebugMarkerEndEXT>(get_proc_addr(instance, "vkCmdDebugMarkerEndEXT"))),
      CmdDebugMarkerInsertEXT(
          reinterpret_cast<PFN_vkCmdDebugMarkerInsertEXT>(get_proc_addr(instance, "vkCmdDebugMarkerInsertEXT"))),
      CmdBindTransformFeedbackBuffersEXT(reinterpret_cast<PFN_vkCmdBindTransformFeedbackBuffersEXT>(
          get_proc_addr(instance, "vkCmdBindTransformFeedbackBuffersEXT"))),
      CmdBeginTransformFeedbackEXT(
          reinterpret_cast<PFN_vkCmdBeginTransformFeedbackEXT>(get_proc_addr(instance, "vkCmdBeginTransformFeedbackEXT"))),
      CmdEndTransformFeedbackEXT(
          reinterpret_cast<PFN_vkCmdEndTransformFeedbackEXT>(get_proc_addr(instance, "vkCmdEndTransformFeedbackEXT"))),
      CmdBeginQueryIndexedEXT(
          reinterpret_cast<PFN_vkCmdBeginQueryIndexedEXT>(get_proc_addr(instance, "vkCmdBeginQueryIndexedEXT"))),
      CmdEndQueryIndexedEXT(reinterpret_cast<PFN_vkCmdEndQueryIndexedEXT>(get_proc_addr(instance, "vkCmdEndQueryIndexedEXT"))),
      CmdDrawIndirectByteCountEXT(
          reinterpret_cast<PFN_vkCmdDrawIndirectByteCountEXT>(get_proc_addr(instance, "vkCmdDrawIndirectByteCountEXT"))),
      CreateCuModuleNVX(reinterpret_cast<PFN_vkCreateCuModuleNVX>(get_proc_addr(instance, "vkCreateCuModuleNVX"))),
      CreateCuFunctionNVX(reinterpret_cast<PFN_vkCreateCuFunctionNVX>(get_proc_addr(instance, "vkCreateCuFunctionNVX"))),
      DestroyCuModuleNVX(reinterpret_cast<PFN_vkDestroyCuModuleNVX>(get_proc_addr(instance, "vkDestroyCuModuleNVX"))),
      DestroyCuFunctionNVX(reinterpret_cast<PFN_vkDestroyCuFunctionNVX>(get_proc_addr(instance, "vkDestroyCuFunctionNVX"))),
      CmdCuLaunchKernelNVX(reinterpret_cast<PFN_vkCmdCuLaunchKernelNVX>(get_proc_addr(instance, "vkCmdCuLaunchKernelNVX"))),
      GetImageViewHandleNVX(reinterpret_cast<PFN_vkGetImageViewHandleNVX>(get_proc_addr(instance, "vkGetImageViewHandleNVX"))),
      GetImageViewHandle64NVX(
          reinterpret_cast<PFN_vkGetImageViewHandle64NVX>(get_proc_addr(instance, "vkGetImageViewHandle64NVX"))),
      GetImageViewAddressNVX(reinterpret_cast<PFN_vkGetImageViewAddressNVX>(get_proc_addr(instance, "vkGetImageViewAddressNVX"))),
      CmdDrawIndirectCountAMD(
          reinterpret_cast<PFN_vkCmdDrawIndirectCountAMD>(get_proc_addr(instance, "vkCmdDrawIndirectCountAMD"))),
      CmdDrawIndexedIndirectCountAMD(
          reinterpret_cast<PFN_vkCmdDrawIndexedIndirectCountAMD>(get_proc_addr(instance, "vkCmdDrawIndexedIndirectCountAMD"))),
      GetShaderInfoAMD(reinterpret_cast<PFN_vkGetShaderInfoAMD>(get_proc_addr(instance, "vkGetShaderInfoAMD"))),
#ifdef VK_USE_PLATFORM_GGP
      CreateStreamDescriptorSurfaceGGP(
          reinterpret_cast<PFN_vkCreateStreamDescriptorSurfaceGGP>(get_proc_addr(instance, "vkCreateStreamDescriptorSurfaceGGP"))),
#endif  // VK_USE_PLATFORM_GGP
      GetPhysicalDeviceExternalImageFormatPropertiesNV(reinterpret_cast<PFN_vkGetPhysicalDeviceExternalImageFormatPropertiesNV>(
          get_proc_addr(instance, "vkGetPhysicalDeviceExternalImageFormatPropertiesNV"))),
#ifdef VK_USE_PLATFORM_WIN32_KHR
      GetMemoryWin32HandleNV(reinterpret_cast<PFN_vkGetMemoryWin32HandleNV>(get_proc_addr(instance, "vkGetMemoryWin32HandleNV"))),
#endif  // VK_USE_PLATFORM_WIN32_KHR
#ifdef VK_USE_PLATFORM_VI_NN
      CreateViSurfaceNN(reinterpret_cast<PFN_vkCreateViSurfaceNN>(get_proc_addr(instance, "vkCreateViSurfaceNN"))),
#endif  // VK_USE_PLATFORM_VI_NN
      CmdBeginConditionalRenderingEXT(
          reinterpret_cast<PFN_vkCmdBeginConditionalRenderingEXT>(get_proc_addr(instance, "vkCmdBeginConditionalRenderingEXT"))),
      CmdEndConditionalRenderingEXT(
          reinterpret_cast<PFN_vkCmdEndConditionalRenderingEXT>(get_proc_addr(instance, "vkCmdEndConditionalRenderingEXT"))),
      CmdSetViewportWScalingNV(
          reinterpret_cast<PFN_vkCmdSetViewportWScalingNV>(get_proc_addr(instance, "vkCmdSetViewportWScalingNV"))),
      ReleaseDisplayEXT(reinterpret_cast<PFN_vkReleaseDisplayEXT>(get_proc_addr(instance, "vkReleaseDisplayEXT"))),
#ifdef VK_USE_PLATFORM_XLIB_XRANDR_EXT
      AcquireXlibDisplayEXT(reinterpret_cast<PFN_vkAcquireXlibDisplayEXT>(get_proc_addr(instance, "vkAcquireXlibDisplayEXT"))),
      GetRandROutputDisplayEXT(
          reinterpret_cast<PFN_vkGetRandROutputDisplayEXT>(get_proc_addr(instance, "vkGetRandROutputDisplayEXT"))),
#endif  // VK_USE_PLATFORM_XLIB_XRANDR_EXT
      GetPhysicalDeviceSurfaceCapabilities2EXT(reinterpret_cast<PFN_vkGetPhysicalDeviceSurfaceCapabilities2EXT>(
          get_proc_addr(instance, "vkGetPhysicalDeviceSurfaceCapabilities2EXT"))),
      DisplayPowerControlEXT(reinterpret_cast<PFN_vkDisplayPowerControlEXT>(get_proc_addr(instance, "vkDisplayPowerControlEXT"))),
      RegisterDeviceEventEXT(reinterpret_cast<PFN_vkRegisterDeviceEventEXT>(get_proc_addr(instance, "vkRegisterDeviceEventEXT"))),
      RegisterDisplayEventEXT(
          reinterpret_cast<PFN_vkRegisterDisplayEventEXT>(get_proc_addr(instance, "vkRegisterDisplayEventEXT"))),
      GetSwapchainCounterEXT(reinterpret_cast<PFN_vkGetSwapchainCounterEXT>(get_proc_addr(instance, "vkGetSwapchainCounterEXT"))),
      GetRefreshCycleDurationGOOGLE(
          reinterpret_cast<PFN_vkGetRefreshCycleDurationGOOGLE>(get_proc_addr(instance, "vkGetRefreshCycleDurationGOOGLE"))),
      GetPastPresentationTimingGOOGLE(
          reinterpret_cast<PFN_vkGetPastPresentationTimingGOOGLE>(get_proc_addr(instance, "vkGetPastPresentationTimingGOOGLE"))),
      CmdSetDiscardRectangleEXT(
          reinterpret_cast<PFN_vkCmdSetDiscardRectangleEXT>(get_proc_addr(instance, "vkCmdSetDiscardRectangleEXT"))),
      CmdSetDiscardRectangleEnableEXT(
          reinterpret_cast<PFN_vkCmdSetDiscardRectangleEnableEXT>(get_proc_addr(instance, "vkCmdSetDiscardRectangleEnableEXT"))),
      CmdSetDiscardRectangleModeEXT(
          reinterpret_cast<PFN_vkCmdSetDiscardRectangleModeEXT>(get_proc_addr(instance, "vkCmdSetDiscardRectangleModeEXT"))),
      SetHdrMetadataEXT(reinterpret_cast<PFN_vkSetHdrMetadataEXT>(get_proc_addr(instance, "vkSetHdrMetadataEXT"))),
#ifdef VK_USE_PLATFORM_IOS_MVK
      CreateIOSSurfaceMVK(reinterpret_cast<PFN_vkCreateIOSSurfaceMVK>(get_proc_addr(instance, "vkCreateIOSSurfaceMVK"))),
#endif  // VK_USE_PLATFORM_IOS_MVK
#ifdef VK_USE_PLATFORM_MACOS_MVK
      CreateMacOSSurfaceMVK(reinterpret_cast<PFN_vkCreateMacOSSurfaceMVK>(get_proc_addr(instance, "vkCreateMacOSSurfaceMVK"))),
#endif  // VK_USE_PLATFORM_MACOS_MVK
      SetDebugUtilsObjectNameEXT(
          reinterpret_cast<PFN_vkSetDebugUtilsObjectNameEXT>(get_proc_addr(instance, "vkSetDebugUtilsObjectNameEXT"))),
      SetDebugUtilsObjectTagEXT(
          reinterpret_cast<PFN_vkSetDebugUtilsObjectTagEXT>(get_proc_addr(instance, "vkSetDebugUtilsObjectTagEXT"))),
      QueueBeginDebugUtilsLabelEXT(
          reinterpret_cast<PFN_vkQueueBeginDebugUtilsLabelEXT>(get_proc_addr(instance, "vkQueueBeginDebugUtilsLabelEXT"))),
      QueueEndDebugUtilsLabelEXT(
          reinterpret_cast<PFN_vkQueueEndDebugUtilsLabelEXT>(get_proc_addr(instance, "vkQueueEndDebugUtilsLabelEXT"))),
      QueueInsertDebugUtilsLabelEXT(
          reinterpret_cast<PFN_vkQueueInsertDebugUtilsLabelEXT>(get_proc_addr(instance, "vkQueueInsertDebugUtilsLabelEXT"))),
      CmdBeginDebugUtilsLabelEXT(
          reinterpret_cast<PFN_vkCmdBeginDebugUtilsLabelEXT>(get_proc_addr(instance, "vkCmdBeginDebugUtilsLabelEXT"))),
      CmdEndDebugUtilsLabelEXT(
          reinterpret_cast<PFN_vkCmdEndDebugUtilsLabelEXT>(get_proc_addr(instance, "vkCmdEndDebugUtilsLabelEXT"))),
      CmdInsertDebugUtilsLabelEXT(
          reinterpret_cast<PFN_vkCmdInsertDebugUtilsLabelEXT>(get_proc_addr(instance, "vkCmdInsertDebugUtilsLabelEXT"))),
      CreateDebugUtilsMessengerEXT(
          reinterpret_cast<PFN_vkCreateDebugUtilsMessengerEXT>(get_proc_addr(instance, "vkCreateDebugUtilsMessengerEXT"))),
      DestroyDebugUtilsMessengerEXT(
          reinterpret_cast<PFN_vkDestroyDebugUtilsMessengerEXT>(get_proc_addr(instance, "vkDestroyDebugUtilsMessengerEXT"))),
      SubmitDebugUtilsMessageEXT(
          reinterpret_cast<PFN_vkSubmitDebugUtilsMessageEXT>(get_proc_addr(instance, "vkSubmitDebugUtilsMessageEXT"))),
#ifdef VK_USE_PLATFORM_ANDROID_KHR
      GetAndroidHardwareBufferPropertiesANDROID(reinterpret_cast<PFN_vkGetAndroidHardwareBufferPropertiesANDROID>(
          get_proc_addr(instance, "vkGetAndroidHardwareBufferPropertiesANDROID"))),
      GetMemoryAndroidHardwareBufferANDROID(reinterpret_cast<PFN_vkGetMemoryAndroidHardwareBufferANDROID>(
          get_proc_addr(instance, "vkGetMemoryAndroidHardwareBufferANDROID"))),
#endif  // VK_USE_PLATFORM_ANDROID_KHR
#ifdef VK_ENABLE_BETA_EXTENSIONS
      CreateExecutionGraphPipelinesAMDX(reinterpret_cast<PFN_vkCreateExecutionGraphPipelinesAMDX>(
          get_proc_addr(instance, "vkCreateExecutionGraphPipelinesAMDX"))),
      GetExecutionGraphPipelineScratchSizeAMDX(reinterpret_cast<PFN_vkGetExecutionGraphPipelineScratchSizeAMDX>(
          get_proc_addr(instance, "vkGetExecutionGraphPipelineScratchSizeAMDX"))),
      GetExecutionGraphPipelineNodeIndexAMDX(reinterpret_cast<PFN_vkGetExecutionGraphPipelineNodeIndexAMDX>(
          get_proc_addr(instance, "vkGetExecutionGraphPipelineNodeIndexAMDX"))),
      CmdInitializeGraphScratchMemoryAMDX(reinterpret_cast<PFN_vkCmdInitializeGraphScratchMemoryAMDX>(
          get_proc_addr(instance, "vkCmdInitializeGraphScratchMemoryAMDX"))),
      CmdDispatchGraphAMDX(reinterpret_cast<PFN_vkCmdDispatchGraphAMDX>(get_proc_addr(instance, "vkCmdDispatchGraphAMDX"))),
      CmdDispatchGraphIndirectAMDX(
          reinterpret_cast<PFN_vkCmdDispatchGraphIndirectAMDX>(get_proc_addr(instance, "vkCmdDispatchGraphIndirectAMDX"))),
      CmdDispatchGraphIndirectCountAMDX(reinterpret_cast<PFN_vkCmdDispatchGraphIndirectCountAMDX>(
          get_proc_addr(instance, "vkCmdDispatchGraphIndirectCountAMDX"))),
#endif  // VK_ENABLE_BETA_EXTENSIONS
      CmdSetSampleLocationsEXT(
          reinterpret_cast<PFN_vkCmdSetSampleLocationsEXT>(get_proc_addr(instance, "vkCmdSetSampleLocationsEXT"))),
      GetPhysicalDeviceMultisamplePropertiesEXT(reinterpret_cast<PFN_vkGetPhysicalDeviceMultisamplePropertiesEXT>(
          get_proc_addr(instance, "vkGetPhysicalDeviceMultisamplePropertiesEXT"))),
      GetImageDrmFormatModifierPropertiesEXT(reinterpret_cast<PFN_vkGetImageDrmFormatModifierPropertiesEXT>(
          get_proc_addr(instance, "vkGetImageDrmFormatModifierPropertiesEXT"))),
      CreateValidationCacheEXT(
          reinterpret_cast<PFN_vkCreateValidationCacheEXT>(get_proc_addr(instance, "vkCreateValidationCacheEXT"))),
      DestroyValidationCacheEXT(
          reinterpret_cast<PFN_vkDestroyValidationCacheEXT>(get_proc_addr(instance, "vkDestroyValidationCacheEXT"))),
      MergeValidationCachesEXT(
          reinterpret_cast<PFN_vkMergeValidationCachesEXT>(get_proc_addr(instance, "vkMergeValidationCachesEXT"))),
      GetValidationCacheDataEXT(
          reinterpret_cast<PFN_vkGetValidationCacheDataEXT>(get_proc_addr(instance, "vkGetValidationCacheDataEXT"))),
      CmdBindShadingRateImageNV(
          reinterpret_cast<PFN_vkCmdBindShadingRateImageNV>(get_proc_addr(instance, "vkCmdBindShadingRateImageNV"))),
      CmdSetViewportShadingRatePaletteNV(reinterpret_cast<PFN_vkCmdSetViewportShadingRatePaletteNV>(
          get_proc_addr(instance, "vkCmdSetViewportShadingRatePaletteNV"))),
      CmdSetCoarseSampleOrderNV(
          reinterpret_cast<PFN_vkCmdSetCoarseSampleOrderNV>(get_proc_addr(instance, "vkCmdSetCoarseSampleOrderNV"))),
      CreateAccelerationStructureNV(
          reinterpret_cast<PFN_vkCreateAccelerationStructureNV>(get_proc_addr(instance, "vkCreateAccelerationStructureNV"))),
      DestroyAccelerationStructureNV(
          reinterpret_cast<PFN_vkDestroyAccelerationStructureNV>(get_proc_addr(instance, "vkDestroyAccelerationStructureNV"))),
      GetAccelerationStructureMemoryRequirementsNV(reinterpret_cast<PFN_vkGetAccelerationStructureMemoryRequirementsNV>(
          get_proc_addr(instance, "vkGetAccelerationStructureMemoryRequirementsNV"))),
      BindAccelerationStructureMemoryNV(reinterpret_cast<PFN_vkBindAccelerationStructureMemoryNV>(
          get_proc_addr(instance, "vkBindAccelerationStructureMemoryNV"))),
      CmdBuildAccelerationStructureNV(
          reinterpret_cast<PFN_vkCmdBuildAccelerationStructureNV>(get_proc_addr(instance, "vkCmdBuildAccelerationStructureNV"))),
      CmdCopyAccelerationStructureNV(
          reinterpret_cast<PFN_vkCmdCopyAccelerationStructureNV>(get_proc_addr(instance, "vkCmdCopyAccelerationStructureNV"))),
      CmdTraceRaysNV(reinterpret_cast<PFN_vkCmdTraceRaysNV>(get_proc_addr(instance, "vkCmdTraceRaysNV"))),
      CreateRayTracingPipelinesNV(
          reinterpret_cast<PFN_vkCreateRayTracingPipelinesNV>(get_proc_addr(instance, "vkCreateRayTracingPipelinesNV"))),
      GetRayTracingShaderGroupHandlesKHR(reinterpret_cast<PFN_vkGetRayTracingShaderGroupHandlesKHR>(
          get_proc_addr(instance, "vkGetRayTracingShaderGroupHandlesKHR"))),
      GetRayTracingShaderGroupHandlesNV(reinterpret_cast<PFN_vkGetRayTracingShaderGroupHandlesNV>(
          get_proc_addr(instance, "vkGetRayTracingShaderGroupHandlesNV"))),
      GetAccelerationStructureHandleNV(
          reinterpret_cast<PFN_vkGetAccelerationStructureHandleNV>(get_proc_addr(instance, "vkGetAccelerationStructureHandleNV"))),
      CmdWriteAccelerationStructuresPropertiesNV(reinterpret_cast<PFN_vkCmdWriteAccelerationStructuresPropertiesNV>(
          get_proc_addr(instance, "vkCmdWriteAccelerationStructuresPropertiesNV"))),
      CompileDeferredNV(reinterpret_cast<PFN_vkCompileDeferredNV>(get_proc_addr(instance, "vkCompileDeferredNV"))),
      GetMemoryHostPointerPropertiesEXT(reinterpret_cast<PFN_vkGetMemoryHostPointerPropertiesEXT>(
          get_proc_addr(instance, "vkGetMemoryHostPointerPropertiesEXT"))),
      CmdWriteBufferMarkerAMD(
          reinterpret_cast<PFN_vkCmdWriteBufferMarkerAMD>(get_proc_addr(instance, "vkCmdWriteBufferMarkerAMD"))),
      CmdWriteBufferMarker2AMD(
          reinterpret_cast<PFN_vkCmdWriteBufferMarker2AMD>(get_proc_addr(instance, "vkCmdWriteBufferMarker2AMD"))),
      GetPhysicalDeviceCalibrateableTimeDomainsEXT(reinterpret_cast<PFN_vkGetPhysicalDeviceCalibrateableTimeDomainsEXT>(
          get_proc_addr(instance, "vkGetPhysicalDeviceCalibrateableTimeDomainsEXT"))),
      GetCalibratedTimestampsEXT(
          reinterpret_cast<PFN_vkGetCalibratedTimestampsEXT>(get_proc_addr(instance, "vkGetCalibratedTimestampsEXT"))),
      CmdDrawMeshTasksNV(reinterpret_cast<PFN_vkCmdDrawMeshTasksNV>(get_proc_addr(instance, "vkCmdDrawMeshTasksNV"))),
      CmdDrawMeshTasksIndirectNV(
          reinterpret_cast<PFN_vkCmdDrawMeshTasksIndirectNV>(get_proc_addr(instance, "vkCmdDrawMeshTasksIndirectNV"))),
      CmdDrawMeshTasksIndirectCountNV(
          reinterpret_cast<PFN_vkCmdDrawMeshTasksIndirectCountNV>(get_proc_addr(instance, "vkCmdDrawMeshTasksIndirectCountNV"))),
      CmdSetExclusiveScissorEnableNV(
          reinterpret_cast<PFN_vkCmdSetExclusiveScissorEnableNV>(get_proc_addr(instance, "vkCmdSetExclusiveScissorEnableNV"))),
      CmdSetExclusiveScissorNV(
          reinterpret_cast<PFN_vkCmdSetExclusiveScissorNV>(get_proc_addr(instance, "vkCmdSetExclusiveScissorNV"))),
      CmdSetCheckpointNV(reinterpret_cast<PFN_vkCmdSetCheckpointNV>(get_proc_addr(instance, "vkCmdSetCheckpointNV"))),
      GetQueueCheckpointDataNV(
          reinterpret_cast<PFN_vkGetQueueCheckpointDataNV>(get_proc_addr(instance, "vkGetQueueCheckpointDataNV"))),
      GetQueueCheckpointData2NV(
          reinterpret_cast<PFN_vkGetQueueCheckpointData2NV>(get_proc_addr(instance, "vkGetQueueCheckpointData2NV"))),
      InitializePerformanceApiINTEL(
          reinterpret_cast<PFN_vkInitializePerformanceApiINTEL>(get_proc_addr(instance, "vkInitializePerformanceApiINTEL"))),
      UninitializePerformanceApiINTEL(
          reinterpret_cast<PFN_vkUninitializePerformanceApiINTEL>(get_proc_addr(instance, "vkUninitializePerformanceApiINTEL"))),
      CmdSetPerformanceMarkerINTEL(
          reinterpret_cast<PFN_vkCmdSetPerformanceMarkerINTEL>(get_proc_addr(instance, "vkCmdSetPerformanceMarkerINTEL"))),
      CmdSetPerformanceStreamMarkerINTEL(reinterpret_cast<PFN_vkCmdSetPerformanceStreamMarkerINTEL>(
          get_proc_addr(instance, "vkCmdSetPerformanceStreamMarkerINTEL"))),
      CmdSetPerformanceOverrideINTEL(
          reinterpret_cast<PFN_vkCmdSetPerformanceOverrideINTEL>(get_proc_addr(instance, "vkCmdSetPerformanceOverrideINTEL"))),
      AcquirePerformanceConfigurationINTEL(reinterpret_cast<PFN_vkAcquirePerformanceConfigurationINTEL>(
          get_proc_addr(instance, "vkAcquirePerformanceConfigurationINTEL"))),
      ReleasePerformanceConfigurationINTEL(reinterpret_cast<PFN_vkReleasePerformanceConfigurationINTEL>(
          get_proc_addr(instance, "vkReleasePerformanceConfigurationINTEL"))),
      QueueSetPerformanceConfigurationINTEL(reinterpret_cast<PFN_vkQueueSetPerformanceConfigurationINTEL>(
          get_proc_addr(instance, "vkQueueSetPerformanceConfigurationINTEL"))),
      GetPerformanceParameterINTEL(
          reinterpret_cast<PFN_vkGetPerformanceParameterINTEL>(get_proc_addr(instance, "vkGetPerformanceParameterINTEL"))),
      SetLocalDimmingAMD(reinterpret_cast<PFN_vkSetLocalDimmingAMD>(get_proc_addr(instance, "vkSetLocalDimmingAMD"))),
#ifdef VK_USE_PLATFORM_FUCHSIA
      CreateImagePipeSurfaceFUCHSIA(
          reinterpret_cast<PFN_vkCreateImagePipeSurfaceFUCHSIA>(get_proc_addr(instance, "vkCreateImagePipeSurfaceFUCHSIA"))),
#endif  // VK_USE_PLATFORM_FUCHSIA
#ifdef VK_USE_PLATFORM_METAL_EXT
      CreateMetalSurfaceEXT(reinterpret_cast<PFN_vkCreateMetalSurfaceEXT>(get_proc_addr(instance, "vkCreateMetalSurfaceEXT"))),
#endif  // VK_USE_PLATFORM_METAL_EXT
      GetBufferDeviceAddressEXT(
          reinterpret_cast<PFN_vkGetBufferDeviceAddressEXT>(get_proc_addr(instance, "vkGetBufferDeviceAddressEXT"))),
      GetPhysicalDeviceToolPropertiesEXT(reinterpret_cast<PFN_vkGetPhysicalDeviceToolPropertiesEXT>(
          get_proc_addr(instance, "vkGetPhysicalDeviceToolPropertiesEXT"))),
      GetPhysicalDeviceCooperativeMatrixPropertiesNV(reinterpret_cast<PFN_vkGetPhysicalDeviceCooperativeMatrixPropertiesNV>(
          get_proc_addr(instance, "vkGetPhysicalDeviceCooperativeMatrixPropertiesNV"))),
      GetPhysicalDeviceSupportedFramebufferMixedSamplesCombinationsNV(
          reinterpret_cast<PFN_vkGetPhysicalDeviceSupportedFramebufferMixedSamplesCombinationsNV>(
              get_proc_addr(instance, "vkGetPhysicalDeviceSupportedFramebufferMixedSamplesCombinationsNV"))),
#ifdef VK_USE_PLATFORM_WIN32_KHR
      GetPhysicalDeviceSurfacePresentModes2EXT(reinterpret_cast<PFN_vkGetPhysicalDeviceSurfacePresentModes2EXT>(
          get_proc_addr(instance, "vkGetPhysicalDeviceSurfacePresentModes2EXT"))),
      AcquireFullScreenExclusiveModeEXT(reinterpret_cast<PFN_vkAcquireFullScreenExclusiveModeEXT>(
          get_proc_addr(instance, "vkAcquireFullScreenExclusiveModeEXT"))),
      ReleaseFullScreenExclusiveModeEXT(reinterpret_cast<PFN_vkReleaseFullScreenExclusiveModeEXT>(
          get_proc_addr(instance, "vkReleaseFullScreenExclusiveModeEXT"))),
      GetDeviceGroupSurfacePresentModes2EXT(reinterpret_cast<PFN_vkGetDeviceGroupSurfacePresentModes2EXT>(
          get_proc_addr(instance, "vkGetDeviceGroupSurfacePresentModes2EXT"))),
#endif  // VK_USE_PLATFORM_WIN32_KHR
      CreateHeadlessSurfaceEXT(
          reinterpret_cast<PFN_vkCreateHeadlessSurfaceEXT>(get_proc_addr(instance, "vkCreateHeadlessSurfaceEXT"))),
      CmdSetLineStippleEXT(reinterpret_cast<PFN_vkCmdSetLineStippleEXT>(get_proc_addr(instance, "vkCmdSetLineStippleEXT"))),
      ResetQueryPoolEXT(reinterpret_cast<PFN_vkResetQueryPoolEXT>(get_proc_addr(instance, "vkResetQueryPoolEXT"))),
      CmdSetCullModeEXT(reinterpret_cast<PFN_vkCmdSetCullModeEXT>(get_proc_addr(instance, "vkCmdSetCullModeEXT"))),
      CmdSetFrontFaceEXT(reinterpret_cast<PFN_vkCmdSetFrontFaceEXT>(get_proc_addr(instance, "vkCmdSetFrontFaceEXT"))),
      CmdSetPrimitiveTopologyEXT(
          reinterpret_cast<PFN_vkCmdSetPrimitiveTopologyEXT>(get_proc_addr(instance, "vkCmdSetPrimitiveTopologyEXT"))),
      CmdSetViewportWithCountEXT(
          reinterpret_cast<PFN_vkCmdSetViewportWithCountEXT>(get_proc_addr(instance, "vkCmdSetViewportWithCountEXT"))),
      CmdSetScissorWithCountEXT(
          reinterpret_cast<PFN_vkCmdSetScissorWithCountEXT>(get_proc_addr(instance, "vkCmdSetScissorWithCountEXT"))),
      CmdBindVertexBuffers2EXT(
          reinterpret_cast<PFN_vkCmdBindVertexBuffers2EXT>(get_proc_addr(instance, "vkCmdBindVertexBuffers2EXT"))),
      CmdSetDepthTestEnableEXT(
          reinterpret_cast<PFN_vkCmdSetDepthTestEnableEXT>(get_proc_addr(instance, "vkCmdSetDepthTestEnableEXT"))),
      CmdSetDepthWriteEnableEXT(
          reinterpret_cast<PFN_vkCmdSetDepthWriteEnableEXT>(get_proc_addr(instance, "vkCmdSetDepthWriteEnableEXT"))),
      CmdSetDepthCompareOpEXT(
          reinterpret_cast<PFN_vkCmdSetDepthCompareOpEXT>(get_proc_addr(instance, "vkCmdSetDepthCompareOpEXT"))),
      CmdSetDepthBoundsTestEnableEXT(
          reinterpret_cast<PFN_vkCmdSetDepthBoundsTestEnableEXT>(get_proc_addr(instance, "vkCmdSetDepthBoundsTestEnableEXT"))),
      CmdSetStencilTestEnableEXT(
          reinterpret_cast<PFN_vkCmdSetStencilTestEnableEXT>(get_proc_addr(instance, "vkCmdSetStencilTestEnableEXT"))),
      CmdSetStencilOpEXT(reinterpret_cast<PFN_vkCmdSetStencilOpEXT>(get_proc_addr(instance, "vkCmdSetStencilOpEXT"))),
      CopyMemoryToImageEXT(reinterpret_cast<PFN_vkCopyMemoryToImageEXT>(get_proc_addr(instance, "vkCopyMemoryToImageEXT"))),
      CopyImageToMemoryEXT(reinterpret_cast<PFN_vkCopyImageToMemoryEXT>(get_proc_addr(instance, "vkCopyImageToMemoryEXT"))),
      CopyImageToImageEXT(reinterpret_cast<PFN_vkCopyImageToImageEXT>(get_proc_addr(instance, "vkCopyImageToImageEXT"))),
      TransitionImageLayoutEXT(
          reinterpret_cast<PFN_vkTransitionImageLayoutEXT>(get_proc_addr(instance, "vkTransitionImageLayoutEXT"))),
      GetImageSubresourceLayout2EXT(
          reinterpret_cast<PFN_vkGetImageSubresourceLayout2EXT>(get_proc_addr(instance, "vkGetImageSubresourceLayout2EXT"))),
      ReleaseSwapchainImagesEXT(
          reinterpret_cast<PFN_vkReleaseSwapchainImagesEXT>(get_proc_addr(instance, "vkReleaseSwapchainImagesEXT"))),
      GetGeneratedCommandsMemoryRequirementsNV(reinterpret_cast<PFN_vkGetGeneratedCommandsMemoryRequirementsNV>(
          get_proc_addr(instance, "vkGetGeneratedCommandsMemoryRequirementsNV"))),
      CmdPreprocessGeneratedCommandsNV(
          reinterpret_cast<PFN_vkCmdPreprocessGeneratedCommandsNV>(get_proc_addr(instance, "vkCmdPreprocessGeneratedCommandsNV"))),
      CmdExecuteGeneratedCommandsNV(
          reinterpret_cast<PFN_vkCmdExecuteGeneratedCommandsNV>(get_proc_addr(instance, "vkCmdExecuteGeneratedCommandsNV"))),
      CmdBindPipelineShaderGroupNV(
          reinterpret_cast<PFN_vkCmdBindPipelineShaderGroupNV>(get_proc_addr(instance, "vkCmdBindPipelineShaderGroupNV"))),
      CreateIndirectCommandsLayoutNV(
          reinterpret_cast<PFN_vkCreateIndirectCommandsLayoutNV>(get_proc_addr(instance, "vkCreateIndirectCommandsLayoutNV"))),
      DestroyIndirectCommandsLayoutNV(
          reinterpret_cast<PFN_vkDestroyIndirectCommandsLayoutNV>(get_proc_addr(instance, "vkDestroyIndirectCommandsLayoutNV"))),
      CmdSetDepthBias2EXT(reinterpret_cast<PFN_vkCmdSetDepthBias2EXT>(get_proc_addr(instance, "vkCmdSetDepthBias2EXT"))),
      AcquireDrmDisplayEXT(reinterpret_cast<PFN_vkAcquireDrmDisplayEXT>(get_proc_addr(instance, "vkAcquireDrmDisplayEXT"))),
      GetDrmDisplayEXT(reinterpret_cast<PFN_vkGetDrmDisplayEXT>(get_proc_addr(instance, "vkGetDrmDisplayEXT"))),
      CreatePrivateDataSlotEXT(
          reinterpret_cast<PFN_vkCreatePrivateDataSlotEXT>(get_proc_addr(instance, "vkCreatePrivateDataSlotEXT"))),
      DestroyPrivateDataSlotEXT(
          reinterpret_cast<PFN_vkDestroyPrivateDataSlotEXT>(get_proc_addr(instance, "vkDestroyPrivateDataSlotEXT"))),
      SetPrivateDataEXT(reinterpret_cast<PFN_vkSetPrivateDataEXT>(get_proc_addr(instance, "vkSetPrivateDataEXT"))),
      GetPrivateDataEXT(reinterpret_cast<PFN_vkGetPrivateDataEXT>(get_proc_addr(instance, "vkGetPrivateDataEXT"))),
#ifdef VK_ENABLE_BETA_EXTENSIONS
      CreateCudaModuleNV(reinterpret_cast<PFN_vkCreateCudaModuleNV>(get_proc_addr(instance, "vkCreateCudaModuleNV"))),
      GetCudaModuleCacheNV(reinterpret_cast<PFN_vkGetCudaModuleCacheNV>(get_proc_addr(instance, "vkGetCudaModuleCacheNV"))),
      CreateCudaFunctionNV(reinterpret_cast<PFN_vkCreateCudaFunctionNV>(get_proc_addr(instance, "vkCreateCudaFunctionNV"))),
      DestroyCudaModuleNV(reinterpret_cast<PFN_vkDestroyCudaModuleNV>(get_proc_addr(instance, "vkDestroyCudaModuleNV"))),
      DestroyCudaFunctionNV(reinterpret_cast<PFN_vkDestroyCudaFunctionNV>(get_proc_addr(instance, "vkDestroyCudaFunctionNV"))),
      CmdCudaLaunchKernelNV(reinterpret_cast<PFN_vkCmdCudaLaunchKernelNV>(get_proc_addr(instance, "vkCmdCudaLaunchKernelNV"))),
#endif  // VK_ENABLE_BETA_EXTENSIONS
#ifdef VK_USE_PLATFORM_METAL_EXT
      ExportMetalObjectsEXT(reinterpret_cast<PFN_vkExportMetalObjectsEXT>(get_proc_addr(instance, "vkExportMetalObjectsEXT"))),
#endif  // VK_USE_PLATFORM_METAL_EXT
      GetDescriptorSetLayoutSizeEXT(
          reinterpret_cast<PFN_vkGetDescriptorSetLayoutSizeEXT>(get_proc_addr(instance, "vkGetDescriptorSetLayoutSizeEXT"))),
      GetDescriptorSetLayoutBindingOffsetEXT(reinterpret_cast<PFN_vkGetDescriptorSetLayoutBindingOffsetEXT>(
          get_proc_addr(instance, "vkGetDescriptorSetLayoutBindingOffsetEXT"))),
      GetDescriptorEXT(reinterpret_cast<PFN_vkGetDescriptorEXT>(get_proc_addr(instance, "vkGetDescriptorEXT"))),
      CmdBindDescriptorBuffersEXT(
          reinterpret_cast<PFN_vkCmdBindDescriptorBuffersEXT>(get_proc_addr(instance, "vkCmdBindDescriptorBuffersEXT"))),
      CmdSetDescriptorBufferOffsetsEXT(
          reinterpret_cast<PFN_vkCmdSetDescriptorBufferOffsetsEXT>(get_proc_addr(instance, "vkCmdSetDescriptorBufferOffsetsEXT"))),
      CmdBindDescriptorBufferEmbeddedSamplersEXT(reinterpret_cast<PFN_vkCmdBindDescriptorBufferEmbeddedSamplersEXT>(
          get_proc_addr(instance, "vkCmdBindDescriptorBufferEmbeddedSamplersEXT"))),
      GetBufferOpaqueCaptureDescriptorDataEXT(reinterpret_cast<PFN_vkGetBufferOpaqueCaptureDescriptorDataEXT>(
          get_proc_addr(instance, "vkGetBufferOpaqueCaptureDescriptorDataEXT"))),
      GetImageOpaqueCaptureDescriptorDataEXT(reinterpret_cast<PFN_vkGetImageOpaqueCaptureDescriptorDataEXT>(
          get_proc_addr(instance, "vkGetImageOpaqueCaptureDescriptorDataEXT"))),
      GetImageViewOpaqueCaptureDescriptorDataEXT(reinterpret_cast<PFN_vkGetImageViewOpaqueCaptureDescriptorDataEXT>(
          get_proc_addr(instance, "vkGetImageViewOpaqueCaptureDescriptorDataEXT"))),
      GetSamplerOpaqueCaptureDescriptorDataEXT(reinterpret_cast<PFN_vkGetSamplerOpaqueCaptureDescriptorDataEXT>(
          get_proc_addr(instance, "vkGetSamplerOpaqueCaptureDescriptorDataEXT"))),
      GetAccelerationStructureOpaqueCaptureDescriptorDataEXT(
          reinterpret_cast<PFN_vkGetAccelerationStructureOpaqueCaptureDescriptorDataEXT>(
              get_proc_addr(instance, "vkGetAccelerationStructureOpaqueCaptureDescriptorDataEXT"))),
      CmdSetFragmentShadingRateEnumNV(
          reinterpret_cast<PFN_vkCmdSetFragmentShadingRateEnumNV>(get_proc_addr(instance, "vkCmdSetFragmentShadingRateEnumNV"))),
      GetDeviceFaultInfoEXT(reinterpret_cast<PFN_vkGetDeviceFaultInfoEXT>(get_proc_addr(instance, "vkGetDeviceFaultInfoEXT"))),
#ifdef VK_USE_PLATFORM_WIN32_KHR
      AcquireWinrtDisplayNV(reinterpret_cast<PFN_vkAcquireWinrtDisplayNV>(get_proc_addr(instance, "vkAcquireWinrtDisplayNV"))),
      GetWinrtDisplayNV(reinterpret_cast<PFN_vkGetWinrtDisplayNV>(get_proc_addr(instance, "vkGetWinrtDisplayNV"))),
#endif  // VK_USE_PLATFORM_WIN32_KHR
#ifdef VK_USE_PLATFORM_DIRECTFB_EXT
      CreateDirectFBSurfaceEXT(
          reinterpret_cast<PFN_vkCreateDirectFBSurfaceEXT>(get_proc_addr(instance, "vkCreateDirectFBSurfaceEXT"))),
      GetPhysicalDeviceDirectFBPresentationSupportEXT(reinterpret_cast<PFN_vkGetPhysicalDeviceDirectFBPresentationSupportEXT>(
          get_proc_addr(instance, "vkGetPhysicalDeviceDirectFBPresentationSupportEXT"))),
#endif  // VK_USE_PLATFORM_DIRECTFB_EXT
      CmdSetVertexInputEXT(reinterpret_cast<PFN_vkCmdSetVertexInputEXT>(get_proc_addr(instance, "vkCmdSetVertexInputEXT"))),
#ifdef VK_USE_PLATFORM_FUCHSIA
      GetMemoryZirconHandleFUCHSIA(
          reinterpret_cast<PFN_vkGetMemoryZirconHandleFUCHSIA>(get_proc_addr(instance, "vkGetMemoryZirconHandleFUCHSIA"))),
      GetMemoryZirconHandlePropertiesFUCHSIA(reinterpret_cast<PFN_vkGetMemoryZirconHandlePropertiesFUCHSIA>(
          get_proc_addr(instance, "vkGetMemoryZirconHandlePropertiesFUCHSIA"))),
      ImportSemaphoreZirconHandleFUCHSIA(reinterpret_cast<PFN_vkImportSemaphoreZirconHandleFUCHSIA>(
          get_proc_addr(instance, "vkImportSemaphoreZirconHandleFUCHSIA"))),
      GetSemaphoreZirconHandleFUCHSIA(
          reinterpret_cast<PFN_vkGetSemaphoreZirconHandleFUCHSIA>(get_proc_addr(instance, "vkGetSemaphoreZirconHandleFUCHSIA"))),
      CreateBufferCollectionFUCHSIA(
          reinterpret_cast<PFN_vkCreateBufferCollectionFUCHSIA>(get_proc_addr(instance, "vkCreateBufferCollectionFUCHSIA"))),
      SetBufferCollectionImageConstraintsFUCHSIA(reinterpret_cast<PFN_vkSetBufferCollectionImageConstraintsFUCHSIA>(
          get_proc_addr(instance, "vkSetBufferCollectionImageConstraintsFUCHSIA"))),
      SetBufferCollectionBufferConstraintsFUCHSIA(reinterpret_cast<PFN_vkSetBufferCollectionBufferConstraintsFUCHSIA>(
          get_proc_addr(instance, "vkSetBufferCollectionBufferConstraintsFUCHSIA"))),
      DestroyBufferCollectionFUCHSIA(
          reinterpret_cast<PFN_vkDestroyBufferCollectionFUCHSIA>(get_proc_addr(instance, "vkDestroyBufferCollectionFUCHSIA"))),
      GetBufferCollectionPropertiesFUCHSIA(reinterpret_cast<PFN_vkGetBufferCollectionPropertiesFUCHSIA>(
          get_proc_addr(instance, "vkGetBufferCollectionPropertiesFUCHSIA"))),
#endif  // VK_USE_PLATFORM_FUCHSIA
      GetDeviceSubpassShadingMaxWorkgroupSizeHUAWEI(reinterpret_cast<PFN_vkGetDeviceSubpassShadingMaxWorkgroupSizeHUAWEI>(
          get_proc_addr(instance, "vkGetDeviceSubpassShadingMaxWorkgroupSizeHUAWEI"))),
      CmdSubpassShadingHUAWEI(
          reinterpret_cast<PFN_vkCmdSubpassShadingHUAWEI>(get_proc_addr(instance, "vkCmdSubpassShadingHUAWEI"))),
      CmdBindInvocationMaskHUAWEI(
          reinterpret_cast<PFN_vkCmdBindInvocationMaskHUAWEI>(get_proc_addr(instance, "vkCmdBindInvocationMaskHUAWEI"))),
      GetMemoryRemoteAddressNV(
          reinterpret_cast<PFN_vkGetMemoryRemoteAddressNV>(get_proc_addr(instance, "vkGetMemoryRemoteAddressNV"))),
      GetPipelinePropertiesEXT(
          reinterpret_cast<PFN_vkGetPipelinePropertiesEXT>(get_proc_addr(instance, "vkGetPipelinePropertiesEXT"))),
      CmdSetPatchControlPointsEXT(
          reinterpret_cast<PFN_vkCmdSetPatchControlPointsEXT>(get_proc_addr(instance, "vkCmdSetPatchControlPointsEXT"))),
      CmdSetRasterizerDiscardEnableEXT(
          reinterpret_cast<PFN_vkCmdSetRasterizerDiscardEnableEXT>(get_proc_addr(instance, "vkCmdSetRasterizerDiscardEnableEXT"))),
      CmdSetDepthBiasEnableEXT(
          reinterpret_cast<PFN_vkCmdSetDepthBiasEnableEXT>(get_proc_addr(instance, "vkCmdSetDepthBiasEnableEXT"))),
      CmdSetLogicOpEXT(reinterpret_cast<PFN_vkCmdSetLogicOpEXT>(get_proc_addr(instance, "vkCmdSetLogicOpEXT"))),
      CmdSetPrimitiveRestartEnableEXT(
          reinterpret_cast<PFN_vkCmdSetPrimitiveRestartEnableEXT>(get_proc_addr(instance, "vkCmdSetPrimitiveRestartEnableEXT"))),
#ifdef VK_USE_PLATFORM_SCREEN_QNX
      CreateScreenSurfaceQNX(reinterpret_cast<PFN_vkCreateScreenSurfaceQNX>(get_proc_addr(instance, "vkCreateScreenSurfaceQNX"))),
      GetPhysicalDeviceScreenPresentationSupportQNX(reinterpret_cast<PFN_vkGetPhysicalDeviceScreenPresentationSupportQNX>(
          get_proc_addr(instance, "vkGetPhysicalDeviceScreenPresentationSupportQNX"))),
#endif  // VK_USE_PLATFORM_SCREEN_QNX
      CmdSetColorWriteEnableEXT(
          reinterpret_cast<PFN_vkCmdSetColorWriteEnableEXT>(get_proc_addr(instance, "vkCmdSetColorWriteEnableEXT"))),
      CmdDrawMultiEXT(reinterpret_cast<PFN_vkCmdDrawMultiEXT>(get_proc_addr(instance, "vkCmdDrawMultiEXT"))),
      CmdDrawMultiIndexedEXT(reinterpret_cast<PFN_vkCmdDrawMultiIndexedEXT>(get_proc_addr(instance, "vkCmdDrawMultiIndexedEXT"))),
      CreateMicromapEXT(reinterpret_cast<PFN_vkCreateMicromapEXT>(get_proc_addr(instance, "vkCreateMicromapEXT"))),
      DestroyMicromapEXT(reinterpret_cast<PFN_vkDestroyMicromapEXT>(get_proc_addr(instance, "vkDestroyMicromapEXT"))),
      CmdBuildMicromapsEXT(reinterpret_cast<PFN_vkCmdBuildMicromapsEXT>(get_proc_addr(instance, "vkCmdBuildMicromapsEXT"))),
      BuildMicromapsEXT(reinterpret_cast<PFN_vkBuildMicromapsEXT>(get_proc_addr(instance, "vkBuildMicromapsEXT"))),
      CopyMicromapEXT(reinterpret_cast<PFN_vkCopyMicromapEXT>(get_proc_addr(instance, "vkCopyMicromapEXT"))),
      CopyMicromapToMemoryEXT(
          reinterpret_cast<PFN_vkCopyMicromapToMemoryEXT>(get_proc_addr(instance, "vkCopyMicromapToMemoryEXT"))),
      CopyMemoryToMicromapEXT(
          reinterpret_cast<PFN_vkCopyMemoryToMicromapEXT>(get_proc_addr(instance, "vkCopyMemoryToMicromapEXT"))),
      WriteMicromapsPropertiesEXT(
          reinterpret_cast<PFN_vkWriteMicromapsPropertiesEXT>(get_proc_addr(instance, "vkWriteMicromapsPropertiesEXT"))),
      CmdCopyMicromapEXT(reinterpret_cast<PFN_vkCmdCopyMicromapEXT>(get_proc_addr(instance, "vkCmdCopyMicromapEXT"))),
      CmdCopyMicromapToMemoryEXT(
          reinterpret_cast<PFN_vkCmdCopyMicromapToMemoryEXT>(get_proc_addr(instance, "vkCmdCopyMicromapToMemoryEXT"))),
      CmdCopyMemoryToMicromapEXT(
          reinterpret_cast<PFN_vkCmdCopyMemoryToMicromapEXT>(get_proc_addr(instance, "vkCmdCopyMemoryToMicromapEXT"))),
      CmdWriteMicromapsPropertiesEXT(
          reinterpret_cast<PFN_vkCmdWriteMicromapsPropertiesEXT>(get_proc_addr(instance, "vkCmdWriteMicromapsPropertiesEXT"))),
      GetDeviceMicromapCompatibilityEXT(reinterpret_cast<PFN_vkGetDeviceMicromapCompatibilityEXT>(
          get_proc_addr(instance, "vkGetDeviceMicromapCompatibilityEXT"))),
      GetMicromapBuildSizesEXT(
          reinterpret_cast<PFN_vkGetMicromapBuildSizesEXT>(get_proc_addr(instance, "vkGetMicromapBuildSizesEXT"))),
      CmdDrawClusterHUAWEI(reinterpret_cast<PFN_vkCmdDrawClusterHUAWEI>(get_proc_addr(instance, "vkCmdDrawClusterHUAWEI"))),
      CmdDrawClusterIndirectHUAWEI(
          reinterpret_cast<PFN_vkCmdDrawClusterIndirectHUAWEI>(get_proc_addr(instance, "vkCmdDrawClusterIndirectHUAWEI"))),
      SetDeviceMemoryPriorityEXT(
          reinterpret_cast<PFN_vkSetDeviceMemoryPriorityEXT>(get_proc_addr(instance, "vkSetDeviceMemoryPriorityEXT"))),
      GetDescriptorSetLayoutHostMappingInfoVALVE(reinterpret_cast<PFN_vkGetDescriptorSetLayoutHostMappingInfoVALVE>(
          get_proc_addr(instance, "vkGetDescriptorSetLayoutHostMappingInfoVALVE"))),
      GetDescriptorSetHostMappingVALVE(
          reinterpret_cast<PFN_vkGetDescriptorSetHostMappingVALVE>(get_proc_addr(instance, "vkGetDescriptorSetHostMappingVALVE"))),
      CmdCopyMemoryIndirectNV(
          reinterpret_cast<PFN_vkCmdCopyMemoryIndirectNV>(get_proc_addr(instance, "vkCmdCopyMemoryIndirectNV"))),
      CmdCopyMemoryToImageIndirectNV(
          reinterpret_cast<PFN_vkCmdCopyMemoryToImageIndirectNV>(get_proc_addr(instance, "vkCmdCopyMemoryToImageIndirectNV"))),
      CmdDecompressMemoryNV(reinterpret_cast<PFN_vkCmdDecompressMemoryNV>(get_proc_addr(instance, "vkCmdDecompressMemoryNV"))),
      CmdDecompressMemoryIndirectCountNV(reinterpret_cast<PFN_vkCmdDecompressMemoryIndirectCountNV>(
          get_proc_addr(instance, "vkCmdDecompressMemoryIndirectCountNV"))),
      GetPipelineIndirectMemoryRequirementsNV(reinterpret_cast<PFN_vkGetPipelineIndirectMemoryRequirementsNV>(
          get_proc_addr(instance, "vkGetPipelineIndirectMemoryRequirementsNV"))),
      CmdUpdatePipelineIndirectBufferNV(reinterpret_cast<PFN_vkCmdUpdatePipelineIndirectBufferNV>(
          get_proc_addr(instance, "vkCmdUpdatePipelineIndirectBufferNV"))),
      GetPipelineIndirectDeviceAddressNV(reinterpret_cast<PFN_vkGetPipelineIndirectDeviceAddressNV>(
          get_proc_addr(instance, "vkGetPipelineIndirectDeviceAddressNV"))),
      CmdSetDepthClampEnableEXT(
          reinterpret_cast<PFN_vkCmdSetDepthClampEnableEXT>(get_proc_addr(instance, "vkCmdSetDepthClampEnableEXT"))),
      CmdSetPolygonModeEXT(reinterpret_cast<PFN_vkCmdSetPolygonModeEXT>(get_proc_addr(instance, "vkCmdSetPolygonModeEXT"))),
      CmdSetRasterizationSamplesEXT(
          reinterpret_cast<PFN_vkCmdSetRasterizationSamplesEXT>(get_proc_addr(instance, "vkCmdSetRasterizationSamplesEXT"))),
      CmdSetSampleMaskEXT(reinterpret_cast<PFN_vkCmdSetSampleMaskEXT>(get_proc_addr(instance, "vkCmdSetSampleMaskEXT"))),
      CmdSetAlphaToCoverageEnableEXT(
          reinterpret_cast<PFN_vkCmdSetAlphaToCoverageEnableEXT>(get_proc_addr(instance, "vkCmdSetAlphaToCoverageEnableEXT"))),
      CmdSetAlphaToOneEnableEXT(
          reinterpret_cast<PFN_vkCmdSetAlphaToOneEnableEXT>(get_proc_addr(instance, "vkCmdSetAlphaToOneEnableEXT"))),
      CmdSetLogicOpEnableEXT(reinterpret_cast<PFN_vkCmdSetLogicOpEnableEXT>(get_proc_addr(instance, "vkCmdSetLogicOpEnableEXT"))),
      CmdSetColorBlendEnableEXT(
          reinterpret_cast<PFN_vkCmdSetColorBlendEnableEXT>(get_proc_addr(instance, "vkCmdSetColorBlendEnableEXT"))),
      CmdSetColorBlendEquationEXT(
          reinterpret_cast<PFN_vkCmdSetColorBlendEquationEXT>(get_proc_addr(instance, "vkCmdSetColorBlendEquationEXT"))),
      CmdSetColorWriteMaskEXT(
          reinterpret_cast<PFN_vkCmdSetColorWriteMaskEXT>(get_proc_addr(instance, "vkCmdSetColorWriteMaskEXT"))),
      CmdSetTessellationDomainOriginEXT(reinterpret_cast<PFN_vkCmdSetTessellationDomainOriginEXT>(
          get_proc_addr(instance, "vkCmdSetTessellationDomainOriginEXT"))),
      CmdSetRasterizationStreamEXT(
          reinterpret_cast<PFN_vkCmdSetRasterizationStreamEXT>(get_proc_addr(instance, "vkCmdSetRasterizationStreamEXT"))),
      CmdSetConservativeRasterizationModeEXT(reinterpret_cast<PFN_vkCmdSetConservativeRasterizationModeEXT>(
          get_proc_addr(instance, "vkCmdSetConservativeRasterizationModeEXT"))),
      CmdSetExtraPrimitiveOverestimationSizeEXT(reinterpret_cast<PFN_vkCmdSetExtraPrimitiveOverestimationSizeEXT>(
          get_proc_addr(instance, "vkCmdSetExtraPrimitiveOverestimationSizeEXT"))),
      CmdSetDepthClipEnableEXT(
          reinterpret_cast<PFN_vkCmdSetDepthClipEnableEXT>(get_proc_addr(instance, "vkCmdSetDepthClipEnableEXT"))),
      CmdSetSampleLocationsEnableEXT(
          reinterpret_cast<PFN_vkCmdSetSampleLocationsEnableEXT>(get_proc_addr(instance, "vkCmdSetSampleLocationsEnableEXT"))),
      CmdSetColorBlendAdvancedEXT(
          reinterpret_cast<PFN_vkCmdSetColorBlendAdvancedEXT>(get_proc_addr(instance, "vkCmdSetColorBlendAdvancedEXT"))),
      CmdSetProvokingVertexModeEXT(
          reinterpret_cast<PFN_vkCmdSetProvokingVertexModeEXT>(get_proc_addr(instance, "vkCmdSetProvokingVertexModeEXT"))),
      CmdSetLineRasterizationModeEXT(
          reinterpret_cast<PFN_vkCmdSetLineRasterizationModeEXT>(get_proc_addr(instance, "vkCmdSetLineRasterizationModeEXT"))),
      CmdSetLineStippleEnableEXT(
          reinterpret_cast<PFN_vkCmdSetLineStippleEnableEXT>(get_proc_addr(instance, "vkCmdSetLineStippleEnableEXT"))),
      CmdSetDepthClipNegativeOneToOneEXT(reinterpret_cast<PFN_vkCmdSetDepthClipNegativeOneToOneEXT>(
          get_proc_addr(instance, "vkCmdSetDepthClipNegativeOneToOneEXT"))),
      CmdSetViewportWScalingEnableNV(
          reinterpret_cast<PFN_vkCmdSetViewportWScalingEnableNV>(get_proc_addr(instance, "vkCmdSetViewportWScalingEnableNV"))),
      CmdSetViewportSwizzleNV(
          reinterpret_cast<PFN_vkCmdSetViewportSwizzleNV>(get_proc_addr(instance, "vkCmdSetViewportSwizzleNV"))),
      CmdSetCoverageToColorEnableNV(
          reinterpret_cast<PFN_vkCmdSetCoverageToColorEnableNV>(get_proc_addr(instance, "vkCmdSetCoverageToColorEnableNV"))),
      CmdSetCoverageToColorLocationNV(
          reinterpret_cast<PFN_vkCmdSetCoverageToColorLocationNV>(get_proc_addr(instance, "vkCmdSetCoverageToColorLocationNV"))),
      CmdSetCoverageModulationModeNV(
          reinterpret_cast<PFN_vkCmdSetCoverageModulationModeNV>(get_proc_addr(instance, "vkCmdSetCoverageModulationModeNV"))),
      CmdSetCoverageModulationTableEnableNV(reinterpret_cast<PFN_vkCmdSetCoverageModulationTableEnableNV>(
          get_proc_addr(instance, "vkCmdSetCoverageModulationTableEnableNV"))),
      CmdSetCoverageModulationTableNV(
          reinterpret_cast<PFN_vkCmdSetCoverageModulationTableNV>(get_proc_addr(instance, "vkCmdSetCoverageModulationTableNV"))),
      CmdSetShadingRateImageEnableNV(
          reinterpret_cast<PFN_vkCmdSetShadingRateImageEnableNV>(get_proc_addr(instance, "vkCmdSetShadingRateImageEnableNV"))),
      CmdSetRepresentativeFragmentTestEnableNV(reinterpret_cast<PFN_vkCmdSetRepresentativeFragmentTestEnableNV>(
          get_proc_addr(instance, "vkCmdSetRepresentativeFragmentTestEnableNV"))),
      CmdSetCoverageReductionModeNV(
          reinterpret_cast<PFN_vkCmdSetCoverageReductionModeNV>(get_proc_addr(instance, "vkCmdSetCoverageReductionModeNV"))),
      GetShaderModuleIdentifierEXT(
          reinterpret_cast<PFN_vkGetShaderModuleIdentifierEXT>(get_proc_addr(instance, "vkGetShaderModuleIdentifierEXT"))),
      GetShaderModuleCreateInfoIdentifierEXT(reinterpret_cast<PFN_vkGetShaderModuleCreateInfoIdentifierEXT>(
          get_proc_addr(instance, "vkGetShaderModuleCreateInfoIdentifierEXT"))),
      GetPhysicalDeviceOpticalFlowImageFormatsNV(reinterpret_cast<PFN_vkGetPhysicalDeviceOpticalFlowImageFormatsNV>(
          get_proc_addr(instance, "vkGetPhysicalDeviceOpticalFlowImageFormatsNV"))),
      CreateOpticalFlowSessionNV(
          reinterpret_cast<PFN_vkCreateOpticalFlowSessionNV>(get_proc_addr(instance, "vkCreateOpticalFlowSessionNV"))),
      DestroyOpticalFlowSessionNV(
          reinterpret_cast<PFN_vkDestroyOpticalFlowSessionNV>(get_proc_addr(instance, "vkDestroyOpticalFlowSessionNV"))),
      BindOpticalFlowSessionImageNV(
          reinterpret_cast<PFN_vkBindOpticalFlowSessionImageNV>(get_proc_addr(instance, "vkBindOpticalFlowSessionImageNV"))),
      CmdOpticalFlowExecuteNV(
          reinterpret_cast<PFN_vkCmdOpticalFlowExecuteNV>(get_proc_addr(instance, "vkCmdOpticalFlowExecuteNV"))),
      AntiLagUpdateAMD(reinterpret_cast<PFN_vkAntiLagUpdateAMD>(get_proc_addr(instance, "vkAntiLagUpdateAMD"))),
      CreateShadersEXT(reinterpret_cast<PFN_vkCreateShadersEXT>(get_proc_addr(instance, "vkCreateShadersEXT"))),
      DestroyShaderEXT(reinterpret_cast<PFN_vkDestroyShaderEXT>(get_proc_addr(instance, "vkDestroyShaderEXT"))),
      GetShaderBinaryDataEXT(reinterpret_cast<PFN_vkGetShaderBinaryDataEXT>(get_proc_addr(instance, "vkGetShaderBinaryDataEXT"))),
      CmdBindShadersEXT(reinterpret_cast<PFN_vkCmdBindShadersEXT>(get_proc_addr(instance, "vkCmdBindShadersEXT"))),
      CmdSetDepthClampRangeEXT(
          reinterpret_cast<PFN_vkCmdSetDepthClampRangeEXT>(get_proc_addr(instance, "vkCmdSetDepthClampRangeEXT"))),
      GetFramebufferTilePropertiesQCOM(
          reinterpret_cast<PFN_vkGetFramebufferTilePropertiesQCOM>(get_proc_addr(instance, "vkGetFramebufferTilePropertiesQCOM"))),
      GetDynamicRenderingTilePropertiesQCOM(reinterpret_cast<PFN_vkGetDynamicRenderingTilePropertiesQCOM>(
          get_proc_addr(instance, "vkGetDynamicRenderingTilePropertiesQCOM"))),
      GetPhysicalDeviceCooperativeVectorPropertiesNV(reinterpret_cast<PFN_vkGetPhysicalDeviceCooperativeVectorPropertiesNV>(
          get_proc_addr(instance, "vkGetPhysicalDeviceCooperativeVectorPropertiesNV"))),
      ConvertCooperativeVectorMatrixNV(
          reinterpret_cast<PFN_vkConvertCooperativeVectorMatrixNV>(get_proc_addr(instance, "vkConvertCooperativeVectorMatrixNV"))),
      CmdConvertCooperativeVectorMatrixNV(reinterpret_cast<PFN_vkCmdConvertCooperativeVectorMatrixNV>(
          get_proc_addr(instance, "vkCmdConvertCooperativeVectorMatrixNV"))),
      SetLatencySleepModeNV(reinterpret_cast<PFN_vkSetLatencySleepModeNV>(get_proc_addr(instance, "vkSetLatencySleepModeNV"))),
      LatencySleepNV(reinterpret_cast<PFN_vkLatencySleepNV>(get_proc_addr(instance, "vkLatencySleepNV"))),
      SetLatencyMarkerNV(reinterpret_cast<PFN_vkSetLatencyMarkerNV>(get_proc_addr(instance, "vkSetLatencyMarkerNV"))),
      GetLatencyTimingsNV(reinterpret_cast<PFN_vkGetLatencyTimingsNV>(get_proc_addr(instance, "vkGetLatencyTimingsNV"))),
      QueueNotifyOutOfBandNV(reinterpret_cast<PFN_vkQueueNotifyOutOfBandNV>(get_proc_addr(instance, "vkQueueNotifyOutOfBandNV"))),
      CmdSetAttachmentFeedbackLoopEnableEXT(reinterpret_cast<PFN_vkCmdSetAttachmentFeedbackLoopEnableEXT>(
          get_proc_addr(instance, "vkCmdSetAttachmentFeedbackLoopEnableEXT"))),
#ifdef VK_USE_PLATFORM_SCREEN_QNX
      GetScreenBufferPropertiesQNX(
          reinterpret_cast<PFN_vkGetScreenBufferPropertiesQNX>(get_proc_addr(instance, "vkGetScreenBufferPropertiesQNX"))),
#endif  // VK_USE_PLATFORM_SCREEN_QNX
      GetClusterAccelerationStructureBuildSizesNV(reinterpret_cast<PFN_vkGetClusterAccelerationStructureBuildSizesNV>(
          get_proc_addr(instance, "vkGetClusterAccelerationStructureBuildSizesNV"))),
      CmdBuildClusterAccelerationStructureIndirectNV(reinterpret_cast<PFN_vkCmdBuildClusterAccelerationStructureIndirectNV>(
          get_proc_addr(instance, "vkCmdBuildClusterAccelerationStructureIndirectNV"))),
      GetPartitionedAccelerationStructuresBuildSizesNV(reinterpret_cast<PFN_vkGetPartitionedAccelerationStructuresBuildSizesNV>(
          get_proc_addr(instance, "vkGetPartitionedAccelerationStructuresBuildSizesNV"))),
      CmdBuildPartitionedAccelerationStructuresNV(reinterpret_cast<PFN_vkCmdBuildPartitionedAccelerationStructuresNV>(
          get_proc_addr(instance, "vkCmdBuildPartitionedAccelerationStructuresNV"))),
      GetGeneratedCommandsMemoryRequirementsEXT(reinterpret_cast<PFN_vkGetGeneratedCommandsMemoryRequirementsEXT>(
          get_proc_addr(instance, "vkGetGeneratedCommandsMemoryRequirementsEXT"))),
      CmdPreprocessGeneratedCommandsEXT(reinterpret_cast<PFN_vkCmdPreprocessGeneratedCommandsEXT>(
          get_proc_addr(instance, "vkCmdPreprocessGeneratedCommandsEXT"))),
      CmdExecuteGeneratedCommandsEXT(
          reinterpret_cast<PFN_vkCmdExecuteGeneratedCommandsEXT>(get_proc_addr(instance, "vkCmdExecuteGeneratedCommandsEXT"))),
      CreateIndirectCommandsLayoutEXT(
          reinterpret_cast<PFN_vkCreateIndirectCommandsLayoutEXT>(get_proc_addr(instance, "vkCreateIndirectCommandsLayoutEXT"))),
      DestroyIndirectCommandsLayoutEXT(
          reinterpret_cast<PFN_vkDestroyIndirectCommandsLayoutEXT>(get_proc_addr(instance, "vkDestroyIndirectCommandsLayoutEXT"))),
      CreateIndirectExecutionSetEXT(
          reinterpret_cast<PFN_vkCreateIndirectExecutionSetEXT>(get_proc_addr(instance, "vkCreateIndirectExecutionSetEXT"))),
      DestroyIndirectExecutionSetEXT(
          reinterpret_cast<PFN_vkDestroyIndirectExecutionSetEXT>(get_proc_addr(instance, "vkDestroyIndirectExecutionSetEXT"))),
      UpdateIndirectExecutionSetPipelineEXT(reinterpret_cast<PFN_vkUpdateIndirectExecutionSetPipelineEXT>(
          get_proc_addr(instance, "vkUpdateIndirectExecutionSetPipelineEXT"))),
      UpdateIndirectExecutionSetShaderEXT(reinterpret_cast<PFN_vkUpdateIndirectExecutionSetShaderEXT>(
          get_proc_addr(instance, "vkUpdateIndirectExecutionSetShaderEXT"))),
      GetPhysicalDeviceCooperativeMatrixFlexibleDimensionsPropertiesNV(
          reinterpret_cast<PFN_vkGetPhysicalDeviceCooperativeMatrixFlexibleDimensionsPropertiesNV>(
              get_proc_addr(instance, "vkGetPhysicalDeviceCooperativeMatrixFlexibleDimensionsPropertiesNV"))),
#ifdef VK_USE_PLATFORM_METAL_EXT
      GetMemoryMetalHandleEXT(
          reinterpret_cast<PFN_vkGetMemoryMetalHandleEXT>(get_proc_addr(instance, "vkGetMemoryMetalHandleEXT"))),
      GetMemoryMetalHandlePropertiesEXT(reinterpret_cast<PFN_vkGetMemoryMetalHandlePropertiesEXT>(
          get_proc_addr(instance, "vkGetMemoryMetalHandlePropertiesEXT"))),
#endif  // VK_USE_PLATFORM_METAL_EXT
      CreateAccelerationStructureKHR(
          reinterpret_cast<PFN_vkCreateAccelerationStructureKHR>(get_proc_addr(instance, "vkCreateAccelerationStructureKHR"))),
      DestroyAccelerationStructureKHR(
          reinterpret_cast<PFN_vkDestroyAccelerationStructureKHR>(get_proc_addr(instance, "vkDestroyAccelerationStructureKHR"))),
      CmdBuildAccelerationStructuresKHR(reinterpret_cast<PFN_vkCmdBuildAccelerationStructuresKHR>(
          get_proc_addr(instance, "vkCmdBuildAccelerationStructuresKHR"))),
      CmdBuildAccelerationStructuresIndirectKHR(reinterpret_cast<PFN_vkCmdBuildAccelerationStructuresIndirectKHR>(
          get_proc_addr(instance, "vkCmdBuildAccelerationStructuresIndirectKHR"))),
      BuildAccelerationStructuresKHR(
          reinterpret_cast<PFN_vkBuildAccelerationStructuresKHR>(get_proc_addr(instance, "vkBuildAccelerationStructuresKHR"))),
      CopyAccelerationStructureKHR(
          reinterpret_cast<PFN_vkCopyAccelerationStructureKHR>(get_proc_addr(instance, "vkCopyAccelerationStructureKHR"))),
      CopyAccelerationStructureToMemoryKHR(reinterpret_cast<PFN_vkCopyAccelerationStructureToMemoryKHR>(
          get_proc_addr(instance, "vkCopyAccelerationStructureToMemoryKHR"))),
      CopyMemoryToAccelerationStructureKHR(reinterpret_cast<PFN_vkCopyMemoryToAccelerationStructureKHR>(
          get_proc_addr(instance, "vkCopyMemoryToAccelerationStructureKHR"))),
      WriteAccelerationStructuresPropertiesKHR(reinterpret_cast<PFN_vkWriteAccelerationStructuresPropertiesKHR>(
          get_proc_addr(instance, "vkWriteAccelerationStructuresPropertiesKHR"))),
      CmdCopyAccelerationStructureKHR(
          reinterpret_cast<PFN_vkCmdCopyAccelerationStructureKHR>(get_proc_addr(instance, "vkCmdCopyAccelerationStructureKHR"))),
      CmdCopyAccelerationStructureToMemoryKHR(reinterpret_cast<PFN_vkCmdCopyAccelerationStructureToMemoryKHR>(
          get_proc_addr(instance, "vkCmdCopyAccelerationStructureToMemoryKHR"))),
      CmdCopyMemoryToAccelerationStructureKHR(reinterpret_cast<PFN_vkCmdCopyMemoryToAccelerationStructureKHR>(
          get_proc_addr(instance, "vkCmdCopyMemoryToAccelerationStructureKHR"))),
      GetAccelerationStructureDeviceAddressKHR(reinterpret_cast<PFN_vkGetAccelerationStructureDeviceAddressKHR>(
          get_proc_addr(instance, "vkGetAccelerationStructureDeviceAddressKHR"))),
      CmdWriteAccelerationStructuresPropertiesKHR(reinterpret_cast<PFN_vkCmdWriteAccelerationStructuresPropertiesKHR>(
          get_proc_addr(instance, "vkCmdWriteAccelerationStructuresPropertiesKHR"))),
      GetDeviceAccelerationStructureCompatibilityKHR(reinterpret_cast<PFN_vkGetDeviceAccelerationStructureCompatibilityKHR>(
          get_proc_addr(instance, "vkGetDeviceAccelerationStructureCompatibilityKHR"))),
      GetAccelerationStructureBuildSizesKHR(reinterpret_cast<PFN_vkGetAccelerationStructureBuildSizesKHR>(
          get_proc_addr(instance, "vkGetAccelerationStructureBuildSizesKHR"))),
      CmdTraceRaysKHR(reinterpret_cast<PFN_vkCmdTraceRaysKHR>(get_proc_addr(instance, "vkCmdTraceRaysKHR"))),
      CreateRayTracingPipelinesKHR(
          reinterpret_cast<PFN_vkCreateRayTracingPipelinesKHR>(get_proc_addr(instance, "vkCreateRayTracingPipelinesKHR"))),
      GetRayTracingCaptureReplayShaderGroupHandlesKHR(reinterpret_cast<PFN_vkGetRayTracingCaptureReplayShaderGroupHandlesKHR>(
          get_proc_addr(instance, "vkGetRayTracingCaptureReplayShaderGroupHandlesKHR"))),
      CmdTraceRaysIndirectKHR(
          reinterpret_cast<PFN_vkCmdTraceRaysIndirectKHR>(get_proc_addr(instance, "vkCmdTraceRaysIndirectKHR"))),
      GetRayTracingShaderGroupStackSizeKHR(reinterpret_cast<PFN_vkGetRayTracingShaderGroupStackSizeKHR>(
          get_proc_addr(instance, "vkGetRayTracingShaderGroupStackSizeKHR"))),
      CmdSetRayTracingPipelineStackSizeKHR(reinterpret_cast<PFN_vkCmdSetRayTracingPipelineStackSizeKHR>(
          get_proc_addr(instance, "vkCmdSetRayTracingPipelineStackSizeKHR"))),
      CmdDrawMeshTasksEXT(reinterpret_cast<PFN_vkCmdDrawMeshTasksEXT>(get_proc_addr(instance, "vkCmdDrawMeshTasksEXT"))),
      CmdDrawMeshTasksIndirectEXT(
          reinterpret_cast<PFN_vkCmdDrawMeshTasksIndirectEXT>(get_proc_addr(instance, "vkCmdDrawMeshTasksIndirectEXT"))),
      CmdDrawMeshTasksIndirectCountEXT(
          reinterpret_cast<PFN_vkCmdDrawMeshTasksIndirectCountEXT>(get_proc_addr(instance, "vkCmdDrawMeshTasksIndirectCountEXT"))),
      terminator_(nullptr) {
}

}  // namespace vk

// NOLINTEND
