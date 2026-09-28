// *** THIS FILE IS GENERATED - DO NOT EDIT ***
// See output_sanitizer_generator.py for modifications

/*
 * Copyright (c) 2024-2025 The Khronos Group Inc.
 * Copyright (c) 2024-2025 RasterGrid Kft.
 *
 * SPDX-License-Identifier: Apache-2.0
 */
// NOLINTBEGIN

#pragma once

#include <vulkan/vulkan.h>
#include <unordered_map>
#include <string>

namespace vksc {

template <typename T>
void ConvertOutStructChainToVulkanSC(T* chain) {}

template <typename T>
void ConvertOutStructToVulkanSC(T* p) {}
bool IsVkPresentModeKHRInVulkanSC(VkPresentModeKHR value);
bool IsVkObjectTypeInVulkanSC(VkObjectType value);
bool IsVkTimeDomainKHRInVulkanSC(VkTimeDomainKHR value);
bool IsVkPhysicalDeviceTypeInVulkanSC(VkPhysicalDeviceType value);
bool IsVkFaultLevelInVulkanSC(VkFaultLevel value);
bool IsVkFaultTypeInVulkanSC(VkFaultType value);
bool IsVkFormatInVulkanSC(VkFormat value);
bool IsVkColorSpaceKHRInVulkanSC(VkColorSpaceKHR value);
bool IsVkPerformanceCounterUnitKHRInVulkanSC(VkPerformanceCounterUnitKHR value);
bool IsVkPerformanceCounterScopeKHRInVulkanSC(VkPerformanceCounterScopeKHR value);
bool IsVkPerformanceCounterStorageKHRInVulkanSC(VkPerformanceCounterStorageKHR value);
bool IsVkPointClippingBehaviorInVulkanSC(VkPointClippingBehavior value);
bool IsVkDriverIdInVulkanSC(VkDriverId value);
bool IsVkShaderFloatControlsIndependenceInVulkanSC(VkShaderFloatControlsIndependence value);
bool IsVkPipelineRobustnessBufferBehaviorInVulkanSC(VkPipelineRobustnessBufferBehavior value);
bool IsVkPipelineRobustnessImageBehaviorInVulkanSC(VkPipelineRobustnessImageBehavior value);
bool IsVkImageLayoutInVulkanSC(VkImageLayout value);
bool IsVkQueueGlobalPriorityInVulkanSC(VkQueueGlobalPriority value);
bool IsVkSamplerYcbcrModelConversionInVulkanSC(VkSamplerYcbcrModelConversion value);
bool IsVkSamplerYcbcrRangeInVulkanSC(VkSamplerYcbcrRange value);
bool IsVkChromaLocationInVulkanSC(VkChromaLocation value);
bool IsVkComponentSwizzleInVulkanSC(VkComponentSwizzle value);
bool IsVkFormatFeatureFlagBitsInVulkanSC(VkFormatFeatureFlagBits value);
bool IsVkSampleCountFlagBitsInVulkanSC(VkSampleCountFlagBits value);
bool IsVkQueueFlagBitsInVulkanSC(VkQueueFlagBits value);
bool IsVkExternalFenceHandleTypeFlagBitsInVulkanSC(VkExternalFenceHandleTypeFlagBits value);
bool IsVkExternalFenceFeatureFlagBitsInVulkanSC(VkExternalFenceFeatureFlagBits value);
bool IsVkExternalSemaphoreHandleTypeFlagBitsInVulkanSC(VkExternalSemaphoreHandleTypeFlagBits value);
bool IsVkExternalSemaphoreFeatureFlagBitsInVulkanSC(VkExternalSemaphoreFeatureFlagBits value);
bool IsVkSurfaceTransformFlagBitsKHRInVulkanSC(VkSurfaceTransformFlagBitsKHR value);
bool IsVkCompositeAlphaFlagBitsKHRInVulkanSC(VkCompositeAlphaFlagBitsKHR value);
bool IsVkImageUsageFlagBitsInVulkanSC(VkImageUsageFlagBits value);
bool IsVkDeviceGroupPresentModeFlagBitsKHRInVulkanSC(VkDeviceGroupPresentModeFlagBitsKHR value);
bool IsVkDisplayPlaneAlphaFlagBitsKHRInVulkanSC(VkDisplayPlaneAlphaFlagBitsKHR value);
bool IsVkPerformanceCounterDescriptionFlagBitsKHRInVulkanSC(VkPerformanceCounterDescriptionFlagBitsKHR value);
bool IsVkSurfaceCounterFlagBitsEXTInVulkanSC(VkSurfaceCounterFlagBitsEXT value);
bool IsVkShaderStageFlagBitsInVulkanSC(VkShaderStageFlagBits value);
bool IsVkSubgroupFeatureFlagBitsInVulkanSC(VkSubgroupFeatureFlagBits value);
bool IsVkResolveModeFlagBitsInVulkanSC(VkResolveModeFlagBits value);
bool IsVkFormatFeatureFlagBits2InVulkanSC(VkFormatFeatureFlagBits2 value);
bool IsVkMemoryPropertyFlagBitsInVulkanSC(VkMemoryPropertyFlagBits value);
bool IsVkMemoryHeapFlagBitsInVulkanSC(VkMemoryHeapFlagBits value);
bool IsVkExternalMemoryFeatureFlagBitsInVulkanSC(VkExternalMemoryFeatureFlagBits value);
bool IsVkExternalMemoryHandleTypeFlagBitsInVulkanSC(VkExternalMemoryHandleTypeFlagBits value);
template <>
void ConvertOutStructToVulkanSC<VkPhysicalDeviceFeatures>(VkPhysicalDeviceFeatures* p);
template <>
void ConvertOutStructToVulkanSC<VkFormatProperties>(VkFormatProperties* p);
template <>
void ConvertOutStructToVulkanSC<VkImageFormatProperties>(VkImageFormatProperties* p);
template <>
void ConvertOutStructToVulkanSC<VkPhysicalDeviceProperties>(VkPhysicalDeviceProperties* p);
template <>
void ConvertOutStructToVulkanSC<VkQueueFamilyProperties>(VkQueueFamilyProperties* p);
template <>
void ConvertOutStructToVulkanSC<VkPhysicalDeviceMemoryProperties>(VkPhysicalDeviceMemoryProperties* p);
template <>
void ConvertOutStructToVulkanSC<VkExtensionProperties>(VkExtensionProperties* p);
template <>
void ConvertOutStructToVulkanSC<VkLayerProperties>(VkLayerProperties* p);
template <>
void ConvertOutStructToVulkanSC<VkMemoryRequirements>(VkMemoryRequirements* p);
template <>
void ConvertOutStructToVulkanSC<VkSubresourceLayout>(VkSubresourceLayout* p);
template <>
void ConvertOutStructToVulkanSC<VkExtent2D>(VkExtent2D* p);
template <>
void ConvertOutStructToVulkanSC<VkPhysicalDeviceGroupProperties>(VkPhysicalDeviceGroupProperties* p);
template <>
void ConvertOutStructToVulkanSC<VkMemoryRequirements2>(VkMemoryRequirements2* p);
template <>
void ConvertOutStructToVulkanSC<VkPhysicalDeviceFeatures2>(VkPhysicalDeviceFeatures2* p);
template <>
void ConvertOutStructToVulkanSC<VkPhysicalDeviceProperties2>(VkPhysicalDeviceProperties2* p);
template <>
void ConvertOutStructToVulkanSC<VkFormatProperties2>(VkFormatProperties2* p);
template <>
void ConvertOutStructToVulkanSC<VkImageFormatProperties2>(VkImageFormatProperties2* p);
template <>
void ConvertOutStructToVulkanSC<VkQueueFamilyProperties2>(VkQueueFamilyProperties2* p);
template <>
void ConvertOutStructToVulkanSC<VkPhysicalDeviceMemoryProperties2>(VkPhysicalDeviceMemoryProperties2* p);
template <>
void ConvertOutStructToVulkanSC<VkExternalBufferProperties>(VkExternalBufferProperties* p);
template <>
void ConvertOutStructToVulkanSC<VkExternalFenceProperties>(VkExternalFenceProperties* p);
template <>
void ConvertOutStructToVulkanSC<VkExternalSemaphoreProperties>(VkExternalSemaphoreProperties* p);
template <>
void ConvertOutStructToVulkanSC<VkDescriptorSetLayoutSupport>(VkDescriptorSetLayoutSupport* p);
template <>
void ConvertOutStructToVulkanSC<VkCommandPoolMemoryConsumption>(VkCommandPoolMemoryConsumption* p);
template <>
void ConvertOutStructToVulkanSC<VkFaultData>(VkFaultData* p);
template <>
void ConvertOutStructToVulkanSC<VkSurfaceCapabilitiesKHR>(VkSurfaceCapabilitiesKHR* p);
template <>
void ConvertOutStructToVulkanSC<VkSurfaceFormatKHR>(VkSurfaceFormatKHR* p);
template <>
void ConvertOutStructToVulkanSC<VkDeviceGroupPresentCapabilitiesKHR>(VkDeviceGroupPresentCapabilitiesKHR* p);
template <>
void ConvertOutStructToVulkanSC<VkRect2D>(VkRect2D* p);
template <>
void ConvertOutStructToVulkanSC<VkDisplayPropertiesKHR>(VkDisplayPropertiesKHR* p);
template <>
void ConvertOutStructToVulkanSC<VkDisplayPlanePropertiesKHR>(VkDisplayPlanePropertiesKHR* p);
template <>
void ConvertOutStructToVulkanSC<VkDisplayModePropertiesKHR>(VkDisplayModePropertiesKHR* p);
template <>
void ConvertOutStructToVulkanSC<VkDisplayPlaneCapabilitiesKHR>(VkDisplayPlaneCapabilitiesKHR* p);
template <>
void ConvertOutStructToVulkanSC<VkMemoryFdPropertiesKHR>(VkMemoryFdPropertiesKHR* p);
template <>
void ConvertOutStructToVulkanSC<VkPerformanceCounterKHR>(VkPerformanceCounterKHR* p);
template <>
void ConvertOutStructToVulkanSC<VkPerformanceCounterDescriptionKHR>(VkPerformanceCounterDescriptionKHR* p);
template <>
void ConvertOutStructToVulkanSC<VkSurfaceCapabilities2KHR>(VkSurfaceCapabilities2KHR* p);
template <>
void ConvertOutStructToVulkanSC<VkSurfaceFormat2KHR>(VkSurfaceFormat2KHR* p);
template <>
void ConvertOutStructToVulkanSC<VkDisplayProperties2KHR>(VkDisplayProperties2KHR* p);
template <>
void ConvertOutStructToVulkanSC<VkDisplayPlaneProperties2KHR>(VkDisplayPlaneProperties2KHR* p);
template <>
void ConvertOutStructToVulkanSC<VkDisplayModeProperties2KHR>(VkDisplayModeProperties2KHR* p);
template <>
void ConvertOutStructToVulkanSC<VkDisplayPlaneCapabilities2KHR>(VkDisplayPlaneCapabilities2KHR* p);
template <>
void ConvertOutStructToVulkanSC<VkPhysicalDeviceFragmentShadingRateKHR>(VkPhysicalDeviceFragmentShadingRateKHR* p);
template <>
void ConvertOutStructToVulkanSC<VkSurfaceCapabilities2EXT>(VkSurfaceCapabilities2EXT* p);
template <>
void ConvertOutStructToVulkanSC<VkMultisamplePropertiesEXT>(VkMultisamplePropertiesEXT* p);
template <>
void ConvertOutStructToVulkanSC<VkImageDrmFormatModifierPropertiesEXT>(VkImageDrmFormatModifierPropertiesEXT* p);
template <>
void ConvertOutStructToVulkanSC<VkMemoryHostPointerPropertiesEXT>(VkMemoryHostPointerPropertiesEXT* p);
#ifdef VK_USE_PLATFORM_SCI
template <>
void ConvertOutStructToVulkanSC<VkMemorySciBufPropertiesNV>(VkMemorySciBufPropertiesNV* p);
#endif  // VK_USE_PLATFORM_SCI
#ifdef VK_USE_PLATFORM_SCREEN_QNX
template <>
void ConvertOutStructToVulkanSC<VkScreenBufferPropertiesQNX>(VkScreenBufferPropertiesQNX* p);
#endif  // VK_USE_PLATFORM_SCREEN_QNX
template <>
void ConvertOutStructToVulkanSC<VkMemoryDedicatedRequirements>(VkMemoryDedicatedRequirements* p);
template <>
void ConvertOutStructToVulkanSC<VkPhysicalDeviceProtectedMemoryFeatures>(VkPhysicalDeviceProtectedMemoryFeatures* p);
template <>
void ConvertOutStructToVulkanSC<VkPhysicalDeviceProtectedMemoryProperties>(VkPhysicalDeviceProtectedMemoryProperties* p);
template <>
void ConvertOutStructToVulkanSC<VkExternalImageFormatProperties>(VkExternalImageFormatProperties* p);
template <>
void ConvertOutStructToVulkanSC<VkPhysicalDeviceIDProperties>(VkPhysicalDeviceIDProperties* p);
template <>
void ConvertOutStructToVulkanSC<VkPhysicalDeviceSubgroupProperties>(VkPhysicalDeviceSubgroupProperties* p);
template <>
void ConvertOutStructToVulkanSC<VkPhysicalDevice16BitStorageFeatures>(VkPhysicalDevice16BitStorageFeatures* p);
template <>
void ConvertOutStructToVulkanSC<VkPhysicalDeviceVariablePointersFeatures>(VkPhysicalDeviceVariablePointersFeatures* p);
template <>
void ConvertOutStructToVulkanSC<VkPhysicalDeviceMaintenance3Properties>(VkPhysicalDeviceMaintenance3Properties* p);
template <>
void ConvertOutStructToVulkanSC<VkPhysicalDeviceSamplerYcbcrConversionFeatures>(VkPhysicalDeviceSamplerYcbcrConversionFeatures* p);
template <>
void ConvertOutStructToVulkanSC<VkSamplerYcbcrConversionImageFormatProperties>(VkSamplerYcbcrConversionImageFormatProperties* p);
template <>
void ConvertOutStructToVulkanSC<VkPhysicalDevicePointClippingProperties>(VkPhysicalDevicePointClippingProperties* p);
template <>
void ConvertOutStructToVulkanSC<VkPhysicalDeviceMultiviewFeatures>(VkPhysicalDeviceMultiviewFeatures* p);
template <>
void ConvertOutStructToVulkanSC<VkPhysicalDeviceMultiviewProperties>(VkPhysicalDeviceMultiviewProperties* p);
template <>
void ConvertOutStructToVulkanSC<VkPhysicalDeviceShaderDrawParametersFeatures>(VkPhysicalDeviceShaderDrawParametersFeatures* p);
template <>
void ConvertOutStructToVulkanSC<VkPhysicalDeviceDriverProperties>(VkPhysicalDeviceDriverProperties* p);
template <>
void ConvertOutStructToVulkanSC<VkPhysicalDeviceVulkan11Features>(VkPhysicalDeviceVulkan11Features* p);
template <>
void ConvertOutStructToVulkanSC<VkPhysicalDeviceVulkan11Properties>(VkPhysicalDeviceVulkan11Properties* p);
template <>
void ConvertOutStructToVulkanSC<VkPhysicalDeviceVulkan12Features>(VkPhysicalDeviceVulkan12Features* p);
template <>
void ConvertOutStructToVulkanSC<VkPhysicalDeviceVulkan12Properties>(VkPhysicalDeviceVulkan12Properties* p);
template <>
void ConvertOutStructToVulkanSC<VkPhysicalDeviceVulkanMemoryModelFeatures>(VkPhysicalDeviceVulkanMemoryModelFeatures* p);
template <>
void ConvertOutStructToVulkanSC<VkPhysicalDeviceHostQueryResetFeatures>(VkPhysicalDeviceHostQueryResetFeatures* p);
template <>
void ConvertOutStructToVulkanSC<VkPhysicalDeviceTimelineSemaphoreFeatures>(VkPhysicalDeviceTimelineSemaphoreFeatures* p);
template <>
void ConvertOutStructToVulkanSC<VkPhysicalDeviceTimelineSemaphoreProperties>(VkPhysicalDeviceTimelineSemaphoreProperties* p);
template <>
void ConvertOutStructToVulkanSC<VkPhysicalDeviceBufferDeviceAddressFeatures>(VkPhysicalDeviceBufferDeviceAddressFeatures* p);
template <>
void ConvertOutStructToVulkanSC<VkPhysicalDevice8BitStorageFeatures>(VkPhysicalDevice8BitStorageFeatures* p);
template <>
void ConvertOutStructToVulkanSC<VkPhysicalDeviceShaderAtomicInt64Features>(VkPhysicalDeviceShaderAtomicInt64Features* p);
template <>
void ConvertOutStructToVulkanSC<VkPhysicalDeviceShaderFloat16Int8Features>(VkPhysicalDeviceShaderFloat16Int8Features* p);
template <>
void ConvertOutStructToVulkanSC<VkPhysicalDeviceFloatControlsProperties>(VkPhysicalDeviceFloatControlsProperties* p);
template <>
void ConvertOutStructToVulkanSC<VkPhysicalDeviceDescriptorIndexingFeatures>(VkPhysicalDeviceDescriptorIndexingFeatures* p);
template <>
void ConvertOutStructToVulkanSC<VkPhysicalDeviceDescriptorIndexingProperties>(VkPhysicalDeviceDescriptorIndexingProperties* p);
template <>
void ConvertOutStructToVulkanSC<VkDescriptorSetVariableDescriptorCountLayoutSupport>(
    VkDescriptorSetVariableDescriptorCountLayoutSupport* p);
template <>
void ConvertOutStructToVulkanSC<VkPhysicalDeviceScalarBlockLayoutFeatures>(VkPhysicalDeviceScalarBlockLayoutFeatures* p);
template <>
void ConvertOutStructToVulkanSC<VkPhysicalDeviceSamplerFilterMinmaxProperties>(VkPhysicalDeviceSamplerFilterMinmaxProperties* p);
template <>
void ConvertOutStructToVulkanSC<VkPhysicalDeviceUniformBufferStandardLayoutFeatures>(
    VkPhysicalDeviceUniformBufferStandardLayoutFeatures* p);
template <>
void ConvertOutStructToVulkanSC<VkPhysicalDeviceShaderSubgroupExtendedTypesFeatures>(
    VkPhysicalDeviceShaderSubgroupExtendedTypesFeatures* p);
template <>
void ConvertOutStructToVulkanSC<VkPhysicalDeviceDepthStencilResolveProperties>(VkPhysicalDeviceDepthStencilResolveProperties* p);
template <>
void ConvertOutStructToVulkanSC<VkPhysicalDeviceImagelessFramebufferFeatures>(VkPhysicalDeviceImagelessFramebufferFeatures* p);
template <>
void ConvertOutStructToVulkanSC<VkPhysicalDeviceSeparateDepthStencilLayoutsFeatures>(
    VkPhysicalDeviceSeparateDepthStencilLayoutsFeatures* p);
template <>
void ConvertOutStructToVulkanSC<VkPhysicalDeviceVulkan13Features>(VkPhysicalDeviceVulkan13Features* p);
template <>
void ConvertOutStructToVulkanSC<VkPhysicalDeviceVulkan13Properties>(VkPhysicalDeviceVulkan13Properties* p);
template <>
void ConvertOutStructToVulkanSC<VkPhysicalDevicePrivateDataFeatures>(VkPhysicalDevicePrivateDataFeatures* p);
template <>
void ConvertOutStructToVulkanSC<VkPhysicalDeviceSynchronization2Features>(VkPhysicalDeviceSynchronization2Features* p);
template <>
void ConvertOutStructToVulkanSC<VkPhysicalDeviceTextureCompressionASTCHDRFeatures>(
    VkPhysicalDeviceTextureCompressionASTCHDRFeatures* p);
template <>
void ConvertOutStructToVulkanSC<VkFormatProperties3>(VkFormatProperties3* p);
template <>
void ConvertOutStructToVulkanSC<VkPhysicalDeviceMaintenance4Features>(VkPhysicalDeviceMaintenance4Features* p);
template <>
void ConvertOutStructToVulkanSC<VkPhysicalDeviceMaintenance4Properties>(VkPhysicalDeviceMaintenance4Properties* p);
template <>
void ConvertOutStructToVulkanSC<VkPhysicalDeviceShaderTerminateInvocationFeatures>(
    VkPhysicalDeviceShaderTerminateInvocationFeatures* p);
template <>
void ConvertOutStructToVulkanSC<VkPhysicalDeviceShaderDemoteToHelperInvocationFeatures>(
    VkPhysicalDeviceShaderDemoteToHelperInvocationFeatures* p);
template <>
void ConvertOutStructToVulkanSC<VkPhysicalDevicePipelineCreationCacheControlFeatures>(
    VkPhysicalDevicePipelineCreationCacheControlFeatures* p);
template <>
void ConvertOutStructToVulkanSC<VkPhysicalDeviceZeroInitializeWorkgroupMemoryFeatures>(
    VkPhysicalDeviceZeroInitializeWorkgroupMemoryFeatures* p);
template <>
void ConvertOutStructToVulkanSC<VkPhysicalDeviceImageRobustnessFeatures>(VkPhysicalDeviceImageRobustnessFeatures* p);
template <>
void ConvertOutStructToVulkanSC<VkPhysicalDeviceSubgroupSizeControlFeatures>(VkPhysicalDeviceSubgroupSizeControlFeatures* p);
template <>
void ConvertOutStructToVulkanSC<VkPhysicalDeviceSubgroupSizeControlProperties>(VkPhysicalDeviceSubgroupSizeControlProperties* p);
template <>
void ConvertOutStructToVulkanSC<VkPhysicalDeviceInlineUniformBlockFeatures>(VkPhysicalDeviceInlineUniformBlockFeatures* p);
template <>
void ConvertOutStructToVulkanSC<VkPhysicalDeviceInlineUniformBlockProperties>(VkPhysicalDeviceInlineUniformBlockProperties* p);
template <>
void ConvertOutStructToVulkanSC<VkPhysicalDeviceShaderIntegerDotProductFeatures>(
    VkPhysicalDeviceShaderIntegerDotProductFeatures* p);
template <>
void ConvertOutStructToVulkanSC<VkPhysicalDeviceShaderIntegerDotProductProperties>(
    VkPhysicalDeviceShaderIntegerDotProductProperties* p);
template <>
void ConvertOutStructToVulkanSC<VkPhysicalDeviceTexelBufferAlignmentProperties>(VkPhysicalDeviceTexelBufferAlignmentProperties* p);
template <>
void ConvertOutStructToVulkanSC<VkPhysicalDeviceDynamicRenderingFeatures>(VkPhysicalDeviceDynamicRenderingFeatures* p);
template <>
void ConvertOutStructToVulkanSC<VkPhysicalDeviceVulkan14Features>(VkPhysicalDeviceVulkan14Features* p);
template <>
void ConvertOutStructToVulkanSC<VkPhysicalDeviceVulkan14Properties>(VkPhysicalDeviceVulkan14Properties* p);
template <>
void ConvertOutStructToVulkanSC<VkPhysicalDeviceGlobalPriorityQueryFeatures>(VkPhysicalDeviceGlobalPriorityQueryFeatures* p);
template <>
void ConvertOutStructToVulkanSC<VkQueueFamilyGlobalPriorityProperties>(VkQueueFamilyGlobalPriorityProperties* p);
template <>
void ConvertOutStructToVulkanSC<VkPhysicalDeviceIndexTypeUint8Features>(VkPhysicalDeviceIndexTypeUint8Features* p);
template <>
void ConvertOutStructToVulkanSC<VkPhysicalDeviceMaintenance5Features>(VkPhysicalDeviceMaintenance5Features* p);
template <>
void ConvertOutStructToVulkanSC<VkPhysicalDeviceMaintenance5Properties>(VkPhysicalDeviceMaintenance5Properties* p);
template <>
void ConvertOutStructToVulkanSC<VkPhysicalDeviceMaintenance6Features>(VkPhysicalDeviceMaintenance6Features* p);
template <>
void ConvertOutStructToVulkanSC<VkPhysicalDeviceMaintenance6Properties>(VkPhysicalDeviceMaintenance6Properties* p);
template <>
void ConvertOutStructToVulkanSC<VkPhysicalDeviceHostImageCopyFeatures>(VkPhysicalDeviceHostImageCopyFeatures* p);
template <>
void ConvertOutStructToVulkanSC<VkPhysicalDeviceHostImageCopyProperties>(VkPhysicalDeviceHostImageCopyProperties* p);
template <>
void ConvertOutStructToVulkanSC<VkHostImageCopyDevicePerformanceQuery>(VkHostImageCopyDevicePerformanceQuery* p);
template <>
void ConvertOutStructToVulkanSC<VkPhysicalDeviceShaderSubgroupRotateFeatures>(VkPhysicalDeviceShaderSubgroupRotateFeatures* p);
template <>
void ConvertOutStructToVulkanSC<VkPhysicalDeviceShaderFloatControls2Features>(VkPhysicalDeviceShaderFloatControls2Features* p);
template <>
void ConvertOutStructToVulkanSC<VkPhysicalDeviceShaderExpectAssumeFeatures>(VkPhysicalDeviceShaderExpectAssumeFeatures* p);
template <>
void ConvertOutStructToVulkanSC<VkPhysicalDevicePushDescriptorProperties>(VkPhysicalDevicePushDescriptorProperties* p);
template <>
void ConvertOutStructToVulkanSC<VkPhysicalDevicePipelineProtectedAccessFeatures>(
    VkPhysicalDevicePipelineProtectedAccessFeatures* p);
template <>
void ConvertOutStructToVulkanSC<VkPhysicalDevicePipelineRobustnessFeatures>(VkPhysicalDevicePipelineRobustnessFeatures* p);
template <>
void ConvertOutStructToVulkanSC<VkPhysicalDevicePipelineRobustnessProperties>(VkPhysicalDevicePipelineRobustnessProperties* p);
template <>
void ConvertOutStructToVulkanSC<VkPhysicalDeviceLineRasterizationFeatures>(VkPhysicalDeviceLineRasterizationFeatures* p);
template <>
void ConvertOutStructToVulkanSC<VkPhysicalDeviceLineRasterizationProperties>(VkPhysicalDeviceLineRasterizationProperties* p);
template <>
void ConvertOutStructToVulkanSC<VkPhysicalDeviceVertexAttributeDivisorProperties>(
    VkPhysicalDeviceVertexAttributeDivisorProperties* p);
template <>
void ConvertOutStructToVulkanSC<VkPhysicalDeviceVertexAttributeDivisorFeatures>(VkPhysicalDeviceVertexAttributeDivisorFeatures* p);
template <>
void ConvertOutStructToVulkanSC<VkPhysicalDeviceDynamicRenderingLocalReadFeatures>(
    VkPhysicalDeviceDynamicRenderingLocalReadFeatures* p);
template <>
void ConvertOutStructToVulkanSC<VkPhysicalDeviceVulkanSC10Features>(VkPhysicalDeviceVulkanSC10Features* p);
template <>
void ConvertOutStructToVulkanSC<VkPhysicalDeviceVulkanSC10Properties>(VkPhysicalDeviceVulkanSC10Properties* p);
template <>
void ConvertOutStructToVulkanSC<VkSharedPresentSurfaceCapabilitiesKHR>(VkSharedPresentSurfaceCapabilitiesKHR* p);
template <>
void ConvertOutStructToVulkanSC<VkPhysicalDevicePerformanceQueryFeaturesKHR>(VkPhysicalDevicePerformanceQueryFeaturesKHR* p);
template <>
void ConvertOutStructToVulkanSC<VkPhysicalDevicePerformanceQueryPropertiesKHR>(VkPhysicalDevicePerformanceQueryPropertiesKHR* p);
template <>
void ConvertOutStructToVulkanSC<VkPhysicalDeviceShaderClockFeaturesKHR>(VkPhysicalDeviceShaderClockFeaturesKHR* p);
template <>
void ConvertOutStructToVulkanSC<VkPhysicalDeviceFragmentShadingRateFeaturesKHR>(VkPhysicalDeviceFragmentShadingRateFeaturesKHR* p);
template <>
void ConvertOutStructToVulkanSC<VkPhysicalDeviceFragmentShadingRatePropertiesKHR>(
    VkPhysicalDeviceFragmentShadingRatePropertiesKHR* p);
template <>
void ConvertOutStructToVulkanSC<VkPhysicalDeviceASTCDecodeFeaturesEXT>(VkPhysicalDeviceASTCDecodeFeaturesEXT* p);
template <>
void ConvertOutStructToVulkanSC<VkPhysicalDeviceDiscardRectanglePropertiesEXT>(VkPhysicalDeviceDiscardRectanglePropertiesEXT* p);
template <>
void ConvertOutStructToVulkanSC<VkPhysicalDeviceConservativeRasterizationPropertiesEXT>(
    VkPhysicalDeviceConservativeRasterizationPropertiesEXT* p);
template <>
void ConvertOutStructToVulkanSC<VkPhysicalDeviceDepthClipEnableFeaturesEXT>(VkPhysicalDeviceDepthClipEnableFeaturesEXT* p);
template <>
void ConvertOutStructToVulkanSC<VkPhysicalDeviceSampleLocationsPropertiesEXT>(VkPhysicalDeviceSampleLocationsPropertiesEXT* p);
template <>
void ConvertOutStructToVulkanSC<VkPhysicalDeviceBlendOperationAdvancedFeaturesEXT>(
    VkPhysicalDeviceBlendOperationAdvancedFeaturesEXT* p);
template <>
void ConvertOutStructToVulkanSC<VkPhysicalDeviceBlendOperationAdvancedPropertiesEXT>(
    VkPhysicalDeviceBlendOperationAdvancedPropertiesEXT* p);
template <>
void ConvertOutStructToVulkanSC<VkDrmFormatModifierPropertiesListEXT>(VkDrmFormatModifierPropertiesListEXT* p);
template <>
void ConvertOutStructToVulkanSC<VkFilterCubicImageViewImageFormatPropertiesEXT>(VkFilterCubicImageViewImageFormatPropertiesEXT* p);
template <>
void ConvertOutStructToVulkanSC<VkPhysicalDeviceExternalMemoryHostPropertiesEXT>(
    VkPhysicalDeviceExternalMemoryHostPropertiesEXT* p);
template <>
void ConvertOutStructToVulkanSC<VkPhysicalDevicePCIBusInfoPropertiesEXT>(VkPhysicalDevicePCIBusInfoPropertiesEXT* p);
template <>
void ConvertOutStructToVulkanSC<VkPhysicalDeviceShaderImageAtomicInt64FeaturesEXT>(
    VkPhysicalDeviceShaderImageAtomicInt64FeaturesEXT* p);
template <>
void ConvertOutStructToVulkanSC<VkPhysicalDeviceMemoryBudgetPropertiesEXT>(VkPhysicalDeviceMemoryBudgetPropertiesEXT* p);
template <>
void ConvertOutStructToVulkanSC<VkPhysicalDeviceFragmentShaderInterlockFeaturesEXT>(
    VkPhysicalDeviceFragmentShaderInterlockFeaturesEXT* p);
template <>
void ConvertOutStructToVulkanSC<VkPhysicalDeviceYcbcrImageArraysFeaturesEXT>(VkPhysicalDeviceYcbcrImageArraysFeaturesEXT* p);
template <>
void ConvertOutStructToVulkanSC<VkPhysicalDeviceShaderAtomicFloatFeaturesEXT>(VkPhysicalDeviceShaderAtomicFloatFeaturesEXT* p);
template <>
void ConvertOutStructToVulkanSC<VkPhysicalDeviceExtendedDynamicStateFeaturesEXT>(
    VkPhysicalDeviceExtendedDynamicStateFeaturesEXT* p);
template <>
void ConvertOutStructToVulkanSC<VkPhysicalDeviceTexelBufferAlignmentFeaturesEXT>(
    VkPhysicalDeviceTexelBufferAlignmentFeaturesEXT* p);
template <>
void ConvertOutStructToVulkanSC<VkPhysicalDeviceRobustness2FeaturesKHR>(VkPhysicalDeviceRobustness2FeaturesKHR* p);
template <>
void ConvertOutStructToVulkanSC<VkPhysicalDeviceRobustness2PropertiesKHR>(VkPhysicalDeviceRobustness2PropertiesKHR* p);
template <>
void ConvertOutStructToVulkanSC<VkPhysicalDeviceCustomBorderColorPropertiesEXT>(VkPhysicalDeviceCustomBorderColorPropertiesEXT* p);
template <>
void ConvertOutStructToVulkanSC<VkPhysicalDeviceCustomBorderColorFeaturesEXT>(VkPhysicalDeviceCustomBorderColorFeaturesEXT* p);
template <>
void ConvertOutStructToVulkanSC<VkPhysicalDeviceYcbcr2Plane444FormatsFeaturesEXT>(
    VkPhysicalDeviceYcbcr2Plane444FormatsFeaturesEXT* p);
template <>
void ConvertOutStructToVulkanSC<VkPhysicalDevice4444FormatsFeaturesEXT>(VkPhysicalDevice4444FormatsFeaturesEXT* p);
template <>
void ConvertOutStructToVulkanSC<VkPhysicalDeviceVertexInputDynamicStateFeaturesEXT>(
    VkPhysicalDeviceVertexInputDynamicStateFeaturesEXT* p);
#ifdef VK_USE_PLATFORM_SCI
template <>
void ConvertOutStructToVulkanSC<VkPhysicalDeviceExternalSciSyncFeaturesNV>(VkPhysicalDeviceExternalSciSyncFeaturesNV* p);
template <>
void ConvertOutStructToVulkanSC<VkPhysicalDeviceExternalMemorySciBufFeaturesNV>(VkPhysicalDeviceExternalMemorySciBufFeaturesNV* p);
#endif  // VK_USE_PLATFORM_SCI
template <>
void ConvertOutStructToVulkanSC<VkPhysicalDeviceExtendedDynamicState2FeaturesEXT>(
    VkPhysicalDeviceExtendedDynamicState2FeaturesEXT* p);
template <>
void ConvertOutStructToVulkanSC<VkPhysicalDeviceColorWriteEnableFeaturesEXT>(VkPhysicalDeviceColorWriteEnableFeaturesEXT* p);
#ifdef VK_USE_PLATFORM_SCI
template <>
void ConvertOutStructToVulkanSC<VkPhysicalDeviceExternalSciSync2FeaturesNV>(VkPhysicalDeviceExternalSciSync2FeaturesNV* p);
#endif  // VK_USE_PLATFORM_SCI
#ifdef VK_USE_PLATFORM_SCREEN_QNX
template <>
void ConvertOutStructToVulkanSC<VkScreenBufferFormatPropertiesQNX>(VkScreenBufferFormatPropertiesQNX* p);
template <>
void ConvertOutStructToVulkanSC<VkPhysicalDeviceExternalMemoryScreenBufferFeaturesQNX>(
    VkPhysicalDeviceExternalMemoryScreenBufferFeaturesQNX* p);
#endif  // VK_USE_PLATFORM_SCREEN_QNX
template <>
void ConvertOutStructToVulkanSC<VkExtent3D>(VkExtent3D* p);
template <>
void ConvertOutStructToVulkanSC<VkPhysicalDeviceLimits>(VkPhysicalDeviceLimits* p);
template <>
void ConvertOutStructToVulkanSC<VkPhysicalDeviceSparseProperties>(VkPhysicalDeviceSparseProperties* p);
template <>
void ConvertOutStructToVulkanSC<VkMemoryType>(VkMemoryType* p);
template <>
void ConvertOutStructToVulkanSC<VkMemoryHeap>(VkMemoryHeap* p);
template <>
void ConvertOutStructToVulkanSC<VkExternalMemoryProperties>(VkExternalMemoryProperties* p);
template <>
void ConvertOutStructToVulkanSC<VkOffset2D>(VkOffset2D* p);
template <>
void ConvertOutStructToVulkanSC<VkDisplayModeParametersKHR>(VkDisplayModeParametersKHR* p);
template <>
void ConvertOutStructToVulkanSC<VkConformanceVersion>(VkConformanceVersion* p);
template <>
void ConvertOutStructToVulkanSC<VkDrmFormatModifierPropertiesEXT>(VkDrmFormatModifierPropertiesEXT* p);
template <>
void ConvertOutStructToVulkanSC<VkComponentMapping>(VkComponentMapping* p);
template <>
void ConvertOutStructChainToVulkanSC<VkPhysicalDeviceFeatures>(VkPhysicalDeviceFeatures* p);
template <>
void ConvertOutStructChainToVulkanSC<VkFormatProperties>(VkFormatProperties* p);
template <>
void ConvertOutStructChainToVulkanSC<VkImageFormatProperties>(VkImageFormatProperties* p);
template <>
void ConvertOutStructChainToVulkanSC<VkPhysicalDeviceProperties>(VkPhysicalDeviceProperties* p);
template <>
void ConvertOutStructChainToVulkanSC<VkQueueFamilyProperties>(VkQueueFamilyProperties* p);
template <>
void ConvertOutStructChainToVulkanSC<VkPhysicalDeviceMemoryProperties>(VkPhysicalDeviceMemoryProperties* p);
template <>
void ConvertOutStructChainToVulkanSC<VkExtensionProperties>(VkExtensionProperties* p);
template <>
void ConvertOutStructChainToVulkanSC<VkLayerProperties>(VkLayerProperties* p);
template <>
void ConvertOutStructChainToVulkanSC<VkMemoryRequirements>(VkMemoryRequirements* p);
template <>
void ConvertOutStructChainToVulkanSC<VkSubresourceLayout>(VkSubresourceLayout* p);
template <>
void ConvertOutStructChainToVulkanSC<VkExtent2D>(VkExtent2D* p);
template <>
void ConvertOutStructChainToVulkanSC<VkPhysicalDeviceGroupProperties>(VkPhysicalDeviceGroupProperties* p);
template <>
void ConvertOutStructChainToVulkanSC<VkMemoryRequirements2>(VkMemoryRequirements2* p);
template <>
void ConvertOutStructChainToVulkanSC<VkPhysicalDeviceFeatures2>(VkPhysicalDeviceFeatures2* p);
template <>
void ConvertOutStructChainToVulkanSC<VkPhysicalDeviceProperties2>(VkPhysicalDeviceProperties2* p);
template <>
void ConvertOutStructChainToVulkanSC<VkFormatProperties2>(VkFormatProperties2* p);
template <>
void ConvertOutStructChainToVulkanSC<VkImageFormatProperties2>(VkImageFormatProperties2* p);
template <>
void ConvertOutStructChainToVulkanSC<VkQueueFamilyProperties2>(VkQueueFamilyProperties2* p);
template <>
void ConvertOutStructChainToVulkanSC<VkPhysicalDeviceMemoryProperties2>(VkPhysicalDeviceMemoryProperties2* p);
template <>
void ConvertOutStructChainToVulkanSC<VkExternalBufferProperties>(VkExternalBufferProperties* p);
template <>
void ConvertOutStructChainToVulkanSC<VkExternalFenceProperties>(VkExternalFenceProperties* p);
template <>
void ConvertOutStructChainToVulkanSC<VkExternalSemaphoreProperties>(VkExternalSemaphoreProperties* p);
template <>
void ConvertOutStructChainToVulkanSC<VkDescriptorSetLayoutSupport>(VkDescriptorSetLayoutSupport* p);
template <>
void ConvertOutStructChainToVulkanSC<VkCommandPoolMemoryConsumption>(VkCommandPoolMemoryConsumption* p);
template <>
void ConvertOutStructChainToVulkanSC<VkFaultData>(VkFaultData* p);
template <>
void ConvertOutStructChainToVulkanSC<VkSurfaceCapabilitiesKHR>(VkSurfaceCapabilitiesKHR* p);
template <>
void ConvertOutStructChainToVulkanSC<VkSurfaceFormatKHR>(VkSurfaceFormatKHR* p);
template <>
void ConvertOutStructChainToVulkanSC<VkDeviceGroupPresentCapabilitiesKHR>(VkDeviceGroupPresentCapabilitiesKHR* p);
template <>
void ConvertOutStructChainToVulkanSC<VkRect2D>(VkRect2D* p);
template <>
void ConvertOutStructChainToVulkanSC<VkDisplayPropertiesKHR>(VkDisplayPropertiesKHR* p);
template <>
void ConvertOutStructChainToVulkanSC<VkDisplayPlanePropertiesKHR>(VkDisplayPlanePropertiesKHR* p);
template <>
void ConvertOutStructChainToVulkanSC<VkDisplayModePropertiesKHR>(VkDisplayModePropertiesKHR* p);
template <>
void ConvertOutStructChainToVulkanSC<VkDisplayPlaneCapabilitiesKHR>(VkDisplayPlaneCapabilitiesKHR* p);
template <>
void ConvertOutStructChainToVulkanSC<VkMemoryFdPropertiesKHR>(VkMemoryFdPropertiesKHR* p);
template <>
void ConvertOutStructChainToVulkanSC<VkPerformanceCounterKHR>(VkPerformanceCounterKHR* p);
template <>
void ConvertOutStructChainToVulkanSC<VkPerformanceCounterDescriptionKHR>(VkPerformanceCounterDescriptionKHR* p);
template <>
void ConvertOutStructChainToVulkanSC<VkSurfaceCapabilities2KHR>(VkSurfaceCapabilities2KHR* p);
template <>
void ConvertOutStructChainToVulkanSC<VkSurfaceFormat2KHR>(VkSurfaceFormat2KHR* p);
template <>
void ConvertOutStructChainToVulkanSC<VkDisplayProperties2KHR>(VkDisplayProperties2KHR* p);
template <>
void ConvertOutStructChainToVulkanSC<VkDisplayPlaneProperties2KHR>(VkDisplayPlaneProperties2KHR* p);
template <>
void ConvertOutStructChainToVulkanSC<VkDisplayModeProperties2KHR>(VkDisplayModeProperties2KHR* p);
template <>
void ConvertOutStructChainToVulkanSC<VkDisplayPlaneCapabilities2KHR>(VkDisplayPlaneCapabilities2KHR* p);
template <>
void ConvertOutStructChainToVulkanSC<VkPhysicalDeviceFragmentShadingRateKHR>(VkPhysicalDeviceFragmentShadingRateKHR* p);
template <>
void ConvertOutStructChainToVulkanSC<VkSurfaceCapabilities2EXT>(VkSurfaceCapabilities2EXT* p);
template <>
void ConvertOutStructChainToVulkanSC<VkMultisamplePropertiesEXT>(VkMultisamplePropertiesEXT* p);
template <>
void ConvertOutStructChainToVulkanSC<VkImageDrmFormatModifierPropertiesEXT>(VkImageDrmFormatModifierPropertiesEXT* p);
template <>
void ConvertOutStructChainToVulkanSC<VkMemoryHostPointerPropertiesEXT>(VkMemoryHostPointerPropertiesEXT* p);
#ifdef VK_USE_PLATFORM_SCI
template <>
void ConvertOutStructChainToVulkanSC<VkMemorySciBufPropertiesNV>(VkMemorySciBufPropertiesNV* p);
#endif  // VK_USE_PLATFORM_SCI
#ifdef VK_USE_PLATFORM_SCREEN_QNX
template <>
void ConvertOutStructChainToVulkanSC<VkScreenBufferPropertiesQNX>(VkScreenBufferPropertiesQNX* p);
#endif  // VK_USE_PLATFORM_SCREEN_QNX

}  // namespace vksc

// NOLINTEND
