// *** THIS FILE IS GENERATED - DO NOT EDIT ***
// See extension_helper_generator.py for modifications

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

enum class ExtensionNumber {
    KHR_surface = 0,
    KHR_swapchain = 1,
    KHR_display = 2,
    KHR_display_swapchain = 3,
    KHR_external_memory_fd = 4,
    KHR_external_semaphore_fd = 5,
    KHR_incremental_present = 6,
    KHR_shared_presentable_image = 7,
    KHR_external_fence_fd = 8,
    KHR_performance_query = 9,
    KHR_get_surface_capabilities2 = 10,
    KHR_get_display_properties2 = 11,
    KHR_shader_clock = 12,
    KHR_global_priority = 13,
    KHR_swapchain_mutable_format = 14,
    KHR_shader_terminate_invocation = 15,
    KHR_fragment_shading_rate = 16,
    KHR_object_refresh = 17,
    KHR_synchronization2 = 18,
    KHR_copy_commands2 = 19,
    KHR_vertex_attribute_divisor = 20,
    KHR_index_type_uint8 = 21,
    KHR_line_rasterization = 22,
    KHR_calibrated_timestamps = 23,
    EXT_depth_range_unrestricted = 24,
    NV_private_vendor_info = 25,
    EXT_texture_compression_astc_hdr = 26,
    EXT_astc_decode_mode = 27,
    EXT_direct_mode_display = 28,
    EXT_display_surface_counter = 29,
    EXT_display_control = 30,
    EXT_discard_rectangles = 31,
    EXT_conservative_rasterization = 32,
    EXT_depth_clip_enable = 33,
    EXT_swapchain_colorspace = 34,
    EXT_hdr_metadata = 35,
    EXT_external_memory_dma_buf = 36,
    EXT_queue_family_foreign = 37,
    EXT_debug_utils = 38,
    EXT_shader_stencil_export = 39,
    EXT_sample_locations = 40,
    EXT_blend_operation_advanced = 41,
    EXT_post_depth_coverage = 42,
    EXT_image_drm_format_modifier = 43,
    EXT_filter_cubic = 44,
    EXT_external_memory_host = 45,
    EXT_pci_bus_info = 46,
    EXT_subgroup_size_control = 47,
    EXT_shader_image_atomic_int64 = 48,
    EXT_memory_budget = 49,
    EXT_validation_features = 50,
    EXT_fragment_shader_interlock = 51,
    EXT_ycbcr_image_arrays = 52,
    EXT_headless_surface = 53,
    EXT_line_rasterization = 54,
    EXT_shader_atomic_float = 55,
    EXT_index_type_uint8 = 56,
    EXT_extended_dynamic_state = 57,
    EXT_shader_demote_to_helper_invocation = 58,
    EXT_texel_buffer_alignment = 59,
    EXT_robustness2 = 60,
    EXT_custom_border_color = 61,
    EXT_ycbcr_2plane_444_formats = 62,
    EXT_image_robustness = 63,
    EXT_4444_formats = 64,
#ifdef VK_USE_PLATFORM_WIN32_KHR
    NV_acquire_winrt_display = 65,
#endif  // VK_USE_PLATFORM_WIN32_KHR
    EXT_vertex_input_dynamic_state = 66,
#ifdef VK_USE_PLATFORM_SCI
    NV_external_sci_sync = 67,
    NV_external_memory_sci_buf = 68,
#endif  // VK_USE_PLATFORM_SCI
    EXT_extended_dynamic_state2 = 69,
    EXT_color_write_enable = 70,
    EXT_application_parameters = 71,
#ifdef VK_USE_PLATFORM_SCI
    NV_external_sci_sync2 = 72,
#endif  // VK_USE_PLATFORM_SCI
    EXT_layer_settings = 73,
#ifdef VK_USE_PLATFORM_SCREEN_QNX
    QNX_external_memory_screen_buffer = 74,
#endif  // VK_USE_PLATFORM_SCREEN_QNX
    unknown = 75
};

using ExtensionMap = std::unordered_map<ExtensionNumber, uint32_t>;

const ExtensionMap& GetInstanceExtensionsMap();
const ExtensionMap& GetDeviceExtensionsMap();

ExtensionNumber GetExtensionNumber(const char* extension_name);
const char* GetExtensionName(ExtensionNumber extension_number);
}  // namespace vksc

// NOLINTEND
