// *** THIS FILE IS GENERATED - DO NOT EDIT ***
// See pnext_chain_helper_generator.py for modifications

/*
 * Copyright (c) 2024-2025 The Khronos Group Inc.
 * Copyright (c) 2024-2025 RasterGrid Kft.
 *
 * SPDX-License-Identifier: Apache-2.0
 */
// NOLINTBEGIN

#pragma once

#include <vulkan/vulkan.h>
#include <tuple>

namespace vksc {

template <typename BASE>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize(VkStructureType type) {
    return {0, 0};
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkExtent2D>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkExtent3D>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkOffset2D>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkOffset3D>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkRect2D>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkBaseInStructure>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkBaseOutStructure>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkBufferMemoryBarrier>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkImageSubresourceRange>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkImageMemoryBarrier>(VkStructureType type) {
    switch (type) {
        case VK_STRUCTURE_TYPE_SAMPLE_LOCATIONS_INFO_EXT:
            return {alignof(VkSampleLocationsInfoEXT), sizeof(VkSampleLocationsInfoEXT)};

        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkMemoryBarrier>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkAllocationCallbacks>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkApplicationInfo>(VkStructureType type) {
    switch (type) {
        case VK_STRUCTURE_TYPE_APPLICATION_PARAMETERS_EXT:
            return {alignof(VkApplicationParametersEXT), sizeof(VkApplicationParametersEXT)};

        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkFormatProperties>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkImageFormatProperties>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkInstanceCreateInfo>(VkStructureType type) {
    switch (type) {
        case VK_STRUCTURE_TYPE_DEBUG_UTILS_MESSENGER_CREATE_INFO_EXT:
            return {alignof(VkDebugUtilsMessengerCreateInfoEXT), sizeof(VkDebugUtilsMessengerCreateInfoEXT)};
        case VK_STRUCTURE_TYPE_LAYER_SETTINGS_CREATE_INFO_EXT:
            return {alignof(VkLayerSettingsCreateInfoEXT), sizeof(VkLayerSettingsCreateInfoEXT)};
        case VK_STRUCTURE_TYPE_VALIDATION_FEATURES_EXT:
            return {alignof(VkValidationFeaturesEXT), sizeof(VkValidationFeaturesEXT)};

        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkMemoryHeap>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkMemoryType>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPhysicalDeviceFeatures>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPhysicalDeviceLimits>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPhysicalDeviceMemoryProperties>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPhysicalDeviceSparseProperties>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPhysicalDeviceProperties>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkQueueFamilyProperties>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkDeviceQueueCreateInfo>(VkStructureType type) {
    switch (type) {
        case VK_STRUCTURE_TYPE_DEVICE_QUEUE_GLOBAL_PRIORITY_CREATE_INFO:
            return {alignof(VkDeviceQueueGlobalPriorityCreateInfo), sizeof(VkDeviceQueueGlobalPriorityCreateInfo)};

        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkDeviceCreateInfo>(VkStructureType type) {
    switch (type) {
        case VK_STRUCTURE_TYPE_APPLICATION_PARAMETERS_EXT:
            return {alignof(VkApplicationParametersEXT), sizeof(VkApplicationParametersEXT)};
        case VK_STRUCTURE_TYPE_DEVICE_GROUP_DEVICE_CREATE_INFO:
            return {alignof(VkDeviceGroupDeviceCreateInfo), sizeof(VkDeviceGroupDeviceCreateInfo)};
        case VK_STRUCTURE_TYPE_DEVICE_OBJECT_RESERVATION_CREATE_INFO:
            return {alignof(VkDeviceObjectReservationCreateInfo), sizeof(VkDeviceObjectReservationCreateInfo)};
        case VK_STRUCTURE_TYPE_DEVICE_PRIVATE_DATA_CREATE_INFO:
            return {alignof(VkDevicePrivateDataCreateInfo), sizeof(VkDevicePrivateDataCreateInfo)};
#ifdef VK_USE_PLATFORM_SCI
        case VK_STRUCTURE_TYPE_DEVICE_SEMAPHORE_SCI_SYNC_POOL_RESERVATION_CREATE_INFO_NV:
            return {alignof(VkDeviceSemaphoreSciSyncPoolReservationCreateInfoNV),
                    sizeof(VkDeviceSemaphoreSciSyncPoolReservationCreateInfoNV)};
#endif  // VK_USE_PLATFORM_SCI
        case VK_STRUCTURE_TYPE_FAULT_CALLBACK_INFO:
            return {alignof(VkFaultCallbackInfo), sizeof(VkFaultCallbackInfo)};
        case VK_STRUCTURE_TYPE_PERFORMANCE_QUERY_RESERVATION_INFO_KHR:
            return {alignof(VkPerformanceQueryReservationInfoKHR), sizeof(VkPerformanceQueryReservationInfoKHR)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_16BIT_STORAGE_FEATURES:
            return {alignof(VkPhysicalDevice16BitStorageFeatures), sizeof(VkPhysicalDevice16BitStorageFeatures)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_4444_FORMATS_FEATURES_EXT:
            return {alignof(VkPhysicalDevice4444FormatsFeaturesEXT), sizeof(VkPhysicalDevice4444FormatsFeaturesEXT)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_8BIT_STORAGE_FEATURES:
            return {alignof(VkPhysicalDevice8BitStorageFeatures), sizeof(VkPhysicalDevice8BitStorageFeatures)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ASTC_DECODE_FEATURES_EXT:
            return {alignof(VkPhysicalDeviceASTCDecodeFeaturesEXT), sizeof(VkPhysicalDeviceASTCDecodeFeaturesEXT)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_BLEND_OPERATION_ADVANCED_FEATURES_EXT:
            return {alignof(VkPhysicalDeviceBlendOperationAdvancedFeaturesEXT),
                    sizeof(VkPhysicalDeviceBlendOperationAdvancedFeaturesEXT)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_BUFFER_DEVICE_ADDRESS_FEATURES:
            return {alignof(VkPhysicalDeviceBufferDeviceAddressFeatures), sizeof(VkPhysicalDeviceBufferDeviceAddressFeatures)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COLOR_WRITE_ENABLE_FEATURES_EXT:
            return {alignof(VkPhysicalDeviceColorWriteEnableFeaturesEXT), sizeof(VkPhysicalDeviceColorWriteEnableFeaturesEXT)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_CUSTOM_BORDER_COLOR_FEATURES_EXT:
            return {alignof(VkPhysicalDeviceCustomBorderColorFeaturesEXT), sizeof(VkPhysicalDeviceCustomBorderColorFeaturesEXT)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DEPTH_CLIP_ENABLE_FEATURES_EXT:
            return {alignof(VkPhysicalDeviceDepthClipEnableFeaturesEXT), sizeof(VkPhysicalDeviceDepthClipEnableFeaturesEXT)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DESCRIPTOR_INDEXING_FEATURES:
            return {alignof(VkPhysicalDeviceDescriptorIndexingFeatures), sizeof(VkPhysicalDeviceDescriptorIndexingFeatures)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DYNAMIC_RENDERING_FEATURES:
            return {alignof(VkPhysicalDeviceDynamicRenderingFeatures), sizeof(VkPhysicalDeviceDynamicRenderingFeatures)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DYNAMIC_RENDERING_LOCAL_READ_FEATURES:
            return {alignof(VkPhysicalDeviceDynamicRenderingLocalReadFeatures),
                    sizeof(VkPhysicalDeviceDynamicRenderingLocalReadFeatures)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTENDED_DYNAMIC_STATE_2_FEATURES_EXT:
            return {alignof(VkPhysicalDeviceExtendedDynamicState2FeaturesEXT),
                    sizeof(VkPhysicalDeviceExtendedDynamicState2FeaturesEXT)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTENDED_DYNAMIC_STATE_FEATURES_EXT:
            return {alignof(VkPhysicalDeviceExtendedDynamicStateFeaturesEXT),
                    sizeof(VkPhysicalDeviceExtendedDynamicStateFeaturesEXT)};
#ifdef VK_USE_PLATFORM_SCI
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTERNAL_MEMORY_SCI_BUF_FEATURES_NV:
            return {alignof(VkPhysicalDeviceExternalMemorySciBufFeaturesNV),
                    sizeof(VkPhysicalDeviceExternalMemorySciBufFeaturesNV)};
#endif  // VK_USE_PLATFORM_SCI
#ifdef VK_USE_PLATFORM_SCREEN_QNX
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTERNAL_MEMORY_SCREEN_BUFFER_FEATURES_QNX:
            return {alignof(VkPhysicalDeviceExternalMemoryScreenBufferFeaturesQNX),
                    sizeof(VkPhysicalDeviceExternalMemoryScreenBufferFeaturesQNX)};
#endif  // VK_USE_PLATFORM_SCREEN_QNX
#ifdef VK_USE_PLATFORM_SCI
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTERNAL_SCI_SYNC_2_FEATURES_NV:
            return {alignof(VkPhysicalDeviceExternalSciSync2FeaturesNV), sizeof(VkPhysicalDeviceExternalSciSync2FeaturesNV)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTERNAL_SCI_SYNC_FEATURES_NV:
            return {alignof(VkPhysicalDeviceExternalSciSyncFeaturesNV), sizeof(VkPhysicalDeviceExternalSciSyncFeaturesNV)};
#endif  // VK_USE_PLATFORM_SCI
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FEATURES_2:
            return {alignof(VkPhysicalDeviceFeatures2), sizeof(VkPhysicalDeviceFeatures2)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_SHADER_INTERLOCK_FEATURES_EXT:
            return {alignof(VkPhysicalDeviceFragmentShaderInterlockFeaturesEXT),
                    sizeof(VkPhysicalDeviceFragmentShaderInterlockFeaturesEXT)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_SHADING_RATE_FEATURES_KHR:
            return {alignof(VkPhysicalDeviceFragmentShadingRateFeaturesKHR),
                    sizeof(VkPhysicalDeviceFragmentShadingRateFeaturesKHR)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_GLOBAL_PRIORITY_QUERY_FEATURES:
            return {alignof(VkPhysicalDeviceGlobalPriorityQueryFeatures), sizeof(VkPhysicalDeviceGlobalPriorityQueryFeatures)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_HOST_IMAGE_COPY_FEATURES:
            return {alignof(VkPhysicalDeviceHostImageCopyFeatures), sizeof(VkPhysicalDeviceHostImageCopyFeatures)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_HOST_QUERY_RESET_FEATURES:
            return {alignof(VkPhysicalDeviceHostQueryResetFeatures), sizeof(VkPhysicalDeviceHostQueryResetFeatures)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_ROBUSTNESS_FEATURES:
            return {alignof(VkPhysicalDeviceImageRobustnessFeatures), sizeof(VkPhysicalDeviceImageRobustnessFeatures)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGELESS_FRAMEBUFFER_FEATURES:
            return {alignof(VkPhysicalDeviceImagelessFramebufferFeatures), sizeof(VkPhysicalDeviceImagelessFramebufferFeatures)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_INDEX_TYPE_UINT8_FEATURES:
            return {alignof(VkPhysicalDeviceIndexTypeUint8Features), sizeof(VkPhysicalDeviceIndexTypeUint8Features)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_INLINE_UNIFORM_BLOCK_FEATURES:
            return {alignof(VkPhysicalDeviceInlineUniformBlockFeatures), sizeof(VkPhysicalDeviceInlineUniformBlockFeatures)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_LINE_RASTERIZATION_FEATURES:
            return {alignof(VkPhysicalDeviceLineRasterizationFeatures), sizeof(VkPhysicalDeviceLineRasterizationFeatures)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MAINTENANCE_4_FEATURES:
            return {alignof(VkPhysicalDeviceMaintenance4Features), sizeof(VkPhysicalDeviceMaintenance4Features)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MAINTENANCE_5_FEATURES:
            return {alignof(VkPhysicalDeviceMaintenance5Features), sizeof(VkPhysicalDeviceMaintenance5Features)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MAINTENANCE_6_FEATURES:
            return {alignof(VkPhysicalDeviceMaintenance6Features), sizeof(VkPhysicalDeviceMaintenance6Features)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MULTIVIEW_FEATURES:
            return {alignof(VkPhysicalDeviceMultiviewFeatures), sizeof(VkPhysicalDeviceMultiviewFeatures)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PERFORMANCE_QUERY_FEATURES_KHR:
            return {alignof(VkPhysicalDevicePerformanceQueryFeaturesKHR), sizeof(VkPhysicalDevicePerformanceQueryFeaturesKHR)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PIPELINE_CREATION_CACHE_CONTROL_FEATURES:
            return {alignof(VkPhysicalDevicePipelineCreationCacheControlFeatures),
                    sizeof(VkPhysicalDevicePipelineCreationCacheControlFeatures)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PIPELINE_PROTECTED_ACCESS_FEATURES:
            return {alignof(VkPhysicalDevicePipelineProtectedAccessFeatures),
                    sizeof(VkPhysicalDevicePipelineProtectedAccessFeatures)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PIPELINE_ROBUSTNESS_FEATURES:
            return {alignof(VkPhysicalDevicePipelineRobustnessFeatures), sizeof(VkPhysicalDevicePipelineRobustnessFeatures)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PRIVATE_DATA_FEATURES:
            return {alignof(VkPhysicalDevicePrivateDataFeatures), sizeof(VkPhysicalDevicePrivateDataFeatures)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PROTECTED_MEMORY_FEATURES:
            return {alignof(VkPhysicalDeviceProtectedMemoryFeatures), sizeof(VkPhysicalDeviceProtectedMemoryFeatures)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ROBUSTNESS_2_FEATURES_KHR:
            return {alignof(VkPhysicalDeviceRobustness2FeaturesKHR), sizeof(VkPhysicalDeviceRobustness2FeaturesKHR)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SAMPLER_YCBCR_CONVERSION_FEATURES:
            return {alignof(VkPhysicalDeviceSamplerYcbcrConversionFeatures),
                    sizeof(VkPhysicalDeviceSamplerYcbcrConversionFeatures)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SCALAR_BLOCK_LAYOUT_FEATURES:
            return {alignof(VkPhysicalDeviceScalarBlockLayoutFeatures), sizeof(VkPhysicalDeviceScalarBlockLayoutFeatures)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SEPARATE_DEPTH_STENCIL_LAYOUTS_FEATURES:
            return {alignof(VkPhysicalDeviceSeparateDepthStencilLayoutsFeatures),
                    sizeof(VkPhysicalDeviceSeparateDepthStencilLayoutsFeatures)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_ATOMIC_FLOAT_FEATURES_EXT:
            return {alignof(VkPhysicalDeviceShaderAtomicFloatFeaturesEXT), sizeof(VkPhysicalDeviceShaderAtomicFloatFeaturesEXT)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_ATOMIC_INT64_FEATURES:
            return {alignof(VkPhysicalDeviceShaderAtomicInt64Features), sizeof(VkPhysicalDeviceShaderAtomicInt64Features)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_CLOCK_FEATURES_KHR:
            return {alignof(VkPhysicalDeviceShaderClockFeaturesKHR), sizeof(VkPhysicalDeviceShaderClockFeaturesKHR)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_DEMOTE_TO_HELPER_INVOCATION_FEATURES:
            return {alignof(VkPhysicalDeviceShaderDemoteToHelperInvocationFeatures),
                    sizeof(VkPhysicalDeviceShaderDemoteToHelperInvocationFeatures)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_DRAW_PARAMETERS_FEATURES:
            return {alignof(VkPhysicalDeviceShaderDrawParametersFeatures), sizeof(VkPhysicalDeviceShaderDrawParametersFeatures)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_EXPECT_ASSUME_FEATURES:
            return {alignof(VkPhysicalDeviceShaderExpectAssumeFeatures), sizeof(VkPhysicalDeviceShaderExpectAssumeFeatures)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_FLOAT16_INT8_FEATURES:
            return {alignof(VkPhysicalDeviceShaderFloat16Int8Features), sizeof(VkPhysicalDeviceShaderFloat16Int8Features)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_FLOAT_CONTROLS_2_FEATURES:
            return {alignof(VkPhysicalDeviceShaderFloatControls2Features), sizeof(VkPhysicalDeviceShaderFloatControls2Features)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_IMAGE_ATOMIC_INT64_FEATURES_EXT:
            return {alignof(VkPhysicalDeviceShaderImageAtomicInt64FeaturesEXT),
                    sizeof(VkPhysicalDeviceShaderImageAtomicInt64FeaturesEXT)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_INTEGER_DOT_PRODUCT_FEATURES:
            return {alignof(VkPhysicalDeviceShaderIntegerDotProductFeatures),
                    sizeof(VkPhysicalDeviceShaderIntegerDotProductFeatures)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_SUBGROUP_EXTENDED_TYPES_FEATURES:
            return {alignof(VkPhysicalDeviceShaderSubgroupExtendedTypesFeatures),
                    sizeof(VkPhysicalDeviceShaderSubgroupExtendedTypesFeatures)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_SUBGROUP_ROTATE_FEATURES:
            return {alignof(VkPhysicalDeviceShaderSubgroupRotateFeatures), sizeof(VkPhysicalDeviceShaderSubgroupRotateFeatures)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_TERMINATE_INVOCATION_FEATURES:
            return {alignof(VkPhysicalDeviceShaderTerminateInvocationFeatures),
                    sizeof(VkPhysicalDeviceShaderTerminateInvocationFeatures)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SUBGROUP_SIZE_CONTROL_FEATURES:
            return {alignof(VkPhysicalDeviceSubgroupSizeControlFeatures), sizeof(VkPhysicalDeviceSubgroupSizeControlFeatures)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SYNCHRONIZATION_2_FEATURES:
            return {alignof(VkPhysicalDeviceSynchronization2Features), sizeof(VkPhysicalDeviceSynchronization2Features)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TEXEL_BUFFER_ALIGNMENT_FEATURES_EXT:
            return {alignof(VkPhysicalDeviceTexelBufferAlignmentFeaturesEXT),
                    sizeof(VkPhysicalDeviceTexelBufferAlignmentFeaturesEXT)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TEXTURE_COMPRESSION_ASTC_HDR_FEATURES:
            return {alignof(VkPhysicalDeviceTextureCompressionASTCHDRFeatures),
                    sizeof(VkPhysicalDeviceTextureCompressionASTCHDRFeatures)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TIMELINE_SEMAPHORE_FEATURES:
            return {alignof(VkPhysicalDeviceTimelineSemaphoreFeatures), sizeof(VkPhysicalDeviceTimelineSemaphoreFeatures)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_UNIFORM_BUFFER_STANDARD_LAYOUT_FEATURES:
            return {alignof(VkPhysicalDeviceUniformBufferStandardLayoutFeatures),
                    sizeof(VkPhysicalDeviceUniformBufferStandardLayoutFeatures)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VARIABLE_POINTERS_FEATURES:
            return {alignof(VkPhysicalDeviceVariablePointersFeatures), sizeof(VkPhysicalDeviceVariablePointersFeatures)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VERTEX_ATTRIBUTE_DIVISOR_FEATURES:
            return {alignof(VkPhysicalDeviceVertexAttributeDivisorFeatures),
                    sizeof(VkPhysicalDeviceVertexAttributeDivisorFeatures)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VERTEX_INPUT_DYNAMIC_STATE_FEATURES_EXT:
            return {alignof(VkPhysicalDeviceVertexInputDynamicStateFeaturesEXT),
                    sizeof(VkPhysicalDeviceVertexInputDynamicStateFeaturesEXT)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VULKAN_1_1_FEATURES:
            return {alignof(VkPhysicalDeviceVulkan11Features), sizeof(VkPhysicalDeviceVulkan11Features)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VULKAN_1_2_FEATURES:
            return {alignof(VkPhysicalDeviceVulkan12Features), sizeof(VkPhysicalDeviceVulkan12Features)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VULKAN_1_3_FEATURES:
            return {alignof(VkPhysicalDeviceVulkan13Features), sizeof(VkPhysicalDeviceVulkan13Features)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VULKAN_1_4_FEATURES:
            return {alignof(VkPhysicalDeviceVulkan14Features), sizeof(VkPhysicalDeviceVulkan14Features)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VULKAN_MEMORY_MODEL_FEATURES:
            return {alignof(VkPhysicalDeviceVulkanMemoryModelFeatures), sizeof(VkPhysicalDeviceVulkanMemoryModelFeatures)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VULKAN_SC_1_0_FEATURES:
            return {alignof(VkPhysicalDeviceVulkanSC10Features), sizeof(VkPhysicalDeviceVulkanSC10Features)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_YCBCR_2_PLANE_444_FORMATS_FEATURES_EXT:
            return {alignof(VkPhysicalDeviceYcbcr2Plane444FormatsFeaturesEXT),
                    sizeof(VkPhysicalDeviceYcbcr2Plane444FormatsFeaturesEXT)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_YCBCR_IMAGE_ARRAYS_FEATURES_EXT:
            return {alignof(VkPhysicalDeviceYcbcrImageArraysFeaturesEXT), sizeof(VkPhysicalDeviceYcbcrImageArraysFeaturesEXT)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ZERO_INITIALIZE_WORKGROUP_MEMORY_FEATURES:
            return {alignof(VkPhysicalDeviceZeroInitializeWorkgroupMemoryFeatures),
                    sizeof(VkPhysicalDeviceZeroInitializeWorkgroupMemoryFeatures)};

        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkExtensionProperties>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkLayerProperties>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkSubmitInfo>(VkStructureType type) {
    switch (type) {
        case VK_STRUCTURE_TYPE_DEVICE_GROUP_SUBMIT_INFO:
            return {alignof(VkDeviceGroupSubmitInfo), sizeof(VkDeviceGroupSubmitInfo)};
        case VK_STRUCTURE_TYPE_PERFORMANCE_QUERY_SUBMIT_INFO_KHR:
            return {alignof(VkPerformanceQuerySubmitInfoKHR), sizeof(VkPerformanceQuerySubmitInfoKHR)};
        case VK_STRUCTURE_TYPE_PROTECTED_SUBMIT_INFO:
            return {alignof(VkProtectedSubmitInfo), sizeof(VkProtectedSubmitInfo)};
        case VK_STRUCTURE_TYPE_TIMELINE_SEMAPHORE_SUBMIT_INFO:
            return {alignof(VkTimelineSemaphoreSubmitInfo), sizeof(VkTimelineSemaphoreSubmitInfo)};

        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkMappedMemoryRange>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkMemoryAllocateInfo>(VkStructureType type) {
    switch (type) {
        case VK_STRUCTURE_TYPE_EXPORT_MEMORY_ALLOCATE_INFO:
            return {alignof(VkExportMemoryAllocateInfo), sizeof(VkExportMemoryAllocateInfo)};
#ifdef VK_USE_PLATFORM_SCI
        case VK_STRUCTURE_TYPE_EXPORT_MEMORY_SCI_BUF_INFO_NV:
            return {alignof(VkExportMemorySciBufInfoNV), sizeof(VkExportMemorySciBufInfoNV)};
#endif  // VK_USE_PLATFORM_SCI
        case VK_STRUCTURE_TYPE_IMPORT_MEMORY_FD_INFO_KHR:
            return {alignof(VkImportMemoryFdInfoKHR), sizeof(VkImportMemoryFdInfoKHR)};
        case VK_STRUCTURE_TYPE_IMPORT_MEMORY_HOST_POINTER_INFO_EXT:
            return {alignof(VkImportMemoryHostPointerInfoEXT), sizeof(VkImportMemoryHostPointerInfoEXT)};
#ifdef VK_USE_PLATFORM_SCI
        case VK_STRUCTURE_TYPE_IMPORT_MEMORY_SCI_BUF_INFO_NV:
            return {alignof(VkImportMemorySciBufInfoNV), sizeof(VkImportMemorySciBufInfoNV)};
#endif  // VK_USE_PLATFORM_SCI
#ifdef VK_USE_PLATFORM_SCREEN_QNX
        case VK_STRUCTURE_TYPE_IMPORT_SCREEN_BUFFER_INFO_QNX:
            return {alignof(VkImportScreenBufferInfoQNX), sizeof(VkImportScreenBufferInfoQNX)};
#endif  // VK_USE_PLATFORM_SCREEN_QNX
        case VK_STRUCTURE_TYPE_MEMORY_ALLOCATE_FLAGS_INFO:
            return {alignof(VkMemoryAllocateFlagsInfo), sizeof(VkMemoryAllocateFlagsInfo)};
        case VK_STRUCTURE_TYPE_MEMORY_DEDICATED_ALLOCATE_INFO:
            return {alignof(VkMemoryDedicatedAllocateInfo), sizeof(VkMemoryDedicatedAllocateInfo)};
        case VK_STRUCTURE_TYPE_MEMORY_OPAQUE_CAPTURE_ADDRESS_ALLOCATE_INFO:
            return {alignof(VkMemoryOpaqueCaptureAddressAllocateInfo), sizeof(VkMemoryOpaqueCaptureAddressAllocateInfo)};

        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkMemoryRequirements>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkImageSubresource>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkFenceCreateInfo>(VkStructureType type) {
    switch (type) {
        case VK_STRUCTURE_TYPE_EXPORT_FENCE_CREATE_INFO:
            return {alignof(VkExportFenceCreateInfo), sizeof(VkExportFenceCreateInfo)};
#ifdef VK_USE_PLATFORM_SCI
        case VK_STRUCTURE_TYPE_EXPORT_FENCE_SCI_SYNC_INFO_NV:
            return {alignof(VkExportFenceSciSyncInfoNV), sizeof(VkExportFenceSciSyncInfoNV)};
#endif  // VK_USE_PLATFORM_SCI

        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkSemaphoreCreateInfo>(VkStructureType type) {
    switch (type) {
        case VK_STRUCTURE_TYPE_EXPORT_SEMAPHORE_CREATE_INFO:
            return {alignof(VkExportSemaphoreCreateInfo), sizeof(VkExportSemaphoreCreateInfo)};
#ifdef VK_USE_PLATFORM_SCI
        case VK_STRUCTURE_TYPE_EXPORT_SEMAPHORE_SCI_SYNC_INFO_NV:
            return {alignof(VkExportSemaphoreSciSyncInfoNV), sizeof(VkExportSemaphoreSciSyncInfoNV)};
        case VK_STRUCTURE_TYPE_SEMAPHORE_SCI_SYNC_CREATE_INFO_NV:
            return {alignof(VkSemaphoreSciSyncCreateInfoNV), sizeof(VkSemaphoreSciSyncCreateInfoNV)};
#endif  // VK_USE_PLATFORM_SCI
        case VK_STRUCTURE_TYPE_SEMAPHORE_TYPE_CREATE_INFO:
            return {alignof(VkSemaphoreTypeCreateInfo), sizeof(VkSemaphoreTypeCreateInfo)};

        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkQueryPoolCreateInfo>(VkStructureType type) {
    switch (type) {
        case VK_STRUCTURE_TYPE_QUERY_POOL_PERFORMANCE_CREATE_INFO_KHR:
            return {alignof(VkQueryPoolPerformanceCreateInfoKHR), sizeof(VkQueryPoolPerformanceCreateInfoKHR)};

        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkBufferCreateInfo>(VkStructureType type) {
    switch (type) {
        case VK_STRUCTURE_TYPE_BUFFER_OPAQUE_CAPTURE_ADDRESS_CREATE_INFO:
            return {alignof(VkBufferOpaqueCaptureAddressCreateInfo), sizeof(VkBufferOpaqueCaptureAddressCreateInfo)};
        case VK_STRUCTURE_TYPE_BUFFER_USAGE_FLAGS_2_CREATE_INFO:
            return {alignof(VkBufferUsageFlags2CreateInfo), sizeof(VkBufferUsageFlags2CreateInfo)};
        case VK_STRUCTURE_TYPE_EXTERNAL_MEMORY_BUFFER_CREATE_INFO:
            return {alignof(VkExternalMemoryBufferCreateInfo), sizeof(VkExternalMemoryBufferCreateInfo)};

        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkImageCreateInfo>(VkStructureType type) {
    switch (type) {
#ifdef VK_USE_PLATFORM_SCREEN_QNX
        case VK_STRUCTURE_TYPE_EXTERNAL_FORMAT_QNX:
            return {alignof(VkExternalFormatQNX), sizeof(VkExternalFormatQNX)};
#endif  // VK_USE_PLATFORM_SCREEN_QNX
        case VK_STRUCTURE_TYPE_EXTERNAL_MEMORY_IMAGE_CREATE_INFO:
            return {alignof(VkExternalMemoryImageCreateInfo), sizeof(VkExternalMemoryImageCreateInfo)};
        case VK_STRUCTURE_TYPE_IMAGE_DRM_FORMAT_MODIFIER_EXPLICIT_CREATE_INFO_EXT:
            return {alignof(VkImageDrmFormatModifierExplicitCreateInfoEXT), sizeof(VkImageDrmFormatModifierExplicitCreateInfoEXT)};
        case VK_STRUCTURE_TYPE_IMAGE_DRM_FORMAT_MODIFIER_LIST_CREATE_INFO_EXT:
            return {alignof(VkImageDrmFormatModifierListCreateInfoEXT), sizeof(VkImageDrmFormatModifierListCreateInfoEXT)};
        case VK_STRUCTURE_TYPE_IMAGE_FORMAT_LIST_CREATE_INFO:
            return {alignof(VkImageFormatListCreateInfo), sizeof(VkImageFormatListCreateInfo)};
        case VK_STRUCTURE_TYPE_IMAGE_STENCIL_USAGE_CREATE_INFO:
            return {alignof(VkImageStencilUsageCreateInfo), sizeof(VkImageStencilUsageCreateInfo)};
        case VK_STRUCTURE_TYPE_IMAGE_SWAPCHAIN_CREATE_INFO_KHR:
            return {alignof(VkImageSwapchainCreateInfoKHR), sizeof(VkImageSwapchainCreateInfoKHR)};

        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkSubresourceLayout>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkComponentMapping>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkImageViewCreateInfo>(VkStructureType type) {
    switch (type) {
        case VK_STRUCTURE_TYPE_IMAGE_VIEW_ASTC_DECODE_MODE_EXT:
            return {alignof(VkImageViewASTCDecodeModeEXT), sizeof(VkImageViewASTCDecodeModeEXT)};
        case VK_STRUCTURE_TYPE_IMAGE_VIEW_USAGE_CREATE_INFO:
            return {alignof(VkImageViewUsageCreateInfo), sizeof(VkImageViewUsageCreateInfo)};
        case VK_STRUCTURE_TYPE_SAMPLER_YCBCR_CONVERSION_INFO:
            return {alignof(VkSamplerYcbcrConversionInfo), sizeof(VkSamplerYcbcrConversionInfo)};

        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkCommandPoolCreateInfo>(VkStructureType type) {
    switch (type) {
        case VK_STRUCTURE_TYPE_COMMAND_POOL_MEMORY_RESERVATION_CREATE_INFO:
            return {alignof(VkCommandPoolMemoryReservationCreateInfo), sizeof(VkCommandPoolMemoryReservationCreateInfo)};

        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkCommandBufferAllocateInfo>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkCommandBufferInheritanceInfo>(VkStructureType type) {
    switch (type) {
        case VK_STRUCTURE_TYPE_COMMAND_BUFFER_INHERITANCE_RENDERING_INFO:
            return {alignof(VkCommandBufferInheritanceRenderingInfo), sizeof(VkCommandBufferInheritanceRenderingInfo)};
        case VK_STRUCTURE_TYPE_RENDERING_ATTACHMENT_LOCATION_INFO:
            return {alignof(VkRenderingAttachmentLocationInfo), sizeof(VkRenderingAttachmentLocationInfo)};
        case VK_STRUCTURE_TYPE_RENDERING_INPUT_ATTACHMENT_INDEX_INFO:
            return {alignof(VkRenderingInputAttachmentIndexInfo), sizeof(VkRenderingInputAttachmentIndexInfo)};

        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkCommandBufferBeginInfo>(VkStructureType type) {
    switch (type) {
        case VK_STRUCTURE_TYPE_DEVICE_GROUP_COMMAND_BUFFER_BEGIN_INFO:
            return {alignof(VkDeviceGroupCommandBufferBeginInfo), sizeof(VkDeviceGroupCommandBufferBeginInfo)};

        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkBufferCopy>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkImageSubresourceLayers>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkBufferImageCopy>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkImageCopy>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkDispatchIndirectCommand>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPipelineCacheHeaderVersionOne>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkEventCreateInfo>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkBufferViewCreateInfo>(VkStructureType type) {
    switch (type) {
        case VK_STRUCTURE_TYPE_BUFFER_USAGE_FLAGS_2_CREATE_INFO:
            return {alignof(VkBufferUsageFlags2CreateInfo), sizeof(VkBufferUsageFlags2CreateInfo)};

        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPipelineCacheCreateInfo>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkSpecializationMapEntry>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkSpecializationInfo>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPipelineShaderStageCreateInfo>(VkStructureType type) {
    switch (type) {
        case VK_STRUCTURE_TYPE_DEBUG_UTILS_OBJECT_NAME_INFO_EXT:
            return {alignof(VkDebugUtilsObjectNameInfoEXT), sizeof(VkDebugUtilsObjectNameInfoEXT)};
        case VK_STRUCTURE_TYPE_PIPELINE_ROBUSTNESS_CREATE_INFO:
            return {alignof(VkPipelineRobustnessCreateInfo), sizeof(VkPipelineRobustnessCreateInfo)};
        case VK_STRUCTURE_TYPE_PIPELINE_SHADER_STAGE_REQUIRED_SUBGROUP_SIZE_CREATE_INFO:
            return {alignof(VkPipelineShaderStageRequiredSubgroupSizeCreateInfo),
                    sizeof(VkPipelineShaderStageRequiredSubgroupSizeCreateInfo)};

        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkComputePipelineCreateInfo>(VkStructureType type) {
    switch (type) {
        case VK_STRUCTURE_TYPE_PIPELINE_CREATE_FLAGS_2_CREATE_INFO:
            return {alignof(VkPipelineCreateFlags2CreateInfo), sizeof(VkPipelineCreateFlags2CreateInfo)};
        case VK_STRUCTURE_TYPE_PIPELINE_CREATION_FEEDBACK_CREATE_INFO:
            return {alignof(VkPipelineCreationFeedbackCreateInfo), sizeof(VkPipelineCreationFeedbackCreateInfo)};
        case VK_STRUCTURE_TYPE_PIPELINE_OFFLINE_CREATE_INFO:
            return {alignof(VkPipelineOfflineCreateInfo), sizeof(VkPipelineOfflineCreateInfo)};
        case VK_STRUCTURE_TYPE_PIPELINE_ROBUSTNESS_CREATE_INFO:
            return {alignof(VkPipelineRobustnessCreateInfo), sizeof(VkPipelineRobustnessCreateInfo)};

        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPushConstantRange>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPipelineLayoutCreateInfo>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkSamplerCreateInfo>(VkStructureType type) {
    switch (type) {
        case VK_STRUCTURE_TYPE_SAMPLER_CUSTOM_BORDER_COLOR_CREATE_INFO_EXT:
            return {alignof(VkSamplerCustomBorderColorCreateInfoEXT), sizeof(VkSamplerCustomBorderColorCreateInfoEXT)};
        case VK_STRUCTURE_TYPE_SAMPLER_REDUCTION_MODE_CREATE_INFO:
            return {alignof(VkSamplerReductionModeCreateInfo), sizeof(VkSamplerReductionModeCreateInfo)};
        case VK_STRUCTURE_TYPE_SAMPLER_YCBCR_CONVERSION_INFO:
            return {alignof(VkSamplerYcbcrConversionInfo), sizeof(VkSamplerYcbcrConversionInfo)};

        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkCopyDescriptorSet>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkDescriptorBufferInfo>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkDescriptorImageInfo>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkDescriptorPoolSize>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkDescriptorPoolCreateInfo>(VkStructureType type) {
    switch (type) {
        case VK_STRUCTURE_TYPE_DESCRIPTOR_POOL_INLINE_UNIFORM_BLOCK_CREATE_INFO:
            return {alignof(VkDescriptorPoolInlineUniformBlockCreateInfo), sizeof(VkDescriptorPoolInlineUniformBlockCreateInfo)};

        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkDescriptorSetAllocateInfo>(VkStructureType type) {
    switch (type) {
        case VK_STRUCTURE_TYPE_DESCRIPTOR_SET_VARIABLE_DESCRIPTOR_COUNT_ALLOCATE_INFO:
            return {alignof(VkDescriptorSetVariableDescriptorCountAllocateInfo),
                    sizeof(VkDescriptorSetVariableDescriptorCountAllocateInfo)};

        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkDescriptorSetLayoutBinding>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkDescriptorSetLayoutCreateInfo>(VkStructureType type) {
    switch (type) {
        case VK_STRUCTURE_TYPE_DESCRIPTOR_SET_LAYOUT_BINDING_FLAGS_CREATE_INFO:
            return {alignof(VkDescriptorSetLayoutBindingFlagsCreateInfo), sizeof(VkDescriptorSetLayoutBindingFlagsCreateInfo)};

        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkWriteDescriptorSet>(VkStructureType type) {
    switch (type) {
        case VK_STRUCTURE_TYPE_WRITE_DESCRIPTOR_SET_INLINE_UNIFORM_BLOCK:
            return {alignof(VkWriteDescriptorSetInlineUniformBlock), sizeof(VkWriteDescriptorSetInlineUniformBlock)};

        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkClearColorValue>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkDrawIndexedIndirectCommand>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkDrawIndirectCommand>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkVertexInputBindingDescription>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkVertexInputAttributeDescription>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPipelineVertexInputStateCreateInfo>(VkStructureType type) {
    switch (type) {
        case VK_STRUCTURE_TYPE_PIPELINE_VERTEX_INPUT_DIVISOR_STATE_CREATE_INFO:
            return {alignof(VkPipelineVertexInputDivisorStateCreateInfo), sizeof(VkPipelineVertexInputDivisorStateCreateInfo)};

        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPipelineInputAssemblyStateCreateInfo>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPipelineTessellationStateCreateInfo>(VkStructureType type) {
    switch (type) {
        case VK_STRUCTURE_TYPE_PIPELINE_TESSELLATION_DOMAIN_ORIGIN_STATE_CREATE_INFO:
            return {alignof(VkPipelineTessellationDomainOriginStateCreateInfo),
                    sizeof(VkPipelineTessellationDomainOriginStateCreateInfo)};

        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkViewport>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPipelineViewportStateCreateInfo>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPipelineRasterizationStateCreateInfo>(VkStructureType type) {
    switch (type) {
        case VK_STRUCTURE_TYPE_PIPELINE_RASTERIZATION_CONSERVATIVE_STATE_CREATE_INFO_EXT:
            return {alignof(VkPipelineRasterizationConservativeStateCreateInfoEXT),
                    sizeof(VkPipelineRasterizationConservativeStateCreateInfoEXT)};
        case VK_STRUCTURE_TYPE_PIPELINE_RASTERIZATION_DEPTH_CLIP_STATE_CREATE_INFO_EXT:
            return {alignof(VkPipelineRasterizationDepthClipStateCreateInfoEXT),
                    sizeof(VkPipelineRasterizationDepthClipStateCreateInfoEXT)};
        case VK_STRUCTURE_TYPE_PIPELINE_RASTERIZATION_LINE_STATE_CREATE_INFO:
            return {alignof(VkPipelineRasterizationLineStateCreateInfo), sizeof(VkPipelineRasterizationLineStateCreateInfo)};

        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPipelineMultisampleStateCreateInfo>(VkStructureType type) {
    switch (type) {
        case VK_STRUCTURE_TYPE_PIPELINE_SAMPLE_LOCATIONS_STATE_CREATE_INFO_EXT:
            return {alignof(VkPipelineSampleLocationsStateCreateInfoEXT), sizeof(VkPipelineSampleLocationsStateCreateInfoEXT)};

        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkStencilOpState>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPipelineDepthStencilStateCreateInfo>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPipelineColorBlendAttachmentState>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPipelineColorBlendStateCreateInfo>(VkStructureType type) {
    switch (type) {
        case VK_STRUCTURE_TYPE_PIPELINE_COLOR_BLEND_ADVANCED_STATE_CREATE_INFO_EXT:
            return {alignof(VkPipelineColorBlendAdvancedStateCreateInfoEXT),
                    sizeof(VkPipelineColorBlendAdvancedStateCreateInfoEXT)};
        case VK_STRUCTURE_TYPE_PIPELINE_COLOR_WRITE_CREATE_INFO_EXT:
            return {alignof(VkPipelineColorWriteCreateInfoEXT), sizeof(VkPipelineColorWriteCreateInfoEXT)};

        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPipelineDynamicStateCreateInfo>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkGraphicsPipelineCreateInfo>(VkStructureType type) {
    switch (type) {
        case VK_STRUCTURE_TYPE_PIPELINE_CREATE_FLAGS_2_CREATE_INFO:
            return {alignof(VkPipelineCreateFlags2CreateInfo), sizeof(VkPipelineCreateFlags2CreateInfo)};
        case VK_STRUCTURE_TYPE_PIPELINE_CREATION_FEEDBACK_CREATE_INFO:
            return {alignof(VkPipelineCreationFeedbackCreateInfo), sizeof(VkPipelineCreationFeedbackCreateInfo)};
        case VK_STRUCTURE_TYPE_PIPELINE_DISCARD_RECTANGLE_STATE_CREATE_INFO_EXT:
            return {alignof(VkPipelineDiscardRectangleStateCreateInfoEXT), sizeof(VkPipelineDiscardRectangleStateCreateInfoEXT)};
        case VK_STRUCTURE_TYPE_PIPELINE_FRAGMENT_SHADING_RATE_STATE_CREATE_INFO_KHR:
            return {alignof(VkPipelineFragmentShadingRateStateCreateInfoKHR),
                    sizeof(VkPipelineFragmentShadingRateStateCreateInfoKHR)};
        case VK_STRUCTURE_TYPE_PIPELINE_OFFLINE_CREATE_INFO:
            return {alignof(VkPipelineOfflineCreateInfo), sizeof(VkPipelineOfflineCreateInfo)};
        case VK_STRUCTURE_TYPE_PIPELINE_RENDERING_CREATE_INFO:
            return {alignof(VkPipelineRenderingCreateInfo), sizeof(VkPipelineRenderingCreateInfo)};
        case VK_STRUCTURE_TYPE_PIPELINE_ROBUSTNESS_CREATE_INFO:
            return {alignof(VkPipelineRobustnessCreateInfo), sizeof(VkPipelineRobustnessCreateInfo)};
        case VK_STRUCTURE_TYPE_RENDERING_ATTACHMENT_LOCATION_INFO:
            return {alignof(VkRenderingAttachmentLocationInfo), sizeof(VkRenderingAttachmentLocationInfo)};
        case VK_STRUCTURE_TYPE_RENDERING_INPUT_ATTACHMENT_INDEX_INFO:
            return {alignof(VkRenderingInputAttachmentIndexInfo), sizeof(VkRenderingInputAttachmentIndexInfo)};

        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkAttachmentDescription>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkAttachmentReference>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkFramebufferCreateInfo>(VkStructureType type) {
    switch (type) {
        case VK_STRUCTURE_TYPE_FRAMEBUFFER_ATTACHMENTS_CREATE_INFO:
            return {alignof(VkFramebufferAttachmentsCreateInfo), sizeof(VkFramebufferAttachmentsCreateInfo)};

        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkSubpassDescription>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkSubpassDependency>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkRenderPassCreateInfo>(VkStructureType type) {
    switch (type) {
        case VK_STRUCTURE_TYPE_RENDER_PASS_INPUT_ATTACHMENT_ASPECT_CREATE_INFO:
            return {alignof(VkRenderPassInputAttachmentAspectCreateInfo), sizeof(VkRenderPassInputAttachmentAspectCreateInfo)};
        case VK_STRUCTURE_TYPE_RENDER_PASS_MULTIVIEW_CREATE_INFO:
            return {alignof(VkRenderPassMultiviewCreateInfo), sizeof(VkRenderPassMultiviewCreateInfo)};

        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkClearDepthStencilValue>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkClearValue>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkClearAttachment>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkClearRect>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkImageBlit>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkImageResolve>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkRenderPassBeginInfo>(VkStructureType type) {
    switch (type) {
        case VK_STRUCTURE_TYPE_DEVICE_GROUP_RENDER_PASS_BEGIN_INFO:
            return {alignof(VkDeviceGroupRenderPassBeginInfo), sizeof(VkDeviceGroupRenderPassBeginInfo)};
        case VK_STRUCTURE_TYPE_RENDER_PASS_ATTACHMENT_BEGIN_INFO:
            return {alignof(VkRenderPassAttachmentBeginInfo), sizeof(VkRenderPassAttachmentBeginInfo)};
        case VK_STRUCTURE_TYPE_RENDER_PASS_SAMPLE_LOCATIONS_BEGIN_INFO_EXT:
            return {alignof(VkRenderPassSampleLocationsBeginInfoEXT), sizeof(VkRenderPassSampleLocationsBeginInfoEXT)};

        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkBindBufferMemoryInfo>(VkStructureType type) {
    switch (type) {
        case VK_STRUCTURE_TYPE_BIND_BUFFER_MEMORY_DEVICE_GROUP_INFO:
            return {alignof(VkBindBufferMemoryDeviceGroupInfo), sizeof(VkBindBufferMemoryDeviceGroupInfo)};
        case VK_STRUCTURE_TYPE_BIND_MEMORY_STATUS:
            return {alignof(VkBindMemoryStatus), sizeof(VkBindMemoryStatus)};

        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkBindImageMemoryInfo>(VkStructureType type) {
    switch (type) {
        case VK_STRUCTURE_TYPE_BIND_IMAGE_MEMORY_DEVICE_GROUP_INFO:
            return {alignof(VkBindImageMemoryDeviceGroupInfo), sizeof(VkBindImageMemoryDeviceGroupInfo)};
        case VK_STRUCTURE_TYPE_BIND_IMAGE_MEMORY_SWAPCHAIN_INFO_KHR:
            return {alignof(VkBindImageMemorySwapchainInfoKHR), sizeof(VkBindImageMemorySwapchainInfoKHR)};
        case VK_STRUCTURE_TYPE_BIND_IMAGE_PLANE_MEMORY_INFO:
            return {alignof(VkBindImagePlaneMemoryInfo), sizeof(VkBindImagePlaneMemoryInfo)};
        case VK_STRUCTURE_TYPE_BIND_MEMORY_STATUS:
            return {alignof(VkBindMemoryStatus), sizeof(VkBindMemoryStatus)};

        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkMemoryDedicatedRequirements>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkMemoryDedicatedAllocateInfo>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkMemoryAllocateFlagsInfo>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkDeviceGroupCommandBufferBeginInfo>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkDeviceGroupSubmitInfo>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkBindBufferMemoryDeviceGroupInfo>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkBindImageMemoryDeviceGroupInfo>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPhysicalDeviceGroupProperties>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkDeviceGroupDeviceCreateInfo>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkBufferMemoryRequirementsInfo2>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkImageMemoryRequirementsInfo2>(VkStructureType type) {
    switch (type) {
        case VK_STRUCTURE_TYPE_IMAGE_PLANE_MEMORY_REQUIREMENTS_INFO:
            return {alignof(VkImagePlaneMemoryRequirementsInfo), sizeof(VkImagePlaneMemoryRequirementsInfo)};

        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkMemoryRequirements2>(VkStructureType type) {
    switch (type) {
        case VK_STRUCTURE_TYPE_MEMORY_DEDICATED_REQUIREMENTS:
            return {alignof(VkMemoryDedicatedRequirements), sizeof(VkMemoryDedicatedRequirements)};

        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPhysicalDeviceFeatures2>(VkStructureType type) {
    switch (type) {
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_16BIT_STORAGE_FEATURES:
            return {alignof(VkPhysicalDevice16BitStorageFeatures), sizeof(VkPhysicalDevice16BitStorageFeatures)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_4444_FORMATS_FEATURES_EXT:
            return {alignof(VkPhysicalDevice4444FormatsFeaturesEXT), sizeof(VkPhysicalDevice4444FormatsFeaturesEXT)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_8BIT_STORAGE_FEATURES:
            return {alignof(VkPhysicalDevice8BitStorageFeatures), sizeof(VkPhysicalDevice8BitStorageFeatures)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ASTC_DECODE_FEATURES_EXT:
            return {alignof(VkPhysicalDeviceASTCDecodeFeaturesEXT), sizeof(VkPhysicalDeviceASTCDecodeFeaturesEXT)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_BLEND_OPERATION_ADVANCED_FEATURES_EXT:
            return {alignof(VkPhysicalDeviceBlendOperationAdvancedFeaturesEXT),
                    sizeof(VkPhysicalDeviceBlendOperationAdvancedFeaturesEXT)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_BUFFER_DEVICE_ADDRESS_FEATURES:
            return {alignof(VkPhysicalDeviceBufferDeviceAddressFeatures), sizeof(VkPhysicalDeviceBufferDeviceAddressFeatures)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COLOR_WRITE_ENABLE_FEATURES_EXT:
            return {alignof(VkPhysicalDeviceColorWriteEnableFeaturesEXT), sizeof(VkPhysicalDeviceColorWriteEnableFeaturesEXT)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_CUSTOM_BORDER_COLOR_FEATURES_EXT:
            return {alignof(VkPhysicalDeviceCustomBorderColorFeaturesEXT), sizeof(VkPhysicalDeviceCustomBorderColorFeaturesEXT)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DEPTH_CLIP_ENABLE_FEATURES_EXT:
            return {alignof(VkPhysicalDeviceDepthClipEnableFeaturesEXT), sizeof(VkPhysicalDeviceDepthClipEnableFeaturesEXT)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DESCRIPTOR_INDEXING_FEATURES:
            return {alignof(VkPhysicalDeviceDescriptorIndexingFeatures), sizeof(VkPhysicalDeviceDescriptorIndexingFeatures)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DYNAMIC_RENDERING_FEATURES:
            return {alignof(VkPhysicalDeviceDynamicRenderingFeatures), sizeof(VkPhysicalDeviceDynamicRenderingFeatures)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DYNAMIC_RENDERING_LOCAL_READ_FEATURES:
            return {alignof(VkPhysicalDeviceDynamicRenderingLocalReadFeatures),
                    sizeof(VkPhysicalDeviceDynamicRenderingLocalReadFeatures)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTENDED_DYNAMIC_STATE_2_FEATURES_EXT:
            return {alignof(VkPhysicalDeviceExtendedDynamicState2FeaturesEXT),
                    sizeof(VkPhysicalDeviceExtendedDynamicState2FeaturesEXT)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTENDED_DYNAMIC_STATE_FEATURES_EXT:
            return {alignof(VkPhysicalDeviceExtendedDynamicStateFeaturesEXT),
                    sizeof(VkPhysicalDeviceExtendedDynamicStateFeaturesEXT)};
#ifdef VK_USE_PLATFORM_SCI
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTERNAL_MEMORY_SCI_BUF_FEATURES_NV:
            return {alignof(VkPhysicalDeviceExternalMemorySciBufFeaturesNV),
                    sizeof(VkPhysicalDeviceExternalMemorySciBufFeaturesNV)};
#endif  // VK_USE_PLATFORM_SCI
#ifdef VK_USE_PLATFORM_SCREEN_QNX
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTERNAL_MEMORY_SCREEN_BUFFER_FEATURES_QNX:
            return {alignof(VkPhysicalDeviceExternalMemoryScreenBufferFeaturesQNX),
                    sizeof(VkPhysicalDeviceExternalMemoryScreenBufferFeaturesQNX)};
#endif  // VK_USE_PLATFORM_SCREEN_QNX
#ifdef VK_USE_PLATFORM_SCI
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTERNAL_SCI_SYNC_2_FEATURES_NV:
            return {alignof(VkPhysicalDeviceExternalSciSync2FeaturesNV), sizeof(VkPhysicalDeviceExternalSciSync2FeaturesNV)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTERNAL_SCI_SYNC_FEATURES_NV:
            return {alignof(VkPhysicalDeviceExternalSciSyncFeaturesNV), sizeof(VkPhysicalDeviceExternalSciSyncFeaturesNV)};
#endif  // VK_USE_PLATFORM_SCI
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_SHADER_INTERLOCK_FEATURES_EXT:
            return {alignof(VkPhysicalDeviceFragmentShaderInterlockFeaturesEXT),
                    sizeof(VkPhysicalDeviceFragmentShaderInterlockFeaturesEXT)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_SHADING_RATE_FEATURES_KHR:
            return {alignof(VkPhysicalDeviceFragmentShadingRateFeaturesKHR),
                    sizeof(VkPhysicalDeviceFragmentShadingRateFeaturesKHR)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_GLOBAL_PRIORITY_QUERY_FEATURES:
            return {alignof(VkPhysicalDeviceGlobalPriorityQueryFeatures), sizeof(VkPhysicalDeviceGlobalPriorityQueryFeatures)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_HOST_IMAGE_COPY_FEATURES:
            return {alignof(VkPhysicalDeviceHostImageCopyFeatures), sizeof(VkPhysicalDeviceHostImageCopyFeatures)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_HOST_QUERY_RESET_FEATURES:
            return {alignof(VkPhysicalDeviceHostQueryResetFeatures), sizeof(VkPhysicalDeviceHostQueryResetFeatures)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_ROBUSTNESS_FEATURES:
            return {alignof(VkPhysicalDeviceImageRobustnessFeatures), sizeof(VkPhysicalDeviceImageRobustnessFeatures)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGELESS_FRAMEBUFFER_FEATURES:
            return {alignof(VkPhysicalDeviceImagelessFramebufferFeatures), sizeof(VkPhysicalDeviceImagelessFramebufferFeatures)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_INDEX_TYPE_UINT8_FEATURES:
            return {alignof(VkPhysicalDeviceIndexTypeUint8Features), sizeof(VkPhysicalDeviceIndexTypeUint8Features)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_INLINE_UNIFORM_BLOCK_FEATURES:
            return {alignof(VkPhysicalDeviceInlineUniformBlockFeatures), sizeof(VkPhysicalDeviceInlineUniformBlockFeatures)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_LINE_RASTERIZATION_FEATURES:
            return {alignof(VkPhysicalDeviceLineRasterizationFeatures), sizeof(VkPhysicalDeviceLineRasterizationFeatures)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MAINTENANCE_4_FEATURES:
            return {alignof(VkPhysicalDeviceMaintenance4Features), sizeof(VkPhysicalDeviceMaintenance4Features)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MAINTENANCE_5_FEATURES:
            return {alignof(VkPhysicalDeviceMaintenance5Features), sizeof(VkPhysicalDeviceMaintenance5Features)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MAINTENANCE_6_FEATURES:
            return {alignof(VkPhysicalDeviceMaintenance6Features), sizeof(VkPhysicalDeviceMaintenance6Features)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MULTIVIEW_FEATURES:
            return {alignof(VkPhysicalDeviceMultiviewFeatures), sizeof(VkPhysicalDeviceMultiviewFeatures)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PERFORMANCE_QUERY_FEATURES_KHR:
            return {alignof(VkPhysicalDevicePerformanceQueryFeaturesKHR), sizeof(VkPhysicalDevicePerformanceQueryFeaturesKHR)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PIPELINE_CREATION_CACHE_CONTROL_FEATURES:
            return {alignof(VkPhysicalDevicePipelineCreationCacheControlFeatures),
                    sizeof(VkPhysicalDevicePipelineCreationCacheControlFeatures)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PIPELINE_PROTECTED_ACCESS_FEATURES:
            return {alignof(VkPhysicalDevicePipelineProtectedAccessFeatures),
                    sizeof(VkPhysicalDevicePipelineProtectedAccessFeatures)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PIPELINE_ROBUSTNESS_FEATURES:
            return {alignof(VkPhysicalDevicePipelineRobustnessFeatures), sizeof(VkPhysicalDevicePipelineRobustnessFeatures)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PRIVATE_DATA_FEATURES:
            return {alignof(VkPhysicalDevicePrivateDataFeatures), sizeof(VkPhysicalDevicePrivateDataFeatures)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PROTECTED_MEMORY_FEATURES:
            return {alignof(VkPhysicalDeviceProtectedMemoryFeatures), sizeof(VkPhysicalDeviceProtectedMemoryFeatures)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ROBUSTNESS_2_FEATURES_KHR:
            return {alignof(VkPhysicalDeviceRobustness2FeaturesKHR), sizeof(VkPhysicalDeviceRobustness2FeaturesKHR)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SAMPLER_YCBCR_CONVERSION_FEATURES:
            return {alignof(VkPhysicalDeviceSamplerYcbcrConversionFeatures),
                    sizeof(VkPhysicalDeviceSamplerYcbcrConversionFeatures)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SCALAR_BLOCK_LAYOUT_FEATURES:
            return {alignof(VkPhysicalDeviceScalarBlockLayoutFeatures), sizeof(VkPhysicalDeviceScalarBlockLayoutFeatures)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SEPARATE_DEPTH_STENCIL_LAYOUTS_FEATURES:
            return {alignof(VkPhysicalDeviceSeparateDepthStencilLayoutsFeatures),
                    sizeof(VkPhysicalDeviceSeparateDepthStencilLayoutsFeatures)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_ATOMIC_FLOAT_FEATURES_EXT:
            return {alignof(VkPhysicalDeviceShaderAtomicFloatFeaturesEXT), sizeof(VkPhysicalDeviceShaderAtomicFloatFeaturesEXT)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_ATOMIC_INT64_FEATURES:
            return {alignof(VkPhysicalDeviceShaderAtomicInt64Features), sizeof(VkPhysicalDeviceShaderAtomicInt64Features)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_CLOCK_FEATURES_KHR:
            return {alignof(VkPhysicalDeviceShaderClockFeaturesKHR), sizeof(VkPhysicalDeviceShaderClockFeaturesKHR)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_DEMOTE_TO_HELPER_INVOCATION_FEATURES:
            return {alignof(VkPhysicalDeviceShaderDemoteToHelperInvocationFeatures),
                    sizeof(VkPhysicalDeviceShaderDemoteToHelperInvocationFeatures)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_DRAW_PARAMETERS_FEATURES:
            return {alignof(VkPhysicalDeviceShaderDrawParametersFeatures), sizeof(VkPhysicalDeviceShaderDrawParametersFeatures)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_EXPECT_ASSUME_FEATURES:
            return {alignof(VkPhysicalDeviceShaderExpectAssumeFeatures), sizeof(VkPhysicalDeviceShaderExpectAssumeFeatures)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_FLOAT16_INT8_FEATURES:
            return {alignof(VkPhysicalDeviceShaderFloat16Int8Features), sizeof(VkPhysicalDeviceShaderFloat16Int8Features)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_FLOAT_CONTROLS_2_FEATURES:
            return {alignof(VkPhysicalDeviceShaderFloatControls2Features), sizeof(VkPhysicalDeviceShaderFloatControls2Features)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_IMAGE_ATOMIC_INT64_FEATURES_EXT:
            return {alignof(VkPhysicalDeviceShaderImageAtomicInt64FeaturesEXT),
                    sizeof(VkPhysicalDeviceShaderImageAtomicInt64FeaturesEXT)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_INTEGER_DOT_PRODUCT_FEATURES:
            return {alignof(VkPhysicalDeviceShaderIntegerDotProductFeatures),
                    sizeof(VkPhysicalDeviceShaderIntegerDotProductFeatures)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_SUBGROUP_EXTENDED_TYPES_FEATURES:
            return {alignof(VkPhysicalDeviceShaderSubgroupExtendedTypesFeatures),
                    sizeof(VkPhysicalDeviceShaderSubgroupExtendedTypesFeatures)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_SUBGROUP_ROTATE_FEATURES:
            return {alignof(VkPhysicalDeviceShaderSubgroupRotateFeatures), sizeof(VkPhysicalDeviceShaderSubgroupRotateFeatures)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_TERMINATE_INVOCATION_FEATURES:
            return {alignof(VkPhysicalDeviceShaderTerminateInvocationFeatures),
                    sizeof(VkPhysicalDeviceShaderTerminateInvocationFeatures)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SUBGROUP_SIZE_CONTROL_FEATURES:
            return {alignof(VkPhysicalDeviceSubgroupSizeControlFeatures), sizeof(VkPhysicalDeviceSubgroupSizeControlFeatures)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SYNCHRONIZATION_2_FEATURES:
            return {alignof(VkPhysicalDeviceSynchronization2Features), sizeof(VkPhysicalDeviceSynchronization2Features)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TEXEL_BUFFER_ALIGNMENT_FEATURES_EXT:
            return {alignof(VkPhysicalDeviceTexelBufferAlignmentFeaturesEXT),
                    sizeof(VkPhysicalDeviceTexelBufferAlignmentFeaturesEXT)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TEXTURE_COMPRESSION_ASTC_HDR_FEATURES:
            return {alignof(VkPhysicalDeviceTextureCompressionASTCHDRFeatures),
                    sizeof(VkPhysicalDeviceTextureCompressionASTCHDRFeatures)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TIMELINE_SEMAPHORE_FEATURES:
            return {alignof(VkPhysicalDeviceTimelineSemaphoreFeatures), sizeof(VkPhysicalDeviceTimelineSemaphoreFeatures)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_UNIFORM_BUFFER_STANDARD_LAYOUT_FEATURES:
            return {alignof(VkPhysicalDeviceUniformBufferStandardLayoutFeatures),
                    sizeof(VkPhysicalDeviceUniformBufferStandardLayoutFeatures)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VARIABLE_POINTERS_FEATURES:
            return {alignof(VkPhysicalDeviceVariablePointersFeatures), sizeof(VkPhysicalDeviceVariablePointersFeatures)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VERTEX_ATTRIBUTE_DIVISOR_FEATURES:
            return {alignof(VkPhysicalDeviceVertexAttributeDivisorFeatures),
                    sizeof(VkPhysicalDeviceVertexAttributeDivisorFeatures)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VERTEX_INPUT_DYNAMIC_STATE_FEATURES_EXT:
            return {alignof(VkPhysicalDeviceVertexInputDynamicStateFeaturesEXT),
                    sizeof(VkPhysicalDeviceVertexInputDynamicStateFeaturesEXT)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VULKAN_1_1_FEATURES:
            return {alignof(VkPhysicalDeviceVulkan11Features), sizeof(VkPhysicalDeviceVulkan11Features)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VULKAN_1_2_FEATURES:
            return {alignof(VkPhysicalDeviceVulkan12Features), sizeof(VkPhysicalDeviceVulkan12Features)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VULKAN_1_3_FEATURES:
            return {alignof(VkPhysicalDeviceVulkan13Features), sizeof(VkPhysicalDeviceVulkan13Features)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VULKAN_1_4_FEATURES:
            return {alignof(VkPhysicalDeviceVulkan14Features), sizeof(VkPhysicalDeviceVulkan14Features)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VULKAN_MEMORY_MODEL_FEATURES:
            return {alignof(VkPhysicalDeviceVulkanMemoryModelFeatures), sizeof(VkPhysicalDeviceVulkanMemoryModelFeatures)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VULKAN_SC_1_0_FEATURES:
            return {alignof(VkPhysicalDeviceVulkanSC10Features), sizeof(VkPhysicalDeviceVulkanSC10Features)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_YCBCR_2_PLANE_444_FORMATS_FEATURES_EXT:
            return {alignof(VkPhysicalDeviceYcbcr2Plane444FormatsFeaturesEXT),
                    sizeof(VkPhysicalDeviceYcbcr2Plane444FormatsFeaturesEXT)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_YCBCR_IMAGE_ARRAYS_FEATURES_EXT:
            return {alignof(VkPhysicalDeviceYcbcrImageArraysFeaturesEXT), sizeof(VkPhysicalDeviceYcbcrImageArraysFeaturesEXT)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ZERO_INITIALIZE_WORKGROUP_MEMORY_FEATURES:
            return {alignof(VkPhysicalDeviceZeroInitializeWorkgroupMemoryFeatures),
                    sizeof(VkPhysicalDeviceZeroInitializeWorkgroupMemoryFeatures)};

        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPhysicalDeviceProperties2>(VkStructureType type) {
    switch (type) {
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_BLEND_OPERATION_ADVANCED_PROPERTIES_EXT:
            return {alignof(VkPhysicalDeviceBlendOperationAdvancedPropertiesEXT),
                    sizeof(VkPhysicalDeviceBlendOperationAdvancedPropertiesEXT)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_CONSERVATIVE_RASTERIZATION_PROPERTIES_EXT:
            return {alignof(VkPhysicalDeviceConservativeRasterizationPropertiesEXT),
                    sizeof(VkPhysicalDeviceConservativeRasterizationPropertiesEXT)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_CUSTOM_BORDER_COLOR_PROPERTIES_EXT:
            return {alignof(VkPhysicalDeviceCustomBorderColorPropertiesEXT),
                    sizeof(VkPhysicalDeviceCustomBorderColorPropertiesEXT)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DEPTH_STENCIL_RESOLVE_PROPERTIES:
            return {alignof(VkPhysicalDeviceDepthStencilResolveProperties), sizeof(VkPhysicalDeviceDepthStencilResolveProperties)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DESCRIPTOR_INDEXING_PROPERTIES:
            return {alignof(VkPhysicalDeviceDescriptorIndexingProperties), sizeof(VkPhysicalDeviceDescriptorIndexingProperties)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DISCARD_RECTANGLE_PROPERTIES_EXT:
            return {alignof(VkPhysicalDeviceDiscardRectanglePropertiesEXT), sizeof(VkPhysicalDeviceDiscardRectanglePropertiesEXT)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DRIVER_PROPERTIES:
            return {alignof(VkPhysicalDeviceDriverProperties), sizeof(VkPhysicalDeviceDriverProperties)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTERNAL_MEMORY_HOST_PROPERTIES_EXT:
            return {alignof(VkPhysicalDeviceExternalMemoryHostPropertiesEXT),
                    sizeof(VkPhysicalDeviceExternalMemoryHostPropertiesEXT)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FLOAT_CONTROLS_PROPERTIES:
            return {alignof(VkPhysicalDeviceFloatControlsProperties), sizeof(VkPhysicalDeviceFloatControlsProperties)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_SHADING_RATE_PROPERTIES_KHR:
            return {alignof(VkPhysicalDeviceFragmentShadingRatePropertiesKHR),
                    sizeof(VkPhysicalDeviceFragmentShadingRatePropertiesKHR)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_HOST_IMAGE_COPY_PROPERTIES:
            return {alignof(VkPhysicalDeviceHostImageCopyProperties), sizeof(VkPhysicalDeviceHostImageCopyProperties)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ID_PROPERTIES:
            return {alignof(VkPhysicalDeviceIDProperties), sizeof(VkPhysicalDeviceIDProperties)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_INLINE_UNIFORM_BLOCK_PROPERTIES:
            return {alignof(VkPhysicalDeviceInlineUniformBlockProperties), sizeof(VkPhysicalDeviceInlineUniformBlockProperties)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_LINE_RASTERIZATION_PROPERTIES:
            return {alignof(VkPhysicalDeviceLineRasterizationProperties), sizeof(VkPhysicalDeviceLineRasterizationProperties)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MAINTENANCE_3_PROPERTIES:
            return {alignof(VkPhysicalDeviceMaintenance3Properties), sizeof(VkPhysicalDeviceMaintenance3Properties)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MAINTENANCE_4_PROPERTIES:
            return {alignof(VkPhysicalDeviceMaintenance4Properties), sizeof(VkPhysicalDeviceMaintenance4Properties)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MAINTENANCE_5_PROPERTIES:
            return {alignof(VkPhysicalDeviceMaintenance5Properties), sizeof(VkPhysicalDeviceMaintenance5Properties)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MAINTENANCE_6_PROPERTIES:
            return {alignof(VkPhysicalDeviceMaintenance6Properties), sizeof(VkPhysicalDeviceMaintenance6Properties)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MULTIVIEW_PROPERTIES:
            return {alignof(VkPhysicalDeviceMultiviewProperties), sizeof(VkPhysicalDeviceMultiviewProperties)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PCI_BUS_INFO_PROPERTIES_EXT:
            return {alignof(VkPhysicalDevicePCIBusInfoPropertiesEXT), sizeof(VkPhysicalDevicePCIBusInfoPropertiesEXT)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PERFORMANCE_QUERY_PROPERTIES_KHR:
            return {alignof(VkPhysicalDevicePerformanceQueryPropertiesKHR), sizeof(VkPhysicalDevicePerformanceQueryPropertiesKHR)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PIPELINE_ROBUSTNESS_PROPERTIES:
            return {alignof(VkPhysicalDevicePipelineRobustnessProperties), sizeof(VkPhysicalDevicePipelineRobustnessProperties)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_POINT_CLIPPING_PROPERTIES:
            return {alignof(VkPhysicalDevicePointClippingProperties), sizeof(VkPhysicalDevicePointClippingProperties)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PROTECTED_MEMORY_PROPERTIES:
            return {alignof(VkPhysicalDeviceProtectedMemoryProperties), sizeof(VkPhysicalDeviceProtectedMemoryProperties)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PUSH_DESCRIPTOR_PROPERTIES:
            return {alignof(VkPhysicalDevicePushDescriptorProperties), sizeof(VkPhysicalDevicePushDescriptorProperties)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ROBUSTNESS_2_PROPERTIES_KHR:
            return {alignof(VkPhysicalDeviceRobustness2PropertiesKHR), sizeof(VkPhysicalDeviceRobustness2PropertiesKHR)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SAMPLE_LOCATIONS_PROPERTIES_EXT:
            return {alignof(VkPhysicalDeviceSampleLocationsPropertiesEXT), sizeof(VkPhysicalDeviceSampleLocationsPropertiesEXT)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SAMPLER_FILTER_MINMAX_PROPERTIES:
            return {alignof(VkPhysicalDeviceSamplerFilterMinmaxProperties), sizeof(VkPhysicalDeviceSamplerFilterMinmaxProperties)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_INTEGER_DOT_PRODUCT_PROPERTIES:
            return {alignof(VkPhysicalDeviceShaderIntegerDotProductProperties),
                    sizeof(VkPhysicalDeviceShaderIntegerDotProductProperties)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SUBGROUP_PROPERTIES:
            return {alignof(VkPhysicalDeviceSubgroupProperties), sizeof(VkPhysicalDeviceSubgroupProperties)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SUBGROUP_SIZE_CONTROL_PROPERTIES:
            return {alignof(VkPhysicalDeviceSubgroupSizeControlProperties), sizeof(VkPhysicalDeviceSubgroupSizeControlProperties)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TEXEL_BUFFER_ALIGNMENT_PROPERTIES:
            return {alignof(VkPhysicalDeviceTexelBufferAlignmentProperties),
                    sizeof(VkPhysicalDeviceTexelBufferAlignmentProperties)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TIMELINE_SEMAPHORE_PROPERTIES:
            return {alignof(VkPhysicalDeviceTimelineSemaphoreProperties), sizeof(VkPhysicalDeviceTimelineSemaphoreProperties)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VERTEX_ATTRIBUTE_DIVISOR_PROPERTIES:
            return {alignof(VkPhysicalDeviceVertexAttributeDivisorProperties),
                    sizeof(VkPhysicalDeviceVertexAttributeDivisorProperties)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VULKAN_1_1_PROPERTIES:
            return {alignof(VkPhysicalDeviceVulkan11Properties), sizeof(VkPhysicalDeviceVulkan11Properties)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VULKAN_1_2_PROPERTIES:
            return {alignof(VkPhysicalDeviceVulkan12Properties), sizeof(VkPhysicalDeviceVulkan12Properties)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VULKAN_1_3_PROPERTIES:
            return {alignof(VkPhysicalDeviceVulkan13Properties), sizeof(VkPhysicalDeviceVulkan13Properties)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VULKAN_1_4_PROPERTIES:
            return {alignof(VkPhysicalDeviceVulkan14Properties), sizeof(VkPhysicalDeviceVulkan14Properties)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VULKAN_SC_1_0_PROPERTIES:
            return {alignof(VkPhysicalDeviceVulkanSC10Properties), sizeof(VkPhysicalDeviceVulkanSC10Properties)};

        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkFormatProperties2>(VkStructureType type) {
    switch (type) {
        case VK_STRUCTURE_TYPE_DRM_FORMAT_MODIFIER_PROPERTIES_LIST_2_EXT:
            return {alignof(VkDrmFormatModifierPropertiesList2EXT), sizeof(VkDrmFormatModifierPropertiesList2EXT)};
        case VK_STRUCTURE_TYPE_DRM_FORMAT_MODIFIER_PROPERTIES_LIST_EXT:
            return {alignof(VkDrmFormatModifierPropertiesListEXT), sizeof(VkDrmFormatModifierPropertiesListEXT)};
        case VK_STRUCTURE_TYPE_FORMAT_PROPERTIES_3:
            return {alignof(VkFormatProperties3), sizeof(VkFormatProperties3)};

        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkImageFormatProperties2>(VkStructureType type) {
    switch (type) {
        case VK_STRUCTURE_TYPE_EXTERNAL_IMAGE_FORMAT_PROPERTIES:
            return {alignof(VkExternalImageFormatProperties), sizeof(VkExternalImageFormatProperties)};
        case VK_STRUCTURE_TYPE_FILTER_CUBIC_IMAGE_VIEW_IMAGE_FORMAT_PROPERTIES_EXT:
            return {alignof(VkFilterCubicImageViewImageFormatPropertiesEXT),
                    sizeof(VkFilterCubicImageViewImageFormatPropertiesEXT)};
        case VK_STRUCTURE_TYPE_HOST_IMAGE_COPY_DEVICE_PERFORMANCE_QUERY:
            return {alignof(VkHostImageCopyDevicePerformanceQuery), sizeof(VkHostImageCopyDevicePerformanceQuery)};
        case VK_STRUCTURE_TYPE_SAMPLER_YCBCR_CONVERSION_IMAGE_FORMAT_PROPERTIES:
            return {alignof(VkSamplerYcbcrConversionImageFormatProperties), sizeof(VkSamplerYcbcrConversionImageFormatProperties)};

        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPhysicalDeviceImageFormatInfo2>(VkStructureType type) {
    switch (type) {
        case VK_STRUCTURE_TYPE_IMAGE_FORMAT_LIST_CREATE_INFO:
            return {alignof(VkImageFormatListCreateInfo), sizeof(VkImageFormatListCreateInfo)};
        case VK_STRUCTURE_TYPE_IMAGE_STENCIL_USAGE_CREATE_INFO:
            return {alignof(VkImageStencilUsageCreateInfo), sizeof(VkImageStencilUsageCreateInfo)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTERNAL_IMAGE_FORMAT_INFO:
            return {alignof(VkPhysicalDeviceExternalImageFormatInfo), sizeof(VkPhysicalDeviceExternalImageFormatInfo)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_DRM_FORMAT_MODIFIER_INFO_EXT:
            return {alignof(VkPhysicalDeviceImageDrmFormatModifierInfoEXT), sizeof(VkPhysicalDeviceImageDrmFormatModifierInfoEXT)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_VIEW_IMAGE_FORMAT_INFO_EXT:
            return {alignof(VkPhysicalDeviceImageViewImageFormatInfoEXT), sizeof(VkPhysicalDeviceImageViewImageFormatInfoEXT)};

        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkQueueFamilyProperties2>(VkStructureType type) {
    switch (type) {
        case VK_STRUCTURE_TYPE_QUEUE_FAMILY_GLOBAL_PRIORITY_PROPERTIES:
            return {alignof(VkQueueFamilyGlobalPriorityProperties), sizeof(VkQueueFamilyGlobalPriorityProperties)};

        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPhysicalDeviceMemoryProperties2>(VkStructureType type) {
    switch (type) {
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MEMORY_BUDGET_PROPERTIES_EXT:
            return {alignof(VkPhysicalDeviceMemoryBudgetPropertiesEXT), sizeof(VkPhysicalDeviceMemoryBudgetPropertiesEXT)};

        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkImageViewUsageCreateInfo>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPhysicalDeviceProtectedMemoryFeatures>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPhysicalDeviceProtectedMemoryProperties>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkDeviceQueueInfo2>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkProtectedSubmitInfo>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkBindImagePlaneMemoryInfo>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkImagePlaneMemoryRequirementsInfo>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkExternalMemoryProperties>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPhysicalDeviceExternalImageFormatInfo>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkExternalImageFormatProperties>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPhysicalDeviceExternalBufferInfo>(VkStructureType type) {
    switch (type) {
        case VK_STRUCTURE_TYPE_BUFFER_USAGE_FLAGS_2_CREATE_INFO:
            return {alignof(VkBufferUsageFlags2CreateInfo), sizeof(VkBufferUsageFlags2CreateInfo)};

        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkExternalBufferProperties>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPhysicalDeviceIDProperties>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkExternalMemoryImageCreateInfo>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkExternalMemoryBufferCreateInfo>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkExportMemoryAllocateInfo>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPhysicalDeviceExternalFenceInfo>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkExternalFenceProperties>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkExportFenceCreateInfo>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkExportSemaphoreCreateInfo>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPhysicalDeviceExternalSemaphoreInfo>(VkStructureType type) {
    switch (type) {
        case VK_STRUCTURE_TYPE_SEMAPHORE_TYPE_CREATE_INFO:
            return {alignof(VkSemaphoreTypeCreateInfo), sizeof(VkSemaphoreTypeCreateInfo)};

        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkExternalSemaphoreProperties>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPhysicalDeviceSubgroupProperties>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPhysicalDevice16BitStorageFeatures>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPhysicalDeviceVariablePointersFeatures>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPhysicalDeviceMaintenance3Properties>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkDescriptorSetLayoutSupport>(VkStructureType type) {
    switch (type) {
        case VK_STRUCTURE_TYPE_DESCRIPTOR_SET_VARIABLE_DESCRIPTOR_COUNT_LAYOUT_SUPPORT:
            return {alignof(VkDescriptorSetVariableDescriptorCountLayoutSupport),
                    sizeof(VkDescriptorSetVariableDescriptorCountLayoutSupport)};

        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkSamplerYcbcrConversionCreateInfo>(VkStructureType type) {
    switch (type) {
#ifdef VK_USE_PLATFORM_SCREEN_QNX
        case VK_STRUCTURE_TYPE_EXTERNAL_FORMAT_QNX:
            return {alignof(VkExternalFormatQNX), sizeof(VkExternalFormatQNX)};
#endif  // VK_USE_PLATFORM_SCREEN_QNX

        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkSamplerYcbcrConversionInfo>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPhysicalDeviceSamplerYcbcrConversionFeatures>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkSamplerYcbcrConversionImageFormatProperties>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkDeviceGroupRenderPassBeginInfo>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPhysicalDevicePointClippingProperties>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkInputAttachmentAspectReference>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkRenderPassInputAttachmentAspectCreateInfo>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPipelineTessellationDomainOriginStateCreateInfo>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkRenderPassMultiviewCreateInfo>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPhysicalDeviceMultiviewFeatures>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPhysicalDeviceMultiviewProperties>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPhysicalDeviceShaderDrawParametersFeatures>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPhysicalDeviceVulkan11Features>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPhysicalDeviceVulkan11Properties>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPhysicalDeviceVulkan12Features>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkConformanceVersion>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPhysicalDeviceVulkan12Properties>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkImageFormatListCreateInfo>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPhysicalDeviceDriverProperties>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPhysicalDeviceVulkanMemoryModelFeatures>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPhysicalDeviceHostQueryResetFeatures>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPhysicalDeviceTimelineSemaphoreFeatures>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPhysicalDeviceTimelineSemaphoreProperties>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkSemaphoreTypeCreateInfo>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkTimelineSemaphoreSubmitInfo>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkSemaphoreWaitInfo>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkSemaphoreSignalInfo>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPhysicalDeviceBufferDeviceAddressFeatures>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkBufferDeviceAddressInfo>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkBufferOpaqueCaptureAddressCreateInfo>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkMemoryOpaqueCaptureAddressAllocateInfo>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkDeviceMemoryOpaqueCaptureAddressInfo>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPhysicalDevice8BitStorageFeatures>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPhysicalDeviceShaderAtomicInt64Features>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPhysicalDeviceShaderFloat16Int8Features>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPhysicalDeviceFloatControlsProperties>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkDescriptorSetLayoutBindingFlagsCreateInfo>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPhysicalDeviceDescriptorIndexingFeatures>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPhysicalDeviceDescriptorIndexingProperties>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkDescriptorSetVariableDescriptorCountAllocateInfo>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkDescriptorSetVariableDescriptorCountLayoutSupport>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPhysicalDeviceScalarBlockLayoutFeatures>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkSamplerReductionModeCreateInfo>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPhysicalDeviceSamplerFilterMinmaxProperties>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPhysicalDeviceUniformBufferStandardLayoutFeatures>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPhysicalDeviceShaderSubgroupExtendedTypesFeatures>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkAttachmentDescription2>(VkStructureType type) {
    switch (type) {
        case VK_STRUCTURE_TYPE_ATTACHMENT_DESCRIPTION_STENCIL_LAYOUT:
            return {alignof(VkAttachmentDescriptionStencilLayout), sizeof(VkAttachmentDescriptionStencilLayout)};

        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkAttachmentReference2>(VkStructureType type) {
    switch (type) {
        case VK_STRUCTURE_TYPE_ATTACHMENT_REFERENCE_STENCIL_LAYOUT:
            return {alignof(VkAttachmentReferenceStencilLayout), sizeof(VkAttachmentReferenceStencilLayout)};

        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkSubpassDescription2>(VkStructureType type) {
    switch (type) {
        case VK_STRUCTURE_TYPE_FRAGMENT_SHADING_RATE_ATTACHMENT_INFO_KHR:
            return {alignof(VkFragmentShadingRateAttachmentInfoKHR), sizeof(VkFragmentShadingRateAttachmentInfoKHR)};
        case VK_STRUCTURE_TYPE_SUBPASS_DESCRIPTION_DEPTH_STENCIL_RESOLVE:
            return {alignof(VkSubpassDescriptionDepthStencilResolve), sizeof(VkSubpassDescriptionDepthStencilResolve)};

        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkSubpassDependency2>(VkStructureType type) {
    switch (type) {
        case VK_STRUCTURE_TYPE_MEMORY_BARRIER_2:
            return {alignof(VkMemoryBarrier2), sizeof(VkMemoryBarrier2)};

        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkRenderPassCreateInfo2>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkSubpassBeginInfo>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkSubpassEndInfo>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkSubpassDescriptionDepthStencilResolve>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPhysicalDeviceDepthStencilResolveProperties>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkImageStencilUsageCreateInfo>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPhysicalDeviceImagelessFramebufferFeatures>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkFramebufferAttachmentImageInfo>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkFramebufferAttachmentsCreateInfo>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkRenderPassAttachmentBeginInfo>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPhysicalDeviceSeparateDepthStencilLayoutsFeatures>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkAttachmentReferenceStencilLayout>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkAttachmentDescriptionStencilLayout>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPhysicalDeviceVulkan13Features>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPhysicalDeviceVulkan13Properties>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPhysicalDeviceToolProperties>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPhysicalDevicePrivateDataFeatures>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkDevicePrivateDataCreateInfo>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPrivateDataSlotCreateInfo>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkMemoryBarrier2>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkBufferMemoryBarrier2>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkImageMemoryBarrier2>(VkStructureType type) {
    switch (type) {
        case VK_STRUCTURE_TYPE_SAMPLE_LOCATIONS_INFO_EXT:
            return {alignof(VkSampleLocationsInfoEXT), sizeof(VkSampleLocationsInfoEXT)};

        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkDependencyInfo>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkSemaphoreSubmitInfo>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkCommandBufferSubmitInfo>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkSubmitInfo2>(VkStructureType type) {
    switch (type) {
        case VK_STRUCTURE_TYPE_PERFORMANCE_QUERY_SUBMIT_INFO_KHR:
            return {alignof(VkPerformanceQuerySubmitInfoKHR), sizeof(VkPerformanceQuerySubmitInfoKHR)};

        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPhysicalDeviceSynchronization2Features>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkBufferCopy2>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkCopyBufferInfo2>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkImageCopy2>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkCopyImageInfo2>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkBufferImageCopy2>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkCopyBufferToImageInfo2>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkCopyImageToBufferInfo2>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPhysicalDeviceTextureCompressionASTCHDRFeatures>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkFormatProperties3>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPhysicalDeviceMaintenance4Features>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPhysicalDeviceMaintenance4Properties>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkDeviceBufferMemoryRequirements>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkDeviceImageMemoryRequirements>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPipelineCreationFeedback>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPipelineCreationFeedbackCreateInfo>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPhysicalDeviceShaderTerminateInvocationFeatures>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPhysicalDeviceShaderDemoteToHelperInvocationFeatures>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPhysicalDevicePipelineCreationCacheControlFeatures>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPhysicalDeviceZeroInitializeWorkgroupMemoryFeatures>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPhysicalDeviceImageRobustnessFeatures>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPhysicalDeviceSubgroupSizeControlFeatures>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPhysicalDeviceSubgroupSizeControlProperties>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPipelineShaderStageRequiredSubgroupSizeCreateInfo>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPhysicalDeviceInlineUniformBlockFeatures>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPhysicalDeviceInlineUniformBlockProperties>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkWriteDescriptorSetInlineUniformBlock>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkDescriptorPoolInlineUniformBlockCreateInfo>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPhysicalDeviceShaderIntegerDotProductFeatures>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPhysicalDeviceShaderIntegerDotProductProperties>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPhysicalDeviceTexelBufferAlignmentProperties>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkImageBlit2>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkBlitImageInfo2>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkImageResolve2>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkResolveImageInfo2>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkRenderingAttachmentInfo>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkRenderingInfo>(VkStructureType type) {
    switch (type) {
        case VK_STRUCTURE_TYPE_DEVICE_GROUP_RENDER_PASS_BEGIN_INFO:
            return {alignof(VkDeviceGroupRenderPassBeginInfo), sizeof(VkDeviceGroupRenderPassBeginInfo)};

        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPipelineRenderingCreateInfo>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPhysicalDeviceDynamicRenderingFeatures>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkCommandBufferInheritanceRenderingInfo>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPhysicalDeviceVulkan14Features>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPhysicalDeviceVulkan14Properties>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkDeviceQueueGlobalPriorityCreateInfo>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPhysicalDeviceGlobalPriorityQueryFeatures>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkQueueFamilyGlobalPriorityProperties>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPhysicalDeviceIndexTypeUint8Features>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkMemoryMapInfo>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkMemoryUnmapInfo>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPhysicalDeviceMaintenance5Features>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPhysicalDeviceMaintenance5Properties>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkImageSubresource2>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkDeviceImageSubresourceInfo>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkSubresourceLayout2>(VkStructureType type) {
    switch (type) {
        case VK_STRUCTURE_TYPE_SUBRESOURCE_HOST_MEMCPY_SIZE:
            return {alignof(VkSubresourceHostMemcpySize), sizeof(VkSubresourceHostMemcpySize)};

        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkBufferUsageFlags2CreateInfo>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPhysicalDeviceMaintenance6Features>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPhysicalDeviceMaintenance6Properties>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkBindMemoryStatus>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPhysicalDeviceHostImageCopyFeatures>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPhysicalDeviceHostImageCopyProperties>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkMemoryToImageCopy>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkImageToMemoryCopy>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkCopyMemoryToImageInfo>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkCopyImageToMemoryInfo>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkCopyImageToImageInfo>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkHostImageLayoutTransitionInfo>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkSubresourceHostMemcpySize>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkHostImageCopyDevicePerformanceQuery>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPhysicalDeviceShaderSubgroupRotateFeatures>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPhysicalDeviceShaderFloatControls2Features>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPhysicalDeviceShaderExpectAssumeFeatures>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPipelineCreateFlags2CreateInfo>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPhysicalDevicePushDescriptorProperties>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkBindDescriptorSetsInfo>(VkStructureType type) {
    switch (type) {
        case VK_STRUCTURE_TYPE_PIPELINE_LAYOUT_CREATE_INFO:
            return {alignof(VkPipelineLayoutCreateInfo), sizeof(VkPipelineLayoutCreateInfo)};

        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPushConstantsInfo>(VkStructureType type) {
    switch (type) {
        case VK_STRUCTURE_TYPE_PIPELINE_LAYOUT_CREATE_INFO:
            return {alignof(VkPipelineLayoutCreateInfo), sizeof(VkPipelineLayoutCreateInfo)};

        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPushDescriptorSetInfo>(VkStructureType type) {
    switch (type) {
        case VK_STRUCTURE_TYPE_PIPELINE_LAYOUT_CREATE_INFO:
            return {alignof(VkPipelineLayoutCreateInfo), sizeof(VkPipelineLayoutCreateInfo)};

        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPhysicalDevicePipelineProtectedAccessFeatures>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPhysicalDevicePipelineRobustnessFeatures>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPhysicalDevicePipelineRobustnessProperties>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPipelineRobustnessCreateInfo>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPhysicalDeviceLineRasterizationFeatures>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPhysicalDeviceLineRasterizationProperties>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPipelineRasterizationLineStateCreateInfo>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPhysicalDeviceVertexAttributeDivisorProperties>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkVertexInputBindingDivisorDescription>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPipelineVertexInputDivisorStateCreateInfo>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPhysicalDeviceVertexAttributeDivisorFeatures>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkRenderingAreaInfo>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPhysicalDeviceDynamicRenderingLocalReadFeatures>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkRenderingAttachmentLocationInfo>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkRenderingInputAttachmentIndexInfo>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPhysicalDeviceVulkanSC10Features>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPhysicalDeviceVulkanSC10Properties>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPipelinePoolSize>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkDeviceObjectReservationCreateInfo>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkCommandPoolMemoryReservationCreateInfo>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkCommandPoolMemoryConsumption>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkFaultData>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkFaultCallbackInfo>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPipelineOfflineCreateInfo>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPipelineCacheStageValidationIndexEntry>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPipelineCacheSafetyCriticalIndexEntry>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPipelineCacheHeaderVersionSafetyCriticalOne>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkSurfaceCapabilitiesKHR>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkSurfaceFormatKHR>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkSwapchainCreateInfoKHR>(VkStructureType type) {
    switch (type) {
        case VK_STRUCTURE_TYPE_DEVICE_GROUP_SWAPCHAIN_CREATE_INFO_KHR:
            return {alignof(VkDeviceGroupSwapchainCreateInfoKHR), sizeof(VkDeviceGroupSwapchainCreateInfoKHR)};
        case VK_STRUCTURE_TYPE_IMAGE_FORMAT_LIST_CREATE_INFO:
            return {alignof(VkImageFormatListCreateInfo), sizeof(VkImageFormatListCreateInfo)};
        case VK_STRUCTURE_TYPE_SWAPCHAIN_COUNTER_CREATE_INFO_EXT:
            return {alignof(VkSwapchainCounterCreateInfoEXT), sizeof(VkSwapchainCounterCreateInfoEXT)};

        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPresentInfoKHR>(VkStructureType type) {
    switch (type) {
        case VK_STRUCTURE_TYPE_DEVICE_GROUP_PRESENT_INFO_KHR:
            return {alignof(VkDeviceGroupPresentInfoKHR), sizeof(VkDeviceGroupPresentInfoKHR)};
        case VK_STRUCTURE_TYPE_DISPLAY_PRESENT_INFO_KHR:
            return {alignof(VkDisplayPresentInfoKHR), sizeof(VkDisplayPresentInfoKHR)};
        case VK_STRUCTURE_TYPE_PRESENT_REGIONS_KHR:
            return {alignof(VkPresentRegionsKHR), sizeof(VkPresentRegionsKHR)};

        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkImageSwapchainCreateInfoKHR>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkBindImageMemorySwapchainInfoKHR>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkAcquireNextImageInfoKHR>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkDeviceGroupPresentCapabilitiesKHR>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkDeviceGroupPresentInfoKHR>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkDeviceGroupSwapchainCreateInfoKHR>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkDisplayModeParametersKHR>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkDisplayModeCreateInfoKHR>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkDisplayModePropertiesKHR>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkDisplayPlaneCapabilitiesKHR>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkDisplayPlanePropertiesKHR>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkDisplayPropertiesKHR>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkDisplaySurfaceCreateInfoKHR>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkDisplayPresentInfoKHR>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkImportMemoryFdInfoKHR>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkMemoryFdPropertiesKHR>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkMemoryGetFdInfoKHR>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkImportSemaphoreFdInfoKHR>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkSemaphoreGetFdInfoKHR>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkRectLayerKHR>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPresentRegionKHR>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPresentRegionsKHR>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkSharedPresentSurfaceCapabilitiesKHR>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkImportFenceFdInfoKHR>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkFenceGetFdInfoKHR>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPhysicalDevicePerformanceQueryFeaturesKHR>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPhysicalDevicePerformanceQueryPropertiesKHR>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPerformanceCounterKHR>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPerformanceCounterDescriptionKHR>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkQueryPoolPerformanceCreateInfoKHR>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPerformanceCounterResultKHR>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkAcquireProfilingLockInfoKHR>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPerformanceQuerySubmitInfoKHR>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPerformanceQueryReservationInfoKHR>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPhysicalDeviceSurfaceInfo2KHR>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkSurfaceCapabilities2KHR>(VkStructureType type) {
    switch (type) {
        case VK_STRUCTURE_TYPE_SHARED_PRESENT_SURFACE_CAPABILITIES_KHR:
            return {alignof(VkSharedPresentSurfaceCapabilitiesKHR), sizeof(VkSharedPresentSurfaceCapabilitiesKHR)};

        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkSurfaceFormat2KHR>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkDisplayProperties2KHR>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkDisplayPlaneProperties2KHR>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkDisplayModeProperties2KHR>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkDisplayPlaneInfo2KHR>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkDisplayPlaneCapabilities2KHR>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPhysicalDeviceShaderClockFeaturesKHR>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkFragmentShadingRateAttachmentInfoKHR>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPipelineFragmentShadingRateStateCreateInfoKHR>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPhysicalDeviceFragmentShadingRateFeaturesKHR>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPhysicalDeviceFragmentShadingRatePropertiesKHR>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPhysicalDeviceFragmentShadingRateKHR>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkRefreshObjectKHR>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkRefreshObjectListKHR>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkCalibratedTimestampInfoKHR>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkImageViewASTCDecodeModeEXT>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPhysicalDeviceASTCDecodeFeaturesEXT>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkSurfaceCapabilities2EXT>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkDisplayPowerInfoEXT>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkDeviceEventInfoEXT>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkDisplayEventInfoEXT>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkSwapchainCounterCreateInfoEXT>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPhysicalDeviceDiscardRectanglePropertiesEXT>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPipelineDiscardRectangleStateCreateInfoEXT>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPhysicalDeviceConservativeRasterizationPropertiesEXT>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPipelineRasterizationConservativeStateCreateInfoEXT>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPhysicalDeviceDepthClipEnableFeaturesEXT>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPipelineRasterizationDepthClipStateCreateInfoEXT>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkXYColorEXT>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkHdrMetadataEXT>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkDebugUtilsLabelEXT>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkDebugUtilsObjectNameInfoEXT>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkDebugUtilsMessengerCallbackDataEXT>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkDebugUtilsMessengerCreateInfoEXT>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkDebugUtilsObjectTagInfoEXT>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkSampleLocationEXT>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkSampleLocationsInfoEXT>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkAttachmentSampleLocationsEXT>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkSubpassSampleLocationsEXT>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkRenderPassSampleLocationsBeginInfoEXT>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPipelineSampleLocationsStateCreateInfoEXT>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPhysicalDeviceSampleLocationsPropertiesEXT>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkMultisamplePropertiesEXT>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPhysicalDeviceBlendOperationAdvancedFeaturesEXT>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPhysicalDeviceBlendOperationAdvancedPropertiesEXT>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPipelineColorBlendAdvancedStateCreateInfoEXT>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkDrmFormatModifierPropertiesEXT>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkDrmFormatModifierPropertiesListEXT>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPhysicalDeviceImageDrmFormatModifierInfoEXT>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkImageDrmFormatModifierListCreateInfoEXT>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkImageDrmFormatModifierExplicitCreateInfoEXT>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkImageDrmFormatModifierPropertiesEXT>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkDrmFormatModifierProperties2EXT>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkDrmFormatModifierPropertiesList2EXT>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPhysicalDeviceImageViewImageFormatInfoEXT>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkFilterCubicImageViewImageFormatPropertiesEXT>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkImportMemoryHostPointerInfoEXT>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkMemoryHostPointerPropertiesEXT>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPhysicalDeviceExternalMemoryHostPropertiesEXT>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPhysicalDevicePCIBusInfoPropertiesEXT>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPhysicalDeviceShaderImageAtomicInt64FeaturesEXT>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPhysicalDeviceMemoryBudgetPropertiesEXT>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkValidationFeaturesEXT>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPhysicalDeviceFragmentShaderInterlockFeaturesEXT>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPhysicalDeviceYcbcrImageArraysFeaturesEXT>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkHeadlessSurfaceCreateInfoEXT>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPhysicalDeviceShaderAtomicFloatFeaturesEXT>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPhysicalDeviceExtendedDynamicStateFeaturesEXT>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPhysicalDeviceTexelBufferAlignmentFeaturesEXT>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPhysicalDeviceRobustness2FeaturesKHR>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPhysicalDeviceRobustness2PropertiesKHR>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkSamplerCustomBorderColorCreateInfoEXT>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPhysicalDeviceCustomBorderColorPropertiesEXT>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPhysicalDeviceCustomBorderColorFeaturesEXT>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPhysicalDeviceYcbcr2Plane444FormatsFeaturesEXT>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPhysicalDevice4444FormatsFeaturesEXT>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPhysicalDeviceVertexInputDynamicStateFeaturesEXT>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkVertexInputBindingDescription2EXT>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkVertexInputAttributeDescription2EXT>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}
#ifdef VK_USE_PLATFORM_SCI

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkExportFenceSciSyncInfoNV>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkImportFenceSciSyncInfoNV>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkFenceGetSciSyncInfoNV>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkSciSyncAttributesInfoNV>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkExportSemaphoreSciSyncInfoNV>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkImportSemaphoreSciSyncInfoNV>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkSemaphoreGetSciSyncInfoNV>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPhysicalDeviceExternalSciSyncFeaturesNV>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkExportMemorySciBufInfoNV>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkImportMemorySciBufInfoNV>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkMemoryGetSciBufInfoNV>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkMemorySciBufPropertiesNV>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPhysicalDeviceExternalMemorySciBufFeaturesNV>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}
#endif  // VK_USE_PLATFORM_SCI

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPhysicalDeviceExtendedDynamicState2FeaturesEXT>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPhysicalDeviceColorWriteEnableFeaturesEXT>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPipelineColorWriteCreateInfoEXT>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkApplicationParametersEXT>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}
#ifdef VK_USE_PLATFORM_SCI

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPhysicalDeviceExternalSciSync2FeaturesNV>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkSemaphoreSciSyncPoolCreateInfoNV>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkSemaphoreSciSyncCreateInfoNV>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkDeviceSemaphoreSciSyncPoolReservationCreateInfoNV>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}
#endif  // VK_USE_PLATFORM_SCI

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkLayerSettingEXT>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkLayerSettingsCreateInfoEXT>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}
#ifdef VK_USE_PLATFORM_SCREEN_QNX

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkScreenBufferPropertiesQNX>(VkStructureType type) {
    switch (type) {
#ifdef VK_USE_PLATFORM_SCREEN_QNX
        case VK_STRUCTURE_TYPE_SCREEN_BUFFER_FORMAT_PROPERTIES_QNX:
            return {alignof(VkScreenBufferFormatPropertiesQNX), sizeof(VkScreenBufferFormatPropertiesQNX)};
#endif  // VK_USE_PLATFORM_SCREEN_QNX

        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkScreenBufferFormatPropertiesQNX>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkImportScreenBufferInfoQNX>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkExternalFormatQNX>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPhysicalDeviceExternalMemoryScreenBufferFeaturesQNX>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}
#endif  // VK_USE_PLATFORM_SCREEN_QNX

}  // namespace vksc

// NOLINTEND
