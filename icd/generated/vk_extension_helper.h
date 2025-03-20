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
    KHR_pipeline_binary = 102,
    KHR_cooperative_matrix = 103,
    KHR_compute_shader_derivatives = 104,
    KHR_video_decode_av1 = 105,
    KHR_video_encode_av1 = 106,
    KHR_video_maintenance1 = 107,
    KHR_vertex_attribute_divisor = 108,
    KHR_load_store_op_none = 109,
    KHR_shader_float_controls2 = 110,
    KHR_index_type_uint8 = 111,
    KHR_line_rasterization = 112,
    KHR_calibrated_timestamps = 113,
    KHR_shader_expect_assume = 114,
    KHR_maintenance6 = 115,
    KHR_video_encode_quantization_map = 116,
    KHR_shader_relaxed_extended_instruction = 117,
    KHR_maintenance7 = 118,
    KHR_maintenance8 = 119,
    KHR_video_maintenance2 = 120,
    KHR_depth_clamp_zero_one = 121,
    EXT_debug_report = 122,
    NV_glsl_shader = 123,
    EXT_depth_range_unrestricted = 124,
    IMG_filter_cubic = 125,
    AMD_rasterization_order = 126,
    AMD_shader_trinary_minmax = 127,
    AMD_shader_explicit_vertex_parameter = 128,
    EXT_debug_marker = 129,
    AMD_gcn_shader = 130,
    NV_dedicated_allocation = 131,
    EXT_transform_feedback = 132,
    NVX_binary_import = 133,
    NVX_image_view_handle = 134,
    AMD_draw_indirect_count = 135,
    AMD_negative_viewport_height = 136,
    AMD_gpu_shader_half_float = 137,
    AMD_shader_ballot = 138,
    AMD_texture_gather_bias_lod = 139,
    AMD_shader_info = 140,
    AMD_shader_image_load_store_lod = 141,
#ifdef VK_USE_PLATFORM_GGP
    GGP_stream_descriptor_surface = 142,
#endif  // VK_USE_PLATFORM_GGP
    NV_corner_sampled_image = 143,
    IMG_format_pvrtc = 144,
    NV_external_memory_capabilities = 145,
    NV_external_memory = 146,
#ifdef VK_USE_PLATFORM_WIN32_KHR
    NV_external_memory_win32 = 147,
    NV_win32_keyed_mutex = 148,
#endif  // VK_USE_PLATFORM_WIN32_KHR
    EXT_validation_flags = 149,
#ifdef VK_USE_PLATFORM_VI_NN
    NN_vi_surface = 150,
#endif  // VK_USE_PLATFORM_VI_NN
    EXT_shader_subgroup_ballot = 151,
    EXT_shader_subgroup_vote = 152,
    EXT_texture_compression_astc_hdr = 153,
    EXT_astc_decode_mode = 154,
    EXT_pipeline_robustness = 155,
    EXT_conditional_rendering = 156,
    NV_clip_space_w_scaling = 157,
    EXT_direct_mode_display = 158,
#ifdef VK_USE_PLATFORM_XLIB_XRANDR_EXT
    EXT_acquire_xlib_display = 159,
#endif  // VK_USE_PLATFORM_XLIB_XRANDR_EXT
    EXT_display_surface_counter = 160,
    EXT_display_control = 161,
    GOOGLE_display_timing = 162,
    NV_sample_mask_override_coverage = 163,
    NV_geometry_shader_passthrough = 164,
    NV_viewport_array2 = 165,
    NVX_multiview_per_view_attributes = 166,
    NV_viewport_swizzle = 167,
    EXT_discard_rectangles = 168,
    EXT_conservative_rasterization = 169,
    EXT_depth_clip_enable = 170,
    EXT_swapchain_colorspace = 171,
    EXT_hdr_metadata = 172,
    IMG_relaxed_line_rasterization = 173,
#ifdef VK_USE_PLATFORM_IOS_MVK
    MVK_ios_surface = 174,
#endif  // VK_USE_PLATFORM_IOS_MVK
#ifdef VK_USE_PLATFORM_MACOS_MVK
    MVK_macos_surface = 175,
#endif  // VK_USE_PLATFORM_MACOS_MVK
    EXT_external_memory_dma_buf = 176,
    EXT_queue_family_foreign = 177,
    EXT_debug_utils = 178,
#ifdef VK_USE_PLATFORM_ANDROID_KHR
    ANDROID_external_memory_android_hardware_buffer = 179,
#endif  // VK_USE_PLATFORM_ANDROID_KHR
    EXT_sampler_filter_minmax = 180,
    AMD_gpu_shader_int16 = 181,
#ifdef VK_ENABLE_BETA_EXTENSIONS
    AMDX_shader_enqueue = 182,
#endif  // VK_ENABLE_BETA_EXTENSIONS
    AMD_mixed_attachment_samples = 183,
    AMD_shader_fragment_mask = 184,
    EXT_inline_uniform_block = 185,
    EXT_shader_stencil_export = 186,
    EXT_sample_locations = 187,
    EXT_blend_operation_advanced = 188,
    NV_fragment_coverage_to_color = 189,
    NV_framebuffer_mixed_samples = 190,
    NV_fill_rectangle = 191,
    NV_shader_sm_builtins = 192,
    EXT_post_depth_coverage = 193,
    EXT_image_drm_format_modifier = 194,
    EXT_validation_cache = 195,
    EXT_descriptor_indexing = 196,
    EXT_shader_viewport_index_layer = 197,
    NV_shading_rate_image = 198,
    NV_ray_tracing = 199,
    NV_representative_fragment_test = 200,
    EXT_filter_cubic = 201,
    QCOM_render_pass_shader_resolve = 202,
    EXT_global_priority = 203,
    EXT_external_memory_host = 204,
    AMD_buffer_marker = 205,
    AMD_pipeline_compiler_control = 206,
    EXT_calibrated_timestamps = 207,
    AMD_shader_core_properties = 208,
    AMD_memory_overallocation_behavior = 209,
    EXT_vertex_attribute_divisor = 210,
#ifdef VK_USE_PLATFORM_GGP
    GGP_frame_token = 211,
#endif  // VK_USE_PLATFORM_GGP
    EXT_pipeline_creation_feedback = 212,
    NV_shader_subgroup_partitioned = 213,
    NV_compute_shader_derivatives = 214,
    NV_mesh_shader = 215,
    NV_fragment_shader_barycentric = 216,
    NV_shader_image_footprint = 217,
    NV_scissor_exclusive = 218,
    NV_device_diagnostic_checkpoints = 219,
    INTEL_shader_integer_functions2 = 220,
    INTEL_performance_query = 221,
    EXT_pci_bus_info = 222,
    AMD_display_native_hdr = 223,
#ifdef VK_USE_PLATFORM_FUCHSIA
    FUCHSIA_imagepipe_surface = 224,
#endif  // VK_USE_PLATFORM_FUCHSIA
#ifdef VK_USE_PLATFORM_METAL_EXT
    EXT_metal_surface = 225,
#endif  // VK_USE_PLATFORM_METAL_EXT
    EXT_fragment_density_map = 226,
    EXT_scalar_block_layout = 227,
    GOOGLE_hlsl_functionality1 = 228,
    GOOGLE_decorate_string = 229,
    EXT_subgroup_size_control = 230,
    AMD_shader_core_properties2 = 231,
    AMD_device_coherent_memory = 232,
    EXT_shader_image_atomic_int64 = 233,
    EXT_memory_budget = 234,
    EXT_memory_priority = 235,
    NV_dedicated_allocation_image_aliasing = 236,
    EXT_buffer_device_address = 237,
    EXT_tooling_info = 238,
    EXT_separate_stencil_usage = 239,
    EXT_validation_features = 240,
    NV_cooperative_matrix = 241,
    NV_coverage_reduction_mode = 242,
    EXT_fragment_shader_interlock = 243,
    EXT_ycbcr_image_arrays = 244,
    EXT_provoking_vertex = 245,
#ifdef VK_USE_PLATFORM_WIN32_KHR
    EXT_full_screen_exclusive = 246,
#endif  // VK_USE_PLATFORM_WIN32_KHR
    EXT_headless_surface = 247,
    EXT_line_rasterization = 248,
    EXT_shader_atomic_float = 249,
    EXT_host_query_reset = 250,
    EXT_index_type_uint8 = 251,
    EXT_extended_dynamic_state = 252,
    EXT_host_image_copy = 253,
    EXT_map_memory_placed = 254,
    EXT_shader_atomic_float2 = 255,
    EXT_surface_maintenance1 = 256,
    EXT_swapchain_maintenance1 = 257,
    EXT_shader_demote_to_helper_invocation = 258,
    NV_device_generated_commands = 259,
    NV_inherited_viewport_scissor = 260,
    EXT_texel_buffer_alignment = 261,
    QCOM_render_pass_transform = 262,
    EXT_depth_bias_control = 263,
    EXT_device_memory_report = 264,
    EXT_acquire_drm_display = 265,
    EXT_robustness2 = 266,
    EXT_custom_border_color = 267,
    GOOGLE_user_type = 268,
    NV_present_barrier = 269,
    EXT_private_data = 270,
    EXT_pipeline_creation_cache_control = 271,
    NV_device_diagnostics_config = 272,
    QCOM_render_pass_store_ops = 273,
#ifdef VK_ENABLE_BETA_EXTENSIONS
    NV_cuda_kernel_launch = 274,
#endif  // VK_ENABLE_BETA_EXTENSIONS
    NV_low_latency = 275,
#ifdef VK_USE_PLATFORM_METAL_EXT
    EXT_metal_objects = 276,
#endif  // VK_USE_PLATFORM_METAL_EXT
    EXT_descriptor_buffer = 277,
    EXT_graphics_pipeline_library = 278,
    AMD_shader_early_and_late_fragment_tests = 279,
    NV_fragment_shading_rate_enums = 280,
    NV_ray_tracing_motion_blur = 281,
    EXT_ycbcr_2plane_444_formats = 282,
    EXT_fragment_density_map2 = 283,
    QCOM_rotated_copy_commands = 284,
    EXT_image_robustness = 285,
    EXT_image_compression_control = 286,
    EXT_attachment_feedback_loop_layout = 287,
    EXT_4444_formats = 288,
    EXT_device_fault = 289,
    ARM_rasterization_order_attachment_access = 290,
    EXT_rgba10x6_formats = 291,
#ifdef VK_USE_PLATFORM_WIN32_KHR
    NV_acquire_winrt_display = 292,
#endif  // VK_USE_PLATFORM_WIN32_KHR
#ifdef VK_USE_PLATFORM_DIRECTFB_EXT
    EXT_directfb_surface = 293,
#endif  // VK_USE_PLATFORM_DIRECTFB_EXT
    VALVE_mutable_descriptor_type = 294,
    EXT_vertex_input_dynamic_state = 295,
    EXT_physical_device_drm = 296,
    EXT_device_address_binding_report = 297,
    EXT_depth_clip_control = 298,
    EXT_primitive_topology_list_restart = 299,
    EXT_present_mode_fifo_latest_ready = 300,
#ifdef VK_USE_PLATFORM_FUCHSIA
    FUCHSIA_external_memory = 301,
    FUCHSIA_external_semaphore = 302,
    FUCHSIA_buffer_collection = 303,
#endif  // VK_USE_PLATFORM_FUCHSIA
    HUAWEI_subpass_shading = 304,
    HUAWEI_invocation_mask = 305,
    NV_external_memory_rdma = 306,
    EXT_pipeline_properties = 307,
    EXT_frame_boundary = 308,
    EXT_multisampled_render_to_single_sampled = 309,
    EXT_extended_dynamic_state2 = 310,
#ifdef VK_USE_PLATFORM_SCREEN_QNX
    QNX_screen_surface = 311,
#endif  // VK_USE_PLATFORM_SCREEN_QNX
    EXT_color_write_enable = 312,
    EXT_primitives_generated_query = 313,
    EXT_global_priority_query = 314,
    EXT_image_view_min_lod = 315,
    EXT_multi_draw = 316,
    EXT_image_2d_view_of_3d = 317,
    EXT_shader_tile_image = 318,
    EXT_opacity_micromap = 319,
#ifdef VK_ENABLE_BETA_EXTENSIONS
    NV_displacement_micromap = 320,
#endif  // VK_ENABLE_BETA_EXTENSIONS
    EXT_load_store_op_none = 321,
    HUAWEI_cluster_culling_shader = 322,
    EXT_border_color_swizzle = 323,
    EXT_pageable_device_local_memory = 324,
    ARM_shader_core_properties = 325,
    ARM_scheduling_controls = 326,
    EXT_image_sliced_view_of_3d = 327,
    VALVE_descriptor_set_host_mapping = 328,
    EXT_depth_clamp_zero_one = 329,
    EXT_non_seamless_cube_map = 330,
    ARM_render_pass_striped = 331,
    QCOM_fragment_density_map_offset = 332,
    NV_copy_memory_indirect = 333,
    NV_memory_decompression = 334,
    NV_device_generated_commands_compute = 335,
    NV_ray_tracing_linear_swept_spheres = 336,
    NV_linear_color_attachment = 337,
    GOOGLE_surfaceless_query = 338,
    EXT_image_compression_control_swapchain = 339,
    QCOM_image_processing = 340,
    EXT_nested_command_buffer = 341,
    EXT_external_memory_acquire_unmodified = 342,
    EXT_extended_dynamic_state3 = 343,
    EXT_subpass_merge_feedback = 344,
    LUNARG_direct_driver_loading = 345,
    EXT_shader_module_identifier = 346,
    EXT_rasterization_order_attachment_access = 347,
    NV_optical_flow = 348,
    EXT_legacy_dithering = 349,
    EXT_pipeline_protected_access = 350,
#ifdef VK_USE_PLATFORM_ANDROID_KHR
    ANDROID_external_format_resolve = 351,
#endif  // VK_USE_PLATFORM_ANDROID_KHR
    AMD_anti_lag = 352,
    EXT_shader_object = 353,
    QCOM_tile_properties = 354,
    SEC_amigo_profiling = 355,
    QCOM_multiview_per_view_viewports = 356,
    NV_ray_tracing_invocation_reorder = 357,
    NV_cooperative_vector = 358,
    NV_extended_sparse_address_space = 359,
    EXT_mutable_descriptor_type = 360,
    EXT_legacy_vertex_attributes = 361,
    EXT_layer_settings = 362,
    ARM_shader_core_builtins = 363,
    EXT_pipeline_library_group_handles = 364,
    EXT_dynamic_rendering_unused_attachments = 365,
    NV_low_latency2 = 366,
    QCOM_multiview_per_view_render_areas = 367,
    NV_per_stage_descriptor_set = 368,
    QCOM_image_processing2 = 369,
    QCOM_filter_cubic_weights = 370,
    QCOM_ycbcr_degamma = 371,
    QCOM_filter_cubic_clamp = 372,
    EXT_attachment_feedback_loop_dynamic_state = 373,
#ifdef VK_USE_PLATFORM_SCREEN_QNX
    QNX_external_memory_screen_buffer = 374,
#endif  // VK_USE_PLATFORM_SCREEN_QNX
    MSFT_layered_driver = 375,
    NV_descriptor_pool_overallocation = 376,
    NV_display_stereo = 377,
    NV_raw_access_chains = 378,
    NV_command_buffer_inheritance = 379,
    NV_shader_atomic_float16_vector = 380,
    EXT_shader_replicated_composites = 381,
    NV_ray_tracing_validation = 382,
    NV_cluster_acceleration_structure = 383,
    NV_partitioned_acceleration_structure = 384,
    EXT_device_generated_commands = 385,
    MESA_image_alignment_control = 386,
    EXT_depth_clamp_control = 387,
    HUAWEI_hdr_vivid = 388,
    NV_cooperative_matrix2 = 389,
    ARM_pipeline_opacity_micromap = 390,
#ifdef VK_USE_PLATFORM_METAL_EXT
    EXT_external_memory_metal = 391,
#endif  // VK_USE_PLATFORM_METAL_EXT
    EXT_vertex_attribute_robustness = 392,
#ifdef VK_ENABLE_BETA_EXTENSIONS
    NV_present_metering = 393,
#endif  // VK_ENABLE_BETA_EXTENSIONS
    KHR_acceleration_structure = 394,
    KHR_ray_tracing_pipeline = 395,
    KHR_ray_query = 396,
    EXT_mesh_shader = 397,
    unknown = 398
};

using ExtensionMap = std::unordered_map<ExtensionNumber, uint32_t>;

const ExtensionMap& GetInstanceExtensionsMap();
const ExtensionMap& GetDeviceExtensionsMap();

ExtensionNumber GetExtensionNumber(const char* extension_name);
const char* GetExtensionName(ExtensionNumber extension_number);
}  // namespace vk

// NOLINTEND
