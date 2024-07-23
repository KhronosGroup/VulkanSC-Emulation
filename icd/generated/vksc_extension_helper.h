// *** THIS FILE IS GENERATED - DO NOT EDIT ***
// See extension_helper_generator.py for modifications

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
    KHR_swapchain_mutable_format = 13,
    KHR_shader_terminate_invocation = 14,
    KHR_fragment_shading_rate = 15,
    KHR_object_refresh = 16,
    KHR_synchronization2 = 17,
    KHR_copy_commands2 = 18,
    EXT_depth_range_unrestricted = 19,
    NV_private_vendor_info = 20,
    EXT_texture_compression_astc_hdr = 21,
    EXT_astc_decode_mode = 22,
    EXT_direct_mode_display = 23,
    EXT_display_surface_counter = 24,
    EXT_display_control = 25,
    EXT_discard_rectangles = 26,
    EXT_conservative_rasterization = 27,
    EXT_depth_clip_enable = 28,
    EXT_swapchain_colorspace = 29,
    EXT_hdr_metadata = 30,
    EXT_external_memory_dma_buf = 31,
    EXT_queue_family_foreign = 32,
    EXT_debug_utils = 33,
    EXT_shader_stencil_export = 34,
    EXT_sample_locations = 35,
    EXT_blend_operation_advanced = 36,
    EXT_post_depth_coverage = 37,
    EXT_image_drm_format_modifier = 38,
    EXT_filter_cubic = 39,
    EXT_global_priority = 40,
    EXT_external_memory_host = 41,
    EXT_calibrated_timestamps = 42,
    EXT_vertex_attribute_divisor = 43,
    EXT_pci_bus_info = 44,
    EXT_subgroup_size_control = 45,
    EXT_shader_image_atomic_int64 = 46,
    EXT_memory_budget = 47,
    EXT_validation_features = 48,
    EXT_fragment_shader_interlock = 49,
    EXT_ycbcr_image_arrays = 50,
    EXT_headless_surface = 51,
    EXT_line_rasterization = 52,
    EXT_shader_atomic_float = 53,
    EXT_index_type_uint8 = 54,
    EXT_extended_dynamic_state = 55,
    EXT_shader_demote_to_helper_invocation = 56,
    EXT_texel_buffer_alignment = 57,
    EXT_robustness2 = 58,
    EXT_custom_border_color = 59,
    EXT_ycbcr_2plane_444_formats = 60,
    EXT_image_robustness = 61,
    EXT_4444_formats = 62,
    EXT_vertex_input_dynamic_state = 63,
#ifdef VK_USE_PLATFORM_SCI
    NV_external_sci_sync = 64,
    NV_external_memory_sci_buf = 65,
#endif  // VK_USE_PLATFORM_SCI
    EXT_extended_dynamic_state2 = 66,
    EXT_color_write_enable = 67,
    EXT_application_parameters = 68,
#ifdef VK_USE_PLATFORM_SCI
    NV_external_sci_sync2 = 69,
#endif  // VK_USE_PLATFORM_SCI
#ifdef VK_USE_PLATFORM_SCREEN_QNX
    QNX_external_memory_screen_buffer = 70,
#endif  // VK_USE_PLATFORM_SCREEN_QNX
    unknown = 71
};

using ExtensionMap = std::unordered_map<ExtensionNumber, uint32_t>;

const ExtensionMap& GetInstanceExtensionsMap();
const ExtensionMap& GetDeviceExtensionsMap();

ExtensionNumber GetExtensionNumber(const char* extension_name);
const char* GetExtensionName(ExtensionNumber extension_number);
}  // namespace vksc

// NOLINTEND
