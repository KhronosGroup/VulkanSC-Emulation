// *** THIS FILE IS GENERATED - DO NOT EDIT ***
// See extension_helper_generator.py for modifications

/*
 * Copyright (c) 2024-2025 The Khronos Group Inc.
 * Copyright (c) 2024-2025 RasterGrid Kft.
 *
 * SPDX-License-Identifier: Apache-2.0
 */
// NOLINTBEGIN

#include "vksc_extension_helper.h"

namespace vksc {

const ExtensionMap& GetInstanceExtensionsMap() {
    static const ExtensionMap ext_map = {
        {ExtensionNumber::KHR_surface, VK_KHR_SURFACE_SPEC_VERSION},
        {ExtensionNumber::KHR_display, VK_KHR_DISPLAY_SPEC_VERSION},
        {ExtensionNumber::KHR_get_surface_capabilities2, VK_KHR_GET_SURFACE_CAPABILITIES_2_SPEC_VERSION},
        {ExtensionNumber::KHR_get_display_properties2, VK_KHR_GET_DISPLAY_PROPERTIES_2_SPEC_VERSION},
        {ExtensionNumber::EXT_direct_mode_display, VK_EXT_DIRECT_MODE_DISPLAY_SPEC_VERSION},
        {ExtensionNumber::EXT_display_surface_counter, VK_EXT_DISPLAY_SURFACE_COUNTER_SPEC_VERSION},
        {ExtensionNumber::EXT_swapchain_colorspace, VK_EXT_SWAPCHAIN_COLOR_SPACE_SPEC_VERSION},
        {ExtensionNumber::EXT_debug_utils, VK_EXT_DEBUG_UTILS_SPEC_VERSION},
        {ExtensionNumber::EXT_validation_features, VK_EXT_VALIDATION_FEATURES_SPEC_VERSION},
        {ExtensionNumber::EXT_headless_surface, VK_EXT_HEADLESS_SURFACE_SPEC_VERSION},
        {ExtensionNumber::EXT_application_parameters, VK_EXT_APPLICATION_PARAMETERS_SPEC_VERSION},
        {ExtensionNumber::EXT_layer_settings, VK_EXT_LAYER_SETTINGS_SPEC_VERSION},
    };
    return ext_map;
}

const ExtensionMap& GetDeviceExtensionsMap() {
    static const ExtensionMap ext_map = {
        {ExtensionNumber::KHR_swapchain, VK_KHR_SWAPCHAIN_SPEC_VERSION},
        {ExtensionNumber::KHR_display_swapchain, VK_KHR_DISPLAY_SWAPCHAIN_SPEC_VERSION},
        {ExtensionNumber::KHR_external_memory_fd, VK_KHR_EXTERNAL_MEMORY_FD_SPEC_VERSION},
        {ExtensionNumber::KHR_external_semaphore_fd, VK_KHR_EXTERNAL_SEMAPHORE_FD_SPEC_VERSION},
        {ExtensionNumber::KHR_incremental_present, VK_KHR_INCREMENTAL_PRESENT_SPEC_VERSION},
        {ExtensionNumber::KHR_shared_presentable_image, VK_KHR_SHARED_PRESENTABLE_IMAGE_SPEC_VERSION},
        {ExtensionNumber::KHR_external_fence_fd, VK_KHR_EXTERNAL_FENCE_FD_SPEC_VERSION},
        {ExtensionNumber::KHR_performance_query, VK_KHR_PERFORMANCE_QUERY_SPEC_VERSION},
        {ExtensionNumber::KHR_shader_clock, VK_KHR_SHADER_CLOCK_SPEC_VERSION},
        {ExtensionNumber::KHR_global_priority, VK_KHR_GLOBAL_PRIORITY_SPEC_VERSION},
        {ExtensionNumber::KHR_swapchain_mutable_format, VK_KHR_SWAPCHAIN_MUTABLE_FORMAT_SPEC_VERSION},
        {ExtensionNumber::KHR_shader_terminate_invocation, VK_KHR_SHADER_TERMINATE_INVOCATION_SPEC_VERSION},
        {ExtensionNumber::KHR_fragment_shading_rate, VK_KHR_FRAGMENT_SHADING_RATE_SPEC_VERSION},
        {ExtensionNumber::KHR_object_refresh, VK_KHR_OBJECT_REFRESH_SPEC_VERSION},
        {ExtensionNumber::KHR_synchronization2, VK_KHR_SYNCHRONIZATION_2_SPEC_VERSION},
        {ExtensionNumber::KHR_copy_commands2, VK_KHR_COPY_COMMANDS_2_SPEC_VERSION},
        {ExtensionNumber::KHR_vertex_attribute_divisor, VK_KHR_VERTEX_ATTRIBUTE_DIVISOR_SPEC_VERSION},
        {ExtensionNumber::KHR_index_type_uint8, VK_KHR_INDEX_TYPE_UINT8_SPEC_VERSION},
        {ExtensionNumber::KHR_line_rasterization, VK_KHR_LINE_RASTERIZATION_SPEC_VERSION},
        {ExtensionNumber::KHR_calibrated_timestamps, VK_KHR_CALIBRATED_TIMESTAMPS_SPEC_VERSION},
        {ExtensionNumber::EXT_depth_range_unrestricted, VK_EXT_DEPTH_RANGE_UNRESTRICTED_SPEC_VERSION},
        {ExtensionNumber::NV_private_vendor_info, VK_NV_PRIVATE_VENDOR_INFO_SPEC_VERSION},
        {ExtensionNumber::EXT_texture_compression_astc_hdr, VK_EXT_TEXTURE_COMPRESSION_ASTC_HDR_SPEC_VERSION},
        {ExtensionNumber::EXT_astc_decode_mode, VK_EXT_ASTC_DECODE_MODE_SPEC_VERSION},
        {ExtensionNumber::EXT_display_control, VK_EXT_DISPLAY_CONTROL_SPEC_VERSION},
        {ExtensionNumber::EXT_discard_rectangles, VK_EXT_DISCARD_RECTANGLES_SPEC_VERSION},
        {ExtensionNumber::EXT_conservative_rasterization, VK_EXT_CONSERVATIVE_RASTERIZATION_SPEC_VERSION},
        {ExtensionNumber::EXT_depth_clip_enable, VK_EXT_DEPTH_CLIP_ENABLE_SPEC_VERSION},
        {ExtensionNumber::EXT_hdr_metadata, VK_EXT_HDR_METADATA_SPEC_VERSION},
        {ExtensionNumber::EXT_external_memory_dma_buf, VK_EXT_EXTERNAL_MEMORY_DMA_BUF_SPEC_VERSION},
        {ExtensionNumber::EXT_queue_family_foreign, VK_EXT_QUEUE_FAMILY_FOREIGN_SPEC_VERSION},
        {ExtensionNumber::EXT_shader_stencil_export, VK_EXT_SHADER_STENCIL_EXPORT_SPEC_VERSION},
        {ExtensionNumber::EXT_sample_locations, VK_EXT_SAMPLE_LOCATIONS_SPEC_VERSION},
        {ExtensionNumber::EXT_blend_operation_advanced, VK_EXT_BLEND_OPERATION_ADVANCED_SPEC_VERSION},
        {ExtensionNumber::EXT_post_depth_coverage, VK_EXT_POST_DEPTH_COVERAGE_SPEC_VERSION},
        {ExtensionNumber::EXT_image_drm_format_modifier, VK_EXT_IMAGE_DRM_FORMAT_MODIFIER_SPEC_VERSION},
        {ExtensionNumber::EXT_filter_cubic, VK_EXT_FILTER_CUBIC_SPEC_VERSION},
        {ExtensionNumber::EXT_external_memory_host, VK_EXT_EXTERNAL_MEMORY_HOST_SPEC_VERSION},
        {ExtensionNumber::EXT_pci_bus_info, VK_EXT_PCI_BUS_INFO_SPEC_VERSION},
        {ExtensionNumber::EXT_subgroup_size_control, VK_EXT_SUBGROUP_SIZE_CONTROL_SPEC_VERSION},
        {ExtensionNumber::EXT_shader_image_atomic_int64, VK_EXT_SHADER_IMAGE_ATOMIC_INT64_SPEC_VERSION},
        {ExtensionNumber::EXT_memory_budget, VK_EXT_MEMORY_BUDGET_SPEC_VERSION},
        {ExtensionNumber::EXT_fragment_shader_interlock, VK_EXT_FRAGMENT_SHADER_INTERLOCK_SPEC_VERSION},
        {ExtensionNumber::EXT_ycbcr_image_arrays, VK_EXT_YCBCR_IMAGE_ARRAYS_SPEC_VERSION},
        {ExtensionNumber::EXT_line_rasterization, VK_EXT_LINE_RASTERIZATION_SPEC_VERSION},
        {ExtensionNumber::EXT_shader_atomic_float, VK_EXT_SHADER_ATOMIC_FLOAT_SPEC_VERSION},
        {ExtensionNumber::EXT_index_type_uint8, VK_EXT_INDEX_TYPE_UINT8_SPEC_VERSION},
        {ExtensionNumber::EXT_extended_dynamic_state, VK_EXT_EXTENDED_DYNAMIC_STATE_SPEC_VERSION},
        {ExtensionNumber::EXT_shader_demote_to_helper_invocation, VK_EXT_SHADER_DEMOTE_TO_HELPER_INVOCATION_SPEC_VERSION},
        {ExtensionNumber::EXT_texel_buffer_alignment, VK_EXT_TEXEL_BUFFER_ALIGNMENT_SPEC_VERSION},
        {ExtensionNumber::EXT_robustness2, VK_EXT_ROBUSTNESS_2_SPEC_VERSION},
        {ExtensionNumber::EXT_custom_border_color, VK_EXT_CUSTOM_BORDER_COLOR_SPEC_VERSION},
        {ExtensionNumber::EXT_ycbcr_2plane_444_formats, VK_EXT_YCBCR_2PLANE_444_FORMATS_SPEC_VERSION},
        {ExtensionNumber::EXT_image_robustness, VK_EXT_IMAGE_ROBUSTNESS_SPEC_VERSION},
        {ExtensionNumber::EXT_4444_formats, VK_EXT_4444_FORMATS_SPEC_VERSION},
#ifdef VK_USE_PLATFORM_WIN32_KHR
        {ExtensionNumber::NV_acquire_winrt_display, VK_NV_ACQUIRE_WINRT_DISPLAY_SPEC_VERSION},
#endif  // VK_USE_PLATFORM_WIN32_KHR
        {ExtensionNumber::EXT_vertex_input_dynamic_state, VK_EXT_VERTEX_INPUT_DYNAMIC_STATE_SPEC_VERSION},
#ifdef VK_USE_PLATFORM_SCI
        {ExtensionNumber::NV_external_sci_sync, VK_NV_EXTERNAL_SCI_SYNC_SPEC_VERSION},
        {ExtensionNumber::NV_external_memory_sci_buf, VK_NV_EXTERNAL_MEMORY_SCI_BUF_SPEC_VERSION},
#endif  // VK_USE_PLATFORM_SCI
        {ExtensionNumber::EXT_extended_dynamic_state2, VK_EXT_EXTENDED_DYNAMIC_STATE_2_SPEC_VERSION},
        {ExtensionNumber::EXT_color_write_enable, VK_EXT_COLOR_WRITE_ENABLE_SPEC_VERSION},
#ifdef VK_USE_PLATFORM_SCI
        {ExtensionNumber::NV_external_sci_sync2, VK_NV_EXTERNAL_SCI_SYNC_2_SPEC_VERSION},
#endif  // VK_USE_PLATFORM_SCI
#ifdef VK_USE_PLATFORM_SCREEN_QNX
        {ExtensionNumber::QNX_external_memory_screen_buffer, VK_QNX_EXTERNAL_MEMORY_SCREEN_BUFFER_SPEC_VERSION},
#endif  // VK_USE_PLATFORM_SCREEN_QNX
    };
    return ext_map;
}

ExtensionNumber GetExtensionNumber(const char* extension_name) {
    static const std::unordered_map<std::string, ExtensionNumber> ext_map = {
        {"VK_KHR_surface", ExtensionNumber::KHR_surface},
        {"VK_KHR_swapchain", ExtensionNumber::KHR_swapchain},
        {"VK_KHR_display", ExtensionNumber::KHR_display},
        {"VK_KHR_display_swapchain", ExtensionNumber::KHR_display_swapchain},
        {"VK_KHR_external_memory_fd", ExtensionNumber::KHR_external_memory_fd},
        {"VK_KHR_external_semaphore_fd", ExtensionNumber::KHR_external_semaphore_fd},
        {"VK_KHR_incremental_present", ExtensionNumber::KHR_incremental_present},
        {"VK_KHR_shared_presentable_image", ExtensionNumber::KHR_shared_presentable_image},
        {"VK_KHR_external_fence_fd", ExtensionNumber::KHR_external_fence_fd},
        {"VK_KHR_performance_query", ExtensionNumber::KHR_performance_query},
        {"VK_KHR_get_surface_capabilities2", ExtensionNumber::KHR_get_surface_capabilities2},
        {"VK_KHR_get_display_properties2", ExtensionNumber::KHR_get_display_properties2},
        {"VK_KHR_shader_clock", ExtensionNumber::KHR_shader_clock},
        {"VK_KHR_global_priority", ExtensionNumber::KHR_global_priority},
        {"VK_KHR_swapchain_mutable_format", ExtensionNumber::KHR_swapchain_mutable_format},
        {"VK_KHR_shader_terminate_invocation", ExtensionNumber::KHR_shader_terminate_invocation},
        {"VK_KHR_fragment_shading_rate", ExtensionNumber::KHR_fragment_shading_rate},
        {"VK_KHR_object_refresh", ExtensionNumber::KHR_object_refresh},
        {"VK_KHR_synchronization2", ExtensionNumber::KHR_synchronization2},
        {"VK_KHR_copy_commands2", ExtensionNumber::KHR_copy_commands2},
        {"VK_KHR_vertex_attribute_divisor", ExtensionNumber::KHR_vertex_attribute_divisor},
        {"VK_KHR_index_type_uint8", ExtensionNumber::KHR_index_type_uint8},
        {"VK_KHR_line_rasterization", ExtensionNumber::KHR_line_rasterization},
        {"VK_KHR_calibrated_timestamps", ExtensionNumber::KHR_calibrated_timestamps},
        {"VK_EXT_depth_range_unrestricted", ExtensionNumber::EXT_depth_range_unrestricted},
        {"VK_NV_private_vendor_info", ExtensionNumber::NV_private_vendor_info},
        {"VK_EXT_texture_compression_astc_hdr", ExtensionNumber::EXT_texture_compression_astc_hdr},
        {"VK_EXT_astc_decode_mode", ExtensionNumber::EXT_astc_decode_mode},
        {"VK_EXT_direct_mode_display", ExtensionNumber::EXT_direct_mode_display},
        {"VK_EXT_display_surface_counter", ExtensionNumber::EXT_display_surface_counter},
        {"VK_EXT_display_control", ExtensionNumber::EXT_display_control},
        {"VK_EXT_discard_rectangles", ExtensionNumber::EXT_discard_rectangles},
        {"VK_EXT_conservative_rasterization", ExtensionNumber::EXT_conservative_rasterization},
        {"VK_EXT_depth_clip_enable", ExtensionNumber::EXT_depth_clip_enable},
        {"VK_EXT_swapchain_colorspace", ExtensionNumber::EXT_swapchain_colorspace},
        {"VK_EXT_hdr_metadata", ExtensionNumber::EXT_hdr_metadata},
        {"VK_EXT_external_memory_dma_buf", ExtensionNumber::EXT_external_memory_dma_buf},
        {"VK_EXT_queue_family_foreign", ExtensionNumber::EXT_queue_family_foreign},
        {"VK_EXT_debug_utils", ExtensionNumber::EXT_debug_utils},
        {"VK_EXT_shader_stencil_export", ExtensionNumber::EXT_shader_stencil_export},
        {"VK_EXT_sample_locations", ExtensionNumber::EXT_sample_locations},
        {"VK_EXT_blend_operation_advanced", ExtensionNumber::EXT_blend_operation_advanced},
        {"VK_EXT_post_depth_coverage", ExtensionNumber::EXT_post_depth_coverage},
        {"VK_EXT_image_drm_format_modifier", ExtensionNumber::EXT_image_drm_format_modifier},
        {"VK_EXT_filter_cubic", ExtensionNumber::EXT_filter_cubic},
        {"VK_EXT_external_memory_host", ExtensionNumber::EXT_external_memory_host},
        {"VK_EXT_pci_bus_info", ExtensionNumber::EXT_pci_bus_info},
        {"VK_EXT_subgroup_size_control", ExtensionNumber::EXT_subgroup_size_control},
        {"VK_EXT_shader_image_atomic_int64", ExtensionNumber::EXT_shader_image_atomic_int64},
        {"VK_EXT_memory_budget", ExtensionNumber::EXT_memory_budget},
        {"VK_EXT_validation_features", ExtensionNumber::EXT_validation_features},
        {"VK_EXT_fragment_shader_interlock", ExtensionNumber::EXT_fragment_shader_interlock},
        {"VK_EXT_ycbcr_image_arrays", ExtensionNumber::EXT_ycbcr_image_arrays},
        {"VK_EXT_headless_surface", ExtensionNumber::EXT_headless_surface},
        {"VK_EXT_line_rasterization", ExtensionNumber::EXT_line_rasterization},
        {"VK_EXT_shader_atomic_float", ExtensionNumber::EXT_shader_atomic_float},
        {"VK_EXT_index_type_uint8", ExtensionNumber::EXT_index_type_uint8},
        {"VK_EXT_extended_dynamic_state", ExtensionNumber::EXT_extended_dynamic_state},
        {"VK_EXT_shader_demote_to_helper_invocation", ExtensionNumber::EXT_shader_demote_to_helper_invocation},
        {"VK_EXT_texel_buffer_alignment", ExtensionNumber::EXT_texel_buffer_alignment},
        {"VK_EXT_robustness2", ExtensionNumber::EXT_robustness2},
        {"VK_EXT_custom_border_color", ExtensionNumber::EXT_custom_border_color},
        {"VK_EXT_ycbcr_2plane_444_formats", ExtensionNumber::EXT_ycbcr_2plane_444_formats},
        {"VK_EXT_image_robustness", ExtensionNumber::EXT_image_robustness},
        {"VK_EXT_4444_formats", ExtensionNumber::EXT_4444_formats},
#ifdef VK_USE_PLATFORM_WIN32_KHR
        {"VK_NV_acquire_winrt_display", ExtensionNumber::NV_acquire_winrt_display},
#endif  // VK_USE_PLATFORM_WIN32_KHR
        {"VK_EXT_vertex_input_dynamic_state", ExtensionNumber::EXT_vertex_input_dynamic_state},
#ifdef VK_USE_PLATFORM_SCI
        {"VK_NV_external_sci_sync", ExtensionNumber::NV_external_sci_sync},
        {"VK_NV_external_memory_sci_buf", ExtensionNumber::NV_external_memory_sci_buf},
#endif  // VK_USE_PLATFORM_SCI
        {"VK_EXT_extended_dynamic_state2", ExtensionNumber::EXT_extended_dynamic_state2},
        {"VK_EXT_color_write_enable", ExtensionNumber::EXT_color_write_enable},
        {"VK_EXT_application_parameters", ExtensionNumber::EXT_application_parameters},
#ifdef VK_USE_PLATFORM_SCI
        {"VK_NV_external_sci_sync2", ExtensionNumber::NV_external_sci_sync2},
#endif  // VK_USE_PLATFORM_SCI
        {"VK_EXT_layer_settings", ExtensionNumber::EXT_layer_settings},
#ifdef VK_USE_PLATFORM_SCREEN_QNX
        {"VK_QNX_external_memory_screen_buffer", ExtensionNumber::QNX_external_memory_screen_buffer},
#endif  // VK_USE_PLATFORM_SCREEN_QNX

    };
    const auto it = ext_map.find(extension_name);
    if (it != ext_map.cend()) {
        return it->second;
    } else {
        return ExtensionNumber::unknown;
    }
}

const char* GetExtensionName(ExtensionNumber extension_number) {
    switch (extension_number) {
        case ExtensionNumber::KHR_surface:
            return "VK_KHR_surface";
            break;
        case ExtensionNumber::KHR_swapchain:
            return "VK_KHR_swapchain";
            break;
        case ExtensionNumber::KHR_display:
            return "VK_KHR_display";
            break;
        case ExtensionNumber::KHR_display_swapchain:
            return "VK_KHR_display_swapchain";
            break;
        case ExtensionNumber::KHR_external_memory_fd:
            return "VK_KHR_external_memory_fd";
            break;
        case ExtensionNumber::KHR_external_semaphore_fd:
            return "VK_KHR_external_semaphore_fd";
            break;
        case ExtensionNumber::KHR_incremental_present:
            return "VK_KHR_incremental_present";
            break;
        case ExtensionNumber::KHR_shared_presentable_image:
            return "VK_KHR_shared_presentable_image";
            break;
        case ExtensionNumber::KHR_external_fence_fd:
            return "VK_KHR_external_fence_fd";
            break;
        case ExtensionNumber::KHR_performance_query:
            return "VK_KHR_performance_query";
            break;
        case ExtensionNumber::KHR_get_surface_capabilities2:
            return "VK_KHR_get_surface_capabilities2";
            break;
        case ExtensionNumber::KHR_get_display_properties2:
            return "VK_KHR_get_display_properties2";
            break;
        case ExtensionNumber::KHR_shader_clock:
            return "VK_KHR_shader_clock";
            break;
        case ExtensionNumber::KHR_global_priority:
            return "VK_KHR_global_priority";
            break;
        case ExtensionNumber::KHR_swapchain_mutable_format:
            return "VK_KHR_swapchain_mutable_format";
            break;
        case ExtensionNumber::KHR_shader_terminate_invocation:
            return "VK_KHR_shader_terminate_invocation";
            break;
        case ExtensionNumber::KHR_fragment_shading_rate:
            return "VK_KHR_fragment_shading_rate";
            break;
        case ExtensionNumber::KHR_object_refresh:
            return "VK_KHR_object_refresh";
            break;
        case ExtensionNumber::KHR_synchronization2:
            return "VK_KHR_synchronization2";
            break;
        case ExtensionNumber::KHR_copy_commands2:
            return "VK_KHR_copy_commands2";
            break;
        case ExtensionNumber::KHR_vertex_attribute_divisor:
            return "VK_KHR_vertex_attribute_divisor";
            break;
        case ExtensionNumber::KHR_index_type_uint8:
            return "VK_KHR_index_type_uint8";
            break;
        case ExtensionNumber::KHR_line_rasterization:
            return "VK_KHR_line_rasterization";
            break;
        case ExtensionNumber::KHR_calibrated_timestamps:
            return "VK_KHR_calibrated_timestamps";
            break;
        case ExtensionNumber::EXT_depth_range_unrestricted:
            return "VK_EXT_depth_range_unrestricted";
            break;
        case ExtensionNumber::NV_private_vendor_info:
            return "VK_NV_private_vendor_info";
            break;
        case ExtensionNumber::EXT_texture_compression_astc_hdr:
            return "VK_EXT_texture_compression_astc_hdr";
            break;
        case ExtensionNumber::EXT_astc_decode_mode:
            return "VK_EXT_astc_decode_mode";
            break;
        case ExtensionNumber::EXT_direct_mode_display:
            return "VK_EXT_direct_mode_display";
            break;
        case ExtensionNumber::EXT_display_surface_counter:
            return "VK_EXT_display_surface_counter";
            break;
        case ExtensionNumber::EXT_display_control:
            return "VK_EXT_display_control";
            break;
        case ExtensionNumber::EXT_discard_rectangles:
            return "VK_EXT_discard_rectangles";
            break;
        case ExtensionNumber::EXT_conservative_rasterization:
            return "VK_EXT_conservative_rasterization";
            break;
        case ExtensionNumber::EXT_depth_clip_enable:
            return "VK_EXT_depth_clip_enable";
            break;
        case ExtensionNumber::EXT_swapchain_colorspace:
            return "VK_EXT_swapchain_colorspace";
            break;
        case ExtensionNumber::EXT_hdr_metadata:
            return "VK_EXT_hdr_metadata";
            break;
        case ExtensionNumber::EXT_external_memory_dma_buf:
            return "VK_EXT_external_memory_dma_buf";
            break;
        case ExtensionNumber::EXT_queue_family_foreign:
            return "VK_EXT_queue_family_foreign";
            break;
        case ExtensionNumber::EXT_debug_utils:
            return "VK_EXT_debug_utils";
            break;
        case ExtensionNumber::EXT_shader_stencil_export:
            return "VK_EXT_shader_stencil_export";
            break;
        case ExtensionNumber::EXT_sample_locations:
            return "VK_EXT_sample_locations";
            break;
        case ExtensionNumber::EXT_blend_operation_advanced:
            return "VK_EXT_blend_operation_advanced";
            break;
        case ExtensionNumber::EXT_post_depth_coverage:
            return "VK_EXT_post_depth_coverage";
            break;
        case ExtensionNumber::EXT_image_drm_format_modifier:
            return "VK_EXT_image_drm_format_modifier";
            break;
        case ExtensionNumber::EXT_filter_cubic:
            return "VK_EXT_filter_cubic";
            break;
        case ExtensionNumber::EXT_external_memory_host:
            return "VK_EXT_external_memory_host";
            break;
        case ExtensionNumber::EXT_pci_bus_info:
            return "VK_EXT_pci_bus_info";
            break;
        case ExtensionNumber::EXT_subgroup_size_control:
            return "VK_EXT_subgroup_size_control";
            break;
        case ExtensionNumber::EXT_shader_image_atomic_int64:
            return "VK_EXT_shader_image_atomic_int64";
            break;
        case ExtensionNumber::EXT_memory_budget:
            return "VK_EXT_memory_budget";
            break;
        case ExtensionNumber::EXT_validation_features:
            return "VK_EXT_validation_features";
            break;
        case ExtensionNumber::EXT_fragment_shader_interlock:
            return "VK_EXT_fragment_shader_interlock";
            break;
        case ExtensionNumber::EXT_ycbcr_image_arrays:
            return "VK_EXT_ycbcr_image_arrays";
            break;
        case ExtensionNumber::EXT_headless_surface:
            return "VK_EXT_headless_surface";
            break;
        case ExtensionNumber::EXT_line_rasterization:
            return "VK_EXT_line_rasterization";
            break;
        case ExtensionNumber::EXT_shader_atomic_float:
            return "VK_EXT_shader_atomic_float";
            break;
        case ExtensionNumber::EXT_index_type_uint8:
            return "VK_EXT_index_type_uint8";
            break;
        case ExtensionNumber::EXT_extended_dynamic_state:
            return "VK_EXT_extended_dynamic_state";
            break;
        case ExtensionNumber::EXT_shader_demote_to_helper_invocation:
            return "VK_EXT_shader_demote_to_helper_invocation";
            break;
        case ExtensionNumber::EXT_texel_buffer_alignment:
            return "VK_EXT_texel_buffer_alignment";
            break;
        case ExtensionNumber::EXT_robustness2:
            return "VK_EXT_robustness2";
            break;
        case ExtensionNumber::EXT_custom_border_color:
            return "VK_EXT_custom_border_color";
            break;
        case ExtensionNumber::EXT_ycbcr_2plane_444_formats:
            return "VK_EXT_ycbcr_2plane_444_formats";
            break;
        case ExtensionNumber::EXT_image_robustness:
            return "VK_EXT_image_robustness";
            break;
        case ExtensionNumber::EXT_4444_formats:
            return "VK_EXT_4444_formats";
            break;
#ifdef VK_USE_PLATFORM_WIN32_KHR
        case ExtensionNumber::NV_acquire_winrt_display:
            return "VK_NV_acquire_winrt_display";
            break;
#endif  // VK_USE_PLATFORM_WIN32_KHR
        case ExtensionNumber::EXT_vertex_input_dynamic_state:
            return "VK_EXT_vertex_input_dynamic_state";
            break;
#ifdef VK_USE_PLATFORM_SCI
        case ExtensionNumber::NV_external_sci_sync:
            return "VK_NV_external_sci_sync";
            break;
        case ExtensionNumber::NV_external_memory_sci_buf:
            return "VK_NV_external_memory_sci_buf";
            break;
#endif  // VK_USE_PLATFORM_SCI
        case ExtensionNumber::EXT_extended_dynamic_state2:
            return "VK_EXT_extended_dynamic_state2";
            break;
        case ExtensionNumber::EXT_color_write_enable:
            return "VK_EXT_color_write_enable";
            break;
        case ExtensionNumber::EXT_application_parameters:
            return "VK_EXT_application_parameters";
            break;
#ifdef VK_USE_PLATFORM_SCI
        case ExtensionNumber::NV_external_sci_sync2:
            return "VK_NV_external_sci_sync2";
            break;
#endif  // VK_USE_PLATFORM_SCI
        case ExtensionNumber::EXT_layer_settings:
            return "VK_EXT_layer_settings";
            break;
#ifdef VK_USE_PLATFORM_SCREEN_QNX
        case ExtensionNumber::QNX_external_memory_screen_buffer:
            return "VK_QNX_external_memory_screen_buffer";
            break;
#endif  // VK_USE_PLATFORM_SCREEN_QNX
        default:
            return nullptr;
    }
}

}  // namespace vksc

// NOLINTEND
