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

namespace vk {

enum class ExtensionNumber {
    KHR_surface = 0,
    KHR_swapchain = 1,
    KHR_display = 2,
    KHR_display_swapchain = 3,
#ifdef VK_USE_PLATFORM_XLIB_KHR
    KHR_xlib_surface = 4,
#endif  // VK_USE_PLATFORM_XLIB_KHR
#ifdef VK_USE_PLATFORM_XCB_KHR
    KHR_xcb_surface = 5,
#endif  // VK_USE_PLATFORM_XCB_KHR
#ifdef VK_USE_PLATFORM_WAYLAND_KHR
    KHR_wayland_surface = 6,
#endif  // VK_USE_PLATFORM_WAYLAND_KHR
#ifdef VK_USE_PLATFORM_ANDROID_KHR
    KHR_android_surface = 7,
#endif  // VK_USE_PLATFORM_ANDROID_KHR
#ifdef VK_USE_PLATFORM_WIN32_KHR
    KHR_win32_surface = 8,
#endif  // VK_USE_PLATFORM_WIN32_KHR
    KHR_sampler_mirror_clamp_to_edge = 9,
    KHR_video_queue = 10,
    KHR_video_decode_queue = 11,
    KHR_video_encode_h264 = 12,
    KHR_video_encode_h265 = 13,
    KHR_video_decode_h264 = 14,
    KHR_dynamic_rendering = 15,
    KHR_multiview = 16,
    KHR_get_physical_device_properties2 = 17,
    KHR_device_group = 18,
    KHR_shader_draw_parameters = 19,
    KHR_maintenance1 = 20,
    KHR_device_group_creation = 21,
    KHR_external_memory_capabilities = 22,
    KHR_external_memory = 23,
#ifdef VK_USE_PLATFORM_WIN32_KHR
    KHR_external_memory_win32 = 24,
#endif  // VK_USE_PLATFORM_WIN32_KHR
    KHR_external_memory_fd = 25,
#ifdef VK_USE_PLATFORM_WIN32_KHR
    KHR_win32_keyed_mutex = 26,
#endif  // VK_USE_PLATFORM_WIN32_KHR
    KHR_external_semaphore_capabilities = 27,
    KHR_external_semaphore = 28,
#ifdef VK_USE_PLATFORM_WIN32_KHR
    KHR_external_semaphore_win32 = 29,
#endif  // VK_USE_PLATFORM_WIN32_KHR
    KHR_external_semaphore_fd = 30,
    KHR_push_descriptor = 31,
    KHR_shader_float16_int8 = 32,
    KHR_16bit_storage = 33,
    KHR_incremental_present = 34,
    KHR_descriptor_update_template = 35,
    KHR_imageless_framebuffer = 36,
    KHR_create_renderpass2 = 37,
    KHR_shared_presentable_image = 38,
    KHR_external_fence_capabilities = 39,
    KHR_external_fence = 40,
#ifdef VK_USE_PLATFORM_WIN32_KHR
    KHR_external_fence_win32 = 41,
#endif  // VK_USE_PLATFORM_WIN32_KHR
    KHR_external_fence_fd = 42,
    KHR_performance_query = 43,
    KHR_maintenance2 = 44,
    KHR_get_surface_capabilities2 = 45,
    KHR_variable_pointers = 46,
    KHR_get_display_properties2 = 47,
    KHR_dedicated_allocation = 48,
    KHR_storage_buffer_storage_class = 49,
    KHR_relaxed_block_layout = 50,
    KHR_get_memory_requirements2 = 51,
    KHR_image_format_list = 52,
    KHR_sampler_ycbcr_conversion = 53,
    KHR_bind_memory2 = 54,
#ifdef VK_ENABLE_BETA_EXTENSIONS
    KHR_portability_subset = 55,
#endif  // VK_ENABLE_BETA_EXTENSIONS
    KHR_maintenance3 = 56,
    KHR_draw_indirect_count = 57,
    KHR_shader_subgroup_extended_types = 58,
    KHR_8bit_storage = 59,
    KHR_shader_atomic_int64 = 60,
    KHR_shader_clock = 61,
    KHR_video_decode_h265 = 62,
    KHR_global_priority = 63,
    KHR_driver_properties = 64,
    KHR_shader_float_controls = 65,
    KHR_depth_stencil_resolve = 66,
    KHR_swapchain_mutable_format = 67,
    KHR_timeline_semaphore = 68,
    KHR_vulkan_memory_model = 69,
    KHR_shader_terminate_invocation = 70,
    KHR_fragment_shading_rate = 71,
    KHR_dynamic_rendering_local_read = 72,
    KHR_shader_quad_control = 73,
    KHR_spirv_1_4 = 74,
    KHR_surface_protected_capabilities = 75,
    KHR_separate_depth_stencil_layouts = 76,
    KHR_present_wait = 77,
    KHR_uniform_buffer_standard_layout = 78,
    KHR_buffer_device_address = 79,
    KHR_deferred_host_operations = 80,
    KHR_pipeline_executable_properties = 81,
    KHR_map_memory2 = 82,
    KHR_shader_integer_dot_product = 83,
    KHR_pipeline_library = 84,
    KHR_shader_non_semantic_info = 85,
    KHR_present_id = 86,
    KHR_video_encode_queue = 87,
    KHR_synchronization2 = 88,
    KHR_fragment_shader_barycentric = 89,
    KHR_shader_subgroup_uniform_control_flow = 90,
    KHR_zero_initialize_workgroup_memory = 91,
    KHR_workgroup_memory_explicit_layout = 92,
    KHR_copy_commands2 = 93,
    KHR_format_feature_flags2 = 94,
    KHR_ray_tracing_maintenance1 = 95,
    KHR_portability_enumeration = 96,
    KHR_maintenance4 = 97,
    KHR_shader_subgroup_rotate = 98,
    KHR_shader_maximal_reconvergence = 99,
    KHR_maintenance5 = 100,
    KHR_ray_tracing_position_fetch = 101,
    KHR_cooperative_matrix = 102,
    KHR_video_decode_av1 = 103,
    KHR_video_maintenance1 = 104,
    KHR_vertex_attribute_divisor = 105,
    KHR_load_store_op_none = 106,
    KHR_shader_float_controls2 = 107,
    KHR_index_type_uint8 = 108,
    KHR_line_rasterization = 109,
    KHR_calibrated_timestamps = 110,
    KHR_shader_expect_assume = 111,
    KHR_maintenance6 = 112,
    EXT_debug_report = 113,
    NV_glsl_shader = 114,
    EXT_depth_range_unrestricted = 115,
    IMG_filter_cubic = 116,
    AMD_rasterization_order = 117,
    AMD_shader_trinary_minmax = 118,
    AMD_shader_explicit_vertex_parameter = 119,
    EXT_debug_marker = 120,
    AMD_gcn_shader = 121,
    NV_dedicated_allocation = 122,
    EXT_transform_feedback = 123,
    NVX_binary_import = 124,
    NVX_image_view_handle = 125,
    AMD_draw_indirect_count = 126,
    AMD_negative_viewport_height = 127,
    AMD_gpu_shader_half_float = 128,
    AMD_shader_ballot = 129,
    AMD_texture_gather_bias_lod = 130,
    AMD_shader_info = 131,
    AMD_shader_image_load_store_lod = 132,
#ifdef VK_USE_PLATFORM_GGP
    GGP_stream_descriptor_surface = 133,
#endif  // VK_USE_PLATFORM_GGP
    NV_corner_sampled_image = 134,
    IMG_format_pvrtc = 135,
    NV_external_memory_capabilities = 136,
    NV_external_memory = 137,
#ifdef VK_USE_PLATFORM_WIN32_KHR
    NV_external_memory_win32 = 138,
    NV_win32_keyed_mutex = 139,
#endif  // VK_USE_PLATFORM_WIN32_KHR
    EXT_validation_flags = 140,
#ifdef VK_USE_PLATFORM_VI_NN
    NN_vi_surface = 141,
#endif  // VK_USE_PLATFORM_VI_NN
    EXT_shader_subgroup_ballot = 142,
    EXT_shader_subgroup_vote = 143,
    EXT_texture_compression_astc_hdr = 144,
    EXT_astc_decode_mode = 145,
    EXT_pipeline_robustness = 146,
    EXT_conditional_rendering = 147,
    NV_clip_space_w_scaling = 148,
    EXT_direct_mode_display = 149,
#ifdef VK_USE_PLATFORM_XLIB_XRANDR_EXT
    EXT_acquire_xlib_display = 150,
#endif  // VK_USE_PLATFORM_XLIB_XRANDR_EXT
    EXT_display_surface_counter = 151,
    EXT_display_control = 152,
    GOOGLE_display_timing = 153,
    NV_sample_mask_override_coverage = 154,
    NV_geometry_shader_passthrough = 155,
    NV_viewport_array2 = 156,
    NVX_multiview_per_view_attributes = 157,
    NV_viewport_swizzle = 158,
    EXT_discard_rectangles = 159,
    EXT_conservative_rasterization = 160,
    EXT_depth_clip_enable = 161,
    EXT_swapchain_colorspace = 162,
    EXT_hdr_metadata = 163,
    IMG_relaxed_line_rasterization = 164,
#ifdef VK_USE_PLATFORM_IOS_MVK
    MVK_ios_surface = 165,
#endif  // VK_USE_PLATFORM_IOS_MVK
#ifdef VK_USE_PLATFORM_MACOS_MVK
    MVK_macos_surface = 166,
#endif  // VK_USE_PLATFORM_MACOS_MVK
    EXT_external_memory_dma_buf = 167,
    EXT_queue_family_foreign = 168,
    EXT_debug_utils = 169,
#ifdef VK_USE_PLATFORM_ANDROID_KHR
    ANDROID_external_memory_android_hardware_buffer = 170,
#endif  // VK_USE_PLATFORM_ANDROID_KHR
    EXT_sampler_filter_minmax = 171,
    AMD_gpu_shader_int16 = 172,
#ifdef VK_ENABLE_BETA_EXTENSIONS
    AMDX_shader_enqueue = 173,
#endif  // VK_ENABLE_BETA_EXTENSIONS
    AMD_mixed_attachment_samples = 174,
    AMD_shader_fragment_mask = 175,
    EXT_inline_uniform_block = 176,
    EXT_shader_stencil_export = 177,
    EXT_sample_locations = 178,
    EXT_blend_operation_advanced = 179,
    NV_fragment_coverage_to_color = 180,
    NV_framebuffer_mixed_samples = 181,
    NV_fill_rectangle = 182,
    NV_shader_sm_builtins = 183,
    EXT_post_depth_coverage = 184,
    EXT_image_drm_format_modifier = 185,
    EXT_validation_cache = 186,
    EXT_descriptor_indexing = 187,
    EXT_shader_viewport_index_layer = 188,
    NV_shading_rate_image = 189,
    NV_ray_tracing = 190,
    NV_representative_fragment_test = 191,
    EXT_filter_cubic = 192,
    QCOM_render_pass_shader_resolve = 193,
    EXT_global_priority = 194,
    EXT_external_memory_host = 195,
    AMD_buffer_marker = 196,
    AMD_pipeline_compiler_control = 197,
    EXT_calibrated_timestamps = 198,
    AMD_shader_core_properties = 199,
    AMD_memory_overallocation_behavior = 200,
    EXT_vertex_attribute_divisor = 201,
#ifdef VK_USE_PLATFORM_GGP
    GGP_frame_token = 202,
#endif  // VK_USE_PLATFORM_GGP
    EXT_pipeline_creation_feedback = 203,
    NV_shader_subgroup_partitioned = 204,
    NV_compute_shader_derivatives = 205,
    NV_mesh_shader = 206,
    NV_fragment_shader_barycentric = 207,
    NV_shader_image_footprint = 208,
    NV_scissor_exclusive = 209,
    NV_device_diagnostic_checkpoints = 210,
    INTEL_shader_integer_functions2 = 211,
    INTEL_performance_query = 212,
    EXT_pci_bus_info = 213,
    AMD_display_native_hdr = 214,
#ifdef VK_USE_PLATFORM_FUCHSIA
    FUCHSIA_imagepipe_surface = 215,
#endif  // VK_USE_PLATFORM_FUCHSIA
#ifdef VK_USE_PLATFORM_METAL_EXT
    EXT_metal_surface = 216,
#endif  // VK_USE_PLATFORM_METAL_EXT
    EXT_fragment_density_map = 217,
    EXT_scalar_block_layout = 218,
    GOOGLE_hlsl_functionality1 = 219,
    GOOGLE_decorate_string = 220,
    EXT_subgroup_size_control = 221,
    AMD_shader_core_properties2 = 222,
    AMD_device_coherent_memory = 223,
    EXT_shader_image_atomic_int64 = 224,
    EXT_memory_budget = 225,
    EXT_memory_priority = 226,
    NV_dedicated_allocation_image_aliasing = 227,
    EXT_buffer_device_address = 228,
    EXT_tooling_info = 229,
    EXT_separate_stencil_usage = 230,
    EXT_validation_features = 231,
    NV_cooperative_matrix = 232,
    NV_coverage_reduction_mode = 233,
    EXT_fragment_shader_interlock = 234,
    EXT_ycbcr_image_arrays = 235,
    EXT_provoking_vertex = 236,
#ifdef VK_USE_PLATFORM_WIN32_KHR
    EXT_full_screen_exclusive = 237,
#endif  // VK_USE_PLATFORM_WIN32_KHR
    EXT_headless_surface = 238,
    EXT_line_rasterization = 239,
    EXT_shader_atomic_float = 240,
    EXT_host_query_reset = 241,
    EXT_index_type_uint8 = 242,
    EXT_extended_dynamic_state = 243,
    EXT_host_image_copy = 244,
    EXT_map_memory_placed = 245,
    EXT_shader_atomic_float2 = 246,
    EXT_surface_maintenance1 = 247,
    EXT_swapchain_maintenance1 = 248,
    EXT_shader_demote_to_helper_invocation = 249,
    NV_device_generated_commands = 250,
    NV_inherited_viewport_scissor = 251,
    EXT_texel_buffer_alignment = 252,
    QCOM_render_pass_transform = 253,
    EXT_depth_bias_control = 254,
    EXT_device_memory_report = 255,
    EXT_acquire_drm_display = 256,
    EXT_robustness2 = 257,
    EXT_custom_border_color = 258,
    GOOGLE_user_type = 259,
    NV_present_barrier = 260,
    EXT_private_data = 261,
    EXT_pipeline_creation_cache_control = 262,
    NV_device_diagnostics_config = 263,
    QCOM_render_pass_store_ops = 264,
    NV_cuda_kernel_launch = 265,
    NV_low_latency = 266,
#ifdef VK_USE_PLATFORM_METAL_EXT
    EXT_metal_objects = 267,
#endif  // VK_USE_PLATFORM_METAL_EXT
    EXT_descriptor_buffer = 268,
    EXT_graphics_pipeline_library = 269,
    AMD_shader_early_and_late_fragment_tests = 270,
    NV_fragment_shading_rate_enums = 271,
    NV_ray_tracing_motion_blur = 272,
    EXT_ycbcr_2plane_444_formats = 273,
    EXT_fragment_density_map2 = 274,
    QCOM_rotated_copy_commands = 275,
    EXT_image_robustness = 276,
    EXT_image_compression_control = 277,
    EXT_attachment_feedback_loop_layout = 278,
    EXT_4444_formats = 279,
    EXT_device_fault = 280,
    ARM_rasterization_order_attachment_access = 281,
    EXT_rgba10x6_formats = 282,
#ifdef VK_USE_PLATFORM_WIN32_KHR
    NV_acquire_winrt_display = 283,
#endif  // VK_USE_PLATFORM_WIN32_KHR
#ifdef VK_USE_PLATFORM_DIRECTFB_EXT
    EXT_directfb_surface = 284,
#endif  // VK_USE_PLATFORM_DIRECTFB_EXT
    VALVE_mutable_descriptor_type = 285,
    EXT_vertex_input_dynamic_state = 286,
    EXT_physical_device_drm = 287,
    EXT_device_address_binding_report = 288,
    EXT_depth_clip_control = 289,
    EXT_primitive_topology_list_restart = 290,
#ifdef VK_USE_PLATFORM_FUCHSIA
    FUCHSIA_external_memory = 291,
    FUCHSIA_external_semaphore = 292,
    FUCHSIA_buffer_collection = 293,
#endif  // VK_USE_PLATFORM_FUCHSIA
    HUAWEI_subpass_shading = 294,
    HUAWEI_invocation_mask = 295,
    NV_external_memory_rdma = 296,
    EXT_pipeline_properties = 297,
    EXT_frame_boundary = 298,
    EXT_multisampled_render_to_single_sampled = 299,
    EXT_extended_dynamic_state2 = 300,
#ifdef VK_USE_PLATFORM_SCREEN_QNX
    QNX_screen_surface = 301,
#endif  // VK_USE_PLATFORM_SCREEN_QNX
    EXT_color_write_enable = 302,
    EXT_primitives_generated_query = 303,
    EXT_global_priority_query = 304,
    EXT_image_view_min_lod = 305,
    EXT_multi_draw = 306,
    EXT_image_2d_view_of_3d = 307,
    EXT_shader_tile_image = 308,
    EXT_opacity_micromap = 309,
#ifdef VK_ENABLE_BETA_EXTENSIONS
    NV_displacement_micromap = 310,
#endif  // VK_ENABLE_BETA_EXTENSIONS
    EXT_load_store_op_none = 311,
    HUAWEI_cluster_culling_shader = 312,
    EXT_border_color_swizzle = 313,
    EXT_pageable_device_local_memory = 314,
    ARM_shader_core_properties = 315,
    ARM_scheduling_controls = 316,
    EXT_image_sliced_view_of_3d = 317,
    VALVE_descriptor_set_host_mapping = 318,
    EXT_depth_clamp_zero_one = 319,
    EXT_non_seamless_cube_map = 320,
    ARM_render_pass_striped = 321,
    QCOM_fragment_density_map_offset = 322,
    NV_copy_memory_indirect = 323,
    NV_memory_decompression = 324,
    NV_device_generated_commands_compute = 325,
    NV_linear_color_attachment = 326,
    GOOGLE_surfaceless_query = 327,
    EXT_image_compression_control_swapchain = 328,
    QCOM_image_processing = 329,
    EXT_nested_command_buffer = 330,
    EXT_external_memory_acquire_unmodified = 331,
    EXT_extended_dynamic_state3 = 332,
    EXT_subpass_merge_feedback = 333,
    LUNARG_direct_driver_loading = 334,
    EXT_shader_module_identifier = 335,
    EXT_rasterization_order_attachment_access = 336,
    NV_optical_flow = 337,
    EXT_legacy_dithering = 338,
    EXT_pipeline_protected_access = 339,
#ifdef VK_USE_PLATFORM_ANDROID_KHR
    ANDROID_external_format_resolve = 340,
#endif  // VK_USE_PLATFORM_ANDROID_KHR
    EXT_shader_object = 341,
    QCOM_tile_properties = 342,
    SEC_amigo_profiling = 343,
    QCOM_multiview_per_view_viewports = 344,
    NV_ray_tracing_invocation_reorder = 345,
    NV_extended_sparse_address_space = 346,
    EXT_mutable_descriptor_type = 347,
    EXT_layer_settings = 348,
    ARM_shader_core_builtins = 349,
    EXT_pipeline_library_group_handles = 350,
    EXT_dynamic_rendering_unused_attachments = 351,
    NV_low_latency2 = 352,
    QCOM_multiview_per_view_render_areas = 353,
    NV_per_stage_descriptor_set = 354,
    QCOM_image_processing2 = 355,
    QCOM_filter_cubic_weights = 356,
    QCOM_ycbcr_degamma = 357,
    QCOM_filter_cubic_clamp = 358,
    EXT_attachment_feedback_loop_dynamic_state = 359,
#ifdef VK_USE_PLATFORM_SCREEN_QNX
    QNX_external_memory_screen_buffer = 360,
#endif  // VK_USE_PLATFORM_SCREEN_QNX
    MSFT_layered_driver = 361,
    NV_descriptor_pool_overallocation = 362,
    NV_shader_atomic_float16_vector = 363,
    KHR_acceleration_structure = 364,
    KHR_ray_tracing_pipeline = 365,
    KHR_ray_query = 366,
    EXT_mesh_shader = 367,
    unknown = 368
};

using ExtensionMap = std::unordered_map<ExtensionNumber, uint32_t>;

const ExtensionMap& GetInstanceExtensionsMap();
const ExtensionMap& GetDeviceExtensionsMap();

ExtensionNumber GetExtensionNumber(const char* extension_name);
const char* GetExtensionName(ExtensionNumber extension_number);
}  // namespace vk

// NOLINTEND
