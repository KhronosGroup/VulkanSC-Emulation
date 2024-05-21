// *** THIS FILE IS GENERATED - DO NOT EDIT ***
// See output_struct_sanitizer_generator.py for modifications

/*
 * Copyright (c) 2024 The Khronos Group Inc.
 * Copyright (c) 2024 RasterGrid Kft.
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
// clang-format off
const VkFormatFeatureFlags AllVkFormatFeatureFlagBits = VK_FORMAT_FEATURE_SAMPLED_IMAGE_BIT|VK_FORMAT_FEATURE_STORAGE_IMAGE_BIT|VK_FORMAT_FEATURE_STORAGE_IMAGE_ATOMIC_BIT|VK_FORMAT_FEATURE_UNIFORM_TEXEL_BUFFER_BIT|VK_FORMAT_FEATURE_STORAGE_TEXEL_BUFFER_BIT|VK_FORMAT_FEATURE_STORAGE_TEXEL_BUFFER_ATOMIC_BIT|VK_FORMAT_FEATURE_VERTEX_BUFFER_BIT|VK_FORMAT_FEATURE_COLOR_ATTACHMENT_BIT|VK_FORMAT_FEATURE_COLOR_ATTACHMENT_BLEND_BIT|VK_FORMAT_FEATURE_DEPTH_STENCIL_ATTACHMENT_BIT|VK_FORMAT_FEATURE_BLIT_SRC_BIT|VK_FORMAT_FEATURE_BLIT_DST_BIT|VK_FORMAT_FEATURE_SAMPLED_IMAGE_FILTER_LINEAR_BIT|VK_FORMAT_FEATURE_TRANSFER_SRC_BIT|VK_FORMAT_FEATURE_TRANSFER_DST_BIT|VK_FORMAT_FEATURE_MIDPOINT_CHROMA_SAMPLES_BIT|VK_FORMAT_FEATURE_SAMPLED_IMAGE_YCBCR_CONVERSION_LINEAR_FILTER_BIT|VK_FORMAT_FEATURE_SAMPLED_IMAGE_YCBCR_CONVERSION_SEPARATE_RECONSTRUCTION_FILTER_BIT|VK_FORMAT_FEATURE_SAMPLED_IMAGE_YCBCR_CONVERSION_CHROMA_RECONSTRUCTION_EXPLICIT_BIT|VK_FORMAT_FEATURE_SAMPLED_IMAGE_YCBCR_CONVERSION_CHROMA_RECONSTRUCTION_EXPLICIT_FORCEABLE_BIT|VK_FORMAT_FEATURE_DISJOINT_BIT|VK_FORMAT_FEATURE_COSITED_CHROMA_SAMPLES_BIT|VK_FORMAT_FEATURE_SAMPLED_IMAGE_FILTER_MINMAX_BIT|VK_FORMAT_FEATURE_SAMPLED_IMAGE_FILTER_CUBIC_BIT_EXT|VK_FORMAT_FEATURE_FRAGMENT_SHADING_RATE_ATTACHMENT_BIT_KHR;
const VkSampleCountFlags AllVkSampleCountFlagBits = VK_SAMPLE_COUNT_1_BIT|VK_SAMPLE_COUNT_2_BIT|VK_SAMPLE_COUNT_4_BIT|VK_SAMPLE_COUNT_8_BIT|VK_SAMPLE_COUNT_16_BIT|VK_SAMPLE_COUNT_32_BIT|VK_SAMPLE_COUNT_64_BIT;
const VkQueueFlags AllVkQueueFlagBits = VK_QUEUE_GRAPHICS_BIT|VK_QUEUE_COMPUTE_BIT|VK_QUEUE_TRANSFER_BIT|VK_QUEUE_PROTECTED_BIT;
const VkExternalFenceHandleTypeFlags AllVkExternalFenceHandleTypeFlagBits = VK_EXTERNAL_FENCE_HANDLE_TYPE_OPAQUE_FD_BIT|VK_EXTERNAL_FENCE_HANDLE_TYPE_OPAQUE_WIN32_BIT|VK_EXTERNAL_FENCE_HANDLE_TYPE_OPAQUE_WIN32_KMT_BIT|VK_EXTERNAL_FENCE_HANDLE_TYPE_SYNC_FD_BIT|VK_EXTERNAL_FENCE_HANDLE_TYPE_SCI_SYNC_OBJ_BIT_NV|VK_EXTERNAL_FENCE_HANDLE_TYPE_SCI_SYNC_FENCE_BIT_NV;
const VkExternalFenceFeatureFlags AllVkExternalFenceFeatureFlagBits = VK_EXTERNAL_FENCE_FEATURE_EXPORTABLE_BIT|VK_EXTERNAL_FENCE_FEATURE_IMPORTABLE_BIT;
const VkExternalSemaphoreHandleTypeFlags AllVkExternalSemaphoreHandleTypeFlagBits = VK_EXTERNAL_SEMAPHORE_HANDLE_TYPE_OPAQUE_FD_BIT|VK_EXTERNAL_SEMAPHORE_HANDLE_TYPE_OPAQUE_WIN32_BIT|VK_EXTERNAL_SEMAPHORE_HANDLE_TYPE_OPAQUE_WIN32_KMT_BIT|VK_EXTERNAL_SEMAPHORE_HANDLE_TYPE_D3D12_FENCE_BIT|VK_EXTERNAL_SEMAPHORE_HANDLE_TYPE_SYNC_FD_BIT|VK_EXTERNAL_SEMAPHORE_HANDLE_TYPE_SCI_SYNC_OBJ_BIT_NV;
const VkExternalSemaphoreFeatureFlags AllVkExternalSemaphoreFeatureFlagBits = VK_EXTERNAL_SEMAPHORE_FEATURE_EXPORTABLE_BIT|VK_EXTERNAL_SEMAPHORE_FEATURE_IMPORTABLE_BIT;
const VkToolPurposeFlags AllVkToolPurposeFlagBits = VK_TOOL_PURPOSE_VALIDATION_BIT|VK_TOOL_PURPOSE_PROFILING_BIT|VK_TOOL_PURPOSE_TRACING_BIT|VK_TOOL_PURPOSE_ADDITIONAL_FEATURES_BIT|VK_TOOL_PURPOSE_MODIFYING_FEATURES_BIT;
const VkSurfaceTransformFlagsKHR AllVkSurfaceTransformFlagBitsKHR = VK_SURFACE_TRANSFORM_IDENTITY_BIT_KHR|VK_SURFACE_TRANSFORM_ROTATE_90_BIT_KHR|VK_SURFACE_TRANSFORM_ROTATE_180_BIT_KHR|VK_SURFACE_TRANSFORM_ROTATE_270_BIT_KHR|VK_SURFACE_TRANSFORM_HORIZONTAL_MIRROR_BIT_KHR|VK_SURFACE_TRANSFORM_HORIZONTAL_MIRROR_ROTATE_90_BIT_KHR|VK_SURFACE_TRANSFORM_HORIZONTAL_MIRROR_ROTATE_180_BIT_KHR|VK_SURFACE_TRANSFORM_HORIZONTAL_MIRROR_ROTATE_270_BIT_KHR|VK_SURFACE_TRANSFORM_INHERIT_BIT_KHR;
const VkCompositeAlphaFlagsKHR AllVkCompositeAlphaFlagBitsKHR = VK_COMPOSITE_ALPHA_OPAQUE_BIT_KHR|VK_COMPOSITE_ALPHA_PRE_MULTIPLIED_BIT_KHR|VK_COMPOSITE_ALPHA_POST_MULTIPLIED_BIT_KHR|VK_COMPOSITE_ALPHA_INHERIT_BIT_KHR;
const VkImageUsageFlags AllVkImageUsageFlagBits = VK_IMAGE_USAGE_TRANSFER_SRC_BIT|VK_IMAGE_USAGE_TRANSFER_DST_BIT|VK_IMAGE_USAGE_SAMPLED_BIT|VK_IMAGE_USAGE_STORAGE_BIT|VK_IMAGE_USAGE_COLOR_ATTACHMENT_BIT|VK_IMAGE_USAGE_DEPTH_STENCIL_ATTACHMENT_BIT|VK_IMAGE_USAGE_TRANSIENT_ATTACHMENT_BIT|VK_IMAGE_USAGE_INPUT_ATTACHMENT_BIT|VK_IMAGE_USAGE_FRAGMENT_SHADING_RATE_ATTACHMENT_BIT_KHR;
const VkDeviceGroupPresentModeFlagsKHR AllVkDeviceGroupPresentModeFlagBitsKHR = VK_DEVICE_GROUP_PRESENT_MODE_LOCAL_BIT_KHR|VK_DEVICE_GROUP_PRESENT_MODE_REMOTE_BIT_KHR|VK_DEVICE_GROUP_PRESENT_MODE_SUM_BIT_KHR|VK_DEVICE_GROUP_PRESENT_MODE_LOCAL_MULTI_DEVICE_BIT_KHR;
const VkDisplayPlaneAlphaFlagsKHR AllVkDisplayPlaneAlphaFlagBitsKHR = VK_DISPLAY_PLANE_ALPHA_OPAQUE_BIT_KHR|VK_DISPLAY_PLANE_ALPHA_GLOBAL_BIT_KHR|VK_DISPLAY_PLANE_ALPHA_PER_PIXEL_BIT_KHR|VK_DISPLAY_PLANE_ALPHA_PER_PIXEL_PREMULTIPLIED_BIT_KHR;
const VkPerformanceCounterDescriptionFlagsKHR AllVkPerformanceCounterDescriptionFlagBitsKHR = VK_PERFORMANCE_COUNTER_DESCRIPTION_PERFORMANCE_IMPACTING_BIT_KHR|VK_PERFORMANCE_COUNTER_DESCRIPTION_CONCURRENTLY_IMPACTED_BIT_KHR;
const VkPipelineStageFlags2 AllVkPipelineStageFlagBits2 = VK_PIPELINE_STAGE_2_NONE|VK_PIPELINE_STAGE_2_TOP_OF_PIPE_BIT|VK_PIPELINE_STAGE_2_DRAW_INDIRECT_BIT|VK_PIPELINE_STAGE_2_VERTEX_INPUT_BIT|VK_PIPELINE_STAGE_2_VERTEX_SHADER_BIT|VK_PIPELINE_STAGE_2_TESSELLATION_CONTROL_SHADER_BIT|VK_PIPELINE_STAGE_2_TESSELLATION_EVALUATION_SHADER_BIT|VK_PIPELINE_STAGE_2_GEOMETRY_SHADER_BIT|VK_PIPELINE_STAGE_2_FRAGMENT_SHADER_BIT|VK_PIPELINE_STAGE_2_EARLY_FRAGMENT_TESTS_BIT|VK_PIPELINE_STAGE_2_LATE_FRAGMENT_TESTS_BIT|VK_PIPELINE_STAGE_2_COLOR_ATTACHMENT_OUTPUT_BIT|VK_PIPELINE_STAGE_2_COMPUTE_SHADER_BIT|VK_PIPELINE_STAGE_2_ALL_TRANSFER_BIT|VK_PIPELINE_STAGE_2_BOTTOM_OF_PIPE_BIT|VK_PIPELINE_STAGE_2_HOST_BIT|VK_PIPELINE_STAGE_2_ALL_GRAPHICS_BIT|VK_PIPELINE_STAGE_2_ALL_COMMANDS_BIT|VK_PIPELINE_STAGE_2_COPY_BIT|VK_PIPELINE_STAGE_2_RESOLVE_BIT|VK_PIPELINE_STAGE_2_BLIT_BIT|VK_PIPELINE_STAGE_2_CLEAR_BIT|VK_PIPELINE_STAGE_2_INDEX_INPUT_BIT|VK_PIPELINE_STAGE_2_VERTEX_ATTRIBUTE_INPUT_BIT|VK_PIPELINE_STAGE_2_PRE_RASTERIZATION_SHADERS_BIT|VK_PIPELINE_STAGE_2_TRANSFORM_FEEDBACK_BIT_EXT|VK_PIPELINE_STAGE_2_CONDITIONAL_RENDERING_BIT_EXT|VK_PIPELINE_STAGE_2_COMMAND_PREPROCESS_BIT_NV|VK_PIPELINE_STAGE_2_FRAGMENT_SHADING_RATE_ATTACHMENT_BIT_KHR|VK_PIPELINE_STAGE_2_ACCELERATION_STRUCTURE_BUILD_BIT_KHR|VK_PIPELINE_STAGE_2_RAY_TRACING_SHADER_BIT_KHR|VK_PIPELINE_STAGE_2_FRAGMENT_DENSITY_PROCESS_BIT_EXT|VK_PIPELINE_STAGE_2_TASK_SHADER_BIT_EXT|VK_PIPELINE_STAGE_2_MESH_SHADER_BIT_EXT;
const VkSurfaceCounterFlagsEXT AllVkSurfaceCounterFlagBitsEXT = VK_SURFACE_COUNTER_VBLANK_BIT_EXT;
const VkShaderStageFlags AllVkShaderStageFlagBits = VK_SHADER_STAGE_VERTEX_BIT|VK_SHADER_STAGE_TESSELLATION_CONTROL_BIT|VK_SHADER_STAGE_TESSELLATION_EVALUATION_BIT|VK_SHADER_STAGE_GEOMETRY_BIT|VK_SHADER_STAGE_FRAGMENT_BIT|VK_SHADER_STAGE_COMPUTE_BIT|VK_SHADER_STAGE_ALL_GRAPHICS|VK_SHADER_STAGE_ALL;
const VkSubgroupFeatureFlags AllVkSubgroupFeatureFlagBits = VK_SUBGROUP_FEATURE_BASIC_BIT|VK_SUBGROUP_FEATURE_VOTE_BIT|VK_SUBGROUP_FEATURE_ARITHMETIC_BIT|VK_SUBGROUP_FEATURE_BALLOT_BIT|VK_SUBGROUP_FEATURE_SHUFFLE_BIT|VK_SUBGROUP_FEATURE_SHUFFLE_RELATIVE_BIT|VK_SUBGROUP_FEATURE_CLUSTERED_BIT|VK_SUBGROUP_FEATURE_QUAD_BIT;
const VkResolveModeFlags AllVkResolveModeFlagBits = VK_RESOLVE_MODE_NONE|VK_RESOLVE_MODE_SAMPLE_ZERO_BIT|VK_RESOLVE_MODE_AVERAGE_BIT|VK_RESOLVE_MODE_MIN_BIT|VK_RESOLVE_MODE_MAX_BIT;
const VkFormatFeatureFlags2 AllVkFormatFeatureFlagBits2 = VK_FORMAT_FEATURE_2_SAMPLED_IMAGE_BIT|VK_FORMAT_FEATURE_2_STORAGE_IMAGE_BIT|VK_FORMAT_FEATURE_2_STORAGE_IMAGE_ATOMIC_BIT|VK_FORMAT_FEATURE_2_UNIFORM_TEXEL_BUFFER_BIT|VK_FORMAT_FEATURE_2_STORAGE_TEXEL_BUFFER_BIT|VK_FORMAT_FEATURE_2_STORAGE_TEXEL_BUFFER_ATOMIC_BIT|VK_FORMAT_FEATURE_2_VERTEX_BUFFER_BIT|VK_FORMAT_FEATURE_2_COLOR_ATTACHMENT_BIT|VK_FORMAT_FEATURE_2_COLOR_ATTACHMENT_BLEND_BIT|VK_FORMAT_FEATURE_2_DEPTH_STENCIL_ATTACHMENT_BIT|VK_FORMAT_FEATURE_2_BLIT_SRC_BIT|VK_FORMAT_FEATURE_2_BLIT_DST_BIT|VK_FORMAT_FEATURE_2_SAMPLED_IMAGE_FILTER_LINEAR_BIT|VK_FORMAT_FEATURE_2_SAMPLED_IMAGE_FILTER_CUBIC_BIT|VK_FORMAT_FEATURE_2_TRANSFER_SRC_BIT|VK_FORMAT_FEATURE_2_TRANSFER_DST_BIT|VK_FORMAT_FEATURE_2_SAMPLED_IMAGE_FILTER_MINMAX_BIT|VK_FORMAT_FEATURE_2_MIDPOINT_CHROMA_SAMPLES_BIT|VK_FORMAT_FEATURE_2_SAMPLED_IMAGE_YCBCR_CONVERSION_LINEAR_FILTER_BIT|VK_FORMAT_FEATURE_2_SAMPLED_IMAGE_YCBCR_CONVERSION_SEPARATE_RECONSTRUCTION_FILTER_BIT|VK_FORMAT_FEATURE_2_SAMPLED_IMAGE_YCBCR_CONVERSION_CHROMA_RECONSTRUCTION_EXPLICIT_BIT|VK_FORMAT_FEATURE_2_SAMPLED_IMAGE_YCBCR_CONVERSION_CHROMA_RECONSTRUCTION_EXPLICIT_FORCEABLE_BIT|VK_FORMAT_FEATURE_2_DISJOINT_BIT|VK_FORMAT_FEATURE_2_COSITED_CHROMA_SAMPLES_BIT|VK_FORMAT_FEATURE_2_STORAGE_READ_WITHOUT_FORMAT_BIT|VK_FORMAT_FEATURE_2_STORAGE_WRITE_WITHOUT_FORMAT_BIT|VK_FORMAT_FEATURE_2_SAMPLED_IMAGE_DEPTH_COMPARISON_BIT|VK_FORMAT_FEATURE_2_FRAGMENT_SHADING_RATE_ATTACHMENT_BIT_KHR;
const VkMemoryPropertyFlags AllVkMemoryPropertyFlagBits = VK_MEMORY_PROPERTY_DEVICE_LOCAL_BIT|VK_MEMORY_PROPERTY_HOST_VISIBLE_BIT|VK_MEMORY_PROPERTY_HOST_COHERENT_BIT|VK_MEMORY_PROPERTY_HOST_CACHED_BIT|VK_MEMORY_PROPERTY_LAZILY_ALLOCATED_BIT|VK_MEMORY_PROPERTY_PROTECTED_BIT;
const VkMemoryHeapFlags AllVkMemoryHeapFlagBits = VK_MEMORY_HEAP_DEVICE_LOCAL_BIT|VK_MEMORY_HEAP_MULTI_INSTANCE_BIT|VK_MEMORY_HEAP_SEU_SAFE_BIT;
const VkExternalMemoryFeatureFlags AllVkExternalMemoryFeatureFlagBits = VK_EXTERNAL_MEMORY_FEATURE_DEDICATED_ONLY_BIT|VK_EXTERNAL_MEMORY_FEATURE_EXPORTABLE_BIT|VK_EXTERNAL_MEMORY_FEATURE_IMPORTABLE_BIT;
const VkExternalMemoryHandleTypeFlags AllVkExternalMemoryHandleTypeFlagBits = VK_EXTERNAL_MEMORY_HANDLE_TYPE_OPAQUE_FD_BIT|VK_EXTERNAL_MEMORY_HANDLE_TYPE_OPAQUE_WIN32_BIT|VK_EXTERNAL_MEMORY_HANDLE_TYPE_OPAQUE_WIN32_KMT_BIT|VK_EXTERNAL_MEMORY_HANDLE_TYPE_D3D11_TEXTURE_BIT|VK_EXTERNAL_MEMORY_HANDLE_TYPE_D3D11_TEXTURE_KMT_BIT|VK_EXTERNAL_MEMORY_HANDLE_TYPE_D3D12_HEAP_BIT|VK_EXTERNAL_MEMORY_HANDLE_TYPE_D3D12_RESOURCE_BIT|VK_EXTERNAL_MEMORY_HANDLE_TYPE_DMA_BUF_BIT_EXT|VK_EXTERNAL_MEMORY_HANDLE_TYPE_HOST_ALLOCATION_BIT_EXT|VK_EXTERNAL_MEMORY_HANDLE_TYPE_HOST_MAPPED_FOREIGN_MEMORY_BIT_EXT|VK_EXTERNAL_MEMORY_HANDLE_TYPE_SCI_BUF_BIT_NV|VK_EXTERNAL_MEMORY_HANDLE_TYPE_SCREEN_BUFFER_BIT_QNX;
// clang-format on
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
void ConvertOutStructToVulkanSC<VkPhysicalDeviceToolProperties>(VkPhysicalDeviceToolProperties* p);
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
void ConvertOutStructToVulkanSC<VkCheckpointData2NV>(VkCheckpointData2NV* p);
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
void ConvertOutStructToVulkanSC<VkPhysicalDeviceSubgroupProperties>(VkPhysicalDeviceSubgroupProperties* p);
template <>
void ConvertOutStructToVulkanSC<VkPhysicalDevice16BitStorageFeatures>(VkPhysicalDevice16BitStorageFeatures* p);
template <>
void ConvertOutStructToVulkanSC<VkMemoryDedicatedRequirements>(VkMemoryDedicatedRequirements* p);
template <>
void ConvertOutStructToVulkanSC<VkPhysicalDevicePointClippingProperties>(VkPhysicalDevicePointClippingProperties* p);
template <>
void ConvertOutStructToVulkanSC<VkPhysicalDeviceMultiviewFeatures>(VkPhysicalDeviceMultiviewFeatures* p);
template <>
void ConvertOutStructToVulkanSC<VkPhysicalDeviceMultiviewProperties>(VkPhysicalDeviceMultiviewProperties* p);
template <>
void ConvertOutStructToVulkanSC<VkPhysicalDeviceVariablePointersFeatures>(VkPhysicalDeviceVariablePointersFeatures* p);
template <>
void ConvertOutStructToVulkanSC<VkPhysicalDeviceProtectedMemoryFeatures>(VkPhysicalDeviceProtectedMemoryFeatures* p);
template <>
void ConvertOutStructToVulkanSC<VkPhysicalDeviceProtectedMemoryProperties>(VkPhysicalDeviceProtectedMemoryProperties* p);
template <>
void ConvertOutStructToVulkanSC<VkPhysicalDeviceSamplerYcbcrConversionFeatures>(VkPhysicalDeviceSamplerYcbcrConversionFeatures* p);
template <>
void ConvertOutStructToVulkanSC<VkSamplerYcbcrConversionImageFormatProperties>(VkSamplerYcbcrConversionImageFormatProperties* p);
template <>
void ConvertOutStructToVulkanSC<VkExternalImageFormatProperties>(VkExternalImageFormatProperties* p);
template <>
void ConvertOutStructToVulkanSC<VkPhysicalDeviceIDProperties>(VkPhysicalDeviceIDProperties* p);
template <>
void ConvertOutStructToVulkanSC<VkPhysicalDeviceMaintenance3Properties>(VkPhysicalDeviceMaintenance3Properties* p);
template <>
void ConvertOutStructToVulkanSC<VkPhysicalDeviceShaderDrawParametersFeatures>(VkPhysicalDeviceShaderDrawParametersFeatures* p);
template <>
void ConvertOutStructToVulkanSC<VkPhysicalDeviceVulkan11Features>(VkPhysicalDeviceVulkan11Features* p);
template <>
void ConvertOutStructToVulkanSC<VkPhysicalDeviceVulkan11Properties>(VkPhysicalDeviceVulkan11Properties* p);
template <>
void ConvertOutStructToVulkanSC<VkPhysicalDeviceVulkan12Features>(VkPhysicalDeviceVulkan12Features* p);
template <>
void ConvertOutStructToVulkanSC<VkPhysicalDeviceVulkan12Properties>(VkPhysicalDeviceVulkan12Properties* p);
template <>
void ConvertOutStructToVulkanSC<VkPhysicalDevice8BitStorageFeatures>(VkPhysicalDevice8BitStorageFeatures* p);
template <>
void ConvertOutStructToVulkanSC<VkPhysicalDeviceDriverProperties>(VkPhysicalDeviceDriverProperties* p);
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
void ConvertOutStructToVulkanSC<VkPhysicalDeviceDepthStencilResolveProperties>(VkPhysicalDeviceDepthStencilResolveProperties* p);
template <>
void ConvertOutStructToVulkanSC<VkPhysicalDeviceScalarBlockLayoutFeatures>(VkPhysicalDeviceScalarBlockLayoutFeatures* p);
template <>
void ConvertOutStructToVulkanSC<VkPhysicalDeviceSamplerFilterMinmaxProperties>(VkPhysicalDeviceSamplerFilterMinmaxProperties* p);
template <>
void ConvertOutStructToVulkanSC<VkPhysicalDeviceVulkanMemoryModelFeatures>(VkPhysicalDeviceVulkanMemoryModelFeatures* p);
template <>
void ConvertOutStructToVulkanSC<VkPhysicalDeviceImagelessFramebufferFeatures>(VkPhysicalDeviceImagelessFramebufferFeatures* p);
template <>
void ConvertOutStructToVulkanSC<VkPhysicalDeviceUniformBufferStandardLayoutFeatures>(
    VkPhysicalDeviceUniformBufferStandardLayoutFeatures* p);
template <>
void ConvertOutStructToVulkanSC<VkPhysicalDeviceShaderSubgroupExtendedTypesFeatures>(
    VkPhysicalDeviceShaderSubgroupExtendedTypesFeatures* p);
template <>
void ConvertOutStructToVulkanSC<VkPhysicalDeviceSeparateDepthStencilLayoutsFeatures>(
    VkPhysicalDeviceSeparateDepthStencilLayoutsFeatures* p);
template <>
void ConvertOutStructToVulkanSC<VkPhysicalDeviceHostQueryResetFeatures>(VkPhysicalDeviceHostQueryResetFeatures* p);
template <>
void ConvertOutStructToVulkanSC<VkPhysicalDeviceTimelineSemaphoreFeatures>(VkPhysicalDeviceTimelineSemaphoreFeatures* p);
template <>
void ConvertOutStructToVulkanSC<VkPhysicalDeviceTimelineSemaphoreProperties>(VkPhysicalDeviceTimelineSemaphoreProperties* p);
template <>
void ConvertOutStructToVulkanSC<VkPhysicalDeviceBufferDeviceAddressFeatures>(VkPhysicalDeviceBufferDeviceAddressFeatures* p);
template <>
void ConvertOutStructToVulkanSC<VkPhysicalDeviceVulkan13Features>(VkPhysicalDeviceVulkan13Features* p);
template <>
void ConvertOutStructToVulkanSC<VkPhysicalDeviceVulkan13Properties>(VkPhysicalDeviceVulkan13Properties* p);
template <>
void ConvertOutStructToVulkanSC<VkPhysicalDeviceShaderTerminateInvocationFeatures>(
    VkPhysicalDeviceShaderTerminateInvocationFeatures* p);
template <>
void ConvertOutStructToVulkanSC<VkPhysicalDeviceShaderDemoteToHelperInvocationFeatures>(
    VkPhysicalDeviceShaderDemoteToHelperInvocationFeatures* p);
template <>
void ConvertOutStructToVulkanSC<VkPhysicalDevicePrivateDataFeatures>(VkPhysicalDevicePrivateDataFeatures* p);
template <>
void ConvertOutStructToVulkanSC<VkPhysicalDevicePipelineCreationCacheControlFeatures>(
    VkPhysicalDevicePipelineCreationCacheControlFeatures* p);
template <>
void ConvertOutStructToVulkanSC<VkPhysicalDeviceSynchronization2Features>(VkPhysicalDeviceSynchronization2Features* p);
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
void ConvertOutStructToVulkanSC<VkPhysicalDeviceTextureCompressionASTCHDRFeatures>(
    VkPhysicalDeviceTextureCompressionASTCHDRFeatures* p);
template <>
void ConvertOutStructToVulkanSC<VkPhysicalDeviceDynamicRenderingFeatures>(VkPhysicalDeviceDynamicRenderingFeatures* p);
template <>
void ConvertOutStructToVulkanSC<VkPhysicalDeviceShaderIntegerDotProductFeatures>(
    VkPhysicalDeviceShaderIntegerDotProductFeatures* p);
template <>
void ConvertOutStructToVulkanSC<VkPhysicalDeviceShaderIntegerDotProductProperties>(
    VkPhysicalDeviceShaderIntegerDotProductProperties* p);
template <>
void ConvertOutStructToVulkanSC<VkPhysicalDeviceTexelBufferAlignmentProperties>(VkPhysicalDeviceTexelBufferAlignmentProperties* p);
template <>
void ConvertOutStructToVulkanSC<VkFormatProperties3>(VkFormatProperties3* p);
template <>
void ConvertOutStructToVulkanSC<VkPhysicalDeviceMaintenance4Features>(VkPhysicalDeviceMaintenance4Features* p);
template <>
void ConvertOutStructToVulkanSC<VkPhysicalDeviceMaintenance4Properties>(VkPhysicalDeviceMaintenance4Properties* p);
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
void ConvertOutStructToVulkanSC<VkQueueFamilyCheckpointProperties2NV>(VkQueueFamilyCheckpointProperties2NV* p);
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
void ConvertOutStructToVulkanSC<VkDrmFormatModifierPropertiesList2EXT>(VkDrmFormatModifierPropertiesList2EXT* p);
template <>
void ConvertOutStructToVulkanSC<VkFilterCubicImageViewImageFormatPropertiesEXT>(VkFilterCubicImageViewImageFormatPropertiesEXT* p);
template <>
void ConvertOutStructToVulkanSC<VkPhysicalDeviceExternalMemoryHostPropertiesEXT>(
    VkPhysicalDeviceExternalMemoryHostPropertiesEXT* p);
template <>
void ConvertOutStructToVulkanSC<VkPhysicalDeviceVertexAttributeDivisorPropertiesEXT>(
    VkPhysicalDeviceVertexAttributeDivisorPropertiesEXT* p);
template <>
void ConvertOutStructToVulkanSC<VkPhysicalDeviceVertexAttributeDivisorFeaturesKHR>(
    VkPhysicalDeviceVertexAttributeDivisorFeaturesKHR* p);
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
void ConvertOutStructToVulkanSC<VkPhysicalDeviceLineRasterizationFeaturesKHR>(VkPhysicalDeviceLineRasterizationFeaturesKHR* p);
template <>
void ConvertOutStructToVulkanSC<VkPhysicalDeviceLineRasterizationPropertiesKHR>(VkPhysicalDeviceLineRasterizationPropertiesKHR* p);
template <>
void ConvertOutStructToVulkanSC<VkPhysicalDeviceShaderAtomicFloatFeaturesEXT>(VkPhysicalDeviceShaderAtomicFloatFeaturesEXT* p);
template <>
void ConvertOutStructToVulkanSC<VkPhysicalDeviceIndexTypeUint8FeaturesKHR>(VkPhysicalDeviceIndexTypeUint8FeaturesKHR* p);
template <>
void ConvertOutStructToVulkanSC<VkPhysicalDeviceExtendedDynamicStateFeaturesEXT>(
    VkPhysicalDeviceExtendedDynamicStateFeaturesEXT* p);
template <>
void ConvertOutStructToVulkanSC<VkPhysicalDeviceTexelBufferAlignmentFeaturesEXT>(
    VkPhysicalDeviceTexelBufferAlignmentFeaturesEXT* p);
template <>
void ConvertOutStructToVulkanSC<VkPhysicalDeviceRobustness2FeaturesEXT>(VkPhysicalDeviceRobustness2FeaturesEXT* p);
template <>
void ConvertOutStructToVulkanSC<VkPhysicalDeviceRobustness2PropertiesEXT>(VkPhysicalDeviceRobustness2PropertiesEXT* p);
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
void ConvertOutStructToVulkanSC<VkDrmFormatModifierProperties2EXT>(VkDrmFormatModifierProperties2EXT* p);
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
void ConvertOutStructChainToVulkanSC<VkPhysicalDeviceToolProperties>(VkPhysicalDeviceToolProperties* p);
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
void ConvertOutStructChainToVulkanSC<VkCheckpointData2NV>(VkCheckpointData2NV* p);
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
