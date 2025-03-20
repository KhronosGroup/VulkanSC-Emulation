// *** THIS FILE IS GENERATED - DO NOT EDIT ***
// See test_vksc_dispatch_table_generator.py for modifications

/*
 * Copyright (c) 2024 The Khronos Group Inc.
 * Copyright (c) 2024 RasterGrid Kft.
 *
 * SPDX-License-Identifier: Apache-2.0
 */
// NOLINTBEGIN

#pragma once

#include <vulkan/vulkan.h>

#ifdef _WIN32
#include <windows.h>
#else
#include <dlfcn.h>
#endif

#include <stdio.h>
#include <stdlib.h>

class vksc {
    inline static void *lib_handle_{nullptr};

  public:
    static void UnloadLib() {
        if (lib_handle_) {
#if defined(_WIN32)
            FreeLibrary((HMODULE)lib_handle_);
#else
            dlclose(lib_handle_);
#endif
        }
    }

    static void LoadLib(const char *full_lib_name) {
#if defined(_WIN32)
        lib_handle_ = LoadLibraryA(full_lib_name);
#else
        lib_handle_ = dlopen(full_lib_name, RTLD_NOW | RTLD_LOCAL);
#endif
        if (!lib_handle_) {
            printf("Failed to open Vulkan SC library '%s'\n", full_lib_name);
            exit(1);
        }
#if defined(_WIN32)
        GetInstanceProcAddr =
            (PFN_vkGetInstanceProcAddr)(void (*)(void))GetProcAddress((HMODULE)lib_handle_, "vkGetInstanceProcAddr");
#else
        GetInstanceProcAddr = (PFN_vkGetInstanceProcAddr)dlsym(lib_handle_, "vkGetInstanceProcAddr");
#endif
        CreateInstance = (PFN_vkCreateInstance)GetInstanceProcAddr(VK_NULL_HANDLE, "vkCreateInstance");
        EnumerateInstanceExtensionProperties = (PFN_vkEnumerateInstanceExtensionProperties)GetInstanceProcAddr(
            VK_NULL_HANDLE, "vkEnumerateInstanceExtensionProperties");
        EnumerateInstanceLayerProperties =
            (PFN_vkEnumerateInstanceLayerProperties)GetInstanceProcAddr(VK_NULL_HANDLE, "vkEnumerateInstanceLayerProperties");
        EnumerateInstanceVersion =
            (PFN_vkEnumerateInstanceVersion)GetInstanceProcAddr(VK_NULL_HANDLE, "vkEnumerateInstanceVersion");
    }

    static void LoadInstanceEntryPoints(VkInstance instance) {
        DestroyInstance = (PFN_vkDestroyInstance)GetInstanceProcAddr(instance, "vkDestroyInstance");
        EnumeratePhysicalDevices = (PFN_vkEnumeratePhysicalDevices)GetInstanceProcAddr(instance, "vkEnumeratePhysicalDevices");
        GetPhysicalDeviceFeatures = (PFN_vkGetPhysicalDeviceFeatures)GetInstanceProcAddr(instance, "vkGetPhysicalDeviceFeatures");
        GetPhysicalDeviceFormatProperties =
            (PFN_vkGetPhysicalDeviceFormatProperties)GetInstanceProcAddr(instance, "vkGetPhysicalDeviceFormatProperties");
        GetPhysicalDeviceImageFormatProperties =
            (PFN_vkGetPhysicalDeviceImageFormatProperties)GetInstanceProcAddr(instance, "vkGetPhysicalDeviceImageFormatProperties");
        GetPhysicalDeviceProperties =
            (PFN_vkGetPhysicalDeviceProperties)GetInstanceProcAddr(instance, "vkGetPhysicalDeviceProperties");
        GetPhysicalDeviceQueueFamilyProperties =
            (PFN_vkGetPhysicalDeviceQueueFamilyProperties)GetInstanceProcAddr(instance, "vkGetPhysicalDeviceQueueFamilyProperties");
        GetPhysicalDeviceMemoryProperties =
            (PFN_vkGetPhysicalDeviceMemoryProperties)GetInstanceProcAddr(instance, "vkGetPhysicalDeviceMemoryProperties");
        GetInstanceProcAddr = (PFN_vkGetInstanceProcAddr)GetInstanceProcAddr(instance, "vkGetInstanceProcAddr");
        GetDeviceProcAddr = (PFN_vkGetDeviceProcAddr)GetInstanceProcAddr(instance, "vkGetDeviceProcAddr");
        CreateDevice = (PFN_vkCreateDevice)GetInstanceProcAddr(instance, "vkCreateDevice");
        DestroyDevice = (PFN_vkDestroyDevice)GetInstanceProcAddr(instance, "vkDestroyDevice");
        EnumerateDeviceExtensionProperties =
            (PFN_vkEnumerateDeviceExtensionProperties)GetInstanceProcAddr(instance, "vkEnumerateDeviceExtensionProperties");
        EnumerateDeviceLayerProperties =
            (PFN_vkEnumerateDeviceLayerProperties)GetInstanceProcAddr(instance, "vkEnumerateDeviceLayerProperties");
        GetDeviceQueue = (PFN_vkGetDeviceQueue)GetInstanceProcAddr(instance, "vkGetDeviceQueue");
        QueueSubmit = (PFN_vkQueueSubmit)GetInstanceProcAddr(instance, "vkQueueSubmit");
        QueueWaitIdle = (PFN_vkQueueWaitIdle)GetInstanceProcAddr(instance, "vkQueueWaitIdle");
        DeviceWaitIdle = (PFN_vkDeviceWaitIdle)GetInstanceProcAddr(instance, "vkDeviceWaitIdle");
        AllocateMemory = (PFN_vkAllocateMemory)GetInstanceProcAddr(instance, "vkAllocateMemory");
        MapMemory = (PFN_vkMapMemory)GetInstanceProcAddr(instance, "vkMapMemory");
        UnmapMemory = (PFN_vkUnmapMemory)GetInstanceProcAddr(instance, "vkUnmapMemory");
        FlushMappedMemoryRanges = (PFN_vkFlushMappedMemoryRanges)GetInstanceProcAddr(instance, "vkFlushMappedMemoryRanges");
        InvalidateMappedMemoryRanges =
            (PFN_vkInvalidateMappedMemoryRanges)GetInstanceProcAddr(instance, "vkInvalidateMappedMemoryRanges");
        GetDeviceMemoryCommitment = (PFN_vkGetDeviceMemoryCommitment)GetInstanceProcAddr(instance, "vkGetDeviceMemoryCommitment");
        BindBufferMemory = (PFN_vkBindBufferMemory)GetInstanceProcAddr(instance, "vkBindBufferMemory");
        BindImageMemory = (PFN_vkBindImageMemory)GetInstanceProcAddr(instance, "vkBindImageMemory");
        GetBufferMemoryRequirements =
            (PFN_vkGetBufferMemoryRequirements)GetInstanceProcAddr(instance, "vkGetBufferMemoryRequirements");
        GetImageMemoryRequirements =
            (PFN_vkGetImageMemoryRequirements)GetInstanceProcAddr(instance, "vkGetImageMemoryRequirements");
        CreateFence = (PFN_vkCreateFence)GetInstanceProcAddr(instance, "vkCreateFence");
        DestroyFence = (PFN_vkDestroyFence)GetInstanceProcAddr(instance, "vkDestroyFence");
        ResetFences = (PFN_vkResetFences)GetInstanceProcAddr(instance, "vkResetFences");
        GetFenceStatus = (PFN_vkGetFenceStatus)GetInstanceProcAddr(instance, "vkGetFenceStatus");
        WaitForFences = (PFN_vkWaitForFences)GetInstanceProcAddr(instance, "vkWaitForFences");
        CreateSemaphore = (PFN_vkCreateSemaphore)GetInstanceProcAddr(instance, "vkCreateSemaphore");
        DestroySemaphore = (PFN_vkDestroySemaphore)GetInstanceProcAddr(instance, "vkDestroySemaphore");
        CreateEvent = (PFN_vkCreateEvent)GetInstanceProcAddr(instance, "vkCreateEvent");
        DestroyEvent = (PFN_vkDestroyEvent)GetInstanceProcAddr(instance, "vkDestroyEvent");
        GetEventStatus = (PFN_vkGetEventStatus)GetInstanceProcAddr(instance, "vkGetEventStatus");
        SetEvent = (PFN_vkSetEvent)GetInstanceProcAddr(instance, "vkSetEvent");
        ResetEvent = (PFN_vkResetEvent)GetInstanceProcAddr(instance, "vkResetEvent");
        CreateQueryPool = (PFN_vkCreateQueryPool)GetInstanceProcAddr(instance, "vkCreateQueryPool");
        GetQueryPoolResults = (PFN_vkGetQueryPoolResults)GetInstanceProcAddr(instance, "vkGetQueryPoolResults");
        CreateBuffer = (PFN_vkCreateBuffer)GetInstanceProcAddr(instance, "vkCreateBuffer");
        DestroyBuffer = (PFN_vkDestroyBuffer)GetInstanceProcAddr(instance, "vkDestroyBuffer");
        CreateBufferView = (PFN_vkCreateBufferView)GetInstanceProcAddr(instance, "vkCreateBufferView");
        DestroyBufferView = (PFN_vkDestroyBufferView)GetInstanceProcAddr(instance, "vkDestroyBufferView");
        CreateImage = (PFN_vkCreateImage)GetInstanceProcAddr(instance, "vkCreateImage");
        DestroyImage = (PFN_vkDestroyImage)GetInstanceProcAddr(instance, "vkDestroyImage");
        GetImageSubresourceLayout = (PFN_vkGetImageSubresourceLayout)GetInstanceProcAddr(instance, "vkGetImageSubresourceLayout");
        CreateImageView = (PFN_vkCreateImageView)GetInstanceProcAddr(instance, "vkCreateImageView");
        DestroyImageView = (PFN_vkDestroyImageView)GetInstanceProcAddr(instance, "vkDestroyImageView");
        CreatePipelineCache = (PFN_vkCreatePipelineCache)GetInstanceProcAddr(instance, "vkCreatePipelineCache");
        DestroyPipelineCache = (PFN_vkDestroyPipelineCache)GetInstanceProcAddr(instance, "vkDestroyPipelineCache");
        CreateGraphicsPipelines = (PFN_vkCreateGraphicsPipelines)GetInstanceProcAddr(instance, "vkCreateGraphicsPipelines");
        CreateComputePipelines = (PFN_vkCreateComputePipelines)GetInstanceProcAddr(instance, "vkCreateComputePipelines");
        DestroyPipeline = (PFN_vkDestroyPipeline)GetInstanceProcAddr(instance, "vkDestroyPipeline");
        CreatePipelineLayout = (PFN_vkCreatePipelineLayout)GetInstanceProcAddr(instance, "vkCreatePipelineLayout");
        DestroyPipelineLayout = (PFN_vkDestroyPipelineLayout)GetInstanceProcAddr(instance, "vkDestroyPipelineLayout");
        CreateSampler = (PFN_vkCreateSampler)GetInstanceProcAddr(instance, "vkCreateSampler");
        DestroySampler = (PFN_vkDestroySampler)GetInstanceProcAddr(instance, "vkDestroySampler");
        CreateDescriptorSetLayout = (PFN_vkCreateDescriptorSetLayout)GetInstanceProcAddr(instance, "vkCreateDescriptorSetLayout");
        DestroyDescriptorSetLayout =
            (PFN_vkDestroyDescriptorSetLayout)GetInstanceProcAddr(instance, "vkDestroyDescriptorSetLayout");
        CreateDescriptorPool = (PFN_vkCreateDescriptorPool)GetInstanceProcAddr(instance, "vkCreateDescriptorPool");
        ResetDescriptorPool = (PFN_vkResetDescriptorPool)GetInstanceProcAddr(instance, "vkResetDescriptorPool");
        AllocateDescriptorSets = (PFN_vkAllocateDescriptorSets)GetInstanceProcAddr(instance, "vkAllocateDescriptorSets");
        FreeDescriptorSets = (PFN_vkFreeDescriptorSets)GetInstanceProcAddr(instance, "vkFreeDescriptorSets");
        UpdateDescriptorSets = (PFN_vkUpdateDescriptorSets)GetInstanceProcAddr(instance, "vkUpdateDescriptorSets");
        CreateFramebuffer = (PFN_vkCreateFramebuffer)GetInstanceProcAddr(instance, "vkCreateFramebuffer");
        DestroyFramebuffer = (PFN_vkDestroyFramebuffer)GetInstanceProcAddr(instance, "vkDestroyFramebuffer");
        CreateRenderPass = (PFN_vkCreateRenderPass)GetInstanceProcAddr(instance, "vkCreateRenderPass");
        DestroyRenderPass = (PFN_vkDestroyRenderPass)GetInstanceProcAddr(instance, "vkDestroyRenderPass");
        GetRenderAreaGranularity = (PFN_vkGetRenderAreaGranularity)GetInstanceProcAddr(instance, "vkGetRenderAreaGranularity");
        CreateCommandPool = (PFN_vkCreateCommandPool)GetInstanceProcAddr(instance, "vkCreateCommandPool");
        ResetCommandPool = (PFN_vkResetCommandPool)GetInstanceProcAddr(instance, "vkResetCommandPool");
        AllocateCommandBuffers = (PFN_vkAllocateCommandBuffers)GetInstanceProcAddr(instance, "vkAllocateCommandBuffers");
        FreeCommandBuffers = (PFN_vkFreeCommandBuffers)GetInstanceProcAddr(instance, "vkFreeCommandBuffers");
        BeginCommandBuffer = (PFN_vkBeginCommandBuffer)GetInstanceProcAddr(instance, "vkBeginCommandBuffer");
        EndCommandBuffer = (PFN_vkEndCommandBuffer)GetInstanceProcAddr(instance, "vkEndCommandBuffer");
        ResetCommandBuffer = (PFN_vkResetCommandBuffer)GetInstanceProcAddr(instance, "vkResetCommandBuffer");
        CmdBindPipeline = (PFN_vkCmdBindPipeline)GetInstanceProcAddr(instance, "vkCmdBindPipeline");
        CmdSetViewport = (PFN_vkCmdSetViewport)GetInstanceProcAddr(instance, "vkCmdSetViewport");
        CmdSetScissor = (PFN_vkCmdSetScissor)GetInstanceProcAddr(instance, "vkCmdSetScissor");
        CmdSetLineWidth = (PFN_vkCmdSetLineWidth)GetInstanceProcAddr(instance, "vkCmdSetLineWidth");
        CmdSetDepthBias = (PFN_vkCmdSetDepthBias)GetInstanceProcAddr(instance, "vkCmdSetDepthBias");
        CmdSetBlendConstants = (PFN_vkCmdSetBlendConstants)GetInstanceProcAddr(instance, "vkCmdSetBlendConstants");
        CmdSetDepthBounds = (PFN_vkCmdSetDepthBounds)GetInstanceProcAddr(instance, "vkCmdSetDepthBounds");
        CmdSetStencilCompareMask = (PFN_vkCmdSetStencilCompareMask)GetInstanceProcAddr(instance, "vkCmdSetStencilCompareMask");
        CmdSetStencilWriteMask = (PFN_vkCmdSetStencilWriteMask)GetInstanceProcAddr(instance, "vkCmdSetStencilWriteMask");
        CmdSetStencilReference = (PFN_vkCmdSetStencilReference)GetInstanceProcAddr(instance, "vkCmdSetStencilReference");
        CmdBindDescriptorSets = (PFN_vkCmdBindDescriptorSets)GetInstanceProcAddr(instance, "vkCmdBindDescriptorSets");
        CmdBindIndexBuffer = (PFN_vkCmdBindIndexBuffer)GetInstanceProcAddr(instance, "vkCmdBindIndexBuffer");
        CmdBindVertexBuffers = (PFN_vkCmdBindVertexBuffers)GetInstanceProcAddr(instance, "vkCmdBindVertexBuffers");
        CmdDraw = (PFN_vkCmdDraw)GetInstanceProcAddr(instance, "vkCmdDraw");
        CmdDrawIndexed = (PFN_vkCmdDrawIndexed)GetInstanceProcAddr(instance, "vkCmdDrawIndexed");
        CmdDrawIndirect = (PFN_vkCmdDrawIndirect)GetInstanceProcAddr(instance, "vkCmdDrawIndirect");
        CmdDrawIndexedIndirect = (PFN_vkCmdDrawIndexedIndirect)GetInstanceProcAddr(instance, "vkCmdDrawIndexedIndirect");
        CmdDispatch = (PFN_vkCmdDispatch)GetInstanceProcAddr(instance, "vkCmdDispatch");
        CmdDispatchIndirect = (PFN_vkCmdDispatchIndirect)GetInstanceProcAddr(instance, "vkCmdDispatchIndirect");
        CmdCopyBuffer = (PFN_vkCmdCopyBuffer)GetInstanceProcAddr(instance, "vkCmdCopyBuffer");
        CmdCopyImage = (PFN_vkCmdCopyImage)GetInstanceProcAddr(instance, "vkCmdCopyImage");
        CmdBlitImage = (PFN_vkCmdBlitImage)GetInstanceProcAddr(instance, "vkCmdBlitImage");
        CmdCopyBufferToImage = (PFN_vkCmdCopyBufferToImage)GetInstanceProcAddr(instance, "vkCmdCopyBufferToImage");
        CmdCopyImageToBuffer = (PFN_vkCmdCopyImageToBuffer)GetInstanceProcAddr(instance, "vkCmdCopyImageToBuffer");
        CmdUpdateBuffer = (PFN_vkCmdUpdateBuffer)GetInstanceProcAddr(instance, "vkCmdUpdateBuffer");
        CmdFillBuffer = (PFN_vkCmdFillBuffer)GetInstanceProcAddr(instance, "vkCmdFillBuffer");
        CmdClearColorImage = (PFN_vkCmdClearColorImage)GetInstanceProcAddr(instance, "vkCmdClearColorImage");
        CmdClearDepthStencilImage = (PFN_vkCmdClearDepthStencilImage)GetInstanceProcAddr(instance, "vkCmdClearDepthStencilImage");
        CmdClearAttachments = (PFN_vkCmdClearAttachments)GetInstanceProcAddr(instance, "vkCmdClearAttachments");
        CmdResolveImage = (PFN_vkCmdResolveImage)GetInstanceProcAddr(instance, "vkCmdResolveImage");
        CmdSetEvent = (PFN_vkCmdSetEvent)GetInstanceProcAddr(instance, "vkCmdSetEvent");
        CmdResetEvent = (PFN_vkCmdResetEvent)GetInstanceProcAddr(instance, "vkCmdResetEvent");
        CmdWaitEvents = (PFN_vkCmdWaitEvents)GetInstanceProcAddr(instance, "vkCmdWaitEvents");
        CmdPipelineBarrier = (PFN_vkCmdPipelineBarrier)GetInstanceProcAddr(instance, "vkCmdPipelineBarrier");
        CmdBeginQuery = (PFN_vkCmdBeginQuery)GetInstanceProcAddr(instance, "vkCmdBeginQuery");
        CmdEndQuery = (PFN_vkCmdEndQuery)GetInstanceProcAddr(instance, "vkCmdEndQuery");
        CmdResetQueryPool = (PFN_vkCmdResetQueryPool)GetInstanceProcAddr(instance, "vkCmdResetQueryPool");
        CmdWriteTimestamp = (PFN_vkCmdWriteTimestamp)GetInstanceProcAddr(instance, "vkCmdWriteTimestamp");
        CmdCopyQueryPoolResults = (PFN_vkCmdCopyQueryPoolResults)GetInstanceProcAddr(instance, "vkCmdCopyQueryPoolResults");
        CmdPushConstants = (PFN_vkCmdPushConstants)GetInstanceProcAddr(instance, "vkCmdPushConstants");
        CmdBeginRenderPass = (PFN_vkCmdBeginRenderPass)GetInstanceProcAddr(instance, "vkCmdBeginRenderPass");
        CmdNextSubpass = (PFN_vkCmdNextSubpass)GetInstanceProcAddr(instance, "vkCmdNextSubpass");
        CmdEndRenderPass = (PFN_vkCmdEndRenderPass)GetInstanceProcAddr(instance, "vkCmdEndRenderPass");
        CmdExecuteCommands = (PFN_vkCmdExecuteCommands)GetInstanceProcAddr(instance, "vkCmdExecuteCommands");
        BindBufferMemory2 = (PFN_vkBindBufferMemory2)GetInstanceProcAddr(instance, "vkBindBufferMemory2");
        BindImageMemory2 = (PFN_vkBindImageMemory2)GetInstanceProcAddr(instance, "vkBindImageMemory2");
        GetDeviceGroupPeerMemoryFeatures =
            (PFN_vkGetDeviceGroupPeerMemoryFeatures)GetInstanceProcAddr(instance, "vkGetDeviceGroupPeerMemoryFeatures");
        CmdSetDeviceMask = (PFN_vkCmdSetDeviceMask)GetInstanceProcAddr(instance, "vkCmdSetDeviceMask");
        CmdDispatchBase = (PFN_vkCmdDispatchBase)GetInstanceProcAddr(instance, "vkCmdDispatchBase");
        EnumeratePhysicalDeviceGroups =
            (PFN_vkEnumeratePhysicalDeviceGroups)GetInstanceProcAddr(instance, "vkEnumeratePhysicalDeviceGroups");
        GetImageMemoryRequirements2 =
            (PFN_vkGetImageMemoryRequirements2)GetInstanceProcAddr(instance, "vkGetImageMemoryRequirements2");
        GetBufferMemoryRequirements2 =
            (PFN_vkGetBufferMemoryRequirements2)GetInstanceProcAddr(instance, "vkGetBufferMemoryRequirements2");
        GetPhysicalDeviceFeatures2 =
            (PFN_vkGetPhysicalDeviceFeatures2)GetInstanceProcAddr(instance, "vkGetPhysicalDeviceFeatures2");
        GetPhysicalDeviceProperties2 =
            (PFN_vkGetPhysicalDeviceProperties2)GetInstanceProcAddr(instance, "vkGetPhysicalDeviceProperties2");
        GetPhysicalDeviceFormatProperties2 =
            (PFN_vkGetPhysicalDeviceFormatProperties2)GetInstanceProcAddr(instance, "vkGetPhysicalDeviceFormatProperties2");
        GetPhysicalDeviceImageFormatProperties2 = (PFN_vkGetPhysicalDeviceImageFormatProperties2)GetInstanceProcAddr(
            instance, "vkGetPhysicalDeviceImageFormatProperties2");
        GetPhysicalDeviceQueueFamilyProperties2 = (PFN_vkGetPhysicalDeviceQueueFamilyProperties2)GetInstanceProcAddr(
            instance, "vkGetPhysicalDeviceQueueFamilyProperties2");
        GetPhysicalDeviceMemoryProperties2 =
            (PFN_vkGetPhysicalDeviceMemoryProperties2)GetInstanceProcAddr(instance, "vkGetPhysicalDeviceMemoryProperties2");
        GetDeviceQueue2 = (PFN_vkGetDeviceQueue2)GetInstanceProcAddr(instance, "vkGetDeviceQueue2");
        CreateSamplerYcbcrConversion =
            (PFN_vkCreateSamplerYcbcrConversion)GetInstanceProcAddr(instance, "vkCreateSamplerYcbcrConversion");
        DestroySamplerYcbcrConversion =
            (PFN_vkDestroySamplerYcbcrConversion)GetInstanceProcAddr(instance, "vkDestroySamplerYcbcrConversion");
        GetPhysicalDeviceExternalBufferProperties = (PFN_vkGetPhysicalDeviceExternalBufferProperties)GetInstanceProcAddr(
            instance, "vkGetPhysicalDeviceExternalBufferProperties");
        GetPhysicalDeviceExternalFenceProperties = (PFN_vkGetPhysicalDeviceExternalFenceProperties)GetInstanceProcAddr(
            instance, "vkGetPhysicalDeviceExternalFenceProperties");
        GetPhysicalDeviceExternalSemaphoreProperties = (PFN_vkGetPhysicalDeviceExternalSemaphoreProperties)GetInstanceProcAddr(
            instance, "vkGetPhysicalDeviceExternalSemaphoreProperties");
        GetDescriptorSetLayoutSupport =
            (PFN_vkGetDescriptorSetLayoutSupport)GetInstanceProcAddr(instance, "vkGetDescriptorSetLayoutSupport");
        CmdDrawIndirectCount = (PFN_vkCmdDrawIndirectCount)GetInstanceProcAddr(instance, "vkCmdDrawIndirectCount");
        CmdDrawIndexedIndirectCount =
            (PFN_vkCmdDrawIndexedIndirectCount)GetInstanceProcAddr(instance, "vkCmdDrawIndexedIndirectCount");
        CreateRenderPass2 = (PFN_vkCreateRenderPass2)GetInstanceProcAddr(instance, "vkCreateRenderPass2");
        CmdBeginRenderPass2 = (PFN_vkCmdBeginRenderPass2)GetInstanceProcAddr(instance, "vkCmdBeginRenderPass2");
        CmdNextSubpass2 = (PFN_vkCmdNextSubpass2)GetInstanceProcAddr(instance, "vkCmdNextSubpass2");
        CmdEndRenderPass2 = (PFN_vkCmdEndRenderPass2)GetInstanceProcAddr(instance, "vkCmdEndRenderPass2");
        ResetQueryPool = (PFN_vkResetQueryPool)GetInstanceProcAddr(instance, "vkResetQueryPool");
        GetSemaphoreCounterValue = (PFN_vkGetSemaphoreCounterValue)GetInstanceProcAddr(instance, "vkGetSemaphoreCounterValue");
        WaitSemaphores = (PFN_vkWaitSemaphores)GetInstanceProcAddr(instance, "vkWaitSemaphores");
        SignalSemaphore = (PFN_vkSignalSemaphore)GetInstanceProcAddr(instance, "vkSignalSemaphore");
        GetBufferDeviceAddress = (PFN_vkGetBufferDeviceAddress)GetInstanceProcAddr(instance, "vkGetBufferDeviceAddress");
        GetBufferOpaqueCaptureAddress =
            (PFN_vkGetBufferOpaqueCaptureAddress)GetInstanceProcAddr(instance, "vkGetBufferOpaqueCaptureAddress");
        GetDeviceMemoryOpaqueCaptureAddress =
            (PFN_vkGetDeviceMemoryOpaqueCaptureAddress)GetInstanceProcAddr(instance, "vkGetDeviceMemoryOpaqueCaptureAddress");
        GetPhysicalDeviceToolProperties =
            (PFN_vkGetPhysicalDeviceToolProperties)GetInstanceProcAddr(instance, "vkGetPhysicalDeviceToolProperties");
        CreatePrivateDataSlot = (PFN_vkCreatePrivateDataSlot)GetInstanceProcAddr(instance, "vkCreatePrivateDataSlot");
        DestroyPrivateDataSlot = (PFN_vkDestroyPrivateDataSlot)GetInstanceProcAddr(instance, "vkDestroyPrivateDataSlot");
        SetPrivateData = (PFN_vkSetPrivateData)GetInstanceProcAddr(instance, "vkSetPrivateData");
        GetPrivateData = (PFN_vkGetPrivateData)GetInstanceProcAddr(instance, "vkGetPrivateData");
        CmdSetEvent2 = (PFN_vkCmdSetEvent2)GetInstanceProcAddr(instance, "vkCmdSetEvent2");
        CmdResetEvent2 = (PFN_vkCmdResetEvent2)GetInstanceProcAddr(instance, "vkCmdResetEvent2");
        CmdWaitEvents2 = (PFN_vkCmdWaitEvents2)GetInstanceProcAddr(instance, "vkCmdWaitEvents2");
        CmdPipelineBarrier2 = (PFN_vkCmdPipelineBarrier2)GetInstanceProcAddr(instance, "vkCmdPipelineBarrier2");
        CmdWriteTimestamp2 = (PFN_vkCmdWriteTimestamp2)GetInstanceProcAddr(instance, "vkCmdWriteTimestamp2");
        QueueSubmit2 = (PFN_vkQueueSubmit2)GetInstanceProcAddr(instance, "vkQueueSubmit2");
        CmdCopyBuffer2 = (PFN_vkCmdCopyBuffer2)GetInstanceProcAddr(instance, "vkCmdCopyBuffer2");
        CmdCopyImage2 = (PFN_vkCmdCopyImage2)GetInstanceProcAddr(instance, "vkCmdCopyImage2");
        CmdCopyBufferToImage2 = (PFN_vkCmdCopyBufferToImage2)GetInstanceProcAddr(instance, "vkCmdCopyBufferToImage2");
        CmdCopyImageToBuffer2 = (PFN_vkCmdCopyImageToBuffer2)GetInstanceProcAddr(instance, "vkCmdCopyImageToBuffer2");
        CmdBlitImage2 = (PFN_vkCmdBlitImage2)GetInstanceProcAddr(instance, "vkCmdBlitImage2");
        CmdResolveImage2 = (PFN_vkCmdResolveImage2)GetInstanceProcAddr(instance, "vkCmdResolveImage2");
        CmdBeginRendering = (PFN_vkCmdBeginRendering)GetInstanceProcAddr(instance, "vkCmdBeginRendering");
        CmdEndRendering = (PFN_vkCmdEndRendering)GetInstanceProcAddr(instance, "vkCmdEndRendering");
        CmdSetCullMode = (PFN_vkCmdSetCullMode)GetInstanceProcAddr(instance, "vkCmdSetCullMode");
        CmdSetFrontFace = (PFN_vkCmdSetFrontFace)GetInstanceProcAddr(instance, "vkCmdSetFrontFace");
        CmdSetPrimitiveTopology = (PFN_vkCmdSetPrimitiveTopology)GetInstanceProcAddr(instance, "vkCmdSetPrimitiveTopology");
        CmdSetViewportWithCount = (PFN_vkCmdSetViewportWithCount)GetInstanceProcAddr(instance, "vkCmdSetViewportWithCount");
        CmdSetScissorWithCount = (PFN_vkCmdSetScissorWithCount)GetInstanceProcAddr(instance, "vkCmdSetScissorWithCount");
        CmdBindVertexBuffers2 = (PFN_vkCmdBindVertexBuffers2)GetInstanceProcAddr(instance, "vkCmdBindVertexBuffers2");
        CmdSetDepthTestEnable = (PFN_vkCmdSetDepthTestEnable)GetInstanceProcAddr(instance, "vkCmdSetDepthTestEnable");
        CmdSetDepthWriteEnable = (PFN_vkCmdSetDepthWriteEnable)GetInstanceProcAddr(instance, "vkCmdSetDepthWriteEnable");
        CmdSetDepthCompareOp = (PFN_vkCmdSetDepthCompareOp)GetInstanceProcAddr(instance, "vkCmdSetDepthCompareOp");
        CmdSetDepthBoundsTestEnable =
            (PFN_vkCmdSetDepthBoundsTestEnable)GetInstanceProcAddr(instance, "vkCmdSetDepthBoundsTestEnable");
        CmdSetStencilTestEnable = (PFN_vkCmdSetStencilTestEnable)GetInstanceProcAddr(instance, "vkCmdSetStencilTestEnable");
        CmdSetStencilOp = (PFN_vkCmdSetStencilOp)GetInstanceProcAddr(instance, "vkCmdSetStencilOp");
        CmdSetRasterizerDiscardEnable =
            (PFN_vkCmdSetRasterizerDiscardEnable)GetInstanceProcAddr(instance, "vkCmdSetRasterizerDiscardEnable");
        CmdSetDepthBiasEnable = (PFN_vkCmdSetDepthBiasEnable)GetInstanceProcAddr(instance, "vkCmdSetDepthBiasEnable");
        CmdSetPrimitiveRestartEnable =
            (PFN_vkCmdSetPrimitiveRestartEnable)GetInstanceProcAddr(instance, "vkCmdSetPrimitiveRestartEnable");
        GetDeviceBufferMemoryRequirements =
            (PFN_vkGetDeviceBufferMemoryRequirements)GetInstanceProcAddr(instance, "vkGetDeviceBufferMemoryRequirements");
        GetDeviceImageMemoryRequirements =
            (PFN_vkGetDeviceImageMemoryRequirements)GetInstanceProcAddr(instance, "vkGetDeviceImageMemoryRequirements");
        GetDeviceImageSparseMemoryRequirements =
            (PFN_vkGetDeviceImageSparseMemoryRequirements)GetInstanceProcAddr(instance, "vkGetDeviceImageSparseMemoryRequirements");
        CmdSetLineStipple = (PFN_vkCmdSetLineStipple)GetInstanceProcAddr(instance, "vkCmdSetLineStipple");
        MapMemory2 = (PFN_vkMapMemory2)GetInstanceProcAddr(instance, "vkMapMemory2");
        UnmapMemory2 = (PFN_vkUnmapMemory2)GetInstanceProcAddr(instance, "vkUnmapMemory2");
        CmdBindIndexBuffer2 = (PFN_vkCmdBindIndexBuffer2)GetInstanceProcAddr(instance, "vkCmdBindIndexBuffer2");
        GetRenderingAreaGranularity =
            (PFN_vkGetRenderingAreaGranularity)GetInstanceProcAddr(instance, "vkGetRenderingAreaGranularity");
        GetDeviceImageSubresourceLayout =
            (PFN_vkGetDeviceImageSubresourceLayout)GetInstanceProcAddr(instance, "vkGetDeviceImageSubresourceLayout");
        GetImageSubresourceLayout2 =
            (PFN_vkGetImageSubresourceLayout2)GetInstanceProcAddr(instance, "vkGetImageSubresourceLayout2");
        CmdPushDescriptorSet = (PFN_vkCmdPushDescriptorSet)GetInstanceProcAddr(instance, "vkCmdPushDescriptorSet");
        CmdSetRenderingAttachmentLocations =
            (PFN_vkCmdSetRenderingAttachmentLocations)GetInstanceProcAddr(instance, "vkCmdSetRenderingAttachmentLocations");
        CmdSetRenderingInputAttachmentIndices =
            (PFN_vkCmdSetRenderingInputAttachmentIndices)GetInstanceProcAddr(instance, "vkCmdSetRenderingInputAttachmentIndices");
        CmdBindDescriptorSets2 = (PFN_vkCmdBindDescriptorSets2)GetInstanceProcAddr(instance, "vkCmdBindDescriptorSets2");
        CmdPushConstants2 = (PFN_vkCmdPushConstants2)GetInstanceProcAddr(instance, "vkCmdPushConstants2");
        CmdPushDescriptorSet2 = (PFN_vkCmdPushDescriptorSet2)GetInstanceProcAddr(instance, "vkCmdPushDescriptorSet2");
        CopyMemoryToImage = (PFN_vkCopyMemoryToImage)GetInstanceProcAddr(instance, "vkCopyMemoryToImage");
        CopyImageToMemory = (PFN_vkCopyImageToMemory)GetInstanceProcAddr(instance, "vkCopyImageToMemory");
        CopyImageToImage = (PFN_vkCopyImageToImage)GetInstanceProcAddr(instance, "vkCopyImageToImage");
        TransitionImageLayout = (PFN_vkTransitionImageLayout)GetInstanceProcAddr(instance, "vkTransitionImageLayout");
        GetCommandPoolMemoryConsumption =
            (PFN_vkGetCommandPoolMemoryConsumption)GetInstanceProcAddr(instance, "vkGetCommandPoolMemoryConsumption");
        GetFaultData = (PFN_vkGetFaultData)GetInstanceProcAddr(instance, "vkGetFaultData");
        DestroySurfaceKHR = (PFN_vkDestroySurfaceKHR)GetInstanceProcAddr(instance, "vkDestroySurfaceKHR");
        GetPhysicalDeviceSurfaceSupportKHR =
            (PFN_vkGetPhysicalDeviceSurfaceSupportKHR)GetInstanceProcAddr(instance, "vkGetPhysicalDeviceSurfaceSupportKHR");
        GetPhysicalDeviceSurfaceCapabilitiesKHR = (PFN_vkGetPhysicalDeviceSurfaceCapabilitiesKHR)GetInstanceProcAddr(
            instance, "vkGetPhysicalDeviceSurfaceCapabilitiesKHR");
        GetPhysicalDeviceSurfaceFormatsKHR =
            (PFN_vkGetPhysicalDeviceSurfaceFormatsKHR)GetInstanceProcAddr(instance, "vkGetPhysicalDeviceSurfaceFormatsKHR");
        GetPhysicalDeviceSurfacePresentModesKHR = (PFN_vkGetPhysicalDeviceSurfacePresentModesKHR)GetInstanceProcAddr(
            instance, "vkGetPhysicalDeviceSurfacePresentModesKHR");
        CreateSwapchainKHR = (PFN_vkCreateSwapchainKHR)GetInstanceProcAddr(instance, "vkCreateSwapchainKHR");
        GetSwapchainImagesKHR = (PFN_vkGetSwapchainImagesKHR)GetInstanceProcAddr(instance, "vkGetSwapchainImagesKHR");
        AcquireNextImageKHR = (PFN_vkAcquireNextImageKHR)GetInstanceProcAddr(instance, "vkAcquireNextImageKHR");
        QueuePresentKHR = (PFN_vkQueuePresentKHR)GetInstanceProcAddr(instance, "vkQueuePresentKHR");
        GetDeviceGroupPresentCapabilitiesKHR =
            (PFN_vkGetDeviceGroupPresentCapabilitiesKHR)GetInstanceProcAddr(instance, "vkGetDeviceGroupPresentCapabilitiesKHR");
        GetDeviceGroupSurfacePresentModesKHR =
            (PFN_vkGetDeviceGroupSurfacePresentModesKHR)GetInstanceProcAddr(instance, "vkGetDeviceGroupSurfacePresentModesKHR");
        GetPhysicalDevicePresentRectanglesKHR =
            (PFN_vkGetPhysicalDevicePresentRectanglesKHR)GetInstanceProcAddr(instance, "vkGetPhysicalDevicePresentRectanglesKHR");
        AcquireNextImage2KHR = (PFN_vkAcquireNextImage2KHR)GetInstanceProcAddr(instance, "vkAcquireNextImage2KHR");
        GetPhysicalDeviceDisplayPropertiesKHR =
            (PFN_vkGetPhysicalDeviceDisplayPropertiesKHR)GetInstanceProcAddr(instance, "vkGetPhysicalDeviceDisplayPropertiesKHR");
        GetPhysicalDeviceDisplayPlanePropertiesKHR = (PFN_vkGetPhysicalDeviceDisplayPlanePropertiesKHR)GetInstanceProcAddr(
            instance, "vkGetPhysicalDeviceDisplayPlanePropertiesKHR");
        GetDisplayPlaneSupportedDisplaysKHR =
            (PFN_vkGetDisplayPlaneSupportedDisplaysKHR)GetInstanceProcAddr(instance, "vkGetDisplayPlaneSupportedDisplaysKHR");
        GetDisplayModePropertiesKHR =
            (PFN_vkGetDisplayModePropertiesKHR)GetInstanceProcAddr(instance, "vkGetDisplayModePropertiesKHR");
        CreateDisplayModeKHR = (PFN_vkCreateDisplayModeKHR)GetInstanceProcAddr(instance, "vkCreateDisplayModeKHR");
        GetDisplayPlaneCapabilitiesKHR =
            (PFN_vkGetDisplayPlaneCapabilitiesKHR)GetInstanceProcAddr(instance, "vkGetDisplayPlaneCapabilitiesKHR");
        CreateDisplayPlaneSurfaceKHR =
            (PFN_vkCreateDisplayPlaneSurfaceKHR)GetInstanceProcAddr(instance, "vkCreateDisplayPlaneSurfaceKHR");
        CreateSharedSwapchainsKHR = (PFN_vkCreateSharedSwapchainsKHR)GetInstanceProcAddr(instance, "vkCreateSharedSwapchainsKHR");
        GetMemoryFdKHR = (PFN_vkGetMemoryFdKHR)GetInstanceProcAddr(instance, "vkGetMemoryFdKHR");
        GetMemoryFdPropertiesKHR = (PFN_vkGetMemoryFdPropertiesKHR)GetInstanceProcAddr(instance, "vkGetMemoryFdPropertiesKHR");
        ImportSemaphoreFdKHR = (PFN_vkImportSemaphoreFdKHR)GetInstanceProcAddr(instance, "vkImportSemaphoreFdKHR");
        GetSemaphoreFdKHR = (PFN_vkGetSemaphoreFdKHR)GetInstanceProcAddr(instance, "vkGetSemaphoreFdKHR");
        GetSwapchainStatusKHR = (PFN_vkGetSwapchainStatusKHR)GetInstanceProcAddr(instance, "vkGetSwapchainStatusKHR");
        ImportFenceFdKHR = (PFN_vkImportFenceFdKHR)GetInstanceProcAddr(instance, "vkImportFenceFdKHR");
        GetFenceFdKHR = (PFN_vkGetFenceFdKHR)GetInstanceProcAddr(instance, "vkGetFenceFdKHR");
        EnumeratePhysicalDeviceQueueFamilyPerformanceQueryCountersKHR =
            (PFN_vkEnumeratePhysicalDeviceQueueFamilyPerformanceQueryCountersKHR)GetInstanceProcAddr(
                instance, "vkEnumeratePhysicalDeviceQueueFamilyPerformanceQueryCountersKHR");
        GetPhysicalDeviceQueueFamilyPerformanceQueryPassesKHR =
            (PFN_vkGetPhysicalDeviceQueueFamilyPerformanceQueryPassesKHR)GetInstanceProcAddr(
                instance, "vkGetPhysicalDeviceQueueFamilyPerformanceQueryPassesKHR");
        AcquireProfilingLockKHR = (PFN_vkAcquireProfilingLockKHR)GetInstanceProcAddr(instance, "vkAcquireProfilingLockKHR");
        ReleaseProfilingLockKHR = (PFN_vkReleaseProfilingLockKHR)GetInstanceProcAddr(instance, "vkReleaseProfilingLockKHR");
        GetPhysicalDeviceSurfaceCapabilities2KHR = (PFN_vkGetPhysicalDeviceSurfaceCapabilities2KHR)GetInstanceProcAddr(
            instance, "vkGetPhysicalDeviceSurfaceCapabilities2KHR");
        GetPhysicalDeviceSurfaceFormats2KHR =
            (PFN_vkGetPhysicalDeviceSurfaceFormats2KHR)GetInstanceProcAddr(instance, "vkGetPhysicalDeviceSurfaceFormats2KHR");
        GetPhysicalDeviceDisplayProperties2KHR =
            (PFN_vkGetPhysicalDeviceDisplayProperties2KHR)GetInstanceProcAddr(instance, "vkGetPhysicalDeviceDisplayProperties2KHR");
        GetPhysicalDeviceDisplayPlaneProperties2KHR = (PFN_vkGetPhysicalDeviceDisplayPlaneProperties2KHR)GetInstanceProcAddr(
            instance, "vkGetPhysicalDeviceDisplayPlaneProperties2KHR");
        GetDisplayModeProperties2KHR =
            (PFN_vkGetDisplayModeProperties2KHR)GetInstanceProcAddr(instance, "vkGetDisplayModeProperties2KHR");
        GetDisplayPlaneCapabilities2KHR =
            (PFN_vkGetDisplayPlaneCapabilities2KHR)GetInstanceProcAddr(instance, "vkGetDisplayPlaneCapabilities2KHR");
        GetPhysicalDeviceFragmentShadingRatesKHR = (PFN_vkGetPhysicalDeviceFragmentShadingRatesKHR)GetInstanceProcAddr(
            instance, "vkGetPhysicalDeviceFragmentShadingRatesKHR");
        CmdSetFragmentShadingRateKHR =
            (PFN_vkCmdSetFragmentShadingRateKHR)GetInstanceProcAddr(instance, "vkCmdSetFragmentShadingRateKHR");
        CmdRefreshObjectsKHR = (PFN_vkCmdRefreshObjectsKHR)GetInstanceProcAddr(instance, "vkCmdRefreshObjectsKHR");
        GetPhysicalDeviceRefreshableObjectTypesKHR = (PFN_vkGetPhysicalDeviceRefreshableObjectTypesKHR)GetInstanceProcAddr(
            instance, "vkGetPhysicalDeviceRefreshableObjectTypesKHR");
        CmdSetEvent2KHR = (PFN_vkCmdSetEvent2KHR)GetInstanceProcAddr(instance, "vkCmdSetEvent2KHR");
        CmdResetEvent2KHR = (PFN_vkCmdResetEvent2KHR)GetInstanceProcAddr(instance, "vkCmdResetEvent2KHR");
        CmdWaitEvents2KHR = (PFN_vkCmdWaitEvents2KHR)GetInstanceProcAddr(instance, "vkCmdWaitEvents2KHR");
        CmdPipelineBarrier2KHR = (PFN_vkCmdPipelineBarrier2KHR)GetInstanceProcAddr(instance, "vkCmdPipelineBarrier2KHR");
        CmdWriteTimestamp2KHR = (PFN_vkCmdWriteTimestamp2KHR)GetInstanceProcAddr(instance, "vkCmdWriteTimestamp2KHR");
        QueueSubmit2KHR = (PFN_vkQueueSubmit2KHR)GetInstanceProcAddr(instance, "vkQueueSubmit2KHR");
        CmdCopyBuffer2KHR = (PFN_vkCmdCopyBuffer2KHR)GetInstanceProcAddr(instance, "vkCmdCopyBuffer2KHR");
        CmdCopyImage2KHR = (PFN_vkCmdCopyImage2KHR)GetInstanceProcAddr(instance, "vkCmdCopyImage2KHR");
        CmdCopyBufferToImage2KHR = (PFN_vkCmdCopyBufferToImage2KHR)GetInstanceProcAddr(instance, "vkCmdCopyBufferToImage2KHR");
        CmdCopyImageToBuffer2KHR = (PFN_vkCmdCopyImageToBuffer2KHR)GetInstanceProcAddr(instance, "vkCmdCopyImageToBuffer2KHR");
        CmdBlitImage2KHR = (PFN_vkCmdBlitImage2KHR)GetInstanceProcAddr(instance, "vkCmdBlitImage2KHR");
        CmdResolveImage2KHR = (PFN_vkCmdResolveImage2KHR)GetInstanceProcAddr(instance, "vkCmdResolveImage2KHR");
        CmdSetLineStippleKHR = (PFN_vkCmdSetLineStippleKHR)GetInstanceProcAddr(instance, "vkCmdSetLineStippleKHR");
        GetPhysicalDeviceCalibrateableTimeDomainsKHR = (PFN_vkGetPhysicalDeviceCalibrateableTimeDomainsKHR)GetInstanceProcAddr(
            instance, "vkGetPhysicalDeviceCalibrateableTimeDomainsKHR");
        GetCalibratedTimestampsKHR =
            (PFN_vkGetCalibratedTimestampsKHR)GetInstanceProcAddr(instance, "vkGetCalibratedTimestampsKHR");
        ReleaseDisplayEXT = (PFN_vkReleaseDisplayEXT)GetInstanceProcAddr(instance, "vkReleaseDisplayEXT");
        GetPhysicalDeviceSurfaceCapabilities2EXT = (PFN_vkGetPhysicalDeviceSurfaceCapabilities2EXT)GetInstanceProcAddr(
            instance, "vkGetPhysicalDeviceSurfaceCapabilities2EXT");
        DisplayPowerControlEXT = (PFN_vkDisplayPowerControlEXT)GetInstanceProcAddr(instance, "vkDisplayPowerControlEXT");
        RegisterDeviceEventEXT = (PFN_vkRegisterDeviceEventEXT)GetInstanceProcAddr(instance, "vkRegisterDeviceEventEXT");
        RegisterDisplayEventEXT = (PFN_vkRegisterDisplayEventEXT)GetInstanceProcAddr(instance, "vkRegisterDisplayEventEXT");
        GetSwapchainCounterEXT = (PFN_vkGetSwapchainCounterEXT)GetInstanceProcAddr(instance, "vkGetSwapchainCounterEXT");
        CmdSetDiscardRectangleEXT = (PFN_vkCmdSetDiscardRectangleEXT)GetInstanceProcAddr(instance, "vkCmdSetDiscardRectangleEXT");
        CmdSetDiscardRectangleEnableEXT =
            (PFN_vkCmdSetDiscardRectangleEnableEXT)GetInstanceProcAddr(instance, "vkCmdSetDiscardRectangleEnableEXT");
        CmdSetDiscardRectangleModeEXT =
            (PFN_vkCmdSetDiscardRectangleModeEXT)GetInstanceProcAddr(instance, "vkCmdSetDiscardRectangleModeEXT");
        SetHdrMetadataEXT = (PFN_vkSetHdrMetadataEXT)GetInstanceProcAddr(instance, "vkSetHdrMetadataEXT");
        SetDebugUtilsObjectNameEXT =
            (PFN_vkSetDebugUtilsObjectNameEXT)GetInstanceProcAddr(instance, "vkSetDebugUtilsObjectNameEXT");
        SetDebugUtilsObjectTagEXT = (PFN_vkSetDebugUtilsObjectTagEXT)GetInstanceProcAddr(instance, "vkSetDebugUtilsObjectTagEXT");
        QueueBeginDebugUtilsLabelEXT =
            (PFN_vkQueueBeginDebugUtilsLabelEXT)GetInstanceProcAddr(instance, "vkQueueBeginDebugUtilsLabelEXT");
        QueueEndDebugUtilsLabelEXT =
            (PFN_vkQueueEndDebugUtilsLabelEXT)GetInstanceProcAddr(instance, "vkQueueEndDebugUtilsLabelEXT");
        QueueInsertDebugUtilsLabelEXT =
            (PFN_vkQueueInsertDebugUtilsLabelEXT)GetInstanceProcAddr(instance, "vkQueueInsertDebugUtilsLabelEXT");
        CmdBeginDebugUtilsLabelEXT =
            (PFN_vkCmdBeginDebugUtilsLabelEXT)GetInstanceProcAddr(instance, "vkCmdBeginDebugUtilsLabelEXT");
        CmdEndDebugUtilsLabelEXT = (PFN_vkCmdEndDebugUtilsLabelEXT)GetInstanceProcAddr(instance, "vkCmdEndDebugUtilsLabelEXT");
        CmdInsertDebugUtilsLabelEXT =
            (PFN_vkCmdInsertDebugUtilsLabelEXT)GetInstanceProcAddr(instance, "vkCmdInsertDebugUtilsLabelEXT");
        CreateDebugUtilsMessengerEXT =
            (PFN_vkCreateDebugUtilsMessengerEXT)GetInstanceProcAddr(instance, "vkCreateDebugUtilsMessengerEXT");
        DestroyDebugUtilsMessengerEXT =
            (PFN_vkDestroyDebugUtilsMessengerEXT)GetInstanceProcAddr(instance, "vkDestroyDebugUtilsMessengerEXT");
        SubmitDebugUtilsMessageEXT =
            (PFN_vkSubmitDebugUtilsMessageEXT)GetInstanceProcAddr(instance, "vkSubmitDebugUtilsMessageEXT");
        CmdSetSampleLocationsEXT = (PFN_vkCmdSetSampleLocationsEXT)GetInstanceProcAddr(instance, "vkCmdSetSampleLocationsEXT");
        GetPhysicalDeviceMultisamplePropertiesEXT = (PFN_vkGetPhysicalDeviceMultisamplePropertiesEXT)GetInstanceProcAddr(
            instance, "vkGetPhysicalDeviceMultisamplePropertiesEXT");
        GetImageDrmFormatModifierPropertiesEXT =
            (PFN_vkGetImageDrmFormatModifierPropertiesEXT)GetInstanceProcAddr(instance, "vkGetImageDrmFormatModifierPropertiesEXT");
        GetMemoryHostPointerPropertiesEXT =
            (PFN_vkGetMemoryHostPointerPropertiesEXT)GetInstanceProcAddr(instance, "vkGetMemoryHostPointerPropertiesEXT");
        CreateHeadlessSurfaceEXT = (PFN_vkCreateHeadlessSurfaceEXT)GetInstanceProcAddr(instance, "vkCreateHeadlessSurfaceEXT");
        CmdSetLineStippleEXT = (PFN_vkCmdSetLineStippleEXT)GetInstanceProcAddr(instance, "vkCmdSetLineStippleEXT");
        CmdSetCullModeEXT = (PFN_vkCmdSetCullModeEXT)GetInstanceProcAddr(instance, "vkCmdSetCullModeEXT");
        CmdSetFrontFaceEXT = (PFN_vkCmdSetFrontFaceEXT)GetInstanceProcAddr(instance, "vkCmdSetFrontFaceEXT");
        CmdSetPrimitiveTopologyEXT =
            (PFN_vkCmdSetPrimitiveTopologyEXT)GetInstanceProcAddr(instance, "vkCmdSetPrimitiveTopologyEXT");
        CmdSetViewportWithCountEXT =
            (PFN_vkCmdSetViewportWithCountEXT)GetInstanceProcAddr(instance, "vkCmdSetViewportWithCountEXT");
        CmdSetScissorWithCountEXT = (PFN_vkCmdSetScissorWithCountEXT)GetInstanceProcAddr(instance, "vkCmdSetScissorWithCountEXT");
        CmdBindVertexBuffers2EXT = (PFN_vkCmdBindVertexBuffers2EXT)GetInstanceProcAddr(instance, "vkCmdBindVertexBuffers2EXT");
        CmdSetDepthTestEnableEXT = (PFN_vkCmdSetDepthTestEnableEXT)GetInstanceProcAddr(instance, "vkCmdSetDepthTestEnableEXT");
        CmdSetDepthWriteEnableEXT = (PFN_vkCmdSetDepthWriteEnableEXT)GetInstanceProcAddr(instance, "vkCmdSetDepthWriteEnableEXT");
        CmdSetDepthCompareOpEXT = (PFN_vkCmdSetDepthCompareOpEXT)GetInstanceProcAddr(instance, "vkCmdSetDepthCompareOpEXT");
        CmdSetDepthBoundsTestEnableEXT =
            (PFN_vkCmdSetDepthBoundsTestEnableEXT)GetInstanceProcAddr(instance, "vkCmdSetDepthBoundsTestEnableEXT");
        CmdSetStencilTestEnableEXT =
            (PFN_vkCmdSetStencilTestEnableEXT)GetInstanceProcAddr(instance, "vkCmdSetStencilTestEnableEXT");
        CmdSetStencilOpEXT = (PFN_vkCmdSetStencilOpEXT)GetInstanceProcAddr(instance, "vkCmdSetStencilOpEXT");
#ifdef VK_USE_PLATFORM_WIN32_KHR
        AcquireWinrtDisplayNV = (PFN_vkAcquireWinrtDisplayNV)GetInstanceProcAddr(instance, "vkAcquireWinrtDisplayNV");
        GetWinrtDisplayNV = (PFN_vkGetWinrtDisplayNV)GetInstanceProcAddr(instance, "vkGetWinrtDisplayNV");
#endif  // VK_USE_PLATFORM_WIN32_KHR
        CmdSetVertexInputEXT = (PFN_vkCmdSetVertexInputEXT)GetInstanceProcAddr(instance, "vkCmdSetVertexInputEXT");
#ifdef VK_USE_PLATFORM_SCI
        GetFenceSciSyncFenceNV = (PFN_vkGetFenceSciSyncFenceNV)GetInstanceProcAddr(instance, "vkGetFenceSciSyncFenceNV");
        GetFenceSciSyncObjNV = (PFN_vkGetFenceSciSyncObjNV)GetInstanceProcAddr(instance, "vkGetFenceSciSyncObjNV");
        ImportFenceSciSyncFenceNV = (PFN_vkImportFenceSciSyncFenceNV)GetInstanceProcAddr(instance, "vkImportFenceSciSyncFenceNV");
        ImportFenceSciSyncObjNV = (PFN_vkImportFenceSciSyncObjNV)GetInstanceProcAddr(instance, "vkImportFenceSciSyncObjNV");
        GetPhysicalDeviceSciSyncAttributesNV =
            (PFN_vkGetPhysicalDeviceSciSyncAttributesNV)GetInstanceProcAddr(instance, "vkGetPhysicalDeviceSciSyncAttributesNV");
        GetSemaphoreSciSyncObjNV = (PFN_vkGetSemaphoreSciSyncObjNV)GetInstanceProcAddr(instance, "vkGetSemaphoreSciSyncObjNV");
        ImportSemaphoreSciSyncObjNV =
            (PFN_vkImportSemaphoreSciSyncObjNV)GetInstanceProcAddr(instance, "vkImportSemaphoreSciSyncObjNV");
        GetMemorySciBufNV = (PFN_vkGetMemorySciBufNV)GetInstanceProcAddr(instance, "vkGetMemorySciBufNV");
        GetPhysicalDeviceExternalMemorySciBufPropertiesNV =
            (PFN_vkGetPhysicalDeviceExternalMemorySciBufPropertiesNV)GetInstanceProcAddr(
                instance, "vkGetPhysicalDeviceExternalMemorySciBufPropertiesNV");
        GetPhysicalDeviceSciBufAttributesNV =
            (PFN_vkGetPhysicalDeviceSciBufAttributesNV)GetInstanceProcAddr(instance, "vkGetPhysicalDeviceSciBufAttributesNV");
#endif  // VK_USE_PLATFORM_SCI
        CmdSetPatchControlPointsEXT =
            (PFN_vkCmdSetPatchControlPointsEXT)GetInstanceProcAddr(instance, "vkCmdSetPatchControlPointsEXT");
        CmdSetRasterizerDiscardEnableEXT =
            (PFN_vkCmdSetRasterizerDiscardEnableEXT)GetInstanceProcAddr(instance, "vkCmdSetRasterizerDiscardEnableEXT");
        CmdSetDepthBiasEnableEXT = (PFN_vkCmdSetDepthBiasEnableEXT)GetInstanceProcAddr(instance, "vkCmdSetDepthBiasEnableEXT");
        CmdSetLogicOpEXT = (PFN_vkCmdSetLogicOpEXT)GetInstanceProcAddr(instance, "vkCmdSetLogicOpEXT");
        CmdSetPrimitiveRestartEnableEXT =
            (PFN_vkCmdSetPrimitiveRestartEnableEXT)GetInstanceProcAddr(instance, "vkCmdSetPrimitiveRestartEnableEXT");
        CmdSetColorWriteEnableEXT = (PFN_vkCmdSetColorWriteEnableEXT)GetInstanceProcAddr(instance, "vkCmdSetColorWriteEnableEXT");
#ifdef VK_USE_PLATFORM_SCI
        CreateSemaphoreSciSyncPoolNV =
            (PFN_vkCreateSemaphoreSciSyncPoolNV)GetInstanceProcAddr(instance, "vkCreateSemaphoreSciSyncPoolNV");
#endif  // VK_USE_PLATFORM_SCI
#ifdef VK_USE_PLATFORM_SCREEN_QNX
        GetScreenBufferPropertiesQNX =
            (PFN_vkGetScreenBufferPropertiesQNX)GetInstanceProcAddr(instance, "vkGetScreenBufferPropertiesQNX");
#endif  // VK_USE_PLATFORM_SCREEN_QNX
    }

    inline static PFN_vkCreateInstance CreateInstance{nullptr};
    inline static PFN_vkDestroyInstance DestroyInstance{nullptr};
    inline static PFN_vkEnumeratePhysicalDevices EnumeratePhysicalDevices{nullptr};
    inline static PFN_vkGetPhysicalDeviceFeatures GetPhysicalDeviceFeatures{nullptr};
    inline static PFN_vkGetPhysicalDeviceFormatProperties GetPhysicalDeviceFormatProperties{nullptr};
    inline static PFN_vkGetPhysicalDeviceImageFormatProperties GetPhysicalDeviceImageFormatProperties{nullptr};
    inline static PFN_vkGetPhysicalDeviceProperties GetPhysicalDeviceProperties{nullptr};
    inline static PFN_vkGetPhysicalDeviceQueueFamilyProperties GetPhysicalDeviceQueueFamilyProperties{nullptr};
    inline static PFN_vkGetPhysicalDeviceMemoryProperties GetPhysicalDeviceMemoryProperties{nullptr};
    inline static PFN_vkGetInstanceProcAddr GetInstanceProcAddr{nullptr};
    inline static PFN_vkGetDeviceProcAddr GetDeviceProcAddr{nullptr};
    inline static PFN_vkCreateDevice CreateDevice{nullptr};
    inline static PFN_vkDestroyDevice DestroyDevice{nullptr};
    inline static PFN_vkEnumerateInstanceExtensionProperties EnumerateInstanceExtensionProperties{nullptr};
    inline static PFN_vkEnumerateDeviceExtensionProperties EnumerateDeviceExtensionProperties{nullptr};
    inline static PFN_vkEnumerateInstanceLayerProperties EnumerateInstanceLayerProperties{nullptr};
    inline static PFN_vkEnumerateDeviceLayerProperties EnumerateDeviceLayerProperties{nullptr};
    inline static PFN_vkGetDeviceQueue GetDeviceQueue{nullptr};
    inline static PFN_vkQueueSubmit QueueSubmit{nullptr};
    inline static PFN_vkQueueWaitIdle QueueWaitIdle{nullptr};
    inline static PFN_vkDeviceWaitIdle DeviceWaitIdle{nullptr};
    inline static PFN_vkAllocateMemory AllocateMemory{nullptr};
    inline static PFN_vkMapMemory MapMemory{nullptr};
    inline static PFN_vkUnmapMemory UnmapMemory{nullptr};
    inline static PFN_vkFlushMappedMemoryRanges FlushMappedMemoryRanges{nullptr};
    inline static PFN_vkInvalidateMappedMemoryRanges InvalidateMappedMemoryRanges{nullptr};
    inline static PFN_vkGetDeviceMemoryCommitment GetDeviceMemoryCommitment{nullptr};
    inline static PFN_vkBindBufferMemory BindBufferMemory{nullptr};
    inline static PFN_vkBindImageMemory BindImageMemory{nullptr};
    inline static PFN_vkGetBufferMemoryRequirements GetBufferMemoryRequirements{nullptr};
    inline static PFN_vkGetImageMemoryRequirements GetImageMemoryRequirements{nullptr};
    inline static PFN_vkCreateFence CreateFence{nullptr};
    inline static PFN_vkDestroyFence DestroyFence{nullptr};
    inline static PFN_vkResetFences ResetFences{nullptr};
    inline static PFN_vkGetFenceStatus GetFenceStatus{nullptr};
    inline static PFN_vkWaitForFences WaitForFences{nullptr};
    inline static PFN_vkCreateSemaphore CreateSemaphore{nullptr};
    inline static PFN_vkDestroySemaphore DestroySemaphore{nullptr};
    inline static PFN_vkCreateEvent CreateEvent{nullptr};
    inline static PFN_vkDestroyEvent DestroyEvent{nullptr};
    inline static PFN_vkGetEventStatus GetEventStatus{nullptr};
    inline static PFN_vkSetEvent SetEvent{nullptr};
    inline static PFN_vkResetEvent ResetEvent{nullptr};
    inline static PFN_vkCreateQueryPool CreateQueryPool{nullptr};
    inline static PFN_vkGetQueryPoolResults GetQueryPoolResults{nullptr};
    inline static PFN_vkCreateBuffer CreateBuffer{nullptr};
    inline static PFN_vkDestroyBuffer DestroyBuffer{nullptr};
    inline static PFN_vkCreateBufferView CreateBufferView{nullptr};
    inline static PFN_vkDestroyBufferView DestroyBufferView{nullptr};
    inline static PFN_vkCreateImage CreateImage{nullptr};
    inline static PFN_vkDestroyImage DestroyImage{nullptr};
    inline static PFN_vkGetImageSubresourceLayout GetImageSubresourceLayout{nullptr};
    inline static PFN_vkCreateImageView CreateImageView{nullptr};
    inline static PFN_vkDestroyImageView DestroyImageView{nullptr};
    inline static PFN_vkCreatePipelineCache CreatePipelineCache{nullptr};
    inline static PFN_vkDestroyPipelineCache DestroyPipelineCache{nullptr};
    inline static PFN_vkCreateGraphicsPipelines CreateGraphicsPipelines{nullptr};
    inline static PFN_vkCreateComputePipelines CreateComputePipelines{nullptr};
    inline static PFN_vkDestroyPipeline DestroyPipeline{nullptr};
    inline static PFN_vkCreatePipelineLayout CreatePipelineLayout{nullptr};
    inline static PFN_vkDestroyPipelineLayout DestroyPipelineLayout{nullptr};
    inline static PFN_vkCreateSampler CreateSampler{nullptr};
    inline static PFN_vkDestroySampler DestroySampler{nullptr};
    inline static PFN_vkCreateDescriptorSetLayout CreateDescriptorSetLayout{nullptr};
    inline static PFN_vkDestroyDescriptorSetLayout DestroyDescriptorSetLayout{nullptr};
    inline static PFN_vkCreateDescriptorPool CreateDescriptorPool{nullptr};
    inline static PFN_vkResetDescriptorPool ResetDescriptorPool{nullptr};
    inline static PFN_vkAllocateDescriptorSets AllocateDescriptorSets{nullptr};
    inline static PFN_vkFreeDescriptorSets FreeDescriptorSets{nullptr};
    inline static PFN_vkUpdateDescriptorSets UpdateDescriptorSets{nullptr};
    inline static PFN_vkCreateFramebuffer CreateFramebuffer{nullptr};
    inline static PFN_vkDestroyFramebuffer DestroyFramebuffer{nullptr};
    inline static PFN_vkCreateRenderPass CreateRenderPass{nullptr};
    inline static PFN_vkDestroyRenderPass DestroyRenderPass{nullptr};
    inline static PFN_vkGetRenderAreaGranularity GetRenderAreaGranularity{nullptr};
    inline static PFN_vkCreateCommandPool CreateCommandPool{nullptr};
    inline static PFN_vkResetCommandPool ResetCommandPool{nullptr};
    inline static PFN_vkAllocateCommandBuffers AllocateCommandBuffers{nullptr};
    inline static PFN_vkFreeCommandBuffers FreeCommandBuffers{nullptr};
    inline static PFN_vkBeginCommandBuffer BeginCommandBuffer{nullptr};
    inline static PFN_vkEndCommandBuffer EndCommandBuffer{nullptr};
    inline static PFN_vkResetCommandBuffer ResetCommandBuffer{nullptr};
    inline static PFN_vkCmdBindPipeline CmdBindPipeline{nullptr};
    inline static PFN_vkCmdSetViewport CmdSetViewport{nullptr};
    inline static PFN_vkCmdSetScissor CmdSetScissor{nullptr};
    inline static PFN_vkCmdSetLineWidth CmdSetLineWidth{nullptr};
    inline static PFN_vkCmdSetDepthBias CmdSetDepthBias{nullptr};
    inline static PFN_vkCmdSetBlendConstants CmdSetBlendConstants{nullptr};
    inline static PFN_vkCmdSetDepthBounds CmdSetDepthBounds{nullptr};
    inline static PFN_vkCmdSetStencilCompareMask CmdSetStencilCompareMask{nullptr};
    inline static PFN_vkCmdSetStencilWriteMask CmdSetStencilWriteMask{nullptr};
    inline static PFN_vkCmdSetStencilReference CmdSetStencilReference{nullptr};
    inline static PFN_vkCmdBindDescriptorSets CmdBindDescriptorSets{nullptr};
    inline static PFN_vkCmdBindIndexBuffer CmdBindIndexBuffer{nullptr};
    inline static PFN_vkCmdBindVertexBuffers CmdBindVertexBuffers{nullptr};
    inline static PFN_vkCmdDraw CmdDraw{nullptr};
    inline static PFN_vkCmdDrawIndexed CmdDrawIndexed{nullptr};
    inline static PFN_vkCmdDrawIndirect CmdDrawIndirect{nullptr};
    inline static PFN_vkCmdDrawIndexedIndirect CmdDrawIndexedIndirect{nullptr};
    inline static PFN_vkCmdDispatch CmdDispatch{nullptr};
    inline static PFN_vkCmdDispatchIndirect CmdDispatchIndirect{nullptr};
    inline static PFN_vkCmdCopyBuffer CmdCopyBuffer{nullptr};
    inline static PFN_vkCmdCopyImage CmdCopyImage{nullptr};
    inline static PFN_vkCmdBlitImage CmdBlitImage{nullptr};
    inline static PFN_vkCmdCopyBufferToImage CmdCopyBufferToImage{nullptr};
    inline static PFN_vkCmdCopyImageToBuffer CmdCopyImageToBuffer{nullptr};
    inline static PFN_vkCmdUpdateBuffer CmdUpdateBuffer{nullptr};
    inline static PFN_vkCmdFillBuffer CmdFillBuffer{nullptr};
    inline static PFN_vkCmdClearColorImage CmdClearColorImage{nullptr};
    inline static PFN_vkCmdClearDepthStencilImage CmdClearDepthStencilImage{nullptr};
    inline static PFN_vkCmdClearAttachments CmdClearAttachments{nullptr};
    inline static PFN_vkCmdResolveImage CmdResolveImage{nullptr};
    inline static PFN_vkCmdSetEvent CmdSetEvent{nullptr};
    inline static PFN_vkCmdResetEvent CmdResetEvent{nullptr};
    inline static PFN_vkCmdWaitEvents CmdWaitEvents{nullptr};
    inline static PFN_vkCmdPipelineBarrier CmdPipelineBarrier{nullptr};
    inline static PFN_vkCmdBeginQuery CmdBeginQuery{nullptr};
    inline static PFN_vkCmdEndQuery CmdEndQuery{nullptr};
    inline static PFN_vkCmdResetQueryPool CmdResetQueryPool{nullptr};
    inline static PFN_vkCmdWriteTimestamp CmdWriteTimestamp{nullptr};
    inline static PFN_vkCmdCopyQueryPoolResults CmdCopyQueryPoolResults{nullptr};
    inline static PFN_vkCmdPushConstants CmdPushConstants{nullptr};
    inline static PFN_vkCmdBeginRenderPass CmdBeginRenderPass{nullptr};
    inline static PFN_vkCmdNextSubpass CmdNextSubpass{nullptr};
    inline static PFN_vkCmdEndRenderPass CmdEndRenderPass{nullptr};
    inline static PFN_vkCmdExecuteCommands CmdExecuteCommands{nullptr};
    inline static PFN_vkEnumerateInstanceVersion EnumerateInstanceVersion{nullptr};
    inline static PFN_vkBindBufferMemory2 BindBufferMemory2{nullptr};
    inline static PFN_vkBindImageMemory2 BindImageMemory2{nullptr};
    inline static PFN_vkGetDeviceGroupPeerMemoryFeatures GetDeviceGroupPeerMemoryFeatures{nullptr};
    inline static PFN_vkCmdSetDeviceMask CmdSetDeviceMask{nullptr};
    inline static PFN_vkCmdDispatchBase CmdDispatchBase{nullptr};
    inline static PFN_vkEnumeratePhysicalDeviceGroups EnumeratePhysicalDeviceGroups{nullptr};
    inline static PFN_vkGetImageMemoryRequirements2 GetImageMemoryRequirements2{nullptr};
    inline static PFN_vkGetBufferMemoryRequirements2 GetBufferMemoryRequirements2{nullptr};
    inline static PFN_vkGetPhysicalDeviceFeatures2 GetPhysicalDeviceFeatures2{nullptr};
    inline static PFN_vkGetPhysicalDeviceProperties2 GetPhysicalDeviceProperties2{nullptr};
    inline static PFN_vkGetPhysicalDeviceFormatProperties2 GetPhysicalDeviceFormatProperties2{nullptr};
    inline static PFN_vkGetPhysicalDeviceImageFormatProperties2 GetPhysicalDeviceImageFormatProperties2{nullptr};
    inline static PFN_vkGetPhysicalDeviceQueueFamilyProperties2 GetPhysicalDeviceQueueFamilyProperties2{nullptr};
    inline static PFN_vkGetPhysicalDeviceMemoryProperties2 GetPhysicalDeviceMemoryProperties2{nullptr};
    inline static PFN_vkGetDeviceQueue2 GetDeviceQueue2{nullptr};
    inline static PFN_vkCreateSamplerYcbcrConversion CreateSamplerYcbcrConversion{nullptr};
    inline static PFN_vkDestroySamplerYcbcrConversion DestroySamplerYcbcrConversion{nullptr};
    inline static PFN_vkGetPhysicalDeviceExternalBufferProperties GetPhysicalDeviceExternalBufferProperties{nullptr};
    inline static PFN_vkGetPhysicalDeviceExternalFenceProperties GetPhysicalDeviceExternalFenceProperties{nullptr};
    inline static PFN_vkGetPhysicalDeviceExternalSemaphoreProperties GetPhysicalDeviceExternalSemaphoreProperties{nullptr};
    inline static PFN_vkGetDescriptorSetLayoutSupport GetDescriptorSetLayoutSupport{nullptr};
    inline static PFN_vkCmdDrawIndirectCount CmdDrawIndirectCount{nullptr};
    inline static PFN_vkCmdDrawIndexedIndirectCount CmdDrawIndexedIndirectCount{nullptr};
    inline static PFN_vkCreateRenderPass2 CreateRenderPass2{nullptr};
    inline static PFN_vkCmdBeginRenderPass2 CmdBeginRenderPass2{nullptr};
    inline static PFN_vkCmdNextSubpass2 CmdNextSubpass2{nullptr};
    inline static PFN_vkCmdEndRenderPass2 CmdEndRenderPass2{nullptr};
    inline static PFN_vkResetQueryPool ResetQueryPool{nullptr};
    inline static PFN_vkGetSemaphoreCounterValue GetSemaphoreCounterValue{nullptr};
    inline static PFN_vkWaitSemaphores WaitSemaphores{nullptr};
    inline static PFN_vkSignalSemaphore SignalSemaphore{nullptr};
    inline static PFN_vkGetBufferDeviceAddress GetBufferDeviceAddress{nullptr};
    inline static PFN_vkGetBufferOpaqueCaptureAddress GetBufferOpaqueCaptureAddress{nullptr};
    inline static PFN_vkGetDeviceMemoryOpaqueCaptureAddress GetDeviceMemoryOpaqueCaptureAddress{nullptr};
    inline static PFN_vkGetPhysicalDeviceToolProperties GetPhysicalDeviceToolProperties{nullptr};
    inline static PFN_vkCreatePrivateDataSlot CreatePrivateDataSlot{nullptr};
    inline static PFN_vkDestroyPrivateDataSlot DestroyPrivateDataSlot{nullptr};
    inline static PFN_vkSetPrivateData SetPrivateData{nullptr};
    inline static PFN_vkGetPrivateData GetPrivateData{nullptr};
    inline static PFN_vkCmdSetEvent2 CmdSetEvent2{nullptr};
    inline static PFN_vkCmdResetEvent2 CmdResetEvent2{nullptr};
    inline static PFN_vkCmdWaitEvents2 CmdWaitEvents2{nullptr};
    inline static PFN_vkCmdPipelineBarrier2 CmdPipelineBarrier2{nullptr};
    inline static PFN_vkCmdWriteTimestamp2 CmdWriteTimestamp2{nullptr};
    inline static PFN_vkQueueSubmit2 QueueSubmit2{nullptr};
    inline static PFN_vkCmdCopyBuffer2 CmdCopyBuffer2{nullptr};
    inline static PFN_vkCmdCopyImage2 CmdCopyImage2{nullptr};
    inline static PFN_vkCmdCopyBufferToImage2 CmdCopyBufferToImage2{nullptr};
    inline static PFN_vkCmdCopyImageToBuffer2 CmdCopyImageToBuffer2{nullptr};
    inline static PFN_vkCmdBlitImage2 CmdBlitImage2{nullptr};
    inline static PFN_vkCmdResolveImage2 CmdResolveImage2{nullptr};
    inline static PFN_vkCmdBeginRendering CmdBeginRendering{nullptr};
    inline static PFN_vkCmdEndRendering CmdEndRendering{nullptr};
    inline static PFN_vkCmdSetCullMode CmdSetCullMode{nullptr};
    inline static PFN_vkCmdSetFrontFace CmdSetFrontFace{nullptr};
    inline static PFN_vkCmdSetPrimitiveTopology CmdSetPrimitiveTopology{nullptr};
    inline static PFN_vkCmdSetViewportWithCount CmdSetViewportWithCount{nullptr};
    inline static PFN_vkCmdSetScissorWithCount CmdSetScissorWithCount{nullptr};
    inline static PFN_vkCmdBindVertexBuffers2 CmdBindVertexBuffers2{nullptr};
    inline static PFN_vkCmdSetDepthTestEnable CmdSetDepthTestEnable{nullptr};
    inline static PFN_vkCmdSetDepthWriteEnable CmdSetDepthWriteEnable{nullptr};
    inline static PFN_vkCmdSetDepthCompareOp CmdSetDepthCompareOp{nullptr};
    inline static PFN_vkCmdSetDepthBoundsTestEnable CmdSetDepthBoundsTestEnable{nullptr};
    inline static PFN_vkCmdSetStencilTestEnable CmdSetStencilTestEnable{nullptr};
    inline static PFN_vkCmdSetStencilOp CmdSetStencilOp{nullptr};
    inline static PFN_vkCmdSetRasterizerDiscardEnable CmdSetRasterizerDiscardEnable{nullptr};
    inline static PFN_vkCmdSetDepthBiasEnable CmdSetDepthBiasEnable{nullptr};
    inline static PFN_vkCmdSetPrimitiveRestartEnable CmdSetPrimitiveRestartEnable{nullptr};
    inline static PFN_vkGetDeviceBufferMemoryRequirements GetDeviceBufferMemoryRequirements{nullptr};
    inline static PFN_vkGetDeviceImageMemoryRequirements GetDeviceImageMemoryRequirements{nullptr};
    inline static PFN_vkGetDeviceImageSparseMemoryRequirements GetDeviceImageSparseMemoryRequirements{nullptr};
    inline static PFN_vkCmdSetLineStipple CmdSetLineStipple{nullptr};
    inline static PFN_vkMapMemory2 MapMemory2{nullptr};
    inline static PFN_vkUnmapMemory2 UnmapMemory2{nullptr};
    inline static PFN_vkCmdBindIndexBuffer2 CmdBindIndexBuffer2{nullptr};
    inline static PFN_vkGetRenderingAreaGranularity GetRenderingAreaGranularity{nullptr};
    inline static PFN_vkGetDeviceImageSubresourceLayout GetDeviceImageSubresourceLayout{nullptr};
    inline static PFN_vkGetImageSubresourceLayout2 GetImageSubresourceLayout2{nullptr};
    inline static PFN_vkCmdPushDescriptorSet CmdPushDescriptorSet{nullptr};
    inline static PFN_vkCmdSetRenderingAttachmentLocations CmdSetRenderingAttachmentLocations{nullptr};
    inline static PFN_vkCmdSetRenderingInputAttachmentIndices CmdSetRenderingInputAttachmentIndices{nullptr};
    inline static PFN_vkCmdBindDescriptorSets2 CmdBindDescriptorSets2{nullptr};
    inline static PFN_vkCmdPushConstants2 CmdPushConstants2{nullptr};
    inline static PFN_vkCmdPushDescriptorSet2 CmdPushDescriptorSet2{nullptr};
    inline static PFN_vkCopyMemoryToImage CopyMemoryToImage{nullptr};
    inline static PFN_vkCopyImageToMemory CopyImageToMemory{nullptr};
    inline static PFN_vkCopyImageToImage CopyImageToImage{nullptr};
    inline static PFN_vkTransitionImageLayout TransitionImageLayout{nullptr};
    inline static PFN_vkGetCommandPoolMemoryConsumption GetCommandPoolMemoryConsumption{nullptr};
    inline static PFN_vkGetFaultData GetFaultData{nullptr};
    inline static PFN_vkDestroySurfaceKHR DestroySurfaceKHR{nullptr};
    inline static PFN_vkGetPhysicalDeviceSurfaceSupportKHR GetPhysicalDeviceSurfaceSupportKHR{nullptr};
    inline static PFN_vkGetPhysicalDeviceSurfaceCapabilitiesKHR GetPhysicalDeviceSurfaceCapabilitiesKHR{nullptr};
    inline static PFN_vkGetPhysicalDeviceSurfaceFormatsKHR GetPhysicalDeviceSurfaceFormatsKHR{nullptr};
    inline static PFN_vkGetPhysicalDeviceSurfacePresentModesKHR GetPhysicalDeviceSurfacePresentModesKHR{nullptr};
    inline static PFN_vkCreateSwapchainKHR CreateSwapchainKHR{nullptr};
    inline static PFN_vkGetSwapchainImagesKHR GetSwapchainImagesKHR{nullptr};
    inline static PFN_vkAcquireNextImageKHR AcquireNextImageKHR{nullptr};
    inline static PFN_vkQueuePresentKHR QueuePresentKHR{nullptr};
    inline static PFN_vkGetDeviceGroupPresentCapabilitiesKHR GetDeviceGroupPresentCapabilitiesKHR{nullptr};
    inline static PFN_vkGetDeviceGroupSurfacePresentModesKHR GetDeviceGroupSurfacePresentModesKHR{nullptr};
    inline static PFN_vkGetPhysicalDevicePresentRectanglesKHR GetPhysicalDevicePresentRectanglesKHR{nullptr};
    inline static PFN_vkAcquireNextImage2KHR AcquireNextImage2KHR{nullptr};
    inline static PFN_vkGetPhysicalDeviceDisplayPropertiesKHR GetPhysicalDeviceDisplayPropertiesKHR{nullptr};
    inline static PFN_vkGetPhysicalDeviceDisplayPlanePropertiesKHR GetPhysicalDeviceDisplayPlanePropertiesKHR{nullptr};
    inline static PFN_vkGetDisplayPlaneSupportedDisplaysKHR GetDisplayPlaneSupportedDisplaysKHR{nullptr};
    inline static PFN_vkGetDisplayModePropertiesKHR GetDisplayModePropertiesKHR{nullptr};
    inline static PFN_vkCreateDisplayModeKHR CreateDisplayModeKHR{nullptr};
    inline static PFN_vkGetDisplayPlaneCapabilitiesKHR GetDisplayPlaneCapabilitiesKHR{nullptr};
    inline static PFN_vkCreateDisplayPlaneSurfaceKHR CreateDisplayPlaneSurfaceKHR{nullptr};
    inline static PFN_vkCreateSharedSwapchainsKHR CreateSharedSwapchainsKHR{nullptr};
    inline static PFN_vkGetMemoryFdKHR GetMemoryFdKHR{nullptr};
    inline static PFN_vkGetMemoryFdPropertiesKHR GetMemoryFdPropertiesKHR{nullptr};
    inline static PFN_vkImportSemaphoreFdKHR ImportSemaphoreFdKHR{nullptr};
    inline static PFN_vkGetSemaphoreFdKHR GetSemaphoreFdKHR{nullptr};
    inline static PFN_vkGetSwapchainStatusKHR GetSwapchainStatusKHR{nullptr};
    inline static PFN_vkImportFenceFdKHR ImportFenceFdKHR{nullptr};
    inline static PFN_vkGetFenceFdKHR GetFenceFdKHR{nullptr};
    inline static PFN_vkEnumeratePhysicalDeviceQueueFamilyPerformanceQueryCountersKHR
        EnumeratePhysicalDeviceQueueFamilyPerformanceQueryCountersKHR{nullptr};
    inline static PFN_vkGetPhysicalDeviceQueueFamilyPerformanceQueryPassesKHR GetPhysicalDeviceQueueFamilyPerformanceQueryPassesKHR{
        nullptr};
    inline static PFN_vkAcquireProfilingLockKHR AcquireProfilingLockKHR{nullptr};
    inline static PFN_vkReleaseProfilingLockKHR ReleaseProfilingLockKHR{nullptr};
    inline static PFN_vkGetPhysicalDeviceSurfaceCapabilities2KHR GetPhysicalDeviceSurfaceCapabilities2KHR{nullptr};
    inline static PFN_vkGetPhysicalDeviceSurfaceFormats2KHR GetPhysicalDeviceSurfaceFormats2KHR{nullptr};
    inline static PFN_vkGetPhysicalDeviceDisplayProperties2KHR GetPhysicalDeviceDisplayProperties2KHR{nullptr};
    inline static PFN_vkGetPhysicalDeviceDisplayPlaneProperties2KHR GetPhysicalDeviceDisplayPlaneProperties2KHR{nullptr};
    inline static PFN_vkGetDisplayModeProperties2KHR GetDisplayModeProperties2KHR{nullptr};
    inline static PFN_vkGetDisplayPlaneCapabilities2KHR GetDisplayPlaneCapabilities2KHR{nullptr};
    inline static PFN_vkGetPhysicalDeviceFragmentShadingRatesKHR GetPhysicalDeviceFragmentShadingRatesKHR{nullptr};
    inline static PFN_vkCmdSetFragmentShadingRateKHR CmdSetFragmentShadingRateKHR{nullptr};
    inline static PFN_vkCmdRefreshObjectsKHR CmdRefreshObjectsKHR{nullptr};
    inline static PFN_vkGetPhysicalDeviceRefreshableObjectTypesKHR GetPhysicalDeviceRefreshableObjectTypesKHR{nullptr};
    inline static PFN_vkCmdSetEvent2KHR CmdSetEvent2KHR{nullptr};
    inline static PFN_vkCmdResetEvent2KHR CmdResetEvent2KHR{nullptr};
    inline static PFN_vkCmdWaitEvents2KHR CmdWaitEvents2KHR{nullptr};
    inline static PFN_vkCmdPipelineBarrier2KHR CmdPipelineBarrier2KHR{nullptr};
    inline static PFN_vkCmdWriteTimestamp2KHR CmdWriteTimestamp2KHR{nullptr};
    inline static PFN_vkQueueSubmit2KHR QueueSubmit2KHR{nullptr};
    inline static PFN_vkCmdCopyBuffer2KHR CmdCopyBuffer2KHR{nullptr};
    inline static PFN_vkCmdCopyImage2KHR CmdCopyImage2KHR{nullptr};
    inline static PFN_vkCmdCopyBufferToImage2KHR CmdCopyBufferToImage2KHR{nullptr};
    inline static PFN_vkCmdCopyImageToBuffer2KHR CmdCopyImageToBuffer2KHR{nullptr};
    inline static PFN_vkCmdBlitImage2KHR CmdBlitImage2KHR{nullptr};
    inline static PFN_vkCmdResolveImage2KHR CmdResolveImage2KHR{nullptr};
    inline static PFN_vkCmdSetLineStippleKHR CmdSetLineStippleKHR{nullptr};
    inline static PFN_vkGetPhysicalDeviceCalibrateableTimeDomainsKHR GetPhysicalDeviceCalibrateableTimeDomainsKHR{nullptr};
    inline static PFN_vkGetCalibratedTimestampsKHR GetCalibratedTimestampsKHR{nullptr};
    inline static PFN_vkReleaseDisplayEXT ReleaseDisplayEXT{nullptr};
    inline static PFN_vkGetPhysicalDeviceSurfaceCapabilities2EXT GetPhysicalDeviceSurfaceCapabilities2EXT{nullptr};
    inline static PFN_vkDisplayPowerControlEXT DisplayPowerControlEXT{nullptr};
    inline static PFN_vkRegisterDeviceEventEXT RegisterDeviceEventEXT{nullptr};
    inline static PFN_vkRegisterDisplayEventEXT RegisterDisplayEventEXT{nullptr};
    inline static PFN_vkGetSwapchainCounterEXT GetSwapchainCounterEXT{nullptr};
    inline static PFN_vkCmdSetDiscardRectangleEXT CmdSetDiscardRectangleEXT{nullptr};
    inline static PFN_vkCmdSetDiscardRectangleEnableEXT CmdSetDiscardRectangleEnableEXT{nullptr};
    inline static PFN_vkCmdSetDiscardRectangleModeEXT CmdSetDiscardRectangleModeEXT{nullptr};
    inline static PFN_vkSetHdrMetadataEXT SetHdrMetadataEXT{nullptr};
    inline static PFN_vkSetDebugUtilsObjectNameEXT SetDebugUtilsObjectNameEXT{nullptr};
    inline static PFN_vkSetDebugUtilsObjectTagEXT SetDebugUtilsObjectTagEXT{nullptr};
    inline static PFN_vkQueueBeginDebugUtilsLabelEXT QueueBeginDebugUtilsLabelEXT{nullptr};
    inline static PFN_vkQueueEndDebugUtilsLabelEXT QueueEndDebugUtilsLabelEXT{nullptr};
    inline static PFN_vkQueueInsertDebugUtilsLabelEXT QueueInsertDebugUtilsLabelEXT{nullptr};
    inline static PFN_vkCmdBeginDebugUtilsLabelEXT CmdBeginDebugUtilsLabelEXT{nullptr};
    inline static PFN_vkCmdEndDebugUtilsLabelEXT CmdEndDebugUtilsLabelEXT{nullptr};
    inline static PFN_vkCmdInsertDebugUtilsLabelEXT CmdInsertDebugUtilsLabelEXT{nullptr};
    inline static PFN_vkCreateDebugUtilsMessengerEXT CreateDebugUtilsMessengerEXT{nullptr};
    inline static PFN_vkDestroyDebugUtilsMessengerEXT DestroyDebugUtilsMessengerEXT{nullptr};
    inline static PFN_vkSubmitDebugUtilsMessageEXT SubmitDebugUtilsMessageEXT{nullptr};
    inline static PFN_vkCmdSetSampleLocationsEXT CmdSetSampleLocationsEXT{nullptr};
    inline static PFN_vkGetPhysicalDeviceMultisamplePropertiesEXT GetPhysicalDeviceMultisamplePropertiesEXT{nullptr};
    inline static PFN_vkGetImageDrmFormatModifierPropertiesEXT GetImageDrmFormatModifierPropertiesEXT{nullptr};
    inline static PFN_vkGetMemoryHostPointerPropertiesEXT GetMemoryHostPointerPropertiesEXT{nullptr};
    inline static PFN_vkCreateHeadlessSurfaceEXT CreateHeadlessSurfaceEXT{nullptr};
    inline static PFN_vkCmdSetLineStippleEXT CmdSetLineStippleEXT{nullptr};
    inline static PFN_vkCmdSetCullModeEXT CmdSetCullModeEXT{nullptr};
    inline static PFN_vkCmdSetFrontFaceEXT CmdSetFrontFaceEXT{nullptr};
    inline static PFN_vkCmdSetPrimitiveTopologyEXT CmdSetPrimitiveTopologyEXT{nullptr};
    inline static PFN_vkCmdSetViewportWithCountEXT CmdSetViewportWithCountEXT{nullptr};
    inline static PFN_vkCmdSetScissorWithCountEXT CmdSetScissorWithCountEXT{nullptr};
    inline static PFN_vkCmdBindVertexBuffers2EXT CmdBindVertexBuffers2EXT{nullptr};
    inline static PFN_vkCmdSetDepthTestEnableEXT CmdSetDepthTestEnableEXT{nullptr};
    inline static PFN_vkCmdSetDepthWriteEnableEXT CmdSetDepthWriteEnableEXT{nullptr};
    inline static PFN_vkCmdSetDepthCompareOpEXT CmdSetDepthCompareOpEXT{nullptr};
    inline static PFN_vkCmdSetDepthBoundsTestEnableEXT CmdSetDepthBoundsTestEnableEXT{nullptr};
    inline static PFN_vkCmdSetStencilTestEnableEXT CmdSetStencilTestEnableEXT{nullptr};
    inline static PFN_vkCmdSetStencilOpEXT CmdSetStencilOpEXT{nullptr};
#ifdef VK_USE_PLATFORM_WIN32_KHR
    inline static PFN_vkAcquireWinrtDisplayNV AcquireWinrtDisplayNV{nullptr};
    inline static PFN_vkGetWinrtDisplayNV GetWinrtDisplayNV{nullptr};
#endif  // VK_USE_PLATFORM_WIN32_KHR
    inline static PFN_vkCmdSetVertexInputEXT CmdSetVertexInputEXT{nullptr};
#ifdef VK_USE_PLATFORM_SCI
    inline static PFN_vkGetFenceSciSyncFenceNV GetFenceSciSyncFenceNV{nullptr};
    inline static PFN_vkGetFenceSciSyncObjNV GetFenceSciSyncObjNV{nullptr};
    inline static PFN_vkImportFenceSciSyncFenceNV ImportFenceSciSyncFenceNV{nullptr};
    inline static PFN_vkImportFenceSciSyncObjNV ImportFenceSciSyncObjNV{nullptr};
    inline static PFN_vkGetPhysicalDeviceSciSyncAttributesNV GetPhysicalDeviceSciSyncAttributesNV{nullptr};
    inline static PFN_vkGetSemaphoreSciSyncObjNV GetSemaphoreSciSyncObjNV{nullptr};
    inline static PFN_vkImportSemaphoreSciSyncObjNV ImportSemaphoreSciSyncObjNV{nullptr};
    inline static PFN_vkGetMemorySciBufNV GetMemorySciBufNV{nullptr};
    inline static PFN_vkGetPhysicalDeviceExternalMemorySciBufPropertiesNV GetPhysicalDeviceExternalMemorySciBufPropertiesNV{
        nullptr};
    inline static PFN_vkGetPhysicalDeviceSciBufAttributesNV GetPhysicalDeviceSciBufAttributesNV{nullptr};
#endif  // VK_USE_PLATFORM_SCI
    inline static PFN_vkCmdSetPatchControlPointsEXT CmdSetPatchControlPointsEXT{nullptr};
    inline static PFN_vkCmdSetRasterizerDiscardEnableEXT CmdSetRasterizerDiscardEnableEXT{nullptr};
    inline static PFN_vkCmdSetDepthBiasEnableEXT CmdSetDepthBiasEnableEXT{nullptr};
    inline static PFN_vkCmdSetLogicOpEXT CmdSetLogicOpEXT{nullptr};
    inline static PFN_vkCmdSetPrimitiveRestartEnableEXT CmdSetPrimitiveRestartEnableEXT{nullptr};
    inline static PFN_vkCmdSetColorWriteEnableEXT CmdSetColorWriteEnableEXT{nullptr};
#ifdef VK_USE_PLATFORM_SCI
    inline static PFN_vkCreateSemaphoreSciSyncPoolNV CreateSemaphoreSciSyncPoolNV{nullptr};
#endif  // VK_USE_PLATFORM_SCI
#ifdef VK_USE_PLATFORM_SCREEN_QNX
    inline static PFN_vkGetScreenBufferPropertiesQNX GetScreenBufferPropertiesQNX{nullptr};
#endif  // VK_USE_PLATFORM_SCREEN_QNX
};

// NOLINTEND
