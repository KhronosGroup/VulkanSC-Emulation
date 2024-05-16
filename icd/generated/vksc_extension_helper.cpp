// *** THIS FILE IS GENERATED - DO NOT EDIT ***
// See extension_helper_generator.py for modifications

/*
 * Copyright (c) 2024 The Khronos Group Inc.
 * Copyright (c) 2024 RasterGrid Kft.
 *
 * SPDX-License-Identifier: Apache-2.0
 */
// NOLINTBEGIN

#include "vksc_extension_helper.h"

namespace vksc {

const ExtensionMap& GetInstanceExtensionsMap() {
    static const ExtensionMap ext_map = {
        {VK_KHR_SURFACE_EXTENSION_NAME, VK_KHR_SURFACE_SPEC_VERSION},
        {VK_KHR_DISPLAY_EXTENSION_NAME, VK_KHR_DISPLAY_SPEC_VERSION},
        {VK_KHR_GET_SURFACE_CAPABILITIES_2_EXTENSION_NAME, VK_KHR_GET_SURFACE_CAPABILITIES_2_SPEC_VERSION},
        {VK_KHR_GET_DISPLAY_PROPERTIES_2_EXTENSION_NAME, VK_KHR_GET_DISPLAY_PROPERTIES_2_SPEC_VERSION},
        {VK_EXT_DIRECT_MODE_DISPLAY_EXTENSION_NAME, VK_EXT_DIRECT_MODE_DISPLAY_SPEC_VERSION},
        {VK_EXT_DISPLAY_SURFACE_COUNTER_EXTENSION_NAME, VK_EXT_DISPLAY_SURFACE_COUNTER_SPEC_VERSION},
        {VK_EXT_SWAPCHAIN_COLOR_SPACE_EXTENSION_NAME, VK_EXT_SWAPCHAIN_COLOR_SPACE_SPEC_VERSION},
        {VK_EXT_DEBUG_UTILS_EXTENSION_NAME, VK_EXT_DEBUG_UTILS_SPEC_VERSION},
        {VK_EXT_VALIDATION_FEATURES_EXTENSION_NAME, VK_EXT_VALIDATION_FEATURES_SPEC_VERSION},
        {VK_EXT_HEADLESS_SURFACE_EXTENSION_NAME, VK_EXT_HEADLESS_SURFACE_SPEC_VERSION},
        {VK_EXT_APPLICATION_PARAMETERS_EXTENSION_NAME, VK_EXT_APPLICATION_PARAMETERS_SPEC_VERSION},
    };
    return ext_map;
}

const ExtensionMap& GetDeviceExtensionsMap() {
    static const ExtensionMap ext_map = {
        {VK_KHR_SWAPCHAIN_EXTENSION_NAME, VK_KHR_SWAPCHAIN_SPEC_VERSION},
        {VK_KHR_DISPLAY_SWAPCHAIN_EXTENSION_NAME, VK_KHR_DISPLAY_SWAPCHAIN_SPEC_VERSION},
        {VK_KHR_EXTERNAL_MEMORY_FD_EXTENSION_NAME, VK_KHR_EXTERNAL_MEMORY_FD_SPEC_VERSION},
        {VK_KHR_EXTERNAL_SEMAPHORE_FD_EXTENSION_NAME, VK_KHR_EXTERNAL_SEMAPHORE_FD_SPEC_VERSION},
        {VK_KHR_INCREMENTAL_PRESENT_EXTENSION_NAME, VK_KHR_INCREMENTAL_PRESENT_SPEC_VERSION},
        {VK_KHR_SHARED_PRESENTABLE_IMAGE_EXTENSION_NAME, VK_KHR_SHARED_PRESENTABLE_IMAGE_SPEC_VERSION},
        {VK_KHR_EXTERNAL_FENCE_FD_EXTENSION_NAME, VK_KHR_EXTERNAL_FENCE_FD_SPEC_VERSION},
        {VK_KHR_PERFORMANCE_QUERY_EXTENSION_NAME, VK_KHR_PERFORMANCE_QUERY_SPEC_VERSION},
        {VK_KHR_SHADER_CLOCK_EXTENSION_NAME, VK_KHR_SHADER_CLOCK_SPEC_VERSION},
        {VK_KHR_SWAPCHAIN_MUTABLE_FORMAT_EXTENSION_NAME, VK_KHR_SWAPCHAIN_MUTABLE_FORMAT_SPEC_VERSION},
        {VK_KHR_SHADER_TERMINATE_INVOCATION_EXTENSION_NAME, VK_KHR_SHADER_TERMINATE_INVOCATION_SPEC_VERSION},
        {VK_KHR_FRAGMENT_SHADING_RATE_EXTENSION_NAME, VK_KHR_FRAGMENT_SHADING_RATE_SPEC_VERSION},
        {VK_KHR_OBJECT_REFRESH_EXTENSION_NAME, VK_KHR_OBJECT_REFRESH_SPEC_VERSION},
        {VK_KHR_SYNCHRONIZATION_2_EXTENSION_NAME, VK_KHR_SYNCHRONIZATION_2_SPEC_VERSION},
        {VK_KHR_COPY_COMMANDS_2_EXTENSION_NAME, VK_KHR_COPY_COMMANDS_2_SPEC_VERSION},
        {VK_EXT_DEPTH_RANGE_UNRESTRICTED_EXTENSION_NAME, VK_EXT_DEPTH_RANGE_UNRESTRICTED_SPEC_VERSION},
        {VK_NV_PRIVATE_VENDOR_INFO_EXTENSION_NAME, VK_NV_PRIVATE_VENDOR_INFO_SPEC_VERSION},
        {VK_EXT_TEXTURE_COMPRESSION_ASTC_HDR_EXTENSION_NAME, VK_EXT_TEXTURE_COMPRESSION_ASTC_HDR_SPEC_VERSION},
        {VK_EXT_ASTC_DECODE_MODE_EXTENSION_NAME, VK_EXT_ASTC_DECODE_MODE_SPEC_VERSION},
        {VK_EXT_DISPLAY_CONTROL_EXTENSION_NAME, VK_EXT_DISPLAY_CONTROL_SPEC_VERSION},
        {VK_EXT_DISCARD_RECTANGLES_EXTENSION_NAME, VK_EXT_DISCARD_RECTANGLES_SPEC_VERSION},
        {VK_EXT_CONSERVATIVE_RASTERIZATION_EXTENSION_NAME, VK_EXT_CONSERVATIVE_RASTERIZATION_SPEC_VERSION},
        {VK_EXT_DEPTH_CLIP_ENABLE_EXTENSION_NAME, VK_EXT_DEPTH_CLIP_ENABLE_SPEC_VERSION},
        {VK_EXT_HDR_METADATA_EXTENSION_NAME, VK_EXT_HDR_METADATA_SPEC_VERSION},
        {VK_EXT_EXTERNAL_MEMORY_DMA_BUF_EXTENSION_NAME, VK_EXT_EXTERNAL_MEMORY_DMA_BUF_SPEC_VERSION},
        {VK_EXT_QUEUE_FAMILY_FOREIGN_EXTENSION_NAME, VK_EXT_QUEUE_FAMILY_FOREIGN_SPEC_VERSION},
        {VK_EXT_SHADER_STENCIL_EXPORT_EXTENSION_NAME, VK_EXT_SHADER_STENCIL_EXPORT_SPEC_VERSION},
        {VK_EXT_SAMPLE_LOCATIONS_EXTENSION_NAME, VK_EXT_SAMPLE_LOCATIONS_SPEC_VERSION},
        {VK_EXT_BLEND_OPERATION_ADVANCED_EXTENSION_NAME, VK_EXT_BLEND_OPERATION_ADVANCED_SPEC_VERSION},
        {VK_EXT_POST_DEPTH_COVERAGE_EXTENSION_NAME, VK_EXT_POST_DEPTH_COVERAGE_SPEC_VERSION},
        {VK_EXT_IMAGE_DRM_FORMAT_MODIFIER_EXTENSION_NAME, VK_EXT_IMAGE_DRM_FORMAT_MODIFIER_SPEC_VERSION},
        {VK_EXT_FILTER_CUBIC_EXTENSION_NAME, VK_EXT_FILTER_CUBIC_SPEC_VERSION},
        {VK_EXT_GLOBAL_PRIORITY_EXTENSION_NAME, VK_EXT_GLOBAL_PRIORITY_SPEC_VERSION},
        {VK_EXT_EXTERNAL_MEMORY_HOST_EXTENSION_NAME, VK_EXT_EXTERNAL_MEMORY_HOST_SPEC_VERSION},
        {VK_EXT_CALIBRATED_TIMESTAMPS_EXTENSION_NAME, VK_EXT_CALIBRATED_TIMESTAMPS_SPEC_VERSION},
        {VK_EXT_VERTEX_ATTRIBUTE_DIVISOR_EXTENSION_NAME, VK_EXT_VERTEX_ATTRIBUTE_DIVISOR_SPEC_VERSION},
        {VK_EXT_PCI_BUS_INFO_EXTENSION_NAME, VK_EXT_PCI_BUS_INFO_SPEC_VERSION},
        {VK_EXT_SUBGROUP_SIZE_CONTROL_EXTENSION_NAME, VK_EXT_SUBGROUP_SIZE_CONTROL_SPEC_VERSION},
        {VK_EXT_SHADER_IMAGE_ATOMIC_INT64_EXTENSION_NAME, VK_EXT_SHADER_IMAGE_ATOMIC_INT64_SPEC_VERSION},
        {VK_EXT_MEMORY_BUDGET_EXTENSION_NAME, VK_EXT_MEMORY_BUDGET_SPEC_VERSION},
        {VK_EXT_FRAGMENT_SHADER_INTERLOCK_EXTENSION_NAME, VK_EXT_FRAGMENT_SHADER_INTERLOCK_SPEC_VERSION},
        {VK_EXT_YCBCR_IMAGE_ARRAYS_EXTENSION_NAME, VK_EXT_YCBCR_IMAGE_ARRAYS_SPEC_VERSION},
        {VK_EXT_LINE_RASTERIZATION_EXTENSION_NAME, VK_EXT_LINE_RASTERIZATION_SPEC_VERSION},
        {VK_EXT_SHADER_ATOMIC_FLOAT_EXTENSION_NAME, VK_EXT_SHADER_ATOMIC_FLOAT_SPEC_VERSION},
        {VK_EXT_INDEX_TYPE_UINT8_EXTENSION_NAME, VK_EXT_INDEX_TYPE_UINT8_SPEC_VERSION},
        {VK_EXT_EXTENDED_DYNAMIC_STATE_EXTENSION_NAME, VK_EXT_EXTENDED_DYNAMIC_STATE_SPEC_VERSION},
        {VK_EXT_SHADER_DEMOTE_TO_HELPER_INVOCATION_EXTENSION_NAME, VK_EXT_SHADER_DEMOTE_TO_HELPER_INVOCATION_SPEC_VERSION},
        {VK_EXT_TEXEL_BUFFER_ALIGNMENT_EXTENSION_NAME, VK_EXT_TEXEL_BUFFER_ALIGNMENT_SPEC_VERSION},
        {VK_EXT_ROBUSTNESS_2_EXTENSION_NAME, VK_EXT_ROBUSTNESS_2_SPEC_VERSION},
        {VK_EXT_CUSTOM_BORDER_COLOR_EXTENSION_NAME, VK_EXT_CUSTOM_BORDER_COLOR_SPEC_VERSION},
        {VK_EXT_YCBCR_2PLANE_444_FORMATS_EXTENSION_NAME, VK_EXT_YCBCR_2PLANE_444_FORMATS_SPEC_VERSION},
        {VK_EXT_IMAGE_ROBUSTNESS_EXTENSION_NAME, VK_EXT_IMAGE_ROBUSTNESS_SPEC_VERSION},
        {VK_EXT_4444_FORMATS_EXTENSION_NAME, VK_EXT_4444_FORMATS_SPEC_VERSION},
        {VK_EXT_VERTEX_INPUT_DYNAMIC_STATE_EXTENSION_NAME, VK_EXT_VERTEX_INPUT_DYNAMIC_STATE_SPEC_VERSION},
#ifdef VK_USE_PLATFORM_SCI
        {VK_NV_EXTERNAL_SCI_SYNC_EXTENSION_NAME, VK_NV_EXTERNAL_SCI_SYNC_SPEC_VERSION},
        {VK_NV_EXTERNAL_MEMORY_SCI_BUF_EXTENSION_NAME, VK_NV_EXTERNAL_MEMORY_SCI_BUF_SPEC_VERSION},
#endif  // VK_USE_PLATFORM_SCI
        {VK_EXT_EXTENDED_DYNAMIC_STATE_2_EXTENSION_NAME, VK_EXT_EXTENDED_DYNAMIC_STATE_2_SPEC_VERSION},
        {VK_EXT_COLOR_WRITE_ENABLE_EXTENSION_NAME, VK_EXT_COLOR_WRITE_ENABLE_SPEC_VERSION},
#ifdef VK_USE_PLATFORM_SCI
        {VK_NV_EXTERNAL_SCI_SYNC_2_EXTENSION_NAME, VK_NV_EXTERNAL_SCI_SYNC_2_SPEC_VERSION},
#endif  // VK_USE_PLATFORM_SCI
#ifdef VK_USE_PLATFORM_SCREEN_QNX
        {VK_QNX_EXTERNAL_MEMORY_SCREEN_BUFFER_EXTENSION_NAME, VK_QNX_EXTERNAL_MEMORY_SCREEN_BUFFER_SPEC_VERSION},
#endif  // VK_USE_PLATFORM_SCREEN_QNX
    };
    return ext_map;
}

}  // namespace vksc

// NOLINTEND
