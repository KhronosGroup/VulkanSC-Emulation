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

namespace vk {

template <typename BASE>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize(VkStructureType type) {
    return {0, 0};
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkBufferMemoryBarrier>(VkStructureType type) {
    switch (type) {
        case VK_STRUCTURE_TYPE_EXTERNAL_MEMORY_ACQUIRE_UNMODIFIED_EXT:
            return {alignof(VkExternalMemoryAcquireUnmodifiedEXT), sizeof(VkExternalMemoryAcquireUnmodifiedEXT)};

        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkImageMemoryBarrier>(VkStructureType type) {
    switch (type) {
        case VK_STRUCTURE_TYPE_EXTERNAL_MEMORY_ACQUIRE_UNMODIFIED_EXT:
            return {alignof(VkExternalMemoryAcquireUnmodifiedEXT), sizeof(VkExternalMemoryAcquireUnmodifiedEXT)};
        case VK_STRUCTURE_TYPE_SAMPLE_LOCATIONS_INFO_EXT:
            return {alignof(VkSampleLocationsInfoEXT), sizeof(VkSampleLocationsInfoEXT)};

        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkInstanceCreateInfo>(VkStructureType type) {
    switch (type) {
        case VK_STRUCTURE_TYPE_DEBUG_REPORT_CALLBACK_CREATE_INFO_EXT:
            return {alignof(VkDebugReportCallbackCreateInfoEXT), sizeof(VkDebugReportCallbackCreateInfoEXT)};
        case VK_STRUCTURE_TYPE_DEBUG_UTILS_MESSENGER_CREATE_INFO_EXT:
            return {alignof(VkDebugUtilsMessengerCreateInfoEXT), sizeof(VkDebugUtilsMessengerCreateInfoEXT)};
        case VK_STRUCTURE_TYPE_DIRECT_DRIVER_LOADING_LIST_LUNARG:
            return {alignof(VkDirectDriverLoadingListLUNARG), sizeof(VkDirectDriverLoadingListLUNARG)};
#ifdef VK_USE_PLATFORM_METAL_EXT
        case VK_STRUCTURE_TYPE_EXPORT_METAL_OBJECT_CREATE_INFO_EXT:
            return {alignof(VkExportMetalObjectCreateInfoEXT), sizeof(VkExportMetalObjectCreateInfoEXT)};
#endif  // VK_USE_PLATFORM_METAL_EXT
        case VK_STRUCTURE_TYPE_LAYER_SETTINGS_CREATE_INFO_EXT:
            return {alignof(VkLayerSettingsCreateInfoEXT), sizeof(VkLayerSettingsCreateInfoEXT)};
        case VK_STRUCTURE_TYPE_VALIDATION_FEATURES_EXT:
            return {alignof(VkValidationFeaturesEXT), sizeof(VkValidationFeaturesEXT)};
        case VK_STRUCTURE_TYPE_VALIDATION_FLAGS_EXT:
            return {alignof(VkValidationFlagsEXT), sizeof(VkValidationFlagsEXT)};

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
        case VK_STRUCTURE_TYPE_DEVICE_QUEUE_SHADER_CORE_CONTROL_CREATE_INFO_ARM:
            return {alignof(VkDeviceQueueShaderCoreControlCreateInfoARM), sizeof(VkDeviceQueueShaderCoreControlCreateInfoARM)};

        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkDeviceCreateInfo>(VkStructureType type) {
    switch (type) {
        case VK_STRUCTURE_TYPE_DEVICE_DEVICE_MEMORY_REPORT_CREATE_INFO_EXT:
            return {alignof(VkDeviceDeviceMemoryReportCreateInfoEXT), sizeof(VkDeviceDeviceMemoryReportCreateInfoEXT)};
        case VK_STRUCTURE_TYPE_DEVICE_DIAGNOSTICS_CONFIG_CREATE_INFO_NV:
            return {alignof(VkDeviceDiagnosticsConfigCreateInfoNV), sizeof(VkDeviceDiagnosticsConfigCreateInfoNV)};
        case VK_STRUCTURE_TYPE_DEVICE_GROUP_DEVICE_CREATE_INFO:
            return {alignof(VkDeviceGroupDeviceCreateInfo), sizeof(VkDeviceGroupDeviceCreateInfo)};
        case VK_STRUCTURE_TYPE_DEVICE_MEMORY_OVERALLOCATION_CREATE_INFO_AMD:
            return {alignof(VkDeviceMemoryOverallocationCreateInfoAMD), sizeof(VkDeviceMemoryOverallocationCreateInfoAMD)};
        case VK_STRUCTURE_TYPE_DEVICE_PIPELINE_BINARY_INTERNAL_CACHE_CONTROL_KHR:
            return {alignof(VkDevicePipelineBinaryInternalCacheControlKHR), sizeof(VkDevicePipelineBinaryInternalCacheControlKHR)};
        case VK_STRUCTURE_TYPE_DEVICE_PRIVATE_DATA_CREATE_INFO:
            return {alignof(VkDevicePrivateDataCreateInfo), sizeof(VkDevicePrivateDataCreateInfo)};
        case VK_STRUCTURE_TYPE_DEVICE_QUEUE_SHADER_CORE_CONTROL_CREATE_INFO_ARM:
            return {alignof(VkDeviceQueueShaderCoreControlCreateInfoARM), sizeof(VkDeviceQueueShaderCoreControlCreateInfoARM)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_16BIT_STORAGE_FEATURES:
            return {alignof(VkPhysicalDevice16BitStorageFeatures), sizeof(VkPhysicalDevice16BitStorageFeatures)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_4444_FORMATS_FEATURES_EXT:
            return {alignof(VkPhysicalDevice4444FormatsFeaturesEXT), sizeof(VkPhysicalDevice4444FormatsFeaturesEXT)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_8BIT_STORAGE_FEATURES:
            return {alignof(VkPhysicalDevice8BitStorageFeatures), sizeof(VkPhysicalDevice8BitStorageFeatures)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ASTC_DECODE_FEATURES_EXT:
            return {alignof(VkPhysicalDeviceASTCDecodeFeaturesEXT), sizeof(VkPhysicalDeviceASTCDecodeFeaturesEXT)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ACCELERATION_STRUCTURE_FEATURES_KHR:
            return {alignof(VkPhysicalDeviceAccelerationStructureFeaturesKHR),
                    sizeof(VkPhysicalDeviceAccelerationStructureFeaturesKHR)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ADDRESS_BINDING_REPORT_FEATURES_EXT:
            return {alignof(VkPhysicalDeviceAddressBindingReportFeaturesEXT),
                    sizeof(VkPhysicalDeviceAddressBindingReportFeaturesEXT)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_AMIGO_PROFILING_FEATURES_SEC:
            return {alignof(VkPhysicalDeviceAmigoProfilingFeaturesSEC), sizeof(VkPhysicalDeviceAmigoProfilingFeaturesSEC)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ANTI_LAG_FEATURES_AMD:
            return {alignof(VkPhysicalDeviceAntiLagFeaturesAMD), sizeof(VkPhysicalDeviceAntiLagFeaturesAMD)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ATTACHMENT_FEEDBACK_LOOP_DYNAMIC_STATE_FEATURES_EXT:
            return {alignof(VkPhysicalDeviceAttachmentFeedbackLoopDynamicStateFeaturesEXT),
                    sizeof(VkPhysicalDeviceAttachmentFeedbackLoopDynamicStateFeaturesEXT)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ATTACHMENT_FEEDBACK_LOOP_LAYOUT_FEATURES_EXT:
            return {alignof(VkPhysicalDeviceAttachmentFeedbackLoopLayoutFeaturesEXT),
                    sizeof(VkPhysicalDeviceAttachmentFeedbackLoopLayoutFeaturesEXT)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_BLEND_OPERATION_ADVANCED_FEATURES_EXT:
            return {alignof(VkPhysicalDeviceBlendOperationAdvancedFeaturesEXT),
                    sizeof(VkPhysicalDeviceBlendOperationAdvancedFeaturesEXT)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_BORDER_COLOR_SWIZZLE_FEATURES_EXT:
            return {alignof(VkPhysicalDeviceBorderColorSwizzleFeaturesEXT), sizeof(VkPhysicalDeviceBorderColorSwizzleFeaturesEXT)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_BUFFER_DEVICE_ADDRESS_FEATURES:
            return {alignof(VkPhysicalDeviceBufferDeviceAddressFeatures), sizeof(VkPhysicalDeviceBufferDeviceAddressFeatures)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_BUFFER_DEVICE_ADDRESS_FEATURES_EXT:
            return {alignof(VkPhysicalDeviceBufferDeviceAddressFeaturesEXT),
                    sizeof(VkPhysicalDeviceBufferDeviceAddressFeaturesEXT)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_CLUSTER_ACCELERATION_STRUCTURE_FEATURES_NV:
            return {alignof(VkPhysicalDeviceClusterAccelerationStructureFeaturesNV),
                    sizeof(VkPhysicalDeviceClusterAccelerationStructureFeaturesNV)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_CLUSTER_CULLING_SHADER_FEATURES_HUAWEI:
            return {alignof(VkPhysicalDeviceClusterCullingShaderFeaturesHUAWEI),
                    sizeof(VkPhysicalDeviceClusterCullingShaderFeaturesHUAWEI)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COHERENT_MEMORY_FEATURES_AMD:
            return {alignof(VkPhysicalDeviceCoherentMemoryFeaturesAMD), sizeof(VkPhysicalDeviceCoherentMemoryFeaturesAMD)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COLOR_WRITE_ENABLE_FEATURES_EXT:
            return {alignof(VkPhysicalDeviceColorWriteEnableFeaturesEXT), sizeof(VkPhysicalDeviceColorWriteEnableFeaturesEXT)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COMMAND_BUFFER_INHERITANCE_FEATURES_NV:
            return {alignof(VkPhysicalDeviceCommandBufferInheritanceFeaturesNV),
                    sizeof(VkPhysicalDeviceCommandBufferInheritanceFeaturesNV)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COMPUTE_SHADER_DERIVATIVES_FEATURES_KHR:
            return {alignof(VkPhysicalDeviceComputeShaderDerivativesFeaturesKHR),
                    sizeof(VkPhysicalDeviceComputeShaderDerivativesFeaturesKHR)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_CONDITIONAL_RENDERING_FEATURES_EXT:
            return {alignof(VkPhysicalDeviceConditionalRenderingFeaturesEXT),
                    sizeof(VkPhysicalDeviceConditionalRenderingFeaturesEXT)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COOPERATIVE_MATRIX_2_FEATURES_NV:
            return {alignof(VkPhysicalDeviceCooperativeMatrix2FeaturesNV), sizeof(VkPhysicalDeviceCooperativeMatrix2FeaturesNV)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COOPERATIVE_MATRIX_FEATURES_KHR:
            return {alignof(VkPhysicalDeviceCooperativeMatrixFeaturesKHR), sizeof(VkPhysicalDeviceCooperativeMatrixFeaturesKHR)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COOPERATIVE_MATRIX_FEATURES_NV:
            return {alignof(VkPhysicalDeviceCooperativeMatrixFeaturesNV), sizeof(VkPhysicalDeviceCooperativeMatrixFeaturesNV)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COOPERATIVE_VECTOR_FEATURES_NV:
            return {alignof(VkPhysicalDeviceCooperativeVectorFeaturesNV), sizeof(VkPhysicalDeviceCooperativeVectorFeaturesNV)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COPY_MEMORY_INDIRECT_FEATURES_NV:
            return {alignof(VkPhysicalDeviceCopyMemoryIndirectFeaturesNV), sizeof(VkPhysicalDeviceCopyMemoryIndirectFeaturesNV)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_CORNER_SAMPLED_IMAGE_FEATURES_NV:
            return {alignof(VkPhysicalDeviceCornerSampledImageFeaturesNV), sizeof(VkPhysicalDeviceCornerSampledImageFeaturesNV)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COVERAGE_REDUCTION_MODE_FEATURES_NV:
            return {alignof(VkPhysicalDeviceCoverageReductionModeFeaturesNV),
                    sizeof(VkPhysicalDeviceCoverageReductionModeFeaturesNV)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_CUBIC_CLAMP_FEATURES_QCOM:
            return {alignof(VkPhysicalDeviceCubicClampFeaturesQCOM), sizeof(VkPhysicalDeviceCubicClampFeaturesQCOM)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_CUBIC_WEIGHTS_FEATURES_QCOM:
            return {alignof(VkPhysicalDeviceCubicWeightsFeaturesQCOM), sizeof(VkPhysicalDeviceCubicWeightsFeaturesQCOM)};
#ifdef VK_ENABLE_BETA_EXTENSIONS
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_CUDA_KERNEL_LAUNCH_FEATURES_NV:
            return {alignof(VkPhysicalDeviceCudaKernelLaunchFeaturesNV), sizeof(VkPhysicalDeviceCudaKernelLaunchFeaturesNV)};
#endif  // VK_ENABLE_BETA_EXTENSIONS
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_CUSTOM_BORDER_COLOR_FEATURES_EXT:
            return {alignof(VkPhysicalDeviceCustomBorderColorFeaturesEXT), sizeof(VkPhysicalDeviceCustomBorderColorFeaturesEXT)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DEDICATED_ALLOCATION_IMAGE_ALIASING_FEATURES_NV:
            return {alignof(VkPhysicalDeviceDedicatedAllocationImageAliasingFeaturesNV),
                    sizeof(VkPhysicalDeviceDedicatedAllocationImageAliasingFeaturesNV)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DEPTH_BIAS_CONTROL_FEATURES_EXT:
            return {alignof(VkPhysicalDeviceDepthBiasControlFeaturesEXT), sizeof(VkPhysicalDeviceDepthBiasControlFeaturesEXT)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DEPTH_CLAMP_CONTROL_FEATURES_EXT:
            return {alignof(VkPhysicalDeviceDepthClampControlFeaturesEXT), sizeof(VkPhysicalDeviceDepthClampControlFeaturesEXT)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DEPTH_CLAMP_ZERO_ONE_FEATURES_KHR:
            return {alignof(VkPhysicalDeviceDepthClampZeroOneFeaturesKHR), sizeof(VkPhysicalDeviceDepthClampZeroOneFeaturesKHR)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DEPTH_CLIP_CONTROL_FEATURES_EXT:
            return {alignof(VkPhysicalDeviceDepthClipControlFeaturesEXT), sizeof(VkPhysicalDeviceDepthClipControlFeaturesEXT)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DEPTH_CLIP_ENABLE_FEATURES_EXT:
            return {alignof(VkPhysicalDeviceDepthClipEnableFeaturesEXT), sizeof(VkPhysicalDeviceDepthClipEnableFeaturesEXT)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DESCRIPTOR_BUFFER_FEATURES_EXT:
            return {alignof(VkPhysicalDeviceDescriptorBufferFeaturesEXT), sizeof(VkPhysicalDeviceDescriptorBufferFeaturesEXT)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DESCRIPTOR_INDEXING_FEATURES:
            return {alignof(VkPhysicalDeviceDescriptorIndexingFeatures), sizeof(VkPhysicalDeviceDescriptorIndexingFeatures)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DESCRIPTOR_POOL_OVERALLOCATION_FEATURES_NV:
            return {alignof(VkPhysicalDeviceDescriptorPoolOverallocationFeaturesNV),
                    sizeof(VkPhysicalDeviceDescriptorPoolOverallocationFeaturesNV)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DESCRIPTOR_SET_HOST_MAPPING_FEATURES_VALVE:
            return {alignof(VkPhysicalDeviceDescriptorSetHostMappingFeaturesVALVE),
                    sizeof(VkPhysicalDeviceDescriptorSetHostMappingFeaturesVALVE)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DEVICE_GENERATED_COMMANDS_COMPUTE_FEATURES_NV:
            return {alignof(VkPhysicalDeviceDeviceGeneratedCommandsComputeFeaturesNV),
                    sizeof(VkPhysicalDeviceDeviceGeneratedCommandsComputeFeaturesNV)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DEVICE_GENERATED_COMMANDS_FEATURES_EXT:
            return {alignof(VkPhysicalDeviceDeviceGeneratedCommandsFeaturesEXT),
                    sizeof(VkPhysicalDeviceDeviceGeneratedCommandsFeaturesEXT)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DEVICE_GENERATED_COMMANDS_FEATURES_NV:
            return {alignof(VkPhysicalDeviceDeviceGeneratedCommandsFeaturesNV),
                    sizeof(VkPhysicalDeviceDeviceGeneratedCommandsFeaturesNV)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DEVICE_MEMORY_REPORT_FEATURES_EXT:
            return {alignof(VkPhysicalDeviceDeviceMemoryReportFeaturesEXT), sizeof(VkPhysicalDeviceDeviceMemoryReportFeaturesEXT)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DIAGNOSTICS_CONFIG_FEATURES_NV:
            return {alignof(VkPhysicalDeviceDiagnosticsConfigFeaturesNV), sizeof(VkPhysicalDeviceDiagnosticsConfigFeaturesNV)};
#ifdef VK_ENABLE_BETA_EXTENSIONS
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DISPLACEMENT_MICROMAP_FEATURES_NV:
            return {alignof(VkPhysicalDeviceDisplacementMicromapFeaturesNV),
                    sizeof(VkPhysicalDeviceDisplacementMicromapFeaturesNV)};
#endif  // VK_ENABLE_BETA_EXTENSIONS
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DYNAMIC_RENDERING_FEATURES:
            return {alignof(VkPhysicalDeviceDynamicRenderingFeatures), sizeof(VkPhysicalDeviceDynamicRenderingFeatures)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DYNAMIC_RENDERING_LOCAL_READ_FEATURES:
            return {alignof(VkPhysicalDeviceDynamicRenderingLocalReadFeatures),
                    sizeof(VkPhysicalDeviceDynamicRenderingLocalReadFeatures)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DYNAMIC_RENDERING_UNUSED_ATTACHMENTS_FEATURES_EXT:
            return {alignof(VkPhysicalDeviceDynamicRenderingUnusedAttachmentsFeaturesEXT),
                    sizeof(VkPhysicalDeviceDynamicRenderingUnusedAttachmentsFeaturesEXT)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXCLUSIVE_SCISSOR_FEATURES_NV:
            return {alignof(VkPhysicalDeviceExclusiveScissorFeaturesNV), sizeof(VkPhysicalDeviceExclusiveScissorFeaturesNV)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTENDED_DYNAMIC_STATE_2_FEATURES_EXT:
            return {alignof(VkPhysicalDeviceExtendedDynamicState2FeaturesEXT),
                    sizeof(VkPhysicalDeviceExtendedDynamicState2FeaturesEXT)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTENDED_DYNAMIC_STATE_3_FEATURES_EXT:
            return {alignof(VkPhysicalDeviceExtendedDynamicState3FeaturesEXT),
                    sizeof(VkPhysicalDeviceExtendedDynamicState3FeaturesEXT)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTENDED_DYNAMIC_STATE_FEATURES_EXT:
            return {alignof(VkPhysicalDeviceExtendedDynamicStateFeaturesEXT),
                    sizeof(VkPhysicalDeviceExtendedDynamicStateFeaturesEXT)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTENDED_SPARSE_ADDRESS_SPACE_FEATURES_NV:
            return {alignof(VkPhysicalDeviceExtendedSparseAddressSpaceFeaturesNV),
                    sizeof(VkPhysicalDeviceExtendedSparseAddressSpaceFeaturesNV)};
#ifdef VK_USE_PLATFORM_ANDROID_KHR
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTERNAL_FORMAT_RESOLVE_FEATURES_ANDROID:
            return {alignof(VkPhysicalDeviceExternalFormatResolveFeaturesANDROID),
                    sizeof(VkPhysicalDeviceExternalFormatResolveFeaturesANDROID)};
#endif  // VK_USE_PLATFORM_ANDROID_KHR
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTERNAL_MEMORY_RDMA_FEATURES_NV:
            return {alignof(VkPhysicalDeviceExternalMemoryRDMAFeaturesNV), sizeof(VkPhysicalDeviceExternalMemoryRDMAFeaturesNV)};
#ifdef VK_USE_PLATFORM_SCREEN_QNX
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTERNAL_MEMORY_SCREEN_BUFFER_FEATURES_QNX:
            return {alignof(VkPhysicalDeviceExternalMemoryScreenBufferFeaturesQNX),
                    sizeof(VkPhysicalDeviceExternalMemoryScreenBufferFeaturesQNX)};
#endif  // VK_USE_PLATFORM_SCREEN_QNX
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FAULT_FEATURES_EXT:
            return {alignof(VkPhysicalDeviceFaultFeaturesEXT), sizeof(VkPhysicalDeviceFaultFeaturesEXT)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FEATURES_2:
            return {alignof(VkPhysicalDeviceFeatures2), sizeof(VkPhysicalDeviceFeatures2)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_DENSITY_MAP_2_FEATURES_EXT:
            return {alignof(VkPhysicalDeviceFragmentDensityMap2FeaturesEXT),
                    sizeof(VkPhysicalDeviceFragmentDensityMap2FeaturesEXT)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_DENSITY_MAP_FEATURES_EXT:
            return {alignof(VkPhysicalDeviceFragmentDensityMapFeaturesEXT), sizeof(VkPhysicalDeviceFragmentDensityMapFeaturesEXT)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_DENSITY_MAP_OFFSET_FEATURES_QCOM:
            return {alignof(VkPhysicalDeviceFragmentDensityMapOffsetFeaturesQCOM),
                    sizeof(VkPhysicalDeviceFragmentDensityMapOffsetFeaturesQCOM)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_SHADER_BARYCENTRIC_FEATURES_KHR:
            return {alignof(VkPhysicalDeviceFragmentShaderBarycentricFeaturesKHR),
                    sizeof(VkPhysicalDeviceFragmentShaderBarycentricFeaturesKHR)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_SHADER_INTERLOCK_FEATURES_EXT:
            return {alignof(VkPhysicalDeviceFragmentShaderInterlockFeaturesEXT),
                    sizeof(VkPhysicalDeviceFragmentShaderInterlockFeaturesEXT)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_SHADING_RATE_ENUMS_FEATURES_NV:
            return {alignof(VkPhysicalDeviceFragmentShadingRateEnumsFeaturesNV),
                    sizeof(VkPhysicalDeviceFragmentShadingRateEnumsFeaturesNV)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_SHADING_RATE_FEATURES_KHR:
            return {alignof(VkPhysicalDeviceFragmentShadingRateFeaturesKHR),
                    sizeof(VkPhysicalDeviceFragmentShadingRateFeaturesKHR)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAME_BOUNDARY_FEATURES_EXT:
            return {alignof(VkPhysicalDeviceFrameBoundaryFeaturesEXT), sizeof(VkPhysicalDeviceFrameBoundaryFeaturesEXT)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_GLOBAL_PRIORITY_QUERY_FEATURES:
            return {alignof(VkPhysicalDeviceGlobalPriorityQueryFeatures), sizeof(VkPhysicalDeviceGlobalPriorityQueryFeatures)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_GRAPHICS_PIPELINE_LIBRARY_FEATURES_EXT:
            return {alignof(VkPhysicalDeviceGraphicsPipelineLibraryFeaturesEXT),
                    sizeof(VkPhysicalDeviceGraphicsPipelineLibraryFeaturesEXT)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_HDR_VIVID_FEATURES_HUAWEI:
            return {alignof(VkPhysicalDeviceHdrVividFeaturesHUAWEI), sizeof(VkPhysicalDeviceHdrVividFeaturesHUAWEI)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_HOST_IMAGE_COPY_FEATURES:
            return {alignof(VkPhysicalDeviceHostImageCopyFeatures), sizeof(VkPhysicalDeviceHostImageCopyFeatures)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_HOST_QUERY_RESET_FEATURES:
            return {alignof(VkPhysicalDeviceHostQueryResetFeatures), sizeof(VkPhysicalDeviceHostQueryResetFeatures)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_2D_VIEW_OF_3D_FEATURES_EXT:
            return {alignof(VkPhysicalDeviceImage2DViewOf3DFeaturesEXT), sizeof(VkPhysicalDeviceImage2DViewOf3DFeaturesEXT)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_ALIGNMENT_CONTROL_FEATURES_MESA:
            return {alignof(VkPhysicalDeviceImageAlignmentControlFeaturesMESA),
                    sizeof(VkPhysicalDeviceImageAlignmentControlFeaturesMESA)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_COMPRESSION_CONTROL_FEATURES_EXT:
            return {alignof(VkPhysicalDeviceImageCompressionControlFeaturesEXT),
                    sizeof(VkPhysicalDeviceImageCompressionControlFeaturesEXT)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_COMPRESSION_CONTROL_SWAPCHAIN_FEATURES_EXT:
            return {alignof(VkPhysicalDeviceImageCompressionControlSwapchainFeaturesEXT),
                    sizeof(VkPhysicalDeviceImageCompressionControlSwapchainFeaturesEXT)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_PROCESSING_2_FEATURES_QCOM:
            return {alignof(VkPhysicalDeviceImageProcessing2FeaturesQCOM), sizeof(VkPhysicalDeviceImageProcessing2FeaturesQCOM)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_PROCESSING_FEATURES_QCOM:
            return {alignof(VkPhysicalDeviceImageProcessingFeaturesQCOM), sizeof(VkPhysicalDeviceImageProcessingFeaturesQCOM)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_ROBUSTNESS_FEATURES:
            return {alignof(VkPhysicalDeviceImageRobustnessFeatures), sizeof(VkPhysicalDeviceImageRobustnessFeatures)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_SLICED_VIEW_OF_3D_FEATURES_EXT:
            return {alignof(VkPhysicalDeviceImageSlicedViewOf3DFeaturesEXT),
                    sizeof(VkPhysicalDeviceImageSlicedViewOf3DFeaturesEXT)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_VIEW_MIN_LOD_FEATURES_EXT:
            return {alignof(VkPhysicalDeviceImageViewMinLodFeaturesEXT), sizeof(VkPhysicalDeviceImageViewMinLodFeaturesEXT)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGELESS_FRAMEBUFFER_FEATURES:
            return {alignof(VkPhysicalDeviceImagelessFramebufferFeatures), sizeof(VkPhysicalDeviceImagelessFramebufferFeatures)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_INDEX_TYPE_UINT8_FEATURES:
            return {alignof(VkPhysicalDeviceIndexTypeUint8Features), sizeof(VkPhysicalDeviceIndexTypeUint8Features)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_INHERITED_VIEWPORT_SCISSOR_FEATURES_NV:
            return {alignof(VkPhysicalDeviceInheritedViewportScissorFeaturesNV),
                    sizeof(VkPhysicalDeviceInheritedViewportScissorFeaturesNV)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_INLINE_UNIFORM_BLOCK_FEATURES:
            return {alignof(VkPhysicalDeviceInlineUniformBlockFeatures), sizeof(VkPhysicalDeviceInlineUniformBlockFeatures)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_INVOCATION_MASK_FEATURES_HUAWEI:
            return {alignof(VkPhysicalDeviceInvocationMaskFeaturesHUAWEI), sizeof(VkPhysicalDeviceInvocationMaskFeaturesHUAWEI)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_LEGACY_DITHERING_FEATURES_EXT:
            return {alignof(VkPhysicalDeviceLegacyDitheringFeaturesEXT), sizeof(VkPhysicalDeviceLegacyDitheringFeaturesEXT)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_LEGACY_VERTEX_ATTRIBUTES_FEATURES_EXT:
            return {alignof(VkPhysicalDeviceLegacyVertexAttributesFeaturesEXT),
                    sizeof(VkPhysicalDeviceLegacyVertexAttributesFeaturesEXT)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_LINE_RASTERIZATION_FEATURES:
            return {alignof(VkPhysicalDeviceLineRasterizationFeatures), sizeof(VkPhysicalDeviceLineRasterizationFeatures)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_LINEAR_COLOR_ATTACHMENT_FEATURES_NV:
            return {alignof(VkPhysicalDeviceLinearColorAttachmentFeaturesNV),
                    sizeof(VkPhysicalDeviceLinearColorAttachmentFeaturesNV)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MAINTENANCE_4_FEATURES:
            return {alignof(VkPhysicalDeviceMaintenance4Features), sizeof(VkPhysicalDeviceMaintenance4Features)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MAINTENANCE_5_FEATURES:
            return {alignof(VkPhysicalDeviceMaintenance5Features), sizeof(VkPhysicalDeviceMaintenance5Features)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MAINTENANCE_6_FEATURES:
            return {alignof(VkPhysicalDeviceMaintenance6Features), sizeof(VkPhysicalDeviceMaintenance6Features)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MAINTENANCE_7_FEATURES_KHR:
            return {alignof(VkPhysicalDeviceMaintenance7FeaturesKHR), sizeof(VkPhysicalDeviceMaintenance7FeaturesKHR)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MAINTENANCE_8_FEATURES_KHR:
            return {alignof(VkPhysicalDeviceMaintenance8FeaturesKHR), sizeof(VkPhysicalDeviceMaintenance8FeaturesKHR)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MAP_MEMORY_PLACED_FEATURES_EXT:
            return {alignof(VkPhysicalDeviceMapMemoryPlacedFeaturesEXT), sizeof(VkPhysicalDeviceMapMemoryPlacedFeaturesEXT)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MEMORY_DECOMPRESSION_FEATURES_NV:
            return {alignof(VkPhysicalDeviceMemoryDecompressionFeaturesNV), sizeof(VkPhysicalDeviceMemoryDecompressionFeaturesNV)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MEMORY_PRIORITY_FEATURES_EXT:
            return {alignof(VkPhysicalDeviceMemoryPriorityFeaturesEXT), sizeof(VkPhysicalDeviceMemoryPriorityFeaturesEXT)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MESH_SHADER_FEATURES_EXT:
            return {alignof(VkPhysicalDeviceMeshShaderFeaturesEXT), sizeof(VkPhysicalDeviceMeshShaderFeaturesEXT)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MESH_SHADER_FEATURES_NV:
            return {alignof(VkPhysicalDeviceMeshShaderFeaturesNV), sizeof(VkPhysicalDeviceMeshShaderFeaturesNV)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MULTI_DRAW_FEATURES_EXT:
            return {alignof(VkPhysicalDeviceMultiDrawFeaturesEXT), sizeof(VkPhysicalDeviceMultiDrawFeaturesEXT)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MULTISAMPLED_RENDER_TO_SINGLE_SAMPLED_FEATURES_EXT:
            return {alignof(VkPhysicalDeviceMultisampledRenderToSingleSampledFeaturesEXT),
                    sizeof(VkPhysicalDeviceMultisampledRenderToSingleSampledFeaturesEXT)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MULTIVIEW_FEATURES:
            return {alignof(VkPhysicalDeviceMultiviewFeatures), sizeof(VkPhysicalDeviceMultiviewFeatures)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MULTIVIEW_PER_VIEW_RENDER_AREAS_FEATURES_QCOM:
            return {alignof(VkPhysicalDeviceMultiviewPerViewRenderAreasFeaturesQCOM),
                    sizeof(VkPhysicalDeviceMultiviewPerViewRenderAreasFeaturesQCOM)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MULTIVIEW_PER_VIEW_VIEWPORTS_FEATURES_QCOM:
            return {alignof(VkPhysicalDeviceMultiviewPerViewViewportsFeaturesQCOM),
                    sizeof(VkPhysicalDeviceMultiviewPerViewViewportsFeaturesQCOM)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MUTABLE_DESCRIPTOR_TYPE_FEATURES_EXT:
            return {alignof(VkPhysicalDeviceMutableDescriptorTypeFeaturesEXT),
                    sizeof(VkPhysicalDeviceMutableDescriptorTypeFeaturesEXT)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_NESTED_COMMAND_BUFFER_FEATURES_EXT:
            return {alignof(VkPhysicalDeviceNestedCommandBufferFeaturesEXT),
                    sizeof(VkPhysicalDeviceNestedCommandBufferFeaturesEXT)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_NON_SEAMLESS_CUBE_MAP_FEATURES_EXT:
            return {alignof(VkPhysicalDeviceNonSeamlessCubeMapFeaturesEXT), sizeof(VkPhysicalDeviceNonSeamlessCubeMapFeaturesEXT)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_OPACITY_MICROMAP_FEATURES_EXT:
            return {alignof(VkPhysicalDeviceOpacityMicromapFeaturesEXT), sizeof(VkPhysicalDeviceOpacityMicromapFeaturesEXT)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_OPTICAL_FLOW_FEATURES_NV:
            return {alignof(VkPhysicalDeviceOpticalFlowFeaturesNV), sizeof(VkPhysicalDeviceOpticalFlowFeaturesNV)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PAGEABLE_DEVICE_LOCAL_MEMORY_FEATURES_EXT:
            return {alignof(VkPhysicalDevicePageableDeviceLocalMemoryFeaturesEXT),
                    sizeof(VkPhysicalDevicePageableDeviceLocalMemoryFeaturesEXT)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PARTITIONED_ACCELERATION_STRUCTURE_FEATURES_NV:
            return {alignof(VkPhysicalDevicePartitionedAccelerationStructureFeaturesNV),
                    sizeof(VkPhysicalDevicePartitionedAccelerationStructureFeaturesNV)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PER_STAGE_DESCRIPTOR_SET_FEATURES_NV:
            return {alignof(VkPhysicalDevicePerStageDescriptorSetFeaturesNV),
                    sizeof(VkPhysicalDevicePerStageDescriptorSetFeaturesNV)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PERFORMANCE_QUERY_FEATURES_KHR:
            return {alignof(VkPhysicalDevicePerformanceQueryFeaturesKHR), sizeof(VkPhysicalDevicePerformanceQueryFeaturesKHR)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PIPELINE_BINARY_FEATURES_KHR:
            return {alignof(VkPhysicalDevicePipelineBinaryFeaturesKHR), sizeof(VkPhysicalDevicePipelineBinaryFeaturesKHR)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PIPELINE_CREATION_CACHE_CONTROL_FEATURES:
            return {alignof(VkPhysicalDevicePipelineCreationCacheControlFeatures),
                    sizeof(VkPhysicalDevicePipelineCreationCacheControlFeatures)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PIPELINE_EXECUTABLE_PROPERTIES_FEATURES_KHR:
            return {alignof(VkPhysicalDevicePipelineExecutablePropertiesFeaturesKHR),
                    sizeof(VkPhysicalDevicePipelineExecutablePropertiesFeaturesKHR)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PIPELINE_LIBRARY_GROUP_HANDLES_FEATURES_EXT:
            return {alignof(VkPhysicalDevicePipelineLibraryGroupHandlesFeaturesEXT),
                    sizeof(VkPhysicalDevicePipelineLibraryGroupHandlesFeaturesEXT)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PIPELINE_OPACITY_MICROMAP_FEATURES_ARM:
            return {alignof(VkPhysicalDevicePipelineOpacityMicromapFeaturesARM),
                    sizeof(VkPhysicalDevicePipelineOpacityMicromapFeaturesARM)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PIPELINE_PROPERTIES_FEATURES_EXT:
            return {alignof(VkPhysicalDevicePipelinePropertiesFeaturesEXT), sizeof(VkPhysicalDevicePipelinePropertiesFeaturesEXT)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PIPELINE_PROTECTED_ACCESS_FEATURES:
            return {alignof(VkPhysicalDevicePipelineProtectedAccessFeatures),
                    sizeof(VkPhysicalDevicePipelineProtectedAccessFeatures)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PIPELINE_ROBUSTNESS_FEATURES:
            return {alignof(VkPhysicalDevicePipelineRobustnessFeatures), sizeof(VkPhysicalDevicePipelineRobustnessFeatures)};
#ifdef VK_ENABLE_BETA_EXTENSIONS
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PORTABILITY_SUBSET_FEATURES_KHR:
            return {alignof(VkPhysicalDevicePortabilitySubsetFeaturesKHR), sizeof(VkPhysicalDevicePortabilitySubsetFeaturesKHR)};
#endif  // VK_ENABLE_BETA_EXTENSIONS
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PRESENT_BARRIER_FEATURES_NV:
            return {alignof(VkPhysicalDevicePresentBarrierFeaturesNV), sizeof(VkPhysicalDevicePresentBarrierFeaturesNV)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PRESENT_ID_FEATURES_KHR:
            return {alignof(VkPhysicalDevicePresentIdFeaturesKHR), sizeof(VkPhysicalDevicePresentIdFeaturesKHR)};
#ifdef VK_ENABLE_BETA_EXTENSIONS
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PRESENT_METERING_FEATURES_NV:
            return {alignof(VkPhysicalDevicePresentMeteringFeaturesNV), sizeof(VkPhysicalDevicePresentMeteringFeaturesNV)};
#endif  // VK_ENABLE_BETA_EXTENSIONS
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PRESENT_MODE_FIFO_LATEST_READY_FEATURES_EXT:
            return {alignof(VkPhysicalDevicePresentModeFifoLatestReadyFeaturesEXT),
                    sizeof(VkPhysicalDevicePresentModeFifoLatestReadyFeaturesEXT)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PRESENT_WAIT_FEATURES_KHR:
            return {alignof(VkPhysicalDevicePresentWaitFeaturesKHR), sizeof(VkPhysicalDevicePresentWaitFeaturesKHR)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PRIMITIVE_TOPOLOGY_LIST_RESTART_FEATURES_EXT:
            return {alignof(VkPhysicalDevicePrimitiveTopologyListRestartFeaturesEXT),
                    sizeof(VkPhysicalDevicePrimitiveTopologyListRestartFeaturesEXT)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PRIMITIVES_GENERATED_QUERY_FEATURES_EXT:
            return {alignof(VkPhysicalDevicePrimitivesGeneratedQueryFeaturesEXT),
                    sizeof(VkPhysicalDevicePrimitivesGeneratedQueryFeaturesEXT)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PRIVATE_DATA_FEATURES:
            return {alignof(VkPhysicalDevicePrivateDataFeatures), sizeof(VkPhysicalDevicePrivateDataFeatures)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PROTECTED_MEMORY_FEATURES:
            return {alignof(VkPhysicalDeviceProtectedMemoryFeatures), sizeof(VkPhysicalDeviceProtectedMemoryFeatures)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PROVOKING_VERTEX_FEATURES_EXT:
            return {alignof(VkPhysicalDeviceProvokingVertexFeaturesEXT), sizeof(VkPhysicalDeviceProvokingVertexFeaturesEXT)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RGBA10X6_FORMATS_FEATURES_EXT:
            return {alignof(VkPhysicalDeviceRGBA10X6FormatsFeaturesEXT), sizeof(VkPhysicalDeviceRGBA10X6FormatsFeaturesEXT)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RASTERIZATION_ORDER_ATTACHMENT_ACCESS_FEATURES_EXT:
            return {alignof(VkPhysicalDeviceRasterizationOrderAttachmentAccessFeaturesEXT),
                    sizeof(VkPhysicalDeviceRasterizationOrderAttachmentAccessFeaturesEXT)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RAW_ACCESS_CHAINS_FEATURES_NV:
            return {alignof(VkPhysicalDeviceRawAccessChainsFeaturesNV), sizeof(VkPhysicalDeviceRawAccessChainsFeaturesNV)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RAY_QUERY_FEATURES_KHR:
            return {alignof(VkPhysicalDeviceRayQueryFeaturesKHR), sizeof(VkPhysicalDeviceRayQueryFeaturesKHR)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RAY_TRACING_INVOCATION_REORDER_FEATURES_NV:
            return {alignof(VkPhysicalDeviceRayTracingInvocationReorderFeaturesNV),
                    sizeof(VkPhysicalDeviceRayTracingInvocationReorderFeaturesNV)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RAY_TRACING_LINEAR_SWEPT_SPHERES_FEATURES_NV:
            return {alignof(VkPhysicalDeviceRayTracingLinearSweptSpheresFeaturesNV),
                    sizeof(VkPhysicalDeviceRayTracingLinearSweptSpheresFeaturesNV)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RAY_TRACING_MAINTENANCE_1_FEATURES_KHR:
            return {alignof(VkPhysicalDeviceRayTracingMaintenance1FeaturesKHR),
                    sizeof(VkPhysicalDeviceRayTracingMaintenance1FeaturesKHR)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RAY_TRACING_MOTION_BLUR_FEATURES_NV:
            return {alignof(VkPhysicalDeviceRayTracingMotionBlurFeaturesNV),
                    sizeof(VkPhysicalDeviceRayTracingMotionBlurFeaturesNV)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RAY_TRACING_PIPELINE_FEATURES_KHR:
            return {alignof(VkPhysicalDeviceRayTracingPipelineFeaturesKHR), sizeof(VkPhysicalDeviceRayTracingPipelineFeaturesKHR)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RAY_TRACING_POSITION_FETCH_FEATURES_KHR:
            return {alignof(VkPhysicalDeviceRayTracingPositionFetchFeaturesKHR),
                    sizeof(VkPhysicalDeviceRayTracingPositionFetchFeaturesKHR)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RAY_TRACING_VALIDATION_FEATURES_NV:
            return {alignof(VkPhysicalDeviceRayTracingValidationFeaturesNV),
                    sizeof(VkPhysicalDeviceRayTracingValidationFeaturesNV)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RELAXED_LINE_RASTERIZATION_FEATURES_IMG:
            return {alignof(VkPhysicalDeviceRelaxedLineRasterizationFeaturesIMG),
                    sizeof(VkPhysicalDeviceRelaxedLineRasterizationFeaturesIMG)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RENDER_PASS_STRIPED_FEATURES_ARM:
            return {alignof(VkPhysicalDeviceRenderPassStripedFeaturesARM), sizeof(VkPhysicalDeviceRenderPassStripedFeaturesARM)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_REPRESENTATIVE_FRAGMENT_TEST_FEATURES_NV:
            return {alignof(VkPhysicalDeviceRepresentativeFragmentTestFeaturesNV),
                    sizeof(VkPhysicalDeviceRepresentativeFragmentTestFeaturesNV)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ROBUSTNESS_2_FEATURES_EXT:
            return {alignof(VkPhysicalDeviceRobustness2FeaturesEXT), sizeof(VkPhysicalDeviceRobustness2FeaturesEXT)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SAMPLER_YCBCR_CONVERSION_FEATURES:
            return {alignof(VkPhysicalDeviceSamplerYcbcrConversionFeatures),
                    sizeof(VkPhysicalDeviceSamplerYcbcrConversionFeatures)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SCALAR_BLOCK_LAYOUT_FEATURES:
            return {alignof(VkPhysicalDeviceScalarBlockLayoutFeatures), sizeof(VkPhysicalDeviceScalarBlockLayoutFeatures)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SCHEDULING_CONTROLS_FEATURES_ARM:
            return {alignof(VkPhysicalDeviceSchedulingControlsFeaturesARM), sizeof(VkPhysicalDeviceSchedulingControlsFeaturesARM)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SEPARATE_DEPTH_STENCIL_LAYOUTS_FEATURES:
            return {alignof(VkPhysicalDeviceSeparateDepthStencilLayoutsFeatures),
                    sizeof(VkPhysicalDeviceSeparateDepthStencilLayoutsFeatures)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_ATOMIC_FLOAT16_VECTOR_FEATURES_NV:
            return {alignof(VkPhysicalDeviceShaderAtomicFloat16VectorFeaturesNV),
                    sizeof(VkPhysicalDeviceShaderAtomicFloat16VectorFeaturesNV)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_ATOMIC_FLOAT_2_FEATURES_EXT:
            return {alignof(VkPhysicalDeviceShaderAtomicFloat2FeaturesEXT), sizeof(VkPhysicalDeviceShaderAtomicFloat2FeaturesEXT)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_ATOMIC_FLOAT_FEATURES_EXT:
            return {alignof(VkPhysicalDeviceShaderAtomicFloatFeaturesEXT), sizeof(VkPhysicalDeviceShaderAtomicFloatFeaturesEXT)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_ATOMIC_INT64_FEATURES:
            return {alignof(VkPhysicalDeviceShaderAtomicInt64Features), sizeof(VkPhysicalDeviceShaderAtomicInt64Features)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_CLOCK_FEATURES_KHR:
            return {alignof(VkPhysicalDeviceShaderClockFeaturesKHR), sizeof(VkPhysicalDeviceShaderClockFeaturesKHR)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_CORE_BUILTINS_FEATURES_ARM:
            return {alignof(VkPhysicalDeviceShaderCoreBuiltinsFeaturesARM), sizeof(VkPhysicalDeviceShaderCoreBuiltinsFeaturesARM)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_DEMOTE_TO_HELPER_INVOCATION_FEATURES:
            return {alignof(VkPhysicalDeviceShaderDemoteToHelperInvocationFeatures),
                    sizeof(VkPhysicalDeviceShaderDemoteToHelperInvocationFeatures)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_DRAW_PARAMETERS_FEATURES:
            return {alignof(VkPhysicalDeviceShaderDrawParametersFeatures), sizeof(VkPhysicalDeviceShaderDrawParametersFeatures)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_EARLY_AND_LATE_FRAGMENT_TESTS_FEATURES_AMD:
            return {alignof(VkPhysicalDeviceShaderEarlyAndLateFragmentTestsFeaturesAMD),
                    sizeof(VkPhysicalDeviceShaderEarlyAndLateFragmentTestsFeaturesAMD)};
#ifdef VK_ENABLE_BETA_EXTENSIONS
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_ENQUEUE_FEATURES_AMDX:
            return {alignof(VkPhysicalDeviceShaderEnqueueFeaturesAMDX), sizeof(VkPhysicalDeviceShaderEnqueueFeaturesAMDX)};
#endif  // VK_ENABLE_BETA_EXTENSIONS
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_EXPECT_ASSUME_FEATURES:
            return {alignof(VkPhysicalDeviceShaderExpectAssumeFeatures), sizeof(VkPhysicalDeviceShaderExpectAssumeFeatures)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_FLOAT16_INT8_FEATURES:
            return {alignof(VkPhysicalDeviceShaderFloat16Int8Features), sizeof(VkPhysicalDeviceShaderFloat16Int8Features)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_FLOAT_CONTROLS_2_FEATURES:
            return {alignof(VkPhysicalDeviceShaderFloatControls2Features), sizeof(VkPhysicalDeviceShaderFloatControls2Features)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_IMAGE_ATOMIC_INT64_FEATURES_EXT:
            return {alignof(VkPhysicalDeviceShaderImageAtomicInt64FeaturesEXT),
                    sizeof(VkPhysicalDeviceShaderImageAtomicInt64FeaturesEXT)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_IMAGE_FOOTPRINT_FEATURES_NV:
            return {alignof(VkPhysicalDeviceShaderImageFootprintFeaturesNV),
                    sizeof(VkPhysicalDeviceShaderImageFootprintFeaturesNV)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_INTEGER_DOT_PRODUCT_FEATURES:
            return {alignof(VkPhysicalDeviceShaderIntegerDotProductFeatures),
                    sizeof(VkPhysicalDeviceShaderIntegerDotProductFeatures)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_INTEGER_FUNCTIONS_2_FEATURES_INTEL:
            return {alignof(VkPhysicalDeviceShaderIntegerFunctions2FeaturesINTEL),
                    sizeof(VkPhysicalDeviceShaderIntegerFunctions2FeaturesINTEL)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_MAXIMAL_RECONVERGENCE_FEATURES_KHR:
            return {alignof(VkPhysicalDeviceShaderMaximalReconvergenceFeaturesKHR),
                    sizeof(VkPhysicalDeviceShaderMaximalReconvergenceFeaturesKHR)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_MODULE_IDENTIFIER_FEATURES_EXT:
            return {alignof(VkPhysicalDeviceShaderModuleIdentifierFeaturesEXT),
                    sizeof(VkPhysicalDeviceShaderModuleIdentifierFeaturesEXT)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_OBJECT_FEATURES_EXT:
            return {alignof(VkPhysicalDeviceShaderObjectFeaturesEXT), sizeof(VkPhysicalDeviceShaderObjectFeaturesEXT)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_QUAD_CONTROL_FEATURES_KHR:
            return {alignof(VkPhysicalDeviceShaderQuadControlFeaturesKHR), sizeof(VkPhysicalDeviceShaderQuadControlFeaturesKHR)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_RELAXED_EXTENDED_INSTRUCTION_FEATURES_KHR:
            return {alignof(VkPhysicalDeviceShaderRelaxedExtendedInstructionFeaturesKHR),
                    sizeof(VkPhysicalDeviceShaderRelaxedExtendedInstructionFeaturesKHR)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_REPLICATED_COMPOSITES_FEATURES_EXT:
            return {alignof(VkPhysicalDeviceShaderReplicatedCompositesFeaturesEXT),
                    sizeof(VkPhysicalDeviceShaderReplicatedCompositesFeaturesEXT)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_SM_BUILTINS_FEATURES_NV:
            return {alignof(VkPhysicalDeviceShaderSMBuiltinsFeaturesNV), sizeof(VkPhysicalDeviceShaderSMBuiltinsFeaturesNV)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_SUBGROUP_EXTENDED_TYPES_FEATURES:
            return {alignof(VkPhysicalDeviceShaderSubgroupExtendedTypesFeatures),
                    sizeof(VkPhysicalDeviceShaderSubgroupExtendedTypesFeatures)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_SUBGROUP_ROTATE_FEATURES:
            return {alignof(VkPhysicalDeviceShaderSubgroupRotateFeatures), sizeof(VkPhysicalDeviceShaderSubgroupRotateFeatures)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_SUBGROUP_UNIFORM_CONTROL_FLOW_FEATURES_KHR:
            return {alignof(VkPhysicalDeviceShaderSubgroupUniformControlFlowFeaturesKHR),
                    sizeof(VkPhysicalDeviceShaderSubgroupUniformControlFlowFeaturesKHR)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_TERMINATE_INVOCATION_FEATURES:
            return {alignof(VkPhysicalDeviceShaderTerminateInvocationFeatures),
                    sizeof(VkPhysicalDeviceShaderTerminateInvocationFeatures)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_TILE_IMAGE_FEATURES_EXT:
            return {alignof(VkPhysicalDeviceShaderTileImageFeaturesEXT), sizeof(VkPhysicalDeviceShaderTileImageFeaturesEXT)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADING_RATE_IMAGE_FEATURES_NV:
            return {alignof(VkPhysicalDeviceShadingRateImageFeaturesNV), sizeof(VkPhysicalDeviceShadingRateImageFeaturesNV)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SUBGROUP_SIZE_CONTROL_FEATURES:
            return {alignof(VkPhysicalDeviceSubgroupSizeControlFeatures), sizeof(VkPhysicalDeviceSubgroupSizeControlFeatures)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SUBPASS_MERGE_FEEDBACK_FEATURES_EXT:
            return {alignof(VkPhysicalDeviceSubpassMergeFeedbackFeaturesEXT),
                    sizeof(VkPhysicalDeviceSubpassMergeFeedbackFeaturesEXT)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SUBPASS_SHADING_FEATURES_HUAWEI:
            return {alignof(VkPhysicalDeviceSubpassShadingFeaturesHUAWEI), sizeof(VkPhysicalDeviceSubpassShadingFeaturesHUAWEI)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SWAPCHAIN_MAINTENANCE_1_FEATURES_EXT:
            return {alignof(VkPhysicalDeviceSwapchainMaintenance1FeaturesEXT),
                    sizeof(VkPhysicalDeviceSwapchainMaintenance1FeaturesEXT)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SYNCHRONIZATION_2_FEATURES:
            return {alignof(VkPhysicalDeviceSynchronization2Features), sizeof(VkPhysicalDeviceSynchronization2Features)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TEXEL_BUFFER_ALIGNMENT_FEATURES_EXT:
            return {alignof(VkPhysicalDeviceTexelBufferAlignmentFeaturesEXT),
                    sizeof(VkPhysicalDeviceTexelBufferAlignmentFeaturesEXT)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TEXTURE_COMPRESSION_ASTC_HDR_FEATURES:
            return {alignof(VkPhysicalDeviceTextureCompressionASTCHDRFeatures),
                    sizeof(VkPhysicalDeviceTextureCompressionASTCHDRFeatures)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TILE_PROPERTIES_FEATURES_QCOM:
            return {alignof(VkPhysicalDeviceTilePropertiesFeaturesQCOM), sizeof(VkPhysicalDeviceTilePropertiesFeaturesQCOM)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TIMELINE_SEMAPHORE_FEATURES:
            return {alignof(VkPhysicalDeviceTimelineSemaphoreFeatures), sizeof(VkPhysicalDeviceTimelineSemaphoreFeatures)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TRANSFORM_FEEDBACK_FEATURES_EXT:
            return {alignof(VkPhysicalDeviceTransformFeedbackFeaturesEXT), sizeof(VkPhysicalDeviceTransformFeedbackFeaturesEXT)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_UNIFORM_BUFFER_STANDARD_LAYOUT_FEATURES:
            return {alignof(VkPhysicalDeviceUniformBufferStandardLayoutFeatures),
                    sizeof(VkPhysicalDeviceUniformBufferStandardLayoutFeatures)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VARIABLE_POINTERS_FEATURES:
            return {alignof(VkPhysicalDeviceVariablePointersFeatures), sizeof(VkPhysicalDeviceVariablePointersFeatures)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VERTEX_ATTRIBUTE_DIVISOR_FEATURES:
            return {alignof(VkPhysicalDeviceVertexAttributeDivisorFeatures),
                    sizeof(VkPhysicalDeviceVertexAttributeDivisorFeatures)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VERTEX_ATTRIBUTE_ROBUSTNESS_FEATURES_EXT:
            return {alignof(VkPhysicalDeviceVertexAttributeRobustnessFeaturesEXT),
                    sizeof(VkPhysicalDeviceVertexAttributeRobustnessFeaturesEXT)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VERTEX_INPUT_DYNAMIC_STATE_FEATURES_EXT:
            return {alignof(VkPhysicalDeviceVertexInputDynamicStateFeaturesEXT),
                    sizeof(VkPhysicalDeviceVertexInputDynamicStateFeaturesEXT)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VIDEO_ENCODE_AV1_FEATURES_KHR:
            return {alignof(VkPhysicalDeviceVideoEncodeAV1FeaturesKHR), sizeof(VkPhysicalDeviceVideoEncodeAV1FeaturesKHR)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VIDEO_ENCODE_QUANTIZATION_MAP_FEATURES_KHR:
            return {alignof(VkPhysicalDeviceVideoEncodeQuantizationMapFeaturesKHR),
                    sizeof(VkPhysicalDeviceVideoEncodeQuantizationMapFeaturesKHR)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VIDEO_MAINTENANCE_1_FEATURES_KHR:
            return {alignof(VkPhysicalDeviceVideoMaintenance1FeaturesKHR), sizeof(VkPhysicalDeviceVideoMaintenance1FeaturesKHR)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VIDEO_MAINTENANCE_2_FEATURES_KHR:
            return {alignof(VkPhysicalDeviceVideoMaintenance2FeaturesKHR), sizeof(VkPhysicalDeviceVideoMaintenance2FeaturesKHR)};
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
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_WORKGROUP_MEMORY_EXPLICIT_LAYOUT_FEATURES_KHR:
            return {alignof(VkPhysicalDeviceWorkgroupMemoryExplicitLayoutFeaturesKHR),
                    sizeof(VkPhysicalDeviceWorkgroupMemoryExplicitLayoutFeaturesKHR)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_YCBCR_2_PLANE_444_FORMATS_FEATURES_EXT:
            return {alignof(VkPhysicalDeviceYcbcr2Plane444FormatsFeaturesEXT),
                    sizeof(VkPhysicalDeviceYcbcr2Plane444FormatsFeaturesEXT)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_YCBCR_DEGAMMA_FEATURES_QCOM:
            return {alignof(VkPhysicalDeviceYcbcrDegammaFeaturesQCOM), sizeof(VkPhysicalDeviceYcbcrDegammaFeaturesQCOM)};
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
        case VK_STRUCTURE_TYPE_AMIGO_PROFILING_SUBMIT_INFO_SEC:
            return {alignof(VkAmigoProfilingSubmitInfoSEC), sizeof(VkAmigoProfilingSubmitInfoSEC)};
#ifdef VK_USE_PLATFORM_WIN32_KHR
        case VK_STRUCTURE_TYPE_D3D12_FENCE_SUBMIT_INFO_KHR:
            return {alignof(VkD3D12FenceSubmitInfoKHR), sizeof(VkD3D12FenceSubmitInfoKHR)};
#endif  // VK_USE_PLATFORM_WIN32_KHR
        case VK_STRUCTURE_TYPE_DEVICE_GROUP_SUBMIT_INFO:
            return {alignof(VkDeviceGroupSubmitInfo), sizeof(VkDeviceGroupSubmitInfo)};
        case VK_STRUCTURE_TYPE_FRAME_BOUNDARY_EXT:
            return {alignof(VkFrameBoundaryEXT), sizeof(VkFrameBoundaryEXT)};
        case VK_STRUCTURE_TYPE_LATENCY_SUBMISSION_PRESENT_ID_NV:
            return {alignof(VkLatencySubmissionPresentIdNV), sizeof(VkLatencySubmissionPresentIdNV)};
        case VK_STRUCTURE_TYPE_PERFORMANCE_QUERY_SUBMIT_INFO_KHR:
            return {alignof(VkPerformanceQuerySubmitInfoKHR), sizeof(VkPerformanceQuerySubmitInfoKHR)};
        case VK_STRUCTURE_TYPE_PROTECTED_SUBMIT_INFO:
            return {alignof(VkProtectedSubmitInfo), sizeof(VkProtectedSubmitInfo)};
        case VK_STRUCTURE_TYPE_TIMELINE_SEMAPHORE_SUBMIT_INFO:
            return {alignof(VkTimelineSemaphoreSubmitInfo), sizeof(VkTimelineSemaphoreSubmitInfo)};
#ifdef VK_USE_PLATFORM_WIN32_KHR
        case VK_STRUCTURE_TYPE_WIN32_KEYED_MUTEX_ACQUIRE_RELEASE_INFO_KHR:
            return {alignof(VkWin32KeyedMutexAcquireReleaseInfoKHR), sizeof(VkWin32KeyedMutexAcquireReleaseInfoKHR)};
        case VK_STRUCTURE_TYPE_WIN32_KEYED_MUTEX_ACQUIRE_RELEASE_INFO_NV:
            return {alignof(VkWin32KeyedMutexAcquireReleaseInfoNV), sizeof(VkWin32KeyedMutexAcquireReleaseInfoNV)};
#endif  // VK_USE_PLATFORM_WIN32_KHR

        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkMemoryAllocateInfo>(VkStructureType type) {
    switch (type) {
        case VK_STRUCTURE_TYPE_DEDICATED_ALLOCATION_MEMORY_ALLOCATE_INFO_NV:
            return {alignof(VkDedicatedAllocationMemoryAllocateInfoNV), sizeof(VkDedicatedAllocationMemoryAllocateInfoNV)};
        case VK_STRUCTURE_TYPE_EXPORT_MEMORY_ALLOCATE_INFO:
            return {alignof(VkExportMemoryAllocateInfo), sizeof(VkExportMemoryAllocateInfo)};
        case VK_STRUCTURE_TYPE_EXPORT_MEMORY_ALLOCATE_INFO_NV:
            return {alignof(VkExportMemoryAllocateInfoNV), sizeof(VkExportMemoryAllocateInfoNV)};
#ifdef VK_USE_PLATFORM_WIN32_KHR
        case VK_STRUCTURE_TYPE_EXPORT_MEMORY_WIN32_HANDLE_INFO_KHR:
            return {alignof(VkExportMemoryWin32HandleInfoKHR), sizeof(VkExportMemoryWin32HandleInfoKHR)};
        case VK_STRUCTURE_TYPE_EXPORT_MEMORY_WIN32_HANDLE_INFO_NV:
            return {alignof(VkExportMemoryWin32HandleInfoNV), sizeof(VkExportMemoryWin32HandleInfoNV)};
#endif  // VK_USE_PLATFORM_WIN32_KHR
#ifdef VK_USE_PLATFORM_METAL_EXT
        case VK_STRUCTURE_TYPE_EXPORT_METAL_OBJECT_CREATE_INFO_EXT:
            return {alignof(VkExportMetalObjectCreateInfoEXT), sizeof(VkExportMetalObjectCreateInfoEXT)};
#endif  // VK_USE_PLATFORM_METAL_EXT
#ifdef VK_USE_PLATFORM_ANDROID_KHR
        case VK_STRUCTURE_TYPE_IMPORT_ANDROID_HARDWARE_BUFFER_INFO_ANDROID:
            return {alignof(VkImportAndroidHardwareBufferInfoANDROID), sizeof(VkImportAndroidHardwareBufferInfoANDROID)};
#endif  // VK_USE_PLATFORM_ANDROID_KHR
#ifdef VK_USE_PLATFORM_FUCHSIA
        case VK_STRUCTURE_TYPE_IMPORT_MEMORY_BUFFER_COLLECTION_FUCHSIA:
            return {alignof(VkImportMemoryBufferCollectionFUCHSIA), sizeof(VkImportMemoryBufferCollectionFUCHSIA)};
#endif  // VK_USE_PLATFORM_FUCHSIA
        case VK_STRUCTURE_TYPE_IMPORT_MEMORY_FD_INFO_KHR:
            return {alignof(VkImportMemoryFdInfoKHR), sizeof(VkImportMemoryFdInfoKHR)};
        case VK_STRUCTURE_TYPE_IMPORT_MEMORY_HOST_POINTER_INFO_EXT:
            return {alignof(VkImportMemoryHostPointerInfoEXT), sizeof(VkImportMemoryHostPointerInfoEXT)};
#ifdef VK_USE_PLATFORM_METAL_EXT
        case VK_STRUCTURE_TYPE_IMPORT_MEMORY_METAL_HANDLE_INFO_EXT:
            return {alignof(VkImportMemoryMetalHandleInfoEXT), sizeof(VkImportMemoryMetalHandleInfoEXT)};
#endif  // VK_USE_PLATFORM_METAL_EXT
#ifdef VK_USE_PLATFORM_WIN32_KHR
        case VK_STRUCTURE_TYPE_IMPORT_MEMORY_WIN32_HANDLE_INFO_KHR:
            return {alignof(VkImportMemoryWin32HandleInfoKHR), sizeof(VkImportMemoryWin32HandleInfoKHR)};
        case VK_STRUCTURE_TYPE_IMPORT_MEMORY_WIN32_HANDLE_INFO_NV:
            return {alignof(VkImportMemoryWin32HandleInfoNV), sizeof(VkImportMemoryWin32HandleInfoNV)};
#endif  // VK_USE_PLATFORM_WIN32_KHR
#ifdef VK_USE_PLATFORM_FUCHSIA
        case VK_STRUCTURE_TYPE_IMPORT_MEMORY_ZIRCON_HANDLE_INFO_FUCHSIA:
            return {alignof(VkImportMemoryZirconHandleInfoFUCHSIA), sizeof(VkImportMemoryZirconHandleInfoFUCHSIA)};
#endif  // VK_USE_PLATFORM_FUCHSIA
#ifdef VK_USE_PLATFORM_METAL_EXT
        case VK_STRUCTURE_TYPE_IMPORT_METAL_BUFFER_INFO_EXT:
            return {alignof(VkImportMetalBufferInfoEXT), sizeof(VkImportMetalBufferInfoEXT)};
#endif  // VK_USE_PLATFORM_METAL_EXT
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
        case VK_STRUCTURE_TYPE_MEMORY_PRIORITY_ALLOCATE_INFO_EXT:
            return {alignof(VkMemoryPriorityAllocateInfoEXT), sizeof(VkMemoryPriorityAllocateInfoEXT)};

        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkBindSparseInfo>(VkStructureType type) {
    switch (type) {
        case VK_STRUCTURE_TYPE_DEVICE_GROUP_BIND_SPARSE_INFO:
            return {alignof(VkDeviceGroupBindSparseInfo), sizeof(VkDeviceGroupBindSparseInfo)};
        case VK_STRUCTURE_TYPE_FRAME_BOUNDARY_EXT:
            return {alignof(VkFrameBoundaryEXT), sizeof(VkFrameBoundaryEXT)};
        case VK_STRUCTURE_TYPE_TIMELINE_SEMAPHORE_SUBMIT_INFO:
            return {alignof(VkTimelineSemaphoreSubmitInfo), sizeof(VkTimelineSemaphoreSubmitInfo)};

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
#ifdef VK_USE_PLATFORM_WIN32_KHR
        case VK_STRUCTURE_TYPE_EXPORT_FENCE_WIN32_HANDLE_INFO_KHR:
            return {alignof(VkExportFenceWin32HandleInfoKHR), sizeof(VkExportFenceWin32HandleInfoKHR)};
#endif  // VK_USE_PLATFORM_WIN32_KHR

        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkSemaphoreCreateInfo>(VkStructureType type) {
    switch (type) {
#ifdef VK_USE_PLATFORM_METAL_EXT
        case VK_STRUCTURE_TYPE_EXPORT_METAL_OBJECT_CREATE_INFO_EXT:
            return {alignof(VkExportMetalObjectCreateInfoEXT), sizeof(VkExportMetalObjectCreateInfoEXT)};
#endif  // VK_USE_PLATFORM_METAL_EXT
        case VK_STRUCTURE_TYPE_EXPORT_SEMAPHORE_CREATE_INFO:
            return {alignof(VkExportSemaphoreCreateInfo), sizeof(VkExportSemaphoreCreateInfo)};
#ifdef VK_USE_PLATFORM_WIN32_KHR
        case VK_STRUCTURE_TYPE_EXPORT_SEMAPHORE_WIN32_HANDLE_INFO_KHR:
            return {alignof(VkExportSemaphoreWin32HandleInfoKHR), sizeof(VkExportSemaphoreWin32HandleInfoKHR)};
#endif  // VK_USE_PLATFORM_WIN32_KHR
#ifdef VK_USE_PLATFORM_METAL_EXT
        case VK_STRUCTURE_TYPE_IMPORT_METAL_SHARED_EVENT_INFO_EXT:
            return {alignof(VkImportMetalSharedEventInfoEXT), sizeof(VkImportMetalSharedEventInfoEXT)};
#endif  // VK_USE_PLATFORM_METAL_EXT
        case VK_STRUCTURE_TYPE_QUERY_LOW_LATENCY_SUPPORT_NV:
            return {alignof(VkQueryLowLatencySupportNV), sizeof(VkQueryLowLatencySupportNV)};
        case VK_STRUCTURE_TYPE_SEMAPHORE_TYPE_CREATE_INFO:
            return {alignof(VkSemaphoreTypeCreateInfo), sizeof(VkSemaphoreTypeCreateInfo)};

        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkEventCreateInfo>(VkStructureType type) {
    switch (type) {
#ifdef VK_USE_PLATFORM_METAL_EXT
        case VK_STRUCTURE_TYPE_EXPORT_METAL_OBJECT_CREATE_INFO_EXT:
            return {alignof(VkExportMetalObjectCreateInfoEXT), sizeof(VkExportMetalObjectCreateInfoEXT)};
        case VK_STRUCTURE_TYPE_IMPORT_METAL_SHARED_EVENT_INFO_EXT:
            return {alignof(VkImportMetalSharedEventInfoEXT), sizeof(VkImportMetalSharedEventInfoEXT)};
#endif  // VK_USE_PLATFORM_METAL_EXT

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
        case VK_STRUCTURE_TYPE_QUERY_POOL_PERFORMANCE_QUERY_CREATE_INFO_INTEL:
            return {alignof(VkQueryPoolPerformanceQueryCreateInfoINTEL), sizeof(VkQueryPoolPerformanceQueryCreateInfoINTEL)};
        case VK_STRUCTURE_TYPE_QUERY_POOL_VIDEO_ENCODE_FEEDBACK_CREATE_INFO_KHR:
            return {alignof(VkQueryPoolVideoEncodeFeedbackCreateInfoKHR), sizeof(VkQueryPoolVideoEncodeFeedbackCreateInfoKHR)};
        case VK_STRUCTURE_TYPE_VIDEO_DECODE_AV1_PROFILE_INFO_KHR:
            return {alignof(VkVideoDecodeAV1ProfileInfoKHR), sizeof(VkVideoDecodeAV1ProfileInfoKHR)};
        case VK_STRUCTURE_TYPE_VIDEO_DECODE_H264_PROFILE_INFO_KHR:
            return {alignof(VkVideoDecodeH264ProfileInfoKHR), sizeof(VkVideoDecodeH264ProfileInfoKHR)};
        case VK_STRUCTURE_TYPE_VIDEO_DECODE_H265_PROFILE_INFO_KHR:
            return {alignof(VkVideoDecodeH265ProfileInfoKHR), sizeof(VkVideoDecodeH265ProfileInfoKHR)};
        case VK_STRUCTURE_TYPE_VIDEO_DECODE_USAGE_INFO_KHR:
            return {alignof(VkVideoDecodeUsageInfoKHR), sizeof(VkVideoDecodeUsageInfoKHR)};
        case VK_STRUCTURE_TYPE_VIDEO_ENCODE_AV1_PROFILE_INFO_KHR:
            return {alignof(VkVideoEncodeAV1ProfileInfoKHR), sizeof(VkVideoEncodeAV1ProfileInfoKHR)};
        case VK_STRUCTURE_TYPE_VIDEO_ENCODE_H264_PROFILE_INFO_KHR:
            return {alignof(VkVideoEncodeH264ProfileInfoKHR), sizeof(VkVideoEncodeH264ProfileInfoKHR)};
        case VK_STRUCTURE_TYPE_VIDEO_ENCODE_H265_PROFILE_INFO_KHR:
            return {alignof(VkVideoEncodeH265ProfileInfoKHR), sizeof(VkVideoEncodeH265ProfileInfoKHR)};
        case VK_STRUCTURE_TYPE_VIDEO_ENCODE_USAGE_INFO_KHR:
            return {alignof(VkVideoEncodeUsageInfoKHR), sizeof(VkVideoEncodeUsageInfoKHR)};
        case VK_STRUCTURE_TYPE_VIDEO_PROFILE_INFO_KHR:
            return {alignof(VkVideoProfileInfoKHR), sizeof(VkVideoProfileInfoKHR)};

        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkBufferCreateInfo>(VkStructureType type) {
    switch (type) {
#ifdef VK_USE_PLATFORM_FUCHSIA
        case VK_STRUCTURE_TYPE_BUFFER_COLLECTION_BUFFER_CREATE_INFO_FUCHSIA:
            return {alignof(VkBufferCollectionBufferCreateInfoFUCHSIA), sizeof(VkBufferCollectionBufferCreateInfoFUCHSIA)};
#endif  // VK_USE_PLATFORM_FUCHSIA
        case VK_STRUCTURE_TYPE_BUFFER_DEVICE_ADDRESS_CREATE_INFO_EXT:
            return {alignof(VkBufferDeviceAddressCreateInfoEXT), sizeof(VkBufferDeviceAddressCreateInfoEXT)};
        case VK_STRUCTURE_TYPE_BUFFER_OPAQUE_CAPTURE_ADDRESS_CREATE_INFO:
            return {alignof(VkBufferOpaqueCaptureAddressCreateInfo), sizeof(VkBufferOpaqueCaptureAddressCreateInfo)};
        case VK_STRUCTURE_TYPE_BUFFER_USAGE_FLAGS_2_CREATE_INFO:
            return {alignof(VkBufferUsageFlags2CreateInfo), sizeof(VkBufferUsageFlags2CreateInfo)};
        case VK_STRUCTURE_TYPE_DEDICATED_ALLOCATION_BUFFER_CREATE_INFO_NV:
            return {alignof(VkDedicatedAllocationBufferCreateInfoNV), sizeof(VkDedicatedAllocationBufferCreateInfoNV)};
        case VK_STRUCTURE_TYPE_EXTERNAL_MEMORY_BUFFER_CREATE_INFO:
            return {alignof(VkExternalMemoryBufferCreateInfo), sizeof(VkExternalMemoryBufferCreateInfo)};
        case VK_STRUCTURE_TYPE_OPAQUE_CAPTURE_DESCRIPTOR_DATA_CREATE_INFO_EXT:
            return {alignof(VkOpaqueCaptureDescriptorDataCreateInfoEXT), sizeof(VkOpaqueCaptureDescriptorDataCreateInfoEXT)};
        case VK_STRUCTURE_TYPE_VIDEO_PROFILE_LIST_INFO_KHR:
            return {alignof(VkVideoProfileListInfoKHR), sizeof(VkVideoProfileListInfoKHR)};

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
#ifdef VK_USE_PLATFORM_METAL_EXT
        case VK_STRUCTURE_TYPE_EXPORT_METAL_OBJECT_CREATE_INFO_EXT:
            return {alignof(VkExportMetalObjectCreateInfoEXT), sizeof(VkExportMetalObjectCreateInfoEXT)};
#endif  // VK_USE_PLATFORM_METAL_EXT

        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkImageCreateInfo>(VkStructureType type) {
    switch (type) {
#ifdef VK_USE_PLATFORM_FUCHSIA
        case VK_STRUCTURE_TYPE_BUFFER_COLLECTION_IMAGE_CREATE_INFO_FUCHSIA:
            return {alignof(VkBufferCollectionImageCreateInfoFUCHSIA), sizeof(VkBufferCollectionImageCreateInfoFUCHSIA)};
#endif  // VK_USE_PLATFORM_FUCHSIA
        case VK_STRUCTURE_TYPE_DEDICATED_ALLOCATION_IMAGE_CREATE_INFO_NV:
            return {alignof(VkDedicatedAllocationImageCreateInfoNV), sizeof(VkDedicatedAllocationImageCreateInfoNV)};
#ifdef VK_USE_PLATFORM_METAL_EXT
        case VK_STRUCTURE_TYPE_EXPORT_METAL_OBJECT_CREATE_INFO_EXT:
            return {alignof(VkExportMetalObjectCreateInfoEXT), sizeof(VkExportMetalObjectCreateInfoEXT)};
#endif  // VK_USE_PLATFORM_METAL_EXT
#ifdef VK_USE_PLATFORM_ANDROID_KHR
        case VK_STRUCTURE_TYPE_EXTERNAL_FORMAT_ANDROID:
            return {alignof(VkExternalFormatANDROID), sizeof(VkExternalFormatANDROID)};
#endif  // VK_USE_PLATFORM_ANDROID_KHR
#ifdef VK_USE_PLATFORM_SCREEN_QNX
        case VK_STRUCTURE_TYPE_EXTERNAL_FORMAT_QNX:
            return {alignof(VkExternalFormatQNX), sizeof(VkExternalFormatQNX)};
#endif  // VK_USE_PLATFORM_SCREEN_QNX
        case VK_STRUCTURE_TYPE_EXTERNAL_MEMORY_IMAGE_CREATE_INFO:
            return {alignof(VkExternalMemoryImageCreateInfo), sizeof(VkExternalMemoryImageCreateInfo)};
        case VK_STRUCTURE_TYPE_EXTERNAL_MEMORY_IMAGE_CREATE_INFO_NV:
            return {alignof(VkExternalMemoryImageCreateInfoNV), sizeof(VkExternalMemoryImageCreateInfoNV)};
        case VK_STRUCTURE_TYPE_IMAGE_ALIGNMENT_CONTROL_CREATE_INFO_MESA:
            return {alignof(VkImageAlignmentControlCreateInfoMESA), sizeof(VkImageAlignmentControlCreateInfoMESA)};
        case VK_STRUCTURE_TYPE_IMAGE_COMPRESSION_CONTROL_EXT:
            return {alignof(VkImageCompressionControlEXT), sizeof(VkImageCompressionControlEXT)};
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
#ifdef VK_USE_PLATFORM_METAL_EXT
        case VK_STRUCTURE_TYPE_IMPORT_METAL_IO_SURFACE_INFO_EXT:
            return {alignof(VkImportMetalIOSurfaceInfoEXT), sizeof(VkImportMetalIOSurfaceInfoEXT)};
        case VK_STRUCTURE_TYPE_IMPORT_METAL_TEXTURE_INFO_EXT:
            return {alignof(VkImportMetalTextureInfoEXT), sizeof(VkImportMetalTextureInfoEXT)};
#endif  // VK_USE_PLATFORM_METAL_EXT
        case VK_STRUCTURE_TYPE_OPAQUE_CAPTURE_DESCRIPTOR_DATA_CREATE_INFO_EXT:
            return {alignof(VkOpaqueCaptureDescriptorDataCreateInfoEXT), sizeof(VkOpaqueCaptureDescriptorDataCreateInfoEXT)};
        case VK_STRUCTURE_TYPE_OPTICAL_FLOW_IMAGE_FORMAT_INFO_NV:
            return {alignof(VkOpticalFlowImageFormatInfoNV), sizeof(VkOpticalFlowImageFormatInfoNV)};
        case VK_STRUCTURE_TYPE_VIDEO_PROFILE_LIST_INFO_KHR:
            return {alignof(VkVideoProfileListInfoKHR), sizeof(VkVideoProfileListInfoKHR)};

        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkImageViewCreateInfo>(VkStructureType type) {
    switch (type) {
#ifdef VK_USE_PLATFORM_METAL_EXT
        case VK_STRUCTURE_TYPE_EXPORT_METAL_OBJECT_CREATE_INFO_EXT:
            return {alignof(VkExportMetalObjectCreateInfoEXT), sizeof(VkExportMetalObjectCreateInfoEXT)};
#endif  // VK_USE_PLATFORM_METAL_EXT
        case VK_STRUCTURE_TYPE_IMAGE_VIEW_ASTC_DECODE_MODE_EXT:
            return {alignof(VkImageViewASTCDecodeModeEXT), sizeof(VkImageViewASTCDecodeModeEXT)};
        case VK_STRUCTURE_TYPE_IMAGE_VIEW_MIN_LOD_CREATE_INFO_EXT:
            return {alignof(VkImageViewMinLodCreateInfoEXT), sizeof(VkImageViewMinLodCreateInfoEXT)};
        case VK_STRUCTURE_TYPE_IMAGE_VIEW_SAMPLE_WEIGHT_CREATE_INFO_QCOM:
            return {alignof(VkImageViewSampleWeightCreateInfoQCOM), sizeof(VkImageViewSampleWeightCreateInfoQCOM)};
        case VK_STRUCTURE_TYPE_IMAGE_VIEW_SLICED_CREATE_INFO_EXT:
            return {alignof(VkImageViewSlicedCreateInfoEXT), sizeof(VkImageViewSlicedCreateInfoEXT)};
        case VK_STRUCTURE_TYPE_IMAGE_VIEW_USAGE_CREATE_INFO:
            return {alignof(VkImageViewUsageCreateInfo), sizeof(VkImageViewUsageCreateInfo)};
        case VK_STRUCTURE_TYPE_OPAQUE_CAPTURE_DESCRIPTOR_DATA_CREATE_INFO_EXT:
            return {alignof(VkOpaqueCaptureDescriptorDataCreateInfoEXT), sizeof(VkOpaqueCaptureDescriptorDataCreateInfoEXT)};
        case VK_STRUCTURE_TYPE_SAMPLER_YCBCR_CONVERSION_INFO:
            return {alignof(VkSamplerYcbcrConversionInfo), sizeof(VkSamplerYcbcrConversionInfo)};

        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkShaderModuleCreateInfo>(VkStructureType type) {
    switch (type) {
        case VK_STRUCTURE_TYPE_SHADER_MODULE_VALIDATION_CACHE_CREATE_INFO_EXT:
            return {alignof(VkShaderModuleValidationCacheCreateInfoEXT), sizeof(VkShaderModuleValidationCacheCreateInfoEXT)};
        case VK_STRUCTURE_TYPE_VALIDATION_FEATURES_EXT:
            return {alignof(VkValidationFeaturesEXT), sizeof(VkValidationFeaturesEXT)};

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
        case VK_STRUCTURE_TYPE_PIPELINE_SHADER_STAGE_MODULE_IDENTIFIER_CREATE_INFO_EXT:
            return {alignof(VkPipelineShaderStageModuleIdentifierCreateInfoEXT),
                    sizeof(VkPipelineShaderStageModuleIdentifierCreateInfoEXT)};
#ifdef VK_ENABLE_BETA_EXTENSIONS
        case VK_STRUCTURE_TYPE_PIPELINE_SHADER_STAGE_NODE_CREATE_INFO_AMDX:
            return {alignof(VkPipelineShaderStageNodeCreateInfoAMDX), sizeof(VkPipelineShaderStageNodeCreateInfoAMDX)};
#endif  // VK_ENABLE_BETA_EXTENSIONS
        case VK_STRUCTURE_TYPE_PIPELINE_SHADER_STAGE_REQUIRED_SUBGROUP_SIZE_CREATE_INFO:
            return {alignof(VkPipelineShaderStageRequiredSubgroupSizeCreateInfo),
                    sizeof(VkPipelineShaderStageRequiredSubgroupSizeCreateInfo)};
        case VK_STRUCTURE_TYPE_SHADER_MODULE_CREATE_INFO:
            return {alignof(VkShaderModuleCreateInfo), sizeof(VkShaderModuleCreateInfo)};
        case VK_STRUCTURE_TYPE_SHADER_MODULE_VALIDATION_CACHE_CREATE_INFO_EXT:
            return {alignof(VkShaderModuleValidationCacheCreateInfoEXT), sizeof(VkShaderModuleValidationCacheCreateInfoEXT)};

        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkComputePipelineCreateInfo>(VkStructureType type) {
    switch (type) {
        case VK_STRUCTURE_TYPE_COMPUTE_PIPELINE_INDIRECT_BUFFER_INFO_NV:
            return {alignof(VkComputePipelineIndirectBufferInfoNV), sizeof(VkComputePipelineIndirectBufferInfoNV)};
        case VK_STRUCTURE_TYPE_PIPELINE_BINARY_INFO_KHR:
            return {alignof(VkPipelineBinaryInfoKHR), sizeof(VkPipelineBinaryInfoKHR)};
        case VK_STRUCTURE_TYPE_PIPELINE_COMPILER_CONTROL_CREATE_INFO_AMD:
            return {alignof(VkPipelineCompilerControlCreateInfoAMD), sizeof(VkPipelineCompilerControlCreateInfoAMD)};
        case VK_STRUCTURE_TYPE_PIPELINE_CREATE_FLAGS_2_CREATE_INFO:
            return {alignof(VkPipelineCreateFlags2CreateInfo), sizeof(VkPipelineCreateFlags2CreateInfo)};
        case VK_STRUCTURE_TYPE_PIPELINE_CREATION_FEEDBACK_CREATE_INFO:
            return {alignof(VkPipelineCreationFeedbackCreateInfo), sizeof(VkPipelineCreationFeedbackCreateInfo)};
        case VK_STRUCTURE_TYPE_PIPELINE_ROBUSTNESS_CREATE_INFO:
            return {alignof(VkPipelineRobustnessCreateInfo), sizeof(VkPipelineRobustnessCreateInfo)};
        case VK_STRUCTURE_TYPE_SUBPASS_SHADING_PIPELINE_CREATE_INFO_HUAWEI:
            return {alignof(VkSubpassShadingPipelineCreateInfoHUAWEI), sizeof(VkSubpassShadingPipelineCreateInfoHUAWEI)};

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
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPipelineViewportStateCreateInfo>(VkStructureType type) {
    switch (type) {
        case VK_STRUCTURE_TYPE_PIPELINE_VIEWPORT_COARSE_SAMPLE_ORDER_STATE_CREATE_INFO_NV:
            return {alignof(VkPipelineViewportCoarseSampleOrderStateCreateInfoNV),
                    sizeof(VkPipelineViewportCoarseSampleOrderStateCreateInfoNV)};
        case VK_STRUCTURE_TYPE_PIPELINE_VIEWPORT_DEPTH_CLAMP_CONTROL_CREATE_INFO_EXT:
            return {alignof(VkPipelineViewportDepthClampControlCreateInfoEXT),
                    sizeof(VkPipelineViewportDepthClampControlCreateInfoEXT)};
        case VK_STRUCTURE_TYPE_PIPELINE_VIEWPORT_DEPTH_CLIP_CONTROL_CREATE_INFO_EXT:
            return {alignof(VkPipelineViewportDepthClipControlCreateInfoEXT),
                    sizeof(VkPipelineViewportDepthClipControlCreateInfoEXT)};
        case VK_STRUCTURE_TYPE_PIPELINE_VIEWPORT_EXCLUSIVE_SCISSOR_STATE_CREATE_INFO_NV:
            return {alignof(VkPipelineViewportExclusiveScissorStateCreateInfoNV),
                    sizeof(VkPipelineViewportExclusiveScissorStateCreateInfoNV)};
        case VK_STRUCTURE_TYPE_PIPELINE_VIEWPORT_SHADING_RATE_IMAGE_STATE_CREATE_INFO_NV:
            return {alignof(VkPipelineViewportShadingRateImageStateCreateInfoNV),
                    sizeof(VkPipelineViewportShadingRateImageStateCreateInfoNV)};
        case VK_STRUCTURE_TYPE_PIPELINE_VIEWPORT_SWIZZLE_STATE_CREATE_INFO_NV:
            return {alignof(VkPipelineViewportSwizzleStateCreateInfoNV), sizeof(VkPipelineViewportSwizzleStateCreateInfoNV)};
        case VK_STRUCTURE_TYPE_PIPELINE_VIEWPORT_W_SCALING_STATE_CREATE_INFO_NV:
            return {alignof(VkPipelineViewportWScalingStateCreateInfoNV), sizeof(VkPipelineViewportWScalingStateCreateInfoNV)};

        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPipelineRasterizationStateCreateInfo>(VkStructureType type) {
    switch (type) {
        case VK_STRUCTURE_TYPE_DEPTH_BIAS_REPRESENTATION_INFO_EXT:
            return {alignof(VkDepthBiasRepresentationInfoEXT), sizeof(VkDepthBiasRepresentationInfoEXT)};
        case VK_STRUCTURE_TYPE_PIPELINE_RASTERIZATION_CONSERVATIVE_STATE_CREATE_INFO_EXT:
            return {alignof(VkPipelineRasterizationConservativeStateCreateInfoEXT),
                    sizeof(VkPipelineRasterizationConservativeStateCreateInfoEXT)};
        case VK_STRUCTURE_TYPE_PIPELINE_RASTERIZATION_DEPTH_CLIP_STATE_CREATE_INFO_EXT:
            return {alignof(VkPipelineRasterizationDepthClipStateCreateInfoEXT),
                    sizeof(VkPipelineRasterizationDepthClipStateCreateInfoEXT)};
        case VK_STRUCTURE_TYPE_PIPELINE_RASTERIZATION_LINE_STATE_CREATE_INFO:
            return {alignof(VkPipelineRasterizationLineStateCreateInfo), sizeof(VkPipelineRasterizationLineStateCreateInfo)};
        case VK_STRUCTURE_TYPE_PIPELINE_RASTERIZATION_PROVOKING_VERTEX_STATE_CREATE_INFO_EXT:
            return {alignof(VkPipelineRasterizationProvokingVertexStateCreateInfoEXT),
                    sizeof(VkPipelineRasterizationProvokingVertexStateCreateInfoEXT)};
        case VK_STRUCTURE_TYPE_PIPELINE_RASTERIZATION_STATE_RASTERIZATION_ORDER_AMD:
            return {alignof(VkPipelineRasterizationStateRasterizationOrderAMD),
                    sizeof(VkPipelineRasterizationStateRasterizationOrderAMD)};
        case VK_STRUCTURE_TYPE_PIPELINE_RASTERIZATION_STATE_STREAM_CREATE_INFO_EXT:
            return {alignof(VkPipelineRasterizationStateStreamCreateInfoEXT),
                    sizeof(VkPipelineRasterizationStateStreamCreateInfoEXT)};

        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPipelineMultisampleStateCreateInfo>(VkStructureType type) {
    switch (type) {
        case VK_STRUCTURE_TYPE_PIPELINE_COVERAGE_MODULATION_STATE_CREATE_INFO_NV:
            return {alignof(VkPipelineCoverageModulationStateCreateInfoNV), sizeof(VkPipelineCoverageModulationStateCreateInfoNV)};
        case VK_STRUCTURE_TYPE_PIPELINE_COVERAGE_REDUCTION_STATE_CREATE_INFO_NV:
            return {alignof(VkPipelineCoverageReductionStateCreateInfoNV), sizeof(VkPipelineCoverageReductionStateCreateInfoNV)};
        case VK_STRUCTURE_TYPE_PIPELINE_COVERAGE_TO_COLOR_STATE_CREATE_INFO_NV:
            return {alignof(VkPipelineCoverageToColorStateCreateInfoNV), sizeof(VkPipelineCoverageToColorStateCreateInfoNV)};
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
        case VK_STRUCTURE_TYPE_ATTACHMENT_SAMPLE_COUNT_INFO_AMD:
            return {alignof(VkAttachmentSampleCountInfoAMD), sizeof(VkAttachmentSampleCountInfoAMD)};
#ifdef VK_USE_PLATFORM_ANDROID_KHR
        case VK_STRUCTURE_TYPE_EXTERNAL_FORMAT_ANDROID:
            return {alignof(VkExternalFormatANDROID), sizeof(VkExternalFormatANDROID)};
#endif  // VK_USE_PLATFORM_ANDROID_KHR
        case VK_STRUCTURE_TYPE_GRAPHICS_PIPELINE_LIBRARY_CREATE_INFO_EXT:
            return {alignof(VkGraphicsPipelineLibraryCreateInfoEXT), sizeof(VkGraphicsPipelineLibraryCreateInfoEXT)};
        case VK_STRUCTURE_TYPE_GRAPHICS_PIPELINE_SHADER_GROUPS_CREATE_INFO_NV:
            return {alignof(VkGraphicsPipelineShaderGroupsCreateInfoNV), sizeof(VkGraphicsPipelineShaderGroupsCreateInfoNV)};
        case VK_STRUCTURE_TYPE_MULTIVIEW_PER_VIEW_ATTRIBUTES_INFO_NVX:
            return {alignof(VkMultiviewPerViewAttributesInfoNVX), sizeof(VkMultiviewPerViewAttributesInfoNVX)};
        case VK_STRUCTURE_TYPE_PIPELINE_BINARY_INFO_KHR:
            return {alignof(VkPipelineBinaryInfoKHR), sizeof(VkPipelineBinaryInfoKHR)};
        case VK_STRUCTURE_TYPE_PIPELINE_COMPILER_CONTROL_CREATE_INFO_AMD:
            return {alignof(VkPipelineCompilerControlCreateInfoAMD), sizeof(VkPipelineCompilerControlCreateInfoAMD)};
        case VK_STRUCTURE_TYPE_PIPELINE_CREATE_FLAGS_2_CREATE_INFO:
            return {alignof(VkPipelineCreateFlags2CreateInfo), sizeof(VkPipelineCreateFlags2CreateInfo)};
        case VK_STRUCTURE_TYPE_PIPELINE_CREATION_FEEDBACK_CREATE_INFO:
            return {alignof(VkPipelineCreationFeedbackCreateInfo), sizeof(VkPipelineCreationFeedbackCreateInfo)};
        case VK_STRUCTURE_TYPE_PIPELINE_DISCARD_RECTANGLE_STATE_CREATE_INFO_EXT:
            return {alignof(VkPipelineDiscardRectangleStateCreateInfoEXT), sizeof(VkPipelineDiscardRectangleStateCreateInfoEXT)};
        case VK_STRUCTURE_TYPE_PIPELINE_FRAGMENT_SHADING_RATE_ENUM_STATE_CREATE_INFO_NV:
            return {alignof(VkPipelineFragmentShadingRateEnumStateCreateInfoNV),
                    sizeof(VkPipelineFragmentShadingRateEnumStateCreateInfoNV)};
        case VK_STRUCTURE_TYPE_PIPELINE_FRAGMENT_SHADING_RATE_STATE_CREATE_INFO_KHR:
            return {alignof(VkPipelineFragmentShadingRateStateCreateInfoKHR),
                    sizeof(VkPipelineFragmentShadingRateStateCreateInfoKHR)};
        case VK_STRUCTURE_TYPE_PIPELINE_LIBRARY_CREATE_INFO_KHR:
            return {alignof(VkPipelineLibraryCreateInfoKHR), sizeof(VkPipelineLibraryCreateInfoKHR)};
        case VK_STRUCTURE_TYPE_PIPELINE_RENDERING_CREATE_INFO:
            return {alignof(VkPipelineRenderingCreateInfo), sizeof(VkPipelineRenderingCreateInfo)};
        case VK_STRUCTURE_TYPE_PIPELINE_REPRESENTATIVE_FRAGMENT_TEST_STATE_CREATE_INFO_NV:
            return {alignof(VkPipelineRepresentativeFragmentTestStateCreateInfoNV),
                    sizeof(VkPipelineRepresentativeFragmentTestStateCreateInfoNV)};
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
        case VK_STRUCTURE_TYPE_OPAQUE_CAPTURE_DESCRIPTOR_DATA_CREATE_INFO_EXT:
            return {alignof(VkOpaqueCaptureDescriptorDataCreateInfoEXT), sizeof(VkOpaqueCaptureDescriptorDataCreateInfoEXT)};
        case VK_STRUCTURE_TYPE_SAMPLER_BLOCK_MATCH_WINDOW_CREATE_INFO_QCOM:
            return {alignof(VkSamplerBlockMatchWindowCreateInfoQCOM), sizeof(VkSamplerBlockMatchWindowCreateInfoQCOM)};
        case VK_STRUCTURE_TYPE_SAMPLER_BORDER_COLOR_COMPONENT_MAPPING_CREATE_INFO_EXT:
            return {alignof(VkSamplerBorderColorComponentMappingCreateInfoEXT),
                    sizeof(VkSamplerBorderColorComponentMappingCreateInfoEXT)};
        case VK_STRUCTURE_TYPE_SAMPLER_CUBIC_WEIGHTS_CREATE_INFO_QCOM:
            return {alignof(VkSamplerCubicWeightsCreateInfoQCOM), sizeof(VkSamplerCubicWeightsCreateInfoQCOM)};
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
        case VK_STRUCTURE_TYPE_MUTABLE_DESCRIPTOR_TYPE_CREATE_INFO_EXT:
            return {alignof(VkMutableDescriptorTypeCreateInfoEXT), sizeof(VkMutableDescriptorTypeCreateInfoEXT)};

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
        case VK_STRUCTURE_TYPE_MUTABLE_DESCRIPTOR_TYPE_CREATE_INFO_EXT:
            return {alignof(VkMutableDescriptorTypeCreateInfoEXT), sizeof(VkMutableDescriptorTypeCreateInfoEXT)};

        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkWriteDescriptorSet>(VkStructureType type) {
    switch (type) {
        case VK_STRUCTURE_TYPE_WRITE_DESCRIPTOR_SET_ACCELERATION_STRUCTURE_KHR:
            return {alignof(VkWriteDescriptorSetAccelerationStructureKHR), sizeof(VkWriteDescriptorSetAccelerationStructureKHR)};
        case VK_STRUCTURE_TYPE_WRITE_DESCRIPTOR_SET_ACCELERATION_STRUCTURE_NV:
            return {alignof(VkWriteDescriptorSetAccelerationStructureNV), sizeof(VkWriteDescriptorSetAccelerationStructureNV)};
        case VK_STRUCTURE_TYPE_WRITE_DESCRIPTOR_SET_INLINE_UNIFORM_BLOCK:
            return {alignof(VkWriteDescriptorSetInlineUniformBlock), sizeof(VkWriteDescriptorSetInlineUniformBlock)};
        case VK_STRUCTURE_TYPE_WRITE_DESCRIPTOR_SET_PARTITIONED_ACCELERATION_STRUCTURE_NV:
            return {alignof(VkWriteDescriptorSetPartitionedAccelerationStructureNV),
                    sizeof(VkWriteDescriptorSetPartitionedAccelerationStructureNV)};

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
        case VK_STRUCTURE_TYPE_RENDER_PASS_FRAGMENT_DENSITY_MAP_CREATE_INFO_EXT:
            return {alignof(VkRenderPassFragmentDensityMapCreateInfoEXT), sizeof(VkRenderPassFragmentDensityMapCreateInfoEXT)};
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
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkCommandBufferInheritanceInfo>(VkStructureType type) {
    switch (type) {
        case VK_STRUCTURE_TYPE_ATTACHMENT_SAMPLE_COUNT_INFO_AMD:
            return {alignof(VkAttachmentSampleCountInfoAMD), sizeof(VkAttachmentSampleCountInfoAMD)};
        case VK_STRUCTURE_TYPE_COMMAND_BUFFER_INHERITANCE_CONDITIONAL_RENDERING_INFO_EXT:
            return {alignof(VkCommandBufferInheritanceConditionalRenderingInfoEXT),
                    sizeof(VkCommandBufferInheritanceConditionalRenderingInfoEXT)};
        case VK_STRUCTURE_TYPE_COMMAND_BUFFER_INHERITANCE_RENDER_PASS_TRANSFORM_INFO_QCOM:
            return {alignof(VkCommandBufferInheritanceRenderPassTransformInfoQCOM),
                    sizeof(VkCommandBufferInheritanceRenderPassTransformInfoQCOM)};
        case VK_STRUCTURE_TYPE_COMMAND_BUFFER_INHERITANCE_RENDERING_INFO:
            return {alignof(VkCommandBufferInheritanceRenderingInfo), sizeof(VkCommandBufferInheritanceRenderingInfo)};
        case VK_STRUCTURE_TYPE_COMMAND_BUFFER_INHERITANCE_VIEWPORT_SCISSOR_INFO_NV:
            return {alignof(VkCommandBufferInheritanceViewportScissorInfoNV),
                    sizeof(VkCommandBufferInheritanceViewportScissorInfoNV)};
#ifdef VK_USE_PLATFORM_ANDROID_KHR
        case VK_STRUCTURE_TYPE_EXTERNAL_FORMAT_ANDROID:
            return {alignof(VkExternalFormatANDROID), sizeof(VkExternalFormatANDROID)};
#endif  // VK_USE_PLATFORM_ANDROID_KHR
        case VK_STRUCTURE_TYPE_MULTIVIEW_PER_VIEW_ATTRIBUTES_INFO_NVX:
            return {alignof(VkMultiviewPerViewAttributesInfoNVX), sizeof(VkMultiviewPerViewAttributesInfoNVX)};
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
        case VK_STRUCTURE_TYPE_MULTIVIEW_PER_VIEW_RENDER_AREAS_RENDER_PASS_BEGIN_INFO_QCOM:
            return {alignof(VkMultiviewPerViewRenderAreasRenderPassBeginInfoQCOM),
                    sizeof(VkMultiviewPerViewRenderAreasRenderPassBeginInfoQCOM)};
        case VK_STRUCTURE_TYPE_RENDER_PASS_ATTACHMENT_BEGIN_INFO:
            return {alignof(VkRenderPassAttachmentBeginInfo), sizeof(VkRenderPassAttachmentBeginInfo)};
        case VK_STRUCTURE_TYPE_RENDER_PASS_SAMPLE_LOCATIONS_BEGIN_INFO_EXT:
            return {alignof(VkRenderPassSampleLocationsBeginInfoEXT), sizeof(VkRenderPassSampleLocationsBeginInfoEXT)};
        case VK_STRUCTURE_TYPE_RENDER_PASS_STRIPE_BEGIN_INFO_ARM:
            return {alignof(VkRenderPassStripeBeginInfoARM), sizeof(VkRenderPassStripeBeginInfoARM)};
        case VK_STRUCTURE_TYPE_RENDER_PASS_TRANSFORM_BEGIN_INFO_QCOM:
            return {alignof(VkRenderPassTransformBeginInfoQCOM), sizeof(VkRenderPassTransformBeginInfoQCOM)};

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
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ACCELERATION_STRUCTURE_FEATURES_KHR:
            return {alignof(VkPhysicalDeviceAccelerationStructureFeaturesKHR),
                    sizeof(VkPhysicalDeviceAccelerationStructureFeaturesKHR)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ADDRESS_BINDING_REPORT_FEATURES_EXT:
            return {alignof(VkPhysicalDeviceAddressBindingReportFeaturesEXT),
                    sizeof(VkPhysicalDeviceAddressBindingReportFeaturesEXT)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_AMIGO_PROFILING_FEATURES_SEC:
            return {alignof(VkPhysicalDeviceAmigoProfilingFeaturesSEC), sizeof(VkPhysicalDeviceAmigoProfilingFeaturesSEC)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ANTI_LAG_FEATURES_AMD:
            return {alignof(VkPhysicalDeviceAntiLagFeaturesAMD), sizeof(VkPhysicalDeviceAntiLagFeaturesAMD)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ATTACHMENT_FEEDBACK_LOOP_DYNAMIC_STATE_FEATURES_EXT:
            return {alignof(VkPhysicalDeviceAttachmentFeedbackLoopDynamicStateFeaturesEXT),
                    sizeof(VkPhysicalDeviceAttachmentFeedbackLoopDynamicStateFeaturesEXT)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ATTACHMENT_FEEDBACK_LOOP_LAYOUT_FEATURES_EXT:
            return {alignof(VkPhysicalDeviceAttachmentFeedbackLoopLayoutFeaturesEXT),
                    sizeof(VkPhysicalDeviceAttachmentFeedbackLoopLayoutFeaturesEXT)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_BLEND_OPERATION_ADVANCED_FEATURES_EXT:
            return {alignof(VkPhysicalDeviceBlendOperationAdvancedFeaturesEXT),
                    sizeof(VkPhysicalDeviceBlendOperationAdvancedFeaturesEXT)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_BORDER_COLOR_SWIZZLE_FEATURES_EXT:
            return {alignof(VkPhysicalDeviceBorderColorSwizzleFeaturesEXT), sizeof(VkPhysicalDeviceBorderColorSwizzleFeaturesEXT)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_BUFFER_DEVICE_ADDRESS_FEATURES:
            return {alignof(VkPhysicalDeviceBufferDeviceAddressFeatures), sizeof(VkPhysicalDeviceBufferDeviceAddressFeatures)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_BUFFER_DEVICE_ADDRESS_FEATURES_EXT:
            return {alignof(VkPhysicalDeviceBufferDeviceAddressFeaturesEXT),
                    sizeof(VkPhysicalDeviceBufferDeviceAddressFeaturesEXT)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_CLUSTER_ACCELERATION_STRUCTURE_FEATURES_NV:
            return {alignof(VkPhysicalDeviceClusterAccelerationStructureFeaturesNV),
                    sizeof(VkPhysicalDeviceClusterAccelerationStructureFeaturesNV)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_CLUSTER_CULLING_SHADER_FEATURES_HUAWEI:
            return {alignof(VkPhysicalDeviceClusterCullingShaderFeaturesHUAWEI),
                    sizeof(VkPhysicalDeviceClusterCullingShaderFeaturesHUAWEI)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COHERENT_MEMORY_FEATURES_AMD:
            return {alignof(VkPhysicalDeviceCoherentMemoryFeaturesAMD), sizeof(VkPhysicalDeviceCoherentMemoryFeaturesAMD)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COLOR_WRITE_ENABLE_FEATURES_EXT:
            return {alignof(VkPhysicalDeviceColorWriteEnableFeaturesEXT), sizeof(VkPhysicalDeviceColorWriteEnableFeaturesEXT)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COMMAND_BUFFER_INHERITANCE_FEATURES_NV:
            return {alignof(VkPhysicalDeviceCommandBufferInheritanceFeaturesNV),
                    sizeof(VkPhysicalDeviceCommandBufferInheritanceFeaturesNV)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COMPUTE_SHADER_DERIVATIVES_FEATURES_KHR:
            return {alignof(VkPhysicalDeviceComputeShaderDerivativesFeaturesKHR),
                    sizeof(VkPhysicalDeviceComputeShaderDerivativesFeaturesKHR)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_CONDITIONAL_RENDERING_FEATURES_EXT:
            return {alignof(VkPhysicalDeviceConditionalRenderingFeaturesEXT),
                    sizeof(VkPhysicalDeviceConditionalRenderingFeaturesEXT)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COOPERATIVE_MATRIX_2_FEATURES_NV:
            return {alignof(VkPhysicalDeviceCooperativeMatrix2FeaturesNV), sizeof(VkPhysicalDeviceCooperativeMatrix2FeaturesNV)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COOPERATIVE_MATRIX_FEATURES_KHR:
            return {alignof(VkPhysicalDeviceCooperativeMatrixFeaturesKHR), sizeof(VkPhysicalDeviceCooperativeMatrixFeaturesKHR)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COOPERATIVE_MATRIX_FEATURES_NV:
            return {alignof(VkPhysicalDeviceCooperativeMatrixFeaturesNV), sizeof(VkPhysicalDeviceCooperativeMatrixFeaturesNV)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COOPERATIVE_VECTOR_FEATURES_NV:
            return {alignof(VkPhysicalDeviceCooperativeVectorFeaturesNV), sizeof(VkPhysicalDeviceCooperativeVectorFeaturesNV)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COPY_MEMORY_INDIRECT_FEATURES_NV:
            return {alignof(VkPhysicalDeviceCopyMemoryIndirectFeaturesNV), sizeof(VkPhysicalDeviceCopyMemoryIndirectFeaturesNV)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_CORNER_SAMPLED_IMAGE_FEATURES_NV:
            return {alignof(VkPhysicalDeviceCornerSampledImageFeaturesNV), sizeof(VkPhysicalDeviceCornerSampledImageFeaturesNV)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COVERAGE_REDUCTION_MODE_FEATURES_NV:
            return {alignof(VkPhysicalDeviceCoverageReductionModeFeaturesNV),
                    sizeof(VkPhysicalDeviceCoverageReductionModeFeaturesNV)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_CUBIC_CLAMP_FEATURES_QCOM:
            return {alignof(VkPhysicalDeviceCubicClampFeaturesQCOM), sizeof(VkPhysicalDeviceCubicClampFeaturesQCOM)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_CUBIC_WEIGHTS_FEATURES_QCOM:
            return {alignof(VkPhysicalDeviceCubicWeightsFeaturesQCOM), sizeof(VkPhysicalDeviceCubicWeightsFeaturesQCOM)};
#ifdef VK_ENABLE_BETA_EXTENSIONS
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_CUDA_KERNEL_LAUNCH_FEATURES_NV:
            return {alignof(VkPhysicalDeviceCudaKernelLaunchFeaturesNV), sizeof(VkPhysicalDeviceCudaKernelLaunchFeaturesNV)};
#endif  // VK_ENABLE_BETA_EXTENSIONS
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_CUSTOM_BORDER_COLOR_FEATURES_EXT:
            return {alignof(VkPhysicalDeviceCustomBorderColorFeaturesEXT), sizeof(VkPhysicalDeviceCustomBorderColorFeaturesEXT)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DEDICATED_ALLOCATION_IMAGE_ALIASING_FEATURES_NV:
            return {alignof(VkPhysicalDeviceDedicatedAllocationImageAliasingFeaturesNV),
                    sizeof(VkPhysicalDeviceDedicatedAllocationImageAliasingFeaturesNV)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DEPTH_BIAS_CONTROL_FEATURES_EXT:
            return {alignof(VkPhysicalDeviceDepthBiasControlFeaturesEXT), sizeof(VkPhysicalDeviceDepthBiasControlFeaturesEXT)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DEPTH_CLAMP_CONTROL_FEATURES_EXT:
            return {alignof(VkPhysicalDeviceDepthClampControlFeaturesEXT), sizeof(VkPhysicalDeviceDepthClampControlFeaturesEXT)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DEPTH_CLAMP_ZERO_ONE_FEATURES_KHR:
            return {alignof(VkPhysicalDeviceDepthClampZeroOneFeaturesKHR), sizeof(VkPhysicalDeviceDepthClampZeroOneFeaturesKHR)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DEPTH_CLIP_CONTROL_FEATURES_EXT:
            return {alignof(VkPhysicalDeviceDepthClipControlFeaturesEXT), sizeof(VkPhysicalDeviceDepthClipControlFeaturesEXT)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DEPTH_CLIP_ENABLE_FEATURES_EXT:
            return {alignof(VkPhysicalDeviceDepthClipEnableFeaturesEXT), sizeof(VkPhysicalDeviceDepthClipEnableFeaturesEXT)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DESCRIPTOR_BUFFER_FEATURES_EXT:
            return {alignof(VkPhysicalDeviceDescriptorBufferFeaturesEXT), sizeof(VkPhysicalDeviceDescriptorBufferFeaturesEXT)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DESCRIPTOR_INDEXING_FEATURES:
            return {alignof(VkPhysicalDeviceDescriptorIndexingFeatures), sizeof(VkPhysicalDeviceDescriptorIndexingFeatures)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DESCRIPTOR_POOL_OVERALLOCATION_FEATURES_NV:
            return {alignof(VkPhysicalDeviceDescriptorPoolOverallocationFeaturesNV),
                    sizeof(VkPhysicalDeviceDescriptorPoolOverallocationFeaturesNV)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DESCRIPTOR_SET_HOST_MAPPING_FEATURES_VALVE:
            return {alignof(VkPhysicalDeviceDescriptorSetHostMappingFeaturesVALVE),
                    sizeof(VkPhysicalDeviceDescriptorSetHostMappingFeaturesVALVE)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DEVICE_GENERATED_COMMANDS_COMPUTE_FEATURES_NV:
            return {alignof(VkPhysicalDeviceDeviceGeneratedCommandsComputeFeaturesNV),
                    sizeof(VkPhysicalDeviceDeviceGeneratedCommandsComputeFeaturesNV)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DEVICE_GENERATED_COMMANDS_FEATURES_EXT:
            return {alignof(VkPhysicalDeviceDeviceGeneratedCommandsFeaturesEXT),
                    sizeof(VkPhysicalDeviceDeviceGeneratedCommandsFeaturesEXT)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DEVICE_GENERATED_COMMANDS_FEATURES_NV:
            return {alignof(VkPhysicalDeviceDeviceGeneratedCommandsFeaturesNV),
                    sizeof(VkPhysicalDeviceDeviceGeneratedCommandsFeaturesNV)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DEVICE_MEMORY_REPORT_FEATURES_EXT:
            return {alignof(VkPhysicalDeviceDeviceMemoryReportFeaturesEXT), sizeof(VkPhysicalDeviceDeviceMemoryReportFeaturesEXT)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DIAGNOSTICS_CONFIG_FEATURES_NV:
            return {alignof(VkPhysicalDeviceDiagnosticsConfigFeaturesNV), sizeof(VkPhysicalDeviceDiagnosticsConfigFeaturesNV)};
#ifdef VK_ENABLE_BETA_EXTENSIONS
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DISPLACEMENT_MICROMAP_FEATURES_NV:
            return {alignof(VkPhysicalDeviceDisplacementMicromapFeaturesNV),
                    sizeof(VkPhysicalDeviceDisplacementMicromapFeaturesNV)};
#endif  // VK_ENABLE_BETA_EXTENSIONS
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DYNAMIC_RENDERING_FEATURES:
            return {alignof(VkPhysicalDeviceDynamicRenderingFeatures), sizeof(VkPhysicalDeviceDynamicRenderingFeatures)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DYNAMIC_RENDERING_LOCAL_READ_FEATURES:
            return {alignof(VkPhysicalDeviceDynamicRenderingLocalReadFeatures),
                    sizeof(VkPhysicalDeviceDynamicRenderingLocalReadFeatures)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DYNAMIC_RENDERING_UNUSED_ATTACHMENTS_FEATURES_EXT:
            return {alignof(VkPhysicalDeviceDynamicRenderingUnusedAttachmentsFeaturesEXT),
                    sizeof(VkPhysicalDeviceDynamicRenderingUnusedAttachmentsFeaturesEXT)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXCLUSIVE_SCISSOR_FEATURES_NV:
            return {alignof(VkPhysicalDeviceExclusiveScissorFeaturesNV), sizeof(VkPhysicalDeviceExclusiveScissorFeaturesNV)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTENDED_DYNAMIC_STATE_2_FEATURES_EXT:
            return {alignof(VkPhysicalDeviceExtendedDynamicState2FeaturesEXT),
                    sizeof(VkPhysicalDeviceExtendedDynamicState2FeaturesEXT)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTENDED_DYNAMIC_STATE_3_FEATURES_EXT:
            return {alignof(VkPhysicalDeviceExtendedDynamicState3FeaturesEXT),
                    sizeof(VkPhysicalDeviceExtendedDynamicState3FeaturesEXT)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTENDED_DYNAMIC_STATE_FEATURES_EXT:
            return {alignof(VkPhysicalDeviceExtendedDynamicStateFeaturesEXT),
                    sizeof(VkPhysicalDeviceExtendedDynamicStateFeaturesEXT)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTENDED_SPARSE_ADDRESS_SPACE_FEATURES_NV:
            return {alignof(VkPhysicalDeviceExtendedSparseAddressSpaceFeaturesNV),
                    sizeof(VkPhysicalDeviceExtendedSparseAddressSpaceFeaturesNV)};
#ifdef VK_USE_PLATFORM_ANDROID_KHR
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTERNAL_FORMAT_RESOLVE_FEATURES_ANDROID:
            return {alignof(VkPhysicalDeviceExternalFormatResolveFeaturesANDROID),
                    sizeof(VkPhysicalDeviceExternalFormatResolveFeaturesANDROID)};
#endif  // VK_USE_PLATFORM_ANDROID_KHR
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTERNAL_MEMORY_RDMA_FEATURES_NV:
            return {alignof(VkPhysicalDeviceExternalMemoryRDMAFeaturesNV), sizeof(VkPhysicalDeviceExternalMemoryRDMAFeaturesNV)};
#ifdef VK_USE_PLATFORM_SCREEN_QNX
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTERNAL_MEMORY_SCREEN_BUFFER_FEATURES_QNX:
            return {alignof(VkPhysicalDeviceExternalMemoryScreenBufferFeaturesQNX),
                    sizeof(VkPhysicalDeviceExternalMemoryScreenBufferFeaturesQNX)};
#endif  // VK_USE_PLATFORM_SCREEN_QNX
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FAULT_FEATURES_EXT:
            return {alignof(VkPhysicalDeviceFaultFeaturesEXT), sizeof(VkPhysicalDeviceFaultFeaturesEXT)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_DENSITY_MAP_2_FEATURES_EXT:
            return {alignof(VkPhysicalDeviceFragmentDensityMap2FeaturesEXT),
                    sizeof(VkPhysicalDeviceFragmentDensityMap2FeaturesEXT)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_DENSITY_MAP_FEATURES_EXT:
            return {alignof(VkPhysicalDeviceFragmentDensityMapFeaturesEXT), sizeof(VkPhysicalDeviceFragmentDensityMapFeaturesEXT)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_DENSITY_MAP_OFFSET_FEATURES_QCOM:
            return {alignof(VkPhysicalDeviceFragmentDensityMapOffsetFeaturesQCOM),
                    sizeof(VkPhysicalDeviceFragmentDensityMapOffsetFeaturesQCOM)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_SHADER_BARYCENTRIC_FEATURES_KHR:
            return {alignof(VkPhysicalDeviceFragmentShaderBarycentricFeaturesKHR),
                    sizeof(VkPhysicalDeviceFragmentShaderBarycentricFeaturesKHR)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_SHADER_INTERLOCK_FEATURES_EXT:
            return {alignof(VkPhysicalDeviceFragmentShaderInterlockFeaturesEXT),
                    sizeof(VkPhysicalDeviceFragmentShaderInterlockFeaturesEXT)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_SHADING_RATE_ENUMS_FEATURES_NV:
            return {alignof(VkPhysicalDeviceFragmentShadingRateEnumsFeaturesNV),
                    sizeof(VkPhysicalDeviceFragmentShadingRateEnumsFeaturesNV)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_SHADING_RATE_FEATURES_KHR:
            return {alignof(VkPhysicalDeviceFragmentShadingRateFeaturesKHR),
                    sizeof(VkPhysicalDeviceFragmentShadingRateFeaturesKHR)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAME_BOUNDARY_FEATURES_EXT:
            return {alignof(VkPhysicalDeviceFrameBoundaryFeaturesEXT), sizeof(VkPhysicalDeviceFrameBoundaryFeaturesEXT)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_GLOBAL_PRIORITY_QUERY_FEATURES:
            return {alignof(VkPhysicalDeviceGlobalPriorityQueryFeatures), sizeof(VkPhysicalDeviceGlobalPriorityQueryFeatures)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_GRAPHICS_PIPELINE_LIBRARY_FEATURES_EXT:
            return {alignof(VkPhysicalDeviceGraphicsPipelineLibraryFeaturesEXT),
                    sizeof(VkPhysicalDeviceGraphicsPipelineLibraryFeaturesEXT)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_HDR_VIVID_FEATURES_HUAWEI:
            return {alignof(VkPhysicalDeviceHdrVividFeaturesHUAWEI), sizeof(VkPhysicalDeviceHdrVividFeaturesHUAWEI)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_HOST_IMAGE_COPY_FEATURES:
            return {alignof(VkPhysicalDeviceHostImageCopyFeatures), sizeof(VkPhysicalDeviceHostImageCopyFeatures)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_HOST_QUERY_RESET_FEATURES:
            return {alignof(VkPhysicalDeviceHostQueryResetFeatures), sizeof(VkPhysicalDeviceHostQueryResetFeatures)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_2D_VIEW_OF_3D_FEATURES_EXT:
            return {alignof(VkPhysicalDeviceImage2DViewOf3DFeaturesEXT), sizeof(VkPhysicalDeviceImage2DViewOf3DFeaturesEXT)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_ALIGNMENT_CONTROL_FEATURES_MESA:
            return {alignof(VkPhysicalDeviceImageAlignmentControlFeaturesMESA),
                    sizeof(VkPhysicalDeviceImageAlignmentControlFeaturesMESA)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_COMPRESSION_CONTROL_FEATURES_EXT:
            return {alignof(VkPhysicalDeviceImageCompressionControlFeaturesEXT),
                    sizeof(VkPhysicalDeviceImageCompressionControlFeaturesEXT)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_COMPRESSION_CONTROL_SWAPCHAIN_FEATURES_EXT:
            return {alignof(VkPhysicalDeviceImageCompressionControlSwapchainFeaturesEXT),
                    sizeof(VkPhysicalDeviceImageCompressionControlSwapchainFeaturesEXT)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_PROCESSING_2_FEATURES_QCOM:
            return {alignof(VkPhysicalDeviceImageProcessing2FeaturesQCOM), sizeof(VkPhysicalDeviceImageProcessing2FeaturesQCOM)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_PROCESSING_FEATURES_QCOM:
            return {alignof(VkPhysicalDeviceImageProcessingFeaturesQCOM), sizeof(VkPhysicalDeviceImageProcessingFeaturesQCOM)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_ROBUSTNESS_FEATURES:
            return {alignof(VkPhysicalDeviceImageRobustnessFeatures), sizeof(VkPhysicalDeviceImageRobustnessFeatures)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_SLICED_VIEW_OF_3D_FEATURES_EXT:
            return {alignof(VkPhysicalDeviceImageSlicedViewOf3DFeaturesEXT),
                    sizeof(VkPhysicalDeviceImageSlicedViewOf3DFeaturesEXT)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_VIEW_MIN_LOD_FEATURES_EXT:
            return {alignof(VkPhysicalDeviceImageViewMinLodFeaturesEXT), sizeof(VkPhysicalDeviceImageViewMinLodFeaturesEXT)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGELESS_FRAMEBUFFER_FEATURES:
            return {alignof(VkPhysicalDeviceImagelessFramebufferFeatures), sizeof(VkPhysicalDeviceImagelessFramebufferFeatures)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_INDEX_TYPE_UINT8_FEATURES:
            return {alignof(VkPhysicalDeviceIndexTypeUint8Features), sizeof(VkPhysicalDeviceIndexTypeUint8Features)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_INHERITED_VIEWPORT_SCISSOR_FEATURES_NV:
            return {alignof(VkPhysicalDeviceInheritedViewportScissorFeaturesNV),
                    sizeof(VkPhysicalDeviceInheritedViewportScissorFeaturesNV)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_INLINE_UNIFORM_BLOCK_FEATURES:
            return {alignof(VkPhysicalDeviceInlineUniformBlockFeatures), sizeof(VkPhysicalDeviceInlineUniformBlockFeatures)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_INVOCATION_MASK_FEATURES_HUAWEI:
            return {alignof(VkPhysicalDeviceInvocationMaskFeaturesHUAWEI), sizeof(VkPhysicalDeviceInvocationMaskFeaturesHUAWEI)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_LEGACY_DITHERING_FEATURES_EXT:
            return {alignof(VkPhysicalDeviceLegacyDitheringFeaturesEXT), sizeof(VkPhysicalDeviceLegacyDitheringFeaturesEXT)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_LEGACY_VERTEX_ATTRIBUTES_FEATURES_EXT:
            return {alignof(VkPhysicalDeviceLegacyVertexAttributesFeaturesEXT),
                    sizeof(VkPhysicalDeviceLegacyVertexAttributesFeaturesEXT)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_LINE_RASTERIZATION_FEATURES:
            return {alignof(VkPhysicalDeviceLineRasterizationFeatures), sizeof(VkPhysicalDeviceLineRasterizationFeatures)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_LINEAR_COLOR_ATTACHMENT_FEATURES_NV:
            return {alignof(VkPhysicalDeviceLinearColorAttachmentFeaturesNV),
                    sizeof(VkPhysicalDeviceLinearColorAttachmentFeaturesNV)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MAINTENANCE_4_FEATURES:
            return {alignof(VkPhysicalDeviceMaintenance4Features), sizeof(VkPhysicalDeviceMaintenance4Features)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MAINTENANCE_5_FEATURES:
            return {alignof(VkPhysicalDeviceMaintenance5Features), sizeof(VkPhysicalDeviceMaintenance5Features)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MAINTENANCE_6_FEATURES:
            return {alignof(VkPhysicalDeviceMaintenance6Features), sizeof(VkPhysicalDeviceMaintenance6Features)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MAINTENANCE_7_FEATURES_KHR:
            return {alignof(VkPhysicalDeviceMaintenance7FeaturesKHR), sizeof(VkPhysicalDeviceMaintenance7FeaturesKHR)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MAINTENANCE_8_FEATURES_KHR:
            return {alignof(VkPhysicalDeviceMaintenance8FeaturesKHR), sizeof(VkPhysicalDeviceMaintenance8FeaturesKHR)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MAP_MEMORY_PLACED_FEATURES_EXT:
            return {alignof(VkPhysicalDeviceMapMemoryPlacedFeaturesEXT), sizeof(VkPhysicalDeviceMapMemoryPlacedFeaturesEXT)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MEMORY_DECOMPRESSION_FEATURES_NV:
            return {alignof(VkPhysicalDeviceMemoryDecompressionFeaturesNV), sizeof(VkPhysicalDeviceMemoryDecompressionFeaturesNV)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MEMORY_PRIORITY_FEATURES_EXT:
            return {alignof(VkPhysicalDeviceMemoryPriorityFeaturesEXT), sizeof(VkPhysicalDeviceMemoryPriorityFeaturesEXT)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MESH_SHADER_FEATURES_EXT:
            return {alignof(VkPhysicalDeviceMeshShaderFeaturesEXT), sizeof(VkPhysicalDeviceMeshShaderFeaturesEXT)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MESH_SHADER_FEATURES_NV:
            return {alignof(VkPhysicalDeviceMeshShaderFeaturesNV), sizeof(VkPhysicalDeviceMeshShaderFeaturesNV)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MULTI_DRAW_FEATURES_EXT:
            return {alignof(VkPhysicalDeviceMultiDrawFeaturesEXT), sizeof(VkPhysicalDeviceMultiDrawFeaturesEXT)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MULTISAMPLED_RENDER_TO_SINGLE_SAMPLED_FEATURES_EXT:
            return {alignof(VkPhysicalDeviceMultisampledRenderToSingleSampledFeaturesEXT),
                    sizeof(VkPhysicalDeviceMultisampledRenderToSingleSampledFeaturesEXT)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MULTIVIEW_FEATURES:
            return {alignof(VkPhysicalDeviceMultiviewFeatures), sizeof(VkPhysicalDeviceMultiviewFeatures)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MULTIVIEW_PER_VIEW_RENDER_AREAS_FEATURES_QCOM:
            return {alignof(VkPhysicalDeviceMultiviewPerViewRenderAreasFeaturesQCOM),
                    sizeof(VkPhysicalDeviceMultiviewPerViewRenderAreasFeaturesQCOM)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MULTIVIEW_PER_VIEW_VIEWPORTS_FEATURES_QCOM:
            return {alignof(VkPhysicalDeviceMultiviewPerViewViewportsFeaturesQCOM),
                    sizeof(VkPhysicalDeviceMultiviewPerViewViewportsFeaturesQCOM)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MUTABLE_DESCRIPTOR_TYPE_FEATURES_EXT:
            return {alignof(VkPhysicalDeviceMutableDescriptorTypeFeaturesEXT),
                    sizeof(VkPhysicalDeviceMutableDescriptorTypeFeaturesEXT)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_NESTED_COMMAND_BUFFER_FEATURES_EXT:
            return {alignof(VkPhysicalDeviceNestedCommandBufferFeaturesEXT),
                    sizeof(VkPhysicalDeviceNestedCommandBufferFeaturesEXT)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_NON_SEAMLESS_CUBE_MAP_FEATURES_EXT:
            return {alignof(VkPhysicalDeviceNonSeamlessCubeMapFeaturesEXT), sizeof(VkPhysicalDeviceNonSeamlessCubeMapFeaturesEXT)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_OPACITY_MICROMAP_FEATURES_EXT:
            return {alignof(VkPhysicalDeviceOpacityMicromapFeaturesEXT), sizeof(VkPhysicalDeviceOpacityMicromapFeaturesEXT)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_OPTICAL_FLOW_FEATURES_NV:
            return {alignof(VkPhysicalDeviceOpticalFlowFeaturesNV), sizeof(VkPhysicalDeviceOpticalFlowFeaturesNV)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PAGEABLE_DEVICE_LOCAL_MEMORY_FEATURES_EXT:
            return {alignof(VkPhysicalDevicePageableDeviceLocalMemoryFeaturesEXT),
                    sizeof(VkPhysicalDevicePageableDeviceLocalMemoryFeaturesEXT)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PARTITIONED_ACCELERATION_STRUCTURE_FEATURES_NV:
            return {alignof(VkPhysicalDevicePartitionedAccelerationStructureFeaturesNV),
                    sizeof(VkPhysicalDevicePartitionedAccelerationStructureFeaturesNV)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PER_STAGE_DESCRIPTOR_SET_FEATURES_NV:
            return {alignof(VkPhysicalDevicePerStageDescriptorSetFeaturesNV),
                    sizeof(VkPhysicalDevicePerStageDescriptorSetFeaturesNV)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PERFORMANCE_QUERY_FEATURES_KHR:
            return {alignof(VkPhysicalDevicePerformanceQueryFeaturesKHR), sizeof(VkPhysicalDevicePerformanceQueryFeaturesKHR)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PIPELINE_BINARY_FEATURES_KHR:
            return {alignof(VkPhysicalDevicePipelineBinaryFeaturesKHR), sizeof(VkPhysicalDevicePipelineBinaryFeaturesKHR)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PIPELINE_CREATION_CACHE_CONTROL_FEATURES:
            return {alignof(VkPhysicalDevicePipelineCreationCacheControlFeatures),
                    sizeof(VkPhysicalDevicePipelineCreationCacheControlFeatures)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PIPELINE_EXECUTABLE_PROPERTIES_FEATURES_KHR:
            return {alignof(VkPhysicalDevicePipelineExecutablePropertiesFeaturesKHR),
                    sizeof(VkPhysicalDevicePipelineExecutablePropertiesFeaturesKHR)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PIPELINE_LIBRARY_GROUP_HANDLES_FEATURES_EXT:
            return {alignof(VkPhysicalDevicePipelineLibraryGroupHandlesFeaturesEXT),
                    sizeof(VkPhysicalDevicePipelineLibraryGroupHandlesFeaturesEXT)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PIPELINE_OPACITY_MICROMAP_FEATURES_ARM:
            return {alignof(VkPhysicalDevicePipelineOpacityMicromapFeaturesARM),
                    sizeof(VkPhysicalDevicePipelineOpacityMicromapFeaturesARM)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PIPELINE_PROPERTIES_FEATURES_EXT:
            return {alignof(VkPhysicalDevicePipelinePropertiesFeaturesEXT), sizeof(VkPhysicalDevicePipelinePropertiesFeaturesEXT)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PIPELINE_PROTECTED_ACCESS_FEATURES:
            return {alignof(VkPhysicalDevicePipelineProtectedAccessFeatures),
                    sizeof(VkPhysicalDevicePipelineProtectedAccessFeatures)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PIPELINE_ROBUSTNESS_FEATURES:
            return {alignof(VkPhysicalDevicePipelineRobustnessFeatures), sizeof(VkPhysicalDevicePipelineRobustnessFeatures)};
#ifdef VK_ENABLE_BETA_EXTENSIONS
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PORTABILITY_SUBSET_FEATURES_KHR:
            return {alignof(VkPhysicalDevicePortabilitySubsetFeaturesKHR), sizeof(VkPhysicalDevicePortabilitySubsetFeaturesKHR)};
#endif  // VK_ENABLE_BETA_EXTENSIONS
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PRESENT_BARRIER_FEATURES_NV:
            return {alignof(VkPhysicalDevicePresentBarrierFeaturesNV), sizeof(VkPhysicalDevicePresentBarrierFeaturesNV)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PRESENT_ID_FEATURES_KHR:
            return {alignof(VkPhysicalDevicePresentIdFeaturesKHR), sizeof(VkPhysicalDevicePresentIdFeaturesKHR)};
#ifdef VK_ENABLE_BETA_EXTENSIONS
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PRESENT_METERING_FEATURES_NV:
            return {alignof(VkPhysicalDevicePresentMeteringFeaturesNV), sizeof(VkPhysicalDevicePresentMeteringFeaturesNV)};
#endif  // VK_ENABLE_BETA_EXTENSIONS
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PRESENT_MODE_FIFO_LATEST_READY_FEATURES_EXT:
            return {alignof(VkPhysicalDevicePresentModeFifoLatestReadyFeaturesEXT),
                    sizeof(VkPhysicalDevicePresentModeFifoLatestReadyFeaturesEXT)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PRESENT_WAIT_FEATURES_KHR:
            return {alignof(VkPhysicalDevicePresentWaitFeaturesKHR), sizeof(VkPhysicalDevicePresentWaitFeaturesKHR)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PRIMITIVE_TOPOLOGY_LIST_RESTART_FEATURES_EXT:
            return {alignof(VkPhysicalDevicePrimitiveTopologyListRestartFeaturesEXT),
                    sizeof(VkPhysicalDevicePrimitiveTopologyListRestartFeaturesEXT)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PRIMITIVES_GENERATED_QUERY_FEATURES_EXT:
            return {alignof(VkPhysicalDevicePrimitivesGeneratedQueryFeaturesEXT),
                    sizeof(VkPhysicalDevicePrimitivesGeneratedQueryFeaturesEXT)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PRIVATE_DATA_FEATURES:
            return {alignof(VkPhysicalDevicePrivateDataFeatures), sizeof(VkPhysicalDevicePrivateDataFeatures)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PROTECTED_MEMORY_FEATURES:
            return {alignof(VkPhysicalDeviceProtectedMemoryFeatures), sizeof(VkPhysicalDeviceProtectedMemoryFeatures)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PROVOKING_VERTEX_FEATURES_EXT:
            return {alignof(VkPhysicalDeviceProvokingVertexFeaturesEXT), sizeof(VkPhysicalDeviceProvokingVertexFeaturesEXT)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RGBA10X6_FORMATS_FEATURES_EXT:
            return {alignof(VkPhysicalDeviceRGBA10X6FormatsFeaturesEXT), sizeof(VkPhysicalDeviceRGBA10X6FormatsFeaturesEXT)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RASTERIZATION_ORDER_ATTACHMENT_ACCESS_FEATURES_EXT:
            return {alignof(VkPhysicalDeviceRasterizationOrderAttachmentAccessFeaturesEXT),
                    sizeof(VkPhysicalDeviceRasterizationOrderAttachmentAccessFeaturesEXT)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RAW_ACCESS_CHAINS_FEATURES_NV:
            return {alignof(VkPhysicalDeviceRawAccessChainsFeaturesNV), sizeof(VkPhysicalDeviceRawAccessChainsFeaturesNV)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RAY_QUERY_FEATURES_KHR:
            return {alignof(VkPhysicalDeviceRayQueryFeaturesKHR), sizeof(VkPhysicalDeviceRayQueryFeaturesKHR)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RAY_TRACING_INVOCATION_REORDER_FEATURES_NV:
            return {alignof(VkPhysicalDeviceRayTracingInvocationReorderFeaturesNV),
                    sizeof(VkPhysicalDeviceRayTracingInvocationReorderFeaturesNV)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RAY_TRACING_LINEAR_SWEPT_SPHERES_FEATURES_NV:
            return {alignof(VkPhysicalDeviceRayTracingLinearSweptSpheresFeaturesNV),
                    sizeof(VkPhysicalDeviceRayTracingLinearSweptSpheresFeaturesNV)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RAY_TRACING_MAINTENANCE_1_FEATURES_KHR:
            return {alignof(VkPhysicalDeviceRayTracingMaintenance1FeaturesKHR),
                    sizeof(VkPhysicalDeviceRayTracingMaintenance1FeaturesKHR)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RAY_TRACING_MOTION_BLUR_FEATURES_NV:
            return {alignof(VkPhysicalDeviceRayTracingMotionBlurFeaturesNV),
                    sizeof(VkPhysicalDeviceRayTracingMotionBlurFeaturesNV)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RAY_TRACING_PIPELINE_FEATURES_KHR:
            return {alignof(VkPhysicalDeviceRayTracingPipelineFeaturesKHR), sizeof(VkPhysicalDeviceRayTracingPipelineFeaturesKHR)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RAY_TRACING_POSITION_FETCH_FEATURES_KHR:
            return {alignof(VkPhysicalDeviceRayTracingPositionFetchFeaturesKHR),
                    sizeof(VkPhysicalDeviceRayTracingPositionFetchFeaturesKHR)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RAY_TRACING_VALIDATION_FEATURES_NV:
            return {alignof(VkPhysicalDeviceRayTracingValidationFeaturesNV),
                    sizeof(VkPhysicalDeviceRayTracingValidationFeaturesNV)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RELAXED_LINE_RASTERIZATION_FEATURES_IMG:
            return {alignof(VkPhysicalDeviceRelaxedLineRasterizationFeaturesIMG),
                    sizeof(VkPhysicalDeviceRelaxedLineRasterizationFeaturesIMG)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RENDER_PASS_STRIPED_FEATURES_ARM:
            return {alignof(VkPhysicalDeviceRenderPassStripedFeaturesARM), sizeof(VkPhysicalDeviceRenderPassStripedFeaturesARM)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_REPRESENTATIVE_FRAGMENT_TEST_FEATURES_NV:
            return {alignof(VkPhysicalDeviceRepresentativeFragmentTestFeaturesNV),
                    sizeof(VkPhysicalDeviceRepresentativeFragmentTestFeaturesNV)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ROBUSTNESS_2_FEATURES_EXT:
            return {alignof(VkPhysicalDeviceRobustness2FeaturesEXT), sizeof(VkPhysicalDeviceRobustness2FeaturesEXT)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SAMPLER_YCBCR_CONVERSION_FEATURES:
            return {alignof(VkPhysicalDeviceSamplerYcbcrConversionFeatures),
                    sizeof(VkPhysicalDeviceSamplerYcbcrConversionFeatures)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SCALAR_BLOCK_LAYOUT_FEATURES:
            return {alignof(VkPhysicalDeviceScalarBlockLayoutFeatures), sizeof(VkPhysicalDeviceScalarBlockLayoutFeatures)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SCHEDULING_CONTROLS_FEATURES_ARM:
            return {alignof(VkPhysicalDeviceSchedulingControlsFeaturesARM), sizeof(VkPhysicalDeviceSchedulingControlsFeaturesARM)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SEPARATE_DEPTH_STENCIL_LAYOUTS_FEATURES:
            return {alignof(VkPhysicalDeviceSeparateDepthStencilLayoutsFeatures),
                    sizeof(VkPhysicalDeviceSeparateDepthStencilLayoutsFeatures)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_ATOMIC_FLOAT16_VECTOR_FEATURES_NV:
            return {alignof(VkPhysicalDeviceShaderAtomicFloat16VectorFeaturesNV),
                    sizeof(VkPhysicalDeviceShaderAtomicFloat16VectorFeaturesNV)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_ATOMIC_FLOAT_2_FEATURES_EXT:
            return {alignof(VkPhysicalDeviceShaderAtomicFloat2FeaturesEXT), sizeof(VkPhysicalDeviceShaderAtomicFloat2FeaturesEXT)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_ATOMIC_FLOAT_FEATURES_EXT:
            return {alignof(VkPhysicalDeviceShaderAtomicFloatFeaturesEXT), sizeof(VkPhysicalDeviceShaderAtomicFloatFeaturesEXT)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_ATOMIC_INT64_FEATURES:
            return {alignof(VkPhysicalDeviceShaderAtomicInt64Features), sizeof(VkPhysicalDeviceShaderAtomicInt64Features)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_CLOCK_FEATURES_KHR:
            return {alignof(VkPhysicalDeviceShaderClockFeaturesKHR), sizeof(VkPhysicalDeviceShaderClockFeaturesKHR)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_CORE_BUILTINS_FEATURES_ARM:
            return {alignof(VkPhysicalDeviceShaderCoreBuiltinsFeaturesARM), sizeof(VkPhysicalDeviceShaderCoreBuiltinsFeaturesARM)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_DEMOTE_TO_HELPER_INVOCATION_FEATURES:
            return {alignof(VkPhysicalDeviceShaderDemoteToHelperInvocationFeatures),
                    sizeof(VkPhysicalDeviceShaderDemoteToHelperInvocationFeatures)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_DRAW_PARAMETERS_FEATURES:
            return {alignof(VkPhysicalDeviceShaderDrawParametersFeatures), sizeof(VkPhysicalDeviceShaderDrawParametersFeatures)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_EARLY_AND_LATE_FRAGMENT_TESTS_FEATURES_AMD:
            return {alignof(VkPhysicalDeviceShaderEarlyAndLateFragmentTestsFeaturesAMD),
                    sizeof(VkPhysicalDeviceShaderEarlyAndLateFragmentTestsFeaturesAMD)};
#ifdef VK_ENABLE_BETA_EXTENSIONS
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_ENQUEUE_FEATURES_AMDX:
            return {alignof(VkPhysicalDeviceShaderEnqueueFeaturesAMDX), sizeof(VkPhysicalDeviceShaderEnqueueFeaturesAMDX)};
#endif  // VK_ENABLE_BETA_EXTENSIONS
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_EXPECT_ASSUME_FEATURES:
            return {alignof(VkPhysicalDeviceShaderExpectAssumeFeatures), sizeof(VkPhysicalDeviceShaderExpectAssumeFeatures)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_FLOAT16_INT8_FEATURES:
            return {alignof(VkPhysicalDeviceShaderFloat16Int8Features), sizeof(VkPhysicalDeviceShaderFloat16Int8Features)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_FLOAT_CONTROLS_2_FEATURES:
            return {alignof(VkPhysicalDeviceShaderFloatControls2Features), sizeof(VkPhysicalDeviceShaderFloatControls2Features)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_IMAGE_ATOMIC_INT64_FEATURES_EXT:
            return {alignof(VkPhysicalDeviceShaderImageAtomicInt64FeaturesEXT),
                    sizeof(VkPhysicalDeviceShaderImageAtomicInt64FeaturesEXT)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_IMAGE_FOOTPRINT_FEATURES_NV:
            return {alignof(VkPhysicalDeviceShaderImageFootprintFeaturesNV),
                    sizeof(VkPhysicalDeviceShaderImageFootprintFeaturesNV)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_INTEGER_DOT_PRODUCT_FEATURES:
            return {alignof(VkPhysicalDeviceShaderIntegerDotProductFeatures),
                    sizeof(VkPhysicalDeviceShaderIntegerDotProductFeatures)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_INTEGER_FUNCTIONS_2_FEATURES_INTEL:
            return {alignof(VkPhysicalDeviceShaderIntegerFunctions2FeaturesINTEL),
                    sizeof(VkPhysicalDeviceShaderIntegerFunctions2FeaturesINTEL)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_MAXIMAL_RECONVERGENCE_FEATURES_KHR:
            return {alignof(VkPhysicalDeviceShaderMaximalReconvergenceFeaturesKHR),
                    sizeof(VkPhysicalDeviceShaderMaximalReconvergenceFeaturesKHR)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_MODULE_IDENTIFIER_FEATURES_EXT:
            return {alignof(VkPhysicalDeviceShaderModuleIdentifierFeaturesEXT),
                    sizeof(VkPhysicalDeviceShaderModuleIdentifierFeaturesEXT)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_OBJECT_FEATURES_EXT:
            return {alignof(VkPhysicalDeviceShaderObjectFeaturesEXT), sizeof(VkPhysicalDeviceShaderObjectFeaturesEXT)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_QUAD_CONTROL_FEATURES_KHR:
            return {alignof(VkPhysicalDeviceShaderQuadControlFeaturesKHR), sizeof(VkPhysicalDeviceShaderQuadControlFeaturesKHR)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_RELAXED_EXTENDED_INSTRUCTION_FEATURES_KHR:
            return {alignof(VkPhysicalDeviceShaderRelaxedExtendedInstructionFeaturesKHR),
                    sizeof(VkPhysicalDeviceShaderRelaxedExtendedInstructionFeaturesKHR)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_REPLICATED_COMPOSITES_FEATURES_EXT:
            return {alignof(VkPhysicalDeviceShaderReplicatedCompositesFeaturesEXT),
                    sizeof(VkPhysicalDeviceShaderReplicatedCompositesFeaturesEXT)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_SM_BUILTINS_FEATURES_NV:
            return {alignof(VkPhysicalDeviceShaderSMBuiltinsFeaturesNV), sizeof(VkPhysicalDeviceShaderSMBuiltinsFeaturesNV)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_SUBGROUP_EXTENDED_TYPES_FEATURES:
            return {alignof(VkPhysicalDeviceShaderSubgroupExtendedTypesFeatures),
                    sizeof(VkPhysicalDeviceShaderSubgroupExtendedTypesFeatures)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_SUBGROUP_ROTATE_FEATURES:
            return {alignof(VkPhysicalDeviceShaderSubgroupRotateFeatures), sizeof(VkPhysicalDeviceShaderSubgroupRotateFeatures)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_SUBGROUP_UNIFORM_CONTROL_FLOW_FEATURES_KHR:
            return {alignof(VkPhysicalDeviceShaderSubgroupUniformControlFlowFeaturesKHR),
                    sizeof(VkPhysicalDeviceShaderSubgroupUniformControlFlowFeaturesKHR)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_TERMINATE_INVOCATION_FEATURES:
            return {alignof(VkPhysicalDeviceShaderTerminateInvocationFeatures),
                    sizeof(VkPhysicalDeviceShaderTerminateInvocationFeatures)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_TILE_IMAGE_FEATURES_EXT:
            return {alignof(VkPhysicalDeviceShaderTileImageFeaturesEXT), sizeof(VkPhysicalDeviceShaderTileImageFeaturesEXT)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADING_RATE_IMAGE_FEATURES_NV:
            return {alignof(VkPhysicalDeviceShadingRateImageFeaturesNV), sizeof(VkPhysicalDeviceShadingRateImageFeaturesNV)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SUBGROUP_SIZE_CONTROL_FEATURES:
            return {alignof(VkPhysicalDeviceSubgroupSizeControlFeatures), sizeof(VkPhysicalDeviceSubgroupSizeControlFeatures)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SUBPASS_MERGE_FEEDBACK_FEATURES_EXT:
            return {alignof(VkPhysicalDeviceSubpassMergeFeedbackFeaturesEXT),
                    sizeof(VkPhysicalDeviceSubpassMergeFeedbackFeaturesEXT)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SUBPASS_SHADING_FEATURES_HUAWEI:
            return {alignof(VkPhysicalDeviceSubpassShadingFeaturesHUAWEI), sizeof(VkPhysicalDeviceSubpassShadingFeaturesHUAWEI)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SWAPCHAIN_MAINTENANCE_1_FEATURES_EXT:
            return {alignof(VkPhysicalDeviceSwapchainMaintenance1FeaturesEXT),
                    sizeof(VkPhysicalDeviceSwapchainMaintenance1FeaturesEXT)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SYNCHRONIZATION_2_FEATURES:
            return {alignof(VkPhysicalDeviceSynchronization2Features), sizeof(VkPhysicalDeviceSynchronization2Features)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TEXEL_BUFFER_ALIGNMENT_FEATURES_EXT:
            return {alignof(VkPhysicalDeviceTexelBufferAlignmentFeaturesEXT),
                    sizeof(VkPhysicalDeviceTexelBufferAlignmentFeaturesEXT)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TEXTURE_COMPRESSION_ASTC_HDR_FEATURES:
            return {alignof(VkPhysicalDeviceTextureCompressionASTCHDRFeatures),
                    sizeof(VkPhysicalDeviceTextureCompressionASTCHDRFeatures)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TILE_PROPERTIES_FEATURES_QCOM:
            return {alignof(VkPhysicalDeviceTilePropertiesFeaturesQCOM), sizeof(VkPhysicalDeviceTilePropertiesFeaturesQCOM)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TIMELINE_SEMAPHORE_FEATURES:
            return {alignof(VkPhysicalDeviceTimelineSemaphoreFeatures), sizeof(VkPhysicalDeviceTimelineSemaphoreFeatures)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TRANSFORM_FEEDBACK_FEATURES_EXT:
            return {alignof(VkPhysicalDeviceTransformFeedbackFeaturesEXT), sizeof(VkPhysicalDeviceTransformFeedbackFeaturesEXT)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_UNIFORM_BUFFER_STANDARD_LAYOUT_FEATURES:
            return {alignof(VkPhysicalDeviceUniformBufferStandardLayoutFeatures),
                    sizeof(VkPhysicalDeviceUniformBufferStandardLayoutFeatures)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VARIABLE_POINTERS_FEATURES:
            return {alignof(VkPhysicalDeviceVariablePointersFeatures), sizeof(VkPhysicalDeviceVariablePointersFeatures)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VERTEX_ATTRIBUTE_DIVISOR_FEATURES:
            return {alignof(VkPhysicalDeviceVertexAttributeDivisorFeatures),
                    sizeof(VkPhysicalDeviceVertexAttributeDivisorFeatures)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VERTEX_ATTRIBUTE_ROBUSTNESS_FEATURES_EXT:
            return {alignof(VkPhysicalDeviceVertexAttributeRobustnessFeaturesEXT),
                    sizeof(VkPhysicalDeviceVertexAttributeRobustnessFeaturesEXT)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VERTEX_INPUT_DYNAMIC_STATE_FEATURES_EXT:
            return {alignof(VkPhysicalDeviceVertexInputDynamicStateFeaturesEXT),
                    sizeof(VkPhysicalDeviceVertexInputDynamicStateFeaturesEXT)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VIDEO_ENCODE_AV1_FEATURES_KHR:
            return {alignof(VkPhysicalDeviceVideoEncodeAV1FeaturesKHR), sizeof(VkPhysicalDeviceVideoEncodeAV1FeaturesKHR)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VIDEO_ENCODE_QUANTIZATION_MAP_FEATURES_KHR:
            return {alignof(VkPhysicalDeviceVideoEncodeQuantizationMapFeaturesKHR),
                    sizeof(VkPhysicalDeviceVideoEncodeQuantizationMapFeaturesKHR)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VIDEO_MAINTENANCE_1_FEATURES_KHR:
            return {alignof(VkPhysicalDeviceVideoMaintenance1FeaturesKHR), sizeof(VkPhysicalDeviceVideoMaintenance1FeaturesKHR)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VIDEO_MAINTENANCE_2_FEATURES_KHR:
            return {alignof(VkPhysicalDeviceVideoMaintenance2FeaturesKHR), sizeof(VkPhysicalDeviceVideoMaintenance2FeaturesKHR)};
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
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_WORKGROUP_MEMORY_EXPLICIT_LAYOUT_FEATURES_KHR:
            return {alignof(VkPhysicalDeviceWorkgroupMemoryExplicitLayoutFeaturesKHR),
                    sizeof(VkPhysicalDeviceWorkgroupMemoryExplicitLayoutFeaturesKHR)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_YCBCR_2_PLANE_444_FORMATS_FEATURES_EXT:
            return {alignof(VkPhysicalDeviceYcbcr2Plane444FormatsFeaturesEXT),
                    sizeof(VkPhysicalDeviceYcbcr2Plane444FormatsFeaturesEXT)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_YCBCR_DEGAMMA_FEATURES_QCOM:
            return {alignof(VkPhysicalDeviceYcbcrDegammaFeaturesQCOM), sizeof(VkPhysicalDeviceYcbcrDegammaFeaturesQCOM)};
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
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ACCELERATION_STRUCTURE_PROPERTIES_KHR:
            return {alignof(VkPhysicalDeviceAccelerationStructurePropertiesKHR),
                    sizeof(VkPhysicalDeviceAccelerationStructurePropertiesKHR)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_BLEND_OPERATION_ADVANCED_PROPERTIES_EXT:
            return {alignof(VkPhysicalDeviceBlendOperationAdvancedPropertiesEXT),
                    sizeof(VkPhysicalDeviceBlendOperationAdvancedPropertiesEXT)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_CLUSTER_ACCELERATION_STRUCTURE_PROPERTIES_NV:
            return {alignof(VkPhysicalDeviceClusterAccelerationStructurePropertiesNV),
                    sizeof(VkPhysicalDeviceClusterAccelerationStructurePropertiesNV)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_CLUSTER_CULLING_SHADER_PROPERTIES_HUAWEI:
            return {alignof(VkPhysicalDeviceClusterCullingShaderPropertiesHUAWEI),
                    sizeof(VkPhysicalDeviceClusterCullingShaderPropertiesHUAWEI)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COMPUTE_SHADER_DERIVATIVES_PROPERTIES_KHR:
            return {alignof(VkPhysicalDeviceComputeShaderDerivativesPropertiesKHR),
                    sizeof(VkPhysicalDeviceComputeShaderDerivativesPropertiesKHR)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_CONSERVATIVE_RASTERIZATION_PROPERTIES_EXT:
            return {alignof(VkPhysicalDeviceConservativeRasterizationPropertiesEXT),
                    sizeof(VkPhysicalDeviceConservativeRasterizationPropertiesEXT)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COOPERATIVE_MATRIX_2_PROPERTIES_NV:
            return {alignof(VkPhysicalDeviceCooperativeMatrix2PropertiesNV),
                    sizeof(VkPhysicalDeviceCooperativeMatrix2PropertiesNV)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COOPERATIVE_MATRIX_PROPERTIES_KHR:
            return {alignof(VkPhysicalDeviceCooperativeMatrixPropertiesKHR),
                    sizeof(VkPhysicalDeviceCooperativeMatrixPropertiesKHR)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COOPERATIVE_MATRIX_PROPERTIES_NV:
            return {alignof(VkPhysicalDeviceCooperativeMatrixPropertiesNV), sizeof(VkPhysicalDeviceCooperativeMatrixPropertiesNV)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COOPERATIVE_VECTOR_PROPERTIES_NV:
            return {alignof(VkPhysicalDeviceCooperativeVectorPropertiesNV), sizeof(VkPhysicalDeviceCooperativeVectorPropertiesNV)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COPY_MEMORY_INDIRECT_PROPERTIES_NV:
            return {alignof(VkPhysicalDeviceCopyMemoryIndirectPropertiesNV),
                    sizeof(VkPhysicalDeviceCopyMemoryIndirectPropertiesNV)};
#ifdef VK_ENABLE_BETA_EXTENSIONS
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_CUDA_KERNEL_LAUNCH_PROPERTIES_NV:
            return {alignof(VkPhysicalDeviceCudaKernelLaunchPropertiesNV), sizeof(VkPhysicalDeviceCudaKernelLaunchPropertiesNV)};
#endif  // VK_ENABLE_BETA_EXTENSIONS
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_CUSTOM_BORDER_COLOR_PROPERTIES_EXT:
            return {alignof(VkPhysicalDeviceCustomBorderColorPropertiesEXT),
                    sizeof(VkPhysicalDeviceCustomBorderColorPropertiesEXT)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DEPTH_STENCIL_RESOLVE_PROPERTIES:
            return {alignof(VkPhysicalDeviceDepthStencilResolveProperties), sizeof(VkPhysicalDeviceDepthStencilResolveProperties)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DESCRIPTOR_BUFFER_DENSITY_MAP_PROPERTIES_EXT:
            return {alignof(VkPhysicalDeviceDescriptorBufferDensityMapPropertiesEXT),
                    sizeof(VkPhysicalDeviceDescriptorBufferDensityMapPropertiesEXT)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DESCRIPTOR_BUFFER_PROPERTIES_EXT:
            return {alignof(VkPhysicalDeviceDescriptorBufferPropertiesEXT), sizeof(VkPhysicalDeviceDescriptorBufferPropertiesEXT)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DESCRIPTOR_INDEXING_PROPERTIES:
            return {alignof(VkPhysicalDeviceDescriptorIndexingProperties), sizeof(VkPhysicalDeviceDescriptorIndexingProperties)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DEVICE_GENERATED_COMMANDS_PROPERTIES_EXT:
            return {alignof(VkPhysicalDeviceDeviceGeneratedCommandsPropertiesEXT),
                    sizeof(VkPhysicalDeviceDeviceGeneratedCommandsPropertiesEXT)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DEVICE_GENERATED_COMMANDS_PROPERTIES_NV:
            return {alignof(VkPhysicalDeviceDeviceGeneratedCommandsPropertiesNV),
                    sizeof(VkPhysicalDeviceDeviceGeneratedCommandsPropertiesNV)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DISCARD_RECTANGLE_PROPERTIES_EXT:
            return {alignof(VkPhysicalDeviceDiscardRectanglePropertiesEXT), sizeof(VkPhysicalDeviceDiscardRectanglePropertiesEXT)};
#ifdef VK_ENABLE_BETA_EXTENSIONS
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DISPLACEMENT_MICROMAP_PROPERTIES_NV:
            return {alignof(VkPhysicalDeviceDisplacementMicromapPropertiesNV),
                    sizeof(VkPhysicalDeviceDisplacementMicromapPropertiesNV)};
#endif  // VK_ENABLE_BETA_EXTENSIONS
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DRIVER_PROPERTIES:
            return {alignof(VkPhysicalDeviceDriverProperties), sizeof(VkPhysicalDeviceDriverProperties)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DRM_PROPERTIES_EXT:
            return {alignof(VkPhysicalDeviceDrmPropertiesEXT), sizeof(VkPhysicalDeviceDrmPropertiesEXT)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTENDED_DYNAMIC_STATE_3_PROPERTIES_EXT:
            return {alignof(VkPhysicalDeviceExtendedDynamicState3PropertiesEXT),
                    sizeof(VkPhysicalDeviceExtendedDynamicState3PropertiesEXT)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTENDED_SPARSE_ADDRESS_SPACE_PROPERTIES_NV:
            return {alignof(VkPhysicalDeviceExtendedSparseAddressSpacePropertiesNV),
                    sizeof(VkPhysicalDeviceExtendedSparseAddressSpacePropertiesNV)};
#ifdef VK_USE_PLATFORM_ANDROID_KHR
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTERNAL_FORMAT_RESOLVE_PROPERTIES_ANDROID:
            return {alignof(VkPhysicalDeviceExternalFormatResolvePropertiesANDROID),
                    sizeof(VkPhysicalDeviceExternalFormatResolvePropertiesANDROID)};
#endif  // VK_USE_PLATFORM_ANDROID_KHR
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTERNAL_MEMORY_HOST_PROPERTIES_EXT:
            return {alignof(VkPhysicalDeviceExternalMemoryHostPropertiesEXT),
                    sizeof(VkPhysicalDeviceExternalMemoryHostPropertiesEXT)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FLOAT_CONTROLS_PROPERTIES:
            return {alignof(VkPhysicalDeviceFloatControlsProperties), sizeof(VkPhysicalDeviceFloatControlsProperties)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_DENSITY_MAP_2_PROPERTIES_EXT:
            return {alignof(VkPhysicalDeviceFragmentDensityMap2PropertiesEXT),
                    sizeof(VkPhysicalDeviceFragmentDensityMap2PropertiesEXT)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_DENSITY_MAP_OFFSET_PROPERTIES_QCOM:
            return {alignof(VkPhysicalDeviceFragmentDensityMapOffsetPropertiesQCOM),
                    sizeof(VkPhysicalDeviceFragmentDensityMapOffsetPropertiesQCOM)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_DENSITY_MAP_PROPERTIES_EXT:
            return {alignof(VkPhysicalDeviceFragmentDensityMapPropertiesEXT),
                    sizeof(VkPhysicalDeviceFragmentDensityMapPropertiesEXT)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_SHADER_BARYCENTRIC_PROPERTIES_KHR:
            return {alignof(VkPhysicalDeviceFragmentShaderBarycentricPropertiesKHR),
                    sizeof(VkPhysicalDeviceFragmentShaderBarycentricPropertiesKHR)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_SHADING_RATE_ENUMS_PROPERTIES_NV:
            return {alignof(VkPhysicalDeviceFragmentShadingRateEnumsPropertiesNV),
                    sizeof(VkPhysicalDeviceFragmentShadingRateEnumsPropertiesNV)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_SHADING_RATE_PROPERTIES_KHR:
            return {alignof(VkPhysicalDeviceFragmentShadingRatePropertiesKHR),
                    sizeof(VkPhysicalDeviceFragmentShadingRatePropertiesKHR)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_GRAPHICS_PIPELINE_LIBRARY_PROPERTIES_EXT:
            return {alignof(VkPhysicalDeviceGraphicsPipelineLibraryPropertiesEXT),
                    sizeof(VkPhysicalDeviceGraphicsPipelineLibraryPropertiesEXT)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_HOST_IMAGE_COPY_PROPERTIES:
            return {alignof(VkPhysicalDeviceHostImageCopyProperties), sizeof(VkPhysicalDeviceHostImageCopyProperties)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ID_PROPERTIES:
            return {alignof(VkPhysicalDeviceIDProperties), sizeof(VkPhysicalDeviceIDProperties)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_ALIGNMENT_CONTROL_PROPERTIES_MESA:
            return {alignof(VkPhysicalDeviceImageAlignmentControlPropertiesMESA),
                    sizeof(VkPhysicalDeviceImageAlignmentControlPropertiesMESA)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_PROCESSING_2_PROPERTIES_QCOM:
            return {alignof(VkPhysicalDeviceImageProcessing2PropertiesQCOM),
                    sizeof(VkPhysicalDeviceImageProcessing2PropertiesQCOM)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_PROCESSING_PROPERTIES_QCOM:
            return {alignof(VkPhysicalDeviceImageProcessingPropertiesQCOM), sizeof(VkPhysicalDeviceImageProcessingPropertiesQCOM)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_INLINE_UNIFORM_BLOCK_PROPERTIES:
            return {alignof(VkPhysicalDeviceInlineUniformBlockProperties), sizeof(VkPhysicalDeviceInlineUniformBlockProperties)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_LAYERED_API_PROPERTIES_LIST_KHR:
            return {alignof(VkPhysicalDeviceLayeredApiPropertiesListKHR), sizeof(VkPhysicalDeviceLayeredApiPropertiesListKHR)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_LAYERED_DRIVER_PROPERTIES_MSFT:
            return {alignof(VkPhysicalDeviceLayeredDriverPropertiesMSFT), sizeof(VkPhysicalDeviceLayeredDriverPropertiesMSFT)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_LEGACY_VERTEX_ATTRIBUTES_PROPERTIES_EXT:
            return {alignof(VkPhysicalDeviceLegacyVertexAttributesPropertiesEXT),
                    sizeof(VkPhysicalDeviceLegacyVertexAttributesPropertiesEXT)};
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
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MAINTENANCE_7_PROPERTIES_KHR:
            return {alignof(VkPhysicalDeviceMaintenance7PropertiesKHR), sizeof(VkPhysicalDeviceMaintenance7PropertiesKHR)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MAP_MEMORY_PLACED_PROPERTIES_EXT:
            return {alignof(VkPhysicalDeviceMapMemoryPlacedPropertiesEXT), sizeof(VkPhysicalDeviceMapMemoryPlacedPropertiesEXT)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MEMORY_DECOMPRESSION_PROPERTIES_NV:
            return {alignof(VkPhysicalDeviceMemoryDecompressionPropertiesNV),
                    sizeof(VkPhysicalDeviceMemoryDecompressionPropertiesNV)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MESH_SHADER_PROPERTIES_EXT:
            return {alignof(VkPhysicalDeviceMeshShaderPropertiesEXT), sizeof(VkPhysicalDeviceMeshShaderPropertiesEXT)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MESH_SHADER_PROPERTIES_NV:
            return {alignof(VkPhysicalDeviceMeshShaderPropertiesNV), sizeof(VkPhysicalDeviceMeshShaderPropertiesNV)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MULTI_DRAW_PROPERTIES_EXT:
            return {alignof(VkPhysicalDeviceMultiDrawPropertiesEXT), sizeof(VkPhysicalDeviceMultiDrawPropertiesEXT)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MULTIVIEW_PER_VIEW_ATTRIBUTES_PROPERTIES_NVX:
            return {alignof(VkPhysicalDeviceMultiviewPerViewAttributesPropertiesNVX),
                    sizeof(VkPhysicalDeviceMultiviewPerViewAttributesPropertiesNVX)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MULTIVIEW_PROPERTIES:
            return {alignof(VkPhysicalDeviceMultiviewProperties), sizeof(VkPhysicalDeviceMultiviewProperties)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_NESTED_COMMAND_BUFFER_PROPERTIES_EXT:
            return {alignof(VkPhysicalDeviceNestedCommandBufferPropertiesEXT),
                    sizeof(VkPhysicalDeviceNestedCommandBufferPropertiesEXT)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_OPACITY_MICROMAP_PROPERTIES_EXT:
            return {alignof(VkPhysicalDeviceOpacityMicromapPropertiesEXT), sizeof(VkPhysicalDeviceOpacityMicromapPropertiesEXT)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_OPTICAL_FLOW_PROPERTIES_NV:
            return {alignof(VkPhysicalDeviceOpticalFlowPropertiesNV), sizeof(VkPhysicalDeviceOpticalFlowPropertiesNV)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PCI_BUS_INFO_PROPERTIES_EXT:
            return {alignof(VkPhysicalDevicePCIBusInfoPropertiesEXT), sizeof(VkPhysicalDevicePCIBusInfoPropertiesEXT)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PARTITIONED_ACCELERATION_STRUCTURE_PROPERTIES_NV:
            return {alignof(VkPhysicalDevicePartitionedAccelerationStructurePropertiesNV),
                    sizeof(VkPhysicalDevicePartitionedAccelerationStructurePropertiesNV)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PERFORMANCE_QUERY_PROPERTIES_KHR:
            return {alignof(VkPhysicalDevicePerformanceQueryPropertiesKHR), sizeof(VkPhysicalDevicePerformanceQueryPropertiesKHR)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PIPELINE_BINARY_PROPERTIES_KHR:
            return {alignof(VkPhysicalDevicePipelineBinaryPropertiesKHR), sizeof(VkPhysicalDevicePipelineBinaryPropertiesKHR)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PIPELINE_ROBUSTNESS_PROPERTIES:
            return {alignof(VkPhysicalDevicePipelineRobustnessProperties), sizeof(VkPhysicalDevicePipelineRobustnessProperties)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_POINT_CLIPPING_PROPERTIES:
            return {alignof(VkPhysicalDevicePointClippingProperties), sizeof(VkPhysicalDevicePointClippingProperties)};
#ifdef VK_ENABLE_BETA_EXTENSIONS
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PORTABILITY_SUBSET_PROPERTIES_KHR:
            return {alignof(VkPhysicalDevicePortabilitySubsetPropertiesKHR),
                    sizeof(VkPhysicalDevicePortabilitySubsetPropertiesKHR)};
#endif  // VK_ENABLE_BETA_EXTENSIONS
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PROTECTED_MEMORY_PROPERTIES:
            return {alignof(VkPhysicalDeviceProtectedMemoryProperties), sizeof(VkPhysicalDeviceProtectedMemoryProperties)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PROVOKING_VERTEX_PROPERTIES_EXT:
            return {alignof(VkPhysicalDeviceProvokingVertexPropertiesEXT), sizeof(VkPhysicalDeviceProvokingVertexPropertiesEXT)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PUSH_DESCRIPTOR_PROPERTIES:
            return {alignof(VkPhysicalDevicePushDescriptorProperties), sizeof(VkPhysicalDevicePushDescriptorProperties)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RAY_TRACING_INVOCATION_REORDER_PROPERTIES_NV:
            return {alignof(VkPhysicalDeviceRayTracingInvocationReorderPropertiesNV),
                    sizeof(VkPhysicalDeviceRayTracingInvocationReorderPropertiesNV)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RAY_TRACING_PIPELINE_PROPERTIES_KHR:
            return {alignof(VkPhysicalDeviceRayTracingPipelinePropertiesKHR),
                    sizeof(VkPhysicalDeviceRayTracingPipelinePropertiesKHR)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RAY_TRACING_PROPERTIES_NV:
            return {alignof(VkPhysicalDeviceRayTracingPropertiesNV), sizeof(VkPhysicalDeviceRayTracingPropertiesNV)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RENDER_PASS_STRIPED_PROPERTIES_ARM:
            return {alignof(VkPhysicalDeviceRenderPassStripedPropertiesARM),
                    sizeof(VkPhysicalDeviceRenderPassStripedPropertiesARM)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ROBUSTNESS_2_PROPERTIES_EXT:
            return {alignof(VkPhysicalDeviceRobustness2PropertiesEXT), sizeof(VkPhysicalDeviceRobustness2PropertiesEXT)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SAMPLE_LOCATIONS_PROPERTIES_EXT:
            return {alignof(VkPhysicalDeviceSampleLocationsPropertiesEXT), sizeof(VkPhysicalDeviceSampleLocationsPropertiesEXT)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SAMPLER_FILTER_MINMAX_PROPERTIES:
            return {alignof(VkPhysicalDeviceSamplerFilterMinmaxProperties), sizeof(VkPhysicalDeviceSamplerFilterMinmaxProperties)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SCHEDULING_CONTROLS_PROPERTIES_ARM:
            return {alignof(VkPhysicalDeviceSchedulingControlsPropertiesARM),
                    sizeof(VkPhysicalDeviceSchedulingControlsPropertiesARM)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_CORE_BUILTINS_PROPERTIES_ARM:
            return {alignof(VkPhysicalDeviceShaderCoreBuiltinsPropertiesARM),
                    sizeof(VkPhysicalDeviceShaderCoreBuiltinsPropertiesARM)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_CORE_PROPERTIES_2_AMD:
            return {alignof(VkPhysicalDeviceShaderCoreProperties2AMD), sizeof(VkPhysicalDeviceShaderCoreProperties2AMD)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_CORE_PROPERTIES_AMD:
            return {alignof(VkPhysicalDeviceShaderCorePropertiesAMD), sizeof(VkPhysicalDeviceShaderCorePropertiesAMD)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_CORE_PROPERTIES_ARM:
            return {alignof(VkPhysicalDeviceShaderCorePropertiesARM), sizeof(VkPhysicalDeviceShaderCorePropertiesARM)};
#ifdef VK_ENABLE_BETA_EXTENSIONS
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_ENQUEUE_PROPERTIES_AMDX:
            return {alignof(VkPhysicalDeviceShaderEnqueuePropertiesAMDX), sizeof(VkPhysicalDeviceShaderEnqueuePropertiesAMDX)};
#endif  // VK_ENABLE_BETA_EXTENSIONS
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_INTEGER_DOT_PRODUCT_PROPERTIES:
            return {alignof(VkPhysicalDeviceShaderIntegerDotProductProperties),
                    sizeof(VkPhysicalDeviceShaderIntegerDotProductProperties)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_MODULE_IDENTIFIER_PROPERTIES_EXT:
            return {alignof(VkPhysicalDeviceShaderModuleIdentifierPropertiesEXT),
                    sizeof(VkPhysicalDeviceShaderModuleIdentifierPropertiesEXT)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_OBJECT_PROPERTIES_EXT:
            return {alignof(VkPhysicalDeviceShaderObjectPropertiesEXT), sizeof(VkPhysicalDeviceShaderObjectPropertiesEXT)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_SM_BUILTINS_PROPERTIES_NV:
            return {alignof(VkPhysicalDeviceShaderSMBuiltinsPropertiesNV), sizeof(VkPhysicalDeviceShaderSMBuiltinsPropertiesNV)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_TILE_IMAGE_PROPERTIES_EXT:
            return {alignof(VkPhysicalDeviceShaderTileImagePropertiesEXT), sizeof(VkPhysicalDeviceShaderTileImagePropertiesEXT)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADING_RATE_IMAGE_PROPERTIES_NV:
            return {alignof(VkPhysicalDeviceShadingRateImagePropertiesNV), sizeof(VkPhysicalDeviceShadingRateImagePropertiesNV)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SUBGROUP_PROPERTIES:
            return {alignof(VkPhysicalDeviceSubgroupProperties), sizeof(VkPhysicalDeviceSubgroupProperties)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SUBGROUP_SIZE_CONTROL_PROPERTIES:
            return {alignof(VkPhysicalDeviceSubgroupSizeControlProperties), sizeof(VkPhysicalDeviceSubgroupSizeControlProperties)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SUBPASS_SHADING_PROPERTIES_HUAWEI:
            return {alignof(VkPhysicalDeviceSubpassShadingPropertiesHUAWEI),
                    sizeof(VkPhysicalDeviceSubpassShadingPropertiesHUAWEI)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TEXEL_BUFFER_ALIGNMENT_PROPERTIES:
            return {alignof(VkPhysicalDeviceTexelBufferAlignmentProperties),
                    sizeof(VkPhysicalDeviceTexelBufferAlignmentProperties)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TIMELINE_SEMAPHORE_PROPERTIES:
            return {alignof(VkPhysicalDeviceTimelineSemaphoreProperties), sizeof(VkPhysicalDeviceTimelineSemaphoreProperties)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TRANSFORM_FEEDBACK_PROPERTIES_EXT:
            return {alignof(VkPhysicalDeviceTransformFeedbackPropertiesEXT),
                    sizeof(VkPhysicalDeviceTransformFeedbackPropertiesEXT)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VERTEX_ATTRIBUTE_DIVISOR_PROPERTIES:
            return {alignof(VkPhysicalDeviceVertexAttributeDivisorProperties),
                    sizeof(VkPhysicalDeviceVertexAttributeDivisorProperties)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VERTEX_ATTRIBUTE_DIVISOR_PROPERTIES_EXT:
            return {alignof(VkPhysicalDeviceVertexAttributeDivisorPropertiesEXT),
                    sizeof(VkPhysicalDeviceVertexAttributeDivisorPropertiesEXT)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VULKAN_1_1_PROPERTIES:
            return {alignof(VkPhysicalDeviceVulkan11Properties), sizeof(VkPhysicalDeviceVulkan11Properties)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VULKAN_1_2_PROPERTIES:
            return {alignof(VkPhysicalDeviceVulkan12Properties), sizeof(VkPhysicalDeviceVulkan12Properties)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VULKAN_1_3_PROPERTIES:
            return {alignof(VkPhysicalDeviceVulkan13Properties), sizeof(VkPhysicalDeviceVulkan13Properties)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VULKAN_1_4_PROPERTIES:
            return {alignof(VkPhysicalDeviceVulkan14Properties), sizeof(VkPhysicalDeviceVulkan14Properties)};

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
        case VK_STRUCTURE_TYPE_SUBPASS_RESOLVE_PERFORMANCE_QUERY_EXT:
            return {alignof(VkSubpassResolvePerformanceQueryEXT), sizeof(VkSubpassResolvePerformanceQueryEXT)};

        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkImageFormatProperties2>(VkStructureType type) {
    switch (type) {
#ifdef VK_USE_PLATFORM_ANDROID_KHR
        case VK_STRUCTURE_TYPE_ANDROID_HARDWARE_BUFFER_USAGE_ANDROID:
            return {alignof(VkAndroidHardwareBufferUsageANDROID), sizeof(VkAndroidHardwareBufferUsageANDROID)};
#endif  // VK_USE_PLATFORM_ANDROID_KHR
        case VK_STRUCTURE_TYPE_EXTERNAL_IMAGE_FORMAT_PROPERTIES:
            return {alignof(VkExternalImageFormatProperties), sizeof(VkExternalImageFormatProperties)};
        case VK_STRUCTURE_TYPE_FILTER_CUBIC_IMAGE_VIEW_IMAGE_FORMAT_PROPERTIES_EXT:
            return {alignof(VkFilterCubicImageViewImageFormatPropertiesEXT),
                    sizeof(VkFilterCubicImageViewImageFormatPropertiesEXT)};
        case VK_STRUCTURE_TYPE_HOST_IMAGE_COPY_DEVICE_PERFORMANCE_QUERY:
            return {alignof(VkHostImageCopyDevicePerformanceQuery), sizeof(VkHostImageCopyDevicePerformanceQuery)};
        case VK_STRUCTURE_TYPE_IMAGE_COMPRESSION_PROPERTIES_EXT:
            return {alignof(VkImageCompressionPropertiesEXT), sizeof(VkImageCompressionPropertiesEXT)};
        case VK_STRUCTURE_TYPE_SAMPLER_YCBCR_CONVERSION_IMAGE_FORMAT_PROPERTIES:
            return {alignof(VkSamplerYcbcrConversionImageFormatProperties), sizeof(VkSamplerYcbcrConversionImageFormatProperties)};
        case VK_STRUCTURE_TYPE_TEXTURE_LOD_GATHER_FORMAT_PROPERTIES_AMD:
            return {alignof(VkTextureLODGatherFormatPropertiesAMD), sizeof(VkTextureLODGatherFormatPropertiesAMD)};

        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPhysicalDeviceImageFormatInfo2>(VkStructureType type) {
    switch (type) {
        case VK_STRUCTURE_TYPE_IMAGE_COMPRESSION_CONTROL_EXT:
            return {alignof(VkImageCompressionControlEXT), sizeof(VkImageCompressionControlEXT)};
        case VK_STRUCTURE_TYPE_IMAGE_FORMAT_LIST_CREATE_INFO:
            return {alignof(VkImageFormatListCreateInfo), sizeof(VkImageFormatListCreateInfo)};
        case VK_STRUCTURE_TYPE_IMAGE_STENCIL_USAGE_CREATE_INFO:
            return {alignof(VkImageStencilUsageCreateInfo), sizeof(VkImageStencilUsageCreateInfo)};
        case VK_STRUCTURE_TYPE_OPTICAL_FLOW_IMAGE_FORMAT_INFO_NV:
            return {alignof(VkOpticalFlowImageFormatInfoNV), sizeof(VkOpticalFlowImageFormatInfoNV)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTERNAL_IMAGE_FORMAT_INFO:
            return {alignof(VkPhysicalDeviceExternalImageFormatInfo), sizeof(VkPhysicalDeviceExternalImageFormatInfo)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_DRM_FORMAT_MODIFIER_INFO_EXT:
            return {alignof(VkPhysicalDeviceImageDrmFormatModifierInfoEXT), sizeof(VkPhysicalDeviceImageDrmFormatModifierInfoEXT)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_VIEW_IMAGE_FORMAT_INFO_EXT:
            return {alignof(VkPhysicalDeviceImageViewImageFormatInfoEXT), sizeof(VkPhysicalDeviceImageViewImageFormatInfoEXT)};
        case VK_STRUCTURE_TYPE_VIDEO_PROFILE_LIST_INFO_KHR:
            return {alignof(VkVideoProfileListInfoKHR), sizeof(VkVideoProfileListInfoKHR)};

        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkQueueFamilyProperties2>(VkStructureType type) {
    switch (type) {
        case VK_STRUCTURE_TYPE_QUEUE_FAMILY_CHECKPOINT_PROPERTIES_2_NV:
            return {alignof(VkQueueFamilyCheckpointProperties2NV), sizeof(VkQueueFamilyCheckpointProperties2NV)};
        case VK_STRUCTURE_TYPE_QUEUE_FAMILY_CHECKPOINT_PROPERTIES_NV:
            return {alignof(VkQueueFamilyCheckpointPropertiesNV), sizeof(VkQueueFamilyCheckpointPropertiesNV)};
        case VK_STRUCTURE_TYPE_QUEUE_FAMILY_GLOBAL_PRIORITY_PROPERTIES:
            return {alignof(VkQueueFamilyGlobalPriorityProperties), sizeof(VkQueueFamilyGlobalPriorityProperties)};
        case VK_STRUCTURE_TYPE_QUEUE_FAMILY_QUERY_RESULT_STATUS_PROPERTIES_KHR:
            return {alignof(VkQueueFamilyQueryResultStatusPropertiesKHR), sizeof(VkQueueFamilyQueryResultStatusPropertiesKHR)};
        case VK_STRUCTURE_TYPE_QUEUE_FAMILY_VIDEO_PROPERTIES_KHR:
            return {alignof(VkQueueFamilyVideoPropertiesKHR), sizeof(VkQueueFamilyVideoPropertiesKHR)};

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
#ifdef VK_USE_PLATFORM_ANDROID_KHR
        case VK_STRUCTURE_TYPE_EXTERNAL_FORMAT_ANDROID:
            return {alignof(VkExternalFormatANDROID), sizeof(VkExternalFormatANDROID)};
#endif  // VK_USE_PLATFORM_ANDROID_KHR
#ifdef VK_USE_PLATFORM_SCREEN_QNX
        case VK_STRUCTURE_TYPE_EXTERNAL_FORMAT_QNX:
            return {alignof(VkExternalFormatQNX), sizeof(VkExternalFormatQNX)};
#endif  // VK_USE_PLATFORM_SCREEN_QNX
        case VK_STRUCTURE_TYPE_SAMPLER_YCBCR_CONVERSION_YCBCR_DEGAMMA_CREATE_INFO_QCOM:
            return {alignof(VkSamplerYcbcrConversionYcbcrDegammaCreateInfoQCOM),
                    sizeof(VkSamplerYcbcrConversionYcbcrDegammaCreateInfoQCOM)};

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
#ifdef VK_USE_PLATFORM_ANDROID_KHR
        case VK_STRUCTURE_TYPE_EXTERNAL_FORMAT_ANDROID:
            return {alignof(VkExternalFormatANDROID), sizeof(VkExternalFormatANDROID)};
#endif  // VK_USE_PLATFORM_ANDROID_KHR

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
        case VK_STRUCTURE_TYPE_MULTISAMPLED_RENDER_TO_SINGLE_SAMPLED_INFO_EXT:
            return {alignof(VkMultisampledRenderToSingleSampledInfoEXT), sizeof(VkMultisampledRenderToSingleSampledInfoEXT)};
        case VK_STRUCTURE_TYPE_RENDER_PASS_CREATION_CONTROL_EXT:
            return {alignof(VkRenderPassCreationControlEXT), sizeof(VkRenderPassCreationControlEXT)};
        case VK_STRUCTURE_TYPE_RENDER_PASS_SUBPASS_FEEDBACK_CREATE_INFO_EXT:
            return {alignof(VkRenderPassSubpassFeedbackCreateInfoEXT), sizeof(VkRenderPassSubpassFeedbackCreateInfoEXT)};
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
        case VK_STRUCTURE_TYPE_MEMORY_BARRIER_ACCESS_FLAGS_3_KHR:
            return {alignof(VkMemoryBarrierAccessFlags3KHR), sizeof(VkMemoryBarrierAccessFlags3KHR)};

        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkRenderPassCreateInfo2>(VkStructureType type) {
    switch (type) {
        case VK_STRUCTURE_TYPE_RENDER_PASS_CREATION_CONTROL_EXT:
            return {alignof(VkRenderPassCreationControlEXT), sizeof(VkRenderPassCreationControlEXT)};
        case VK_STRUCTURE_TYPE_RENDER_PASS_CREATION_FEEDBACK_CREATE_INFO_EXT:
            return {alignof(VkRenderPassCreationFeedbackCreateInfoEXT), sizeof(VkRenderPassCreationFeedbackCreateInfoEXT)};
        case VK_STRUCTURE_TYPE_RENDER_PASS_FRAGMENT_DENSITY_MAP_CREATE_INFO_EXT:
            return {alignof(VkRenderPassFragmentDensityMapCreateInfoEXT), sizeof(VkRenderPassFragmentDensityMapCreateInfoEXT)};

        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkSubpassEndInfo>(VkStructureType type) {
    switch (type) {
        case VK_STRUCTURE_TYPE_SUBPASS_FRAGMENT_DENSITY_MAP_OFFSET_END_INFO_QCOM:
            return {alignof(VkSubpassFragmentDensityMapOffsetEndInfoQCOM), sizeof(VkSubpassFragmentDensityMapOffsetEndInfoQCOM)};

        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkBufferMemoryBarrier2>(VkStructureType type) {
    switch (type) {
        case VK_STRUCTURE_TYPE_EXTERNAL_MEMORY_ACQUIRE_UNMODIFIED_EXT:
            return {alignof(VkExternalMemoryAcquireUnmodifiedEXT), sizeof(VkExternalMemoryAcquireUnmodifiedEXT)};
        case VK_STRUCTURE_TYPE_MEMORY_BARRIER_ACCESS_FLAGS_3_KHR:
            return {alignof(VkMemoryBarrierAccessFlags3KHR), sizeof(VkMemoryBarrierAccessFlags3KHR)};

        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkImageMemoryBarrier2>(VkStructureType type) {
    switch (type) {
        case VK_STRUCTURE_TYPE_EXTERNAL_MEMORY_ACQUIRE_UNMODIFIED_EXT:
            return {alignof(VkExternalMemoryAcquireUnmodifiedEXT), sizeof(VkExternalMemoryAcquireUnmodifiedEXT)};
        case VK_STRUCTURE_TYPE_MEMORY_BARRIER_ACCESS_FLAGS_3_KHR:
            return {alignof(VkMemoryBarrierAccessFlags3KHR), sizeof(VkMemoryBarrierAccessFlags3KHR)};
        case VK_STRUCTURE_TYPE_SAMPLE_LOCATIONS_INFO_EXT:
            return {alignof(VkSampleLocationsInfoEXT), sizeof(VkSampleLocationsInfoEXT)};

        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkCommandBufferSubmitInfo>(VkStructureType type) {
    switch (type) {
        case VK_STRUCTURE_TYPE_RENDER_PASS_STRIPE_SUBMIT_INFO_ARM:
            return {alignof(VkRenderPassStripeSubmitInfoARM), sizeof(VkRenderPassStripeSubmitInfoARM)};

        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkSubmitInfo2>(VkStructureType type) {
    switch (type) {
        case VK_STRUCTURE_TYPE_FRAME_BOUNDARY_EXT:
            return {alignof(VkFrameBoundaryEXT), sizeof(VkFrameBoundaryEXT)};
        case VK_STRUCTURE_TYPE_LATENCY_SUBMISSION_PRESENT_ID_NV:
            return {alignof(VkLatencySubmissionPresentIdNV), sizeof(VkLatencySubmissionPresentIdNV)};
        case VK_STRUCTURE_TYPE_PERFORMANCE_QUERY_SUBMIT_INFO_KHR:
            return {alignof(VkPerformanceQuerySubmitInfoKHR), sizeof(VkPerformanceQuerySubmitInfoKHR)};
#ifdef VK_USE_PLATFORM_WIN32_KHR
        case VK_STRUCTURE_TYPE_WIN32_KEYED_MUTEX_ACQUIRE_RELEASE_INFO_KHR:
            return {alignof(VkWin32KeyedMutexAcquireReleaseInfoKHR), sizeof(VkWin32KeyedMutexAcquireReleaseInfoKHR)};
        case VK_STRUCTURE_TYPE_WIN32_KEYED_MUTEX_ACQUIRE_RELEASE_INFO_NV:
            return {alignof(VkWin32KeyedMutexAcquireReleaseInfoNV), sizeof(VkWin32KeyedMutexAcquireReleaseInfoNV)};
#endif  // VK_USE_PLATFORM_WIN32_KHR

        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkBufferImageCopy2>(VkStructureType type) {
    switch (type) {
        case VK_STRUCTURE_TYPE_COPY_COMMAND_TRANSFORM_INFO_QCOM:
            return {alignof(VkCopyCommandTransformInfoQCOM), sizeof(VkCopyCommandTransformInfoQCOM)};

        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkImageBlit2>(VkStructureType type) {
    switch (type) {
        case VK_STRUCTURE_TYPE_COPY_COMMAND_TRANSFORM_INFO_QCOM:
            return {alignof(VkCopyCommandTransformInfoQCOM), sizeof(VkCopyCommandTransformInfoQCOM)};

        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkBlitImageInfo2>(VkStructureType type) {
    switch (type) {
        case VK_STRUCTURE_TYPE_BLIT_IMAGE_CUBIC_WEIGHTS_INFO_QCOM:
            return {alignof(VkBlitImageCubicWeightsInfoQCOM), sizeof(VkBlitImageCubicWeightsInfoQCOM)};

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
        case VK_STRUCTURE_TYPE_MULTISAMPLED_RENDER_TO_SINGLE_SAMPLED_INFO_EXT:
            return {alignof(VkMultisampledRenderToSingleSampledInfoEXT), sizeof(VkMultisampledRenderToSingleSampledInfoEXT)};
        case VK_STRUCTURE_TYPE_MULTIVIEW_PER_VIEW_ATTRIBUTES_INFO_NVX:
            return {alignof(VkMultiviewPerViewAttributesInfoNVX), sizeof(VkMultiviewPerViewAttributesInfoNVX)};
        case VK_STRUCTURE_TYPE_MULTIVIEW_PER_VIEW_RENDER_AREAS_RENDER_PASS_BEGIN_INFO_QCOM:
            return {alignof(VkMultiviewPerViewRenderAreasRenderPassBeginInfoQCOM),
                    sizeof(VkMultiviewPerViewRenderAreasRenderPassBeginInfoQCOM)};
        case VK_STRUCTURE_TYPE_RENDER_PASS_STRIPE_BEGIN_INFO_ARM:
            return {alignof(VkRenderPassStripeBeginInfoARM), sizeof(VkRenderPassStripeBeginInfoARM)};
        case VK_STRUCTURE_TYPE_RENDERING_FRAGMENT_DENSITY_MAP_ATTACHMENT_INFO_EXT:
            return {alignof(VkRenderingFragmentDensityMapAttachmentInfoEXT),
                    sizeof(VkRenderingFragmentDensityMapAttachmentInfoEXT)};
        case VK_STRUCTURE_TYPE_RENDERING_FRAGMENT_SHADING_RATE_ATTACHMENT_INFO_KHR:
            return {alignof(VkRenderingFragmentShadingRateAttachmentInfoKHR),
                    sizeof(VkRenderingFragmentShadingRateAttachmentInfoKHR)};

        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkMemoryMapInfo>(VkStructureType type) {
    switch (type) {
        case VK_STRUCTURE_TYPE_MEMORY_MAP_PLACED_INFO_EXT:
            return {alignof(VkMemoryMapPlacedInfoEXT), sizeof(VkMemoryMapPlacedInfoEXT)};

        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkSubresourceLayout2>(VkStructureType type) {
    switch (type) {
        case VK_STRUCTURE_TYPE_IMAGE_COMPRESSION_PROPERTIES_EXT:
            return {alignof(VkImageCompressionPropertiesEXT), sizeof(VkImageCompressionPropertiesEXT)};
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
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPushDescriptorSetWithTemplateInfo>(VkStructureType type) {
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
        case VK_STRUCTURE_TYPE_IMAGE_COMPRESSION_CONTROL_EXT:
            return {alignof(VkImageCompressionControlEXT), sizeof(VkImageCompressionControlEXT)};
        case VK_STRUCTURE_TYPE_IMAGE_FORMAT_LIST_CREATE_INFO:
            return {alignof(VkImageFormatListCreateInfo), sizeof(VkImageFormatListCreateInfo)};
#ifdef VK_USE_PLATFORM_WIN32_KHR
        case VK_STRUCTURE_TYPE_SURFACE_FULL_SCREEN_EXCLUSIVE_INFO_EXT:
            return {alignof(VkSurfaceFullScreenExclusiveInfoEXT), sizeof(VkSurfaceFullScreenExclusiveInfoEXT)};
        case VK_STRUCTURE_TYPE_SURFACE_FULL_SCREEN_EXCLUSIVE_WIN32_INFO_EXT:
            return {alignof(VkSurfaceFullScreenExclusiveWin32InfoEXT), sizeof(VkSurfaceFullScreenExclusiveWin32InfoEXT)};
#endif  // VK_USE_PLATFORM_WIN32_KHR
        case VK_STRUCTURE_TYPE_SWAPCHAIN_COUNTER_CREATE_INFO_EXT:
            return {alignof(VkSwapchainCounterCreateInfoEXT), sizeof(VkSwapchainCounterCreateInfoEXT)};
        case VK_STRUCTURE_TYPE_SWAPCHAIN_DISPLAY_NATIVE_HDR_CREATE_INFO_AMD:
            return {alignof(VkSwapchainDisplayNativeHdrCreateInfoAMD), sizeof(VkSwapchainDisplayNativeHdrCreateInfoAMD)};
        case VK_STRUCTURE_TYPE_SWAPCHAIN_LATENCY_CREATE_INFO_NV:
            return {alignof(VkSwapchainLatencyCreateInfoNV), sizeof(VkSwapchainLatencyCreateInfoNV)};
        case VK_STRUCTURE_TYPE_SWAPCHAIN_PRESENT_BARRIER_CREATE_INFO_NV:
            return {alignof(VkSwapchainPresentBarrierCreateInfoNV), sizeof(VkSwapchainPresentBarrierCreateInfoNV)};
        case VK_STRUCTURE_TYPE_SWAPCHAIN_PRESENT_MODES_CREATE_INFO_EXT:
            return {alignof(VkSwapchainPresentModesCreateInfoEXT), sizeof(VkSwapchainPresentModesCreateInfoEXT)};
        case VK_STRUCTURE_TYPE_SWAPCHAIN_PRESENT_SCALING_CREATE_INFO_EXT:
            return {alignof(VkSwapchainPresentScalingCreateInfoEXT), sizeof(VkSwapchainPresentScalingCreateInfoEXT)};

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
        case VK_STRUCTURE_TYPE_FRAME_BOUNDARY_EXT:
            return {alignof(VkFrameBoundaryEXT), sizeof(VkFrameBoundaryEXT)};
#ifdef VK_USE_PLATFORM_GGP
        case VK_STRUCTURE_TYPE_PRESENT_FRAME_TOKEN_GGP:
            return {alignof(VkPresentFrameTokenGGP), sizeof(VkPresentFrameTokenGGP)};
#endif  // VK_USE_PLATFORM_GGP
        case VK_STRUCTURE_TYPE_PRESENT_ID_KHR:
            return {alignof(VkPresentIdKHR), sizeof(VkPresentIdKHR)};
        case VK_STRUCTURE_TYPE_PRESENT_REGIONS_KHR:
            return {alignof(VkPresentRegionsKHR), sizeof(VkPresentRegionsKHR)};
        case VK_STRUCTURE_TYPE_PRESENT_TIMES_INFO_GOOGLE:
            return {alignof(VkPresentTimesInfoGOOGLE), sizeof(VkPresentTimesInfoGOOGLE)};
#ifdef VK_ENABLE_BETA_EXTENSIONS
        case VK_STRUCTURE_TYPE_SET_PRESENT_CONFIG_NV:
            return {alignof(VkSetPresentConfigNV), sizeof(VkSetPresentConfigNV)};
#endif  // VK_ENABLE_BETA_EXTENSIONS
        case VK_STRUCTURE_TYPE_SWAPCHAIN_PRESENT_FENCE_INFO_EXT:
            return {alignof(VkSwapchainPresentFenceInfoEXT), sizeof(VkSwapchainPresentFenceInfoEXT)};
        case VK_STRUCTURE_TYPE_SWAPCHAIN_PRESENT_MODE_INFO_EXT:
            return {alignof(VkSwapchainPresentModeInfoEXT), sizeof(VkSwapchainPresentModeInfoEXT)};

        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkDisplaySurfaceCreateInfoKHR>(VkStructureType type) {
    switch (type) {
        case VK_STRUCTURE_TYPE_DISPLAY_SURFACE_STEREO_CREATE_INFO_NV:
            return {alignof(VkDisplaySurfaceStereoCreateInfoNV), sizeof(VkDisplaySurfaceStereoCreateInfoNV)};

        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkVideoProfileInfoKHR>(VkStructureType type) {
    switch (type) {
        case VK_STRUCTURE_TYPE_VIDEO_DECODE_AV1_PROFILE_INFO_KHR:
            return {alignof(VkVideoDecodeAV1ProfileInfoKHR), sizeof(VkVideoDecodeAV1ProfileInfoKHR)};
        case VK_STRUCTURE_TYPE_VIDEO_DECODE_H264_PROFILE_INFO_KHR:
            return {alignof(VkVideoDecodeH264ProfileInfoKHR), sizeof(VkVideoDecodeH264ProfileInfoKHR)};
        case VK_STRUCTURE_TYPE_VIDEO_DECODE_H265_PROFILE_INFO_KHR:
            return {alignof(VkVideoDecodeH265ProfileInfoKHR), sizeof(VkVideoDecodeH265ProfileInfoKHR)};
        case VK_STRUCTURE_TYPE_VIDEO_DECODE_USAGE_INFO_KHR:
            return {alignof(VkVideoDecodeUsageInfoKHR), sizeof(VkVideoDecodeUsageInfoKHR)};
        case VK_STRUCTURE_TYPE_VIDEO_ENCODE_AV1_PROFILE_INFO_KHR:
            return {alignof(VkVideoEncodeAV1ProfileInfoKHR), sizeof(VkVideoEncodeAV1ProfileInfoKHR)};
        case VK_STRUCTURE_TYPE_VIDEO_ENCODE_H264_PROFILE_INFO_KHR:
            return {alignof(VkVideoEncodeH264ProfileInfoKHR), sizeof(VkVideoEncodeH264ProfileInfoKHR)};
        case VK_STRUCTURE_TYPE_VIDEO_ENCODE_H265_PROFILE_INFO_KHR:
            return {alignof(VkVideoEncodeH265ProfileInfoKHR), sizeof(VkVideoEncodeH265ProfileInfoKHR)};
        case VK_STRUCTURE_TYPE_VIDEO_ENCODE_USAGE_INFO_KHR:
            return {alignof(VkVideoEncodeUsageInfoKHR), sizeof(VkVideoEncodeUsageInfoKHR)};

        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkVideoCapabilitiesKHR>(VkStructureType type) {
    switch (type) {
        case VK_STRUCTURE_TYPE_VIDEO_DECODE_AV1_CAPABILITIES_KHR:
            return {alignof(VkVideoDecodeAV1CapabilitiesKHR), sizeof(VkVideoDecodeAV1CapabilitiesKHR)};
        case VK_STRUCTURE_TYPE_VIDEO_DECODE_CAPABILITIES_KHR:
            return {alignof(VkVideoDecodeCapabilitiesKHR), sizeof(VkVideoDecodeCapabilitiesKHR)};
        case VK_STRUCTURE_TYPE_VIDEO_DECODE_H264_CAPABILITIES_KHR:
            return {alignof(VkVideoDecodeH264CapabilitiesKHR), sizeof(VkVideoDecodeH264CapabilitiesKHR)};
        case VK_STRUCTURE_TYPE_VIDEO_DECODE_H265_CAPABILITIES_KHR:
            return {alignof(VkVideoDecodeH265CapabilitiesKHR), sizeof(VkVideoDecodeH265CapabilitiesKHR)};
        case VK_STRUCTURE_TYPE_VIDEO_ENCODE_AV1_CAPABILITIES_KHR:
            return {alignof(VkVideoEncodeAV1CapabilitiesKHR), sizeof(VkVideoEncodeAV1CapabilitiesKHR)};
        case VK_STRUCTURE_TYPE_VIDEO_ENCODE_AV1_QUANTIZATION_MAP_CAPABILITIES_KHR:
            return {alignof(VkVideoEncodeAV1QuantizationMapCapabilitiesKHR),
                    sizeof(VkVideoEncodeAV1QuantizationMapCapabilitiesKHR)};
        case VK_STRUCTURE_TYPE_VIDEO_ENCODE_CAPABILITIES_KHR:
            return {alignof(VkVideoEncodeCapabilitiesKHR), sizeof(VkVideoEncodeCapabilitiesKHR)};
        case VK_STRUCTURE_TYPE_VIDEO_ENCODE_H264_CAPABILITIES_KHR:
            return {alignof(VkVideoEncodeH264CapabilitiesKHR), sizeof(VkVideoEncodeH264CapabilitiesKHR)};
        case VK_STRUCTURE_TYPE_VIDEO_ENCODE_H264_QUANTIZATION_MAP_CAPABILITIES_KHR:
            return {alignof(VkVideoEncodeH264QuantizationMapCapabilitiesKHR),
                    sizeof(VkVideoEncodeH264QuantizationMapCapabilitiesKHR)};
        case VK_STRUCTURE_TYPE_VIDEO_ENCODE_H265_CAPABILITIES_KHR:
            return {alignof(VkVideoEncodeH265CapabilitiesKHR), sizeof(VkVideoEncodeH265CapabilitiesKHR)};
        case VK_STRUCTURE_TYPE_VIDEO_ENCODE_H265_QUANTIZATION_MAP_CAPABILITIES_KHR:
            return {alignof(VkVideoEncodeH265QuantizationMapCapabilitiesKHR),
                    sizeof(VkVideoEncodeH265QuantizationMapCapabilitiesKHR)};
        case VK_STRUCTURE_TYPE_VIDEO_ENCODE_QUANTIZATION_MAP_CAPABILITIES_KHR:
            return {alignof(VkVideoEncodeQuantizationMapCapabilitiesKHR), sizeof(VkVideoEncodeQuantizationMapCapabilitiesKHR)};

        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPhysicalDeviceVideoFormatInfoKHR>(VkStructureType type) {
    switch (type) {
        case VK_STRUCTURE_TYPE_VIDEO_PROFILE_LIST_INFO_KHR:
            return {alignof(VkVideoProfileListInfoKHR), sizeof(VkVideoProfileListInfoKHR)};

        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkVideoFormatPropertiesKHR>(VkStructureType type) {
    switch (type) {
        case VK_STRUCTURE_TYPE_VIDEO_FORMAT_AV1_QUANTIZATION_MAP_PROPERTIES_KHR:
            return {alignof(VkVideoFormatAV1QuantizationMapPropertiesKHR), sizeof(VkVideoFormatAV1QuantizationMapPropertiesKHR)};
        case VK_STRUCTURE_TYPE_VIDEO_FORMAT_H265_QUANTIZATION_MAP_PROPERTIES_KHR:
            return {alignof(VkVideoFormatH265QuantizationMapPropertiesKHR), sizeof(VkVideoFormatH265QuantizationMapPropertiesKHR)};
        case VK_STRUCTURE_TYPE_VIDEO_FORMAT_QUANTIZATION_MAP_PROPERTIES_KHR:
            return {alignof(VkVideoFormatQuantizationMapPropertiesKHR), sizeof(VkVideoFormatQuantizationMapPropertiesKHR)};

        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkVideoReferenceSlotInfoKHR>(VkStructureType type) {
    switch (type) {
        case VK_STRUCTURE_TYPE_VIDEO_DECODE_AV1_DPB_SLOT_INFO_KHR:
            return {alignof(VkVideoDecodeAV1DpbSlotInfoKHR), sizeof(VkVideoDecodeAV1DpbSlotInfoKHR)};
        case VK_STRUCTURE_TYPE_VIDEO_DECODE_H264_DPB_SLOT_INFO_KHR:
            return {alignof(VkVideoDecodeH264DpbSlotInfoKHR), sizeof(VkVideoDecodeH264DpbSlotInfoKHR)};
        case VK_STRUCTURE_TYPE_VIDEO_DECODE_H265_DPB_SLOT_INFO_KHR:
            return {alignof(VkVideoDecodeH265DpbSlotInfoKHR), sizeof(VkVideoDecodeH265DpbSlotInfoKHR)};
        case VK_STRUCTURE_TYPE_VIDEO_ENCODE_AV1_DPB_SLOT_INFO_KHR:
            return {alignof(VkVideoEncodeAV1DpbSlotInfoKHR), sizeof(VkVideoEncodeAV1DpbSlotInfoKHR)};
        case VK_STRUCTURE_TYPE_VIDEO_ENCODE_H264_DPB_SLOT_INFO_KHR:
            return {alignof(VkVideoEncodeH264DpbSlotInfoKHR), sizeof(VkVideoEncodeH264DpbSlotInfoKHR)};
        case VK_STRUCTURE_TYPE_VIDEO_ENCODE_H265_DPB_SLOT_INFO_KHR:
            return {alignof(VkVideoEncodeH265DpbSlotInfoKHR), sizeof(VkVideoEncodeH265DpbSlotInfoKHR)};

        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkVideoSessionCreateInfoKHR>(VkStructureType type) {
    switch (type) {
        case VK_STRUCTURE_TYPE_VIDEO_ENCODE_AV1_SESSION_CREATE_INFO_KHR:
            return {alignof(VkVideoEncodeAV1SessionCreateInfoKHR), sizeof(VkVideoEncodeAV1SessionCreateInfoKHR)};
        case VK_STRUCTURE_TYPE_VIDEO_ENCODE_H264_SESSION_CREATE_INFO_KHR:
            return {alignof(VkVideoEncodeH264SessionCreateInfoKHR), sizeof(VkVideoEncodeH264SessionCreateInfoKHR)};
        case VK_STRUCTURE_TYPE_VIDEO_ENCODE_H265_SESSION_CREATE_INFO_KHR:
            return {alignof(VkVideoEncodeH265SessionCreateInfoKHR), sizeof(VkVideoEncodeH265SessionCreateInfoKHR)};

        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkVideoSessionParametersCreateInfoKHR>(VkStructureType type) {
    switch (type) {
        case VK_STRUCTURE_TYPE_VIDEO_DECODE_AV1_SESSION_PARAMETERS_CREATE_INFO_KHR:
            return {alignof(VkVideoDecodeAV1SessionParametersCreateInfoKHR),
                    sizeof(VkVideoDecodeAV1SessionParametersCreateInfoKHR)};
        case VK_STRUCTURE_TYPE_VIDEO_DECODE_H264_SESSION_PARAMETERS_CREATE_INFO_KHR:
            return {alignof(VkVideoDecodeH264SessionParametersCreateInfoKHR),
                    sizeof(VkVideoDecodeH264SessionParametersCreateInfoKHR)};
        case VK_STRUCTURE_TYPE_VIDEO_DECODE_H265_SESSION_PARAMETERS_CREATE_INFO_KHR:
            return {alignof(VkVideoDecodeH265SessionParametersCreateInfoKHR),
                    sizeof(VkVideoDecodeH265SessionParametersCreateInfoKHR)};
        case VK_STRUCTURE_TYPE_VIDEO_ENCODE_AV1_SESSION_PARAMETERS_CREATE_INFO_KHR:
            return {alignof(VkVideoEncodeAV1SessionParametersCreateInfoKHR),
                    sizeof(VkVideoEncodeAV1SessionParametersCreateInfoKHR)};
        case VK_STRUCTURE_TYPE_VIDEO_ENCODE_H264_SESSION_PARAMETERS_CREATE_INFO_KHR:
            return {alignof(VkVideoEncodeH264SessionParametersCreateInfoKHR),
                    sizeof(VkVideoEncodeH264SessionParametersCreateInfoKHR)};
        case VK_STRUCTURE_TYPE_VIDEO_ENCODE_H265_SESSION_PARAMETERS_CREATE_INFO_KHR:
            return {alignof(VkVideoEncodeH265SessionParametersCreateInfoKHR),
                    sizeof(VkVideoEncodeH265SessionParametersCreateInfoKHR)};
        case VK_STRUCTURE_TYPE_VIDEO_ENCODE_QUALITY_LEVEL_INFO_KHR:
            return {alignof(VkVideoEncodeQualityLevelInfoKHR), sizeof(VkVideoEncodeQualityLevelInfoKHR)};
        case VK_STRUCTURE_TYPE_VIDEO_ENCODE_QUANTIZATION_MAP_SESSION_PARAMETERS_CREATE_INFO_KHR:
            return {alignof(VkVideoEncodeQuantizationMapSessionParametersCreateInfoKHR),
                    sizeof(VkVideoEncodeQuantizationMapSessionParametersCreateInfoKHR)};

        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkVideoSessionParametersUpdateInfoKHR>(VkStructureType type) {
    switch (type) {
        case VK_STRUCTURE_TYPE_VIDEO_DECODE_H264_SESSION_PARAMETERS_ADD_INFO_KHR:
            return {alignof(VkVideoDecodeH264SessionParametersAddInfoKHR), sizeof(VkVideoDecodeH264SessionParametersAddInfoKHR)};
        case VK_STRUCTURE_TYPE_VIDEO_DECODE_H265_SESSION_PARAMETERS_ADD_INFO_KHR:
            return {alignof(VkVideoDecodeH265SessionParametersAddInfoKHR), sizeof(VkVideoDecodeH265SessionParametersAddInfoKHR)};
        case VK_STRUCTURE_TYPE_VIDEO_ENCODE_H264_SESSION_PARAMETERS_ADD_INFO_KHR:
            return {alignof(VkVideoEncodeH264SessionParametersAddInfoKHR), sizeof(VkVideoEncodeH264SessionParametersAddInfoKHR)};
        case VK_STRUCTURE_TYPE_VIDEO_ENCODE_H265_SESSION_PARAMETERS_ADD_INFO_KHR:
            return {alignof(VkVideoEncodeH265SessionParametersAddInfoKHR), sizeof(VkVideoEncodeH265SessionParametersAddInfoKHR)};

        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkVideoBeginCodingInfoKHR>(VkStructureType type) {
    switch (type) {
        case VK_STRUCTURE_TYPE_VIDEO_ENCODE_AV1_GOP_REMAINING_FRAME_INFO_KHR:
            return {alignof(VkVideoEncodeAV1GopRemainingFrameInfoKHR), sizeof(VkVideoEncodeAV1GopRemainingFrameInfoKHR)};
        case VK_STRUCTURE_TYPE_VIDEO_ENCODE_AV1_RATE_CONTROL_INFO_KHR:
            return {alignof(VkVideoEncodeAV1RateControlInfoKHR), sizeof(VkVideoEncodeAV1RateControlInfoKHR)};
        case VK_STRUCTURE_TYPE_VIDEO_ENCODE_H264_GOP_REMAINING_FRAME_INFO_KHR:
            return {alignof(VkVideoEncodeH264GopRemainingFrameInfoKHR), sizeof(VkVideoEncodeH264GopRemainingFrameInfoKHR)};
        case VK_STRUCTURE_TYPE_VIDEO_ENCODE_H264_RATE_CONTROL_INFO_KHR:
            return {alignof(VkVideoEncodeH264RateControlInfoKHR), sizeof(VkVideoEncodeH264RateControlInfoKHR)};
        case VK_STRUCTURE_TYPE_VIDEO_ENCODE_H265_GOP_REMAINING_FRAME_INFO_KHR:
            return {alignof(VkVideoEncodeH265GopRemainingFrameInfoKHR), sizeof(VkVideoEncodeH265GopRemainingFrameInfoKHR)};
        case VK_STRUCTURE_TYPE_VIDEO_ENCODE_H265_RATE_CONTROL_INFO_KHR:
            return {alignof(VkVideoEncodeH265RateControlInfoKHR), sizeof(VkVideoEncodeH265RateControlInfoKHR)};
        case VK_STRUCTURE_TYPE_VIDEO_ENCODE_RATE_CONTROL_INFO_KHR:
            return {alignof(VkVideoEncodeRateControlInfoKHR), sizeof(VkVideoEncodeRateControlInfoKHR)};

        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkVideoCodingControlInfoKHR>(VkStructureType type) {
    switch (type) {
        case VK_STRUCTURE_TYPE_VIDEO_ENCODE_AV1_RATE_CONTROL_INFO_KHR:
            return {alignof(VkVideoEncodeAV1RateControlInfoKHR), sizeof(VkVideoEncodeAV1RateControlInfoKHR)};
        case VK_STRUCTURE_TYPE_VIDEO_ENCODE_H264_RATE_CONTROL_INFO_KHR:
            return {alignof(VkVideoEncodeH264RateControlInfoKHR), sizeof(VkVideoEncodeH264RateControlInfoKHR)};
        case VK_STRUCTURE_TYPE_VIDEO_ENCODE_H265_RATE_CONTROL_INFO_KHR:
            return {alignof(VkVideoEncodeH265RateControlInfoKHR), sizeof(VkVideoEncodeH265RateControlInfoKHR)};
        case VK_STRUCTURE_TYPE_VIDEO_ENCODE_QUALITY_LEVEL_INFO_KHR:
            return {alignof(VkVideoEncodeQualityLevelInfoKHR), sizeof(VkVideoEncodeQualityLevelInfoKHR)};
        case VK_STRUCTURE_TYPE_VIDEO_ENCODE_RATE_CONTROL_INFO_KHR:
            return {alignof(VkVideoEncodeRateControlInfoKHR), sizeof(VkVideoEncodeRateControlInfoKHR)};

        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkVideoDecodeInfoKHR>(VkStructureType type) {
    switch (type) {
        case VK_STRUCTURE_TYPE_VIDEO_DECODE_AV1_INLINE_SESSION_PARAMETERS_INFO_KHR:
            return {alignof(VkVideoDecodeAV1InlineSessionParametersInfoKHR),
                    sizeof(VkVideoDecodeAV1InlineSessionParametersInfoKHR)};
        case VK_STRUCTURE_TYPE_VIDEO_DECODE_AV1_PICTURE_INFO_KHR:
            return {alignof(VkVideoDecodeAV1PictureInfoKHR), sizeof(VkVideoDecodeAV1PictureInfoKHR)};
        case VK_STRUCTURE_TYPE_VIDEO_DECODE_H264_INLINE_SESSION_PARAMETERS_INFO_KHR:
            return {alignof(VkVideoDecodeH264InlineSessionParametersInfoKHR),
                    sizeof(VkVideoDecodeH264InlineSessionParametersInfoKHR)};
        case VK_STRUCTURE_TYPE_VIDEO_DECODE_H264_PICTURE_INFO_KHR:
            return {alignof(VkVideoDecodeH264PictureInfoKHR), sizeof(VkVideoDecodeH264PictureInfoKHR)};
        case VK_STRUCTURE_TYPE_VIDEO_DECODE_H265_INLINE_SESSION_PARAMETERS_INFO_KHR:
            return {alignof(VkVideoDecodeH265InlineSessionParametersInfoKHR),
                    sizeof(VkVideoDecodeH265InlineSessionParametersInfoKHR)};
        case VK_STRUCTURE_TYPE_VIDEO_DECODE_H265_PICTURE_INFO_KHR:
            return {alignof(VkVideoDecodeH265PictureInfoKHR), sizeof(VkVideoDecodeH265PictureInfoKHR)};
        case VK_STRUCTURE_TYPE_VIDEO_INLINE_QUERY_INFO_KHR:
            return {alignof(VkVideoInlineQueryInfoKHR), sizeof(VkVideoInlineQueryInfoKHR)};

        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPhysicalDeviceSurfaceInfo2KHR>(VkStructureType type) {
    switch (type) {
#ifdef VK_USE_PLATFORM_WIN32_KHR
        case VK_STRUCTURE_TYPE_SURFACE_FULL_SCREEN_EXCLUSIVE_INFO_EXT:
            return {alignof(VkSurfaceFullScreenExclusiveInfoEXT), sizeof(VkSurfaceFullScreenExclusiveInfoEXT)};
        case VK_STRUCTURE_TYPE_SURFACE_FULL_SCREEN_EXCLUSIVE_WIN32_INFO_EXT:
            return {alignof(VkSurfaceFullScreenExclusiveWin32InfoEXT), sizeof(VkSurfaceFullScreenExclusiveWin32InfoEXT)};
#endif  // VK_USE_PLATFORM_WIN32_KHR
        case VK_STRUCTURE_TYPE_SURFACE_PRESENT_MODE_EXT:
            return {alignof(VkSurfacePresentModeEXT), sizeof(VkSurfacePresentModeEXT)};

        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkSurfaceCapabilities2KHR>(VkStructureType type) {
    switch (type) {
        case VK_STRUCTURE_TYPE_DISPLAY_NATIVE_HDR_SURFACE_CAPABILITIES_AMD:
            return {alignof(VkDisplayNativeHdrSurfaceCapabilitiesAMD), sizeof(VkDisplayNativeHdrSurfaceCapabilitiesAMD)};
        case VK_STRUCTURE_TYPE_LATENCY_SURFACE_CAPABILITIES_NV:
            return {alignof(VkLatencySurfaceCapabilitiesNV), sizeof(VkLatencySurfaceCapabilitiesNV)};
        case VK_STRUCTURE_TYPE_SHARED_PRESENT_SURFACE_CAPABILITIES_KHR:
            return {alignof(VkSharedPresentSurfaceCapabilitiesKHR), sizeof(VkSharedPresentSurfaceCapabilitiesKHR)};
#ifdef VK_USE_PLATFORM_WIN32_KHR
        case VK_STRUCTURE_TYPE_SURFACE_CAPABILITIES_FULL_SCREEN_EXCLUSIVE_EXT:
            return {alignof(VkSurfaceCapabilitiesFullScreenExclusiveEXT), sizeof(VkSurfaceCapabilitiesFullScreenExclusiveEXT)};
#endif  // VK_USE_PLATFORM_WIN32_KHR
        case VK_STRUCTURE_TYPE_SURFACE_CAPABILITIES_PRESENT_BARRIER_NV:
            return {alignof(VkSurfaceCapabilitiesPresentBarrierNV), sizeof(VkSurfaceCapabilitiesPresentBarrierNV)};
        case VK_STRUCTURE_TYPE_SURFACE_PRESENT_MODE_COMPATIBILITY_EXT:
            return {alignof(VkSurfacePresentModeCompatibilityEXT), sizeof(VkSurfacePresentModeCompatibilityEXT)};
        case VK_STRUCTURE_TYPE_SURFACE_PRESENT_SCALING_CAPABILITIES_EXT:
            return {alignof(VkSurfacePresentScalingCapabilitiesEXT), sizeof(VkSurfacePresentScalingCapabilitiesEXT)};
        case VK_STRUCTURE_TYPE_SURFACE_PROTECTED_CAPABILITIES_KHR:
            return {alignof(VkSurfaceProtectedCapabilitiesKHR), sizeof(VkSurfaceProtectedCapabilitiesKHR)};

        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkSurfaceFormat2KHR>(VkStructureType type) {
    switch (type) {
        case VK_STRUCTURE_TYPE_IMAGE_COMPRESSION_PROPERTIES_EXT:
            return {alignof(VkImageCompressionPropertiesEXT), sizeof(VkImageCompressionPropertiesEXT)};

        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkDisplayModeProperties2KHR>(VkStructureType type) {
    switch (type) {
        case VK_STRUCTURE_TYPE_DISPLAY_MODE_STEREO_PROPERTIES_NV:
            return {alignof(VkDisplayModeStereoPropertiesNV), sizeof(VkDisplayModeStereoPropertiesNV)};

        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkVideoEncodeInfoKHR>(VkStructureType type) {
    switch (type) {
        case VK_STRUCTURE_TYPE_VIDEO_ENCODE_AV1_PICTURE_INFO_KHR:
            return {alignof(VkVideoEncodeAV1PictureInfoKHR), sizeof(VkVideoEncodeAV1PictureInfoKHR)};
        case VK_STRUCTURE_TYPE_VIDEO_ENCODE_H264_PICTURE_INFO_KHR:
            return {alignof(VkVideoEncodeH264PictureInfoKHR), sizeof(VkVideoEncodeH264PictureInfoKHR)};
        case VK_STRUCTURE_TYPE_VIDEO_ENCODE_H265_PICTURE_INFO_KHR:
            return {alignof(VkVideoEncodeH265PictureInfoKHR), sizeof(VkVideoEncodeH265PictureInfoKHR)};
        case VK_STRUCTURE_TYPE_VIDEO_ENCODE_QUANTIZATION_MAP_INFO_KHR:
            return {alignof(VkVideoEncodeQuantizationMapInfoKHR), sizeof(VkVideoEncodeQuantizationMapInfoKHR)};
        case VK_STRUCTURE_TYPE_VIDEO_INLINE_QUERY_INFO_KHR:
            return {alignof(VkVideoInlineQueryInfoKHR), sizeof(VkVideoInlineQueryInfoKHR)};

        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkVideoEncodeRateControlLayerInfoKHR>(VkStructureType type) {
    switch (type) {
        case VK_STRUCTURE_TYPE_VIDEO_ENCODE_AV1_RATE_CONTROL_LAYER_INFO_KHR:
            return {alignof(VkVideoEncodeAV1RateControlLayerInfoKHR), sizeof(VkVideoEncodeAV1RateControlLayerInfoKHR)};
        case VK_STRUCTURE_TYPE_VIDEO_ENCODE_H264_RATE_CONTROL_LAYER_INFO_KHR:
            return {alignof(VkVideoEncodeH264RateControlLayerInfoKHR), sizeof(VkVideoEncodeH264RateControlLayerInfoKHR)};
        case VK_STRUCTURE_TYPE_VIDEO_ENCODE_H265_RATE_CONTROL_LAYER_INFO_KHR:
            return {alignof(VkVideoEncodeH265RateControlLayerInfoKHR), sizeof(VkVideoEncodeH265RateControlLayerInfoKHR)};

        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkVideoEncodeQualityLevelPropertiesKHR>(VkStructureType type) {
    switch (type) {
        case VK_STRUCTURE_TYPE_VIDEO_ENCODE_AV1_QUALITY_LEVEL_PROPERTIES_KHR:
            return {alignof(VkVideoEncodeAV1QualityLevelPropertiesKHR), sizeof(VkVideoEncodeAV1QualityLevelPropertiesKHR)};
        case VK_STRUCTURE_TYPE_VIDEO_ENCODE_H264_QUALITY_LEVEL_PROPERTIES_KHR:
            return {alignof(VkVideoEncodeH264QualityLevelPropertiesKHR), sizeof(VkVideoEncodeH264QualityLevelPropertiesKHR)};
        case VK_STRUCTURE_TYPE_VIDEO_ENCODE_H265_QUALITY_LEVEL_PROPERTIES_KHR:
            return {alignof(VkVideoEncodeH265QualityLevelPropertiesKHR), sizeof(VkVideoEncodeH265QualityLevelPropertiesKHR)};

        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkVideoEncodeSessionParametersGetInfoKHR>(
    VkStructureType type) {
    switch (type) {
        case VK_STRUCTURE_TYPE_VIDEO_ENCODE_H264_SESSION_PARAMETERS_GET_INFO_KHR:
            return {alignof(VkVideoEncodeH264SessionParametersGetInfoKHR), sizeof(VkVideoEncodeH264SessionParametersGetInfoKHR)};
        case VK_STRUCTURE_TYPE_VIDEO_ENCODE_H265_SESSION_PARAMETERS_GET_INFO_KHR:
            return {alignof(VkVideoEncodeH265SessionParametersGetInfoKHR), sizeof(VkVideoEncodeH265SessionParametersGetInfoKHR)};

        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkVideoEncodeSessionParametersFeedbackInfoKHR>(
    VkStructureType type) {
    switch (type) {
        case VK_STRUCTURE_TYPE_VIDEO_ENCODE_H264_SESSION_PARAMETERS_FEEDBACK_INFO_KHR:
            return {alignof(VkVideoEncodeH264SessionParametersFeedbackInfoKHR),
                    sizeof(VkVideoEncodeH264SessionParametersFeedbackInfoKHR)};
        case VK_STRUCTURE_TYPE_VIDEO_ENCODE_H265_SESSION_PARAMETERS_FEEDBACK_INFO_KHR:
            return {alignof(VkVideoEncodeH265SessionParametersFeedbackInfoKHR),
                    sizeof(VkVideoEncodeH265SessionParametersFeedbackInfoKHR)};

        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkSetDescriptorBufferOffsetsInfoEXT>(VkStructureType type) {
    switch (type) {
        case VK_STRUCTURE_TYPE_PIPELINE_LAYOUT_CREATE_INFO:
            return {alignof(VkPipelineLayoutCreateInfo), sizeof(VkPipelineLayoutCreateInfo)};

        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkBindDescriptorBufferEmbeddedSamplersInfoEXT>(
    VkStructureType type) {
    switch (type) {
        case VK_STRUCTURE_TYPE_PIPELINE_LAYOUT_CREATE_INFO:
            return {alignof(VkPipelineLayoutCreateInfo), sizeof(VkPipelineLayoutCreateInfo)};

        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPhysicalDeviceLayeredApiPropertiesKHR>(
    VkStructureType type) {
    switch (type) {
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_LAYERED_API_VULKAN_PROPERTIES_KHR:
            return {alignof(VkPhysicalDeviceLayeredApiVulkanPropertiesKHR), sizeof(VkPhysicalDeviceLayeredApiVulkanPropertiesKHR)};

        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkCuModuleCreateInfoNVX>(VkStructureType type) {
    switch (type) {
        case VK_STRUCTURE_TYPE_CU_MODULE_TEXTURING_MODE_CREATE_INFO_NVX:
            return {alignof(VkCuModuleTexturingModeCreateInfoNVX), sizeof(VkCuModuleTexturingModeCreateInfoNVX)};

        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkHdrMetadataEXT>(VkStructureType type) {
    switch (type) {
        case VK_STRUCTURE_TYPE_HDR_VIVID_DYNAMIC_METADATA_HUAWEI:
            return {alignof(VkHdrVividDynamicMetadataHUAWEI), sizeof(VkHdrVividDynamicMetadataHUAWEI)};

        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkDebugUtilsMessengerCallbackDataEXT>(VkStructureType type) {
    switch (type) {
        case VK_STRUCTURE_TYPE_DEVICE_ADDRESS_BINDING_CALLBACK_DATA_EXT:
            return {alignof(VkDeviceAddressBindingCallbackDataEXT), sizeof(VkDeviceAddressBindingCallbackDataEXT)};

        default:
            // Unknown structure
            return {0, 0};
    }
}
#ifdef VK_USE_PLATFORM_ANDROID_KHR

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkAndroidHardwareBufferPropertiesANDROID>(
    VkStructureType type) {
    switch (type) {
#ifdef VK_USE_PLATFORM_ANDROID_KHR
        case VK_STRUCTURE_TYPE_ANDROID_HARDWARE_BUFFER_FORMAT_PROPERTIES_2_ANDROID:
            return {alignof(VkAndroidHardwareBufferFormatProperties2ANDROID),
                    sizeof(VkAndroidHardwareBufferFormatProperties2ANDROID)};
        case VK_STRUCTURE_TYPE_ANDROID_HARDWARE_BUFFER_FORMAT_PROPERTIES_ANDROID:
            return {alignof(VkAndroidHardwareBufferFormatPropertiesANDROID),
                    sizeof(VkAndroidHardwareBufferFormatPropertiesANDROID)};
        case VK_STRUCTURE_TYPE_ANDROID_HARDWARE_BUFFER_FORMAT_RESOLVE_PROPERTIES_ANDROID:
            return {alignof(VkAndroidHardwareBufferFormatResolvePropertiesANDROID),
                    sizeof(VkAndroidHardwareBufferFormatResolvePropertiesANDROID)};
#endif  // VK_USE_PLATFORM_ANDROID_KHR

        default:
            // Unknown structure
            return {0, 0};
    }
}
#endif  // VK_USE_PLATFORM_ANDROID_KHR
#ifdef VK_ENABLE_BETA_EXTENSIONS

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkExecutionGraphPipelineCreateInfoAMDX>(VkStructureType type) {
    switch (type) {
        case VK_STRUCTURE_TYPE_PIPELINE_COMPILER_CONTROL_CREATE_INFO_AMD:
            return {alignof(VkPipelineCompilerControlCreateInfoAMD), sizeof(VkPipelineCompilerControlCreateInfoAMD)};
        case VK_STRUCTURE_TYPE_PIPELINE_CREATION_FEEDBACK_CREATE_INFO:
            return {alignof(VkPipelineCreationFeedbackCreateInfo), sizeof(VkPipelineCreationFeedbackCreateInfo)};

        default:
            // Unknown structure
            return {0, 0};
    }
}
#endif  // VK_ENABLE_BETA_EXTENSIONS

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkRayTracingPipelineCreateInfoNV>(VkStructureType type) {
    switch (type) {
        case VK_STRUCTURE_TYPE_PIPELINE_CREATE_FLAGS_2_CREATE_INFO:
            return {alignof(VkPipelineCreateFlags2CreateInfo), sizeof(VkPipelineCreateFlags2CreateInfo)};
        case VK_STRUCTURE_TYPE_PIPELINE_CREATION_FEEDBACK_CREATE_INFO:
            return {alignof(VkPipelineCreationFeedbackCreateInfo), sizeof(VkPipelineCreationFeedbackCreateInfo)};

        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkAccelerationStructureCreateInfoNV>(VkStructureType type) {
    switch (type) {
        case VK_STRUCTURE_TYPE_OPAQUE_CAPTURE_DESCRIPTOR_DATA_CREATE_INFO_EXT:
            return {alignof(VkOpaqueCaptureDescriptorDataCreateInfoEXT), sizeof(VkOpaqueCaptureDescriptorDataCreateInfoEXT)};

        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkDepthBiasInfoEXT>(VkStructureType type) {
    switch (type) {
        case VK_STRUCTURE_TYPE_DEPTH_BIAS_REPRESENTATION_INFO_EXT:
            return {alignof(VkDepthBiasRepresentationInfoEXT), sizeof(VkDepthBiasRepresentationInfoEXT)};

        default:
            // Unknown structure
            return {0, 0};
    }
}
#ifdef VK_USE_PLATFORM_METAL_EXT

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkExportMetalObjectsInfoEXT>(VkStructureType type) {
    switch (type) {
#ifdef VK_USE_PLATFORM_METAL_EXT
        case VK_STRUCTURE_TYPE_EXPORT_METAL_BUFFER_INFO_EXT:
            return {alignof(VkExportMetalBufferInfoEXT), sizeof(VkExportMetalBufferInfoEXT)};
        case VK_STRUCTURE_TYPE_EXPORT_METAL_COMMAND_QUEUE_INFO_EXT:
            return {alignof(VkExportMetalCommandQueueInfoEXT), sizeof(VkExportMetalCommandQueueInfoEXT)};
        case VK_STRUCTURE_TYPE_EXPORT_METAL_DEVICE_INFO_EXT:
            return {alignof(VkExportMetalDeviceInfoEXT), sizeof(VkExportMetalDeviceInfoEXT)};
        case VK_STRUCTURE_TYPE_EXPORT_METAL_IO_SURFACE_INFO_EXT:
            return {alignof(VkExportMetalIOSurfaceInfoEXT), sizeof(VkExportMetalIOSurfaceInfoEXT)};
        case VK_STRUCTURE_TYPE_EXPORT_METAL_SHARED_EVENT_INFO_EXT:
            return {alignof(VkExportMetalSharedEventInfoEXT), sizeof(VkExportMetalSharedEventInfoEXT)};
        case VK_STRUCTURE_TYPE_EXPORT_METAL_TEXTURE_INFO_EXT:
            return {alignof(VkExportMetalTextureInfoEXT), sizeof(VkExportMetalTextureInfoEXT)};
#endif  // VK_USE_PLATFORM_METAL_EXT

        default:
            // Unknown structure
            return {0, 0};
    }
}
#endif  // VK_USE_PLATFORM_METAL_EXT

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkDescriptorBufferBindingInfoEXT>(VkStructureType type) {
    switch (type) {
        case VK_STRUCTURE_TYPE_BUFFER_USAGE_FLAGS_2_CREATE_INFO:
            return {alignof(VkBufferUsageFlags2CreateInfo), sizeof(VkBufferUsageFlags2CreateInfo)};
        case VK_STRUCTURE_TYPE_DESCRIPTOR_BUFFER_BINDING_PUSH_DESCRIPTOR_BUFFER_HANDLE_EXT:
            return {alignof(VkDescriptorBufferBindingPushDescriptorBufferHandleEXT),
                    sizeof(VkDescriptorBufferBindingPushDescriptorBufferHandleEXT)};

        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPhysicalDeviceClusterCullingShaderFeaturesHUAWEI>(
    VkStructureType type) {
    switch (type) {
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_CLUSTER_CULLING_SHADER_VRS_FEATURES_HUAWEI:
            return {alignof(VkPhysicalDeviceClusterCullingShaderVrsFeaturesHUAWEI),
                    sizeof(VkPhysicalDeviceClusterCullingShaderVrsFeaturesHUAWEI)};

        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkOpticalFlowSessionCreateInfoNV>(VkStructureType type) {
    switch (type) {
        case VK_STRUCTURE_TYPE_OPTICAL_FLOW_SESSION_CREATE_PRIVATE_DATA_INFO_NV:
            return {alignof(VkOpticalFlowSessionCreatePrivateDataInfoNV), sizeof(VkOpticalFlowSessionCreatePrivateDataInfoNV)};

        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkShaderCreateInfoEXT>(VkStructureType type) {
    switch (type) {
        case VK_STRUCTURE_TYPE_PIPELINE_SHADER_STAGE_REQUIRED_SUBGROUP_SIZE_CREATE_INFO:
            return {alignof(VkPipelineShaderStageRequiredSubgroupSizeCreateInfo),
                    sizeof(VkPipelineShaderStageRequiredSubgroupSizeCreateInfo)};
        case VK_STRUCTURE_TYPE_VALIDATION_FEATURES_EXT:
            return {alignof(VkValidationFeaturesEXT), sizeof(VkValidationFeaturesEXT)};

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

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPartitionedAccelerationStructureInstancesInputNV>(
    VkStructureType type) {
    switch (type) {
        case VK_STRUCTURE_TYPE_PARTITIONED_ACCELERATION_STRUCTURE_FLAGS_NV:
            return {alignof(VkPartitionedAccelerationStructureFlagsNV), sizeof(VkPartitionedAccelerationStructureFlagsNV)};

        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkGeneratedCommandsMemoryRequirementsInfoEXT>(
    VkStructureType type) {
    switch (type) {
        case VK_STRUCTURE_TYPE_GENERATED_COMMANDS_PIPELINE_INFO_EXT:
            return {alignof(VkGeneratedCommandsPipelineInfoEXT), sizeof(VkGeneratedCommandsPipelineInfoEXT)};
        case VK_STRUCTURE_TYPE_GENERATED_COMMANDS_SHADER_INFO_EXT:
            return {alignof(VkGeneratedCommandsShaderInfoEXT), sizeof(VkGeneratedCommandsShaderInfoEXT)};

        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkGeneratedCommandsInfoEXT>(VkStructureType type) {
    switch (type) {
        case VK_STRUCTURE_TYPE_GENERATED_COMMANDS_PIPELINE_INFO_EXT:
            return {alignof(VkGeneratedCommandsPipelineInfoEXT), sizeof(VkGeneratedCommandsPipelineInfoEXT)};
        case VK_STRUCTURE_TYPE_GENERATED_COMMANDS_SHADER_INFO_EXT:
            return {alignof(VkGeneratedCommandsShaderInfoEXT), sizeof(VkGeneratedCommandsShaderInfoEXT)};

        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkIndirectCommandsLayoutCreateInfoEXT>(VkStructureType type) {
    switch (type) {
        case VK_STRUCTURE_TYPE_PIPELINE_LAYOUT_CREATE_INFO:
            return {alignof(VkPipelineLayoutCreateInfo), sizeof(VkPipelineLayoutCreateInfo)};

        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkAccelerationStructureGeometryTrianglesDataKHR>(
    VkStructureType type) {
    switch (type) {
        case VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_GEOMETRY_MOTION_TRIANGLES_DATA_NV:
            return {alignof(VkAccelerationStructureGeometryMotionTrianglesDataNV),
                    sizeof(VkAccelerationStructureGeometryMotionTrianglesDataNV)};
#ifdef VK_ENABLE_BETA_EXTENSIONS
        case VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_TRIANGLES_DISPLACEMENT_MICROMAP_NV:
            return {alignof(VkAccelerationStructureTrianglesDisplacementMicromapNV),
                    sizeof(VkAccelerationStructureTrianglesDisplacementMicromapNV)};
#endif  // VK_ENABLE_BETA_EXTENSIONS
        case VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_TRIANGLES_OPACITY_MICROMAP_EXT:
            return {alignof(VkAccelerationStructureTrianglesOpacityMicromapEXT),
                    sizeof(VkAccelerationStructureTrianglesOpacityMicromapEXT)};

        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkAccelerationStructureGeometryKHR>(VkStructureType type) {
    switch (type) {
        case VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_GEOMETRY_LINEAR_SWEPT_SPHERES_DATA_NV:
            return {alignof(VkAccelerationStructureGeometryLinearSweptSpheresDataNV),
                    sizeof(VkAccelerationStructureGeometryLinearSweptSpheresDataNV)};
        case VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_GEOMETRY_SPHERES_DATA_NV:
            return {alignof(VkAccelerationStructureGeometrySpheresDataNV), sizeof(VkAccelerationStructureGeometrySpheresDataNV)};

        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkAccelerationStructureCreateInfoKHR>(VkStructureType type) {
    switch (type) {
        case VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_MOTION_INFO_NV:
            return {alignof(VkAccelerationStructureMotionInfoNV), sizeof(VkAccelerationStructureMotionInfoNV)};
        case VK_STRUCTURE_TYPE_OPAQUE_CAPTURE_DESCRIPTOR_DATA_CREATE_INFO_EXT:
            return {alignof(VkOpaqueCaptureDescriptorDataCreateInfoEXT), sizeof(VkOpaqueCaptureDescriptorDataCreateInfoEXT)};

        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkRayTracingPipelineCreateInfoKHR>(VkStructureType type) {
    switch (type) {
        case VK_STRUCTURE_TYPE_PIPELINE_BINARY_INFO_KHR:
            return {alignof(VkPipelineBinaryInfoKHR), sizeof(VkPipelineBinaryInfoKHR)};
        case VK_STRUCTURE_TYPE_PIPELINE_CREATE_FLAGS_2_CREATE_INFO:
            return {alignof(VkPipelineCreateFlags2CreateInfo), sizeof(VkPipelineCreateFlags2CreateInfo)};
        case VK_STRUCTURE_TYPE_PIPELINE_CREATION_FEEDBACK_CREATE_INFO:
            return {alignof(VkPipelineCreationFeedbackCreateInfo), sizeof(VkPipelineCreationFeedbackCreateInfo)};
        case VK_STRUCTURE_TYPE_PIPELINE_ROBUSTNESS_CREATE_INFO:
            return {alignof(VkPipelineRobustnessCreateInfo), sizeof(VkPipelineRobustnessCreateInfo)};
        case VK_STRUCTURE_TYPE_RAY_TRACING_PIPELINE_CLUSTER_ACCELERATION_STRUCTURE_CREATE_INFO_NV:
            return {alignof(VkRayTracingPipelineClusterAccelerationStructureCreateInfoNV),
                    sizeof(VkRayTracingPipelineClusterAccelerationStructureCreateInfoNV)};

        default:
            // Unknown structure
            return {0, 0};
    }
}

}  // namespace vk

// NOLINTEND
