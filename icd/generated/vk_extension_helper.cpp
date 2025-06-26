// *** THIS FILE IS GENERATED - DO NOT EDIT ***
// See extension_helper_generator.py for modifications

/*
 * Copyright (c) 2024-2025 The Khronos Group Inc.
 * Copyright (c) 2024-2025 RasterGrid Kft.
 *
 * SPDX-License-Identifier: Apache-2.0
 */
// NOLINTBEGIN

#include "vk_extension_helper.h"

namespace vk {

const ExtensionMap& GetInstanceExtensionsMap() {
    static const ExtensionMap ext_map = {
        {ExtensionNumber::KHR_surface, VK_KHR_SURFACE_SPEC_VERSION},
        {ExtensionNumber::KHR_display, VK_KHR_DISPLAY_SPEC_VERSION},
#ifdef VK_USE_PLATFORM_XLIB_KHR
        {ExtensionNumber::KHR_xlib_surface, VK_KHR_XLIB_SURFACE_SPEC_VERSION},
#endif  // VK_USE_PLATFORM_XLIB_KHR
#ifdef VK_USE_PLATFORM_XCB_KHR
        {ExtensionNumber::KHR_xcb_surface, VK_KHR_XCB_SURFACE_SPEC_VERSION},
#endif  // VK_USE_PLATFORM_XCB_KHR
#ifdef VK_USE_PLATFORM_WAYLAND_KHR
        {ExtensionNumber::KHR_wayland_surface, VK_KHR_WAYLAND_SURFACE_SPEC_VERSION},
#endif  // VK_USE_PLATFORM_WAYLAND_KHR
#ifdef VK_USE_PLATFORM_ANDROID_KHR
        {ExtensionNumber::KHR_android_surface, VK_KHR_ANDROID_SURFACE_SPEC_VERSION},
#endif  // VK_USE_PLATFORM_ANDROID_KHR
#ifdef VK_USE_PLATFORM_WIN32_KHR
        {ExtensionNumber::KHR_win32_surface, VK_KHR_WIN32_SURFACE_SPEC_VERSION},
#endif  // VK_USE_PLATFORM_WIN32_KHR
        {ExtensionNumber::KHR_get_physical_device_properties2, VK_KHR_GET_PHYSICAL_DEVICE_PROPERTIES_2_SPEC_VERSION},
        {ExtensionNumber::KHR_device_group_creation, VK_KHR_DEVICE_GROUP_CREATION_SPEC_VERSION},
        {ExtensionNumber::KHR_external_memory_capabilities, VK_KHR_EXTERNAL_MEMORY_CAPABILITIES_SPEC_VERSION},
        {ExtensionNumber::KHR_external_semaphore_capabilities, VK_KHR_EXTERNAL_SEMAPHORE_CAPABILITIES_SPEC_VERSION},
        {ExtensionNumber::KHR_external_fence_capabilities, VK_KHR_EXTERNAL_FENCE_CAPABILITIES_SPEC_VERSION},
        {ExtensionNumber::KHR_get_surface_capabilities2, VK_KHR_GET_SURFACE_CAPABILITIES_2_SPEC_VERSION},
        {ExtensionNumber::KHR_get_display_properties2, VK_KHR_GET_DISPLAY_PROPERTIES_2_SPEC_VERSION},
        {ExtensionNumber::KHR_surface_protected_capabilities, VK_KHR_SURFACE_PROTECTED_CAPABILITIES_SPEC_VERSION},
        {ExtensionNumber::KHR_portability_enumeration, VK_KHR_PORTABILITY_ENUMERATION_SPEC_VERSION},
        {ExtensionNumber::EXT_debug_report, VK_EXT_DEBUG_REPORT_SPEC_VERSION},
#ifdef VK_USE_PLATFORM_GGP
        {ExtensionNumber::GGP_stream_descriptor_surface, VK_GGP_STREAM_DESCRIPTOR_SURFACE_SPEC_VERSION},
#endif  // VK_USE_PLATFORM_GGP
        {ExtensionNumber::NV_external_memory_capabilities, VK_NV_EXTERNAL_MEMORY_CAPABILITIES_SPEC_VERSION},
        {ExtensionNumber::EXT_validation_flags, VK_EXT_VALIDATION_FLAGS_SPEC_VERSION},
#ifdef VK_USE_PLATFORM_VI_NN
        {ExtensionNumber::NN_vi_surface, VK_NN_VI_SURFACE_SPEC_VERSION},
#endif  // VK_USE_PLATFORM_VI_NN
        {ExtensionNumber::EXT_direct_mode_display, VK_EXT_DIRECT_MODE_DISPLAY_SPEC_VERSION},
#ifdef VK_USE_PLATFORM_XLIB_XRANDR_EXT
        {ExtensionNumber::EXT_acquire_xlib_display, VK_EXT_ACQUIRE_XLIB_DISPLAY_SPEC_VERSION},
#endif  // VK_USE_PLATFORM_XLIB_XRANDR_EXT
        {ExtensionNumber::EXT_display_surface_counter, VK_EXT_DISPLAY_SURFACE_COUNTER_SPEC_VERSION},
        {ExtensionNumber::EXT_swapchain_colorspace, VK_EXT_SWAPCHAIN_COLOR_SPACE_SPEC_VERSION},
#ifdef VK_USE_PLATFORM_IOS_MVK
        {ExtensionNumber::MVK_ios_surface, VK_MVK_IOS_SURFACE_SPEC_VERSION},
#endif  // VK_USE_PLATFORM_IOS_MVK
#ifdef VK_USE_PLATFORM_MACOS_MVK
        {ExtensionNumber::MVK_macos_surface, VK_MVK_MACOS_SURFACE_SPEC_VERSION},
#endif  // VK_USE_PLATFORM_MACOS_MVK
        {ExtensionNumber::EXT_debug_utils, VK_EXT_DEBUG_UTILS_SPEC_VERSION},
#ifdef VK_USE_PLATFORM_FUCHSIA
        {ExtensionNumber::FUCHSIA_imagepipe_surface, VK_FUCHSIA_IMAGEPIPE_SURFACE_SPEC_VERSION},
#endif  // VK_USE_PLATFORM_FUCHSIA
#ifdef VK_USE_PLATFORM_METAL_EXT
        {ExtensionNumber::EXT_metal_surface, VK_EXT_METAL_SURFACE_SPEC_VERSION},
#endif  // VK_USE_PLATFORM_METAL_EXT
        {ExtensionNumber::EXT_validation_features, VK_EXT_VALIDATION_FEATURES_SPEC_VERSION},
        {ExtensionNumber::EXT_headless_surface, VK_EXT_HEADLESS_SURFACE_SPEC_VERSION},
        {ExtensionNumber::EXT_surface_maintenance1, VK_EXT_SURFACE_MAINTENANCE_1_SPEC_VERSION},
        {ExtensionNumber::EXT_acquire_drm_display, VK_EXT_ACQUIRE_DRM_DISPLAY_SPEC_VERSION},
#ifdef VK_USE_PLATFORM_DIRECTFB_EXT
        {ExtensionNumber::EXT_directfb_surface, VK_EXT_DIRECTFB_SURFACE_SPEC_VERSION},
#endif  // VK_USE_PLATFORM_DIRECTFB_EXT
#ifdef VK_USE_PLATFORM_SCREEN_QNX
        {ExtensionNumber::QNX_screen_surface, VK_QNX_SCREEN_SURFACE_SPEC_VERSION},
#endif  // VK_USE_PLATFORM_SCREEN_QNX
        {ExtensionNumber::GOOGLE_surfaceless_query, VK_GOOGLE_SURFACELESS_QUERY_SPEC_VERSION},
        {ExtensionNumber::LUNARG_direct_driver_loading, VK_LUNARG_DIRECT_DRIVER_LOADING_SPEC_VERSION},
        {ExtensionNumber::EXT_layer_settings, VK_EXT_LAYER_SETTINGS_SPEC_VERSION},
        {ExtensionNumber::NV_display_stereo, VK_NV_DISPLAY_STEREO_SPEC_VERSION},
#ifdef VK_USE_PLATFORM_OHOS
        {ExtensionNumber::OHOS_surface, VK_OHOS_SURFACE_SPEC_VERSION},
#endif  // VK_USE_PLATFORM_OHOS
    };
    return ext_map;
}

const ExtensionMap& GetDeviceExtensionsMap() {
    static const ExtensionMap ext_map = {
        {ExtensionNumber::KHR_swapchain, VK_KHR_SWAPCHAIN_SPEC_VERSION},
        {ExtensionNumber::KHR_display_swapchain, VK_KHR_DISPLAY_SWAPCHAIN_SPEC_VERSION},
        {ExtensionNumber::KHR_sampler_mirror_clamp_to_edge, VK_KHR_SAMPLER_MIRROR_CLAMP_TO_EDGE_SPEC_VERSION},
        {ExtensionNumber::KHR_video_queue, VK_KHR_VIDEO_QUEUE_SPEC_VERSION},
        {ExtensionNumber::KHR_video_decode_queue, VK_KHR_VIDEO_DECODE_QUEUE_SPEC_VERSION},
        {ExtensionNumber::KHR_video_encode_h264, VK_KHR_VIDEO_ENCODE_H264_SPEC_VERSION},
        {ExtensionNumber::KHR_video_encode_h265, VK_KHR_VIDEO_ENCODE_H265_SPEC_VERSION},
        {ExtensionNumber::KHR_video_decode_h264, VK_KHR_VIDEO_DECODE_H264_SPEC_VERSION},
        {ExtensionNumber::KHR_dynamic_rendering, VK_KHR_DYNAMIC_RENDERING_SPEC_VERSION},
        {ExtensionNumber::KHR_multiview, VK_KHR_MULTIVIEW_SPEC_VERSION},
        {ExtensionNumber::KHR_device_group, VK_KHR_DEVICE_GROUP_SPEC_VERSION},
        {ExtensionNumber::KHR_shader_draw_parameters, VK_KHR_SHADER_DRAW_PARAMETERS_SPEC_VERSION},
        {ExtensionNumber::KHR_maintenance1, VK_KHR_MAINTENANCE_1_SPEC_VERSION},
        {ExtensionNumber::KHR_external_memory, VK_KHR_EXTERNAL_MEMORY_SPEC_VERSION},
#ifdef VK_USE_PLATFORM_WIN32_KHR
        {ExtensionNumber::KHR_external_memory_win32, VK_KHR_EXTERNAL_MEMORY_WIN32_SPEC_VERSION},
#endif  // VK_USE_PLATFORM_WIN32_KHR
        {ExtensionNumber::KHR_external_memory_fd, VK_KHR_EXTERNAL_MEMORY_FD_SPEC_VERSION},
#ifdef VK_USE_PLATFORM_WIN32_KHR
        {ExtensionNumber::KHR_win32_keyed_mutex, VK_KHR_WIN32_KEYED_MUTEX_SPEC_VERSION},
#endif  // VK_USE_PLATFORM_WIN32_KHR
        {ExtensionNumber::KHR_external_semaphore, VK_KHR_EXTERNAL_SEMAPHORE_SPEC_VERSION},
#ifdef VK_USE_PLATFORM_WIN32_KHR
        {ExtensionNumber::KHR_external_semaphore_win32, VK_KHR_EXTERNAL_SEMAPHORE_WIN32_SPEC_VERSION},
#endif  // VK_USE_PLATFORM_WIN32_KHR
        {ExtensionNumber::KHR_external_semaphore_fd, VK_KHR_EXTERNAL_SEMAPHORE_FD_SPEC_VERSION},
        {ExtensionNumber::KHR_push_descriptor, VK_KHR_PUSH_DESCRIPTOR_SPEC_VERSION},
        {ExtensionNumber::KHR_shader_float16_int8, VK_KHR_SHADER_FLOAT16_INT8_SPEC_VERSION},
        {ExtensionNumber::KHR_16bit_storage, VK_KHR_16BIT_STORAGE_SPEC_VERSION},
        {ExtensionNumber::KHR_incremental_present, VK_KHR_INCREMENTAL_PRESENT_SPEC_VERSION},
        {ExtensionNumber::KHR_descriptor_update_template, VK_KHR_DESCRIPTOR_UPDATE_TEMPLATE_SPEC_VERSION},
        {ExtensionNumber::KHR_imageless_framebuffer, VK_KHR_IMAGELESS_FRAMEBUFFER_SPEC_VERSION},
        {ExtensionNumber::KHR_create_renderpass2, VK_KHR_CREATE_RENDERPASS_2_SPEC_VERSION},
        {ExtensionNumber::KHR_shared_presentable_image, VK_KHR_SHARED_PRESENTABLE_IMAGE_SPEC_VERSION},
        {ExtensionNumber::KHR_external_fence, VK_KHR_EXTERNAL_FENCE_SPEC_VERSION},
#ifdef VK_USE_PLATFORM_WIN32_KHR
        {ExtensionNumber::KHR_external_fence_win32, VK_KHR_EXTERNAL_FENCE_WIN32_SPEC_VERSION},
#endif  // VK_USE_PLATFORM_WIN32_KHR
        {ExtensionNumber::KHR_external_fence_fd, VK_KHR_EXTERNAL_FENCE_FD_SPEC_VERSION},
        {ExtensionNumber::KHR_performance_query, VK_KHR_PERFORMANCE_QUERY_SPEC_VERSION},
        {ExtensionNumber::KHR_maintenance2, VK_KHR_MAINTENANCE_2_SPEC_VERSION},
        {ExtensionNumber::KHR_variable_pointers, VK_KHR_VARIABLE_POINTERS_SPEC_VERSION},
        {ExtensionNumber::KHR_dedicated_allocation, VK_KHR_DEDICATED_ALLOCATION_SPEC_VERSION},
        {ExtensionNumber::KHR_storage_buffer_storage_class, VK_KHR_STORAGE_BUFFER_STORAGE_CLASS_SPEC_VERSION},
        {ExtensionNumber::KHR_shader_bfloat16, VK_KHR_SHADER_BFLOAT16_SPEC_VERSION},
        {ExtensionNumber::KHR_relaxed_block_layout, VK_KHR_RELAXED_BLOCK_LAYOUT_SPEC_VERSION},
        {ExtensionNumber::KHR_get_memory_requirements2, VK_KHR_GET_MEMORY_REQUIREMENTS_2_SPEC_VERSION},
        {ExtensionNumber::KHR_image_format_list, VK_KHR_IMAGE_FORMAT_LIST_SPEC_VERSION},
        {ExtensionNumber::KHR_sampler_ycbcr_conversion, VK_KHR_SAMPLER_YCBCR_CONVERSION_SPEC_VERSION},
        {ExtensionNumber::KHR_bind_memory2, VK_KHR_BIND_MEMORY_2_SPEC_VERSION},
#ifdef VK_ENABLE_BETA_EXTENSIONS
        {ExtensionNumber::KHR_portability_subset, VK_KHR_PORTABILITY_SUBSET_SPEC_VERSION},
#endif  // VK_ENABLE_BETA_EXTENSIONS
        {ExtensionNumber::KHR_maintenance3, VK_KHR_MAINTENANCE_3_SPEC_VERSION},
        {ExtensionNumber::KHR_draw_indirect_count, VK_KHR_DRAW_INDIRECT_COUNT_SPEC_VERSION},
        {ExtensionNumber::KHR_shader_subgroup_extended_types, VK_KHR_SHADER_SUBGROUP_EXTENDED_TYPES_SPEC_VERSION},
        {ExtensionNumber::KHR_8bit_storage, VK_KHR_8BIT_STORAGE_SPEC_VERSION},
        {ExtensionNumber::KHR_shader_atomic_int64, VK_KHR_SHADER_ATOMIC_INT64_SPEC_VERSION},
        {ExtensionNumber::KHR_shader_clock, VK_KHR_SHADER_CLOCK_SPEC_VERSION},
        {ExtensionNumber::KHR_video_decode_h265, VK_KHR_VIDEO_DECODE_H265_SPEC_VERSION},
        {ExtensionNumber::KHR_global_priority, VK_KHR_GLOBAL_PRIORITY_SPEC_VERSION},
        {ExtensionNumber::KHR_driver_properties, VK_KHR_DRIVER_PROPERTIES_SPEC_VERSION},
        {ExtensionNumber::KHR_shader_float_controls, VK_KHR_SHADER_FLOAT_CONTROLS_SPEC_VERSION},
        {ExtensionNumber::KHR_depth_stencil_resolve, VK_KHR_DEPTH_STENCIL_RESOLVE_SPEC_VERSION},
        {ExtensionNumber::KHR_swapchain_mutable_format, VK_KHR_SWAPCHAIN_MUTABLE_FORMAT_SPEC_VERSION},
        {ExtensionNumber::KHR_timeline_semaphore, VK_KHR_TIMELINE_SEMAPHORE_SPEC_VERSION},
        {ExtensionNumber::KHR_vulkan_memory_model, VK_KHR_VULKAN_MEMORY_MODEL_SPEC_VERSION},
        {ExtensionNumber::KHR_shader_terminate_invocation, VK_KHR_SHADER_TERMINATE_INVOCATION_SPEC_VERSION},
        {ExtensionNumber::KHR_fragment_shading_rate, VK_KHR_FRAGMENT_SHADING_RATE_SPEC_VERSION},
        {ExtensionNumber::KHR_dynamic_rendering_local_read, VK_KHR_DYNAMIC_RENDERING_LOCAL_READ_SPEC_VERSION},
        {ExtensionNumber::KHR_shader_quad_control, VK_KHR_SHADER_QUAD_CONTROL_SPEC_VERSION},
        {ExtensionNumber::KHR_spirv_1_4, VK_KHR_SPIRV_1_4_SPEC_VERSION},
        {ExtensionNumber::KHR_separate_depth_stencil_layouts, VK_KHR_SEPARATE_DEPTH_STENCIL_LAYOUTS_SPEC_VERSION},
        {ExtensionNumber::KHR_present_wait, VK_KHR_PRESENT_WAIT_SPEC_VERSION},
        {ExtensionNumber::KHR_uniform_buffer_standard_layout, VK_KHR_UNIFORM_BUFFER_STANDARD_LAYOUT_SPEC_VERSION},
        {ExtensionNumber::KHR_buffer_device_address, VK_KHR_BUFFER_DEVICE_ADDRESS_SPEC_VERSION},
        {ExtensionNumber::KHR_deferred_host_operations, VK_KHR_DEFERRED_HOST_OPERATIONS_SPEC_VERSION},
        {ExtensionNumber::KHR_pipeline_executable_properties, VK_KHR_PIPELINE_EXECUTABLE_PROPERTIES_SPEC_VERSION},
        {ExtensionNumber::KHR_map_memory2, VK_KHR_MAP_MEMORY_2_SPEC_VERSION},
        {ExtensionNumber::KHR_shader_integer_dot_product, VK_KHR_SHADER_INTEGER_DOT_PRODUCT_SPEC_VERSION},
        {ExtensionNumber::KHR_pipeline_library, VK_KHR_PIPELINE_LIBRARY_SPEC_VERSION},
        {ExtensionNumber::KHR_shader_non_semantic_info, VK_KHR_SHADER_NON_SEMANTIC_INFO_SPEC_VERSION},
        {ExtensionNumber::KHR_present_id, VK_KHR_PRESENT_ID_SPEC_VERSION},
        {ExtensionNumber::KHR_video_encode_queue, VK_KHR_VIDEO_ENCODE_QUEUE_SPEC_VERSION},
        {ExtensionNumber::KHR_synchronization2, VK_KHR_SYNCHRONIZATION_2_SPEC_VERSION},
        {ExtensionNumber::KHR_fragment_shader_barycentric, VK_KHR_FRAGMENT_SHADER_BARYCENTRIC_SPEC_VERSION},
        {ExtensionNumber::KHR_shader_subgroup_uniform_control_flow, VK_KHR_SHADER_SUBGROUP_UNIFORM_CONTROL_FLOW_SPEC_VERSION},
        {ExtensionNumber::KHR_zero_initialize_workgroup_memory, VK_KHR_ZERO_INITIALIZE_WORKGROUP_MEMORY_SPEC_VERSION},
        {ExtensionNumber::KHR_workgroup_memory_explicit_layout, VK_KHR_WORKGROUP_MEMORY_EXPLICIT_LAYOUT_SPEC_VERSION},
        {ExtensionNumber::KHR_copy_commands2, VK_KHR_COPY_COMMANDS_2_SPEC_VERSION},
        {ExtensionNumber::KHR_format_feature_flags2, VK_KHR_FORMAT_FEATURE_FLAGS_2_SPEC_VERSION},
        {ExtensionNumber::KHR_ray_tracing_maintenance1, VK_KHR_RAY_TRACING_MAINTENANCE_1_SPEC_VERSION},
        {ExtensionNumber::KHR_maintenance4, VK_KHR_MAINTENANCE_4_SPEC_VERSION},
        {ExtensionNumber::KHR_shader_subgroup_rotate, VK_KHR_SHADER_SUBGROUP_ROTATE_SPEC_VERSION},
        {ExtensionNumber::KHR_shader_maximal_reconvergence, VK_KHR_SHADER_MAXIMAL_RECONVERGENCE_SPEC_VERSION},
        {ExtensionNumber::KHR_maintenance5, VK_KHR_MAINTENANCE_5_SPEC_VERSION},
        {ExtensionNumber::KHR_present_id2, VK_KHR_PRESENT_ID_2_SPEC_VERSION},
        {ExtensionNumber::KHR_present_wait2, VK_KHR_PRESENT_WAIT_2_SPEC_VERSION},
        {ExtensionNumber::KHR_ray_tracing_position_fetch, VK_KHR_RAY_TRACING_POSITION_FETCH_SPEC_VERSION},
        {ExtensionNumber::KHR_pipeline_binary, VK_KHR_PIPELINE_BINARY_SPEC_VERSION},
        {ExtensionNumber::KHR_cooperative_matrix, VK_KHR_COOPERATIVE_MATRIX_SPEC_VERSION},
        {ExtensionNumber::KHR_compute_shader_derivatives, VK_KHR_COMPUTE_SHADER_DERIVATIVES_SPEC_VERSION},
        {ExtensionNumber::KHR_video_decode_av1, VK_KHR_VIDEO_DECODE_AV1_SPEC_VERSION},
        {ExtensionNumber::KHR_video_encode_av1, VK_KHR_VIDEO_ENCODE_AV1_SPEC_VERSION},
        {ExtensionNumber::KHR_video_decode_vp9, VK_KHR_VIDEO_DECODE_VP9_SPEC_VERSION},
        {ExtensionNumber::KHR_video_maintenance1, VK_KHR_VIDEO_MAINTENANCE_1_SPEC_VERSION},
        {ExtensionNumber::KHR_vertex_attribute_divisor, VK_KHR_VERTEX_ATTRIBUTE_DIVISOR_SPEC_VERSION},
        {ExtensionNumber::KHR_load_store_op_none, VK_KHR_LOAD_STORE_OP_NONE_SPEC_VERSION},
        {ExtensionNumber::KHR_unified_image_layouts, VK_KHR_UNIFIED_IMAGE_LAYOUTS_SPEC_VERSION},
        {ExtensionNumber::KHR_shader_float_controls2, VK_KHR_SHADER_FLOAT_CONTROLS_2_SPEC_VERSION},
        {ExtensionNumber::KHR_index_type_uint8, VK_KHR_INDEX_TYPE_UINT8_SPEC_VERSION},
        {ExtensionNumber::KHR_line_rasterization, VK_KHR_LINE_RASTERIZATION_SPEC_VERSION},
        {ExtensionNumber::KHR_calibrated_timestamps, VK_KHR_CALIBRATED_TIMESTAMPS_SPEC_VERSION},
        {ExtensionNumber::KHR_shader_expect_assume, VK_KHR_SHADER_EXPECT_ASSUME_SPEC_VERSION},
        {ExtensionNumber::KHR_maintenance6, VK_KHR_MAINTENANCE_6_SPEC_VERSION},
        {ExtensionNumber::KHR_video_encode_quantization_map, VK_KHR_VIDEO_ENCODE_QUANTIZATION_MAP_SPEC_VERSION},
        {ExtensionNumber::KHR_shader_relaxed_extended_instruction, VK_KHR_SHADER_RELAXED_EXTENDED_INSTRUCTION_SPEC_VERSION},
        {ExtensionNumber::KHR_maintenance7, VK_KHR_MAINTENANCE_7_SPEC_VERSION},
        {ExtensionNumber::KHR_maintenance8, VK_KHR_MAINTENANCE_8_SPEC_VERSION},
        {ExtensionNumber::KHR_maintenance9, VK_KHR_MAINTENANCE_9_SPEC_VERSION},
        {ExtensionNumber::KHR_video_maintenance2, VK_KHR_VIDEO_MAINTENANCE_2_SPEC_VERSION},
        {ExtensionNumber::KHR_depth_clamp_zero_one, VK_KHR_DEPTH_CLAMP_ZERO_ONE_SPEC_VERSION},
        {ExtensionNumber::KHR_robustness2, VK_KHR_ROBUSTNESS_2_SPEC_VERSION},
        {ExtensionNumber::NV_glsl_shader, VK_NV_GLSL_SHADER_SPEC_VERSION},
        {ExtensionNumber::EXT_depth_range_unrestricted, VK_EXT_DEPTH_RANGE_UNRESTRICTED_SPEC_VERSION},
        {ExtensionNumber::IMG_filter_cubic, VK_IMG_FILTER_CUBIC_SPEC_VERSION},
        {ExtensionNumber::AMD_rasterization_order, VK_AMD_RASTERIZATION_ORDER_SPEC_VERSION},
        {ExtensionNumber::AMD_shader_trinary_minmax, VK_AMD_SHADER_TRINARY_MINMAX_SPEC_VERSION},
        {ExtensionNumber::AMD_shader_explicit_vertex_parameter, VK_AMD_SHADER_EXPLICIT_VERTEX_PARAMETER_SPEC_VERSION},
        {ExtensionNumber::EXT_debug_marker, VK_EXT_DEBUG_MARKER_SPEC_VERSION},
        {ExtensionNumber::AMD_gcn_shader, VK_AMD_GCN_SHADER_SPEC_VERSION},
        {ExtensionNumber::NV_dedicated_allocation, VK_NV_DEDICATED_ALLOCATION_SPEC_VERSION},
        {ExtensionNumber::EXT_transform_feedback, VK_EXT_TRANSFORM_FEEDBACK_SPEC_VERSION},
        {ExtensionNumber::NVX_binary_import, VK_NVX_BINARY_IMPORT_SPEC_VERSION},
        {ExtensionNumber::NVX_image_view_handle, VK_NVX_IMAGE_VIEW_HANDLE_SPEC_VERSION},
        {ExtensionNumber::AMD_draw_indirect_count, VK_AMD_DRAW_INDIRECT_COUNT_SPEC_VERSION},
        {ExtensionNumber::AMD_negative_viewport_height, VK_AMD_NEGATIVE_VIEWPORT_HEIGHT_SPEC_VERSION},
        {ExtensionNumber::AMD_gpu_shader_half_float, VK_AMD_GPU_SHADER_HALF_FLOAT_SPEC_VERSION},
        {ExtensionNumber::AMD_shader_ballot, VK_AMD_SHADER_BALLOT_SPEC_VERSION},
        {ExtensionNumber::AMD_texture_gather_bias_lod, VK_AMD_TEXTURE_GATHER_BIAS_LOD_SPEC_VERSION},
        {ExtensionNumber::AMD_shader_info, VK_AMD_SHADER_INFO_SPEC_VERSION},
        {ExtensionNumber::AMD_shader_image_load_store_lod, VK_AMD_SHADER_IMAGE_LOAD_STORE_LOD_SPEC_VERSION},
        {ExtensionNumber::NV_corner_sampled_image, VK_NV_CORNER_SAMPLED_IMAGE_SPEC_VERSION},
        {ExtensionNumber::IMG_format_pvrtc, VK_IMG_FORMAT_PVRTC_SPEC_VERSION},
        {ExtensionNumber::NV_external_memory, VK_NV_EXTERNAL_MEMORY_SPEC_VERSION},
#ifdef VK_USE_PLATFORM_WIN32_KHR
        {ExtensionNumber::NV_external_memory_win32, VK_NV_EXTERNAL_MEMORY_WIN32_SPEC_VERSION},
        {ExtensionNumber::NV_win32_keyed_mutex, VK_NV_WIN32_KEYED_MUTEX_SPEC_VERSION},
#endif  // VK_USE_PLATFORM_WIN32_KHR
        {ExtensionNumber::EXT_shader_subgroup_ballot, VK_EXT_SHADER_SUBGROUP_BALLOT_SPEC_VERSION},
        {ExtensionNumber::EXT_shader_subgroup_vote, VK_EXT_SHADER_SUBGROUP_VOTE_SPEC_VERSION},
        {ExtensionNumber::EXT_texture_compression_astc_hdr, VK_EXT_TEXTURE_COMPRESSION_ASTC_HDR_SPEC_VERSION},
        {ExtensionNumber::EXT_astc_decode_mode, VK_EXT_ASTC_DECODE_MODE_SPEC_VERSION},
        {ExtensionNumber::EXT_pipeline_robustness, VK_EXT_PIPELINE_ROBUSTNESS_SPEC_VERSION},
        {ExtensionNumber::EXT_conditional_rendering, VK_EXT_CONDITIONAL_RENDERING_SPEC_VERSION},
        {ExtensionNumber::NV_clip_space_w_scaling, VK_NV_CLIP_SPACE_W_SCALING_SPEC_VERSION},
        {ExtensionNumber::EXT_display_control, VK_EXT_DISPLAY_CONTROL_SPEC_VERSION},
        {ExtensionNumber::GOOGLE_display_timing, VK_GOOGLE_DISPLAY_TIMING_SPEC_VERSION},
        {ExtensionNumber::NV_sample_mask_override_coverage, VK_NV_SAMPLE_MASK_OVERRIDE_COVERAGE_SPEC_VERSION},
        {ExtensionNumber::NV_geometry_shader_passthrough, VK_NV_GEOMETRY_SHADER_PASSTHROUGH_SPEC_VERSION},
        {ExtensionNumber::NV_viewport_array2, VK_NV_VIEWPORT_ARRAY_2_SPEC_VERSION},
        {ExtensionNumber::NVX_multiview_per_view_attributes, VK_NVX_MULTIVIEW_PER_VIEW_ATTRIBUTES_SPEC_VERSION},
        {ExtensionNumber::NV_viewport_swizzle, VK_NV_VIEWPORT_SWIZZLE_SPEC_VERSION},
        {ExtensionNumber::EXT_discard_rectangles, VK_EXT_DISCARD_RECTANGLES_SPEC_VERSION},
        {ExtensionNumber::EXT_conservative_rasterization, VK_EXT_CONSERVATIVE_RASTERIZATION_SPEC_VERSION},
        {ExtensionNumber::EXT_depth_clip_enable, VK_EXT_DEPTH_CLIP_ENABLE_SPEC_VERSION},
        {ExtensionNumber::EXT_hdr_metadata, VK_EXT_HDR_METADATA_SPEC_VERSION},
        {ExtensionNumber::IMG_relaxed_line_rasterization, VK_IMG_RELAXED_LINE_RASTERIZATION_SPEC_VERSION},
        {ExtensionNumber::EXT_external_memory_dma_buf, VK_EXT_EXTERNAL_MEMORY_DMA_BUF_SPEC_VERSION},
        {ExtensionNumber::EXT_queue_family_foreign, VK_EXT_QUEUE_FAMILY_FOREIGN_SPEC_VERSION},
#ifdef VK_USE_PLATFORM_ANDROID_KHR
        {ExtensionNumber::ANDROID_external_memory_android_hardware_buffer,
         VK_ANDROID_EXTERNAL_MEMORY_ANDROID_HARDWARE_BUFFER_SPEC_VERSION},
#endif  // VK_USE_PLATFORM_ANDROID_KHR
        {ExtensionNumber::EXT_sampler_filter_minmax, VK_EXT_SAMPLER_FILTER_MINMAX_SPEC_VERSION},
        {ExtensionNumber::AMD_gpu_shader_int16, VK_AMD_GPU_SHADER_INT16_SPEC_VERSION},
#ifdef VK_ENABLE_BETA_EXTENSIONS
        {ExtensionNumber::AMDX_shader_enqueue, VK_AMDX_SHADER_ENQUEUE_SPEC_VERSION},
#endif  // VK_ENABLE_BETA_EXTENSIONS
        {ExtensionNumber::AMD_mixed_attachment_samples, VK_AMD_MIXED_ATTACHMENT_SAMPLES_SPEC_VERSION},
        {ExtensionNumber::AMD_shader_fragment_mask, VK_AMD_SHADER_FRAGMENT_MASK_SPEC_VERSION},
        {ExtensionNumber::EXT_inline_uniform_block, VK_EXT_INLINE_UNIFORM_BLOCK_SPEC_VERSION},
        {ExtensionNumber::EXT_shader_stencil_export, VK_EXT_SHADER_STENCIL_EXPORT_SPEC_VERSION},
        {ExtensionNumber::EXT_sample_locations, VK_EXT_SAMPLE_LOCATIONS_SPEC_VERSION},
        {ExtensionNumber::EXT_blend_operation_advanced, VK_EXT_BLEND_OPERATION_ADVANCED_SPEC_VERSION},
        {ExtensionNumber::NV_fragment_coverage_to_color, VK_NV_FRAGMENT_COVERAGE_TO_COLOR_SPEC_VERSION},
        {ExtensionNumber::NV_framebuffer_mixed_samples, VK_NV_FRAMEBUFFER_MIXED_SAMPLES_SPEC_VERSION},
        {ExtensionNumber::NV_fill_rectangle, VK_NV_FILL_RECTANGLE_SPEC_VERSION},
        {ExtensionNumber::NV_shader_sm_builtins, VK_NV_SHADER_SM_BUILTINS_SPEC_VERSION},
        {ExtensionNumber::EXT_post_depth_coverage, VK_EXT_POST_DEPTH_COVERAGE_SPEC_VERSION},
        {ExtensionNumber::EXT_image_drm_format_modifier, VK_EXT_IMAGE_DRM_FORMAT_MODIFIER_SPEC_VERSION},
        {ExtensionNumber::EXT_validation_cache, VK_EXT_VALIDATION_CACHE_SPEC_VERSION},
        {ExtensionNumber::EXT_descriptor_indexing, VK_EXT_DESCRIPTOR_INDEXING_SPEC_VERSION},
        {ExtensionNumber::EXT_shader_viewport_index_layer, VK_EXT_SHADER_VIEWPORT_INDEX_LAYER_SPEC_VERSION},
        {ExtensionNumber::NV_shading_rate_image, VK_NV_SHADING_RATE_IMAGE_SPEC_VERSION},
        {ExtensionNumber::NV_ray_tracing, VK_NV_RAY_TRACING_SPEC_VERSION},
        {ExtensionNumber::NV_representative_fragment_test, VK_NV_REPRESENTATIVE_FRAGMENT_TEST_SPEC_VERSION},
        {ExtensionNumber::EXT_filter_cubic, VK_EXT_FILTER_CUBIC_SPEC_VERSION},
        {ExtensionNumber::QCOM_render_pass_shader_resolve, VK_QCOM_RENDER_PASS_SHADER_RESOLVE_SPEC_VERSION},
        {ExtensionNumber::EXT_global_priority, VK_EXT_GLOBAL_PRIORITY_SPEC_VERSION},
        {ExtensionNumber::EXT_external_memory_host, VK_EXT_EXTERNAL_MEMORY_HOST_SPEC_VERSION},
        {ExtensionNumber::AMD_buffer_marker, VK_AMD_BUFFER_MARKER_SPEC_VERSION},
        {ExtensionNumber::AMD_pipeline_compiler_control, VK_AMD_PIPELINE_COMPILER_CONTROL_SPEC_VERSION},
        {ExtensionNumber::EXT_calibrated_timestamps, VK_EXT_CALIBRATED_TIMESTAMPS_SPEC_VERSION},
        {ExtensionNumber::AMD_shader_core_properties, VK_AMD_SHADER_CORE_PROPERTIES_SPEC_VERSION},
        {ExtensionNumber::AMD_memory_overallocation_behavior, VK_AMD_MEMORY_OVERALLOCATION_BEHAVIOR_SPEC_VERSION},
        {ExtensionNumber::EXT_vertex_attribute_divisor, VK_EXT_VERTEX_ATTRIBUTE_DIVISOR_SPEC_VERSION},
#ifdef VK_USE_PLATFORM_GGP
        {ExtensionNumber::GGP_frame_token, VK_GGP_FRAME_TOKEN_SPEC_VERSION},
#endif  // VK_USE_PLATFORM_GGP
        {ExtensionNumber::EXT_pipeline_creation_feedback, VK_EXT_PIPELINE_CREATION_FEEDBACK_SPEC_VERSION},
        {ExtensionNumber::NV_shader_subgroup_partitioned, VK_NV_SHADER_SUBGROUP_PARTITIONED_SPEC_VERSION},
        {ExtensionNumber::NV_compute_shader_derivatives, VK_NV_COMPUTE_SHADER_DERIVATIVES_SPEC_VERSION},
        {ExtensionNumber::NV_mesh_shader, VK_NV_MESH_SHADER_SPEC_VERSION},
        {ExtensionNumber::NV_fragment_shader_barycentric, VK_NV_FRAGMENT_SHADER_BARYCENTRIC_SPEC_VERSION},
        {ExtensionNumber::NV_shader_image_footprint, VK_NV_SHADER_IMAGE_FOOTPRINT_SPEC_VERSION},
        {ExtensionNumber::NV_scissor_exclusive, VK_NV_SCISSOR_EXCLUSIVE_SPEC_VERSION},
        {ExtensionNumber::NV_device_diagnostic_checkpoints, VK_NV_DEVICE_DIAGNOSTIC_CHECKPOINTS_SPEC_VERSION},
        {ExtensionNumber::INTEL_shader_integer_functions2, VK_INTEL_SHADER_INTEGER_FUNCTIONS_2_SPEC_VERSION},
        {ExtensionNumber::INTEL_performance_query, VK_INTEL_PERFORMANCE_QUERY_SPEC_VERSION},
        {ExtensionNumber::EXT_pci_bus_info, VK_EXT_PCI_BUS_INFO_SPEC_VERSION},
        {ExtensionNumber::AMD_display_native_hdr, VK_AMD_DISPLAY_NATIVE_HDR_SPEC_VERSION},
        {ExtensionNumber::EXT_fragment_density_map, VK_EXT_FRAGMENT_DENSITY_MAP_SPEC_VERSION},
        {ExtensionNumber::EXT_scalar_block_layout, VK_EXT_SCALAR_BLOCK_LAYOUT_SPEC_VERSION},
        {ExtensionNumber::GOOGLE_hlsl_functionality1, VK_GOOGLE_HLSL_FUNCTIONALITY_1_SPEC_VERSION},
        {ExtensionNumber::GOOGLE_decorate_string, VK_GOOGLE_DECORATE_STRING_SPEC_VERSION},
        {ExtensionNumber::EXT_subgroup_size_control, VK_EXT_SUBGROUP_SIZE_CONTROL_SPEC_VERSION},
        {ExtensionNumber::AMD_shader_core_properties2, VK_AMD_SHADER_CORE_PROPERTIES_2_SPEC_VERSION},
        {ExtensionNumber::AMD_device_coherent_memory, VK_AMD_DEVICE_COHERENT_MEMORY_SPEC_VERSION},
        {ExtensionNumber::EXT_shader_image_atomic_int64, VK_EXT_SHADER_IMAGE_ATOMIC_INT64_SPEC_VERSION},
        {ExtensionNumber::EXT_memory_budget, VK_EXT_MEMORY_BUDGET_SPEC_VERSION},
        {ExtensionNumber::EXT_memory_priority, VK_EXT_MEMORY_PRIORITY_SPEC_VERSION},
        {ExtensionNumber::NV_dedicated_allocation_image_aliasing, VK_NV_DEDICATED_ALLOCATION_IMAGE_ALIASING_SPEC_VERSION},
        {ExtensionNumber::EXT_buffer_device_address, VK_EXT_BUFFER_DEVICE_ADDRESS_SPEC_VERSION},
        {ExtensionNumber::EXT_tooling_info, VK_EXT_TOOLING_INFO_SPEC_VERSION},
        {ExtensionNumber::EXT_separate_stencil_usage, VK_EXT_SEPARATE_STENCIL_USAGE_SPEC_VERSION},
        {ExtensionNumber::NV_cooperative_matrix, VK_NV_COOPERATIVE_MATRIX_SPEC_VERSION},
        {ExtensionNumber::NV_coverage_reduction_mode, VK_NV_COVERAGE_REDUCTION_MODE_SPEC_VERSION},
        {ExtensionNumber::EXT_fragment_shader_interlock, VK_EXT_FRAGMENT_SHADER_INTERLOCK_SPEC_VERSION},
        {ExtensionNumber::EXT_ycbcr_image_arrays, VK_EXT_YCBCR_IMAGE_ARRAYS_SPEC_VERSION},
        {ExtensionNumber::EXT_provoking_vertex, VK_EXT_PROVOKING_VERTEX_SPEC_VERSION},
#ifdef VK_USE_PLATFORM_WIN32_KHR
        {ExtensionNumber::EXT_full_screen_exclusive, VK_EXT_FULL_SCREEN_EXCLUSIVE_SPEC_VERSION},
#endif  // VK_USE_PLATFORM_WIN32_KHR
        {ExtensionNumber::EXT_line_rasterization, VK_EXT_LINE_RASTERIZATION_SPEC_VERSION},
        {ExtensionNumber::EXT_shader_atomic_float, VK_EXT_SHADER_ATOMIC_FLOAT_SPEC_VERSION},
        {ExtensionNumber::EXT_host_query_reset, VK_EXT_HOST_QUERY_RESET_SPEC_VERSION},
        {ExtensionNumber::EXT_index_type_uint8, VK_EXT_INDEX_TYPE_UINT8_SPEC_VERSION},
        {ExtensionNumber::EXT_extended_dynamic_state, VK_EXT_EXTENDED_DYNAMIC_STATE_SPEC_VERSION},
        {ExtensionNumber::EXT_host_image_copy, VK_EXT_HOST_IMAGE_COPY_SPEC_VERSION},
        {ExtensionNumber::EXT_map_memory_placed, VK_EXT_MAP_MEMORY_PLACED_SPEC_VERSION},
        {ExtensionNumber::EXT_shader_atomic_float2, VK_EXT_SHADER_ATOMIC_FLOAT_2_SPEC_VERSION},
        {ExtensionNumber::EXT_swapchain_maintenance1, VK_EXT_SWAPCHAIN_MAINTENANCE_1_SPEC_VERSION},
        {ExtensionNumber::EXT_shader_demote_to_helper_invocation, VK_EXT_SHADER_DEMOTE_TO_HELPER_INVOCATION_SPEC_VERSION},
        {ExtensionNumber::NV_device_generated_commands, VK_NV_DEVICE_GENERATED_COMMANDS_SPEC_VERSION},
        {ExtensionNumber::NV_inherited_viewport_scissor, VK_NV_INHERITED_VIEWPORT_SCISSOR_SPEC_VERSION},
        {ExtensionNumber::EXT_texel_buffer_alignment, VK_EXT_TEXEL_BUFFER_ALIGNMENT_SPEC_VERSION},
        {ExtensionNumber::QCOM_render_pass_transform, VK_QCOM_RENDER_PASS_TRANSFORM_SPEC_VERSION},
        {ExtensionNumber::EXT_depth_bias_control, VK_EXT_DEPTH_BIAS_CONTROL_SPEC_VERSION},
        {ExtensionNumber::EXT_device_memory_report, VK_EXT_DEVICE_MEMORY_REPORT_SPEC_VERSION},
        {ExtensionNumber::EXT_robustness2, VK_EXT_ROBUSTNESS_2_SPEC_VERSION},
        {ExtensionNumber::EXT_custom_border_color, VK_EXT_CUSTOM_BORDER_COLOR_SPEC_VERSION},
        {ExtensionNumber::GOOGLE_user_type, VK_GOOGLE_USER_TYPE_SPEC_VERSION},
        {ExtensionNumber::NV_present_barrier, VK_NV_PRESENT_BARRIER_SPEC_VERSION},
        {ExtensionNumber::EXT_private_data, VK_EXT_PRIVATE_DATA_SPEC_VERSION},
        {ExtensionNumber::EXT_pipeline_creation_cache_control, VK_EXT_PIPELINE_CREATION_CACHE_CONTROL_SPEC_VERSION},
        {ExtensionNumber::NV_device_diagnostics_config, VK_NV_DEVICE_DIAGNOSTICS_CONFIG_SPEC_VERSION},
        {ExtensionNumber::QCOM_render_pass_store_ops, VK_QCOM_RENDER_PASS_STORE_OPS_SPEC_VERSION},
#ifdef VK_ENABLE_BETA_EXTENSIONS
        {ExtensionNumber::NV_cuda_kernel_launch, VK_NV_CUDA_KERNEL_LAUNCH_SPEC_VERSION},
#endif  // VK_ENABLE_BETA_EXTENSIONS
        {ExtensionNumber::QCOM_tile_shading, VK_QCOM_TILE_SHADING_SPEC_VERSION},
        {ExtensionNumber::NV_low_latency, VK_NV_LOW_LATENCY_SPEC_VERSION},
#ifdef VK_USE_PLATFORM_METAL_EXT
        {ExtensionNumber::EXT_metal_objects, VK_EXT_METAL_OBJECTS_SPEC_VERSION},
#endif  // VK_USE_PLATFORM_METAL_EXT
        {ExtensionNumber::EXT_descriptor_buffer, VK_EXT_DESCRIPTOR_BUFFER_SPEC_VERSION},
        {ExtensionNumber::EXT_graphics_pipeline_library, VK_EXT_GRAPHICS_PIPELINE_LIBRARY_SPEC_VERSION},
        {ExtensionNumber::AMD_shader_early_and_late_fragment_tests, VK_AMD_SHADER_EARLY_AND_LATE_FRAGMENT_TESTS_SPEC_VERSION},
        {ExtensionNumber::NV_fragment_shading_rate_enums, VK_NV_FRAGMENT_SHADING_RATE_ENUMS_SPEC_VERSION},
        {ExtensionNumber::NV_ray_tracing_motion_blur, VK_NV_RAY_TRACING_MOTION_BLUR_SPEC_VERSION},
        {ExtensionNumber::EXT_ycbcr_2plane_444_formats, VK_EXT_YCBCR_2PLANE_444_FORMATS_SPEC_VERSION},
        {ExtensionNumber::EXT_fragment_density_map2, VK_EXT_FRAGMENT_DENSITY_MAP_2_SPEC_VERSION},
        {ExtensionNumber::QCOM_rotated_copy_commands, VK_QCOM_ROTATED_COPY_COMMANDS_SPEC_VERSION},
        {ExtensionNumber::EXT_image_robustness, VK_EXT_IMAGE_ROBUSTNESS_SPEC_VERSION},
        {ExtensionNumber::EXT_image_compression_control, VK_EXT_IMAGE_COMPRESSION_CONTROL_SPEC_VERSION},
        {ExtensionNumber::EXT_attachment_feedback_loop_layout, VK_EXT_ATTACHMENT_FEEDBACK_LOOP_LAYOUT_SPEC_VERSION},
        {ExtensionNumber::EXT_4444_formats, VK_EXT_4444_FORMATS_SPEC_VERSION},
        {ExtensionNumber::EXT_device_fault, VK_EXT_DEVICE_FAULT_SPEC_VERSION},
        {ExtensionNumber::ARM_rasterization_order_attachment_access, VK_ARM_RASTERIZATION_ORDER_ATTACHMENT_ACCESS_SPEC_VERSION},
        {ExtensionNumber::EXT_rgba10x6_formats, VK_EXT_RGBA10X6_FORMATS_SPEC_VERSION},
#ifdef VK_USE_PLATFORM_WIN32_KHR
        {ExtensionNumber::NV_acquire_winrt_display, VK_NV_ACQUIRE_WINRT_DISPLAY_SPEC_VERSION},
#endif  // VK_USE_PLATFORM_WIN32_KHR
        {ExtensionNumber::VALVE_mutable_descriptor_type, VK_VALVE_MUTABLE_DESCRIPTOR_TYPE_SPEC_VERSION},
        {ExtensionNumber::EXT_vertex_input_dynamic_state, VK_EXT_VERTEX_INPUT_DYNAMIC_STATE_SPEC_VERSION},
        {ExtensionNumber::EXT_physical_device_drm, VK_EXT_PHYSICAL_DEVICE_DRM_SPEC_VERSION},
        {ExtensionNumber::EXT_device_address_binding_report, VK_EXT_DEVICE_ADDRESS_BINDING_REPORT_SPEC_VERSION},
        {ExtensionNumber::EXT_depth_clip_control, VK_EXT_DEPTH_CLIP_CONTROL_SPEC_VERSION},
        {ExtensionNumber::EXT_primitive_topology_list_restart, VK_EXT_PRIMITIVE_TOPOLOGY_LIST_RESTART_SPEC_VERSION},
        {ExtensionNumber::EXT_present_mode_fifo_latest_ready, VK_EXT_PRESENT_MODE_FIFO_LATEST_READY_SPEC_VERSION},
#ifdef VK_USE_PLATFORM_FUCHSIA
        {ExtensionNumber::FUCHSIA_external_memory, VK_FUCHSIA_EXTERNAL_MEMORY_SPEC_VERSION},
        {ExtensionNumber::FUCHSIA_external_semaphore, VK_FUCHSIA_EXTERNAL_SEMAPHORE_SPEC_VERSION},
        {ExtensionNumber::FUCHSIA_buffer_collection, VK_FUCHSIA_BUFFER_COLLECTION_SPEC_VERSION},
#endif  // VK_USE_PLATFORM_FUCHSIA
        {ExtensionNumber::HUAWEI_subpass_shading, VK_HUAWEI_SUBPASS_SHADING_SPEC_VERSION},
        {ExtensionNumber::HUAWEI_invocation_mask, VK_HUAWEI_INVOCATION_MASK_SPEC_VERSION},
        {ExtensionNumber::NV_external_memory_rdma, VK_NV_EXTERNAL_MEMORY_RDMA_SPEC_VERSION},
        {ExtensionNumber::EXT_pipeline_properties, VK_EXT_PIPELINE_PROPERTIES_SPEC_VERSION},
        {ExtensionNumber::EXT_frame_boundary, VK_EXT_FRAME_BOUNDARY_SPEC_VERSION},
        {ExtensionNumber::EXT_multisampled_render_to_single_sampled, VK_EXT_MULTISAMPLED_RENDER_TO_SINGLE_SAMPLED_SPEC_VERSION},
        {ExtensionNumber::EXT_extended_dynamic_state2, VK_EXT_EXTENDED_DYNAMIC_STATE_2_SPEC_VERSION},
        {ExtensionNumber::EXT_color_write_enable, VK_EXT_COLOR_WRITE_ENABLE_SPEC_VERSION},
        {ExtensionNumber::EXT_primitives_generated_query, VK_EXT_PRIMITIVES_GENERATED_QUERY_SPEC_VERSION},
        {ExtensionNumber::EXT_global_priority_query, VK_EXT_GLOBAL_PRIORITY_QUERY_SPEC_VERSION},
        {ExtensionNumber::EXT_image_view_min_lod, VK_EXT_IMAGE_VIEW_MIN_LOD_SPEC_VERSION},
        {ExtensionNumber::EXT_multi_draw, VK_EXT_MULTI_DRAW_SPEC_VERSION},
        {ExtensionNumber::EXT_image_2d_view_of_3d, VK_EXT_IMAGE_2D_VIEW_OF_3D_SPEC_VERSION},
        {ExtensionNumber::EXT_shader_tile_image, VK_EXT_SHADER_TILE_IMAGE_SPEC_VERSION},
        {ExtensionNumber::EXT_opacity_micromap, VK_EXT_OPACITY_MICROMAP_SPEC_VERSION},
#ifdef VK_ENABLE_BETA_EXTENSIONS
        {ExtensionNumber::NV_displacement_micromap, VK_NV_DISPLACEMENT_MICROMAP_SPEC_VERSION},
#endif  // VK_ENABLE_BETA_EXTENSIONS
        {ExtensionNumber::EXT_load_store_op_none, VK_EXT_LOAD_STORE_OP_NONE_SPEC_VERSION},
        {ExtensionNumber::HUAWEI_cluster_culling_shader, VK_HUAWEI_CLUSTER_CULLING_SHADER_SPEC_VERSION},
        {ExtensionNumber::EXT_border_color_swizzle, VK_EXT_BORDER_COLOR_SWIZZLE_SPEC_VERSION},
        {ExtensionNumber::EXT_pageable_device_local_memory, VK_EXT_PAGEABLE_DEVICE_LOCAL_MEMORY_SPEC_VERSION},
        {ExtensionNumber::ARM_shader_core_properties, VK_ARM_SHADER_CORE_PROPERTIES_SPEC_VERSION},
        {ExtensionNumber::ARM_scheduling_controls, VK_ARM_SCHEDULING_CONTROLS_SPEC_VERSION},
        {ExtensionNumber::EXT_image_sliced_view_of_3d, VK_EXT_IMAGE_SLICED_VIEW_OF_3D_SPEC_VERSION},
        {ExtensionNumber::VALVE_descriptor_set_host_mapping, VK_VALVE_DESCRIPTOR_SET_HOST_MAPPING_SPEC_VERSION},
        {ExtensionNumber::EXT_depth_clamp_zero_one, VK_EXT_DEPTH_CLAMP_ZERO_ONE_SPEC_VERSION},
        {ExtensionNumber::EXT_non_seamless_cube_map, VK_EXT_NON_SEAMLESS_CUBE_MAP_SPEC_VERSION},
        {ExtensionNumber::ARM_render_pass_striped, VK_ARM_RENDER_PASS_STRIPED_SPEC_VERSION},
        {ExtensionNumber::QCOM_fragment_density_map_offset, VK_QCOM_FRAGMENT_DENSITY_MAP_OFFSET_SPEC_VERSION},
        {ExtensionNumber::NV_copy_memory_indirect, VK_NV_COPY_MEMORY_INDIRECT_SPEC_VERSION},
        {ExtensionNumber::NV_memory_decompression, VK_NV_MEMORY_DECOMPRESSION_SPEC_VERSION},
        {ExtensionNumber::NV_device_generated_commands_compute, VK_NV_DEVICE_GENERATED_COMMANDS_COMPUTE_SPEC_VERSION},
        {ExtensionNumber::NV_ray_tracing_linear_swept_spheres, VK_NV_RAY_TRACING_LINEAR_SWEPT_SPHERES_SPEC_VERSION},
        {ExtensionNumber::NV_linear_color_attachment, VK_NV_LINEAR_COLOR_ATTACHMENT_SPEC_VERSION},
        {ExtensionNumber::EXT_image_compression_control_swapchain, VK_EXT_IMAGE_COMPRESSION_CONTROL_SWAPCHAIN_SPEC_VERSION},
        {ExtensionNumber::QCOM_image_processing, VK_QCOM_IMAGE_PROCESSING_SPEC_VERSION},
        {ExtensionNumber::EXT_nested_command_buffer, VK_EXT_NESTED_COMMAND_BUFFER_SPEC_VERSION},
        {ExtensionNumber::EXT_external_memory_acquire_unmodified, VK_EXT_EXTERNAL_MEMORY_ACQUIRE_UNMODIFIED_SPEC_VERSION},
        {ExtensionNumber::EXT_extended_dynamic_state3, VK_EXT_EXTENDED_DYNAMIC_STATE_3_SPEC_VERSION},
        {ExtensionNumber::EXT_subpass_merge_feedback, VK_EXT_SUBPASS_MERGE_FEEDBACK_SPEC_VERSION},
        {ExtensionNumber::ARM_tensors, VK_ARM_TENSORS_SPEC_VERSION},
        {ExtensionNumber::EXT_shader_module_identifier, VK_EXT_SHADER_MODULE_IDENTIFIER_SPEC_VERSION},
        {ExtensionNumber::EXT_rasterization_order_attachment_access, VK_EXT_RASTERIZATION_ORDER_ATTACHMENT_ACCESS_SPEC_VERSION},
        {ExtensionNumber::NV_optical_flow, VK_NV_OPTICAL_FLOW_SPEC_VERSION},
        {ExtensionNumber::EXT_legacy_dithering, VK_EXT_LEGACY_DITHERING_SPEC_VERSION},
        {ExtensionNumber::EXT_pipeline_protected_access, VK_EXT_PIPELINE_PROTECTED_ACCESS_SPEC_VERSION},
#ifdef VK_USE_PLATFORM_ANDROID_KHR
        {ExtensionNumber::ANDROID_external_format_resolve, VK_ANDROID_EXTERNAL_FORMAT_RESOLVE_SPEC_VERSION},
#endif  // VK_USE_PLATFORM_ANDROID_KHR
        {ExtensionNumber::AMD_anti_lag, VK_AMD_ANTI_LAG_SPEC_VERSION},
        {ExtensionNumber::EXT_shader_object, VK_EXT_SHADER_OBJECT_SPEC_VERSION},
        {ExtensionNumber::QCOM_tile_properties, VK_QCOM_TILE_PROPERTIES_SPEC_VERSION},
        {ExtensionNumber::SEC_amigo_profiling, VK_SEC_AMIGO_PROFILING_SPEC_VERSION},
        {ExtensionNumber::QCOM_multiview_per_view_viewports, VK_QCOM_MULTIVIEW_PER_VIEW_VIEWPORTS_SPEC_VERSION},
        {ExtensionNumber::NV_ray_tracing_invocation_reorder, VK_NV_RAY_TRACING_INVOCATION_REORDER_SPEC_VERSION},
        {ExtensionNumber::NV_cooperative_vector, VK_NV_COOPERATIVE_VECTOR_SPEC_VERSION},
        {ExtensionNumber::NV_extended_sparse_address_space, VK_NV_EXTENDED_SPARSE_ADDRESS_SPACE_SPEC_VERSION},
        {ExtensionNumber::EXT_mutable_descriptor_type, VK_EXT_MUTABLE_DESCRIPTOR_TYPE_SPEC_VERSION},
        {ExtensionNumber::EXT_legacy_vertex_attributes, VK_EXT_LEGACY_VERTEX_ATTRIBUTES_SPEC_VERSION},
        {ExtensionNumber::ARM_shader_core_builtins, VK_ARM_SHADER_CORE_BUILTINS_SPEC_VERSION},
        {ExtensionNumber::EXT_pipeline_library_group_handles, VK_EXT_PIPELINE_LIBRARY_GROUP_HANDLES_SPEC_VERSION},
        {ExtensionNumber::EXT_dynamic_rendering_unused_attachments, VK_EXT_DYNAMIC_RENDERING_UNUSED_ATTACHMENTS_SPEC_VERSION},
        {ExtensionNumber::NV_low_latency2, VK_NV_LOW_LATENCY_2_SPEC_VERSION},
        {ExtensionNumber::ARM_data_graph, VK_ARM_DATA_GRAPH_SPEC_VERSION},
        {ExtensionNumber::QCOM_multiview_per_view_render_areas, VK_QCOM_MULTIVIEW_PER_VIEW_RENDER_AREAS_SPEC_VERSION},
        {ExtensionNumber::NV_per_stage_descriptor_set, VK_NV_PER_STAGE_DESCRIPTOR_SET_SPEC_VERSION},
        {ExtensionNumber::QCOM_image_processing2, VK_QCOM_IMAGE_PROCESSING_2_SPEC_VERSION},
        {ExtensionNumber::QCOM_filter_cubic_weights, VK_QCOM_FILTER_CUBIC_WEIGHTS_SPEC_VERSION},
        {ExtensionNumber::QCOM_ycbcr_degamma, VK_QCOM_YCBCR_DEGAMMA_SPEC_VERSION},
        {ExtensionNumber::QCOM_filter_cubic_clamp, VK_QCOM_FILTER_CUBIC_CLAMP_SPEC_VERSION},
        {ExtensionNumber::EXT_attachment_feedback_loop_dynamic_state, VK_EXT_ATTACHMENT_FEEDBACK_LOOP_DYNAMIC_STATE_SPEC_VERSION},
#ifdef VK_USE_PLATFORM_SCREEN_QNX
        {ExtensionNumber::QNX_external_memory_screen_buffer, VK_QNX_EXTERNAL_MEMORY_SCREEN_BUFFER_SPEC_VERSION},
#endif  // VK_USE_PLATFORM_SCREEN_QNX
        {ExtensionNumber::MSFT_layered_driver, VK_MSFT_LAYERED_DRIVER_SPEC_VERSION},
        {ExtensionNumber::NV_descriptor_pool_overallocation, VK_NV_DESCRIPTOR_POOL_OVERALLOCATION_SPEC_VERSION},
        {ExtensionNumber::QCOM_tile_memory_heap, VK_QCOM_TILE_MEMORY_HEAP_SPEC_VERSION},
        {ExtensionNumber::NV_raw_access_chains, VK_NV_RAW_ACCESS_CHAINS_SPEC_VERSION},
        {ExtensionNumber::NV_external_compute_queue, VK_NV_EXTERNAL_COMPUTE_QUEUE_SPEC_VERSION},
        {ExtensionNumber::NV_command_buffer_inheritance, VK_NV_COMMAND_BUFFER_INHERITANCE_SPEC_VERSION},
        {ExtensionNumber::NV_shader_atomic_float16_vector, VK_NV_SHADER_ATOMIC_FLOAT16_VECTOR_SPEC_VERSION},
        {ExtensionNumber::EXT_shader_replicated_composites, VK_EXT_SHADER_REPLICATED_COMPOSITES_SPEC_VERSION},
        {ExtensionNumber::EXT_shader_float8, VK_EXT_SHADER_FLOAT8_SPEC_VERSION},
        {ExtensionNumber::NV_ray_tracing_validation, VK_NV_RAY_TRACING_VALIDATION_SPEC_VERSION},
        {ExtensionNumber::NV_cluster_acceleration_structure, VK_NV_CLUSTER_ACCELERATION_STRUCTURE_SPEC_VERSION},
        {ExtensionNumber::NV_partitioned_acceleration_structure, VK_NV_PARTITIONED_ACCELERATION_STRUCTURE_SPEC_VERSION},
        {ExtensionNumber::EXT_device_generated_commands, VK_EXT_DEVICE_GENERATED_COMMANDS_SPEC_VERSION},
        {ExtensionNumber::MESA_image_alignment_control, VK_MESA_IMAGE_ALIGNMENT_CONTROL_SPEC_VERSION},
        {ExtensionNumber::EXT_depth_clamp_control, VK_EXT_DEPTH_CLAMP_CONTROL_SPEC_VERSION},
        {ExtensionNumber::HUAWEI_hdr_vivid, VK_HUAWEI_HDR_VIVID_SPEC_VERSION},
        {ExtensionNumber::NV_cooperative_matrix2, VK_NV_COOPERATIVE_MATRIX_2_SPEC_VERSION},
        {ExtensionNumber::ARM_pipeline_opacity_micromap, VK_ARM_PIPELINE_OPACITY_MICROMAP_SPEC_VERSION},
#ifdef VK_USE_PLATFORM_METAL_EXT
        {ExtensionNumber::EXT_external_memory_metal, VK_EXT_EXTERNAL_MEMORY_METAL_SPEC_VERSION},
#endif  // VK_USE_PLATFORM_METAL_EXT
        {ExtensionNumber::EXT_vertex_attribute_robustness, VK_EXT_VERTEX_ATTRIBUTE_ROBUSTNESS_SPEC_VERSION},
        {ExtensionNumber::ARM_format_pack, VK_ARM_FORMAT_PACK_SPEC_VERSION},
        {ExtensionNumber::VALVE_fragment_density_map_layered, VK_VALVE_FRAGMENT_DENSITY_MAP_LAYERED_SPEC_VERSION},
#ifdef VK_ENABLE_BETA_EXTENSIONS
        {ExtensionNumber::NV_present_metering, VK_NV_PRESENT_METERING_SPEC_VERSION},
#endif  // VK_ENABLE_BETA_EXTENSIONS
        {ExtensionNumber::EXT_fragment_density_map_offset, VK_EXT_FRAGMENT_DENSITY_MAP_OFFSET_SPEC_VERSION},
        {ExtensionNumber::EXT_zero_initialize_device_memory, VK_EXT_ZERO_INITIALIZE_DEVICE_MEMORY_SPEC_VERSION},
        {ExtensionNumber::KHR_acceleration_structure, VK_KHR_ACCELERATION_STRUCTURE_SPEC_VERSION},
        {ExtensionNumber::KHR_ray_tracing_pipeline, VK_KHR_RAY_TRACING_PIPELINE_SPEC_VERSION},
        {ExtensionNumber::KHR_ray_query, VK_KHR_RAY_QUERY_SPEC_VERSION},
        {ExtensionNumber::EXT_mesh_shader, VK_EXT_MESH_SHADER_SPEC_VERSION},
    };
    return ext_map;
}

ExtensionNumber GetExtensionNumber(const char* extension_name) {
    static const std::unordered_map<std::string, ExtensionNumber> ext_map = {
        {"VK_KHR_surface", ExtensionNumber::KHR_surface},
        {"VK_KHR_swapchain", ExtensionNumber::KHR_swapchain},
        {"VK_KHR_display", ExtensionNumber::KHR_display},
        {"VK_KHR_display_swapchain", ExtensionNumber::KHR_display_swapchain},
#ifdef VK_USE_PLATFORM_XLIB_KHR
        {"VK_KHR_xlib_surface", ExtensionNumber::KHR_xlib_surface},
#endif  // VK_USE_PLATFORM_XLIB_KHR
#ifdef VK_USE_PLATFORM_XCB_KHR
        {"VK_KHR_xcb_surface", ExtensionNumber::KHR_xcb_surface},
#endif  // VK_USE_PLATFORM_XCB_KHR
#ifdef VK_USE_PLATFORM_WAYLAND_KHR
        {"VK_KHR_wayland_surface", ExtensionNumber::KHR_wayland_surface},
#endif  // VK_USE_PLATFORM_WAYLAND_KHR
#ifdef VK_USE_PLATFORM_ANDROID_KHR
        {"VK_KHR_android_surface", ExtensionNumber::KHR_android_surface},
#endif  // VK_USE_PLATFORM_ANDROID_KHR
#ifdef VK_USE_PLATFORM_WIN32_KHR
        {"VK_KHR_win32_surface", ExtensionNumber::KHR_win32_surface},
#endif  // VK_USE_PLATFORM_WIN32_KHR
        {"VK_KHR_sampler_mirror_clamp_to_edge", ExtensionNumber::KHR_sampler_mirror_clamp_to_edge},
        {"VK_KHR_video_queue", ExtensionNumber::KHR_video_queue},
        {"VK_KHR_video_decode_queue", ExtensionNumber::KHR_video_decode_queue},
        {"VK_KHR_video_encode_h264", ExtensionNumber::KHR_video_encode_h264},
        {"VK_KHR_video_encode_h265", ExtensionNumber::KHR_video_encode_h265},
        {"VK_KHR_video_decode_h264", ExtensionNumber::KHR_video_decode_h264},
        {"VK_KHR_dynamic_rendering", ExtensionNumber::KHR_dynamic_rendering},
        {"VK_KHR_multiview", ExtensionNumber::KHR_multiview},
        {"VK_KHR_get_physical_device_properties2", ExtensionNumber::KHR_get_physical_device_properties2},
        {"VK_KHR_device_group", ExtensionNumber::KHR_device_group},
        {"VK_KHR_shader_draw_parameters", ExtensionNumber::KHR_shader_draw_parameters},
        {"VK_KHR_maintenance1", ExtensionNumber::KHR_maintenance1},
        {"VK_KHR_device_group_creation", ExtensionNumber::KHR_device_group_creation},
        {"VK_KHR_external_memory_capabilities", ExtensionNumber::KHR_external_memory_capabilities},
        {"VK_KHR_external_memory", ExtensionNumber::KHR_external_memory},
#ifdef VK_USE_PLATFORM_WIN32_KHR
        {"VK_KHR_external_memory_win32", ExtensionNumber::KHR_external_memory_win32},
#endif  // VK_USE_PLATFORM_WIN32_KHR
        {"VK_KHR_external_memory_fd", ExtensionNumber::KHR_external_memory_fd},
#ifdef VK_USE_PLATFORM_WIN32_KHR
        {"VK_KHR_win32_keyed_mutex", ExtensionNumber::KHR_win32_keyed_mutex},
#endif  // VK_USE_PLATFORM_WIN32_KHR
        {"VK_KHR_external_semaphore_capabilities", ExtensionNumber::KHR_external_semaphore_capabilities},
        {"VK_KHR_external_semaphore", ExtensionNumber::KHR_external_semaphore},
#ifdef VK_USE_PLATFORM_WIN32_KHR
        {"VK_KHR_external_semaphore_win32", ExtensionNumber::KHR_external_semaphore_win32},
#endif  // VK_USE_PLATFORM_WIN32_KHR
        {"VK_KHR_external_semaphore_fd", ExtensionNumber::KHR_external_semaphore_fd},
        {"VK_KHR_push_descriptor", ExtensionNumber::KHR_push_descriptor},
        {"VK_KHR_shader_float16_int8", ExtensionNumber::KHR_shader_float16_int8},
        {"VK_KHR_16bit_storage", ExtensionNumber::KHR_16bit_storage},
        {"VK_KHR_incremental_present", ExtensionNumber::KHR_incremental_present},
        {"VK_KHR_descriptor_update_template", ExtensionNumber::KHR_descriptor_update_template},
        {"VK_KHR_imageless_framebuffer", ExtensionNumber::KHR_imageless_framebuffer},
        {"VK_KHR_create_renderpass2", ExtensionNumber::KHR_create_renderpass2},
        {"VK_KHR_shared_presentable_image", ExtensionNumber::KHR_shared_presentable_image},
        {"VK_KHR_external_fence_capabilities", ExtensionNumber::KHR_external_fence_capabilities},
        {"VK_KHR_external_fence", ExtensionNumber::KHR_external_fence},
#ifdef VK_USE_PLATFORM_WIN32_KHR
        {"VK_KHR_external_fence_win32", ExtensionNumber::KHR_external_fence_win32},
#endif  // VK_USE_PLATFORM_WIN32_KHR
        {"VK_KHR_external_fence_fd", ExtensionNumber::KHR_external_fence_fd},
        {"VK_KHR_performance_query", ExtensionNumber::KHR_performance_query},
        {"VK_KHR_maintenance2", ExtensionNumber::KHR_maintenance2},
        {"VK_KHR_get_surface_capabilities2", ExtensionNumber::KHR_get_surface_capabilities2},
        {"VK_KHR_variable_pointers", ExtensionNumber::KHR_variable_pointers},
        {"VK_KHR_get_display_properties2", ExtensionNumber::KHR_get_display_properties2},
        {"VK_KHR_dedicated_allocation", ExtensionNumber::KHR_dedicated_allocation},
        {"VK_KHR_storage_buffer_storage_class", ExtensionNumber::KHR_storage_buffer_storage_class},
        {"VK_KHR_shader_bfloat16", ExtensionNumber::KHR_shader_bfloat16},
        {"VK_KHR_relaxed_block_layout", ExtensionNumber::KHR_relaxed_block_layout},
        {"VK_KHR_get_memory_requirements2", ExtensionNumber::KHR_get_memory_requirements2},
        {"VK_KHR_image_format_list", ExtensionNumber::KHR_image_format_list},
        {"VK_KHR_sampler_ycbcr_conversion", ExtensionNumber::KHR_sampler_ycbcr_conversion},
        {"VK_KHR_bind_memory2", ExtensionNumber::KHR_bind_memory2},
#ifdef VK_ENABLE_BETA_EXTENSIONS
        {"VK_KHR_portability_subset", ExtensionNumber::KHR_portability_subset},
#endif  // VK_ENABLE_BETA_EXTENSIONS
        {"VK_KHR_maintenance3", ExtensionNumber::KHR_maintenance3},
        {"VK_KHR_draw_indirect_count", ExtensionNumber::KHR_draw_indirect_count},
        {"VK_KHR_shader_subgroup_extended_types", ExtensionNumber::KHR_shader_subgroup_extended_types},
        {"VK_KHR_8bit_storage", ExtensionNumber::KHR_8bit_storage},
        {"VK_KHR_shader_atomic_int64", ExtensionNumber::KHR_shader_atomic_int64},
        {"VK_KHR_shader_clock", ExtensionNumber::KHR_shader_clock},
        {"VK_KHR_video_decode_h265", ExtensionNumber::KHR_video_decode_h265},
        {"VK_KHR_global_priority", ExtensionNumber::KHR_global_priority},
        {"VK_KHR_driver_properties", ExtensionNumber::KHR_driver_properties},
        {"VK_KHR_shader_float_controls", ExtensionNumber::KHR_shader_float_controls},
        {"VK_KHR_depth_stencil_resolve", ExtensionNumber::KHR_depth_stencil_resolve},
        {"VK_KHR_swapchain_mutable_format", ExtensionNumber::KHR_swapchain_mutable_format},
        {"VK_KHR_timeline_semaphore", ExtensionNumber::KHR_timeline_semaphore},
        {"VK_KHR_vulkan_memory_model", ExtensionNumber::KHR_vulkan_memory_model},
        {"VK_KHR_shader_terminate_invocation", ExtensionNumber::KHR_shader_terminate_invocation},
        {"VK_KHR_fragment_shading_rate", ExtensionNumber::KHR_fragment_shading_rate},
        {"VK_KHR_dynamic_rendering_local_read", ExtensionNumber::KHR_dynamic_rendering_local_read},
        {"VK_KHR_shader_quad_control", ExtensionNumber::KHR_shader_quad_control},
        {"VK_KHR_spirv_1_4", ExtensionNumber::KHR_spirv_1_4},
        {"VK_KHR_surface_protected_capabilities", ExtensionNumber::KHR_surface_protected_capabilities},
        {"VK_KHR_separate_depth_stencil_layouts", ExtensionNumber::KHR_separate_depth_stencil_layouts},
        {"VK_KHR_present_wait", ExtensionNumber::KHR_present_wait},
        {"VK_KHR_uniform_buffer_standard_layout", ExtensionNumber::KHR_uniform_buffer_standard_layout},
        {"VK_KHR_buffer_device_address", ExtensionNumber::KHR_buffer_device_address},
        {"VK_KHR_deferred_host_operations", ExtensionNumber::KHR_deferred_host_operations},
        {"VK_KHR_pipeline_executable_properties", ExtensionNumber::KHR_pipeline_executable_properties},
        {"VK_KHR_map_memory2", ExtensionNumber::KHR_map_memory2},
        {"VK_KHR_shader_integer_dot_product", ExtensionNumber::KHR_shader_integer_dot_product},
        {"VK_KHR_pipeline_library", ExtensionNumber::KHR_pipeline_library},
        {"VK_KHR_shader_non_semantic_info", ExtensionNumber::KHR_shader_non_semantic_info},
        {"VK_KHR_present_id", ExtensionNumber::KHR_present_id},
        {"VK_KHR_video_encode_queue", ExtensionNumber::KHR_video_encode_queue},
        {"VK_KHR_synchronization2", ExtensionNumber::KHR_synchronization2},
        {"VK_KHR_fragment_shader_barycentric", ExtensionNumber::KHR_fragment_shader_barycentric},
        {"VK_KHR_shader_subgroup_uniform_control_flow", ExtensionNumber::KHR_shader_subgroup_uniform_control_flow},
        {"VK_KHR_zero_initialize_workgroup_memory", ExtensionNumber::KHR_zero_initialize_workgroup_memory},
        {"VK_KHR_workgroup_memory_explicit_layout", ExtensionNumber::KHR_workgroup_memory_explicit_layout},
        {"VK_KHR_copy_commands2", ExtensionNumber::KHR_copy_commands2},
        {"VK_KHR_format_feature_flags2", ExtensionNumber::KHR_format_feature_flags2},
        {"VK_KHR_ray_tracing_maintenance1", ExtensionNumber::KHR_ray_tracing_maintenance1},
        {"VK_KHR_portability_enumeration", ExtensionNumber::KHR_portability_enumeration},
        {"VK_KHR_maintenance4", ExtensionNumber::KHR_maintenance4},
        {"VK_KHR_shader_subgroup_rotate", ExtensionNumber::KHR_shader_subgroup_rotate},
        {"VK_KHR_shader_maximal_reconvergence", ExtensionNumber::KHR_shader_maximal_reconvergence},
        {"VK_KHR_maintenance5", ExtensionNumber::KHR_maintenance5},
        {"VK_KHR_present_id2", ExtensionNumber::KHR_present_id2},
        {"VK_KHR_present_wait2", ExtensionNumber::KHR_present_wait2},
        {"VK_KHR_ray_tracing_position_fetch", ExtensionNumber::KHR_ray_tracing_position_fetch},
        {"VK_KHR_pipeline_binary", ExtensionNumber::KHR_pipeline_binary},
        {"VK_KHR_cooperative_matrix", ExtensionNumber::KHR_cooperative_matrix},
        {"VK_KHR_compute_shader_derivatives", ExtensionNumber::KHR_compute_shader_derivatives},
        {"VK_KHR_video_decode_av1", ExtensionNumber::KHR_video_decode_av1},
        {"VK_KHR_video_encode_av1", ExtensionNumber::KHR_video_encode_av1},
        {"VK_KHR_video_decode_vp9", ExtensionNumber::KHR_video_decode_vp9},
        {"VK_KHR_video_maintenance1", ExtensionNumber::KHR_video_maintenance1},
        {"VK_KHR_vertex_attribute_divisor", ExtensionNumber::KHR_vertex_attribute_divisor},
        {"VK_KHR_load_store_op_none", ExtensionNumber::KHR_load_store_op_none},
        {"VK_KHR_unified_image_layouts", ExtensionNumber::KHR_unified_image_layouts},
        {"VK_KHR_shader_float_controls2", ExtensionNumber::KHR_shader_float_controls2},
        {"VK_KHR_index_type_uint8", ExtensionNumber::KHR_index_type_uint8},
        {"VK_KHR_line_rasterization", ExtensionNumber::KHR_line_rasterization},
        {"VK_KHR_calibrated_timestamps", ExtensionNumber::KHR_calibrated_timestamps},
        {"VK_KHR_shader_expect_assume", ExtensionNumber::KHR_shader_expect_assume},
        {"VK_KHR_maintenance6", ExtensionNumber::KHR_maintenance6},
        {"VK_KHR_video_encode_quantization_map", ExtensionNumber::KHR_video_encode_quantization_map},
        {"VK_KHR_shader_relaxed_extended_instruction", ExtensionNumber::KHR_shader_relaxed_extended_instruction},
        {"VK_KHR_maintenance7", ExtensionNumber::KHR_maintenance7},
        {"VK_KHR_maintenance8", ExtensionNumber::KHR_maintenance8},
        {"VK_KHR_maintenance9", ExtensionNumber::KHR_maintenance9},
        {"VK_KHR_video_maintenance2", ExtensionNumber::KHR_video_maintenance2},
        {"VK_KHR_depth_clamp_zero_one", ExtensionNumber::KHR_depth_clamp_zero_one},
        {"VK_KHR_robustness2", ExtensionNumber::KHR_robustness2},
        {"VK_EXT_debug_report", ExtensionNumber::EXT_debug_report},
        {"VK_NV_glsl_shader", ExtensionNumber::NV_glsl_shader},
        {"VK_EXT_depth_range_unrestricted", ExtensionNumber::EXT_depth_range_unrestricted},
        {"VK_IMG_filter_cubic", ExtensionNumber::IMG_filter_cubic},
        {"VK_AMD_rasterization_order", ExtensionNumber::AMD_rasterization_order},
        {"VK_AMD_shader_trinary_minmax", ExtensionNumber::AMD_shader_trinary_minmax},
        {"VK_AMD_shader_explicit_vertex_parameter", ExtensionNumber::AMD_shader_explicit_vertex_parameter},
        {"VK_EXT_debug_marker", ExtensionNumber::EXT_debug_marker},
        {"VK_AMD_gcn_shader", ExtensionNumber::AMD_gcn_shader},
        {"VK_NV_dedicated_allocation", ExtensionNumber::NV_dedicated_allocation},
        {"VK_EXT_transform_feedback", ExtensionNumber::EXT_transform_feedback},
        {"VK_NVX_binary_import", ExtensionNumber::NVX_binary_import},
        {"VK_NVX_image_view_handle", ExtensionNumber::NVX_image_view_handle},
        {"VK_AMD_draw_indirect_count", ExtensionNumber::AMD_draw_indirect_count},
        {"VK_AMD_negative_viewport_height", ExtensionNumber::AMD_negative_viewport_height},
        {"VK_AMD_gpu_shader_half_float", ExtensionNumber::AMD_gpu_shader_half_float},
        {"VK_AMD_shader_ballot", ExtensionNumber::AMD_shader_ballot},
        {"VK_AMD_texture_gather_bias_lod", ExtensionNumber::AMD_texture_gather_bias_lod},
        {"VK_AMD_shader_info", ExtensionNumber::AMD_shader_info},
        {"VK_AMD_shader_image_load_store_lod", ExtensionNumber::AMD_shader_image_load_store_lod},
#ifdef VK_USE_PLATFORM_GGP
        {"VK_GGP_stream_descriptor_surface", ExtensionNumber::GGP_stream_descriptor_surface},
#endif  // VK_USE_PLATFORM_GGP
        {"VK_NV_corner_sampled_image", ExtensionNumber::NV_corner_sampled_image},
        {"VK_IMG_format_pvrtc", ExtensionNumber::IMG_format_pvrtc},
        {"VK_NV_external_memory_capabilities", ExtensionNumber::NV_external_memory_capabilities},
        {"VK_NV_external_memory", ExtensionNumber::NV_external_memory},
#ifdef VK_USE_PLATFORM_WIN32_KHR
        {"VK_NV_external_memory_win32", ExtensionNumber::NV_external_memory_win32},
        {"VK_NV_win32_keyed_mutex", ExtensionNumber::NV_win32_keyed_mutex},
#endif  // VK_USE_PLATFORM_WIN32_KHR
        {"VK_EXT_validation_flags", ExtensionNumber::EXT_validation_flags},
#ifdef VK_USE_PLATFORM_VI_NN
        {"VK_NN_vi_surface", ExtensionNumber::NN_vi_surface},
#endif  // VK_USE_PLATFORM_VI_NN
        {"VK_EXT_shader_subgroup_ballot", ExtensionNumber::EXT_shader_subgroup_ballot},
        {"VK_EXT_shader_subgroup_vote", ExtensionNumber::EXT_shader_subgroup_vote},
        {"VK_EXT_texture_compression_astc_hdr", ExtensionNumber::EXT_texture_compression_astc_hdr},
        {"VK_EXT_astc_decode_mode", ExtensionNumber::EXT_astc_decode_mode},
        {"VK_EXT_pipeline_robustness", ExtensionNumber::EXT_pipeline_robustness},
        {"VK_EXT_conditional_rendering", ExtensionNumber::EXT_conditional_rendering},
        {"VK_NV_clip_space_w_scaling", ExtensionNumber::NV_clip_space_w_scaling},
        {"VK_EXT_direct_mode_display", ExtensionNumber::EXT_direct_mode_display},
#ifdef VK_USE_PLATFORM_XLIB_XRANDR_EXT
        {"VK_EXT_acquire_xlib_display", ExtensionNumber::EXT_acquire_xlib_display},
#endif  // VK_USE_PLATFORM_XLIB_XRANDR_EXT
        {"VK_EXT_display_surface_counter", ExtensionNumber::EXT_display_surface_counter},
        {"VK_EXT_display_control", ExtensionNumber::EXT_display_control},
        {"VK_GOOGLE_display_timing", ExtensionNumber::GOOGLE_display_timing},
        {"VK_NV_sample_mask_override_coverage", ExtensionNumber::NV_sample_mask_override_coverage},
        {"VK_NV_geometry_shader_passthrough", ExtensionNumber::NV_geometry_shader_passthrough},
        {"VK_NV_viewport_array2", ExtensionNumber::NV_viewport_array2},
        {"VK_NVX_multiview_per_view_attributes", ExtensionNumber::NVX_multiview_per_view_attributes},
        {"VK_NV_viewport_swizzle", ExtensionNumber::NV_viewport_swizzle},
        {"VK_EXT_discard_rectangles", ExtensionNumber::EXT_discard_rectangles},
        {"VK_EXT_conservative_rasterization", ExtensionNumber::EXT_conservative_rasterization},
        {"VK_EXT_depth_clip_enable", ExtensionNumber::EXT_depth_clip_enable},
        {"VK_EXT_swapchain_colorspace", ExtensionNumber::EXT_swapchain_colorspace},
        {"VK_EXT_hdr_metadata", ExtensionNumber::EXT_hdr_metadata},
        {"VK_IMG_relaxed_line_rasterization", ExtensionNumber::IMG_relaxed_line_rasterization},
#ifdef VK_USE_PLATFORM_IOS_MVK
        {"VK_MVK_ios_surface", ExtensionNumber::MVK_ios_surface},
#endif  // VK_USE_PLATFORM_IOS_MVK
#ifdef VK_USE_PLATFORM_MACOS_MVK
        {"VK_MVK_macos_surface", ExtensionNumber::MVK_macos_surface},
#endif  // VK_USE_PLATFORM_MACOS_MVK
        {"VK_EXT_external_memory_dma_buf", ExtensionNumber::EXT_external_memory_dma_buf},
        {"VK_EXT_queue_family_foreign", ExtensionNumber::EXT_queue_family_foreign},
        {"VK_EXT_debug_utils", ExtensionNumber::EXT_debug_utils},
#ifdef VK_USE_PLATFORM_ANDROID_KHR
        {"VK_ANDROID_external_memory_android_hardware_buffer", ExtensionNumber::ANDROID_external_memory_android_hardware_buffer},
#endif  // VK_USE_PLATFORM_ANDROID_KHR
        {"VK_EXT_sampler_filter_minmax", ExtensionNumber::EXT_sampler_filter_minmax},
        {"VK_AMD_gpu_shader_int16", ExtensionNumber::AMD_gpu_shader_int16},
#ifdef VK_ENABLE_BETA_EXTENSIONS
        {"VK_AMDX_shader_enqueue", ExtensionNumber::AMDX_shader_enqueue},
#endif  // VK_ENABLE_BETA_EXTENSIONS
        {"VK_AMD_mixed_attachment_samples", ExtensionNumber::AMD_mixed_attachment_samples},
        {"VK_AMD_shader_fragment_mask", ExtensionNumber::AMD_shader_fragment_mask},
        {"VK_EXT_inline_uniform_block", ExtensionNumber::EXT_inline_uniform_block},
        {"VK_EXT_shader_stencil_export", ExtensionNumber::EXT_shader_stencil_export},
        {"VK_EXT_sample_locations", ExtensionNumber::EXT_sample_locations},
        {"VK_EXT_blend_operation_advanced", ExtensionNumber::EXT_blend_operation_advanced},
        {"VK_NV_fragment_coverage_to_color", ExtensionNumber::NV_fragment_coverage_to_color},
        {"VK_NV_framebuffer_mixed_samples", ExtensionNumber::NV_framebuffer_mixed_samples},
        {"VK_NV_fill_rectangle", ExtensionNumber::NV_fill_rectangle},
        {"VK_NV_shader_sm_builtins", ExtensionNumber::NV_shader_sm_builtins},
        {"VK_EXT_post_depth_coverage", ExtensionNumber::EXT_post_depth_coverage},
        {"VK_EXT_image_drm_format_modifier", ExtensionNumber::EXT_image_drm_format_modifier},
        {"VK_EXT_validation_cache", ExtensionNumber::EXT_validation_cache},
        {"VK_EXT_descriptor_indexing", ExtensionNumber::EXT_descriptor_indexing},
        {"VK_EXT_shader_viewport_index_layer", ExtensionNumber::EXT_shader_viewport_index_layer},
        {"VK_NV_shading_rate_image", ExtensionNumber::NV_shading_rate_image},
        {"VK_NV_ray_tracing", ExtensionNumber::NV_ray_tracing},
        {"VK_NV_representative_fragment_test", ExtensionNumber::NV_representative_fragment_test},
        {"VK_EXT_filter_cubic", ExtensionNumber::EXT_filter_cubic},
        {"VK_QCOM_render_pass_shader_resolve", ExtensionNumber::QCOM_render_pass_shader_resolve},
        {"VK_EXT_global_priority", ExtensionNumber::EXT_global_priority},
        {"VK_EXT_external_memory_host", ExtensionNumber::EXT_external_memory_host},
        {"VK_AMD_buffer_marker", ExtensionNumber::AMD_buffer_marker},
        {"VK_AMD_pipeline_compiler_control", ExtensionNumber::AMD_pipeline_compiler_control},
        {"VK_EXT_calibrated_timestamps", ExtensionNumber::EXT_calibrated_timestamps},
        {"VK_AMD_shader_core_properties", ExtensionNumber::AMD_shader_core_properties},
        {"VK_AMD_memory_overallocation_behavior", ExtensionNumber::AMD_memory_overallocation_behavior},
        {"VK_EXT_vertex_attribute_divisor", ExtensionNumber::EXT_vertex_attribute_divisor},
#ifdef VK_USE_PLATFORM_GGP
        {"VK_GGP_frame_token", ExtensionNumber::GGP_frame_token},
#endif  // VK_USE_PLATFORM_GGP
        {"VK_EXT_pipeline_creation_feedback", ExtensionNumber::EXT_pipeline_creation_feedback},
        {"VK_NV_shader_subgroup_partitioned", ExtensionNumber::NV_shader_subgroup_partitioned},
        {"VK_NV_compute_shader_derivatives", ExtensionNumber::NV_compute_shader_derivatives},
        {"VK_NV_mesh_shader", ExtensionNumber::NV_mesh_shader},
        {"VK_NV_fragment_shader_barycentric", ExtensionNumber::NV_fragment_shader_barycentric},
        {"VK_NV_shader_image_footprint", ExtensionNumber::NV_shader_image_footprint},
        {"VK_NV_scissor_exclusive", ExtensionNumber::NV_scissor_exclusive},
        {"VK_NV_device_diagnostic_checkpoints", ExtensionNumber::NV_device_diagnostic_checkpoints},
        {"VK_INTEL_shader_integer_functions2", ExtensionNumber::INTEL_shader_integer_functions2},
        {"VK_INTEL_performance_query", ExtensionNumber::INTEL_performance_query},
        {"VK_EXT_pci_bus_info", ExtensionNumber::EXT_pci_bus_info},
        {"VK_AMD_display_native_hdr", ExtensionNumber::AMD_display_native_hdr},
#ifdef VK_USE_PLATFORM_FUCHSIA
        {"VK_FUCHSIA_imagepipe_surface", ExtensionNumber::FUCHSIA_imagepipe_surface},
#endif  // VK_USE_PLATFORM_FUCHSIA
#ifdef VK_USE_PLATFORM_METAL_EXT
        {"VK_EXT_metal_surface", ExtensionNumber::EXT_metal_surface},
#endif  // VK_USE_PLATFORM_METAL_EXT
        {"VK_EXT_fragment_density_map", ExtensionNumber::EXT_fragment_density_map},
        {"VK_EXT_scalar_block_layout", ExtensionNumber::EXT_scalar_block_layout},
        {"VK_GOOGLE_hlsl_functionality1", ExtensionNumber::GOOGLE_hlsl_functionality1},
        {"VK_GOOGLE_decorate_string", ExtensionNumber::GOOGLE_decorate_string},
        {"VK_EXT_subgroup_size_control", ExtensionNumber::EXT_subgroup_size_control},
        {"VK_AMD_shader_core_properties2", ExtensionNumber::AMD_shader_core_properties2},
        {"VK_AMD_device_coherent_memory", ExtensionNumber::AMD_device_coherent_memory},
        {"VK_EXT_shader_image_atomic_int64", ExtensionNumber::EXT_shader_image_atomic_int64},
        {"VK_EXT_memory_budget", ExtensionNumber::EXT_memory_budget},
        {"VK_EXT_memory_priority", ExtensionNumber::EXT_memory_priority},
        {"VK_NV_dedicated_allocation_image_aliasing", ExtensionNumber::NV_dedicated_allocation_image_aliasing},
        {"VK_EXT_buffer_device_address", ExtensionNumber::EXT_buffer_device_address},
        {"VK_EXT_tooling_info", ExtensionNumber::EXT_tooling_info},
        {"VK_EXT_separate_stencil_usage", ExtensionNumber::EXT_separate_stencil_usage},
        {"VK_EXT_validation_features", ExtensionNumber::EXT_validation_features},
        {"VK_NV_cooperative_matrix", ExtensionNumber::NV_cooperative_matrix},
        {"VK_NV_coverage_reduction_mode", ExtensionNumber::NV_coverage_reduction_mode},
        {"VK_EXT_fragment_shader_interlock", ExtensionNumber::EXT_fragment_shader_interlock},
        {"VK_EXT_ycbcr_image_arrays", ExtensionNumber::EXT_ycbcr_image_arrays},
        {"VK_EXT_provoking_vertex", ExtensionNumber::EXT_provoking_vertex},
#ifdef VK_USE_PLATFORM_WIN32_KHR
        {"VK_EXT_full_screen_exclusive", ExtensionNumber::EXT_full_screen_exclusive},
#endif  // VK_USE_PLATFORM_WIN32_KHR
        {"VK_EXT_headless_surface", ExtensionNumber::EXT_headless_surface},
        {"VK_EXT_line_rasterization", ExtensionNumber::EXT_line_rasterization},
        {"VK_EXT_shader_atomic_float", ExtensionNumber::EXT_shader_atomic_float},
        {"VK_EXT_host_query_reset", ExtensionNumber::EXT_host_query_reset},
        {"VK_EXT_index_type_uint8", ExtensionNumber::EXT_index_type_uint8},
        {"VK_EXT_extended_dynamic_state", ExtensionNumber::EXT_extended_dynamic_state},
        {"VK_EXT_host_image_copy", ExtensionNumber::EXT_host_image_copy},
        {"VK_EXT_map_memory_placed", ExtensionNumber::EXT_map_memory_placed},
        {"VK_EXT_shader_atomic_float2", ExtensionNumber::EXT_shader_atomic_float2},
        {"VK_EXT_surface_maintenance1", ExtensionNumber::EXT_surface_maintenance1},
        {"VK_EXT_swapchain_maintenance1", ExtensionNumber::EXT_swapchain_maintenance1},
        {"VK_EXT_shader_demote_to_helper_invocation", ExtensionNumber::EXT_shader_demote_to_helper_invocation},
        {"VK_NV_device_generated_commands", ExtensionNumber::NV_device_generated_commands},
        {"VK_NV_inherited_viewport_scissor", ExtensionNumber::NV_inherited_viewport_scissor},
        {"VK_EXT_texel_buffer_alignment", ExtensionNumber::EXT_texel_buffer_alignment},
        {"VK_QCOM_render_pass_transform", ExtensionNumber::QCOM_render_pass_transform},
        {"VK_EXT_depth_bias_control", ExtensionNumber::EXT_depth_bias_control},
        {"VK_EXT_device_memory_report", ExtensionNumber::EXT_device_memory_report},
        {"VK_EXT_acquire_drm_display", ExtensionNumber::EXT_acquire_drm_display},
        {"VK_EXT_robustness2", ExtensionNumber::EXT_robustness2},
        {"VK_EXT_custom_border_color", ExtensionNumber::EXT_custom_border_color},
        {"VK_GOOGLE_user_type", ExtensionNumber::GOOGLE_user_type},
        {"VK_NV_present_barrier", ExtensionNumber::NV_present_barrier},
        {"VK_EXT_private_data", ExtensionNumber::EXT_private_data},
        {"VK_EXT_pipeline_creation_cache_control", ExtensionNumber::EXT_pipeline_creation_cache_control},
        {"VK_NV_device_diagnostics_config", ExtensionNumber::NV_device_diagnostics_config},
        {"VK_QCOM_render_pass_store_ops", ExtensionNumber::QCOM_render_pass_store_ops},
#ifdef VK_ENABLE_BETA_EXTENSIONS
        {"VK_NV_cuda_kernel_launch", ExtensionNumber::NV_cuda_kernel_launch},
#endif  // VK_ENABLE_BETA_EXTENSIONS
        {"VK_QCOM_tile_shading", ExtensionNumber::QCOM_tile_shading},
        {"VK_NV_low_latency", ExtensionNumber::NV_low_latency},
#ifdef VK_USE_PLATFORM_METAL_EXT
        {"VK_EXT_metal_objects", ExtensionNumber::EXT_metal_objects},
#endif  // VK_USE_PLATFORM_METAL_EXT
        {"VK_EXT_descriptor_buffer", ExtensionNumber::EXT_descriptor_buffer},
        {"VK_EXT_graphics_pipeline_library", ExtensionNumber::EXT_graphics_pipeline_library},
        {"VK_AMD_shader_early_and_late_fragment_tests", ExtensionNumber::AMD_shader_early_and_late_fragment_tests},
        {"VK_NV_fragment_shading_rate_enums", ExtensionNumber::NV_fragment_shading_rate_enums},
        {"VK_NV_ray_tracing_motion_blur", ExtensionNumber::NV_ray_tracing_motion_blur},
        {"VK_EXT_ycbcr_2plane_444_formats", ExtensionNumber::EXT_ycbcr_2plane_444_formats},
        {"VK_EXT_fragment_density_map2", ExtensionNumber::EXT_fragment_density_map2},
        {"VK_QCOM_rotated_copy_commands", ExtensionNumber::QCOM_rotated_copy_commands},
        {"VK_EXT_image_robustness", ExtensionNumber::EXT_image_robustness},
        {"VK_EXT_image_compression_control", ExtensionNumber::EXT_image_compression_control},
        {"VK_EXT_attachment_feedback_loop_layout", ExtensionNumber::EXT_attachment_feedback_loop_layout},
        {"VK_EXT_4444_formats", ExtensionNumber::EXT_4444_formats},
        {"VK_EXT_device_fault", ExtensionNumber::EXT_device_fault},
        {"VK_ARM_rasterization_order_attachment_access", ExtensionNumber::ARM_rasterization_order_attachment_access},
        {"VK_EXT_rgba10x6_formats", ExtensionNumber::EXT_rgba10x6_formats},
#ifdef VK_USE_PLATFORM_WIN32_KHR
        {"VK_NV_acquire_winrt_display", ExtensionNumber::NV_acquire_winrt_display},
#endif  // VK_USE_PLATFORM_WIN32_KHR
#ifdef VK_USE_PLATFORM_DIRECTFB_EXT
        {"VK_EXT_directfb_surface", ExtensionNumber::EXT_directfb_surface},
#endif  // VK_USE_PLATFORM_DIRECTFB_EXT
        {"VK_VALVE_mutable_descriptor_type", ExtensionNumber::VALVE_mutable_descriptor_type},
        {"VK_EXT_vertex_input_dynamic_state", ExtensionNumber::EXT_vertex_input_dynamic_state},
        {"VK_EXT_physical_device_drm", ExtensionNumber::EXT_physical_device_drm},
        {"VK_EXT_device_address_binding_report", ExtensionNumber::EXT_device_address_binding_report},
        {"VK_EXT_depth_clip_control", ExtensionNumber::EXT_depth_clip_control},
        {"VK_EXT_primitive_topology_list_restart", ExtensionNumber::EXT_primitive_topology_list_restart},
        {"VK_EXT_present_mode_fifo_latest_ready", ExtensionNumber::EXT_present_mode_fifo_latest_ready},
#ifdef VK_USE_PLATFORM_FUCHSIA
        {"VK_FUCHSIA_external_memory", ExtensionNumber::FUCHSIA_external_memory},
        {"VK_FUCHSIA_external_semaphore", ExtensionNumber::FUCHSIA_external_semaphore},
        {"VK_FUCHSIA_buffer_collection", ExtensionNumber::FUCHSIA_buffer_collection},
#endif  // VK_USE_PLATFORM_FUCHSIA
        {"VK_HUAWEI_subpass_shading", ExtensionNumber::HUAWEI_subpass_shading},
        {"VK_HUAWEI_invocation_mask", ExtensionNumber::HUAWEI_invocation_mask},
        {"VK_NV_external_memory_rdma", ExtensionNumber::NV_external_memory_rdma},
        {"VK_EXT_pipeline_properties", ExtensionNumber::EXT_pipeline_properties},
        {"VK_EXT_frame_boundary", ExtensionNumber::EXT_frame_boundary},
        {"VK_EXT_multisampled_render_to_single_sampled", ExtensionNumber::EXT_multisampled_render_to_single_sampled},
        {"VK_EXT_extended_dynamic_state2", ExtensionNumber::EXT_extended_dynamic_state2},
#ifdef VK_USE_PLATFORM_SCREEN_QNX
        {"VK_QNX_screen_surface", ExtensionNumber::QNX_screen_surface},
#endif  // VK_USE_PLATFORM_SCREEN_QNX
        {"VK_EXT_color_write_enable", ExtensionNumber::EXT_color_write_enable},
        {"VK_EXT_primitives_generated_query", ExtensionNumber::EXT_primitives_generated_query},
        {"VK_EXT_global_priority_query", ExtensionNumber::EXT_global_priority_query},
        {"VK_EXT_image_view_min_lod", ExtensionNumber::EXT_image_view_min_lod},
        {"VK_EXT_multi_draw", ExtensionNumber::EXT_multi_draw},
        {"VK_EXT_image_2d_view_of_3d", ExtensionNumber::EXT_image_2d_view_of_3d},
        {"VK_EXT_shader_tile_image", ExtensionNumber::EXT_shader_tile_image},
        {"VK_EXT_opacity_micromap", ExtensionNumber::EXT_opacity_micromap},
#ifdef VK_ENABLE_BETA_EXTENSIONS
        {"VK_NV_displacement_micromap", ExtensionNumber::NV_displacement_micromap},
#endif  // VK_ENABLE_BETA_EXTENSIONS
        {"VK_EXT_load_store_op_none", ExtensionNumber::EXT_load_store_op_none},
        {"VK_HUAWEI_cluster_culling_shader", ExtensionNumber::HUAWEI_cluster_culling_shader},
        {"VK_EXT_border_color_swizzle", ExtensionNumber::EXT_border_color_swizzle},
        {"VK_EXT_pageable_device_local_memory", ExtensionNumber::EXT_pageable_device_local_memory},
        {"VK_ARM_shader_core_properties", ExtensionNumber::ARM_shader_core_properties},
        {"VK_ARM_scheduling_controls", ExtensionNumber::ARM_scheduling_controls},
        {"VK_EXT_image_sliced_view_of_3d", ExtensionNumber::EXT_image_sliced_view_of_3d},
        {"VK_VALVE_descriptor_set_host_mapping", ExtensionNumber::VALVE_descriptor_set_host_mapping},
        {"VK_EXT_depth_clamp_zero_one", ExtensionNumber::EXT_depth_clamp_zero_one},
        {"VK_EXT_non_seamless_cube_map", ExtensionNumber::EXT_non_seamless_cube_map},
        {"VK_ARM_render_pass_striped", ExtensionNumber::ARM_render_pass_striped},
        {"VK_QCOM_fragment_density_map_offset", ExtensionNumber::QCOM_fragment_density_map_offset},
        {"VK_NV_copy_memory_indirect", ExtensionNumber::NV_copy_memory_indirect},
        {"VK_NV_memory_decompression", ExtensionNumber::NV_memory_decompression},
        {"VK_NV_device_generated_commands_compute", ExtensionNumber::NV_device_generated_commands_compute},
        {"VK_NV_ray_tracing_linear_swept_spheres", ExtensionNumber::NV_ray_tracing_linear_swept_spheres},
        {"VK_NV_linear_color_attachment", ExtensionNumber::NV_linear_color_attachment},
        {"VK_GOOGLE_surfaceless_query", ExtensionNumber::GOOGLE_surfaceless_query},
        {"VK_EXT_image_compression_control_swapchain", ExtensionNumber::EXT_image_compression_control_swapchain},
        {"VK_QCOM_image_processing", ExtensionNumber::QCOM_image_processing},
        {"VK_EXT_nested_command_buffer", ExtensionNumber::EXT_nested_command_buffer},
        {"VK_EXT_external_memory_acquire_unmodified", ExtensionNumber::EXT_external_memory_acquire_unmodified},
        {"VK_EXT_extended_dynamic_state3", ExtensionNumber::EXT_extended_dynamic_state3},
        {"VK_EXT_subpass_merge_feedback", ExtensionNumber::EXT_subpass_merge_feedback},
        {"VK_LUNARG_direct_driver_loading", ExtensionNumber::LUNARG_direct_driver_loading},
        {"VK_ARM_tensors", ExtensionNumber::ARM_tensors},
        {"VK_EXT_shader_module_identifier", ExtensionNumber::EXT_shader_module_identifier},
        {"VK_EXT_rasterization_order_attachment_access", ExtensionNumber::EXT_rasterization_order_attachment_access},
        {"VK_NV_optical_flow", ExtensionNumber::NV_optical_flow},
        {"VK_EXT_legacy_dithering", ExtensionNumber::EXT_legacy_dithering},
        {"VK_EXT_pipeline_protected_access", ExtensionNumber::EXT_pipeline_protected_access},
#ifdef VK_USE_PLATFORM_ANDROID_KHR
        {"VK_ANDROID_external_format_resolve", ExtensionNumber::ANDROID_external_format_resolve},
#endif  // VK_USE_PLATFORM_ANDROID_KHR
        {"VK_AMD_anti_lag", ExtensionNumber::AMD_anti_lag},
        {"VK_EXT_shader_object", ExtensionNumber::EXT_shader_object},
        {"VK_QCOM_tile_properties", ExtensionNumber::QCOM_tile_properties},
        {"VK_SEC_amigo_profiling", ExtensionNumber::SEC_amigo_profiling},
        {"VK_QCOM_multiview_per_view_viewports", ExtensionNumber::QCOM_multiview_per_view_viewports},
        {"VK_NV_ray_tracing_invocation_reorder", ExtensionNumber::NV_ray_tracing_invocation_reorder},
        {"VK_NV_cooperative_vector", ExtensionNumber::NV_cooperative_vector},
        {"VK_NV_extended_sparse_address_space", ExtensionNumber::NV_extended_sparse_address_space},
        {"VK_EXT_mutable_descriptor_type", ExtensionNumber::EXT_mutable_descriptor_type},
        {"VK_EXT_legacy_vertex_attributes", ExtensionNumber::EXT_legacy_vertex_attributes},
        {"VK_EXT_layer_settings", ExtensionNumber::EXT_layer_settings},
        {"VK_ARM_shader_core_builtins", ExtensionNumber::ARM_shader_core_builtins},
        {"VK_EXT_pipeline_library_group_handles", ExtensionNumber::EXT_pipeline_library_group_handles},
        {"VK_EXT_dynamic_rendering_unused_attachments", ExtensionNumber::EXT_dynamic_rendering_unused_attachments},
        {"VK_NV_low_latency2", ExtensionNumber::NV_low_latency2},
        {"VK_ARM_data_graph", ExtensionNumber::ARM_data_graph},
        {"VK_QCOM_multiview_per_view_render_areas", ExtensionNumber::QCOM_multiview_per_view_render_areas},
        {"VK_NV_per_stage_descriptor_set", ExtensionNumber::NV_per_stage_descriptor_set},
        {"VK_QCOM_image_processing2", ExtensionNumber::QCOM_image_processing2},
        {"VK_QCOM_filter_cubic_weights", ExtensionNumber::QCOM_filter_cubic_weights},
        {"VK_QCOM_ycbcr_degamma", ExtensionNumber::QCOM_ycbcr_degamma},
        {"VK_QCOM_filter_cubic_clamp", ExtensionNumber::QCOM_filter_cubic_clamp},
        {"VK_EXT_attachment_feedback_loop_dynamic_state", ExtensionNumber::EXT_attachment_feedback_loop_dynamic_state},
#ifdef VK_USE_PLATFORM_SCREEN_QNX
        {"VK_QNX_external_memory_screen_buffer", ExtensionNumber::QNX_external_memory_screen_buffer},
#endif  // VK_USE_PLATFORM_SCREEN_QNX
        {"VK_MSFT_layered_driver", ExtensionNumber::MSFT_layered_driver},
        {"VK_NV_descriptor_pool_overallocation", ExtensionNumber::NV_descriptor_pool_overallocation},
        {"VK_QCOM_tile_memory_heap", ExtensionNumber::QCOM_tile_memory_heap},
        {"VK_NV_display_stereo", ExtensionNumber::NV_display_stereo},
        {"VK_NV_raw_access_chains", ExtensionNumber::NV_raw_access_chains},
        {"VK_NV_external_compute_queue", ExtensionNumber::NV_external_compute_queue},
        {"VK_NV_command_buffer_inheritance", ExtensionNumber::NV_command_buffer_inheritance},
        {"VK_NV_shader_atomic_float16_vector", ExtensionNumber::NV_shader_atomic_float16_vector},
        {"VK_EXT_shader_replicated_composites", ExtensionNumber::EXT_shader_replicated_composites},
        {"VK_EXT_shader_float8", ExtensionNumber::EXT_shader_float8},
        {"VK_NV_ray_tracing_validation", ExtensionNumber::NV_ray_tracing_validation},
        {"VK_NV_cluster_acceleration_structure", ExtensionNumber::NV_cluster_acceleration_structure},
        {"VK_NV_partitioned_acceleration_structure", ExtensionNumber::NV_partitioned_acceleration_structure},
        {"VK_EXT_device_generated_commands", ExtensionNumber::EXT_device_generated_commands},
        {"VK_MESA_image_alignment_control", ExtensionNumber::MESA_image_alignment_control},
        {"VK_EXT_depth_clamp_control", ExtensionNumber::EXT_depth_clamp_control},
#ifdef VK_USE_PLATFORM_OHOS
        {"VK_OHOS_surface", ExtensionNumber::OHOS_surface},
#endif  // VK_USE_PLATFORM_OHOS
        {"VK_HUAWEI_hdr_vivid", ExtensionNumber::HUAWEI_hdr_vivid},
        {"VK_NV_cooperative_matrix2", ExtensionNumber::NV_cooperative_matrix2},
        {"VK_ARM_pipeline_opacity_micromap", ExtensionNumber::ARM_pipeline_opacity_micromap},
#ifdef VK_USE_PLATFORM_METAL_EXT
        {"VK_EXT_external_memory_metal", ExtensionNumber::EXT_external_memory_metal},
#endif  // VK_USE_PLATFORM_METAL_EXT
        {"VK_EXT_vertex_attribute_robustness", ExtensionNumber::EXT_vertex_attribute_robustness},
        {"VK_ARM_format_pack", ExtensionNumber::ARM_format_pack},
        {"VK_VALVE_fragment_density_map_layered", ExtensionNumber::VALVE_fragment_density_map_layered},
#ifdef VK_ENABLE_BETA_EXTENSIONS
        {"VK_NV_present_metering", ExtensionNumber::NV_present_metering},
#endif  // VK_ENABLE_BETA_EXTENSIONS
        {"VK_EXT_fragment_density_map_offset", ExtensionNumber::EXT_fragment_density_map_offset},
        {"VK_EXT_zero_initialize_device_memory", ExtensionNumber::EXT_zero_initialize_device_memory},
        {"VK_KHR_acceleration_structure", ExtensionNumber::KHR_acceleration_structure},
        {"VK_KHR_ray_tracing_pipeline", ExtensionNumber::KHR_ray_tracing_pipeline},
        {"VK_KHR_ray_query", ExtensionNumber::KHR_ray_query},
        {"VK_EXT_mesh_shader", ExtensionNumber::EXT_mesh_shader},

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
#ifdef VK_USE_PLATFORM_XLIB_KHR
        case ExtensionNumber::KHR_xlib_surface:
            return "VK_KHR_xlib_surface";
            break;
#endif  // VK_USE_PLATFORM_XLIB_KHR
#ifdef VK_USE_PLATFORM_XCB_KHR
        case ExtensionNumber::KHR_xcb_surface:
            return "VK_KHR_xcb_surface";
            break;
#endif  // VK_USE_PLATFORM_XCB_KHR
#ifdef VK_USE_PLATFORM_WAYLAND_KHR
        case ExtensionNumber::KHR_wayland_surface:
            return "VK_KHR_wayland_surface";
            break;
#endif  // VK_USE_PLATFORM_WAYLAND_KHR
#ifdef VK_USE_PLATFORM_ANDROID_KHR
        case ExtensionNumber::KHR_android_surface:
            return "VK_KHR_android_surface";
            break;
#endif  // VK_USE_PLATFORM_ANDROID_KHR
#ifdef VK_USE_PLATFORM_WIN32_KHR
        case ExtensionNumber::KHR_win32_surface:
            return "VK_KHR_win32_surface";
            break;
#endif  // VK_USE_PLATFORM_WIN32_KHR
        case ExtensionNumber::KHR_sampler_mirror_clamp_to_edge:
            return "VK_KHR_sampler_mirror_clamp_to_edge";
            break;
        case ExtensionNumber::KHR_video_queue:
            return "VK_KHR_video_queue";
            break;
        case ExtensionNumber::KHR_video_decode_queue:
            return "VK_KHR_video_decode_queue";
            break;
        case ExtensionNumber::KHR_video_encode_h264:
            return "VK_KHR_video_encode_h264";
            break;
        case ExtensionNumber::KHR_video_encode_h265:
            return "VK_KHR_video_encode_h265";
            break;
        case ExtensionNumber::KHR_video_decode_h264:
            return "VK_KHR_video_decode_h264";
            break;
        case ExtensionNumber::KHR_dynamic_rendering:
            return "VK_KHR_dynamic_rendering";
            break;
        case ExtensionNumber::KHR_multiview:
            return "VK_KHR_multiview";
            break;
        case ExtensionNumber::KHR_get_physical_device_properties2:
            return "VK_KHR_get_physical_device_properties2";
            break;
        case ExtensionNumber::KHR_device_group:
            return "VK_KHR_device_group";
            break;
        case ExtensionNumber::KHR_shader_draw_parameters:
            return "VK_KHR_shader_draw_parameters";
            break;
        case ExtensionNumber::KHR_maintenance1:
            return "VK_KHR_maintenance1";
            break;
        case ExtensionNumber::KHR_device_group_creation:
            return "VK_KHR_device_group_creation";
            break;
        case ExtensionNumber::KHR_external_memory_capabilities:
            return "VK_KHR_external_memory_capabilities";
            break;
        case ExtensionNumber::KHR_external_memory:
            return "VK_KHR_external_memory";
            break;
#ifdef VK_USE_PLATFORM_WIN32_KHR
        case ExtensionNumber::KHR_external_memory_win32:
            return "VK_KHR_external_memory_win32";
            break;
#endif  // VK_USE_PLATFORM_WIN32_KHR
        case ExtensionNumber::KHR_external_memory_fd:
            return "VK_KHR_external_memory_fd";
            break;
#ifdef VK_USE_PLATFORM_WIN32_KHR
        case ExtensionNumber::KHR_win32_keyed_mutex:
            return "VK_KHR_win32_keyed_mutex";
            break;
#endif  // VK_USE_PLATFORM_WIN32_KHR
        case ExtensionNumber::KHR_external_semaphore_capabilities:
            return "VK_KHR_external_semaphore_capabilities";
            break;
        case ExtensionNumber::KHR_external_semaphore:
            return "VK_KHR_external_semaphore";
            break;
#ifdef VK_USE_PLATFORM_WIN32_KHR
        case ExtensionNumber::KHR_external_semaphore_win32:
            return "VK_KHR_external_semaphore_win32";
            break;
#endif  // VK_USE_PLATFORM_WIN32_KHR
        case ExtensionNumber::KHR_external_semaphore_fd:
            return "VK_KHR_external_semaphore_fd";
            break;
        case ExtensionNumber::KHR_push_descriptor:
            return "VK_KHR_push_descriptor";
            break;
        case ExtensionNumber::KHR_shader_float16_int8:
            return "VK_KHR_shader_float16_int8";
            break;
        case ExtensionNumber::KHR_16bit_storage:
            return "VK_KHR_16bit_storage";
            break;
        case ExtensionNumber::KHR_incremental_present:
            return "VK_KHR_incremental_present";
            break;
        case ExtensionNumber::KHR_descriptor_update_template:
            return "VK_KHR_descriptor_update_template";
            break;
        case ExtensionNumber::KHR_imageless_framebuffer:
            return "VK_KHR_imageless_framebuffer";
            break;
        case ExtensionNumber::KHR_create_renderpass2:
            return "VK_KHR_create_renderpass2";
            break;
        case ExtensionNumber::KHR_shared_presentable_image:
            return "VK_KHR_shared_presentable_image";
            break;
        case ExtensionNumber::KHR_external_fence_capabilities:
            return "VK_KHR_external_fence_capabilities";
            break;
        case ExtensionNumber::KHR_external_fence:
            return "VK_KHR_external_fence";
            break;
#ifdef VK_USE_PLATFORM_WIN32_KHR
        case ExtensionNumber::KHR_external_fence_win32:
            return "VK_KHR_external_fence_win32";
            break;
#endif  // VK_USE_PLATFORM_WIN32_KHR
        case ExtensionNumber::KHR_external_fence_fd:
            return "VK_KHR_external_fence_fd";
            break;
        case ExtensionNumber::KHR_performance_query:
            return "VK_KHR_performance_query";
            break;
        case ExtensionNumber::KHR_maintenance2:
            return "VK_KHR_maintenance2";
            break;
        case ExtensionNumber::KHR_get_surface_capabilities2:
            return "VK_KHR_get_surface_capabilities2";
            break;
        case ExtensionNumber::KHR_variable_pointers:
            return "VK_KHR_variable_pointers";
            break;
        case ExtensionNumber::KHR_get_display_properties2:
            return "VK_KHR_get_display_properties2";
            break;
        case ExtensionNumber::KHR_dedicated_allocation:
            return "VK_KHR_dedicated_allocation";
            break;
        case ExtensionNumber::KHR_storage_buffer_storage_class:
            return "VK_KHR_storage_buffer_storage_class";
            break;
        case ExtensionNumber::KHR_shader_bfloat16:
            return "VK_KHR_shader_bfloat16";
            break;
        case ExtensionNumber::KHR_relaxed_block_layout:
            return "VK_KHR_relaxed_block_layout";
            break;
        case ExtensionNumber::KHR_get_memory_requirements2:
            return "VK_KHR_get_memory_requirements2";
            break;
        case ExtensionNumber::KHR_image_format_list:
            return "VK_KHR_image_format_list";
            break;
        case ExtensionNumber::KHR_sampler_ycbcr_conversion:
            return "VK_KHR_sampler_ycbcr_conversion";
            break;
        case ExtensionNumber::KHR_bind_memory2:
            return "VK_KHR_bind_memory2";
            break;
#ifdef VK_ENABLE_BETA_EXTENSIONS
        case ExtensionNumber::KHR_portability_subset:
            return "VK_KHR_portability_subset";
            break;
#endif  // VK_ENABLE_BETA_EXTENSIONS
        case ExtensionNumber::KHR_maintenance3:
            return "VK_KHR_maintenance3";
            break;
        case ExtensionNumber::KHR_draw_indirect_count:
            return "VK_KHR_draw_indirect_count";
            break;
        case ExtensionNumber::KHR_shader_subgroup_extended_types:
            return "VK_KHR_shader_subgroup_extended_types";
            break;
        case ExtensionNumber::KHR_8bit_storage:
            return "VK_KHR_8bit_storage";
            break;
        case ExtensionNumber::KHR_shader_atomic_int64:
            return "VK_KHR_shader_atomic_int64";
            break;
        case ExtensionNumber::KHR_shader_clock:
            return "VK_KHR_shader_clock";
            break;
        case ExtensionNumber::KHR_video_decode_h265:
            return "VK_KHR_video_decode_h265";
            break;
        case ExtensionNumber::KHR_global_priority:
            return "VK_KHR_global_priority";
            break;
        case ExtensionNumber::KHR_driver_properties:
            return "VK_KHR_driver_properties";
            break;
        case ExtensionNumber::KHR_shader_float_controls:
            return "VK_KHR_shader_float_controls";
            break;
        case ExtensionNumber::KHR_depth_stencil_resolve:
            return "VK_KHR_depth_stencil_resolve";
            break;
        case ExtensionNumber::KHR_swapchain_mutable_format:
            return "VK_KHR_swapchain_mutable_format";
            break;
        case ExtensionNumber::KHR_timeline_semaphore:
            return "VK_KHR_timeline_semaphore";
            break;
        case ExtensionNumber::KHR_vulkan_memory_model:
            return "VK_KHR_vulkan_memory_model";
            break;
        case ExtensionNumber::KHR_shader_terminate_invocation:
            return "VK_KHR_shader_terminate_invocation";
            break;
        case ExtensionNumber::KHR_fragment_shading_rate:
            return "VK_KHR_fragment_shading_rate";
            break;
        case ExtensionNumber::KHR_dynamic_rendering_local_read:
            return "VK_KHR_dynamic_rendering_local_read";
            break;
        case ExtensionNumber::KHR_shader_quad_control:
            return "VK_KHR_shader_quad_control";
            break;
        case ExtensionNumber::KHR_spirv_1_4:
            return "VK_KHR_spirv_1_4";
            break;
        case ExtensionNumber::KHR_surface_protected_capabilities:
            return "VK_KHR_surface_protected_capabilities";
            break;
        case ExtensionNumber::KHR_separate_depth_stencil_layouts:
            return "VK_KHR_separate_depth_stencil_layouts";
            break;
        case ExtensionNumber::KHR_present_wait:
            return "VK_KHR_present_wait";
            break;
        case ExtensionNumber::KHR_uniform_buffer_standard_layout:
            return "VK_KHR_uniform_buffer_standard_layout";
            break;
        case ExtensionNumber::KHR_buffer_device_address:
            return "VK_KHR_buffer_device_address";
            break;
        case ExtensionNumber::KHR_deferred_host_operations:
            return "VK_KHR_deferred_host_operations";
            break;
        case ExtensionNumber::KHR_pipeline_executable_properties:
            return "VK_KHR_pipeline_executable_properties";
            break;
        case ExtensionNumber::KHR_map_memory2:
            return "VK_KHR_map_memory2";
            break;
        case ExtensionNumber::KHR_shader_integer_dot_product:
            return "VK_KHR_shader_integer_dot_product";
            break;
        case ExtensionNumber::KHR_pipeline_library:
            return "VK_KHR_pipeline_library";
            break;
        case ExtensionNumber::KHR_shader_non_semantic_info:
            return "VK_KHR_shader_non_semantic_info";
            break;
        case ExtensionNumber::KHR_present_id:
            return "VK_KHR_present_id";
            break;
        case ExtensionNumber::KHR_video_encode_queue:
            return "VK_KHR_video_encode_queue";
            break;
        case ExtensionNumber::KHR_synchronization2:
            return "VK_KHR_synchronization2";
            break;
        case ExtensionNumber::KHR_fragment_shader_barycentric:
            return "VK_KHR_fragment_shader_barycentric";
            break;
        case ExtensionNumber::KHR_shader_subgroup_uniform_control_flow:
            return "VK_KHR_shader_subgroup_uniform_control_flow";
            break;
        case ExtensionNumber::KHR_zero_initialize_workgroup_memory:
            return "VK_KHR_zero_initialize_workgroup_memory";
            break;
        case ExtensionNumber::KHR_workgroup_memory_explicit_layout:
            return "VK_KHR_workgroup_memory_explicit_layout";
            break;
        case ExtensionNumber::KHR_copy_commands2:
            return "VK_KHR_copy_commands2";
            break;
        case ExtensionNumber::KHR_format_feature_flags2:
            return "VK_KHR_format_feature_flags2";
            break;
        case ExtensionNumber::KHR_ray_tracing_maintenance1:
            return "VK_KHR_ray_tracing_maintenance1";
            break;
        case ExtensionNumber::KHR_portability_enumeration:
            return "VK_KHR_portability_enumeration";
            break;
        case ExtensionNumber::KHR_maintenance4:
            return "VK_KHR_maintenance4";
            break;
        case ExtensionNumber::KHR_shader_subgroup_rotate:
            return "VK_KHR_shader_subgroup_rotate";
            break;
        case ExtensionNumber::KHR_shader_maximal_reconvergence:
            return "VK_KHR_shader_maximal_reconvergence";
            break;
        case ExtensionNumber::KHR_maintenance5:
            return "VK_KHR_maintenance5";
            break;
        case ExtensionNumber::KHR_present_id2:
            return "VK_KHR_present_id2";
            break;
        case ExtensionNumber::KHR_present_wait2:
            return "VK_KHR_present_wait2";
            break;
        case ExtensionNumber::KHR_ray_tracing_position_fetch:
            return "VK_KHR_ray_tracing_position_fetch";
            break;
        case ExtensionNumber::KHR_pipeline_binary:
            return "VK_KHR_pipeline_binary";
            break;
        case ExtensionNumber::KHR_cooperative_matrix:
            return "VK_KHR_cooperative_matrix";
            break;
        case ExtensionNumber::KHR_compute_shader_derivatives:
            return "VK_KHR_compute_shader_derivatives";
            break;
        case ExtensionNumber::KHR_video_decode_av1:
            return "VK_KHR_video_decode_av1";
            break;
        case ExtensionNumber::KHR_video_encode_av1:
            return "VK_KHR_video_encode_av1";
            break;
        case ExtensionNumber::KHR_video_decode_vp9:
            return "VK_KHR_video_decode_vp9";
            break;
        case ExtensionNumber::KHR_video_maintenance1:
            return "VK_KHR_video_maintenance1";
            break;
        case ExtensionNumber::KHR_vertex_attribute_divisor:
            return "VK_KHR_vertex_attribute_divisor";
            break;
        case ExtensionNumber::KHR_load_store_op_none:
            return "VK_KHR_load_store_op_none";
            break;
        case ExtensionNumber::KHR_unified_image_layouts:
            return "VK_KHR_unified_image_layouts";
            break;
        case ExtensionNumber::KHR_shader_float_controls2:
            return "VK_KHR_shader_float_controls2";
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
        case ExtensionNumber::KHR_shader_expect_assume:
            return "VK_KHR_shader_expect_assume";
            break;
        case ExtensionNumber::KHR_maintenance6:
            return "VK_KHR_maintenance6";
            break;
        case ExtensionNumber::KHR_video_encode_quantization_map:
            return "VK_KHR_video_encode_quantization_map";
            break;
        case ExtensionNumber::KHR_shader_relaxed_extended_instruction:
            return "VK_KHR_shader_relaxed_extended_instruction";
            break;
        case ExtensionNumber::KHR_maintenance7:
            return "VK_KHR_maintenance7";
            break;
        case ExtensionNumber::KHR_maintenance8:
            return "VK_KHR_maintenance8";
            break;
        case ExtensionNumber::KHR_maintenance9:
            return "VK_KHR_maintenance9";
            break;
        case ExtensionNumber::KHR_video_maintenance2:
            return "VK_KHR_video_maintenance2";
            break;
        case ExtensionNumber::KHR_depth_clamp_zero_one:
            return "VK_KHR_depth_clamp_zero_one";
            break;
        case ExtensionNumber::KHR_robustness2:
            return "VK_KHR_robustness2";
            break;
        case ExtensionNumber::EXT_debug_report:
            return "VK_EXT_debug_report";
            break;
        case ExtensionNumber::NV_glsl_shader:
            return "VK_NV_glsl_shader";
            break;
        case ExtensionNumber::EXT_depth_range_unrestricted:
            return "VK_EXT_depth_range_unrestricted";
            break;
        case ExtensionNumber::IMG_filter_cubic:
            return "VK_IMG_filter_cubic";
            break;
        case ExtensionNumber::AMD_rasterization_order:
            return "VK_AMD_rasterization_order";
            break;
        case ExtensionNumber::AMD_shader_trinary_minmax:
            return "VK_AMD_shader_trinary_minmax";
            break;
        case ExtensionNumber::AMD_shader_explicit_vertex_parameter:
            return "VK_AMD_shader_explicit_vertex_parameter";
            break;
        case ExtensionNumber::EXT_debug_marker:
            return "VK_EXT_debug_marker";
            break;
        case ExtensionNumber::AMD_gcn_shader:
            return "VK_AMD_gcn_shader";
            break;
        case ExtensionNumber::NV_dedicated_allocation:
            return "VK_NV_dedicated_allocation";
            break;
        case ExtensionNumber::EXT_transform_feedback:
            return "VK_EXT_transform_feedback";
            break;
        case ExtensionNumber::NVX_binary_import:
            return "VK_NVX_binary_import";
            break;
        case ExtensionNumber::NVX_image_view_handle:
            return "VK_NVX_image_view_handle";
            break;
        case ExtensionNumber::AMD_draw_indirect_count:
            return "VK_AMD_draw_indirect_count";
            break;
        case ExtensionNumber::AMD_negative_viewport_height:
            return "VK_AMD_negative_viewport_height";
            break;
        case ExtensionNumber::AMD_gpu_shader_half_float:
            return "VK_AMD_gpu_shader_half_float";
            break;
        case ExtensionNumber::AMD_shader_ballot:
            return "VK_AMD_shader_ballot";
            break;
        case ExtensionNumber::AMD_texture_gather_bias_lod:
            return "VK_AMD_texture_gather_bias_lod";
            break;
        case ExtensionNumber::AMD_shader_info:
            return "VK_AMD_shader_info";
            break;
        case ExtensionNumber::AMD_shader_image_load_store_lod:
            return "VK_AMD_shader_image_load_store_lod";
            break;
#ifdef VK_USE_PLATFORM_GGP
        case ExtensionNumber::GGP_stream_descriptor_surface:
            return "VK_GGP_stream_descriptor_surface";
            break;
#endif  // VK_USE_PLATFORM_GGP
        case ExtensionNumber::NV_corner_sampled_image:
            return "VK_NV_corner_sampled_image";
            break;
        case ExtensionNumber::IMG_format_pvrtc:
            return "VK_IMG_format_pvrtc";
            break;
        case ExtensionNumber::NV_external_memory_capabilities:
            return "VK_NV_external_memory_capabilities";
            break;
        case ExtensionNumber::NV_external_memory:
            return "VK_NV_external_memory";
            break;
#ifdef VK_USE_PLATFORM_WIN32_KHR
        case ExtensionNumber::NV_external_memory_win32:
            return "VK_NV_external_memory_win32";
            break;
        case ExtensionNumber::NV_win32_keyed_mutex:
            return "VK_NV_win32_keyed_mutex";
            break;
#endif  // VK_USE_PLATFORM_WIN32_KHR
        case ExtensionNumber::EXT_validation_flags:
            return "VK_EXT_validation_flags";
            break;
#ifdef VK_USE_PLATFORM_VI_NN
        case ExtensionNumber::NN_vi_surface:
            return "VK_NN_vi_surface";
            break;
#endif  // VK_USE_PLATFORM_VI_NN
        case ExtensionNumber::EXT_shader_subgroup_ballot:
            return "VK_EXT_shader_subgroup_ballot";
            break;
        case ExtensionNumber::EXT_shader_subgroup_vote:
            return "VK_EXT_shader_subgroup_vote";
            break;
        case ExtensionNumber::EXT_texture_compression_astc_hdr:
            return "VK_EXT_texture_compression_astc_hdr";
            break;
        case ExtensionNumber::EXT_astc_decode_mode:
            return "VK_EXT_astc_decode_mode";
            break;
        case ExtensionNumber::EXT_pipeline_robustness:
            return "VK_EXT_pipeline_robustness";
            break;
        case ExtensionNumber::EXT_conditional_rendering:
            return "VK_EXT_conditional_rendering";
            break;
        case ExtensionNumber::NV_clip_space_w_scaling:
            return "VK_NV_clip_space_w_scaling";
            break;
        case ExtensionNumber::EXT_direct_mode_display:
            return "VK_EXT_direct_mode_display";
            break;
#ifdef VK_USE_PLATFORM_XLIB_XRANDR_EXT
        case ExtensionNumber::EXT_acquire_xlib_display:
            return "VK_EXT_acquire_xlib_display";
            break;
#endif  // VK_USE_PLATFORM_XLIB_XRANDR_EXT
        case ExtensionNumber::EXT_display_surface_counter:
            return "VK_EXT_display_surface_counter";
            break;
        case ExtensionNumber::EXT_display_control:
            return "VK_EXT_display_control";
            break;
        case ExtensionNumber::GOOGLE_display_timing:
            return "VK_GOOGLE_display_timing";
            break;
        case ExtensionNumber::NV_sample_mask_override_coverage:
            return "VK_NV_sample_mask_override_coverage";
            break;
        case ExtensionNumber::NV_geometry_shader_passthrough:
            return "VK_NV_geometry_shader_passthrough";
            break;
        case ExtensionNumber::NV_viewport_array2:
            return "VK_NV_viewport_array2";
            break;
        case ExtensionNumber::NVX_multiview_per_view_attributes:
            return "VK_NVX_multiview_per_view_attributes";
            break;
        case ExtensionNumber::NV_viewport_swizzle:
            return "VK_NV_viewport_swizzle";
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
        case ExtensionNumber::IMG_relaxed_line_rasterization:
            return "VK_IMG_relaxed_line_rasterization";
            break;
#ifdef VK_USE_PLATFORM_IOS_MVK
        case ExtensionNumber::MVK_ios_surface:
            return "VK_MVK_ios_surface";
            break;
#endif  // VK_USE_PLATFORM_IOS_MVK
#ifdef VK_USE_PLATFORM_MACOS_MVK
        case ExtensionNumber::MVK_macos_surface:
            return "VK_MVK_macos_surface";
            break;
#endif  // VK_USE_PLATFORM_MACOS_MVK
        case ExtensionNumber::EXT_external_memory_dma_buf:
            return "VK_EXT_external_memory_dma_buf";
            break;
        case ExtensionNumber::EXT_queue_family_foreign:
            return "VK_EXT_queue_family_foreign";
            break;
        case ExtensionNumber::EXT_debug_utils:
            return "VK_EXT_debug_utils";
            break;
#ifdef VK_USE_PLATFORM_ANDROID_KHR
        case ExtensionNumber::ANDROID_external_memory_android_hardware_buffer:
            return "VK_ANDROID_external_memory_android_hardware_buffer";
            break;
#endif  // VK_USE_PLATFORM_ANDROID_KHR
        case ExtensionNumber::EXT_sampler_filter_minmax:
            return "VK_EXT_sampler_filter_minmax";
            break;
        case ExtensionNumber::AMD_gpu_shader_int16:
            return "VK_AMD_gpu_shader_int16";
            break;
#ifdef VK_ENABLE_BETA_EXTENSIONS
        case ExtensionNumber::AMDX_shader_enqueue:
            return "VK_AMDX_shader_enqueue";
            break;
#endif  // VK_ENABLE_BETA_EXTENSIONS
        case ExtensionNumber::AMD_mixed_attachment_samples:
            return "VK_AMD_mixed_attachment_samples";
            break;
        case ExtensionNumber::AMD_shader_fragment_mask:
            return "VK_AMD_shader_fragment_mask";
            break;
        case ExtensionNumber::EXT_inline_uniform_block:
            return "VK_EXT_inline_uniform_block";
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
        case ExtensionNumber::NV_fragment_coverage_to_color:
            return "VK_NV_fragment_coverage_to_color";
            break;
        case ExtensionNumber::NV_framebuffer_mixed_samples:
            return "VK_NV_framebuffer_mixed_samples";
            break;
        case ExtensionNumber::NV_fill_rectangle:
            return "VK_NV_fill_rectangle";
            break;
        case ExtensionNumber::NV_shader_sm_builtins:
            return "VK_NV_shader_sm_builtins";
            break;
        case ExtensionNumber::EXT_post_depth_coverage:
            return "VK_EXT_post_depth_coverage";
            break;
        case ExtensionNumber::EXT_image_drm_format_modifier:
            return "VK_EXT_image_drm_format_modifier";
            break;
        case ExtensionNumber::EXT_validation_cache:
            return "VK_EXT_validation_cache";
            break;
        case ExtensionNumber::EXT_descriptor_indexing:
            return "VK_EXT_descriptor_indexing";
            break;
        case ExtensionNumber::EXT_shader_viewport_index_layer:
            return "VK_EXT_shader_viewport_index_layer";
            break;
        case ExtensionNumber::NV_shading_rate_image:
            return "VK_NV_shading_rate_image";
            break;
        case ExtensionNumber::NV_ray_tracing:
            return "VK_NV_ray_tracing";
            break;
        case ExtensionNumber::NV_representative_fragment_test:
            return "VK_NV_representative_fragment_test";
            break;
        case ExtensionNumber::EXT_filter_cubic:
            return "VK_EXT_filter_cubic";
            break;
        case ExtensionNumber::QCOM_render_pass_shader_resolve:
            return "VK_QCOM_render_pass_shader_resolve";
            break;
        case ExtensionNumber::EXT_global_priority:
            return "VK_EXT_global_priority";
            break;
        case ExtensionNumber::EXT_external_memory_host:
            return "VK_EXT_external_memory_host";
            break;
        case ExtensionNumber::AMD_buffer_marker:
            return "VK_AMD_buffer_marker";
            break;
        case ExtensionNumber::AMD_pipeline_compiler_control:
            return "VK_AMD_pipeline_compiler_control";
            break;
        case ExtensionNumber::EXT_calibrated_timestamps:
            return "VK_EXT_calibrated_timestamps";
            break;
        case ExtensionNumber::AMD_shader_core_properties:
            return "VK_AMD_shader_core_properties";
            break;
        case ExtensionNumber::AMD_memory_overallocation_behavior:
            return "VK_AMD_memory_overallocation_behavior";
            break;
        case ExtensionNumber::EXT_vertex_attribute_divisor:
            return "VK_EXT_vertex_attribute_divisor";
            break;
#ifdef VK_USE_PLATFORM_GGP
        case ExtensionNumber::GGP_frame_token:
            return "VK_GGP_frame_token";
            break;
#endif  // VK_USE_PLATFORM_GGP
        case ExtensionNumber::EXT_pipeline_creation_feedback:
            return "VK_EXT_pipeline_creation_feedback";
            break;
        case ExtensionNumber::NV_shader_subgroup_partitioned:
            return "VK_NV_shader_subgroup_partitioned";
            break;
        case ExtensionNumber::NV_compute_shader_derivatives:
            return "VK_NV_compute_shader_derivatives";
            break;
        case ExtensionNumber::NV_mesh_shader:
            return "VK_NV_mesh_shader";
            break;
        case ExtensionNumber::NV_fragment_shader_barycentric:
            return "VK_NV_fragment_shader_barycentric";
            break;
        case ExtensionNumber::NV_shader_image_footprint:
            return "VK_NV_shader_image_footprint";
            break;
        case ExtensionNumber::NV_scissor_exclusive:
            return "VK_NV_scissor_exclusive";
            break;
        case ExtensionNumber::NV_device_diagnostic_checkpoints:
            return "VK_NV_device_diagnostic_checkpoints";
            break;
        case ExtensionNumber::INTEL_shader_integer_functions2:
            return "VK_INTEL_shader_integer_functions2";
            break;
        case ExtensionNumber::INTEL_performance_query:
            return "VK_INTEL_performance_query";
            break;
        case ExtensionNumber::EXT_pci_bus_info:
            return "VK_EXT_pci_bus_info";
            break;
        case ExtensionNumber::AMD_display_native_hdr:
            return "VK_AMD_display_native_hdr";
            break;
#ifdef VK_USE_PLATFORM_FUCHSIA
        case ExtensionNumber::FUCHSIA_imagepipe_surface:
            return "VK_FUCHSIA_imagepipe_surface";
            break;
#endif  // VK_USE_PLATFORM_FUCHSIA
#ifdef VK_USE_PLATFORM_METAL_EXT
        case ExtensionNumber::EXT_metal_surface:
            return "VK_EXT_metal_surface";
            break;
#endif  // VK_USE_PLATFORM_METAL_EXT
        case ExtensionNumber::EXT_fragment_density_map:
            return "VK_EXT_fragment_density_map";
            break;
        case ExtensionNumber::EXT_scalar_block_layout:
            return "VK_EXT_scalar_block_layout";
            break;
        case ExtensionNumber::GOOGLE_hlsl_functionality1:
            return "VK_GOOGLE_hlsl_functionality1";
            break;
        case ExtensionNumber::GOOGLE_decorate_string:
            return "VK_GOOGLE_decorate_string";
            break;
        case ExtensionNumber::EXT_subgroup_size_control:
            return "VK_EXT_subgroup_size_control";
            break;
        case ExtensionNumber::AMD_shader_core_properties2:
            return "VK_AMD_shader_core_properties2";
            break;
        case ExtensionNumber::AMD_device_coherent_memory:
            return "VK_AMD_device_coherent_memory";
            break;
        case ExtensionNumber::EXT_shader_image_atomic_int64:
            return "VK_EXT_shader_image_atomic_int64";
            break;
        case ExtensionNumber::EXT_memory_budget:
            return "VK_EXT_memory_budget";
            break;
        case ExtensionNumber::EXT_memory_priority:
            return "VK_EXT_memory_priority";
            break;
        case ExtensionNumber::NV_dedicated_allocation_image_aliasing:
            return "VK_NV_dedicated_allocation_image_aliasing";
            break;
        case ExtensionNumber::EXT_buffer_device_address:
            return "VK_EXT_buffer_device_address";
            break;
        case ExtensionNumber::EXT_tooling_info:
            return "VK_EXT_tooling_info";
            break;
        case ExtensionNumber::EXT_separate_stencil_usage:
            return "VK_EXT_separate_stencil_usage";
            break;
        case ExtensionNumber::EXT_validation_features:
            return "VK_EXT_validation_features";
            break;
        case ExtensionNumber::NV_cooperative_matrix:
            return "VK_NV_cooperative_matrix";
            break;
        case ExtensionNumber::NV_coverage_reduction_mode:
            return "VK_NV_coverage_reduction_mode";
            break;
        case ExtensionNumber::EXT_fragment_shader_interlock:
            return "VK_EXT_fragment_shader_interlock";
            break;
        case ExtensionNumber::EXT_ycbcr_image_arrays:
            return "VK_EXT_ycbcr_image_arrays";
            break;
        case ExtensionNumber::EXT_provoking_vertex:
            return "VK_EXT_provoking_vertex";
            break;
#ifdef VK_USE_PLATFORM_WIN32_KHR
        case ExtensionNumber::EXT_full_screen_exclusive:
            return "VK_EXT_full_screen_exclusive";
            break;
#endif  // VK_USE_PLATFORM_WIN32_KHR
        case ExtensionNumber::EXT_headless_surface:
            return "VK_EXT_headless_surface";
            break;
        case ExtensionNumber::EXT_line_rasterization:
            return "VK_EXT_line_rasterization";
            break;
        case ExtensionNumber::EXT_shader_atomic_float:
            return "VK_EXT_shader_atomic_float";
            break;
        case ExtensionNumber::EXT_host_query_reset:
            return "VK_EXT_host_query_reset";
            break;
        case ExtensionNumber::EXT_index_type_uint8:
            return "VK_EXT_index_type_uint8";
            break;
        case ExtensionNumber::EXT_extended_dynamic_state:
            return "VK_EXT_extended_dynamic_state";
            break;
        case ExtensionNumber::EXT_host_image_copy:
            return "VK_EXT_host_image_copy";
            break;
        case ExtensionNumber::EXT_map_memory_placed:
            return "VK_EXT_map_memory_placed";
            break;
        case ExtensionNumber::EXT_shader_atomic_float2:
            return "VK_EXT_shader_atomic_float2";
            break;
        case ExtensionNumber::EXT_surface_maintenance1:
            return "VK_EXT_surface_maintenance1";
            break;
        case ExtensionNumber::EXT_swapchain_maintenance1:
            return "VK_EXT_swapchain_maintenance1";
            break;
        case ExtensionNumber::EXT_shader_demote_to_helper_invocation:
            return "VK_EXT_shader_demote_to_helper_invocation";
            break;
        case ExtensionNumber::NV_device_generated_commands:
            return "VK_NV_device_generated_commands";
            break;
        case ExtensionNumber::NV_inherited_viewport_scissor:
            return "VK_NV_inherited_viewport_scissor";
            break;
        case ExtensionNumber::EXT_texel_buffer_alignment:
            return "VK_EXT_texel_buffer_alignment";
            break;
        case ExtensionNumber::QCOM_render_pass_transform:
            return "VK_QCOM_render_pass_transform";
            break;
        case ExtensionNumber::EXT_depth_bias_control:
            return "VK_EXT_depth_bias_control";
            break;
        case ExtensionNumber::EXT_device_memory_report:
            return "VK_EXT_device_memory_report";
            break;
        case ExtensionNumber::EXT_acquire_drm_display:
            return "VK_EXT_acquire_drm_display";
            break;
        case ExtensionNumber::EXT_robustness2:
            return "VK_EXT_robustness2";
            break;
        case ExtensionNumber::EXT_custom_border_color:
            return "VK_EXT_custom_border_color";
            break;
        case ExtensionNumber::GOOGLE_user_type:
            return "VK_GOOGLE_user_type";
            break;
        case ExtensionNumber::NV_present_barrier:
            return "VK_NV_present_barrier";
            break;
        case ExtensionNumber::EXT_private_data:
            return "VK_EXT_private_data";
            break;
        case ExtensionNumber::EXT_pipeline_creation_cache_control:
            return "VK_EXT_pipeline_creation_cache_control";
            break;
        case ExtensionNumber::NV_device_diagnostics_config:
            return "VK_NV_device_diagnostics_config";
            break;
        case ExtensionNumber::QCOM_render_pass_store_ops:
            return "VK_QCOM_render_pass_store_ops";
            break;
#ifdef VK_ENABLE_BETA_EXTENSIONS
        case ExtensionNumber::NV_cuda_kernel_launch:
            return "VK_NV_cuda_kernel_launch";
            break;
#endif  // VK_ENABLE_BETA_EXTENSIONS
        case ExtensionNumber::QCOM_tile_shading:
            return "VK_QCOM_tile_shading";
            break;
        case ExtensionNumber::NV_low_latency:
            return "VK_NV_low_latency";
            break;
#ifdef VK_USE_PLATFORM_METAL_EXT
        case ExtensionNumber::EXT_metal_objects:
            return "VK_EXT_metal_objects";
            break;
#endif  // VK_USE_PLATFORM_METAL_EXT
        case ExtensionNumber::EXT_descriptor_buffer:
            return "VK_EXT_descriptor_buffer";
            break;
        case ExtensionNumber::EXT_graphics_pipeline_library:
            return "VK_EXT_graphics_pipeline_library";
            break;
        case ExtensionNumber::AMD_shader_early_and_late_fragment_tests:
            return "VK_AMD_shader_early_and_late_fragment_tests";
            break;
        case ExtensionNumber::NV_fragment_shading_rate_enums:
            return "VK_NV_fragment_shading_rate_enums";
            break;
        case ExtensionNumber::NV_ray_tracing_motion_blur:
            return "VK_NV_ray_tracing_motion_blur";
            break;
        case ExtensionNumber::EXT_ycbcr_2plane_444_formats:
            return "VK_EXT_ycbcr_2plane_444_formats";
            break;
        case ExtensionNumber::EXT_fragment_density_map2:
            return "VK_EXT_fragment_density_map2";
            break;
        case ExtensionNumber::QCOM_rotated_copy_commands:
            return "VK_QCOM_rotated_copy_commands";
            break;
        case ExtensionNumber::EXT_image_robustness:
            return "VK_EXT_image_robustness";
            break;
        case ExtensionNumber::EXT_image_compression_control:
            return "VK_EXT_image_compression_control";
            break;
        case ExtensionNumber::EXT_attachment_feedback_loop_layout:
            return "VK_EXT_attachment_feedback_loop_layout";
            break;
        case ExtensionNumber::EXT_4444_formats:
            return "VK_EXT_4444_formats";
            break;
        case ExtensionNumber::EXT_device_fault:
            return "VK_EXT_device_fault";
            break;
        case ExtensionNumber::ARM_rasterization_order_attachment_access:
            return "VK_ARM_rasterization_order_attachment_access";
            break;
        case ExtensionNumber::EXT_rgba10x6_formats:
            return "VK_EXT_rgba10x6_formats";
            break;
#ifdef VK_USE_PLATFORM_WIN32_KHR
        case ExtensionNumber::NV_acquire_winrt_display:
            return "VK_NV_acquire_winrt_display";
            break;
#endif  // VK_USE_PLATFORM_WIN32_KHR
#ifdef VK_USE_PLATFORM_DIRECTFB_EXT
        case ExtensionNumber::EXT_directfb_surface:
            return "VK_EXT_directfb_surface";
            break;
#endif  // VK_USE_PLATFORM_DIRECTFB_EXT
        case ExtensionNumber::VALVE_mutable_descriptor_type:
            return "VK_VALVE_mutable_descriptor_type";
            break;
        case ExtensionNumber::EXT_vertex_input_dynamic_state:
            return "VK_EXT_vertex_input_dynamic_state";
            break;
        case ExtensionNumber::EXT_physical_device_drm:
            return "VK_EXT_physical_device_drm";
            break;
        case ExtensionNumber::EXT_device_address_binding_report:
            return "VK_EXT_device_address_binding_report";
            break;
        case ExtensionNumber::EXT_depth_clip_control:
            return "VK_EXT_depth_clip_control";
            break;
        case ExtensionNumber::EXT_primitive_topology_list_restart:
            return "VK_EXT_primitive_topology_list_restart";
            break;
        case ExtensionNumber::EXT_present_mode_fifo_latest_ready:
            return "VK_EXT_present_mode_fifo_latest_ready";
            break;
#ifdef VK_USE_PLATFORM_FUCHSIA
        case ExtensionNumber::FUCHSIA_external_memory:
            return "VK_FUCHSIA_external_memory";
            break;
        case ExtensionNumber::FUCHSIA_external_semaphore:
            return "VK_FUCHSIA_external_semaphore";
            break;
        case ExtensionNumber::FUCHSIA_buffer_collection:
            return "VK_FUCHSIA_buffer_collection";
            break;
#endif  // VK_USE_PLATFORM_FUCHSIA
        case ExtensionNumber::HUAWEI_subpass_shading:
            return "VK_HUAWEI_subpass_shading";
            break;
        case ExtensionNumber::HUAWEI_invocation_mask:
            return "VK_HUAWEI_invocation_mask";
            break;
        case ExtensionNumber::NV_external_memory_rdma:
            return "VK_NV_external_memory_rdma";
            break;
        case ExtensionNumber::EXT_pipeline_properties:
            return "VK_EXT_pipeline_properties";
            break;
        case ExtensionNumber::EXT_frame_boundary:
            return "VK_EXT_frame_boundary";
            break;
        case ExtensionNumber::EXT_multisampled_render_to_single_sampled:
            return "VK_EXT_multisampled_render_to_single_sampled";
            break;
        case ExtensionNumber::EXT_extended_dynamic_state2:
            return "VK_EXT_extended_dynamic_state2";
            break;
#ifdef VK_USE_PLATFORM_SCREEN_QNX
        case ExtensionNumber::QNX_screen_surface:
            return "VK_QNX_screen_surface";
            break;
#endif  // VK_USE_PLATFORM_SCREEN_QNX
        case ExtensionNumber::EXT_color_write_enable:
            return "VK_EXT_color_write_enable";
            break;
        case ExtensionNumber::EXT_primitives_generated_query:
            return "VK_EXT_primitives_generated_query";
            break;
        case ExtensionNumber::EXT_global_priority_query:
            return "VK_EXT_global_priority_query";
            break;
        case ExtensionNumber::EXT_image_view_min_lod:
            return "VK_EXT_image_view_min_lod";
            break;
        case ExtensionNumber::EXT_multi_draw:
            return "VK_EXT_multi_draw";
            break;
        case ExtensionNumber::EXT_image_2d_view_of_3d:
            return "VK_EXT_image_2d_view_of_3d";
            break;
        case ExtensionNumber::EXT_shader_tile_image:
            return "VK_EXT_shader_tile_image";
            break;
        case ExtensionNumber::EXT_opacity_micromap:
            return "VK_EXT_opacity_micromap";
            break;
#ifdef VK_ENABLE_BETA_EXTENSIONS
        case ExtensionNumber::NV_displacement_micromap:
            return "VK_NV_displacement_micromap";
            break;
#endif  // VK_ENABLE_BETA_EXTENSIONS
        case ExtensionNumber::EXT_load_store_op_none:
            return "VK_EXT_load_store_op_none";
            break;
        case ExtensionNumber::HUAWEI_cluster_culling_shader:
            return "VK_HUAWEI_cluster_culling_shader";
            break;
        case ExtensionNumber::EXT_border_color_swizzle:
            return "VK_EXT_border_color_swizzle";
            break;
        case ExtensionNumber::EXT_pageable_device_local_memory:
            return "VK_EXT_pageable_device_local_memory";
            break;
        case ExtensionNumber::ARM_shader_core_properties:
            return "VK_ARM_shader_core_properties";
            break;
        case ExtensionNumber::ARM_scheduling_controls:
            return "VK_ARM_scheduling_controls";
            break;
        case ExtensionNumber::EXT_image_sliced_view_of_3d:
            return "VK_EXT_image_sliced_view_of_3d";
            break;
        case ExtensionNumber::VALVE_descriptor_set_host_mapping:
            return "VK_VALVE_descriptor_set_host_mapping";
            break;
        case ExtensionNumber::EXT_depth_clamp_zero_one:
            return "VK_EXT_depth_clamp_zero_one";
            break;
        case ExtensionNumber::EXT_non_seamless_cube_map:
            return "VK_EXT_non_seamless_cube_map";
            break;
        case ExtensionNumber::ARM_render_pass_striped:
            return "VK_ARM_render_pass_striped";
            break;
        case ExtensionNumber::QCOM_fragment_density_map_offset:
            return "VK_QCOM_fragment_density_map_offset";
            break;
        case ExtensionNumber::NV_copy_memory_indirect:
            return "VK_NV_copy_memory_indirect";
            break;
        case ExtensionNumber::NV_memory_decompression:
            return "VK_NV_memory_decompression";
            break;
        case ExtensionNumber::NV_device_generated_commands_compute:
            return "VK_NV_device_generated_commands_compute";
            break;
        case ExtensionNumber::NV_ray_tracing_linear_swept_spheres:
            return "VK_NV_ray_tracing_linear_swept_spheres";
            break;
        case ExtensionNumber::NV_linear_color_attachment:
            return "VK_NV_linear_color_attachment";
            break;
        case ExtensionNumber::GOOGLE_surfaceless_query:
            return "VK_GOOGLE_surfaceless_query";
            break;
        case ExtensionNumber::EXT_image_compression_control_swapchain:
            return "VK_EXT_image_compression_control_swapchain";
            break;
        case ExtensionNumber::QCOM_image_processing:
            return "VK_QCOM_image_processing";
            break;
        case ExtensionNumber::EXT_nested_command_buffer:
            return "VK_EXT_nested_command_buffer";
            break;
        case ExtensionNumber::EXT_external_memory_acquire_unmodified:
            return "VK_EXT_external_memory_acquire_unmodified";
            break;
        case ExtensionNumber::EXT_extended_dynamic_state3:
            return "VK_EXT_extended_dynamic_state3";
            break;
        case ExtensionNumber::EXT_subpass_merge_feedback:
            return "VK_EXT_subpass_merge_feedback";
            break;
        case ExtensionNumber::LUNARG_direct_driver_loading:
            return "VK_LUNARG_direct_driver_loading";
            break;
        case ExtensionNumber::ARM_tensors:
            return "VK_ARM_tensors";
            break;
        case ExtensionNumber::EXT_shader_module_identifier:
            return "VK_EXT_shader_module_identifier";
            break;
        case ExtensionNumber::EXT_rasterization_order_attachment_access:
            return "VK_EXT_rasterization_order_attachment_access";
            break;
        case ExtensionNumber::NV_optical_flow:
            return "VK_NV_optical_flow";
            break;
        case ExtensionNumber::EXT_legacy_dithering:
            return "VK_EXT_legacy_dithering";
            break;
        case ExtensionNumber::EXT_pipeline_protected_access:
            return "VK_EXT_pipeline_protected_access";
            break;
#ifdef VK_USE_PLATFORM_ANDROID_KHR
        case ExtensionNumber::ANDROID_external_format_resolve:
            return "VK_ANDROID_external_format_resolve";
            break;
#endif  // VK_USE_PLATFORM_ANDROID_KHR
        case ExtensionNumber::AMD_anti_lag:
            return "VK_AMD_anti_lag";
            break;
        case ExtensionNumber::EXT_shader_object:
            return "VK_EXT_shader_object";
            break;
        case ExtensionNumber::QCOM_tile_properties:
            return "VK_QCOM_tile_properties";
            break;
        case ExtensionNumber::SEC_amigo_profiling:
            return "VK_SEC_amigo_profiling";
            break;
        case ExtensionNumber::QCOM_multiview_per_view_viewports:
            return "VK_QCOM_multiview_per_view_viewports";
            break;
        case ExtensionNumber::NV_ray_tracing_invocation_reorder:
            return "VK_NV_ray_tracing_invocation_reorder";
            break;
        case ExtensionNumber::NV_cooperative_vector:
            return "VK_NV_cooperative_vector";
            break;
        case ExtensionNumber::NV_extended_sparse_address_space:
            return "VK_NV_extended_sparse_address_space";
            break;
        case ExtensionNumber::EXT_mutable_descriptor_type:
            return "VK_EXT_mutable_descriptor_type";
            break;
        case ExtensionNumber::EXT_legacy_vertex_attributes:
            return "VK_EXT_legacy_vertex_attributes";
            break;
        case ExtensionNumber::EXT_layer_settings:
            return "VK_EXT_layer_settings";
            break;
        case ExtensionNumber::ARM_shader_core_builtins:
            return "VK_ARM_shader_core_builtins";
            break;
        case ExtensionNumber::EXT_pipeline_library_group_handles:
            return "VK_EXT_pipeline_library_group_handles";
            break;
        case ExtensionNumber::EXT_dynamic_rendering_unused_attachments:
            return "VK_EXT_dynamic_rendering_unused_attachments";
            break;
        case ExtensionNumber::NV_low_latency2:
            return "VK_NV_low_latency2";
            break;
        case ExtensionNumber::ARM_data_graph:
            return "VK_ARM_data_graph";
            break;
        case ExtensionNumber::QCOM_multiview_per_view_render_areas:
            return "VK_QCOM_multiview_per_view_render_areas";
            break;
        case ExtensionNumber::NV_per_stage_descriptor_set:
            return "VK_NV_per_stage_descriptor_set";
            break;
        case ExtensionNumber::QCOM_image_processing2:
            return "VK_QCOM_image_processing2";
            break;
        case ExtensionNumber::QCOM_filter_cubic_weights:
            return "VK_QCOM_filter_cubic_weights";
            break;
        case ExtensionNumber::QCOM_ycbcr_degamma:
            return "VK_QCOM_ycbcr_degamma";
            break;
        case ExtensionNumber::QCOM_filter_cubic_clamp:
            return "VK_QCOM_filter_cubic_clamp";
            break;
        case ExtensionNumber::EXT_attachment_feedback_loop_dynamic_state:
            return "VK_EXT_attachment_feedback_loop_dynamic_state";
            break;
#ifdef VK_USE_PLATFORM_SCREEN_QNX
        case ExtensionNumber::QNX_external_memory_screen_buffer:
            return "VK_QNX_external_memory_screen_buffer";
            break;
#endif  // VK_USE_PLATFORM_SCREEN_QNX
        case ExtensionNumber::MSFT_layered_driver:
            return "VK_MSFT_layered_driver";
            break;
        case ExtensionNumber::NV_descriptor_pool_overallocation:
            return "VK_NV_descriptor_pool_overallocation";
            break;
        case ExtensionNumber::QCOM_tile_memory_heap:
            return "VK_QCOM_tile_memory_heap";
            break;
        case ExtensionNumber::NV_display_stereo:
            return "VK_NV_display_stereo";
            break;
        case ExtensionNumber::NV_raw_access_chains:
            return "VK_NV_raw_access_chains";
            break;
        case ExtensionNumber::NV_external_compute_queue:
            return "VK_NV_external_compute_queue";
            break;
        case ExtensionNumber::NV_command_buffer_inheritance:
            return "VK_NV_command_buffer_inheritance";
            break;
        case ExtensionNumber::NV_shader_atomic_float16_vector:
            return "VK_NV_shader_atomic_float16_vector";
            break;
        case ExtensionNumber::EXT_shader_replicated_composites:
            return "VK_EXT_shader_replicated_composites";
            break;
        case ExtensionNumber::EXT_shader_float8:
            return "VK_EXT_shader_float8";
            break;
        case ExtensionNumber::NV_ray_tracing_validation:
            return "VK_NV_ray_tracing_validation";
            break;
        case ExtensionNumber::NV_cluster_acceleration_structure:
            return "VK_NV_cluster_acceleration_structure";
            break;
        case ExtensionNumber::NV_partitioned_acceleration_structure:
            return "VK_NV_partitioned_acceleration_structure";
            break;
        case ExtensionNumber::EXT_device_generated_commands:
            return "VK_EXT_device_generated_commands";
            break;
        case ExtensionNumber::MESA_image_alignment_control:
            return "VK_MESA_image_alignment_control";
            break;
        case ExtensionNumber::EXT_depth_clamp_control:
            return "VK_EXT_depth_clamp_control";
            break;
#ifdef VK_USE_PLATFORM_OHOS
        case ExtensionNumber::OHOS_surface:
            return "VK_OHOS_surface";
            break;
#endif  // VK_USE_PLATFORM_OHOS
        case ExtensionNumber::HUAWEI_hdr_vivid:
            return "VK_HUAWEI_hdr_vivid";
            break;
        case ExtensionNumber::NV_cooperative_matrix2:
            return "VK_NV_cooperative_matrix2";
            break;
        case ExtensionNumber::ARM_pipeline_opacity_micromap:
            return "VK_ARM_pipeline_opacity_micromap";
            break;
#ifdef VK_USE_PLATFORM_METAL_EXT
        case ExtensionNumber::EXT_external_memory_metal:
            return "VK_EXT_external_memory_metal";
            break;
#endif  // VK_USE_PLATFORM_METAL_EXT
        case ExtensionNumber::EXT_vertex_attribute_robustness:
            return "VK_EXT_vertex_attribute_robustness";
            break;
        case ExtensionNumber::ARM_format_pack:
            return "VK_ARM_format_pack";
            break;
        case ExtensionNumber::VALVE_fragment_density_map_layered:
            return "VK_VALVE_fragment_density_map_layered";
            break;
#ifdef VK_ENABLE_BETA_EXTENSIONS
        case ExtensionNumber::NV_present_metering:
            return "VK_NV_present_metering";
            break;
#endif  // VK_ENABLE_BETA_EXTENSIONS
        case ExtensionNumber::EXT_fragment_density_map_offset:
            return "VK_EXT_fragment_density_map_offset";
            break;
        case ExtensionNumber::EXT_zero_initialize_device_memory:
            return "VK_EXT_zero_initialize_device_memory";
            break;
        case ExtensionNumber::KHR_acceleration_structure:
            return "VK_KHR_acceleration_structure";
            break;
        case ExtensionNumber::KHR_ray_tracing_pipeline:
            return "VK_KHR_ray_tracing_pipeline";
            break;
        case ExtensionNumber::KHR_ray_query:
            return "VK_KHR_ray_query";
            break;
        case ExtensionNumber::EXT_mesh_shader:
            return "VK_EXT_mesh_shader";
            break;
        default:
            return nullptr;
    }
}

}  // namespace vk

// NOLINTEND
