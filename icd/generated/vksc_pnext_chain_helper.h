// *** THIS FILE IS GENERATED - DO NOT EDIT ***
// See pnext_chain_helper_generator.py for modifications

/*
 * Copyright (c) 2024 The Khronos Group Inc.
 * Copyright (c) 2024 RasterGrid Kft.
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
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ROBUSTNESS_2_FEATURES_EXT:
            return {alignof(VkPhysicalDeviceRobustness2FeaturesEXT), sizeof(VkPhysicalDeviceRobustness2FeaturesEXT)};
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
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ROBUSTNESS_2_FEATURES_EXT:
            return {alignof(VkPhysicalDeviceRobustness2FeaturesEXT), sizeof(VkPhysicalDeviceRobustness2FeaturesEXT)};
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
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ROBUSTNESS_2_PROPERTIES_EXT:
            return {alignof(VkPhysicalDeviceRobustness2PropertiesEXT), sizeof(VkPhysicalDeviceRobustness2PropertiesEXT)};
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
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkSurfaceCapabilities2KHR>(VkStructureType type) {
    switch (type) {
        case VK_STRUCTURE_TYPE_SHARED_PRESENT_SURFACE_CAPABILITIES_KHR:
            return {alignof(VkSharedPresentSurfaceCapabilitiesKHR), sizeof(VkSharedPresentSurfaceCapabilitiesKHR)};

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
#endif  // VK_USE_PLATFORM_SCREEN_QNX

}  // namespace vksc

// NOLINTEND
