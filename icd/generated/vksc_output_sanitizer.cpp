// *** THIS FILE IS GENERATED - DO NOT EDIT ***
// See output_sanitizer_generator.py for modifications

/*
 * Copyright (c) 2024-2025 The Khronos Group Inc.
 * Copyright (c) 2024-2025 RasterGrid Kft.
 *
 * SPDX-License-Identifier: Apache-2.0
 */
// NOLINTBEGIN

#include "vksc_output_sanitizer.h"

namespace vksc {

bool IsVkPresentModeKHRInVulkanSC(VkPresentModeKHR value) {
    switch (value) {
        case VK_PRESENT_MODE_IMMEDIATE_KHR:
            return true;
        case VK_PRESENT_MODE_MAILBOX_KHR:
            return true;
        case VK_PRESENT_MODE_FIFO_KHR:
            return true;
        case VK_PRESENT_MODE_FIFO_RELAXED_KHR:
            return true;
        case VK_PRESENT_MODE_SHARED_DEMAND_REFRESH_KHR:
            return true;
        case VK_PRESENT_MODE_SHARED_CONTINUOUS_REFRESH_KHR:
            return true;

        default:
            return false;
    }
}

bool IsVkObjectTypeInVulkanSC(VkObjectType value) {
    switch (value) {
        case VK_OBJECT_TYPE_UNKNOWN:
            return true;
        case VK_OBJECT_TYPE_INSTANCE:
            return true;
        case VK_OBJECT_TYPE_PHYSICAL_DEVICE:
            return true;
        case VK_OBJECT_TYPE_DEVICE:
            return true;
        case VK_OBJECT_TYPE_QUEUE:
            return true;
        case VK_OBJECT_TYPE_SEMAPHORE:
            return true;
        case VK_OBJECT_TYPE_COMMAND_BUFFER:
            return true;
        case VK_OBJECT_TYPE_FENCE:
            return true;
        case VK_OBJECT_TYPE_DEVICE_MEMORY:
            return true;
        case VK_OBJECT_TYPE_BUFFER:
            return true;
        case VK_OBJECT_TYPE_IMAGE:
            return true;
        case VK_OBJECT_TYPE_EVENT:
            return true;
        case VK_OBJECT_TYPE_QUERY_POOL:
            return true;
        case VK_OBJECT_TYPE_BUFFER_VIEW:
            return true;
        case VK_OBJECT_TYPE_IMAGE_VIEW:
            return true;
        case VK_OBJECT_TYPE_SHADER_MODULE:
            return true;
        case VK_OBJECT_TYPE_PIPELINE_CACHE:
            return true;
        case VK_OBJECT_TYPE_PIPELINE_LAYOUT:
            return true;
        case VK_OBJECT_TYPE_RENDER_PASS:
            return true;
        case VK_OBJECT_TYPE_PIPELINE:
            return true;
        case VK_OBJECT_TYPE_DESCRIPTOR_SET_LAYOUT:
            return true;
        case VK_OBJECT_TYPE_SAMPLER:
            return true;
        case VK_OBJECT_TYPE_DESCRIPTOR_POOL:
            return true;
        case VK_OBJECT_TYPE_DESCRIPTOR_SET:
            return true;
        case VK_OBJECT_TYPE_FRAMEBUFFER:
            return true;
        case VK_OBJECT_TYPE_COMMAND_POOL:
            return true;
        case VK_OBJECT_TYPE_SAMPLER_YCBCR_CONVERSION:
            return true;
        case VK_OBJECT_TYPE_PRIVATE_DATA_SLOT:
            return true;
        case VK_OBJECT_TYPE_SURFACE_KHR:
            return true;
        case VK_OBJECT_TYPE_SWAPCHAIN_KHR:
            return true;
        case VK_OBJECT_TYPE_DISPLAY_KHR:
            return true;
        case VK_OBJECT_TYPE_DISPLAY_MODE_KHR:
            return true;
        case VK_OBJECT_TYPE_DEBUG_UTILS_MESSENGER_EXT:
            return true;
        case VK_OBJECT_TYPE_SEMAPHORE_SCI_SYNC_POOL_NV:
            return true;

        default:
            return false;
    }
}

bool IsVkTimeDomainKHRInVulkanSC(VkTimeDomainKHR value) {
    switch (value) {
        case VK_TIME_DOMAIN_DEVICE_KHR:
            return true;
        case VK_TIME_DOMAIN_CLOCK_MONOTONIC_KHR:
            return true;
        case VK_TIME_DOMAIN_CLOCK_MONOTONIC_RAW_KHR:
            return true;
        case VK_TIME_DOMAIN_QUERY_PERFORMANCE_COUNTER_KHR:
            return true;

        default:
            return false;
    }
}

bool IsVkPhysicalDeviceTypeInVulkanSC(VkPhysicalDeviceType value) {
    switch (value) {
        case VK_PHYSICAL_DEVICE_TYPE_OTHER:
            return true;
        case VK_PHYSICAL_DEVICE_TYPE_INTEGRATED_GPU:
            return true;
        case VK_PHYSICAL_DEVICE_TYPE_DISCRETE_GPU:
            return true;
        case VK_PHYSICAL_DEVICE_TYPE_VIRTUAL_GPU:
            return true;
        case VK_PHYSICAL_DEVICE_TYPE_CPU:
            return true;

        default:
            return false;
    }
}

bool IsVkFaultLevelInVulkanSC(VkFaultLevel value) {
    switch (value) {
        case VK_FAULT_LEVEL_UNASSIGNED:
            return true;
        case VK_FAULT_LEVEL_CRITICAL:
            return true;
        case VK_FAULT_LEVEL_RECOVERABLE:
            return true;
        case VK_FAULT_LEVEL_WARNING:
            return true;

        default:
            return false;
    }
}

bool IsVkFaultTypeInVulkanSC(VkFaultType value) {
    switch (value) {
        case VK_FAULT_TYPE_INVALID:
            return true;
        case VK_FAULT_TYPE_UNASSIGNED:
            return true;
        case VK_FAULT_TYPE_IMPLEMENTATION:
            return true;
        case VK_FAULT_TYPE_SYSTEM:
            return true;
        case VK_FAULT_TYPE_PHYSICAL_DEVICE:
            return true;
        case VK_FAULT_TYPE_COMMAND_BUFFER_FULL:
            return true;
        case VK_FAULT_TYPE_INVALID_API_USAGE:
            return true;

        default:
            return false;
    }
}

bool IsVkFormatInVulkanSC(VkFormat value) {
    switch (value) {
        case VK_FORMAT_UNDEFINED:
            return true;
        case VK_FORMAT_R4G4_UNORM_PACK8:
            return true;
        case VK_FORMAT_R4G4B4A4_UNORM_PACK16:
            return true;
        case VK_FORMAT_B4G4R4A4_UNORM_PACK16:
            return true;
        case VK_FORMAT_R5G6B5_UNORM_PACK16:
            return true;
        case VK_FORMAT_B5G6R5_UNORM_PACK16:
            return true;
        case VK_FORMAT_R5G5B5A1_UNORM_PACK16:
            return true;
        case VK_FORMAT_B5G5R5A1_UNORM_PACK16:
            return true;
        case VK_FORMAT_A1R5G5B5_UNORM_PACK16:
            return true;
        case VK_FORMAT_R8_UNORM:
            return true;
        case VK_FORMAT_R8_SNORM:
            return true;
        case VK_FORMAT_R8_USCALED:
            return true;
        case VK_FORMAT_R8_SSCALED:
            return true;
        case VK_FORMAT_R8_UINT:
            return true;
        case VK_FORMAT_R8_SINT:
            return true;
        case VK_FORMAT_R8_SRGB:
            return true;
        case VK_FORMAT_R8G8_UNORM:
            return true;
        case VK_FORMAT_R8G8_SNORM:
            return true;
        case VK_FORMAT_R8G8_USCALED:
            return true;
        case VK_FORMAT_R8G8_SSCALED:
            return true;
        case VK_FORMAT_R8G8_UINT:
            return true;
        case VK_FORMAT_R8G8_SINT:
            return true;
        case VK_FORMAT_R8G8_SRGB:
            return true;
        case VK_FORMAT_R8G8B8_UNORM:
            return true;
        case VK_FORMAT_R8G8B8_SNORM:
            return true;
        case VK_FORMAT_R8G8B8_USCALED:
            return true;
        case VK_FORMAT_R8G8B8_SSCALED:
            return true;
        case VK_FORMAT_R8G8B8_UINT:
            return true;
        case VK_FORMAT_R8G8B8_SINT:
            return true;
        case VK_FORMAT_R8G8B8_SRGB:
            return true;
        case VK_FORMAT_B8G8R8_UNORM:
            return true;
        case VK_FORMAT_B8G8R8_SNORM:
            return true;
        case VK_FORMAT_B8G8R8_USCALED:
            return true;
        case VK_FORMAT_B8G8R8_SSCALED:
            return true;
        case VK_FORMAT_B8G8R8_UINT:
            return true;
        case VK_FORMAT_B8G8R8_SINT:
            return true;
        case VK_FORMAT_B8G8R8_SRGB:
            return true;
        case VK_FORMAT_R8G8B8A8_UNORM:
            return true;
        case VK_FORMAT_R8G8B8A8_SNORM:
            return true;
        case VK_FORMAT_R8G8B8A8_USCALED:
            return true;
        case VK_FORMAT_R8G8B8A8_SSCALED:
            return true;
        case VK_FORMAT_R8G8B8A8_UINT:
            return true;
        case VK_FORMAT_R8G8B8A8_SINT:
            return true;
        case VK_FORMAT_R8G8B8A8_SRGB:
            return true;
        case VK_FORMAT_B8G8R8A8_UNORM:
            return true;
        case VK_FORMAT_B8G8R8A8_SNORM:
            return true;
        case VK_FORMAT_B8G8R8A8_USCALED:
            return true;
        case VK_FORMAT_B8G8R8A8_SSCALED:
            return true;
        case VK_FORMAT_B8G8R8A8_UINT:
            return true;
        case VK_FORMAT_B8G8R8A8_SINT:
            return true;
        case VK_FORMAT_B8G8R8A8_SRGB:
            return true;
        case VK_FORMAT_A8B8G8R8_UNORM_PACK32:
            return true;
        case VK_FORMAT_A8B8G8R8_SNORM_PACK32:
            return true;
        case VK_FORMAT_A8B8G8R8_USCALED_PACK32:
            return true;
        case VK_FORMAT_A8B8G8R8_SSCALED_PACK32:
            return true;
        case VK_FORMAT_A8B8G8R8_UINT_PACK32:
            return true;
        case VK_FORMAT_A8B8G8R8_SINT_PACK32:
            return true;
        case VK_FORMAT_A8B8G8R8_SRGB_PACK32:
            return true;
        case VK_FORMAT_A2R10G10B10_UNORM_PACK32:
            return true;
        case VK_FORMAT_A2R10G10B10_SNORM_PACK32:
            return true;
        case VK_FORMAT_A2R10G10B10_USCALED_PACK32:
            return true;
        case VK_FORMAT_A2R10G10B10_SSCALED_PACK32:
            return true;
        case VK_FORMAT_A2R10G10B10_UINT_PACK32:
            return true;
        case VK_FORMAT_A2R10G10B10_SINT_PACK32:
            return true;
        case VK_FORMAT_A2B10G10R10_UNORM_PACK32:
            return true;
        case VK_FORMAT_A2B10G10R10_SNORM_PACK32:
            return true;
        case VK_FORMAT_A2B10G10R10_USCALED_PACK32:
            return true;
        case VK_FORMAT_A2B10G10R10_SSCALED_PACK32:
            return true;
        case VK_FORMAT_A2B10G10R10_UINT_PACK32:
            return true;
        case VK_FORMAT_A2B10G10R10_SINT_PACK32:
            return true;
        case VK_FORMAT_R16_UNORM:
            return true;
        case VK_FORMAT_R16_SNORM:
            return true;
        case VK_FORMAT_R16_USCALED:
            return true;
        case VK_FORMAT_R16_SSCALED:
            return true;
        case VK_FORMAT_R16_UINT:
            return true;
        case VK_FORMAT_R16_SINT:
            return true;
        case VK_FORMAT_R16_SFLOAT:
            return true;
        case VK_FORMAT_R16G16_UNORM:
            return true;
        case VK_FORMAT_R16G16_SNORM:
            return true;
        case VK_FORMAT_R16G16_USCALED:
            return true;
        case VK_FORMAT_R16G16_SSCALED:
            return true;
        case VK_FORMAT_R16G16_UINT:
            return true;
        case VK_FORMAT_R16G16_SINT:
            return true;
        case VK_FORMAT_R16G16_SFLOAT:
            return true;
        case VK_FORMAT_R16G16B16_UNORM:
            return true;
        case VK_FORMAT_R16G16B16_SNORM:
            return true;
        case VK_FORMAT_R16G16B16_USCALED:
            return true;
        case VK_FORMAT_R16G16B16_SSCALED:
            return true;
        case VK_FORMAT_R16G16B16_UINT:
            return true;
        case VK_FORMAT_R16G16B16_SINT:
            return true;
        case VK_FORMAT_R16G16B16_SFLOAT:
            return true;
        case VK_FORMAT_R16G16B16A16_UNORM:
            return true;
        case VK_FORMAT_R16G16B16A16_SNORM:
            return true;
        case VK_FORMAT_R16G16B16A16_USCALED:
            return true;
        case VK_FORMAT_R16G16B16A16_SSCALED:
            return true;
        case VK_FORMAT_R16G16B16A16_UINT:
            return true;
        case VK_FORMAT_R16G16B16A16_SINT:
            return true;
        case VK_FORMAT_R16G16B16A16_SFLOAT:
            return true;
        case VK_FORMAT_R32_UINT:
            return true;
        case VK_FORMAT_R32_SINT:
            return true;
        case VK_FORMAT_R32_SFLOAT:
            return true;
        case VK_FORMAT_R32G32_UINT:
            return true;
        case VK_FORMAT_R32G32_SINT:
            return true;
        case VK_FORMAT_R32G32_SFLOAT:
            return true;
        case VK_FORMAT_R32G32B32_UINT:
            return true;
        case VK_FORMAT_R32G32B32_SINT:
            return true;
        case VK_FORMAT_R32G32B32_SFLOAT:
            return true;
        case VK_FORMAT_R32G32B32A32_UINT:
            return true;
        case VK_FORMAT_R32G32B32A32_SINT:
            return true;
        case VK_FORMAT_R32G32B32A32_SFLOAT:
            return true;
        case VK_FORMAT_R64_UINT:
            return true;
        case VK_FORMAT_R64_SINT:
            return true;
        case VK_FORMAT_R64_SFLOAT:
            return true;
        case VK_FORMAT_R64G64_UINT:
            return true;
        case VK_FORMAT_R64G64_SINT:
            return true;
        case VK_FORMAT_R64G64_SFLOAT:
            return true;
        case VK_FORMAT_R64G64B64_UINT:
            return true;
        case VK_FORMAT_R64G64B64_SINT:
            return true;
        case VK_FORMAT_R64G64B64_SFLOAT:
            return true;
        case VK_FORMAT_R64G64B64A64_UINT:
            return true;
        case VK_FORMAT_R64G64B64A64_SINT:
            return true;
        case VK_FORMAT_R64G64B64A64_SFLOAT:
            return true;
        case VK_FORMAT_B10G11R11_UFLOAT_PACK32:
            return true;
        case VK_FORMAT_E5B9G9R9_UFLOAT_PACK32:
            return true;
        case VK_FORMAT_D16_UNORM:
            return true;
        case VK_FORMAT_X8_D24_UNORM_PACK32:
            return true;
        case VK_FORMAT_D32_SFLOAT:
            return true;
        case VK_FORMAT_S8_UINT:
            return true;
        case VK_FORMAT_D16_UNORM_S8_UINT:
            return true;
        case VK_FORMAT_D24_UNORM_S8_UINT:
            return true;
        case VK_FORMAT_D32_SFLOAT_S8_UINT:
            return true;
        case VK_FORMAT_BC1_RGB_UNORM_BLOCK:
            return true;
        case VK_FORMAT_BC1_RGB_SRGB_BLOCK:
            return true;
        case VK_FORMAT_BC1_RGBA_UNORM_BLOCK:
            return true;
        case VK_FORMAT_BC1_RGBA_SRGB_BLOCK:
            return true;
        case VK_FORMAT_BC2_UNORM_BLOCK:
            return true;
        case VK_FORMAT_BC2_SRGB_BLOCK:
            return true;
        case VK_FORMAT_BC3_UNORM_BLOCK:
            return true;
        case VK_FORMAT_BC3_SRGB_BLOCK:
            return true;
        case VK_FORMAT_BC4_UNORM_BLOCK:
            return true;
        case VK_FORMAT_BC4_SNORM_BLOCK:
            return true;
        case VK_FORMAT_BC5_UNORM_BLOCK:
            return true;
        case VK_FORMAT_BC5_SNORM_BLOCK:
            return true;
        case VK_FORMAT_BC6H_UFLOAT_BLOCK:
            return true;
        case VK_FORMAT_BC6H_SFLOAT_BLOCK:
            return true;
        case VK_FORMAT_BC7_UNORM_BLOCK:
            return true;
        case VK_FORMAT_BC7_SRGB_BLOCK:
            return true;
        case VK_FORMAT_ETC2_R8G8B8_UNORM_BLOCK:
            return true;
        case VK_FORMAT_ETC2_R8G8B8_SRGB_BLOCK:
            return true;
        case VK_FORMAT_ETC2_R8G8B8A1_UNORM_BLOCK:
            return true;
        case VK_FORMAT_ETC2_R8G8B8A1_SRGB_BLOCK:
            return true;
        case VK_FORMAT_ETC2_R8G8B8A8_UNORM_BLOCK:
            return true;
        case VK_FORMAT_ETC2_R8G8B8A8_SRGB_BLOCK:
            return true;
        case VK_FORMAT_EAC_R11_UNORM_BLOCK:
            return true;
        case VK_FORMAT_EAC_R11_SNORM_BLOCK:
            return true;
        case VK_FORMAT_EAC_R11G11_UNORM_BLOCK:
            return true;
        case VK_FORMAT_EAC_R11G11_SNORM_BLOCK:
            return true;
        case VK_FORMAT_ASTC_4x4_UNORM_BLOCK:
            return true;
        case VK_FORMAT_ASTC_4x4_SRGB_BLOCK:
            return true;
        case VK_FORMAT_ASTC_5x4_UNORM_BLOCK:
            return true;
        case VK_FORMAT_ASTC_5x4_SRGB_BLOCK:
            return true;
        case VK_FORMAT_ASTC_5x5_UNORM_BLOCK:
            return true;
        case VK_FORMAT_ASTC_5x5_SRGB_BLOCK:
            return true;
        case VK_FORMAT_ASTC_6x5_UNORM_BLOCK:
            return true;
        case VK_FORMAT_ASTC_6x5_SRGB_BLOCK:
            return true;
        case VK_FORMAT_ASTC_6x6_UNORM_BLOCK:
            return true;
        case VK_FORMAT_ASTC_6x6_SRGB_BLOCK:
            return true;
        case VK_FORMAT_ASTC_8x5_UNORM_BLOCK:
            return true;
        case VK_FORMAT_ASTC_8x5_SRGB_BLOCK:
            return true;
        case VK_FORMAT_ASTC_8x6_UNORM_BLOCK:
            return true;
        case VK_FORMAT_ASTC_8x6_SRGB_BLOCK:
            return true;
        case VK_FORMAT_ASTC_8x8_UNORM_BLOCK:
            return true;
        case VK_FORMAT_ASTC_8x8_SRGB_BLOCK:
            return true;
        case VK_FORMAT_ASTC_10x5_UNORM_BLOCK:
            return true;
        case VK_FORMAT_ASTC_10x5_SRGB_BLOCK:
            return true;
        case VK_FORMAT_ASTC_10x6_UNORM_BLOCK:
            return true;
        case VK_FORMAT_ASTC_10x6_SRGB_BLOCK:
            return true;
        case VK_FORMAT_ASTC_10x8_UNORM_BLOCK:
            return true;
        case VK_FORMAT_ASTC_10x8_SRGB_BLOCK:
            return true;
        case VK_FORMAT_ASTC_10x10_UNORM_BLOCK:
            return true;
        case VK_FORMAT_ASTC_10x10_SRGB_BLOCK:
            return true;
        case VK_FORMAT_ASTC_12x10_UNORM_BLOCK:
            return true;
        case VK_FORMAT_ASTC_12x10_SRGB_BLOCK:
            return true;
        case VK_FORMAT_ASTC_12x12_UNORM_BLOCK:
            return true;
        case VK_FORMAT_ASTC_12x12_SRGB_BLOCK:
            return true;
        case VK_FORMAT_G8B8G8R8_422_UNORM:
            return true;
        case VK_FORMAT_B8G8R8G8_422_UNORM:
            return true;
        case VK_FORMAT_G8_B8_R8_3PLANE_420_UNORM:
            return true;
        case VK_FORMAT_G8_B8R8_2PLANE_420_UNORM:
            return true;
        case VK_FORMAT_G8_B8_R8_3PLANE_422_UNORM:
            return true;
        case VK_FORMAT_G8_B8R8_2PLANE_422_UNORM:
            return true;
        case VK_FORMAT_G8_B8_R8_3PLANE_444_UNORM:
            return true;
        case VK_FORMAT_R10X6_UNORM_PACK16:
            return true;
        case VK_FORMAT_R10X6G10X6_UNORM_2PACK16:
            return true;
        case VK_FORMAT_R10X6G10X6B10X6A10X6_UNORM_4PACK16:
            return true;
        case VK_FORMAT_G10X6B10X6G10X6R10X6_422_UNORM_4PACK16:
            return true;
        case VK_FORMAT_B10X6G10X6R10X6G10X6_422_UNORM_4PACK16:
            return true;
        case VK_FORMAT_G10X6_B10X6_R10X6_3PLANE_420_UNORM_3PACK16:
            return true;
        case VK_FORMAT_G10X6_B10X6R10X6_2PLANE_420_UNORM_3PACK16:
            return true;
        case VK_FORMAT_G10X6_B10X6_R10X6_3PLANE_422_UNORM_3PACK16:
            return true;
        case VK_FORMAT_G10X6_B10X6R10X6_2PLANE_422_UNORM_3PACK16:
            return true;
        case VK_FORMAT_G10X6_B10X6_R10X6_3PLANE_444_UNORM_3PACK16:
            return true;
        case VK_FORMAT_R12X4_UNORM_PACK16:
            return true;
        case VK_FORMAT_R12X4G12X4_UNORM_2PACK16:
            return true;
        case VK_FORMAT_R12X4G12X4B12X4A12X4_UNORM_4PACK16:
            return true;
        case VK_FORMAT_G12X4B12X4G12X4R12X4_422_UNORM_4PACK16:
            return true;
        case VK_FORMAT_B12X4G12X4R12X4G12X4_422_UNORM_4PACK16:
            return true;
        case VK_FORMAT_G12X4_B12X4_R12X4_3PLANE_420_UNORM_3PACK16:
            return true;
        case VK_FORMAT_G12X4_B12X4R12X4_2PLANE_420_UNORM_3PACK16:
            return true;
        case VK_FORMAT_G12X4_B12X4_R12X4_3PLANE_422_UNORM_3PACK16:
            return true;
        case VK_FORMAT_G12X4_B12X4R12X4_2PLANE_422_UNORM_3PACK16:
            return true;
        case VK_FORMAT_G12X4_B12X4_R12X4_3PLANE_444_UNORM_3PACK16:
            return true;
        case VK_FORMAT_G16B16G16R16_422_UNORM:
            return true;
        case VK_FORMAT_B16G16R16G16_422_UNORM:
            return true;
        case VK_FORMAT_G16_B16_R16_3PLANE_420_UNORM:
            return true;
        case VK_FORMAT_G16_B16R16_2PLANE_420_UNORM:
            return true;
        case VK_FORMAT_G16_B16_R16_3PLANE_422_UNORM:
            return true;
        case VK_FORMAT_G16_B16R16_2PLANE_422_UNORM:
            return true;
        case VK_FORMAT_G16_B16_R16_3PLANE_444_UNORM:
            return true;
        case VK_FORMAT_G8_B8R8_2PLANE_444_UNORM:
            return true;
        case VK_FORMAT_G10X6_B10X6R10X6_2PLANE_444_UNORM_3PACK16:
            return true;
        case VK_FORMAT_G12X4_B12X4R12X4_2PLANE_444_UNORM_3PACK16:
            return true;
        case VK_FORMAT_G16_B16R16_2PLANE_444_UNORM:
            return true;
        case VK_FORMAT_A4R4G4B4_UNORM_PACK16:
            return true;
        case VK_FORMAT_A4B4G4R4_UNORM_PACK16:
            return true;
        case VK_FORMAT_ASTC_4x4_SFLOAT_BLOCK:
            return true;
        case VK_FORMAT_ASTC_5x4_SFLOAT_BLOCK:
            return true;
        case VK_FORMAT_ASTC_5x5_SFLOAT_BLOCK:
            return true;
        case VK_FORMAT_ASTC_6x5_SFLOAT_BLOCK:
            return true;
        case VK_FORMAT_ASTC_6x6_SFLOAT_BLOCK:
            return true;
        case VK_FORMAT_ASTC_8x5_SFLOAT_BLOCK:
            return true;
        case VK_FORMAT_ASTC_8x6_SFLOAT_BLOCK:
            return true;
        case VK_FORMAT_ASTC_8x8_SFLOAT_BLOCK:
            return true;
        case VK_FORMAT_ASTC_10x5_SFLOAT_BLOCK:
            return true;
        case VK_FORMAT_ASTC_10x6_SFLOAT_BLOCK:
            return true;
        case VK_FORMAT_ASTC_10x8_SFLOAT_BLOCK:
            return true;
        case VK_FORMAT_ASTC_10x10_SFLOAT_BLOCK:
            return true;
        case VK_FORMAT_ASTC_12x10_SFLOAT_BLOCK:
            return true;
        case VK_FORMAT_ASTC_12x12_SFLOAT_BLOCK:
            return true;
        case VK_FORMAT_A1B5G5R5_UNORM_PACK16:
            return true;
        case VK_FORMAT_A8_UNORM:
            return true;

        default:
            return false;
    }
}

bool IsVkColorSpaceKHRInVulkanSC(VkColorSpaceKHR value) {
    switch (value) {
        case VK_COLOR_SPACE_SRGB_NONLINEAR_KHR:
            return true;
        case VK_COLOR_SPACE_DISPLAY_P3_NONLINEAR_EXT:
            return true;
        case VK_COLOR_SPACE_EXTENDED_SRGB_LINEAR_EXT:
            return true;
        case VK_COLOR_SPACE_DISPLAY_P3_LINEAR_EXT:
            return true;
        case VK_COLOR_SPACE_DCI_P3_NONLINEAR_EXT:
            return true;
        case VK_COLOR_SPACE_BT709_LINEAR_EXT:
            return true;
        case VK_COLOR_SPACE_BT709_NONLINEAR_EXT:
            return true;
        case VK_COLOR_SPACE_BT2020_LINEAR_EXT:
            return true;
        case VK_COLOR_SPACE_HDR10_ST2084_EXT:
            return true;
        case VK_COLOR_SPACE_DOLBYVISION_EXT:
            return true;
        case VK_COLOR_SPACE_HDR10_HLG_EXT:
            return true;
        case VK_COLOR_SPACE_ADOBERGB_LINEAR_EXT:
            return true;
        case VK_COLOR_SPACE_ADOBERGB_NONLINEAR_EXT:
            return true;
        case VK_COLOR_SPACE_PASS_THROUGH_EXT:
            return true;
        case VK_COLOR_SPACE_EXTENDED_SRGB_NONLINEAR_EXT:
            return true;

        default:
            return false;
    }
}

bool IsVkPerformanceCounterUnitKHRInVulkanSC(VkPerformanceCounterUnitKHR value) {
    switch (value) {
        case VK_PERFORMANCE_COUNTER_UNIT_GENERIC_KHR:
            return true;
        case VK_PERFORMANCE_COUNTER_UNIT_PERCENTAGE_KHR:
            return true;
        case VK_PERFORMANCE_COUNTER_UNIT_NANOSECONDS_KHR:
            return true;
        case VK_PERFORMANCE_COUNTER_UNIT_BYTES_KHR:
            return true;
        case VK_PERFORMANCE_COUNTER_UNIT_BYTES_PER_SECOND_KHR:
            return true;
        case VK_PERFORMANCE_COUNTER_UNIT_KELVIN_KHR:
            return true;
        case VK_PERFORMANCE_COUNTER_UNIT_WATTS_KHR:
            return true;
        case VK_PERFORMANCE_COUNTER_UNIT_VOLTS_KHR:
            return true;
        case VK_PERFORMANCE_COUNTER_UNIT_AMPS_KHR:
            return true;
        case VK_PERFORMANCE_COUNTER_UNIT_HERTZ_KHR:
            return true;
        case VK_PERFORMANCE_COUNTER_UNIT_CYCLES_KHR:
            return true;

        default:
            return false;
    }
}

bool IsVkPerformanceCounterScopeKHRInVulkanSC(VkPerformanceCounterScopeKHR value) {
    switch (value) {
        case VK_PERFORMANCE_COUNTER_SCOPE_COMMAND_BUFFER_KHR:
            return true;
        case VK_PERFORMANCE_COUNTER_SCOPE_RENDER_PASS_KHR:
            return true;
        case VK_PERFORMANCE_COUNTER_SCOPE_COMMAND_KHR:
            return true;

        default:
            return false;
    }
}

bool IsVkPerformanceCounterStorageKHRInVulkanSC(VkPerformanceCounterStorageKHR value) {
    switch (value) {
        case VK_PERFORMANCE_COUNTER_STORAGE_INT32_KHR:
            return true;
        case VK_PERFORMANCE_COUNTER_STORAGE_INT64_KHR:
            return true;
        case VK_PERFORMANCE_COUNTER_STORAGE_UINT32_KHR:
            return true;
        case VK_PERFORMANCE_COUNTER_STORAGE_UINT64_KHR:
            return true;
        case VK_PERFORMANCE_COUNTER_STORAGE_FLOAT32_KHR:
            return true;
        case VK_PERFORMANCE_COUNTER_STORAGE_FLOAT64_KHR:
            return true;

        default:
            return false;
    }
}

bool IsVkPointClippingBehaviorInVulkanSC(VkPointClippingBehavior value) {
    switch (value) {
        case VK_POINT_CLIPPING_BEHAVIOR_ALL_CLIP_PLANES:
            return true;
        case VK_POINT_CLIPPING_BEHAVIOR_USER_CLIP_PLANES_ONLY:
            return true;

        default:
            return false;
    }
}

bool IsVkDriverIdInVulkanSC(VkDriverId value) {
    switch (value) {
        case VK_DRIVER_ID_AMD_PROPRIETARY:
            return true;
        case VK_DRIVER_ID_AMD_OPEN_SOURCE:
            return true;
        case VK_DRIVER_ID_MESA_RADV:
            return true;
        case VK_DRIVER_ID_NVIDIA_PROPRIETARY:
            return true;
        case VK_DRIVER_ID_INTEL_PROPRIETARY_WINDOWS:
            return true;
        case VK_DRIVER_ID_INTEL_OPEN_SOURCE_MESA:
            return true;
        case VK_DRIVER_ID_IMAGINATION_PROPRIETARY:
            return true;
        case VK_DRIVER_ID_QUALCOMM_PROPRIETARY:
            return true;
        case VK_DRIVER_ID_ARM_PROPRIETARY:
            return true;
        case VK_DRIVER_ID_GOOGLE_SWIFTSHADER:
            return true;
        case VK_DRIVER_ID_GGP_PROPRIETARY:
            return true;
        case VK_DRIVER_ID_BROADCOM_PROPRIETARY:
            return true;
        case VK_DRIVER_ID_MESA_LLVMPIPE:
            return true;
        case VK_DRIVER_ID_MOLTENVK:
            return true;
        case VK_DRIVER_ID_COREAVI_PROPRIETARY:
            return true;
        case VK_DRIVER_ID_JUICE_PROPRIETARY:
            return true;
        case VK_DRIVER_ID_VERISILICON_PROPRIETARY:
            return true;
        case VK_DRIVER_ID_MESA_TURNIP:
            return true;
        case VK_DRIVER_ID_MESA_V3DV:
            return true;
        case VK_DRIVER_ID_MESA_PANVK:
            return true;
        case VK_DRIVER_ID_SAMSUNG_PROPRIETARY:
            return true;
        case VK_DRIVER_ID_MESA_VENUS:
            return true;
        case VK_DRIVER_ID_MESA_DOZEN:
            return true;
        case VK_DRIVER_ID_MESA_NVK:
            return true;
        case VK_DRIVER_ID_IMAGINATION_OPEN_SOURCE_MESA:
            return true;
        case VK_DRIVER_ID_MESA_HONEYKRISP:
            return true;
        case VK_DRIVER_ID_VULKAN_SC_EMULATION_ON_VULKAN:
            return true;
        case VK_DRIVER_ID_MESA_KOSMICKRISP:
            return true;
        case VK_DRIVER_ID_MESA_GFXSTREAM:
            return true;
        case VK_DRIVER_ID_APE_SOFT:
            return true;

        default:
            return false;
    }
}

bool IsVkShaderFloatControlsIndependenceInVulkanSC(VkShaderFloatControlsIndependence value) {
    switch (value) {
        case VK_SHADER_FLOAT_CONTROLS_INDEPENDENCE_32_BIT_ONLY:
            return true;
        case VK_SHADER_FLOAT_CONTROLS_INDEPENDENCE_ALL:
            return true;
        case VK_SHADER_FLOAT_CONTROLS_INDEPENDENCE_NONE:
            return true;

        default:
            return false;
    }
}

bool IsVkPipelineRobustnessBufferBehaviorInVulkanSC(VkPipelineRobustnessBufferBehavior value) {
    switch (value) {
        case VK_PIPELINE_ROBUSTNESS_BUFFER_BEHAVIOR_DEVICE_DEFAULT:
            return true;
        case VK_PIPELINE_ROBUSTNESS_BUFFER_BEHAVIOR_DISABLED:
            return true;
        case VK_PIPELINE_ROBUSTNESS_BUFFER_BEHAVIOR_ROBUST_BUFFER_ACCESS:
            return true;
        case VK_PIPELINE_ROBUSTNESS_BUFFER_BEHAVIOR_ROBUST_BUFFER_ACCESS_2:
            return true;

        default:
            return false;
    }
}

bool IsVkPipelineRobustnessImageBehaviorInVulkanSC(VkPipelineRobustnessImageBehavior value) {
    switch (value) {
        case VK_PIPELINE_ROBUSTNESS_IMAGE_BEHAVIOR_DEVICE_DEFAULT:
            return true;
        case VK_PIPELINE_ROBUSTNESS_IMAGE_BEHAVIOR_DISABLED:
            return true;
        case VK_PIPELINE_ROBUSTNESS_IMAGE_BEHAVIOR_ROBUST_IMAGE_ACCESS:
            return true;
        case VK_PIPELINE_ROBUSTNESS_IMAGE_BEHAVIOR_ROBUST_IMAGE_ACCESS_2:
            return true;

        default:
            return false;
    }
}

bool IsVkImageLayoutInVulkanSC(VkImageLayout value) {
    switch (value) {
        case VK_IMAGE_LAYOUT_UNDEFINED:
            return true;
        case VK_IMAGE_LAYOUT_GENERAL:
            return true;
        case VK_IMAGE_LAYOUT_COLOR_ATTACHMENT_OPTIMAL:
            return true;
        case VK_IMAGE_LAYOUT_DEPTH_STENCIL_ATTACHMENT_OPTIMAL:
            return true;
        case VK_IMAGE_LAYOUT_DEPTH_STENCIL_READ_ONLY_OPTIMAL:
            return true;
        case VK_IMAGE_LAYOUT_SHADER_READ_ONLY_OPTIMAL:
            return true;
        case VK_IMAGE_LAYOUT_TRANSFER_SRC_OPTIMAL:
            return true;
        case VK_IMAGE_LAYOUT_TRANSFER_DST_OPTIMAL:
            return true;
        case VK_IMAGE_LAYOUT_PREINITIALIZED:
            return true;
        case VK_IMAGE_LAYOUT_DEPTH_READ_ONLY_STENCIL_ATTACHMENT_OPTIMAL:
            return true;
        case VK_IMAGE_LAYOUT_DEPTH_ATTACHMENT_STENCIL_READ_ONLY_OPTIMAL:
            return true;
        case VK_IMAGE_LAYOUT_DEPTH_ATTACHMENT_OPTIMAL:
            return true;
        case VK_IMAGE_LAYOUT_DEPTH_READ_ONLY_OPTIMAL:
            return true;
        case VK_IMAGE_LAYOUT_STENCIL_ATTACHMENT_OPTIMAL:
            return true;
        case VK_IMAGE_LAYOUT_STENCIL_READ_ONLY_OPTIMAL:
            return true;
        case VK_IMAGE_LAYOUT_READ_ONLY_OPTIMAL:
            return true;
        case VK_IMAGE_LAYOUT_ATTACHMENT_OPTIMAL:
            return true;
        case VK_IMAGE_LAYOUT_RENDERING_LOCAL_READ:
            return true;
        case VK_IMAGE_LAYOUT_PRESENT_SRC_KHR:
            return true;
        case VK_IMAGE_LAYOUT_SHARED_PRESENT_KHR:
            return true;
        case VK_IMAGE_LAYOUT_FRAGMENT_SHADING_RATE_ATTACHMENT_OPTIMAL_KHR:
            return true;

        default:
            return false;
    }
}

bool IsVkQueueGlobalPriorityInVulkanSC(VkQueueGlobalPriority value) {
    switch (value) {
        case VK_QUEUE_GLOBAL_PRIORITY_LOW:
            return true;
        case VK_QUEUE_GLOBAL_PRIORITY_MEDIUM:
            return true;
        case VK_QUEUE_GLOBAL_PRIORITY_HIGH:
            return true;
        case VK_QUEUE_GLOBAL_PRIORITY_REALTIME:
            return true;

        default:
            return false;
    }
}

bool IsVkSamplerYcbcrModelConversionInVulkanSC(VkSamplerYcbcrModelConversion value) {
    switch (value) {
        case VK_SAMPLER_YCBCR_MODEL_CONVERSION_RGB_IDENTITY:
            return true;
        case VK_SAMPLER_YCBCR_MODEL_CONVERSION_YCBCR_IDENTITY:
            return true;
        case VK_SAMPLER_YCBCR_MODEL_CONVERSION_YCBCR_709:
            return true;
        case VK_SAMPLER_YCBCR_MODEL_CONVERSION_YCBCR_601:
            return true;
        case VK_SAMPLER_YCBCR_MODEL_CONVERSION_YCBCR_2020:
            return true;

        default:
            return false;
    }
}

bool IsVkSamplerYcbcrRangeInVulkanSC(VkSamplerYcbcrRange value) {
    switch (value) {
        case VK_SAMPLER_YCBCR_RANGE_ITU_FULL:
            return true;
        case VK_SAMPLER_YCBCR_RANGE_ITU_NARROW:
            return true;

        default:
            return false;
    }
}

bool IsVkChromaLocationInVulkanSC(VkChromaLocation value) {
    switch (value) {
        case VK_CHROMA_LOCATION_COSITED_EVEN:
            return true;
        case VK_CHROMA_LOCATION_MIDPOINT:
            return true;

        default:
            return false;
    }
}

bool IsVkComponentSwizzleInVulkanSC(VkComponentSwizzle value) {
    switch (value) {
        case VK_COMPONENT_SWIZZLE_IDENTITY:
            return true;
        case VK_COMPONENT_SWIZZLE_ZERO:
            return true;
        case VK_COMPONENT_SWIZZLE_ONE:
            return true;
        case VK_COMPONENT_SWIZZLE_R:
            return true;
        case VK_COMPONENT_SWIZZLE_G:
            return true;
        case VK_COMPONENT_SWIZZLE_B:
            return true;
        case VK_COMPONENT_SWIZZLE_A:
            return true;

        default:
            return false;
    }
}

bool IsVkFormatFeatureFlagBitsInVulkanSC(VkFormatFeatureFlagBits value) {
    switch (value) {
        case VK_FORMAT_FEATURE_SAMPLED_IMAGE_BIT:
            return true;
        case VK_FORMAT_FEATURE_STORAGE_IMAGE_BIT:
            return true;
        case VK_FORMAT_FEATURE_STORAGE_IMAGE_ATOMIC_BIT:
            return true;
        case VK_FORMAT_FEATURE_UNIFORM_TEXEL_BUFFER_BIT:
            return true;
        case VK_FORMAT_FEATURE_STORAGE_TEXEL_BUFFER_BIT:
            return true;
        case VK_FORMAT_FEATURE_STORAGE_TEXEL_BUFFER_ATOMIC_BIT:
            return true;
        case VK_FORMAT_FEATURE_VERTEX_BUFFER_BIT:
            return true;
        case VK_FORMAT_FEATURE_COLOR_ATTACHMENT_BIT:
            return true;
        case VK_FORMAT_FEATURE_COLOR_ATTACHMENT_BLEND_BIT:
            return true;
        case VK_FORMAT_FEATURE_DEPTH_STENCIL_ATTACHMENT_BIT:
            return true;
        case VK_FORMAT_FEATURE_BLIT_SRC_BIT:
            return true;
        case VK_FORMAT_FEATURE_BLIT_DST_BIT:
            return true;
        case VK_FORMAT_FEATURE_SAMPLED_IMAGE_FILTER_LINEAR_BIT:
            return true;
        case VK_FORMAT_FEATURE_TRANSFER_SRC_BIT:
            return true;
        case VK_FORMAT_FEATURE_TRANSFER_DST_BIT:
            return true;
        case VK_FORMAT_FEATURE_MIDPOINT_CHROMA_SAMPLES_BIT:
            return true;
        case VK_FORMAT_FEATURE_SAMPLED_IMAGE_YCBCR_CONVERSION_LINEAR_FILTER_BIT:
            return true;
        case VK_FORMAT_FEATURE_SAMPLED_IMAGE_YCBCR_CONVERSION_SEPARATE_RECONSTRUCTION_FILTER_BIT:
            return true;
        case VK_FORMAT_FEATURE_SAMPLED_IMAGE_YCBCR_CONVERSION_CHROMA_RECONSTRUCTION_EXPLICIT_BIT:
            return true;
        case VK_FORMAT_FEATURE_SAMPLED_IMAGE_YCBCR_CONVERSION_CHROMA_RECONSTRUCTION_EXPLICIT_FORCEABLE_BIT:
            return true;
        case VK_FORMAT_FEATURE_DISJOINT_BIT:
            return true;
        case VK_FORMAT_FEATURE_COSITED_CHROMA_SAMPLES_BIT:
            return true;
        case VK_FORMAT_FEATURE_SAMPLED_IMAGE_FILTER_MINMAX_BIT:
            return true;
        case VK_FORMAT_FEATURE_SAMPLED_IMAGE_FILTER_CUBIC_BIT_EXT:
            return true;
        case VK_FORMAT_FEATURE_FRAGMENT_SHADING_RATE_ATTACHMENT_BIT_KHR:
            return true;

        default:
            return false;
    }
}

bool IsVkSampleCountFlagBitsInVulkanSC(VkSampleCountFlagBits value) {
    switch (value) {
        case VK_SAMPLE_COUNT_1_BIT:
            return true;
        case VK_SAMPLE_COUNT_2_BIT:
            return true;
        case VK_SAMPLE_COUNT_4_BIT:
            return true;
        case VK_SAMPLE_COUNT_8_BIT:
            return true;
        case VK_SAMPLE_COUNT_16_BIT:
            return true;
        case VK_SAMPLE_COUNT_32_BIT:
            return true;
        case VK_SAMPLE_COUNT_64_BIT:
            return true;

        default:
            return false;
    }
}

bool IsVkQueueFlagBitsInVulkanSC(VkQueueFlagBits value) {
    switch (value) {
        case VK_QUEUE_GRAPHICS_BIT:
            return true;
        case VK_QUEUE_COMPUTE_BIT:
            return true;
        case VK_QUEUE_TRANSFER_BIT:
            return true;
        case VK_QUEUE_PROTECTED_BIT:
            return true;

        default:
            return false;
    }
}

bool IsVkExternalFenceHandleTypeFlagBitsInVulkanSC(VkExternalFenceHandleTypeFlagBits value) {
    switch (value) {
        case VK_EXTERNAL_FENCE_HANDLE_TYPE_OPAQUE_FD_BIT:
            return true;
        case VK_EXTERNAL_FENCE_HANDLE_TYPE_OPAQUE_WIN32_BIT:
            return true;
        case VK_EXTERNAL_FENCE_HANDLE_TYPE_OPAQUE_WIN32_KMT_BIT:
            return true;
        case VK_EXTERNAL_FENCE_HANDLE_TYPE_SYNC_FD_BIT:
            return true;
        case VK_EXTERNAL_FENCE_HANDLE_TYPE_SCI_SYNC_OBJ_BIT_NV:
            return true;
        case VK_EXTERNAL_FENCE_HANDLE_TYPE_SCI_SYNC_FENCE_BIT_NV:
            return true;

        default:
            return false;
    }
}

bool IsVkExternalFenceFeatureFlagBitsInVulkanSC(VkExternalFenceFeatureFlagBits value) {
    switch (value) {
        case VK_EXTERNAL_FENCE_FEATURE_EXPORTABLE_BIT:
            return true;
        case VK_EXTERNAL_FENCE_FEATURE_IMPORTABLE_BIT:
            return true;

        default:
            return false;
    }
}

bool IsVkExternalSemaphoreHandleTypeFlagBitsInVulkanSC(VkExternalSemaphoreHandleTypeFlagBits value) {
    switch (value) {
        case VK_EXTERNAL_SEMAPHORE_HANDLE_TYPE_OPAQUE_FD_BIT:
            return true;
        case VK_EXTERNAL_SEMAPHORE_HANDLE_TYPE_OPAQUE_WIN32_BIT:
            return true;
        case VK_EXTERNAL_SEMAPHORE_HANDLE_TYPE_OPAQUE_WIN32_KMT_BIT:
            return true;
        case VK_EXTERNAL_SEMAPHORE_HANDLE_TYPE_D3D12_FENCE_BIT:
            return true;
        case VK_EXTERNAL_SEMAPHORE_HANDLE_TYPE_SYNC_FD_BIT:
            return true;
        case VK_EXTERNAL_SEMAPHORE_HANDLE_TYPE_SCI_SYNC_OBJ_BIT_NV:
            return true;

        default:
            return false;
    }
}

bool IsVkExternalSemaphoreFeatureFlagBitsInVulkanSC(VkExternalSemaphoreFeatureFlagBits value) {
    switch (value) {
        case VK_EXTERNAL_SEMAPHORE_FEATURE_EXPORTABLE_BIT:
            return true;
        case VK_EXTERNAL_SEMAPHORE_FEATURE_IMPORTABLE_BIT:
            return true;

        default:
            return false;
    }
}

bool IsVkSurfaceTransformFlagBitsKHRInVulkanSC(VkSurfaceTransformFlagBitsKHR value) {
    switch (value) {
        case VK_SURFACE_TRANSFORM_IDENTITY_BIT_KHR:
            return true;
        case VK_SURFACE_TRANSFORM_ROTATE_90_BIT_KHR:
            return true;
        case VK_SURFACE_TRANSFORM_ROTATE_180_BIT_KHR:
            return true;
        case VK_SURFACE_TRANSFORM_ROTATE_270_BIT_KHR:
            return true;
        case VK_SURFACE_TRANSFORM_HORIZONTAL_MIRROR_BIT_KHR:
            return true;
        case VK_SURFACE_TRANSFORM_HORIZONTAL_MIRROR_ROTATE_90_BIT_KHR:
            return true;
        case VK_SURFACE_TRANSFORM_HORIZONTAL_MIRROR_ROTATE_180_BIT_KHR:
            return true;
        case VK_SURFACE_TRANSFORM_HORIZONTAL_MIRROR_ROTATE_270_BIT_KHR:
            return true;
        case VK_SURFACE_TRANSFORM_INHERIT_BIT_KHR:
            return true;

        default:
            return false;
    }
}

bool IsVkCompositeAlphaFlagBitsKHRInVulkanSC(VkCompositeAlphaFlagBitsKHR value) {
    switch (value) {
        case VK_COMPOSITE_ALPHA_OPAQUE_BIT_KHR:
            return true;
        case VK_COMPOSITE_ALPHA_PRE_MULTIPLIED_BIT_KHR:
            return true;
        case VK_COMPOSITE_ALPHA_POST_MULTIPLIED_BIT_KHR:
            return true;
        case VK_COMPOSITE_ALPHA_INHERIT_BIT_KHR:
            return true;

        default:
            return false;
    }
}

bool IsVkImageUsageFlagBitsInVulkanSC(VkImageUsageFlagBits value) {
    switch (value) {
        case VK_IMAGE_USAGE_TRANSFER_SRC_BIT:
            return true;
        case VK_IMAGE_USAGE_TRANSFER_DST_BIT:
            return true;
        case VK_IMAGE_USAGE_SAMPLED_BIT:
            return true;
        case VK_IMAGE_USAGE_STORAGE_BIT:
            return true;
        case VK_IMAGE_USAGE_COLOR_ATTACHMENT_BIT:
            return true;
        case VK_IMAGE_USAGE_DEPTH_STENCIL_ATTACHMENT_BIT:
            return true;
        case VK_IMAGE_USAGE_TRANSIENT_ATTACHMENT_BIT:
            return true;
        case VK_IMAGE_USAGE_INPUT_ATTACHMENT_BIT:
            return true;
        case VK_IMAGE_USAGE_HOST_TRANSFER_BIT:
            return true;
        case VK_IMAGE_USAGE_FRAGMENT_SHADING_RATE_ATTACHMENT_BIT_KHR:
            return true;

        default:
            return false;
    }
}

bool IsVkDeviceGroupPresentModeFlagBitsKHRInVulkanSC(VkDeviceGroupPresentModeFlagBitsKHR value) {
    switch (value) {
        case VK_DEVICE_GROUP_PRESENT_MODE_LOCAL_BIT_KHR:
            return true;
        case VK_DEVICE_GROUP_PRESENT_MODE_REMOTE_BIT_KHR:
            return true;
        case VK_DEVICE_GROUP_PRESENT_MODE_SUM_BIT_KHR:
            return true;
        case VK_DEVICE_GROUP_PRESENT_MODE_LOCAL_MULTI_DEVICE_BIT_KHR:
            return true;

        default:
            return false;
    }
}

bool IsVkDisplayPlaneAlphaFlagBitsKHRInVulkanSC(VkDisplayPlaneAlphaFlagBitsKHR value) {
    switch (value) {
        case VK_DISPLAY_PLANE_ALPHA_OPAQUE_BIT_KHR:
            return true;
        case VK_DISPLAY_PLANE_ALPHA_GLOBAL_BIT_KHR:
            return true;
        case VK_DISPLAY_PLANE_ALPHA_PER_PIXEL_BIT_KHR:
            return true;
        case VK_DISPLAY_PLANE_ALPHA_PER_PIXEL_PREMULTIPLIED_BIT_KHR:
            return true;

        default:
            return false;
    }
}

bool IsVkPerformanceCounterDescriptionFlagBitsKHRInVulkanSC(VkPerformanceCounterDescriptionFlagBitsKHR value) {
    switch (value) {
        case VK_PERFORMANCE_COUNTER_DESCRIPTION_PERFORMANCE_IMPACTING_BIT_KHR:
            return true;
        case VK_PERFORMANCE_COUNTER_DESCRIPTION_CONCURRENTLY_IMPACTED_BIT_KHR:
            return true;

        default:
            return false;
    }
}

bool IsVkSurfaceCounterFlagBitsEXTInVulkanSC(VkSurfaceCounterFlagBitsEXT value) {
    switch (value) {
        case VK_SURFACE_COUNTER_VBLANK_BIT_EXT:
            return true;

        default:
            return false;
    }
}

bool IsVkShaderStageFlagBitsInVulkanSC(VkShaderStageFlagBits value) {
    switch (value) {
        case VK_SHADER_STAGE_VERTEX_BIT:
            return true;
        case VK_SHADER_STAGE_TESSELLATION_CONTROL_BIT:
            return true;
        case VK_SHADER_STAGE_TESSELLATION_EVALUATION_BIT:
            return true;
        case VK_SHADER_STAGE_GEOMETRY_BIT:
            return true;
        case VK_SHADER_STAGE_FRAGMENT_BIT:
            return true;
        case VK_SHADER_STAGE_COMPUTE_BIT:
            return true;
        case VK_SHADER_STAGE_ALL_GRAPHICS:
            return true;
        case VK_SHADER_STAGE_ALL:
            return true;

        default:
            return false;
    }
}

bool IsVkSubgroupFeatureFlagBitsInVulkanSC(VkSubgroupFeatureFlagBits value) {
    switch (value) {
        case VK_SUBGROUP_FEATURE_BASIC_BIT:
            return true;
        case VK_SUBGROUP_FEATURE_VOTE_BIT:
            return true;
        case VK_SUBGROUP_FEATURE_ARITHMETIC_BIT:
            return true;
        case VK_SUBGROUP_FEATURE_BALLOT_BIT:
            return true;
        case VK_SUBGROUP_FEATURE_SHUFFLE_BIT:
            return true;
        case VK_SUBGROUP_FEATURE_SHUFFLE_RELATIVE_BIT:
            return true;
        case VK_SUBGROUP_FEATURE_CLUSTERED_BIT:
            return true;
        case VK_SUBGROUP_FEATURE_QUAD_BIT:
            return true;
        case VK_SUBGROUP_FEATURE_ROTATE_BIT:
            return true;
        case VK_SUBGROUP_FEATURE_ROTATE_CLUSTERED_BIT:
            return true;

        default:
            return false;
    }
}

bool IsVkResolveModeFlagBitsInVulkanSC(VkResolveModeFlagBits value) {
    switch (value) {
        case VK_RESOLVE_MODE_NONE:
            return true;
        case VK_RESOLVE_MODE_SAMPLE_ZERO_BIT:
            return true;
        case VK_RESOLVE_MODE_AVERAGE_BIT:
            return true;
        case VK_RESOLVE_MODE_MIN_BIT:
            return true;
        case VK_RESOLVE_MODE_MAX_BIT:
            return true;

        default:
            return false;
    }
}

bool IsVkFormatFeatureFlagBits2InVulkanSC(VkFormatFeatureFlagBits2 value) {
    switch (value) {
        case VK_FORMAT_FEATURE_2_SAMPLED_IMAGE_BIT:
            return true;
        case VK_FORMAT_FEATURE_2_STORAGE_IMAGE_BIT:
            return true;
        case VK_FORMAT_FEATURE_2_STORAGE_IMAGE_ATOMIC_BIT:
            return true;
        case VK_FORMAT_FEATURE_2_UNIFORM_TEXEL_BUFFER_BIT:
            return true;
        case VK_FORMAT_FEATURE_2_STORAGE_TEXEL_BUFFER_BIT:
            return true;
        case VK_FORMAT_FEATURE_2_STORAGE_TEXEL_BUFFER_ATOMIC_BIT:
            return true;
        case VK_FORMAT_FEATURE_2_VERTEX_BUFFER_BIT:
            return true;
        case VK_FORMAT_FEATURE_2_COLOR_ATTACHMENT_BIT:
            return true;
        case VK_FORMAT_FEATURE_2_COLOR_ATTACHMENT_BLEND_BIT:
            return true;
        case VK_FORMAT_FEATURE_2_DEPTH_STENCIL_ATTACHMENT_BIT:
            return true;
        case VK_FORMAT_FEATURE_2_BLIT_SRC_BIT:
            return true;
        case VK_FORMAT_FEATURE_2_BLIT_DST_BIT:
            return true;
        case VK_FORMAT_FEATURE_2_SAMPLED_IMAGE_FILTER_LINEAR_BIT:
            return true;
        case VK_FORMAT_FEATURE_2_TRANSFER_SRC_BIT:
            return true;
        case VK_FORMAT_FEATURE_2_TRANSFER_DST_BIT:
            return true;
        case VK_FORMAT_FEATURE_2_SAMPLED_IMAGE_FILTER_MINMAX_BIT:
            return true;
        case VK_FORMAT_FEATURE_2_MIDPOINT_CHROMA_SAMPLES_BIT:
            return true;
        case VK_FORMAT_FEATURE_2_SAMPLED_IMAGE_YCBCR_CONVERSION_LINEAR_FILTER_BIT:
            return true;
        case VK_FORMAT_FEATURE_2_SAMPLED_IMAGE_YCBCR_CONVERSION_SEPARATE_RECONSTRUCTION_FILTER_BIT:
            return true;
        case VK_FORMAT_FEATURE_2_SAMPLED_IMAGE_YCBCR_CONVERSION_CHROMA_RECONSTRUCTION_EXPLICIT_BIT:
            return true;
        case VK_FORMAT_FEATURE_2_SAMPLED_IMAGE_YCBCR_CONVERSION_CHROMA_RECONSTRUCTION_EXPLICIT_FORCEABLE_BIT:
            return true;
        case VK_FORMAT_FEATURE_2_DISJOINT_BIT:
            return true;
        case VK_FORMAT_FEATURE_2_COSITED_CHROMA_SAMPLES_BIT:
            return true;
        case VK_FORMAT_FEATURE_2_STORAGE_READ_WITHOUT_FORMAT_BIT:
            return true;
        case VK_FORMAT_FEATURE_2_STORAGE_WRITE_WITHOUT_FORMAT_BIT:
            return true;
        case VK_FORMAT_FEATURE_2_SAMPLED_IMAGE_DEPTH_COMPARISON_BIT:
            return true;
        case VK_FORMAT_FEATURE_2_SAMPLED_IMAGE_FILTER_CUBIC_BIT:
            return true;
        case VK_FORMAT_FEATURE_2_HOST_IMAGE_TRANSFER_BIT:
            return true;

        default:
            return false;
    }
}

bool IsVkMemoryPropertyFlagBitsInVulkanSC(VkMemoryPropertyFlagBits value) {
    switch (value) {
        case VK_MEMORY_PROPERTY_DEVICE_LOCAL_BIT:
            return true;
        case VK_MEMORY_PROPERTY_HOST_VISIBLE_BIT:
            return true;
        case VK_MEMORY_PROPERTY_HOST_COHERENT_BIT:
            return true;
        case VK_MEMORY_PROPERTY_HOST_CACHED_BIT:
            return true;
        case VK_MEMORY_PROPERTY_LAZILY_ALLOCATED_BIT:
            return true;
        case VK_MEMORY_PROPERTY_PROTECTED_BIT:
            return true;

        default:
            return false;
    }
}

bool IsVkMemoryHeapFlagBitsInVulkanSC(VkMemoryHeapFlagBits value) {
    switch (value) {
        case VK_MEMORY_HEAP_DEVICE_LOCAL_BIT:
            return true;
        case VK_MEMORY_HEAP_MULTI_INSTANCE_BIT:
            return true;
        case VK_MEMORY_HEAP_SEU_SAFE_BIT:
            return true;

        default:
            return false;
    }
}

bool IsVkExternalMemoryFeatureFlagBitsInVulkanSC(VkExternalMemoryFeatureFlagBits value) {
    switch (value) {
        case VK_EXTERNAL_MEMORY_FEATURE_DEDICATED_ONLY_BIT:
            return true;
        case VK_EXTERNAL_MEMORY_FEATURE_EXPORTABLE_BIT:
            return true;
        case VK_EXTERNAL_MEMORY_FEATURE_IMPORTABLE_BIT:
            return true;

        default:
            return false;
    }
}

bool IsVkExternalMemoryHandleTypeFlagBitsInVulkanSC(VkExternalMemoryHandleTypeFlagBits value) {
    switch (value) {
        case VK_EXTERNAL_MEMORY_HANDLE_TYPE_OPAQUE_FD_BIT:
            return true;
        case VK_EXTERNAL_MEMORY_HANDLE_TYPE_OPAQUE_WIN32_BIT:
            return true;
        case VK_EXTERNAL_MEMORY_HANDLE_TYPE_OPAQUE_WIN32_KMT_BIT:
            return true;
        case VK_EXTERNAL_MEMORY_HANDLE_TYPE_D3D11_TEXTURE_BIT:
            return true;
        case VK_EXTERNAL_MEMORY_HANDLE_TYPE_D3D11_TEXTURE_KMT_BIT:
            return true;
        case VK_EXTERNAL_MEMORY_HANDLE_TYPE_D3D12_HEAP_BIT:
            return true;
        case VK_EXTERNAL_MEMORY_HANDLE_TYPE_D3D12_RESOURCE_BIT:
            return true;
        case VK_EXTERNAL_MEMORY_HANDLE_TYPE_DMA_BUF_BIT_EXT:
            return true;
        case VK_EXTERNAL_MEMORY_HANDLE_TYPE_HOST_ALLOCATION_BIT_EXT:
            return true;
        case VK_EXTERNAL_MEMORY_HANDLE_TYPE_HOST_MAPPED_FOREIGN_MEMORY_BIT_EXT:
            return true;
        case VK_EXTERNAL_MEMORY_HANDLE_TYPE_SCI_BUF_BIT_NV:
            return true;
        case VK_EXTERNAL_MEMORY_HANDLE_TYPE_SCREEN_BUFFER_BIT_QNX:
            return true;

        default:
            return false;
    }
}
// clang-format off
const VkFormatFeatureFlags AllVkFormatFeatureFlagBits = VK_FORMAT_FEATURE_SAMPLED_IMAGE_BIT|VK_FORMAT_FEATURE_STORAGE_IMAGE_BIT|VK_FORMAT_FEATURE_STORAGE_IMAGE_ATOMIC_BIT|VK_FORMAT_FEATURE_UNIFORM_TEXEL_BUFFER_BIT|VK_FORMAT_FEATURE_STORAGE_TEXEL_BUFFER_BIT|VK_FORMAT_FEATURE_STORAGE_TEXEL_BUFFER_ATOMIC_BIT|VK_FORMAT_FEATURE_VERTEX_BUFFER_BIT|VK_FORMAT_FEATURE_COLOR_ATTACHMENT_BIT|VK_FORMAT_FEATURE_COLOR_ATTACHMENT_BLEND_BIT|VK_FORMAT_FEATURE_DEPTH_STENCIL_ATTACHMENT_BIT|VK_FORMAT_FEATURE_BLIT_SRC_BIT|VK_FORMAT_FEATURE_BLIT_DST_BIT|VK_FORMAT_FEATURE_SAMPLED_IMAGE_FILTER_LINEAR_BIT|VK_FORMAT_FEATURE_TRANSFER_SRC_BIT|VK_FORMAT_FEATURE_TRANSFER_DST_BIT|VK_FORMAT_FEATURE_MIDPOINT_CHROMA_SAMPLES_BIT|VK_FORMAT_FEATURE_SAMPLED_IMAGE_YCBCR_CONVERSION_LINEAR_FILTER_BIT|VK_FORMAT_FEATURE_SAMPLED_IMAGE_YCBCR_CONVERSION_SEPARATE_RECONSTRUCTION_FILTER_BIT|VK_FORMAT_FEATURE_SAMPLED_IMAGE_YCBCR_CONVERSION_CHROMA_RECONSTRUCTION_EXPLICIT_BIT|VK_FORMAT_FEATURE_SAMPLED_IMAGE_YCBCR_CONVERSION_CHROMA_RECONSTRUCTION_EXPLICIT_FORCEABLE_BIT|VK_FORMAT_FEATURE_DISJOINT_BIT|VK_FORMAT_FEATURE_COSITED_CHROMA_SAMPLES_BIT|VK_FORMAT_FEATURE_SAMPLED_IMAGE_FILTER_MINMAX_BIT|VK_FORMAT_FEATURE_SAMPLED_IMAGE_FILTER_CUBIC_BIT_EXT|VK_FORMAT_FEATURE_FRAGMENT_SHADING_RATE_ATTACHMENT_BIT_KHR;
const VkSampleCountFlags AllVkSampleCountFlagBits = VK_SAMPLE_COUNT_1_BIT|VK_SAMPLE_COUNT_2_BIT|VK_SAMPLE_COUNT_4_BIT|VK_SAMPLE_COUNT_8_BIT|VK_SAMPLE_COUNT_16_BIT|VK_SAMPLE_COUNT_32_BIT|VK_SAMPLE_COUNT_64_BIT;
const VkQueueFlags AllVkQueueFlagBits = VK_QUEUE_GRAPHICS_BIT|VK_QUEUE_COMPUTE_BIT|VK_QUEUE_TRANSFER_BIT|VK_QUEUE_PROTECTED_BIT;
const VkExternalFenceHandleTypeFlags AllVkExternalFenceHandleTypeFlagBits = VK_EXTERNAL_FENCE_HANDLE_TYPE_OPAQUE_FD_BIT|VK_EXTERNAL_FENCE_HANDLE_TYPE_OPAQUE_WIN32_BIT|VK_EXTERNAL_FENCE_HANDLE_TYPE_OPAQUE_WIN32_KMT_BIT|VK_EXTERNAL_FENCE_HANDLE_TYPE_SYNC_FD_BIT|VK_EXTERNAL_FENCE_HANDLE_TYPE_SCI_SYNC_OBJ_BIT_NV|VK_EXTERNAL_FENCE_HANDLE_TYPE_SCI_SYNC_FENCE_BIT_NV;
const VkExternalFenceFeatureFlags AllVkExternalFenceFeatureFlagBits = VK_EXTERNAL_FENCE_FEATURE_EXPORTABLE_BIT|VK_EXTERNAL_FENCE_FEATURE_IMPORTABLE_BIT;
const VkExternalSemaphoreHandleTypeFlags AllVkExternalSemaphoreHandleTypeFlagBits = VK_EXTERNAL_SEMAPHORE_HANDLE_TYPE_OPAQUE_FD_BIT|VK_EXTERNAL_SEMAPHORE_HANDLE_TYPE_OPAQUE_WIN32_BIT|VK_EXTERNAL_SEMAPHORE_HANDLE_TYPE_OPAQUE_WIN32_KMT_BIT|VK_EXTERNAL_SEMAPHORE_HANDLE_TYPE_D3D12_FENCE_BIT|VK_EXTERNAL_SEMAPHORE_HANDLE_TYPE_SYNC_FD_BIT|VK_EXTERNAL_SEMAPHORE_HANDLE_TYPE_SCI_SYNC_OBJ_BIT_NV;
const VkExternalSemaphoreFeatureFlags AllVkExternalSemaphoreFeatureFlagBits = VK_EXTERNAL_SEMAPHORE_FEATURE_EXPORTABLE_BIT|VK_EXTERNAL_SEMAPHORE_FEATURE_IMPORTABLE_BIT;
const VkSurfaceTransformFlagsKHR AllVkSurfaceTransformFlagBitsKHR = VK_SURFACE_TRANSFORM_IDENTITY_BIT_KHR|VK_SURFACE_TRANSFORM_ROTATE_90_BIT_KHR|VK_SURFACE_TRANSFORM_ROTATE_180_BIT_KHR|VK_SURFACE_TRANSFORM_ROTATE_270_BIT_KHR|VK_SURFACE_TRANSFORM_HORIZONTAL_MIRROR_BIT_KHR|VK_SURFACE_TRANSFORM_HORIZONTAL_MIRROR_ROTATE_90_BIT_KHR|VK_SURFACE_TRANSFORM_HORIZONTAL_MIRROR_ROTATE_180_BIT_KHR|VK_SURFACE_TRANSFORM_HORIZONTAL_MIRROR_ROTATE_270_BIT_KHR|VK_SURFACE_TRANSFORM_INHERIT_BIT_KHR;
const VkCompositeAlphaFlagsKHR AllVkCompositeAlphaFlagBitsKHR = VK_COMPOSITE_ALPHA_OPAQUE_BIT_KHR|VK_COMPOSITE_ALPHA_PRE_MULTIPLIED_BIT_KHR|VK_COMPOSITE_ALPHA_POST_MULTIPLIED_BIT_KHR|VK_COMPOSITE_ALPHA_INHERIT_BIT_KHR;
const VkImageUsageFlags AllVkImageUsageFlagBits = VK_IMAGE_USAGE_TRANSFER_SRC_BIT|VK_IMAGE_USAGE_TRANSFER_DST_BIT|VK_IMAGE_USAGE_SAMPLED_BIT|VK_IMAGE_USAGE_STORAGE_BIT|VK_IMAGE_USAGE_COLOR_ATTACHMENT_BIT|VK_IMAGE_USAGE_DEPTH_STENCIL_ATTACHMENT_BIT|VK_IMAGE_USAGE_TRANSIENT_ATTACHMENT_BIT|VK_IMAGE_USAGE_INPUT_ATTACHMENT_BIT|VK_IMAGE_USAGE_HOST_TRANSFER_BIT|VK_IMAGE_USAGE_FRAGMENT_SHADING_RATE_ATTACHMENT_BIT_KHR;
const VkDeviceGroupPresentModeFlagsKHR AllVkDeviceGroupPresentModeFlagBitsKHR = VK_DEVICE_GROUP_PRESENT_MODE_LOCAL_BIT_KHR|VK_DEVICE_GROUP_PRESENT_MODE_REMOTE_BIT_KHR|VK_DEVICE_GROUP_PRESENT_MODE_SUM_BIT_KHR|VK_DEVICE_GROUP_PRESENT_MODE_LOCAL_MULTI_DEVICE_BIT_KHR;
const VkDisplayPlaneAlphaFlagsKHR AllVkDisplayPlaneAlphaFlagBitsKHR = VK_DISPLAY_PLANE_ALPHA_OPAQUE_BIT_KHR|VK_DISPLAY_PLANE_ALPHA_GLOBAL_BIT_KHR|VK_DISPLAY_PLANE_ALPHA_PER_PIXEL_BIT_KHR|VK_DISPLAY_PLANE_ALPHA_PER_PIXEL_PREMULTIPLIED_BIT_KHR;
const VkPerformanceCounterDescriptionFlagsKHR AllVkPerformanceCounterDescriptionFlagBitsKHR = VK_PERFORMANCE_COUNTER_DESCRIPTION_PERFORMANCE_IMPACTING_BIT_KHR|VK_PERFORMANCE_COUNTER_DESCRIPTION_CONCURRENTLY_IMPACTED_BIT_KHR;
const VkSurfaceCounterFlagsEXT AllVkSurfaceCounterFlagBitsEXT = VK_SURFACE_COUNTER_VBLANK_BIT_EXT;
const VkShaderStageFlags AllVkShaderStageFlagBits = VK_SHADER_STAGE_VERTEX_BIT|VK_SHADER_STAGE_TESSELLATION_CONTROL_BIT|VK_SHADER_STAGE_TESSELLATION_EVALUATION_BIT|VK_SHADER_STAGE_GEOMETRY_BIT|VK_SHADER_STAGE_FRAGMENT_BIT|VK_SHADER_STAGE_COMPUTE_BIT|VK_SHADER_STAGE_ALL_GRAPHICS|VK_SHADER_STAGE_ALL;
const VkSubgroupFeatureFlags AllVkSubgroupFeatureFlagBits = VK_SUBGROUP_FEATURE_BASIC_BIT|VK_SUBGROUP_FEATURE_VOTE_BIT|VK_SUBGROUP_FEATURE_ARITHMETIC_BIT|VK_SUBGROUP_FEATURE_BALLOT_BIT|VK_SUBGROUP_FEATURE_SHUFFLE_BIT|VK_SUBGROUP_FEATURE_SHUFFLE_RELATIVE_BIT|VK_SUBGROUP_FEATURE_CLUSTERED_BIT|VK_SUBGROUP_FEATURE_QUAD_BIT|VK_SUBGROUP_FEATURE_ROTATE_BIT|VK_SUBGROUP_FEATURE_ROTATE_CLUSTERED_BIT;
const VkResolveModeFlags AllVkResolveModeFlagBits = VK_RESOLVE_MODE_NONE|VK_RESOLVE_MODE_SAMPLE_ZERO_BIT|VK_RESOLVE_MODE_AVERAGE_BIT|VK_RESOLVE_MODE_MIN_BIT|VK_RESOLVE_MODE_MAX_BIT;
const VkFormatFeatureFlags2 AllVkFormatFeatureFlagBits2 = VK_FORMAT_FEATURE_2_SAMPLED_IMAGE_BIT|VK_FORMAT_FEATURE_2_STORAGE_IMAGE_BIT|VK_FORMAT_FEATURE_2_STORAGE_IMAGE_ATOMIC_BIT|VK_FORMAT_FEATURE_2_UNIFORM_TEXEL_BUFFER_BIT|VK_FORMAT_FEATURE_2_STORAGE_TEXEL_BUFFER_BIT|VK_FORMAT_FEATURE_2_STORAGE_TEXEL_BUFFER_ATOMIC_BIT|VK_FORMAT_FEATURE_2_VERTEX_BUFFER_BIT|VK_FORMAT_FEATURE_2_COLOR_ATTACHMENT_BIT|VK_FORMAT_FEATURE_2_COLOR_ATTACHMENT_BLEND_BIT|VK_FORMAT_FEATURE_2_DEPTH_STENCIL_ATTACHMENT_BIT|VK_FORMAT_FEATURE_2_BLIT_SRC_BIT|VK_FORMAT_FEATURE_2_BLIT_DST_BIT|VK_FORMAT_FEATURE_2_SAMPLED_IMAGE_FILTER_LINEAR_BIT|VK_FORMAT_FEATURE_2_TRANSFER_SRC_BIT|VK_FORMAT_FEATURE_2_TRANSFER_DST_BIT|VK_FORMAT_FEATURE_2_SAMPLED_IMAGE_FILTER_MINMAX_BIT|VK_FORMAT_FEATURE_2_MIDPOINT_CHROMA_SAMPLES_BIT|VK_FORMAT_FEATURE_2_SAMPLED_IMAGE_YCBCR_CONVERSION_LINEAR_FILTER_BIT|VK_FORMAT_FEATURE_2_SAMPLED_IMAGE_YCBCR_CONVERSION_SEPARATE_RECONSTRUCTION_FILTER_BIT|VK_FORMAT_FEATURE_2_SAMPLED_IMAGE_YCBCR_CONVERSION_CHROMA_RECONSTRUCTION_EXPLICIT_BIT|VK_FORMAT_FEATURE_2_SAMPLED_IMAGE_YCBCR_CONVERSION_CHROMA_RECONSTRUCTION_EXPLICIT_FORCEABLE_BIT|VK_FORMAT_FEATURE_2_DISJOINT_BIT|VK_FORMAT_FEATURE_2_COSITED_CHROMA_SAMPLES_BIT|VK_FORMAT_FEATURE_2_STORAGE_READ_WITHOUT_FORMAT_BIT|VK_FORMAT_FEATURE_2_STORAGE_WRITE_WITHOUT_FORMAT_BIT|VK_FORMAT_FEATURE_2_SAMPLED_IMAGE_DEPTH_COMPARISON_BIT|VK_FORMAT_FEATURE_2_SAMPLED_IMAGE_FILTER_CUBIC_BIT|VK_FORMAT_FEATURE_2_HOST_IMAGE_TRANSFER_BIT;
const VkMemoryPropertyFlags AllVkMemoryPropertyFlagBits = VK_MEMORY_PROPERTY_DEVICE_LOCAL_BIT|VK_MEMORY_PROPERTY_HOST_VISIBLE_BIT|VK_MEMORY_PROPERTY_HOST_COHERENT_BIT|VK_MEMORY_PROPERTY_HOST_CACHED_BIT|VK_MEMORY_PROPERTY_LAZILY_ALLOCATED_BIT|VK_MEMORY_PROPERTY_PROTECTED_BIT;
const VkMemoryHeapFlags AllVkMemoryHeapFlagBits = VK_MEMORY_HEAP_DEVICE_LOCAL_BIT|VK_MEMORY_HEAP_MULTI_INSTANCE_BIT|VK_MEMORY_HEAP_SEU_SAFE_BIT;
const VkExternalMemoryFeatureFlags AllVkExternalMemoryFeatureFlagBits = VK_EXTERNAL_MEMORY_FEATURE_DEDICATED_ONLY_BIT|VK_EXTERNAL_MEMORY_FEATURE_EXPORTABLE_BIT|VK_EXTERNAL_MEMORY_FEATURE_IMPORTABLE_BIT;
const VkExternalMemoryHandleTypeFlags AllVkExternalMemoryHandleTypeFlagBits = VK_EXTERNAL_MEMORY_HANDLE_TYPE_OPAQUE_FD_BIT|VK_EXTERNAL_MEMORY_HANDLE_TYPE_OPAQUE_WIN32_BIT|VK_EXTERNAL_MEMORY_HANDLE_TYPE_OPAQUE_WIN32_KMT_BIT|VK_EXTERNAL_MEMORY_HANDLE_TYPE_D3D11_TEXTURE_BIT|VK_EXTERNAL_MEMORY_HANDLE_TYPE_D3D11_TEXTURE_KMT_BIT|VK_EXTERNAL_MEMORY_HANDLE_TYPE_D3D12_HEAP_BIT|VK_EXTERNAL_MEMORY_HANDLE_TYPE_D3D12_RESOURCE_BIT|VK_EXTERNAL_MEMORY_HANDLE_TYPE_DMA_BUF_BIT_EXT|VK_EXTERNAL_MEMORY_HANDLE_TYPE_HOST_ALLOCATION_BIT_EXT|VK_EXTERNAL_MEMORY_HANDLE_TYPE_HOST_MAPPED_FOREIGN_MEMORY_BIT_EXT|VK_EXTERNAL_MEMORY_HANDLE_TYPE_SCI_BUF_BIT_NV|VK_EXTERNAL_MEMORY_HANDLE_TYPE_SCREEN_BUFFER_BIT_QNX;
// clang-format on

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
void ConvertOutStructToVulkanSC<VkMemoryDedicatedRequirements>(VkMemoryDedicatedRequirements* p) {}

template <>
void ConvertOutStructToVulkanSC<VkPhysicalDeviceProtectedMemoryFeatures>(VkPhysicalDeviceProtectedMemoryFeatures* p) {}

template <>
void ConvertOutStructToVulkanSC<VkPhysicalDeviceProtectedMemoryProperties>(VkPhysicalDeviceProtectedMemoryProperties* p) {}

template <>
void ConvertOutStructToVulkanSC<VkExternalImageFormatProperties>(VkExternalImageFormatProperties* p) {
    ConvertOutStructToVulkanSC<VkExternalMemoryProperties>(&p->externalMemoryProperties);
}

template <>
void ConvertOutStructToVulkanSC<VkPhysicalDeviceIDProperties>(VkPhysicalDeviceIDProperties* p) {}

template <>
void ConvertOutStructToVulkanSC<VkPhysicalDeviceSubgroupProperties>(VkPhysicalDeviceSubgroupProperties* p) {
    p->supportedStages = p->supportedStages & AllVkShaderStageFlagBits;
    p->supportedOperations = p->supportedOperations & AllVkSubgroupFeatureFlagBits;
}

template <>
void ConvertOutStructToVulkanSC<VkPhysicalDevice16BitStorageFeatures>(VkPhysicalDevice16BitStorageFeatures* p) {}

template <>
void ConvertOutStructToVulkanSC<VkPhysicalDeviceVariablePointersFeatures>(VkPhysicalDeviceVariablePointersFeatures* p) {}

template <>
void ConvertOutStructToVulkanSC<VkPhysicalDeviceMaintenance3Properties>(VkPhysicalDeviceMaintenance3Properties* p) {}

template <>
void ConvertOutStructToVulkanSC<VkPhysicalDeviceSamplerYcbcrConversionFeatures>(VkPhysicalDeviceSamplerYcbcrConversionFeatures* p) {
}

template <>
void ConvertOutStructToVulkanSC<VkSamplerYcbcrConversionImageFormatProperties>(VkSamplerYcbcrConversionImageFormatProperties* p) {}

template <>
void ConvertOutStructToVulkanSC<VkPhysicalDevicePointClippingProperties>(VkPhysicalDevicePointClippingProperties* p) {}

template <>
void ConvertOutStructToVulkanSC<VkPhysicalDeviceMultiviewFeatures>(VkPhysicalDeviceMultiviewFeatures* p) {}

template <>
void ConvertOutStructToVulkanSC<VkPhysicalDeviceMultiviewProperties>(VkPhysicalDeviceMultiviewProperties* p) {}

template <>
void ConvertOutStructToVulkanSC<VkPhysicalDeviceShaderDrawParametersFeatures>(VkPhysicalDeviceShaderDrawParametersFeatures* p) {}

template <>
void ConvertOutStructToVulkanSC<VkPhysicalDeviceDriverProperties>(VkPhysicalDeviceDriverProperties* p) {
    ConvertOutStructToVulkanSC<VkConformanceVersion>(&p->conformanceVersion);
}

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
void ConvertOutStructToVulkanSC<VkPhysicalDeviceVulkanMemoryModelFeatures>(VkPhysicalDeviceVulkanMemoryModelFeatures* p) {}

template <>
void ConvertOutStructToVulkanSC<VkPhysicalDeviceHostQueryResetFeatures>(VkPhysicalDeviceHostQueryResetFeatures* p) {}

template <>
void ConvertOutStructToVulkanSC<VkPhysicalDeviceTimelineSemaphoreFeatures>(VkPhysicalDeviceTimelineSemaphoreFeatures* p) {}

template <>
void ConvertOutStructToVulkanSC<VkPhysicalDeviceTimelineSemaphoreProperties>(VkPhysicalDeviceTimelineSemaphoreProperties* p) {}

template <>
void ConvertOutStructToVulkanSC<VkPhysicalDeviceBufferDeviceAddressFeatures>(VkPhysicalDeviceBufferDeviceAddressFeatures* p) {}

template <>
void ConvertOutStructToVulkanSC<VkPhysicalDevice8BitStorageFeatures>(VkPhysicalDevice8BitStorageFeatures* p) {}

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
void ConvertOutStructToVulkanSC<VkPhysicalDeviceScalarBlockLayoutFeatures>(VkPhysicalDeviceScalarBlockLayoutFeatures* p) {}

template <>
void ConvertOutStructToVulkanSC<VkPhysicalDeviceSamplerFilterMinmaxProperties>(VkPhysicalDeviceSamplerFilterMinmaxProperties* p) {}

template <>
void ConvertOutStructToVulkanSC<VkPhysicalDeviceUniformBufferStandardLayoutFeatures>(
    VkPhysicalDeviceUniformBufferStandardLayoutFeatures* p) {}

template <>
void ConvertOutStructToVulkanSC<VkPhysicalDeviceShaderSubgroupExtendedTypesFeatures>(
    VkPhysicalDeviceShaderSubgroupExtendedTypesFeatures* p) {}

template <>
void ConvertOutStructToVulkanSC<VkPhysicalDeviceDepthStencilResolveProperties>(VkPhysicalDeviceDepthStencilResolveProperties* p) {
    p->supportedDepthResolveModes = p->supportedDepthResolveModes & AllVkResolveModeFlagBits;
    p->supportedStencilResolveModes = p->supportedStencilResolveModes & AllVkResolveModeFlagBits;
}

template <>
void ConvertOutStructToVulkanSC<VkPhysicalDeviceImagelessFramebufferFeatures>(VkPhysicalDeviceImagelessFramebufferFeatures* p) {}

template <>
void ConvertOutStructToVulkanSC<VkPhysicalDeviceSeparateDepthStencilLayoutsFeatures>(
    VkPhysicalDeviceSeparateDepthStencilLayoutsFeatures* p) {}

template <>
void ConvertOutStructToVulkanSC<VkPhysicalDeviceVulkan13Features>(VkPhysicalDeviceVulkan13Features* p) {}

template <>
void ConvertOutStructToVulkanSC<VkPhysicalDeviceVulkan13Properties>(VkPhysicalDeviceVulkan13Properties* p) {
    p->requiredSubgroupSizeStages = p->requiredSubgroupSizeStages & AllVkShaderStageFlagBits;
}

template <>
void ConvertOutStructToVulkanSC<VkPhysicalDevicePrivateDataFeatures>(VkPhysicalDevicePrivateDataFeatures* p) {}

template <>
void ConvertOutStructToVulkanSC<VkPhysicalDeviceSynchronization2Features>(VkPhysicalDeviceSynchronization2Features* p) {}

template <>
void ConvertOutStructToVulkanSC<VkPhysicalDeviceTextureCompressionASTCHDRFeatures>(
    VkPhysicalDeviceTextureCompressionASTCHDRFeatures* p) {}

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
void ConvertOutStructToVulkanSC<VkPhysicalDeviceShaderTerminateInvocationFeatures>(
    VkPhysicalDeviceShaderTerminateInvocationFeatures* p) {}

template <>
void ConvertOutStructToVulkanSC<VkPhysicalDeviceShaderDemoteToHelperInvocationFeatures>(
    VkPhysicalDeviceShaderDemoteToHelperInvocationFeatures* p) {}

template <>
void ConvertOutStructToVulkanSC<VkPhysicalDevicePipelineCreationCacheControlFeatures>(
    VkPhysicalDevicePipelineCreationCacheControlFeatures* p) {}

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
void ConvertOutStructToVulkanSC<VkPhysicalDeviceShaderIntegerDotProductFeatures>(
    VkPhysicalDeviceShaderIntegerDotProductFeatures* p) {}

template <>
void ConvertOutStructToVulkanSC<VkPhysicalDeviceShaderIntegerDotProductProperties>(
    VkPhysicalDeviceShaderIntegerDotProductProperties* p) {}

template <>
void ConvertOutStructToVulkanSC<VkPhysicalDeviceTexelBufferAlignmentProperties>(VkPhysicalDeviceTexelBufferAlignmentProperties* p) {
}

template <>
void ConvertOutStructToVulkanSC<VkPhysicalDeviceDynamicRenderingFeatures>(VkPhysicalDeviceDynamicRenderingFeatures* p) {}

template <>
void ConvertOutStructToVulkanSC<VkPhysicalDeviceVulkan14Features>(VkPhysicalDeviceVulkan14Features* p) {}

template <>
void ConvertOutStructToVulkanSC<VkPhysicalDeviceVulkan14Properties>(VkPhysicalDeviceVulkan14Properties* p) {}

template <>
void ConvertOutStructToVulkanSC<VkPhysicalDeviceGlobalPriorityQueryFeatures>(VkPhysicalDeviceGlobalPriorityQueryFeatures* p) {}

template <>
void ConvertOutStructToVulkanSC<VkQueueFamilyGlobalPriorityProperties>(VkQueueFamilyGlobalPriorityProperties* p) {}

template <>
void ConvertOutStructToVulkanSC<VkPhysicalDeviceIndexTypeUint8Features>(VkPhysicalDeviceIndexTypeUint8Features* p) {}

template <>
void ConvertOutStructToVulkanSC<VkPhysicalDeviceMaintenance5Features>(VkPhysicalDeviceMaintenance5Features* p) {}

template <>
void ConvertOutStructToVulkanSC<VkPhysicalDeviceMaintenance5Properties>(VkPhysicalDeviceMaintenance5Properties* p) {}

template <>
void ConvertOutStructToVulkanSC<VkPhysicalDeviceMaintenance6Features>(VkPhysicalDeviceMaintenance6Features* p) {}

template <>
void ConvertOutStructToVulkanSC<VkPhysicalDeviceMaintenance6Properties>(VkPhysicalDeviceMaintenance6Properties* p) {}

template <>
void ConvertOutStructToVulkanSC<VkPhysicalDeviceHostImageCopyFeatures>(VkPhysicalDeviceHostImageCopyFeatures* p) {}

template <>
void ConvertOutStructToVulkanSC<VkPhysicalDeviceHostImageCopyProperties>(VkPhysicalDeviceHostImageCopyProperties* p) {}

template <>
void ConvertOutStructToVulkanSC<VkHostImageCopyDevicePerformanceQuery>(VkHostImageCopyDevicePerformanceQuery* p) {}

template <>
void ConvertOutStructToVulkanSC<VkPhysicalDeviceShaderSubgroupRotateFeatures>(VkPhysicalDeviceShaderSubgroupRotateFeatures* p) {}

template <>
void ConvertOutStructToVulkanSC<VkPhysicalDeviceShaderFloatControls2Features>(VkPhysicalDeviceShaderFloatControls2Features* p) {}

template <>
void ConvertOutStructToVulkanSC<VkPhysicalDeviceShaderExpectAssumeFeatures>(VkPhysicalDeviceShaderExpectAssumeFeatures* p) {}

template <>
void ConvertOutStructToVulkanSC<VkPhysicalDevicePushDescriptorProperties>(VkPhysicalDevicePushDescriptorProperties* p) {}

template <>
void ConvertOutStructToVulkanSC<VkPhysicalDevicePipelineProtectedAccessFeatures>(
    VkPhysicalDevicePipelineProtectedAccessFeatures* p) {}

template <>
void ConvertOutStructToVulkanSC<VkPhysicalDevicePipelineRobustnessFeatures>(VkPhysicalDevicePipelineRobustnessFeatures* p) {}

template <>
void ConvertOutStructToVulkanSC<VkPhysicalDevicePipelineRobustnessProperties>(VkPhysicalDevicePipelineRobustnessProperties* p) {}

template <>
void ConvertOutStructToVulkanSC<VkPhysicalDeviceLineRasterizationFeatures>(VkPhysicalDeviceLineRasterizationFeatures* p) {}

template <>
void ConvertOutStructToVulkanSC<VkPhysicalDeviceLineRasterizationProperties>(VkPhysicalDeviceLineRasterizationProperties* p) {}

template <>
void ConvertOutStructToVulkanSC<VkPhysicalDeviceVertexAttributeDivisorProperties>(
    VkPhysicalDeviceVertexAttributeDivisorProperties* p) {}

template <>
void ConvertOutStructToVulkanSC<VkPhysicalDeviceVertexAttributeDivisorFeatures>(VkPhysicalDeviceVertexAttributeDivisorFeatures* p) {
}

template <>
void ConvertOutStructToVulkanSC<VkPhysicalDeviceDynamicRenderingLocalReadFeatures>(
    VkPhysicalDeviceDynamicRenderingLocalReadFeatures* p) {}

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
    if (p->pDrmFormatModifierProperties != nullptr) {
        for (uint32_t i = 0; i < p->drmFormatModifierCount; ++i) {
            ConvertOutStructToVulkanSC<VkDrmFormatModifierPropertiesEXT>(&p->pDrmFormatModifierProperties[i]);
        }
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
void ConvertOutStructToVulkanSC<VkPhysicalDeviceRobustness2FeaturesKHR>(VkPhysicalDeviceRobustness2FeaturesKHR* p) {}

template <>
void ConvertOutStructToVulkanSC<VkPhysicalDeviceRobustness2PropertiesKHR>(VkPhysicalDeviceRobustness2PropertiesKHR* p) {}

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

            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PROTECTED_MEMORY_FEATURES:
                ConvertOutStructToVulkanSC(reinterpret_cast<VkPhysicalDeviceProtectedMemoryFeatures*>(base));
                break;

            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_16BIT_STORAGE_FEATURES:
                ConvertOutStructToVulkanSC(reinterpret_cast<VkPhysicalDevice16BitStorageFeatures*>(base));
                break;

            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VARIABLE_POINTERS_FEATURES:
                ConvertOutStructToVulkanSC(reinterpret_cast<VkPhysicalDeviceVariablePointersFeatures*>(base));
                break;

            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SAMPLER_YCBCR_CONVERSION_FEATURES:
                ConvertOutStructToVulkanSC(reinterpret_cast<VkPhysicalDeviceSamplerYcbcrConversionFeatures*>(base));
                break;

            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MULTIVIEW_FEATURES:
                ConvertOutStructToVulkanSC(reinterpret_cast<VkPhysicalDeviceMultiviewFeatures*>(base));
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

            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VULKAN_MEMORY_MODEL_FEATURES:
                ConvertOutStructToVulkanSC(reinterpret_cast<VkPhysicalDeviceVulkanMemoryModelFeatures*>(base));
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

            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_UNIFORM_BUFFER_STANDARD_LAYOUT_FEATURES:
                ConvertOutStructToVulkanSC(reinterpret_cast<VkPhysicalDeviceUniformBufferStandardLayoutFeatures*>(base));
                break;

            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_SUBGROUP_EXTENDED_TYPES_FEATURES:
                ConvertOutStructToVulkanSC(reinterpret_cast<VkPhysicalDeviceShaderSubgroupExtendedTypesFeatures*>(base));
                break;

            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGELESS_FRAMEBUFFER_FEATURES:
                ConvertOutStructToVulkanSC(reinterpret_cast<VkPhysicalDeviceImagelessFramebufferFeatures*>(base));
                break;

            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SEPARATE_DEPTH_STENCIL_LAYOUTS_FEATURES:
                ConvertOutStructToVulkanSC(reinterpret_cast<VkPhysicalDeviceSeparateDepthStencilLayoutsFeatures*>(base));
                break;

            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VULKAN_1_3_FEATURES:
                ConvertOutStructToVulkanSC(reinterpret_cast<VkPhysicalDeviceVulkan13Features*>(base));
                break;

            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PRIVATE_DATA_FEATURES:
                ConvertOutStructToVulkanSC(reinterpret_cast<VkPhysicalDevicePrivateDataFeatures*>(base));
                break;

            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SYNCHRONIZATION_2_FEATURES:
                ConvertOutStructToVulkanSC(reinterpret_cast<VkPhysicalDeviceSynchronization2Features*>(base));
                break;

            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TEXTURE_COMPRESSION_ASTC_HDR_FEATURES:
                ConvertOutStructToVulkanSC(reinterpret_cast<VkPhysicalDeviceTextureCompressionASTCHDRFeatures*>(base));
                break;

            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MAINTENANCE_4_FEATURES:
                ConvertOutStructToVulkanSC(reinterpret_cast<VkPhysicalDeviceMaintenance4Features*>(base));
                break;

            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_TERMINATE_INVOCATION_FEATURES:
                ConvertOutStructToVulkanSC(reinterpret_cast<VkPhysicalDeviceShaderTerminateInvocationFeatures*>(base));
                break;

            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_DEMOTE_TO_HELPER_INVOCATION_FEATURES:
                ConvertOutStructToVulkanSC(reinterpret_cast<VkPhysicalDeviceShaderDemoteToHelperInvocationFeatures*>(base));
                break;

            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PIPELINE_CREATION_CACHE_CONTROL_FEATURES:
                ConvertOutStructToVulkanSC(reinterpret_cast<VkPhysicalDevicePipelineCreationCacheControlFeatures*>(base));
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

            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_INTEGER_DOT_PRODUCT_FEATURES:
                ConvertOutStructToVulkanSC(reinterpret_cast<VkPhysicalDeviceShaderIntegerDotProductFeatures*>(base));
                break;

            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DYNAMIC_RENDERING_FEATURES:
                ConvertOutStructToVulkanSC(reinterpret_cast<VkPhysicalDeviceDynamicRenderingFeatures*>(base));
                break;

            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VULKAN_1_4_FEATURES:
                ConvertOutStructToVulkanSC(reinterpret_cast<VkPhysicalDeviceVulkan14Features*>(base));
                break;

            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_GLOBAL_PRIORITY_QUERY_FEATURES:
                ConvertOutStructToVulkanSC(reinterpret_cast<VkPhysicalDeviceGlobalPriorityQueryFeatures*>(base));
                break;

            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_INDEX_TYPE_UINT8_FEATURES:
                ConvertOutStructToVulkanSC(reinterpret_cast<VkPhysicalDeviceIndexTypeUint8Features*>(base));
                break;

            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MAINTENANCE_5_FEATURES:
                ConvertOutStructToVulkanSC(reinterpret_cast<VkPhysicalDeviceMaintenance5Features*>(base));
                break;

            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MAINTENANCE_6_FEATURES:
                ConvertOutStructToVulkanSC(reinterpret_cast<VkPhysicalDeviceMaintenance6Features*>(base));
                break;

            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_HOST_IMAGE_COPY_FEATURES:
                ConvertOutStructToVulkanSC(reinterpret_cast<VkPhysicalDeviceHostImageCopyFeatures*>(base));
                break;

            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_SUBGROUP_ROTATE_FEATURES:
                ConvertOutStructToVulkanSC(reinterpret_cast<VkPhysicalDeviceShaderSubgroupRotateFeatures*>(base));
                break;

            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_FLOAT_CONTROLS_2_FEATURES:
                ConvertOutStructToVulkanSC(reinterpret_cast<VkPhysicalDeviceShaderFloatControls2Features*>(base));
                break;

            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_EXPECT_ASSUME_FEATURES:
                ConvertOutStructToVulkanSC(reinterpret_cast<VkPhysicalDeviceShaderExpectAssumeFeatures*>(base));
                break;

            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PIPELINE_PROTECTED_ACCESS_FEATURES:
                ConvertOutStructToVulkanSC(reinterpret_cast<VkPhysicalDevicePipelineProtectedAccessFeatures*>(base));
                break;

            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PIPELINE_ROBUSTNESS_FEATURES:
                ConvertOutStructToVulkanSC(reinterpret_cast<VkPhysicalDevicePipelineRobustnessFeatures*>(base));
                break;

            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_LINE_RASTERIZATION_FEATURES:
                ConvertOutStructToVulkanSC(reinterpret_cast<VkPhysicalDeviceLineRasterizationFeatures*>(base));
                break;

            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VERTEX_ATTRIBUTE_DIVISOR_FEATURES:
                ConvertOutStructToVulkanSC(reinterpret_cast<VkPhysicalDeviceVertexAttributeDivisorFeatures*>(base));
                break;

            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DYNAMIC_RENDERING_LOCAL_READ_FEATURES:
                ConvertOutStructToVulkanSC(reinterpret_cast<VkPhysicalDeviceDynamicRenderingLocalReadFeatures*>(base));
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

            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_SHADING_RATE_FEATURES_KHR:
                ConvertOutStructToVulkanSC(reinterpret_cast<VkPhysicalDeviceFragmentShadingRateFeaturesKHR*>(base));
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

            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ROBUSTNESS_2_FEATURES_KHR:
                ConvertOutStructToVulkanSC(reinterpret_cast<VkPhysicalDeviceRobustness2FeaturesKHR*>(base));
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

            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PROTECTED_MEMORY_PROPERTIES:
                ConvertOutStructToVulkanSC(reinterpret_cast<VkPhysicalDeviceProtectedMemoryProperties*>(base));
                break;

            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ID_PROPERTIES:
                ConvertOutStructToVulkanSC(reinterpret_cast<VkPhysicalDeviceIDProperties*>(base));
                break;

            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SUBGROUP_PROPERTIES:
                ConvertOutStructToVulkanSC(reinterpret_cast<VkPhysicalDeviceSubgroupProperties*>(base));
                break;

            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MAINTENANCE_3_PROPERTIES:
                ConvertOutStructToVulkanSC(reinterpret_cast<VkPhysicalDeviceMaintenance3Properties*>(base));
                break;

            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_POINT_CLIPPING_PROPERTIES:
                ConvertOutStructToVulkanSC(reinterpret_cast<VkPhysicalDevicePointClippingProperties*>(base));
                break;

            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MULTIVIEW_PROPERTIES:
                ConvertOutStructToVulkanSC(reinterpret_cast<VkPhysicalDeviceMultiviewProperties*>(base));
                break;

            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DRIVER_PROPERTIES:
                ConvertOutStructToVulkanSC(reinterpret_cast<VkPhysicalDeviceDriverProperties*>(base));
                break;

            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VULKAN_1_1_PROPERTIES:
                ConvertOutStructToVulkanSC(reinterpret_cast<VkPhysicalDeviceVulkan11Properties*>(base));
                break;

            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VULKAN_1_2_PROPERTIES:
                ConvertOutStructToVulkanSC(reinterpret_cast<VkPhysicalDeviceVulkan12Properties*>(base));
                break;

            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TIMELINE_SEMAPHORE_PROPERTIES:
                ConvertOutStructToVulkanSC(reinterpret_cast<VkPhysicalDeviceTimelineSemaphoreProperties*>(base));
                break;

            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FLOAT_CONTROLS_PROPERTIES:
                ConvertOutStructToVulkanSC(reinterpret_cast<VkPhysicalDeviceFloatControlsProperties*>(base));
                break;

            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DESCRIPTOR_INDEXING_PROPERTIES:
                ConvertOutStructToVulkanSC(reinterpret_cast<VkPhysicalDeviceDescriptorIndexingProperties*>(base));
                break;

            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SAMPLER_FILTER_MINMAX_PROPERTIES:
                ConvertOutStructToVulkanSC(reinterpret_cast<VkPhysicalDeviceSamplerFilterMinmaxProperties*>(base));
                break;

            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DEPTH_STENCIL_RESOLVE_PROPERTIES:
                ConvertOutStructToVulkanSC(reinterpret_cast<VkPhysicalDeviceDepthStencilResolveProperties*>(base));
                break;

            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VULKAN_1_3_PROPERTIES:
                ConvertOutStructToVulkanSC(reinterpret_cast<VkPhysicalDeviceVulkan13Properties*>(base));
                break;

            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MAINTENANCE_4_PROPERTIES:
                ConvertOutStructToVulkanSC(reinterpret_cast<VkPhysicalDeviceMaintenance4Properties*>(base));
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

            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VULKAN_1_4_PROPERTIES:
                ConvertOutStructToVulkanSC(reinterpret_cast<VkPhysicalDeviceVulkan14Properties*>(base));
                break;

            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MAINTENANCE_5_PROPERTIES:
                ConvertOutStructToVulkanSC(reinterpret_cast<VkPhysicalDeviceMaintenance5Properties*>(base));
                break;

            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MAINTENANCE_6_PROPERTIES:
                ConvertOutStructToVulkanSC(reinterpret_cast<VkPhysicalDeviceMaintenance6Properties*>(base));
                break;

            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_HOST_IMAGE_COPY_PROPERTIES:
                ConvertOutStructToVulkanSC(reinterpret_cast<VkPhysicalDeviceHostImageCopyProperties*>(base));
                break;

            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PUSH_DESCRIPTOR_PROPERTIES:
                ConvertOutStructToVulkanSC(reinterpret_cast<VkPhysicalDevicePushDescriptorProperties*>(base));
                break;

            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PIPELINE_ROBUSTNESS_PROPERTIES:
                ConvertOutStructToVulkanSC(reinterpret_cast<VkPhysicalDevicePipelineRobustnessProperties*>(base));
                break;

            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_LINE_RASTERIZATION_PROPERTIES:
                ConvertOutStructToVulkanSC(reinterpret_cast<VkPhysicalDeviceLineRasterizationProperties*>(base));
                break;

            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VERTEX_ATTRIBUTE_DIVISOR_PROPERTIES:
                ConvertOutStructToVulkanSC(reinterpret_cast<VkPhysicalDeviceVertexAttributeDivisorProperties*>(base));
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

            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ROBUSTNESS_2_PROPERTIES_KHR:
                ConvertOutStructToVulkanSC(reinterpret_cast<VkPhysicalDeviceRobustness2PropertiesKHR*>(base));
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

            case VK_STRUCTURE_TYPE_EXTERNAL_IMAGE_FORMAT_PROPERTIES:
                ConvertOutStructToVulkanSC(reinterpret_cast<VkExternalImageFormatProperties*>(base));
                break;

            case VK_STRUCTURE_TYPE_SAMPLER_YCBCR_CONVERSION_IMAGE_FORMAT_PROPERTIES:
                ConvertOutStructToVulkanSC(reinterpret_cast<VkSamplerYcbcrConversionImageFormatProperties*>(base));
                break;

            case VK_STRUCTURE_TYPE_HOST_IMAGE_COPY_DEVICE_PERFORMANCE_QUERY:
                ConvertOutStructToVulkanSC(reinterpret_cast<VkHostImageCopyDevicePerformanceQuery*>(base));
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

            case VK_STRUCTURE_TYPE_QUEUE_FAMILY_GLOBAL_PRIORITY_PROPERTIES:
                ConvertOutStructToVulkanSC(reinterpret_cast<VkQueueFamilyGlobalPriorityProperties*>(base));
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
