// *** THIS FILE IS GENERATED - DO NOT EDIT ***
// See output_struct_sanitizer_generator.py for modifications

/*
 * Copyright (c) 2024 The Khronos Group Inc.
 * Copyright (c) 2024 RasterGrid Kft.
 *
 * SPDX-License-Identifier: Apache-2.0
 */
// NOLINTBEGIN

#include "vksc_output_struct_sanitizer.h"

namespace vksc {

template <>
void ConvertOutStructToVulkanSC<VkPhysicalDeviceFeatures>(VkPhysicalDeviceFeatures* p) {}

template <>
void ConvertOutStructToVulkanSC<VkFormatProperties>(VkFormatProperties* p) {
    p->linearTilingFeatures = p->linearTilingFeatures & AllVkFormatFeatureFlagBits;
    p->optimalTilingFeatures = p->optimalTilingFeatures & AllVkFormatFeatureFlagBits;
    p->bufferFeatures = p->bufferFeatures & AllVkFormatFeatureFlagBits;
}

template <>
void ConvertOutStructToVulkanSC<VkImageFormatProperties>(VkImageFormatProperties* p) {
    ConvertOutStructToVulkanSC<VkExtent3D>(&p->maxExtent);
    p->sampleCounts = p->sampleCounts & AllVkSampleCountFlagBits;
}

template <>
void ConvertOutStructToVulkanSC<VkPhysicalDeviceProperties>(VkPhysicalDeviceProperties* p) {
    ConvertOutStructToVulkanSC<VkPhysicalDeviceLimits>(&p->limits);
    ConvertOutStructToVulkanSC<VkPhysicalDeviceSparseProperties>(&p->sparseProperties);
}

template <>
void ConvertOutStructToVulkanSC<VkQueueFamilyProperties>(VkQueueFamilyProperties* p) {
    p->queueFlags = p->queueFlags & AllVkQueueFlagBits;
    ConvertOutStructToVulkanSC<VkExtent3D>(&p->minImageTransferGranularity);
}

template <>
void ConvertOutStructToVulkanSC<VkPhysicalDeviceMemoryProperties>(VkPhysicalDeviceMemoryProperties* p) {
    for (uint32_t i = 0; i < p->memoryTypeCount; ++i) {
        ConvertOutStructToVulkanSC<VkMemoryType>(&p->memoryTypes[i]);
    }

    for (uint32_t i = 0; i < p->memoryHeapCount; ++i) {
        ConvertOutStructToVulkanSC<VkMemoryHeap>(&p->memoryHeaps[i]);
    }
}

template <>
void ConvertOutStructToVulkanSC<VkExtensionProperties>(VkExtensionProperties* p) {}

template <>
void ConvertOutStructToVulkanSC<VkLayerProperties>(VkLayerProperties* p) {}

template <>
void ConvertOutStructToVulkanSC<VkMemoryRequirements>(VkMemoryRequirements* p) {}

template <>
void ConvertOutStructToVulkanSC<VkSubresourceLayout>(VkSubresourceLayout* p) {}

template <>
void ConvertOutStructToVulkanSC<VkExtent2D>(VkExtent2D* p) {}

template <>
void ConvertOutStructToVulkanSC<VkPhysicalDeviceGroupProperties>(VkPhysicalDeviceGroupProperties* p) {}

template <>
void ConvertOutStructToVulkanSC<VkMemoryRequirements2>(VkMemoryRequirements2* p) {
    ConvertOutStructToVulkanSC<VkMemoryRequirements>(&p->memoryRequirements);
}

template <>
void ConvertOutStructToVulkanSC<VkPhysicalDeviceFeatures2>(VkPhysicalDeviceFeatures2* p) {
    ConvertOutStructToVulkanSC<VkPhysicalDeviceFeatures>(&p->features);
}

template <>
void ConvertOutStructToVulkanSC<VkPhysicalDeviceProperties2>(VkPhysicalDeviceProperties2* p) {
    ConvertOutStructToVulkanSC<VkPhysicalDeviceProperties>(&p->properties);
}

template <>
void ConvertOutStructToVulkanSC<VkFormatProperties2>(VkFormatProperties2* p) {
    ConvertOutStructToVulkanSC<VkFormatProperties>(&p->formatProperties);
}

template <>
void ConvertOutStructToVulkanSC<VkImageFormatProperties2>(VkImageFormatProperties2* p) {
    ConvertOutStructToVulkanSC<VkImageFormatProperties>(&p->imageFormatProperties);
}

template <>
void ConvertOutStructToVulkanSC<VkQueueFamilyProperties2>(VkQueueFamilyProperties2* p) {
    ConvertOutStructToVulkanSC<VkQueueFamilyProperties>(&p->queueFamilyProperties);
}

template <>
void ConvertOutStructToVulkanSC<VkPhysicalDeviceMemoryProperties2>(VkPhysicalDeviceMemoryProperties2* p) {
    ConvertOutStructToVulkanSC<VkPhysicalDeviceMemoryProperties>(&p->memoryProperties);
}

template <>
void ConvertOutStructToVulkanSC<VkExternalBufferProperties>(VkExternalBufferProperties* p) {
    ConvertOutStructToVulkanSC<VkExternalMemoryProperties>(&p->externalMemoryProperties);
}

template <>
void ConvertOutStructToVulkanSC<VkExternalFenceProperties>(VkExternalFenceProperties* p) {
    p->exportFromImportedHandleTypes = p->exportFromImportedHandleTypes & AllVkExternalFenceHandleTypeFlagBits;
    p->compatibleHandleTypes = p->compatibleHandleTypes & AllVkExternalFenceHandleTypeFlagBits;
    p->externalFenceFeatures = p->externalFenceFeatures & AllVkExternalFenceFeatureFlagBits;
}

template <>
void ConvertOutStructToVulkanSC<VkExternalSemaphoreProperties>(VkExternalSemaphoreProperties* p) {
    p->exportFromImportedHandleTypes = p->exportFromImportedHandleTypes & AllVkExternalSemaphoreHandleTypeFlagBits;
    p->compatibleHandleTypes = p->compatibleHandleTypes & AllVkExternalSemaphoreHandleTypeFlagBits;
    p->externalSemaphoreFeatures = p->externalSemaphoreFeatures & AllVkExternalSemaphoreFeatureFlagBits;
}

template <>
void ConvertOutStructToVulkanSC<VkDescriptorSetLayoutSupport>(VkDescriptorSetLayoutSupport* p) {}

template <>
void ConvertOutStructToVulkanSC<VkPhysicalDeviceToolProperties>(VkPhysicalDeviceToolProperties* p) {
    p->purposes = p->purposes & AllVkToolPurposeFlagBits;
}

template <>
void ConvertOutStructToVulkanSC<VkCommandPoolMemoryConsumption>(VkCommandPoolMemoryConsumption* p) {}

template <>
void ConvertOutStructToVulkanSC<VkFaultData>(VkFaultData* p) {}

template <>
void ConvertOutStructToVulkanSC<VkSurfaceCapabilitiesKHR>(VkSurfaceCapabilitiesKHR* p) {
    ConvertOutStructToVulkanSC<VkExtent2D>(&p->currentExtent);
    ConvertOutStructToVulkanSC<VkExtent2D>(&p->minImageExtent);
    ConvertOutStructToVulkanSC<VkExtent2D>(&p->maxImageExtent);
    p->supportedTransforms = p->supportedTransforms & AllVkSurfaceTransformFlagBitsKHR;
    p->supportedCompositeAlpha = p->supportedCompositeAlpha & AllVkCompositeAlphaFlagBitsKHR;
    p->supportedUsageFlags = p->supportedUsageFlags & AllVkImageUsageFlagBits;
}

template <>
void ConvertOutStructToVulkanSC<VkSurfaceFormatKHR>(VkSurfaceFormatKHR* p) {}

template <>
void ConvertOutStructToVulkanSC<VkDeviceGroupPresentCapabilitiesKHR>(VkDeviceGroupPresentCapabilitiesKHR* p) {
    p->modes = p->modes & AllVkDeviceGroupPresentModeFlagBitsKHR;
}

template <>
void ConvertOutStructToVulkanSC<VkRect2D>(VkRect2D* p) {
    ConvertOutStructToVulkanSC<VkOffset2D>(&p->offset);
    ConvertOutStructToVulkanSC<VkExtent2D>(&p->extent);
}

template <>
void ConvertOutStructToVulkanSC<VkDisplayPropertiesKHR>(VkDisplayPropertiesKHR* p) {
    ConvertOutStructToVulkanSC<VkExtent2D>(&p->physicalDimensions);
    ConvertOutStructToVulkanSC<VkExtent2D>(&p->physicalResolution);
    p->supportedTransforms = p->supportedTransforms & AllVkSurfaceTransformFlagBitsKHR;
}

template <>
void ConvertOutStructToVulkanSC<VkDisplayPlanePropertiesKHR>(VkDisplayPlanePropertiesKHR* p) {}

template <>
void ConvertOutStructToVulkanSC<VkDisplayModePropertiesKHR>(VkDisplayModePropertiesKHR* p) {
    ConvertOutStructToVulkanSC<VkDisplayModeParametersKHR>(&p->parameters);
}

template <>
void ConvertOutStructToVulkanSC<VkDisplayPlaneCapabilitiesKHR>(VkDisplayPlaneCapabilitiesKHR* p) {
    p->supportedAlpha = p->supportedAlpha & AllVkDisplayPlaneAlphaFlagBitsKHR;
    ConvertOutStructToVulkanSC<VkOffset2D>(&p->minSrcPosition);
    ConvertOutStructToVulkanSC<VkOffset2D>(&p->maxSrcPosition);
    ConvertOutStructToVulkanSC<VkExtent2D>(&p->minSrcExtent);
    ConvertOutStructToVulkanSC<VkExtent2D>(&p->maxSrcExtent);
    ConvertOutStructToVulkanSC<VkOffset2D>(&p->minDstPosition);
    ConvertOutStructToVulkanSC<VkOffset2D>(&p->maxDstPosition);
    ConvertOutStructToVulkanSC<VkExtent2D>(&p->minDstExtent);
    ConvertOutStructToVulkanSC<VkExtent2D>(&p->maxDstExtent);
}

template <>
void ConvertOutStructToVulkanSC<VkMemoryFdPropertiesKHR>(VkMemoryFdPropertiesKHR* p) {}

template <>
void ConvertOutStructToVulkanSC<VkPerformanceCounterKHR>(VkPerformanceCounterKHR* p) {}

template <>
void ConvertOutStructToVulkanSC<VkPerformanceCounterDescriptionKHR>(VkPerformanceCounterDescriptionKHR* p) {
    p->flags = p->flags & AllVkPerformanceCounterDescriptionFlagBitsKHR;
}

template <>
void ConvertOutStructToVulkanSC<VkSurfaceCapabilities2KHR>(VkSurfaceCapabilities2KHR* p) {
    ConvertOutStructToVulkanSC<VkSurfaceCapabilitiesKHR>(&p->surfaceCapabilities);
}

template <>
void ConvertOutStructToVulkanSC<VkSurfaceFormat2KHR>(VkSurfaceFormat2KHR* p) {
    ConvertOutStructToVulkanSC<VkSurfaceFormatKHR>(&p->surfaceFormat);
}

template <>
void ConvertOutStructToVulkanSC<VkDisplayProperties2KHR>(VkDisplayProperties2KHR* p) {
    ConvertOutStructToVulkanSC<VkDisplayPropertiesKHR>(&p->displayProperties);
}

template <>
void ConvertOutStructToVulkanSC<VkDisplayPlaneProperties2KHR>(VkDisplayPlaneProperties2KHR* p) {
    ConvertOutStructToVulkanSC<VkDisplayPlanePropertiesKHR>(&p->displayPlaneProperties);
}

template <>
void ConvertOutStructToVulkanSC<VkDisplayModeProperties2KHR>(VkDisplayModeProperties2KHR* p) {
    ConvertOutStructToVulkanSC<VkDisplayModePropertiesKHR>(&p->displayModeProperties);
}

template <>
void ConvertOutStructToVulkanSC<VkDisplayPlaneCapabilities2KHR>(VkDisplayPlaneCapabilities2KHR* p) {
    ConvertOutStructToVulkanSC<VkDisplayPlaneCapabilitiesKHR>(&p->capabilities);
}

template <>
void ConvertOutStructToVulkanSC<VkPhysicalDeviceFragmentShadingRateKHR>(VkPhysicalDeviceFragmentShadingRateKHR* p) {
    p->sampleCounts = p->sampleCounts & AllVkSampleCountFlagBits;
    ConvertOutStructToVulkanSC<VkExtent2D>(&p->fragmentSize);
}

template <>
void ConvertOutStructToVulkanSC<VkCheckpointData2NV>(VkCheckpointData2NV* p) {
    p->stage = p->stage & AllVkPipelineStageFlagBits2;
}

template <>
void ConvertOutStructToVulkanSC<VkSurfaceCapabilities2EXT>(VkSurfaceCapabilities2EXT* p) {
    ConvertOutStructToVulkanSC<VkExtent2D>(&p->currentExtent);
    ConvertOutStructToVulkanSC<VkExtent2D>(&p->minImageExtent);
    ConvertOutStructToVulkanSC<VkExtent2D>(&p->maxImageExtent);
    p->supportedTransforms = p->supportedTransforms & AllVkSurfaceTransformFlagBitsKHR;
    p->supportedCompositeAlpha = p->supportedCompositeAlpha & AllVkCompositeAlphaFlagBitsKHR;
    p->supportedUsageFlags = p->supportedUsageFlags & AllVkImageUsageFlagBits;
    p->supportedSurfaceCounters = p->supportedSurfaceCounters & AllVkSurfaceCounterFlagBitsEXT;
}

template <>
void ConvertOutStructToVulkanSC<VkMultisamplePropertiesEXT>(VkMultisamplePropertiesEXT* p) {
    ConvertOutStructToVulkanSC<VkExtent2D>(&p->maxSampleLocationGridSize);
}

template <>
void ConvertOutStructToVulkanSC<VkImageDrmFormatModifierPropertiesEXT>(VkImageDrmFormatModifierPropertiesEXT* p) {}

template <>
void ConvertOutStructToVulkanSC<VkMemoryHostPointerPropertiesEXT>(VkMemoryHostPointerPropertiesEXT* p) {}
#ifdef VK_USE_PLATFORM_SCI

template <>
void ConvertOutStructToVulkanSC<VkMemorySciBufPropertiesNV>(VkMemorySciBufPropertiesNV* p) {}
#endif  // VK_USE_PLATFORM_SCI
#ifdef VK_USE_PLATFORM_SCREEN_QNX

template <>
void ConvertOutStructToVulkanSC<VkScreenBufferPropertiesQNX>(VkScreenBufferPropertiesQNX* p) {}
#endif  // VK_USE_PLATFORM_SCREEN_QNX

template <>
void ConvertOutStructToVulkanSC<VkPhysicalDeviceSubgroupProperties>(VkPhysicalDeviceSubgroupProperties* p) {
    p->supportedStages = p->supportedStages & AllVkShaderStageFlagBits;
    p->supportedOperations = p->supportedOperations & AllVkSubgroupFeatureFlagBits;
}

template <>
void ConvertOutStructToVulkanSC<VkPhysicalDevice16BitStorageFeatures>(VkPhysicalDevice16BitStorageFeatures* p) {}

template <>
void ConvertOutStructToVulkanSC<VkMemoryDedicatedRequirements>(VkMemoryDedicatedRequirements* p) {}

template <>
void ConvertOutStructToVulkanSC<VkPhysicalDevicePointClippingProperties>(VkPhysicalDevicePointClippingProperties* p) {}

template <>
void ConvertOutStructToVulkanSC<VkPhysicalDeviceMultiviewFeatures>(VkPhysicalDeviceMultiviewFeatures* p) {}

template <>
void ConvertOutStructToVulkanSC<VkPhysicalDeviceMultiviewProperties>(VkPhysicalDeviceMultiviewProperties* p) {}

template <>
void ConvertOutStructToVulkanSC<VkPhysicalDeviceVariablePointersFeatures>(VkPhysicalDeviceVariablePointersFeatures* p) {}

template <>
void ConvertOutStructToVulkanSC<VkPhysicalDeviceProtectedMemoryFeatures>(VkPhysicalDeviceProtectedMemoryFeatures* p) {}

template <>
void ConvertOutStructToVulkanSC<VkPhysicalDeviceProtectedMemoryProperties>(VkPhysicalDeviceProtectedMemoryProperties* p) {}

template <>
void ConvertOutStructToVulkanSC<VkPhysicalDeviceSamplerYcbcrConversionFeatures>(VkPhysicalDeviceSamplerYcbcrConversionFeatures* p) {
}

template <>
void ConvertOutStructToVulkanSC<VkSamplerYcbcrConversionImageFormatProperties>(VkSamplerYcbcrConversionImageFormatProperties* p) {}

template <>
void ConvertOutStructToVulkanSC<VkExternalImageFormatProperties>(VkExternalImageFormatProperties* p) {
    ConvertOutStructToVulkanSC<VkExternalMemoryProperties>(&p->externalMemoryProperties);
}

template <>
void ConvertOutStructToVulkanSC<VkPhysicalDeviceIDProperties>(VkPhysicalDeviceIDProperties* p) {}

template <>
void ConvertOutStructToVulkanSC<VkPhysicalDeviceMaintenance3Properties>(VkPhysicalDeviceMaintenance3Properties* p) {}

template <>
void ConvertOutStructToVulkanSC<VkPhysicalDeviceShaderDrawParametersFeatures>(VkPhysicalDeviceShaderDrawParametersFeatures* p) {}

template <>
void ConvertOutStructToVulkanSC<VkPhysicalDeviceVulkan11Features>(VkPhysicalDeviceVulkan11Features* p) {}

template <>
void ConvertOutStructToVulkanSC<VkPhysicalDeviceVulkan11Properties>(VkPhysicalDeviceVulkan11Properties* p) {
    p->subgroupSupportedStages = p->subgroupSupportedStages & AllVkShaderStageFlagBits;
    p->subgroupSupportedOperations = p->subgroupSupportedOperations & AllVkSubgroupFeatureFlagBits;
}

template <>
void ConvertOutStructToVulkanSC<VkPhysicalDeviceVulkan12Features>(VkPhysicalDeviceVulkan12Features* p) {}

template <>
void ConvertOutStructToVulkanSC<VkPhysicalDeviceVulkan12Properties>(VkPhysicalDeviceVulkan12Properties* p) {
    ConvertOutStructToVulkanSC<VkConformanceVersion>(&p->conformanceVersion);
    p->supportedDepthResolveModes = p->supportedDepthResolveModes & AllVkResolveModeFlagBits;
    p->supportedStencilResolveModes = p->supportedStencilResolveModes & AllVkResolveModeFlagBits;
    p->framebufferIntegerColorSampleCounts = p->framebufferIntegerColorSampleCounts & AllVkSampleCountFlagBits;
}

template <>
void ConvertOutStructToVulkanSC<VkPhysicalDevice8BitStorageFeatures>(VkPhysicalDevice8BitStorageFeatures* p) {}

template <>
void ConvertOutStructToVulkanSC<VkPhysicalDeviceDriverProperties>(VkPhysicalDeviceDriverProperties* p) {
    ConvertOutStructToVulkanSC<VkConformanceVersion>(&p->conformanceVersion);
}

template <>
void ConvertOutStructToVulkanSC<VkPhysicalDeviceShaderAtomicInt64Features>(VkPhysicalDeviceShaderAtomicInt64Features* p) {}

template <>
void ConvertOutStructToVulkanSC<VkPhysicalDeviceShaderFloat16Int8Features>(VkPhysicalDeviceShaderFloat16Int8Features* p) {}

template <>
void ConvertOutStructToVulkanSC<VkPhysicalDeviceFloatControlsProperties>(VkPhysicalDeviceFloatControlsProperties* p) {}

template <>
void ConvertOutStructToVulkanSC<VkPhysicalDeviceDescriptorIndexingFeatures>(VkPhysicalDeviceDescriptorIndexingFeatures* p) {}

template <>
void ConvertOutStructToVulkanSC<VkPhysicalDeviceDescriptorIndexingProperties>(VkPhysicalDeviceDescriptorIndexingProperties* p) {}

template <>
void ConvertOutStructToVulkanSC<VkDescriptorSetVariableDescriptorCountLayoutSupport>(
    VkDescriptorSetVariableDescriptorCountLayoutSupport* p) {}

template <>
void ConvertOutStructToVulkanSC<VkPhysicalDeviceDepthStencilResolveProperties>(VkPhysicalDeviceDepthStencilResolveProperties* p) {
    p->supportedDepthResolveModes = p->supportedDepthResolveModes & AllVkResolveModeFlagBits;
    p->supportedStencilResolveModes = p->supportedStencilResolveModes & AllVkResolveModeFlagBits;
}

template <>
void ConvertOutStructToVulkanSC<VkPhysicalDeviceScalarBlockLayoutFeatures>(VkPhysicalDeviceScalarBlockLayoutFeatures* p) {}

template <>
void ConvertOutStructToVulkanSC<VkPhysicalDeviceSamplerFilterMinmaxProperties>(VkPhysicalDeviceSamplerFilterMinmaxProperties* p) {}

template <>
void ConvertOutStructToVulkanSC<VkPhysicalDeviceVulkanMemoryModelFeatures>(VkPhysicalDeviceVulkanMemoryModelFeatures* p) {}

template <>
void ConvertOutStructToVulkanSC<VkPhysicalDeviceImagelessFramebufferFeatures>(VkPhysicalDeviceImagelessFramebufferFeatures* p) {}

template <>
void ConvertOutStructToVulkanSC<VkPhysicalDeviceUniformBufferStandardLayoutFeatures>(
    VkPhysicalDeviceUniformBufferStandardLayoutFeatures* p) {}

template <>
void ConvertOutStructToVulkanSC<VkPhysicalDeviceShaderSubgroupExtendedTypesFeatures>(
    VkPhysicalDeviceShaderSubgroupExtendedTypesFeatures* p) {}

template <>
void ConvertOutStructToVulkanSC<VkPhysicalDeviceSeparateDepthStencilLayoutsFeatures>(
    VkPhysicalDeviceSeparateDepthStencilLayoutsFeatures* p) {}

template <>
void ConvertOutStructToVulkanSC<VkPhysicalDeviceHostQueryResetFeatures>(VkPhysicalDeviceHostQueryResetFeatures* p) {}

template <>
void ConvertOutStructToVulkanSC<VkPhysicalDeviceTimelineSemaphoreFeatures>(VkPhysicalDeviceTimelineSemaphoreFeatures* p) {}

template <>
void ConvertOutStructToVulkanSC<VkPhysicalDeviceTimelineSemaphoreProperties>(VkPhysicalDeviceTimelineSemaphoreProperties* p) {}

template <>
void ConvertOutStructToVulkanSC<VkPhysicalDeviceBufferDeviceAddressFeatures>(VkPhysicalDeviceBufferDeviceAddressFeatures* p) {}

template <>
void ConvertOutStructToVulkanSC<VkPhysicalDeviceVulkan13Features>(VkPhysicalDeviceVulkan13Features* p) {}

template <>
void ConvertOutStructToVulkanSC<VkPhysicalDeviceVulkan13Properties>(VkPhysicalDeviceVulkan13Properties* p) {
    p->requiredSubgroupSizeStages = p->requiredSubgroupSizeStages & AllVkShaderStageFlagBits;
}

template <>
void ConvertOutStructToVulkanSC<VkPhysicalDeviceShaderTerminateInvocationFeatures>(
    VkPhysicalDeviceShaderTerminateInvocationFeatures* p) {}

template <>
void ConvertOutStructToVulkanSC<VkPhysicalDeviceShaderDemoteToHelperInvocationFeatures>(
    VkPhysicalDeviceShaderDemoteToHelperInvocationFeatures* p) {}

template <>
void ConvertOutStructToVulkanSC<VkPhysicalDevicePrivateDataFeatures>(VkPhysicalDevicePrivateDataFeatures* p) {}

template <>
void ConvertOutStructToVulkanSC<VkPhysicalDevicePipelineCreationCacheControlFeatures>(
    VkPhysicalDevicePipelineCreationCacheControlFeatures* p) {}

template <>
void ConvertOutStructToVulkanSC<VkPhysicalDeviceSynchronization2Features>(VkPhysicalDeviceSynchronization2Features* p) {}

template <>
void ConvertOutStructToVulkanSC<VkPhysicalDeviceZeroInitializeWorkgroupMemoryFeatures>(
    VkPhysicalDeviceZeroInitializeWorkgroupMemoryFeatures* p) {}

template <>
void ConvertOutStructToVulkanSC<VkPhysicalDeviceImageRobustnessFeatures>(VkPhysicalDeviceImageRobustnessFeatures* p) {}

template <>
void ConvertOutStructToVulkanSC<VkPhysicalDeviceSubgroupSizeControlFeatures>(VkPhysicalDeviceSubgroupSizeControlFeatures* p) {}

template <>
void ConvertOutStructToVulkanSC<VkPhysicalDeviceSubgroupSizeControlProperties>(VkPhysicalDeviceSubgroupSizeControlProperties* p) {
    p->requiredSubgroupSizeStages = p->requiredSubgroupSizeStages & AllVkShaderStageFlagBits;
}

template <>
void ConvertOutStructToVulkanSC<VkPhysicalDeviceInlineUniformBlockFeatures>(VkPhysicalDeviceInlineUniformBlockFeatures* p) {}

template <>
void ConvertOutStructToVulkanSC<VkPhysicalDeviceInlineUniformBlockProperties>(VkPhysicalDeviceInlineUniformBlockProperties* p) {}

template <>
void ConvertOutStructToVulkanSC<VkPhysicalDeviceTextureCompressionASTCHDRFeatures>(
    VkPhysicalDeviceTextureCompressionASTCHDRFeatures* p) {}

template <>
void ConvertOutStructToVulkanSC<VkPhysicalDeviceDynamicRenderingFeatures>(VkPhysicalDeviceDynamicRenderingFeatures* p) {}

template <>
void ConvertOutStructToVulkanSC<VkPhysicalDeviceShaderIntegerDotProductFeatures>(
    VkPhysicalDeviceShaderIntegerDotProductFeatures* p) {}

template <>
void ConvertOutStructToVulkanSC<VkPhysicalDeviceShaderIntegerDotProductProperties>(
    VkPhysicalDeviceShaderIntegerDotProductProperties* p) {}

template <>
void ConvertOutStructToVulkanSC<VkPhysicalDeviceTexelBufferAlignmentProperties>(VkPhysicalDeviceTexelBufferAlignmentProperties* p) {
}

template <>
void ConvertOutStructToVulkanSC<VkFormatProperties3>(VkFormatProperties3* p) {
    p->linearTilingFeatures = p->linearTilingFeatures & AllVkFormatFeatureFlagBits2;
    p->optimalTilingFeatures = p->optimalTilingFeatures & AllVkFormatFeatureFlagBits2;
    p->bufferFeatures = p->bufferFeatures & AllVkFormatFeatureFlagBits2;
}

template <>
void ConvertOutStructToVulkanSC<VkPhysicalDeviceMaintenance4Features>(VkPhysicalDeviceMaintenance4Features* p) {}

template <>
void ConvertOutStructToVulkanSC<VkPhysicalDeviceMaintenance4Properties>(VkPhysicalDeviceMaintenance4Properties* p) {}

template <>
void ConvertOutStructToVulkanSC<VkPhysicalDeviceVulkanSC10Features>(VkPhysicalDeviceVulkanSC10Features* p) {}

template <>
void ConvertOutStructToVulkanSC<VkPhysicalDeviceVulkanSC10Properties>(VkPhysicalDeviceVulkanSC10Properties* p) {}

template <>
void ConvertOutStructToVulkanSC<VkSharedPresentSurfaceCapabilitiesKHR>(VkSharedPresentSurfaceCapabilitiesKHR* p) {
    p->sharedPresentSupportedUsageFlags = p->sharedPresentSupportedUsageFlags & AllVkImageUsageFlagBits;
}

template <>
void ConvertOutStructToVulkanSC<VkPhysicalDevicePerformanceQueryFeaturesKHR>(VkPhysicalDevicePerformanceQueryFeaturesKHR* p) {}

template <>
void ConvertOutStructToVulkanSC<VkPhysicalDevicePerformanceQueryPropertiesKHR>(VkPhysicalDevicePerformanceQueryPropertiesKHR* p) {}

template <>
void ConvertOutStructToVulkanSC<VkPhysicalDeviceShaderClockFeaturesKHR>(VkPhysicalDeviceShaderClockFeaturesKHR* p) {}

template <>
void ConvertOutStructToVulkanSC<VkPhysicalDeviceGlobalPriorityQueryFeaturesKHR>(VkPhysicalDeviceGlobalPriorityQueryFeaturesKHR* p) {
}

template <>
void ConvertOutStructToVulkanSC<VkQueueFamilyGlobalPriorityPropertiesKHR>(VkQueueFamilyGlobalPriorityPropertiesKHR* p) {}

template <>
void ConvertOutStructToVulkanSC<VkPhysicalDeviceFragmentShadingRateFeaturesKHR>(VkPhysicalDeviceFragmentShadingRateFeaturesKHR* p) {
}

template <>
void ConvertOutStructToVulkanSC<VkPhysicalDeviceFragmentShadingRatePropertiesKHR>(
    VkPhysicalDeviceFragmentShadingRatePropertiesKHR* p) {
    ConvertOutStructToVulkanSC<VkExtent2D>(&p->minFragmentShadingRateAttachmentTexelSize);
    ConvertOutStructToVulkanSC<VkExtent2D>(&p->maxFragmentShadingRateAttachmentTexelSize);
    ConvertOutStructToVulkanSC<VkExtent2D>(&p->maxFragmentSize);
}

template <>
void ConvertOutStructToVulkanSC<VkQueueFamilyCheckpointProperties2NV>(VkQueueFamilyCheckpointProperties2NV* p) {
    p->checkpointExecutionStageMask = p->checkpointExecutionStageMask & AllVkPipelineStageFlagBits2;
}

template <>
void ConvertOutStructToVulkanSC<VkPhysicalDeviceVertexAttributeDivisorPropertiesKHR>(
    VkPhysicalDeviceVertexAttributeDivisorPropertiesKHR* p) {}

template <>
void ConvertOutStructToVulkanSC<VkPhysicalDeviceVertexAttributeDivisorFeaturesKHR>(
    VkPhysicalDeviceVertexAttributeDivisorFeaturesKHR* p) {}

template <>
void ConvertOutStructToVulkanSC<VkPhysicalDeviceIndexTypeUint8FeaturesKHR>(VkPhysicalDeviceIndexTypeUint8FeaturesKHR* p) {}

template <>
void ConvertOutStructToVulkanSC<VkPhysicalDeviceLineRasterizationFeaturesKHR>(VkPhysicalDeviceLineRasterizationFeaturesKHR* p) {}

template <>
void ConvertOutStructToVulkanSC<VkPhysicalDeviceLineRasterizationPropertiesKHR>(VkPhysicalDeviceLineRasterizationPropertiesKHR* p) {
}

template <>
void ConvertOutStructToVulkanSC<VkPhysicalDeviceASTCDecodeFeaturesEXT>(VkPhysicalDeviceASTCDecodeFeaturesEXT* p) {}

template <>
void ConvertOutStructToVulkanSC<VkPhysicalDeviceDiscardRectanglePropertiesEXT>(VkPhysicalDeviceDiscardRectanglePropertiesEXT* p) {}

template <>
void ConvertOutStructToVulkanSC<VkPhysicalDeviceConservativeRasterizationPropertiesEXT>(
    VkPhysicalDeviceConservativeRasterizationPropertiesEXT* p) {}

template <>
void ConvertOutStructToVulkanSC<VkPhysicalDeviceDepthClipEnableFeaturesEXT>(VkPhysicalDeviceDepthClipEnableFeaturesEXT* p) {}

template <>
void ConvertOutStructToVulkanSC<VkPhysicalDeviceSampleLocationsPropertiesEXT>(VkPhysicalDeviceSampleLocationsPropertiesEXT* p) {
    p->sampleLocationSampleCounts = p->sampleLocationSampleCounts & AllVkSampleCountFlagBits;
    ConvertOutStructToVulkanSC<VkExtent2D>(&p->maxSampleLocationGridSize);
}

template <>
void ConvertOutStructToVulkanSC<VkPhysicalDeviceBlendOperationAdvancedFeaturesEXT>(
    VkPhysicalDeviceBlendOperationAdvancedFeaturesEXT* p) {}

template <>
void ConvertOutStructToVulkanSC<VkPhysicalDeviceBlendOperationAdvancedPropertiesEXT>(
    VkPhysicalDeviceBlendOperationAdvancedPropertiesEXT* p) {}

template <>
void ConvertOutStructToVulkanSC<VkDrmFormatModifierPropertiesListEXT>(VkDrmFormatModifierPropertiesListEXT* p) {
    for (uint32_t i = 0; i < p->drmFormatModifierCount; ++i) {
        ConvertOutStructToVulkanSC<VkDrmFormatModifierPropertiesEXT>(&p->pDrmFormatModifierProperties[i]);
    }
}

template <>
void ConvertOutStructToVulkanSC<VkDrmFormatModifierPropertiesList2EXT>(VkDrmFormatModifierPropertiesList2EXT* p) {
    for (uint32_t i = 0; i < p->drmFormatModifierCount; ++i) {
        ConvertOutStructToVulkanSC<VkDrmFormatModifierProperties2EXT>(&p->pDrmFormatModifierProperties[i]);
    }
}

template <>
void ConvertOutStructToVulkanSC<VkFilterCubicImageViewImageFormatPropertiesEXT>(VkFilterCubicImageViewImageFormatPropertiesEXT* p) {
}

template <>
void ConvertOutStructToVulkanSC<VkPhysicalDeviceExternalMemoryHostPropertiesEXT>(
    VkPhysicalDeviceExternalMemoryHostPropertiesEXT* p) {}

template <>
void ConvertOutStructToVulkanSC<VkPhysicalDevicePCIBusInfoPropertiesEXT>(VkPhysicalDevicePCIBusInfoPropertiesEXT* p) {}

template <>
void ConvertOutStructToVulkanSC<VkPhysicalDeviceShaderImageAtomicInt64FeaturesEXT>(
    VkPhysicalDeviceShaderImageAtomicInt64FeaturesEXT* p) {}

template <>
void ConvertOutStructToVulkanSC<VkPhysicalDeviceMemoryBudgetPropertiesEXT>(VkPhysicalDeviceMemoryBudgetPropertiesEXT* p) {}

template <>
void ConvertOutStructToVulkanSC<VkPhysicalDeviceFragmentShaderInterlockFeaturesEXT>(
    VkPhysicalDeviceFragmentShaderInterlockFeaturesEXT* p) {}

template <>
void ConvertOutStructToVulkanSC<VkPhysicalDeviceYcbcrImageArraysFeaturesEXT>(VkPhysicalDeviceYcbcrImageArraysFeaturesEXT* p) {}

template <>
void ConvertOutStructToVulkanSC<VkPhysicalDeviceShaderAtomicFloatFeaturesEXT>(VkPhysicalDeviceShaderAtomicFloatFeaturesEXT* p) {}

template <>
void ConvertOutStructToVulkanSC<VkPhysicalDeviceExtendedDynamicStateFeaturesEXT>(
    VkPhysicalDeviceExtendedDynamicStateFeaturesEXT* p) {}

template <>
void ConvertOutStructToVulkanSC<VkPhysicalDeviceTexelBufferAlignmentFeaturesEXT>(
    VkPhysicalDeviceTexelBufferAlignmentFeaturesEXT* p) {}

template <>
void ConvertOutStructToVulkanSC<VkPhysicalDeviceRobustness2FeaturesEXT>(VkPhysicalDeviceRobustness2FeaturesEXT* p) {}

template <>
void ConvertOutStructToVulkanSC<VkPhysicalDeviceRobustness2PropertiesEXT>(VkPhysicalDeviceRobustness2PropertiesEXT* p) {}

template <>
void ConvertOutStructToVulkanSC<VkPhysicalDeviceCustomBorderColorPropertiesEXT>(VkPhysicalDeviceCustomBorderColorPropertiesEXT* p) {
}

template <>
void ConvertOutStructToVulkanSC<VkPhysicalDeviceCustomBorderColorFeaturesEXT>(VkPhysicalDeviceCustomBorderColorFeaturesEXT* p) {}

template <>
void ConvertOutStructToVulkanSC<VkPhysicalDeviceYcbcr2Plane444FormatsFeaturesEXT>(
    VkPhysicalDeviceYcbcr2Plane444FormatsFeaturesEXT* p) {}

template <>
void ConvertOutStructToVulkanSC<VkPhysicalDevice4444FormatsFeaturesEXT>(VkPhysicalDevice4444FormatsFeaturesEXT* p) {}

template <>
void ConvertOutStructToVulkanSC<VkPhysicalDeviceVertexInputDynamicStateFeaturesEXT>(
    VkPhysicalDeviceVertexInputDynamicStateFeaturesEXT* p) {}
#ifdef VK_USE_PLATFORM_SCI

template <>
void ConvertOutStructToVulkanSC<VkPhysicalDeviceExternalSciSyncFeaturesNV>(VkPhysicalDeviceExternalSciSyncFeaturesNV* p) {}

template <>
void ConvertOutStructToVulkanSC<VkPhysicalDeviceExternalMemorySciBufFeaturesNV>(VkPhysicalDeviceExternalMemorySciBufFeaturesNV* p) {
}
#endif  // VK_USE_PLATFORM_SCI

template <>
void ConvertOutStructToVulkanSC<VkPhysicalDeviceExtendedDynamicState2FeaturesEXT>(
    VkPhysicalDeviceExtendedDynamicState2FeaturesEXT* p) {}

template <>
void ConvertOutStructToVulkanSC<VkPhysicalDeviceColorWriteEnableFeaturesEXT>(VkPhysicalDeviceColorWriteEnableFeaturesEXT* p) {}
#ifdef VK_USE_PLATFORM_SCI

template <>
void ConvertOutStructToVulkanSC<VkPhysicalDeviceExternalSciSync2FeaturesNV>(VkPhysicalDeviceExternalSciSync2FeaturesNV* p) {}
#endif  // VK_USE_PLATFORM_SCI
#ifdef VK_USE_PLATFORM_SCREEN_QNX

template <>
void ConvertOutStructToVulkanSC<VkScreenBufferFormatPropertiesQNX>(VkScreenBufferFormatPropertiesQNX* p) {
    p->formatFeatures = p->formatFeatures & AllVkFormatFeatureFlagBits;
    ConvertOutStructToVulkanSC<VkComponentMapping>(&p->samplerYcbcrConversionComponents);
}

template <>
void ConvertOutStructToVulkanSC<VkPhysicalDeviceExternalMemoryScreenBufferFeaturesQNX>(
    VkPhysicalDeviceExternalMemoryScreenBufferFeaturesQNX* p) {}
#endif  // VK_USE_PLATFORM_SCREEN_QNX

template <>
void ConvertOutStructToVulkanSC<VkExtent3D>(VkExtent3D* p) {}

template <>
void ConvertOutStructToVulkanSC<VkPhysicalDeviceLimits>(VkPhysicalDeviceLimits* p) {
    p->framebufferColorSampleCounts = p->framebufferColorSampleCounts & AllVkSampleCountFlagBits;
    p->framebufferDepthSampleCounts = p->framebufferDepthSampleCounts & AllVkSampleCountFlagBits;
    p->framebufferStencilSampleCounts = p->framebufferStencilSampleCounts & AllVkSampleCountFlagBits;
    p->framebufferNoAttachmentsSampleCounts = p->framebufferNoAttachmentsSampleCounts & AllVkSampleCountFlagBits;
    p->sampledImageColorSampleCounts = p->sampledImageColorSampleCounts & AllVkSampleCountFlagBits;
    p->sampledImageIntegerSampleCounts = p->sampledImageIntegerSampleCounts & AllVkSampleCountFlagBits;
    p->sampledImageDepthSampleCounts = p->sampledImageDepthSampleCounts & AllVkSampleCountFlagBits;
    p->sampledImageStencilSampleCounts = p->sampledImageStencilSampleCounts & AllVkSampleCountFlagBits;
    p->storageImageSampleCounts = p->storageImageSampleCounts & AllVkSampleCountFlagBits;
}

template <>
void ConvertOutStructToVulkanSC<VkPhysicalDeviceSparseProperties>(VkPhysicalDeviceSparseProperties* p) {}

template <>
void ConvertOutStructToVulkanSC<VkMemoryType>(VkMemoryType* p) {
    p->propertyFlags = p->propertyFlags & AllVkMemoryPropertyFlagBits;
}

template <>
void ConvertOutStructToVulkanSC<VkMemoryHeap>(VkMemoryHeap* p) {
    p->flags = p->flags & AllVkMemoryHeapFlagBits;
}

template <>
void ConvertOutStructToVulkanSC<VkExternalMemoryProperties>(VkExternalMemoryProperties* p) {
    p->externalMemoryFeatures = p->externalMemoryFeatures & AllVkExternalMemoryFeatureFlagBits;
    p->exportFromImportedHandleTypes = p->exportFromImportedHandleTypes & AllVkExternalMemoryHandleTypeFlagBits;
    p->compatibleHandleTypes = p->compatibleHandleTypes & AllVkExternalMemoryHandleTypeFlagBits;
}

template <>
void ConvertOutStructToVulkanSC<VkOffset2D>(VkOffset2D* p) {}

template <>
void ConvertOutStructToVulkanSC<VkDisplayModeParametersKHR>(VkDisplayModeParametersKHR* p) {
    ConvertOutStructToVulkanSC<VkExtent2D>(&p->visibleRegion);
}

template <>
void ConvertOutStructToVulkanSC<VkConformanceVersion>(VkConformanceVersion* p) {}

template <>
void ConvertOutStructToVulkanSC<VkDrmFormatModifierPropertiesEXT>(VkDrmFormatModifierPropertiesEXT* p) {
    p->drmFormatModifierTilingFeatures = p->drmFormatModifierTilingFeatures & AllVkFormatFeatureFlagBits;
}

template <>
void ConvertOutStructToVulkanSC<VkDrmFormatModifierProperties2EXT>(VkDrmFormatModifierProperties2EXT* p) {
    p->drmFormatModifierTilingFeatures = p->drmFormatModifierTilingFeatures & AllVkFormatFeatureFlagBits2;
}

template <>
void ConvertOutStructToVulkanSC<VkComponentMapping>(VkComponentMapping* p) {}

template <>
void ConvertOutStructChainToVulkanSC<VkPhysicalDeviceGroupProperties>(VkPhysicalDeviceGroupProperties* chain) {
    VkBaseOutStructure* base = reinterpret_cast<VkBaseOutStructure*>(chain);
    while (base != nullptr) {
        switch (base->sType) {
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_GROUP_PROPERTIES:
                ConvertOutStructToVulkanSC(reinterpret_cast<VkPhysicalDeviceGroupProperties*>(base));
                break;

            default:
                break;
        }
        base = base->pNext;
    }
}

template <>
void ConvertOutStructChainToVulkanSC<VkMemoryRequirements2>(VkMemoryRequirements2* chain) {
    VkBaseOutStructure* base = reinterpret_cast<VkBaseOutStructure*>(chain);
    while (base != nullptr) {
        switch (base->sType) {
            case VK_STRUCTURE_TYPE_MEMORY_REQUIREMENTS_2:
                ConvertOutStructToVulkanSC(reinterpret_cast<VkMemoryRequirements2*>(base));
                break;

            case VK_STRUCTURE_TYPE_MEMORY_DEDICATED_REQUIREMENTS:
                ConvertOutStructToVulkanSC(reinterpret_cast<VkMemoryDedicatedRequirements*>(base));
                break;

            default:
                break;
        }
        base = base->pNext;
    }
}

template <>
void ConvertOutStructChainToVulkanSC<VkPhysicalDeviceFeatures2>(VkPhysicalDeviceFeatures2* chain) {
    VkBaseOutStructure* base = reinterpret_cast<VkBaseOutStructure*>(chain);
    while (base != nullptr) {
        switch (base->sType) {
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FEATURES_2:
                ConvertOutStructToVulkanSC(reinterpret_cast<VkPhysicalDeviceFeatures2*>(base));
                break;

            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_16BIT_STORAGE_FEATURES:
                ConvertOutStructToVulkanSC(reinterpret_cast<VkPhysicalDevice16BitStorageFeatures*>(base));
                break;

            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MULTIVIEW_FEATURES:
                ConvertOutStructToVulkanSC(reinterpret_cast<VkPhysicalDeviceMultiviewFeatures*>(base));
                break;

            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VARIABLE_POINTERS_FEATURES:
                ConvertOutStructToVulkanSC(reinterpret_cast<VkPhysicalDeviceVariablePointersFeatures*>(base));
                break;

            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PROTECTED_MEMORY_FEATURES:
                ConvertOutStructToVulkanSC(reinterpret_cast<VkPhysicalDeviceProtectedMemoryFeatures*>(base));
                break;

            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SAMPLER_YCBCR_CONVERSION_FEATURES:
                ConvertOutStructToVulkanSC(reinterpret_cast<VkPhysicalDeviceSamplerYcbcrConversionFeatures*>(base));
                break;

            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_DRAW_PARAMETERS_FEATURES:
                ConvertOutStructToVulkanSC(reinterpret_cast<VkPhysicalDeviceShaderDrawParametersFeatures*>(base));
                break;

            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VULKAN_1_1_FEATURES:
                ConvertOutStructToVulkanSC(reinterpret_cast<VkPhysicalDeviceVulkan11Features*>(base));
                break;

            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VULKAN_1_2_FEATURES:
                ConvertOutStructToVulkanSC(reinterpret_cast<VkPhysicalDeviceVulkan12Features*>(base));
                break;

            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_8BIT_STORAGE_FEATURES:
                ConvertOutStructToVulkanSC(reinterpret_cast<VkPhysicalDevice8BitStorageFeatures*>(base));
                break;

            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_ATOMIC_INT64_FEATURES:
                ConvertOutStructToVulkanSC(reinterpret_cast<VkPhysicalDeviceShaderAtomicInt64Features*>(base));
                break;

            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_FLOAT16_INT8_FEATURES:
                ConvertOutStructToVulkanSC(reinterpret_cast<VkPhysicalDeviceShaderFloat16Int8Features*>(base));
                break;

            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DESCRIPTOR_INDEXING_FEATURES:
                ConvertOutStructToVulkanSC(reinterpret_cast<VkPhysicalDeviceDescriptorIndexingFeatures*>(base));
                break;

            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SCALAR_BLOCK_LAYOUT_FEATURES:
                ConvertOutStructToVulkanSC(reinterpret_cast<VkPhysicalDeviceScalarBlockLayoutFeatures*>(base));
                break;

            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VULKAN_MEMORY_MODEL_FEATURES:
                ConvertOutStructToVulkanSC(reinterpret_cast<VkPhysicalDeviceVulkanMemoryModelFeatures*>(base));
                break;

            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGELESS_FRAMEBUFFER_FEATURES:
                ConvertOutStructToVulkanSC(reinterpret_cast<VkPhysicalDeviceImagelessFramebufferFeatures*>(base));
                break;

            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_UNIFORM_BUFFER_STANDARD_LAYOUT_FEATURES:
                ConvertOutStructToVulkanSC(reinterpret_cast<VkPhysicalDeviceUniformBufferStandardLayoutFeatures*>(base));
                break;

            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_SUBGROUP_EXTENDED_TYPES_FEATURES:
                ConvertOutStructToVulkanSC(reinterpret_cast<VkPhysicalDeviceShaderSubgroupExtendedTypesFeatures*>(base));
                break;

            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SEPARATE_DEPTH_STENCIL_LAYOUTS_FEATURES:
                ConvertOutStructToVulkanSC(reinterpret_cast<VkPhysicalDeviceSeparateDepthStencilLayoutsFeatures*>(base));
                break;

            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_HOST_QUERY_RESET_FEATURES:
                ConvertOutStructToVulkanSC(reinterpret_cast<VkPhysicalDeviceHostQueryResetFeatures*>(base));
                break;

            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TIMELINE_SEMAPHORE_FEATURES:
                ConvertOutStructToVulkanSC(reinterpret_cast<VkPhysicalDeviceTimelineSemaphoreFeatures*>(base));
                break;

            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_BUFFER_DEVICE_ADDRESS_FEATURES:
                ConvertOutStructToVulkanSC(reinterpret_cast<VkPhysicalDeviceBufferDeviceAddressFeatures*>(base));
                break;

            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VULKAN_1_3_FEATURES:
                ConvertOutStructToVulkanSC(reinterpret_cast<VkPhysicalDeviceVulkan13Features*>(base));
                break;

            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_TERMINATE_INVOCATION_FEATURES:
                ConvertOutStructToVulkanSC(reinterpret_cast<VkPhysicalDeviceShaderTerminateInvocationFeatures*>(base));
                break;

            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_DEMOTE_TO_HELPER_INVOCATION_FEATURES:
                ConvertOutStructToVulkanSC(reinterpret_cast<VkPhysicalDeviceShaderDemoteToHelperInvocationFeatures*>(base));
                break;

            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PRIVATE_DATA_FEATURES:
                ConvertOutStructToVulkanSC(reinterpret_cast<VkPhysicalDevicePrivateDataFeatures*>(base));
                break;

            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PIPELINE_CREATION_CACHE_CONTROL_FEATURES:
                ConvertOutStructToVulkanSC(reinterpret_cast<VkPhysicalDevicePipelineCreationCacheControlFeatures*>(base));
                break;

            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SYNCHRONIZATION_2_FEATURES:
                ConvertOutStructToVulkanSC(reinterpret_cast<VkPhysicalDeviceSynchronization2Features*>(base));
                break;

            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ZERO_INITIALIZE_WORKGROUP_MEMORY_FEATURES:
                ConvertOutStructToVulkanSC(reinterpret_cast<VkPhysicalDeviceZeroInitializeWorkgroupMemoryFeatures*>(base));
                break;

            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_ROBUSTNESS_FEATURES:
                ConvertOutStructToVulkanSC(reinterpret_cast<VkPhysicalDeviceImageRobustnessFeatures*>(base));
                break;

            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SUBGROUP_SIZE_CONTROL_FEATURES:
                ConvertOutStructToVulkanSC(reinterpret_cast<VkPhysicalDeviceSubgroupSizeControlFeatures*>(base));
                break;

            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_INLINE_UNIFORM_BLOCK_FEATURES:
                ConvertOutStructToVulkanSC(reinterpret_cast<VkPhysicalDeviceInlineUniformBlockFeatures*>(base));
                break;

            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TEXTURE_COMPRESSION_ASTC_HDR_FEATURES:
                ConvertOutStructToVulkanSC(reinterpret_cast<VkPhysicalDeviceTextureCompressionASTCHDRFeatures*>(base));
                break;

            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DYNAMIC_RENDERING_FEATURES:
                ConvertOutStructToVulkanSC(reinterpret_cast<VkPhysicalDeviceDynamicRenderingFeatures*>(base));
                break;

            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_INTEGER_DOT_PRODUCT_FEATURES:
                ConvertOutStructToVulkanSC(reinterpret_cast<VkPhysicalDeviceShaderIntegerDotProductFeatures*>(base));
                break;

            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MAINTENANCE_4_FEATURES:
                ConvertOutStructToVulkanSC(reinterpret_cast<VkPhysicalDeviceMaintenance4Features*>(base));
                break;

            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VULKAN_SC_1_0_FEATURES:
                ConvertOutStructToVulkanSC(reinterpret_cast<VkPhysicalDeviceVulkanSC10Features*>(base));
                break;

            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PERFORMANCE_QUERY_FEATURES_KHR:
                ConvertOutStructToVulkanSC(reinterpret_cast<VkPhysicalDevicePerformanceQueryFeaturesKHR*>(base));
                break;

            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_CLOCK_FEATURES_KHR:
                ConvertOutStructToVulkanSC(reinterpret_cast<VkPhysicalDeviceShaderClockFeaturesKHR*>(base));
                break;

            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_GLOBAL_PRIORITY_QUERY_FEATURES_KHR:
                ConvertOutStructToVulkanSC(reinterpret_cast<VkPhysicalDeviceGlobalPriorityQueryFeaturesKHR*>(base));
                break;

            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_SHADING_RATE_FEATURES_KHR:
                ConvertOutStructToVulkanSC(reinterpret_cast<VkPhysicalDeviceFragmentShadingRateFeaturesKHR*>(base));
                break;

            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VERTEX_ATTRIBUTE_DIVISOR_FEATURES_KHR:
                ConvertOutStructToVulkanSC(reinterpret_cast<VkPhysicalDeviceVertexAttributeDivisorFeaturesKHR*>(base));
                break;

            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_INDEX_TYPE_UINT8_FEATURES_KHR:
                ConvertOutStructToVulkanSC(reinterpret_cast<VkPhysicalDeviceIndexTypeUint8FeaturesKHR*>(base));
                break;

            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_LINE_RASTERIZATION_FEATURES_KHR:
                ConvertOutStructToVulkanSC(reinterpret_cast<VkPhysicalDeviceLineRasterizationFeaturesKHR*>(base));
                break;

            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ASTC_DECODE_FEATURES_EXT:
                ConvertOutStructToVulkanSC(reinterpret_cast<VkPhysicalDeviceASTCDecodeFeaturesEXT*>(base));
                break;

            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DEPTH_CLIP_ENABLE_FEATURES_EXT:
                ConvertOutStructToVulkanSC(reinterpret_cast<VkPhysicalDeviceDepthClipEnableFeaturesEXT*>(base));
                break;

            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_BLEND_OPERATION_ADVANCED_FEATURES_EXT:
                ConvertOutStructToVulkanSC(reinterpret_cast<VkPhysicalDeviceBlendOperationAdvancedFeaturesEXT*>(base));
                break;

            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_IMAGE_ATOMIC_INT64_FEATURES_EXT:
                ConvertOutStructToVulkanSC(reinterpret_cast<VkPhysicalDeviceShaderImageAtomicInt64FeaturesEXT*>(base));
                break;

            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_SHADER_INTERLOCK_FEATURES_EXT:
                ConvertOutStructToVulkanSC(reinterpret_cast<VkPhysicalDeviceFragmentShaderInterlockFeaturesEXT*>(base));
                break;

            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_YCBCR_IMAGE_ARRAYS_FEATURES_EXT:
                ConvertOutStructToVulkanSC(reinterpret_cast<VkPhysicalDeviceYcbcrImageArraysFeaturesEXT*>(base));
                break;

            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_ATOMIC_FLOAT_FEATURES_EXT:
                ConvertOutStructToVulkanSC(reinterpret_cast<VkPhysicalDeviceShaderAtomicFloatFeaturesEXT*>(base));
                break;

            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTENDED_DYNAMIC_STATE_FEATURES_EXT:
                ConvertOutStructToVulkanSC(reinterpret_cast<VkPhysicalDeviceExtendedDynamicStateFeaturesEXT*>(base));
                break;

            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TEXEL_BUFFER_ALIGNMENT_FEATURES_EXT:
                ConvertOutStructToVulkanSC(reinterpret_cast<VkPhysicalDeviceTexelBufferAlignmentFeaturesEXT*>(base));
                break;

            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ROBUSTNESS_2_FEATURES_EXT:
                ConvertOutStructToVulkanSC(reinterpret_cast<VkPhysicalDeviceRobustness2FeaturesEXT*>(base));
                break;

            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_CUSTOM_BORDER_COLOR_FEATURES_EXT:
                ConvertOutStructToVulkanSC(reinterpret_cast<VkPhysicalDeviceCustomBorderColorFeaturesEXT*>(base));
                break;

            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_YCBCR_2_PLANE_444_FORMATS_FEATURES_EXT:
                ConvertOutStructToVulkanSC(reinterpret_cast<VkPhysicalDeviceYcbcr2Plane444FormatsFeaturesEXT*>(base));
                break;

            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_4444_FORMATS_FEATURES_EXT:
                ConvertOutStructToVulkanSC(reinterpret_cast<VkPhysicalDevice4444FormatsFeaturesEXT*>(base));
                break;

            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VERTEX_INPUT_DYNAMIC_STATE_FEATURES_EXT:
                ConvertOutStructToVulkanSC(reinterpret_cast<VkPhysicalDeviceVertexInputDynamicStateFeaturesEXT*>(base));
                break;
#ifdef VK_USE_PLATFORM_SCI

            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTERNAL_SCI_SYNC_FEATURES_NV:
                ConvertOutStructToVulkanSC(reinterpret_cast<VkPhysicalDeviceExternalSciSyncFeaturesNV*>(base));
                break;

            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTERNAL_MEMORY_SCI_BUF_FEATURES_NV:
                ConvertOutStructToVulkanSC(reinterpret_cast<VkPhysicalDeviceExternalMemorySciBufFeaturesNV*>(base));
                break;
#endif  // VK_USE_PLATFORM_SCI

            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTENDED_DYNAMIC_STATE_2_FEATURES_EXT:
                ConvertOutStructToVulkanSC(reinterpret_cast<VkPhysicalDeviceExtendedDynamicState2FeaturesEXT*>(base));
                break;

            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COLOR_WRITE_ENABLE_FEATURES_EXT:
                ConvertOutStructToVulkanSC(reinterpret_cast<VkPhysicalDeviceColorWriteEnableFeaturesEXT*>(base));
                break;
#ifdef VK_USE_PLATFORM_SCI

            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTERNAL_SCI_SYNC_2_FEATURES_NV:
                ConvertOutStructToVulkanSC(reinterpret_cast<VkPhysicalDeviceExternalSciSync2FeaturesNV*>(base));
                break;
#endif  // VK_USE_PLATFORM_SCI
#ifdef VK_USE_PLATFORM_SCREEN_QNX

            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTERNAL_MEMORY_SCREEN_BUFFER_FEATURES_QNX:
                ConvertOutStructToVulkanSC(reinterpret_cast<VkPhysicalDeviceExternalMemoryScreenBufferFeaturesQNX*>(base));
                break;
#endif  // VK_USE_PLATFORM_SCREEN_QNX

            default:
                break;
        }
        base = base->pNext;
    }
}

template <>
void ConvertOutStructChainToVulkanSC<VkPhysicalDeviceProperties2>(VkPhysicalDeviceProperties2* chain) {
    VkBaseOutStructure* base = reinterpret_cast<VkBaseOutStructure*>(chain);
    while (base != nullptr) {
        switch (base->sType) {
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PROPERTIES_2:
                ConvertOutStructToVulkanSC(reinterpret_cast<VkPhysicalDeviceProperties2*>(base));
                break;

            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SUBGROUP_PROPERTIES:
                ConvertOutStructToVulkanSC(reinterpret_cast<VkPhysicalDeviceSubgroupProperties*>(base));
                break;

            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_POINT_CLIPPING_PROPERTIES:
                ConvertOutStructToVulkanSC(reinterpret_cast<VkPhysicalDevicePointClippingProperties*>(base));
                break;

            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MULTIVIEW_PROPERTIES:
                ConvertOutStructToVulkanSC(reinterpret_cast<VkPhysicalDeviceMultiviewProperties*>(base));
                break;

            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PROTECTED_MEMORY_PROPERTIES:
                ConvertOutStructToVulkanSC(reinterpret_cast<VkPhysicalDeviceProtectedMemoryProperties*>(base));
                break;

            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ID_PROPERTIES:
                ConvertOutStructToVulkanSC(reinterpret_cast<VkPhysicalDeviceIDProperties*>(base));
                break;

            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MAINTENANCE_3_PROPERTIES:
                ConvertOutStructToVulkanSC(reinterpret_cast<VkPhysicalDeviceMaintenance3Properties*>(base));
                break;

            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VULKAN_1_1_PROPERTIES:
                ConvertOutStructToVulkanSC(reinterpret_cast<VkPhysicalDeviceVulkan11Properties*>(base));
                break;

            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VULKAN_1_2_PROPERTIES:
                ConvertOutStructToVulkanSC(reinterpret_cast<VkPhysicalDeviceVulkan12Properties*>(base));
                break;

            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DRIVER_PROPERTIES:
                ConvertOutStructToVulkanSC(reinterpret_cast<VkPhysicalDeviceDriverProperties*>(base));
                break;

            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FLOAT_CONTROLS_PROPERTIES:
                ConvertOutStructToVulkanSC(reinterpret_cast<VkPhysicalDeviceFloatControlsProperties*>(base));
                break;

            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DESCRIPTOR_INDEXING_PROPERTIES:
                ConvertOutStructToVulkanSC(reinterpret_cast<VkPhysicalDeviceDescriptorIndexingProperties*>(base));
                break;

            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DEPTH_STENCIL_RESOLVE_PROPERTIES:
                ConvertOutStructToVulkanSC(reinterpret_cast<VkPhysicalDeviceDepthStencilResolveProperties*>(base));
                break;

            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SAMPLER_FILTER_MINMAX_PROPERTIES:
                ConvertOutStructToVulkanSC(reinterpret_cast<VkPhysicalDeviceSamplerFilterMinmaxProperties*>(base));
                break;

            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TIMELINE_SEMAPHORE_PROPERTIES:
                ConvertOutStructToVulkanSC(reinterpret_cast<VkPhysicalDeviceTimelineSemaphoreProperties*>(base));
                break;

            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VULKAN_1_3_PROPERTIES:
                ConvertOutStructToVulkanSC(reinterpret_cast<VkPhysicalDeviceVulkan13Properties*>(base));
                break;

            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SUBGROUP_SIZE_CONTROL_PROPERTIES:
                ConvertOutStructToVulkanSC(reinterpret_cast<VkPhysicalDeviceSubgroupSizeControlProperties*>(base));
                break;

            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_INLINE_UNIFORM_BLOCK_PROPERTIES:
                ConvertOutStructToVulkanSC(reinterpret_cast<VkPhysicalDeviceInlineUniformBlockProperties*>(base));
                break;

            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_INTEGER_DOT_PRODUCT_PROPERTIES:
                ConvertOutStructToVulkanSC(reinterpret_cast<VkPhysicalDeviceShaderIntegerDotProductProperties*>(base));
                break;

            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TEXEL_BUFFER_ALIGNMENT_PROPERTIES:
                ConvertOutStructToVulkanSC(reinterpret_cast<VkPhysicalDeviceTexelBufferAlignmentProperties*>(base));
                break;

            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MAINTENANCE_4_PROPERTIES:
                ConvertOutStructToVulkanSC(reinterpret_cast<VkPhysicalDeviceMaintenance4Properties*>(base));
                break;

            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VULKAN_SC_1_0_PROPERTIES:
                ConvertOutStructToVulkanSC(reinterpret_cast<VkPhysicalDeviceVulkanSC10Properties*>(base));
                break;

            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PERFORMANCE_QUERY_PROPERTIES_KHR:
                ConvertOutStructToVulkanSC(reinterpret_cast<VkPhysicalDevicePerformanceQueryPropertiesKHR*>(base));
                break;

            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_SHADING_RATE_PROPERTIES_KHR:
                ConvertOutStructToVulkanSC(reinterpret_cast<VkPhysicalDeviceFragmentShadingRatePropertiesKHR*>(base));
                break;

            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VERTEX_ATTRIBUTE_DIVISOR_PROPERTIES_KHR:
                ConvertOutStructToVulkanSC(reinterpret_cast<VkPhysicalDeviceVertexAttributeDivisorPropertiesKHR*>(base));
                break;

            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_LINE_RASTERIZATION_PROPERTIES_KHR:
                ConvertOutStructToVulkanSC(reinterpret_cast<VkPhysicalDeviceLineRasterizationPropertiesKHR*>(base));
                break;

            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DISCARD_RECTANGLE_PROPERTIES_EXT:
                ConvertOutStructToVulkanSC(reinterpret_cast<VkPhysicalDeviceDiscardRectanglePropertiesEXT*>(base));
                break;

            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_CONSERVATIVE_RASTERIZATION_PROPERTIES_EXT:
                ConvertOutStructToVulkanSC(reinterpret_cast<VkPhysicalDeviceConservativeRasterizationPropertiesEXT*>(base));
                break;

            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SAMPLE_LOCATIONS_PROPERTIES_EXT:
                ConvertOutStructToVulkanSC(reinterpret_cast<VkPhysicalDeviceSampleLocationsPropertiesEXT*>(base));
                break;

            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_BLEND_OPERATION_ADVANCED_PROPERTIES_EXT:
                ConvertOutStructToVulkanSC(reinterpret_cast<VkPhysicalDeviceBlendOperationAdvancedPropertiesEXT*>(base));
                break;

            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTERNAL_MEMORY_HOST_PROPERTIES_EXT:
                ConvertOutStructToVulkanSC(reinterpret_cast<VkPhysicalDeviceExternalMemoryHostPropertiesEXT*>(base));
                break;

            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PCI_BUS_INFO_PROPERTIES_EXT:
                ConvertOutStructToVulkanSC(reinterpret_cast<VkPhysicalDevicePCIBusInfoPropertiesEXT*>(base));
                break;

            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ROBUSTNESS_2_PROPERTIES_EXT:
                ConvertOutStructToVulkanSC(reinterpret_cast<VkPhysicalDeviceRobustness2PropertiesEXT*>(base));
                break;

            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_CUSTOM_BORDER_COLOR_PROPERTIES_EXT:
                ConvertOutStructToVulkanSC(reinterpret_cast<VkPhysicalDeviceCustomBorderColorPropertiesEXT*>(base));
                break;

            default:
                break;
        }
        base = base->pNext;
    }
}

template <>
void ConvertOutStructChainToVulkanSC<VkFormatProperties2>(VkFormatProperties2* chain) {
    VkBaseOutStructure* base = reinterpret_cast<VkBaseOutStructure*>(chain);
    while (base != nullptr) {
        switch (base->sType) {
            case VK_STRUCTURE_TYPE_FORMAT_PROPERTIES_2:
                ConvertOutStructToVulkanSC(reinterpret_cast<VkFormatProperties2*>(base));
                break;

            case VK_STRUCTURE_TYPE_FORMAT_PROPERTIES_3:
                ConvertOutStructToVulkanSC(reinterpret_cast<VkFormatProperties3*>(base));
                break;

            case VK_STRUCTURE_TYPE_DRM_FORMAT_MODIFIER_PROPERTIES_LIST_EXT:
                ConvertOutStructToVulkanSC(reinterpret_cast<VkDrmFormatModifierPropertiesListEXT*>(base));
                break;

            case VK_STRUCTURE_TYPE_DRM_FORMAT_MODIFIER_PROPERTIES_LIST_2_EXT:
                ConvertOutStructToVulkanSC(reinterpret_cast<VkDrmFormatModifierPropertiesList2EXT*>(base));
                break;

            default:
                break;
        }
        base = base->pNext;
    }
}

template <>
void ConvertOutStructChainToVulkanSC<VkImageFormatProperties2>(VkImageFormatProperties2* chain) {
    VkBaseOutStructure* base = reinterpret_cast<VkBaseOutStructure*>(chain);
    while (base != nullptr) {
        switch (base->sType) {
            case VK_STRUCTURE_TYPE_IMAGE_FORMAT_PROPERTIES_2:
                ConvertOutStructToVulkanSC(reinterpret_cast<VkImageFormatProperties2*>(base));
                break;

            case VK_STRUCTURE_TYPE_SAMPLER_YCBCR_CONVERSION_IMAGE_FORMAT_PROPERTIES:
                ConvertOutStructToVulkanSC(reinterpret_cast<VkSamplerYcbcrConversionImageFormatProperties*>(base));
                break;

            case VK_STRUCTURE_TYPE_EXTERNAL_IMAGE_FORMAT_PROPERTIES:
                ConvertOutStructToVulkanSC(reinterpret_cast<VkExternalImageFormatProperties*>(base));
                break;

            case VK_STRUCTURE_TYPE_FILTER_CUBIC_IMAGE_VIEW_IMAGE_FORMAT_PROPERTIES_EXT:
                ConvertOutStructToVulkanSC(reinterpret_cast<VkFilterCubicImageViewImageFormatPropertiesEXT*>(base));
                break;

            default:
                break;
        }
        base = base->pNext;
    }
}

template <>
void ConvertOutStructChainToVulkanSC<VkQueueFamilyProperties2>(VkQueueFamilyProperties2* chain) {
    VkBaseOutStructure* base = reinterpret_cast<VkBaseOutStructure*>(chain);
    while (base != nullptr) {
        switch (base->sType) {
            case VK_STRUCTURE_TYPE_QUEUE_FAMILY_PROPERTIES_2:
                ConvertOutStructToVulkanSC(reinterpret_cast<VkQueueFamilyProperties2*>(base));
                break;

            case VK_STRUCTURE_TYPE_QUEUE_FAMILY_GLOBAL_PRIORITY_PROPERTIES_KHR:
                ConvertOutStructToVulkanSC(reinterpret_cast<VkQueueFamilyGlobalPriorityPropertiesKHR*>(base));
                break;

            case VK_STRUCTURE_TYPE_QUEUE_FAMILY_CHECKPOINT_PROPERTIES_2_NV:
                ConvertOutStructToVulkanSC(reinterpret_cast<VkQueueFamilyCheckpointProperties2NV*>(base));
                break;

            default:
                break;
        }
        base = base->pNext;
    }
}

template <>
void ConvertOutStructChainToVulkanSC<VkPhysicalDeviceMemoryProperties2>(VkPhysicalDeviceMemoryProperties2* chain) {
    VkBaseOutStructure* base = reinterpret_cast<VkBaseOutStructure*>(chain);
    while (base != nullptr) {
        switch (base->sType) {
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MEMORY_PROPERTIES_2:
                ConvertOutStructToVulkanSC(reinterpret_cast<VkPhysicalDeviceMemoryProperties2*>(base));
                break;

            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MEMORY_BUDGET_PROPERTIES_EXT:
                ConvertOutStructToVulkanSC(reinterpret_cast<VkPhysicalDeviceMemoryBudgetPropertiesEXT*>(base));
                break;

            default:
                break;
        }
        base = base->pNext;
    }
}

template <>
void ConvertOutStructChainToVulkanSC<VkExternalBufferProperties>(VkExternalBufferProperties* chain) {
    VkBaseOutStructure* base = reinterpret_cast<VkBaseOutStructure*>(chain);
    while (base != nullptr) {
        switch (base->sType) {
            case VK_STRUCTURE_TYPE_EXTERNAL_BUFFER_PROPERTIES:
                ConvertOutStructToVulkanSC(reinterpret_cast<VkExternalBufferProperties*>(base));
                break;

            default:
                break;
        }
        base = base->pNext;
    }
}

template <>
void ConvertOutStructChainToVulkanSC<VkExternalFenceProperties>(VkExternalFenceProperties* chain) {
    VkBaseOutStructure* base = reinterpret_cast<VkBaseOutStructure*>(chain);
    while (base != nullptr) {
        switch (base->sType) {
            case VK_STRUCTURE_TYPE_EXTERNAL_FENCE_PROPERTIES:
                ConvertOutStructToVulkanSC(reinterpret_cast<VkExternalFenceProperties*>(base));
                break;

            default:
                break;
        }
        base = base->pNext;
    }
}

template <>
void ConvertOutStructChainToVulkanSC<VkExternalSemaphoreProperties>(VkExternalSemaphoreProperties* chain) {
    VkBaseOutStructure* base = reinterpret_cast<VkBaseOutStructure*>(chain);
    while (base != nullptr) {
        switch (base->sType) {
            case VK_STRUCTURE_TYPE_EXTERNAL_SEMAPHORE_PROPERTIES:
                ConvertOutStructToVulkanSC(reinterpret_cast<VkExternalSemaphoreProperties*>(base));
                break;

            default:
                break;
        }
        base = base->pNext;
    }
}

template <>
void ConvertOutStructChainToVulkanSC<VkDescriptorSetLayoutSupport>(VkDescriptorSetLayoutSupport* chain) {
    VkBaseOutStructure* base = reinterpret_cast<VkBaseOutStructure*>(chain);
    while (base != nullptr) {
        switch (base->sType) {
            case VK_STRUCTURE_TYPE_DESCRIPTOR_SET_LAYOUT_SUPPORT:
                ConvertOutStructToVulkanSC(reinterpret_cast<VkDescriptorSetLayoutSupport*>(base));
                break;

            case VK_STRUCTURE_TYPE_DESCRIPTOR_SET_VARIABLE_DESCRIPTOR_COUNT_LAYOUT_SUPPORT:
                ConvertOutStructToVulkanSC(reinterpret_cast<VkDescriptorSetVariableDescriptorCountLayoutSupport*>(base));
                break;

            default:
                break;
        }
        base = base->pNext;
    }
}

template <>
void ConvertOutStructChainToVulkanSC<VkPhysicalDeviceToolProperties>(VkPhysicalDeviceToolProperties* chain) {
    VkBaseOutStructure* base = reinterpret_cast<VkBaseOutStructure*>(chain);
    while (base != nullptr) {
        switch (base->sType) {
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TOOL_PROPERTIES:
                ConvertOutStructToVulkanSC(reinterpret_cast<VkPhysicalDeviceToolProperties*>(base));
                break;

            default:
                break;
        }
        base = base->pNext;
    }
}

template <>
void ConvertOutStructChainToVulkanSC<VkCommandPoolMemoryConsumption>(VkCommandPoolMemoryConsumption* chain) {
    VkBaseOutStructure* base = reinterpret_cast<VkBaseOutStructure*>(chain);
    while (base != nullptr) {
        switch (base->sType) {
            case VK_STRUCTURE_TYPE_COMMAND_POOL_MEMORY_CONSUMPTION:
                ConvertOutStructToVulkanSC(reinterpret_cast<VkCommandPoolMemoryConsumption*>(base));
                break;

            default:
                break;
        }
        base = base->pNext;
    }
}

template <>
void ConvertOutStructChainToVulkanSC<VkFaultData>(VkFaultData* chain) {
    VkBaseOutStructure* base = reinterpret_cast<VkBaseOutStructure*>(chain);
    while (base != nullptr) {
        switch (base->sType) {
            case VK_STRUCTURE_TYPE_FAULT_DATA:
                ConvertOutStructToVulkanSC(reinterpret_cast<VkFaultData*>(base));
                break;

            default:
                break;
        }
        base = base->pNext;
    }
}

template <>
void ConvertOutStructChainToVulkanSC<VkDeviceGroupPresentCapabilitiesKHR>(VkDeviceGroupPresentCapabilitiesKHR* chain) {
    VkBaseOutStructure* base = reinterpret_cast<VkBaseOutStructure*>(chain);
    while (base != nullptr) {
        switch (base->sType) {
            case VK_STRUCTURE_TYPE_DEVICE_GROUP_PRESENT_CAPABILITIES_KHR:
                ConvertOutStructToVulkanSC(reinterpret_cast<VkDeviceGroupPresentCapabilitiesKHR*>(base));
                break;

            default:
                break;
        }
        base = base->pNext;
    }
}

template <>
void ConvertOutStructChainToVulkanSC<VkMemoryFdPropertiesKHR>(VkMemoryFdPropertiesKHR* chain) {
    VkBaseOutStructure* base = reinterpret_cast<VkBaseOutStructure*>(chain);
    while (base != nullptr) {
        switch (base->sType) {
            case VK_STRUCTURE_TYPE_MEMORY_FD_PROPERTIES_KHR:
                ConvertOutStructToVulkanSC(reinterpret_cast<VkMemoryFdPropertiesKHR*>(base));
                break;

            default:
                break;
        }
        base = base->pNext;
    }
}

template <>
void ConvertOutStructChainToVulkanSC<VkPerformanceCounterKHR>(VkPerformanceCounterKHR* chain) {
    VkBaseOutStructure* base = reinterpret_cast<VkBaseOutStructure*>(chain);
    while (base != nullptr) {
        switch (base->sType) {
            case VK_STRUCTURE_TYPE_PERFORMANCE_COUNTER_KHR:
                ConvertOutStructToVulkanSC(reinterpret_cast<VkPerformanceCounterKHR*>(base));
                break;

            default:
                break;
        }
        base = base->pNext;
    }
}

template <>
void ConvertOutStructChainToVulkanSC<VkPerformanceCounterDescriptionKHR>(VkPerformanceCounterDescriptionKHR* chain) {
    VkBaseOutStructure* base = reinterpret_cast<VkBaseOutStructure*>(chain);
    while (base != nullptr) {
        switch (base->sType) {
            case VK_STRUCTURE_TYPE_PERFORMANCE_COUNTER_DESCRIPTION_KHR:
                ConvertOutStructToVulkanSC(reinterpret_cast<VkPerformanceCounterDescriptionKHR*>(base));
                break;

            default:
                break;
        }
        base = base->pNext;
    }
}

template <>
void ConvertOutStructChainToVulkanSC<VkSurfaceCapabilities2KHR>(VkSurfaceCapabilities2KHR* chain) {
    VkBaseOutStructure* base = reinterpret_cast<VkBaseOutStructure*>(chain);
    while (base != nullptr) {
        switch (base->sType) {
            case VK_STRUCTURE_TYPE_SURFACE_CAPABILITIES_2_KHR:
                ConvertOutStructToVulkanSC(reinterpret_cast<VkSurfaceCapabilities2KHR*>(base));
                break;

            case VK_STRUCTURE_TYPE_SHARED_PRESENT_SURFACE_CAPABILITIES_KHR:
                ConvertOutStructToVulkanSC(reinterpret_cast<VkSharedPresentSurfaceCapabilitiesKHR*>(base));
                break;

            default:
                break;
        }
        base = base->pNext;
    }
}

template <>
void ConvertOutStructChainToVulkanSC<VkSurfaceFormat2KHR>(VkSurfaceFormat2KHR* chain) {
    VkBaseOutStructure* base = reinterpret_cast<VkBaseOutStructure*>(chain);
    while (base != nullptr) {
        switch (base->sType) {
            case VK_STRUCTURE_TYPE_SURFACE_FORMAT_2_KHR:
                ConvertOutStructToVulkanSC(reinterpret_cast<VkSurfaceFormat2KHR*>(base));
                break;

            default:
                break;
        }
        base = base->pNext;
    }
}

template <>
void ConvertOutStructChainToVulkanSC<VkDisplayProperties2KHR>(VkDisplayProperties2KHR* chain) {
    VkBaseOutStructure* base = reinterpret_cast<VkBaseOutStructure*>(chain);
    while (base != nullptr) {
        switch (base->sType) {
            case VK_STRUCTURE_TYPE_DISPLAY_PROPERTIES_2_KHR:
                ConvertOutStructToVulkanSC(reinterpret_cast<VkDisplayProperties2KHR*>(base));
                break;

            default:
                break;
        }
        base = base->pNext;
    }
}

template <>
void ConvertOutStructChainToVulkanSC<VkDisplayPlaneProperties2KHR>(VkDisplayPlaneProperties2KHR* chain) {
    VkBaseOutStructure* base = reinterpret_cast<VkBaseOutStructure*>(chain);
    while (base != nullptr) {
        switch (base->sType) {
            case VK_STRUCTURE_TYPE_DISPLAY_PLANE_PROPERTIES_2_KHR:
                ConvertOutStructToVulkanSC(reinterpret_cast<VkDisplayPlaneProperties2KHR*>(base));
                break;

            default:
                break;
        }
        base = base->pNext;
    }
}

template <>
void ConvertOutStructChainToVulkanSC<VkDisplayModeProperties2KHR>(VkDisplayModeProperties2KHR* chain) {
    VkBaseOutStructure* base = reinterpret_cast<VkBaseOutStructure*>(chain);
    while (base != nullptr) {
        switch (base->sType) {
            case VK_STRUCTURE_TYPE_DISPLAY_MODE_PROPERTIES_2_KHR:
                ConvertOutStructToVulkanSC(reinterpret_cast<VkDisplayModeProperties2KHR*>(base));
                break;

            default:
                break;
        }
        base = base->pNext;
    }
}

template <>
void ConvertOutStructChainToVulkanSC<VkDisplayPlaneCapabilities2KHR>(VkDisplayPlaneCapabilities2KHR* chain) {
    VkBaseOutStructure* base = reinterpret_cast<VkBaseOutStructure*>(chain);
    while (base != nullptr) {
        switch (base->sType) {
            case VK_STRUCTURE_TYPE_DISPLAY_PLANE_CAPABILITIES_2_KHR:
                ConvertOutStructToVulkanSC(reinterpret_cast<VkDisplayPlaneCapabilities2KHR*>(base));
                break;

            default:
                break;
        }
        base = base->pNext;
    }
}

template <>
void ConvertOutStructChainToVulkanSC<VkPhysicalDeviceFragmentShadingRateKHR>(VkPhysicalDeviceFragmentShadingRateKHR* chain) {
    VkBaseOutStructure* base = reinterpret_cast<VkBaseOutStructure*>(chain);
    while (base != nullptr) {
        switch (base->sType) {
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_SHADING_RATE_KHR:
                ConvertOutStructToVulkanSC(reinterpret_cast<VkPhysicalDeviceFragmentShadingRateKHR*>(base));
                break;

            default:
                break;
        }
        base = base->pNext;
    }
}

template <>
void ConvertOutStructChainToVulkanSC<VkCheckpointData2NV>(VkCheckpointData2NV* chain) {
    VkBaseOutStructure* base = reinterpret_cast<VkBaseOutStructure*>(chain);
    while (base != nullptr) {
        switch (base->sType) {
            case VK_STRUCTURE_TYPE_CHECKPOINT_DATA_2_NV:
                ConvertOutStructToVulkanSC(reinterpret_cast<VkCheckpointData2NV*>(base));
                break;

            default:
                break;
        }
        base = base->pNext;
    }
}

template <>
void ConvertOutStructChainToVulkanSC<VkSurfaceCapabilities2EXT>(VkSurfaceCapabilities2EXT* chain) {
    VkBaseOutStructure* base = reinterpret_cast<VkBaseOutStructure*>(chain);
    while (base != nullptr) {
        switch (base->sType) {
            case VK_STRUCTURE_TYPE_SURFACE_CAPABILITIES_2_EXT:
                ConvertOutStructToVulkanSC(reinterpret_cast<VkSurfaceCapabilities2EXT*>(base));
                break;

            default:
                break;
        }
        base = base->pNext;
    }
}

template <>
void ConvertOutStructChainToVulkanSC<VkMultisamplePropertiesEXT>(VkMultisamplePropertiesEXT* chain) {
    VkBaseOutStructure* base = reinterpret_cast<VkBaseOutStructure*>(chain);
    while (base != nullptr) {
        switch (base->sType) {
            case VK_STRUCTURE_TYPE_MULTISAMPLE_PROPERTIES_EXT:
                ConvertOutStructToVulkanSC(reinterpret_cast<VkMultisamplePropertiesEXT*>(base));
                break;

            default:
                break;
        }
        base = base->pNext;
    }
}

template <>
void ConvertOutStructChainToVulkanSC<VkImageDrmFormatModifierPropertiesEXT>(VkImageDrmFormatModifierPropertiesEXT* chain) {
    VkBaseOutStructure* base = reinterpret_cast<VkBaseOutStructure*>(chain);
    while (base != nullptr) {
        switch (base->sType) {
            case VK_STRUCTURE_TYPE_IMAGE_DRM_FORMAT_MODIFIER_PROPERTIES_EXT:
                ConvertOutStructToVulkanSC(reinterpret_cast<VkImageDrmFormatModifierPropertiesEXT*>(base));
                break;

            default:
                break;
        }
        base = base->pNext;
    }
}

template <>
void ConvertOutStructChainToVulkanSC<VkMemoryHostPointerPropertiesEXT>(VkMemoryHostPointerPropertiesEXT* chain) {
    VkBaseOutStructure* base = reinterpret_cast<VkBaseOutStructure*>(chain);
    while (base != nullptr) {
        switch (base->sType) {
            case VK_STRUCTURE_TYPE_MEMORY_HOST_POINTER_PROPERTIES_EXT:
                ConvertOutStructToVulkanSC(reinterpret_cast<VkMemoryHostPointerPropertiesEXT*>(base));
                break;

            default:
                break;
        }
        base = base->pNext;
    }
}
#ifdef VK_USE_PLATFORM_SCI

template <>
void ConvertOutStructChainToVulkanSC<VkMemorySciBufPropertiesNV>(VkMemorySciBufPropertiesNV* chain) {
    VkBaseOutStructure* base = reinterpret_cast<VkBaseOutStructure*>(chain);
    while (base != nullptr) {
        switch (base->sType) {
#ifdef VK_USE_PLATFORM_SCI

            case VK_STRUCTURE_TYPE_MEMORY_SCI_BUF_PROPERTIES_NV:
                ConvertOutStructToVulkanSC(reinterpret_cast<VkMemorySciBufPropertiesNV*>(base));
                break;
#endif  // VK_USE_PLATFORM_SCI

            default:
                break;
        }
        base = base->pNext;
    }
}
#endif  // VK_USE_PLATFORM_SCI
#ifdef VK_USE_PLATFORM_SCREEN_QNX

template <>
void ConvertOutStructChainToVulkanSC<VkScreenBufferPropertiesQNX>(VkScreenBufferPropertiesQNX* chain) {
    VkBaseOutStructure* base = reinterpret_cast<VkBaseOutStructure*>(chain);
    while (base != nullptr) {
        switch (base->sType) {
#ifdef VK_USE_PLATFORM_SCREEN_QNX

            case VK_STRUCTURE_TYPE_SCREEN_BUFFER_PROPERTIES_QNX:
                ConvertOutStructToVulkanSC(reinterpret_cast<VkScreenBufferPropertiesQNX*>(base));
                break;

            case VK_STRUCTURE_TYPE_SCREEN_BUFFER_FORMAT_PROPERTIES_QNX:
                ConvertOutStructToVulkanSC(reinterpret_cast<VkScreenBufferFormatPropertiesQNX*>(base));
                break;
#endif  // VK_USE_PLATFORM_SCREEN_QNX

            default:
                break;
        }
        base = base->pNext;
    }
}
#endif  // VK_USE_PLATFORM_SCREEN_QNX

}  // namespace vksc

// NOLINTEND
