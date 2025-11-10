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

namespace vk {

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
        case VK_STRUCTURE_TYPE_EXTERNAL_MEMORY_ACQUIRE_UNMODIFIED_EXT:
            return {alignof(VkExternalMemoryAcquireUnmodifiedEXT), sizeof(VkExternalMemoryAcquireUnmodifiedEXT)};

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
        case VK_STRUCTURE_TYPE_EXTERNAL_COMPUTE_QUEUE_DEVICE_CREATE_INFO_NV:
            return {alignof(VkExternalComputeQueueDeviceCreateInfoNV), sizeof(VkExternalComputeQueueDeviceCreateInfoNV)};
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
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COPY_MEMORY_INDIRECT_FEATURES_KHR:
            return {alignof(VkPhysicalDeviceCopyMemoryIndirectFeaturesKHR), sizeof(VkPhysicalDeviceCopyMemoryIndirectFeaturesKHR)};
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
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DATA_GRAPH_FEATURES_ARM:
            return {alignof(VkPhysicalDeviceDataGraphFeaturesARM), sizeof(VkPhysicalDeviceDataGraphFeaturesARM)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DEDICATED_ALLOCATION_IMAGE_ALIASING_FEATURES_NV:
            return {alignof(VkPhysicalDeviceDedicatedAllocationImageAliasingFeaturesNV),
                    sizeof(VkPhysicalDeviceDedicatedAllocationImageAliasingFeaturesNV)};
#ifdef VK_ENABLE_BETA_EXTENSIONS
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DENSE_GEOMETRY_FORMAT_FEATURES_AMDX:
            return {alignof(VkPhysicalDeviceDenseGeometryFormatFeaturesAMDX),
                    sizeof(VkPhysicalDeviceDenseGeometryFormatFeaturesAMDX)};
#endif  // VK_ENABLE_BETA_EXTENSIONS
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
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DESCRIPTOR_BUFFER_TENSOR_FEATURES_ARM:
            return {alignof(VkPhysicalDeviceDescriptorBufferTensorFeaturesARM),
                    sizeof(VkPhysicalDeviceDescriptorBufferTensorFeaturesARM)};
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
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FORMAT_PACK_FEATURES_ARM:
            return {alignof(VkPhysicalDeviceFormatPackFeaturesARM), sizeof(VkPhysicalDeviceFormatPackFeaturesARM)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_DENSITY_MAP_2_FEATURES_EXT:
            return {alignof(VkPhysicalDeviceFragmentDensityMap2FeaturesEXT),
                    sizeof(VkPhysicalDeviceFragmentDensityMap2FeaturesEXT)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_DENSITY_MAP_FEATURES_EXT:
            return {alignof(VkPhysicalDeviceFragmentDensityMapFeaturesEXT), sizeof(VkPhysicalDeviceFragmentDensityMapFeaturesEXT)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_DENSITY_MAP_LAYERED_FEATURES_VALVE:
            return {alignof(VkPhysicalDeviceFragmentDensityMapLayeredFeaturesVALVE),
                    sizeof(VkPhysicalDeviceFragmentDensityMapLayeredFeaturesVALVE)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_DENSITY_MAP_OFFSET_FEATURES_EXT:
            return {alignof(VkPhysicalDeviceFragmentDensityMapOffsetFeaturesEXT),
                    sizeof(VkPhysicalDeviceFragmentDensityMapOffsetFeaturesEXT)};
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
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MAINTENANCE_10_FEATURES_KHR:
            return {alignof(VkPhysicalDeviceMaintenance10FeaturesKHR), sizeof(VkPhysicalDeviceMaintenance10FeaturesKHR)};
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
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MAINTENANCE_9_FEATURES_KHR:
            return {alignof(VkPhysicalDeviceMaintenance9FeaturesKHR), sizeof(VkPhysicalDeviceMaintenance9FeaturesKHR)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MAP_MEMORY_PLACED_FEATURES_EXT:
            return {alignof(VkPhysicalDeviceMapMemoryPlacedFeaturesEXT), sizeof(VkPhysicalDeviceMapMemoryPlacedFeaturesEXT)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MEMORY_DECOMPRESSION_FEATURES_EXT:
            return {alignof(VkPhysicalDeviceMemoryDecompressionFeaturesEXT),
                    sizeof(VkPhysicalDeviceMemoryDecompressionFeaturesEXT)};
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
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PIPELINE_CACHE_INCREMENTAL_MODE_FEATURES_SEC:
            return {alignof(VkPhysicalDevicePipelineCacheIncrementalModeFeaturesSEC),
                    sizeof(VkPhysicalDevicePipelineCacheIncrementalModeFeaturesSEC)};
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
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PRESENT_ID_2_FEATURES_KHR:
            return {alignof(VkPhysicalDevicePresentId2FeaturesKHR), sizeof(VkPhysicalDevicePresentId2FeaturesKHR)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PRESENT_ID_FEATURES_KHR:
            return {alignof(VkPhysicalDevicePresentIdFeaturesKHR), sizeof(VkPhysicalDevicePresentIdFeaturesKHR)};
#ifdef VK_ENABLE_BETA_EXTENSIONS
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PRESENT_METERING_FEATURES_NV:
            return {alignof(VkPhysicalDevicePresentMeteringFeaturesNV), sizeof(VkPhysicalDevicePresentMeteringFeaturesNV)};
#endif  // VK_ENABLE_BETA_EXTENSIONS
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PRESENT_MODE_FIFO_LATEST_READY_FEATURES_KHR:
            return {alignof(VkPhysicalDevicePresentModeFifoLatestReadyFeaturesKHR),
                    sizeof(VkPhysicalDevicePresentModeFifoLatestReadyFeaturesKHR)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PRESENT_WAIT_2_FEATURES_KHR:
            return {alignof(VkPhysicalDevicePresentWait2FeaturesKHR), sizeof(VkPhysicalDevicePresentWait2FeaturesKHR)};
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
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ROBUSTNESS_2_FEATURES_KHR:
            return {alignof(VkPhysicalDeviceRobustness2FeaturesKHR), sizeof(VkPhysicalDeviceRobustness2FeaturesKHR)};
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
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_64_BIT_INDEXING_FEATURES_EXT:
            return {alignof(VkPhysicalDeviceShader64BitIndexingFeaturesEXT),
                    sizeof(VkPhysicalDeviceShader64BitIndexingFeaturesEXT)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_ATOMIC_FLOAT16_VECTOR_FEATURES_NV:
            return {alignof(VkPhysicalDeviceShaderAtomicFloat16VectorFeaturesNV),
                    sizeof(VkPhysicalDeviceShaderAtomicFloat16VectorFeaturesNV)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_ATOMIC_FLOAT_2_FEATURES_EXT:
            return {alignof(VkPhysicalDeviceShaderAtomicFloat2FeaturesEXT), sizeof(VkPhysicalDeviceShaderAtomicFloat2FeaturesEXT)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_ATOMIC_FLOAT_FEATURES_EXT:
            return {alignof(VkPhysicalDeviceShaderAtomicFloatFeaturesEXT), sizeof(VkPhysicalDeviceShaderAtomicFloatFeaturesEXT)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_ATOMIC_INT64_FEATURES:
            return {alignof(VkPhysicalDeviceShaderAtomicInt64Features), sizeof(VkPhysicalDeviceShaderAtomicInt64Features)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_BFLOAT16_FEATURES_KHR:
            return {alignof(VkPhysicalDeviceShaderBfloat16FeaturesKHR), sizeof(VkPhysicalDeviceShaderBfloat16FeaturesKHR)};
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
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_FLOAT8_FEATURES_EXT:
            return {alignof(VkPhysicalDeviceShaderFloat8FeaturesEXT), sizeof(VkPhysicalDeviceShaderFloat8FeaturesEXT)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_FLOAT_CONTROLS_2_FEATURES:
            return {alignof(VkPhysicalDeviceShaderFloatControls2Features), sizeof(VkPhysicalDeviceShaderFloatControls2Features)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_FMA_FEATURES_KHR:
            return {alignof(VkPhysicalDeviceShaderFmaFeaturesKHR), sizeof(VkPhysicalDeviceShaderFmaFeaturesKHR)};
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
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_UNIFORM_BUFFER_UNSIZED_ARRAY_FEATURES_EXT:
            return {alignof(VkPhysicalDeviceShaderUniformBufferUnsizedArrayFeaturesEXT),
                    sizeof(VkPhysicalDeviceShaderUniformBufferUnsizedArrayFeaturesEXT)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_UNTYPED_POINTERS_FEATURES_KHR:
            return {alignof(VkPhysicalDeviceShaderUntypedPointersFeaturesKHR),
                    sizeof(VkPhysicalDeviceShaderUntypedPointersFeaturesKHR)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADING_RATE_IMAGE_FEATURES_NV:
            return {alignof(VkPhysicalDeviceShadingRateImageFeaturesNV), sizeof(VkPhysicalDeviceShadingRateImageFeaturesNV)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SUBGROUP_SIZE_CONTROL_FEATURES:
            return {alignof(VkPhysicalDeviceSubgroupSizeControlFeatures), sizeof(VkPhysicalDeviceSubgroupSizeControlFeatures)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SUBPASS_MERGE_FEEDBACK_FEATURES_EXT:
            return {alignof(VkPhysicalDeviceSubpassMergeFeedbackFeaturesEXT),
                    sizeof(VkPhysicalDeviceSubpassMergeFeedbackFeaturesEXT)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SUBPASS_SHADING_FEATURES_HUAWEI:
            return {alignof(VkPhysicalDeviceSubpassShadingFeaturesHUAWEI), sizeof(VkPhysicalDeviceSubpassShadingFeaturesHUAWEI)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SWAPCHAIN_MAINTENANCE_1_FEATURES_KHR:
            return {alignof(VkPhysicalDeviceSwapchainMaintenance1FeaturesKHR),
                    sizeof(VkPhysicalDeviceSwapchainMaintenance1FeaturesKHR)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SYNCHRONIZATION_2_FEATURES:
            return {alignof(VkPhysicalDeviceSynchronization2Features), sizeof(VkPhysicalDeviceSynchronization2Features)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TENSOR_FEATURES_ARM:
            return {alignof(VkPhysicalDeviceTensorFeaturesARM), sizeof(VkPhysicalDeviceTensorFeaturesARM)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TEXEL_BUFFER_ALIGNMENT_FEATURES_EXT:
            return {alignof(VkPhysicalDeviceTexelBufferAlignmentFeaturesEXT),
                    sizeof(VkPhysicalDeviceTexelBufferAlignmentFeaturesEXT)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TEXTURE_COMPRESSION_ASTC_HDR_FEATURES:
            return {alignof(VkPhysicalDeviceTextureCompressionASTCHDRFeatures),
                    sizeof(VkPhysicalDeviceTextureCompressionASTCHDRFeatures)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TILE_MEMORY_HEAP_FEATURES_QCOM:
            return {alignof(VkPhysicalDeviceTileMemoryHeapFeaturesQCOM), sizeof(VkPhysicalDeviceTileMemoryHeapFeaturesQCOM)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TILE_PROPERTIES_FEATURES_QCOM:
            return {alignof(VkPhysicalDeviceTilePropertiesFeaturesQCOM), sizeof(VkPhysicalDeviceTilePropertiesFeaturesQCOM)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TILE_SHADING_FEATURES_QCOM:
            return {alignof(VkPhysicalDeviceTileShadingFeaturesQCOM), sizeof(VkPhysicalDeviceTileShadingFeaturesQCOM)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TIMELINE_SEMAPHORE_FEATURES:
            return {alignof(VkPhysicalDeviceTimelineSemaphoreFeatures), sizeof(VkPhysicalDeviceTimelineSemaphoreFeatures)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TRANSFORM_FEEDBACK_FEATURES_EXT:
            return {alignof(VkPhysicalDeviceTransformFeedbackFeaturesEXT), sizeof(VkPhysicalDeviceTransformFeedbackFeaturesEXT)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_UNIFIED_IMAGE_LAYOUTS_FEATURES_KHR:
            return {alignof(VkPhysicalDeviceUnifiedImageLayoutsFeaturesKHR),
                    sizeof(VkPhysicalDeviceUnifiedImageLayoutsFeaturesKHR)};
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
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VIDEO_DECODE_VP9_FEATURES_KHR:
            return {alignof(VkPhysicalDeviceVideoDecodeVP9FeaturesKHR), sizeof(VkPhysicalDeviceVideoDecodeVP9FeaturesKHR)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VIDEO_ENCODE_AV1_FEATURES_KHR:
            return {alignof(VkPhysicalDeviceVideoEncodeAV1FeaturesKHR), sizeof(VkPhysicalDeviceVideoEncodeAV1FeaturesKHR)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VIDEO_ENCODE_INTRA_REFRESH_FEATURES_KHR:
            return {alignof(VkPhysicalDeviceVideoEncodeIntraRefreshFeaturesKHR),
                    sizeof(VkPhysicalDeviceVideoEncodeIntraRefreshFeaturesKHR)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VIDEO_ENCODE_QUANTIZATION_MAP_FEATURES_KHR:
            return {alignof(VkPhysicalDeviceVideoEncodeQuantizationMapFeaturesKHR),
                    sizeof(VkPhysicalDeviceVideoEncodeQuantizationMapFeaturesKHR)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VIDEO_ENCODE_RGB_CONVERSION_FEATURES_VALVE:
            return {alignof(VkPhysicalDeviceVideoEncodeRgbConversionFeaturesVALVE),
                    sizeof(VkPhysicalDeviceVideoEncodeRgbConversionFeaturesVALVE)};
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
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ZERO_INITIALIZE_DEVICE_MEMORY_FEATURES_EXT:
            return {alignof(VkPhysicalDeviceZeroInitializeDeviceMemoryFeaturesEXT),
                    sizeof(VkPhysicalDeviceZeroInitializeDeviceMemoryFeaturesEXT)};
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
        case VK_STRUCTURE_TYPE_FRAME_BOUNDARY_TENSORS_ARM:
            return {alignof(VkFrameBoundaryTensorsARM), sizeof(VkFrameBoundaryTensorsARM)};
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
        case VK_STRUCTURE_TYPE_MEMORY_DEDICATED_ALLOCATE_INFO_TENSOR_ARM:
            return {alignof(VkMemoryDedicatedAllocateInfoTensorARM), sizeof(VkMemoryDedicatedAllocateInfoTensorARM)};
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
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkMemoryRequirements>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkSparseMemoryBind>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkSparseBufferMemoryBindInfo>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkSparseImageOpaqueMemoryBindInfo>(VkStructureType type) {
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
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkSparseImageMemoryBind>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkSparseImageMemoryBindInfo>(VkStructureType type) {
    switch (type) {
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
        case VK_STRUCTURE_TYPE_FRAME_BOUNDARY_TENSORS_ARM:
            return {alignof(VkFrameBoundaryTensorsARM), sizeof(VkFrameBoundaryTensorsARM)};
        case VK_STRUCTURE_TYPE_TIMELINE_SEMAPHORE_SUBMIT_INFO:
            return {alignof(VkTimelineSemaphoreSubmitInfo), sizeof(VkTimelineSemaphoreSubmitInfo)};

        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkSparseImageFormatProperties>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkSparseImageMemoryRequirements>(VkStructureType type) {
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
        case VK_STRUCTURE_TYPE_VIDEO_DECODE_VP9_PROFILE_INFO_KHR:
            return {alignof(VkVideoDecodeVP9ProfileInfoKHR), sizeof(VkVideoDecodeVP9ProfileInfoKHR)};
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
#ifdef VK_USE_PLATFORM_OHOS
        case VK_STRUCTURE_TYPE_NATIVE_BUFFER_OHOS:
            return {alignof(VkNativeBufferOHOS), sizeof(VkNativeBufferOHOS)};
#endif  // VK_USE_PLATFORM_OHOS
        case VK_STRUCTURE_TYPE_OPAQUE_CAPTURE_DESCRIPTOR_DATA_CREATE_INFO_EXT:
            return {alignof(VkOpaqueCaptureDescriptorDataCreateInfoEXT), sizeof(VkOpaqueCaptureDescriptorDataCreateInfoEXT)};
        case VK_STRUCTURE_TYPE_OPTICAL_FLOW_IMAGE_FORMAT_INFO_NV:
            return {alignof(VkOpticalFlowImageFormatInfoNV), sizeof(VkOpticalFlowImageFormatInfoNV)};
#ifdef VK_USE_PLATFORM_OHOS
        case VK_STRUCTURE_TYPE_SWAPCHAIN_IMAGE_CREATE_INFO_OHOS:
            return {alignof(VkSwapchainImageCreateInfoOHOS), sizeof(VkSwapchainImageCreateInfoOHOS)};
#endif  // VK_USE_PLATFORM_OHOS
        case VK_STRUCTURE_TYPE_VIDEO_PROFILE_LIST_INFO_KHR:
            return {alignof(VkVideoProfileListInfoKHR), sizeof(VkVideoProfileListInfoKHR)};

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
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkCommandPoolCreateInfo>(VkStructureType type) {
    switch (type) {
        case VK_STRUCTURE_TYPE_DATA_GRAPH_PROCESSING_ENGINE_CREATE_INFO_ARM:
            return {alignof(VkDataGraphProcessingEngineCreateInfoARM), sizeof(VkDataGraphProcessingEngineCreateInfoARM)};

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
        case VK_STRUCTURE_TYPE_RENDER_PASS_TILE_SHADING_CREATE_INFO_QCOM:
            return {alignof(VkRenderPassTileShadingCreateInfoQCOM), sizeof(VkRenderPassTileShadingCreateInfoQCOM)};
        case VK_STRUCTURE_TYPE_RENDERING_ATTACHMENT_LOCATION_INFO:
            return {alignof(VkRenderingAttachmentLocationInfo), sizeof(VkRenderingAttachmentLocationInfo)};
        case VK_STRUCTURE_TYPE_RENDERING_INPUT_ATTACHMENT_INDEX_INFO:
            return {alignof(VkRenderingInputAttachmentIndexInfo), sizeof(VkRenderingInputAttachmentIndexInfo)};
        case VK_STRUCTURE_TYPE_TILE_MEMORY_BIND_INFO_QCOM:
            return {alignof(VkTileMemoryBindInfoQCOM), sizeof(VkTileMemoryBindInfoQCOM)};

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
        case VK_STRUCTURE_TYPE_DATA_GRAPH_PROCESSING_ENGINE_CREATE_INFO_ARM:
            return {alignof(VkDataGraphProcessingEngineCreateInfoARM), sizeof(VkDataGraphProcessingEngineCreateInfoARM)};
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
        case VK_STRUCTURE_TYPE_WRITE_DESCRIPTOR_SET_TENSOR_ARM:
            return {alignof(VkWriteDescriptorSetTensorARM), sizeof(VkWriteDescriptorSetTensorARM)};

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
        case VK_STRUCTURE_TYPE_PIPELINE_FRAGMENT_DENSITY_MAP_LAYERED_CREATE_INFO_VALVE:
            return {alignof(VkPipelineFragmentDensityMapLayeredCreateInfoVALVE),
                    sizeof(VkPipelineFragmentDensityMapLayeredCreateInfoVALVE)};
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
        case VK_STRUCTURE_TYPE_RENDER_PASS_FRAGMENT_DENSITY_MAP_CREATE_INFO_EXT:
            return {alignof(VkRenderPassFragmentDensityMapCreateInfoEXT), sizeof(VkRenderPassFragmentDensityMapCreateInfoEXT)};
        case VK_STRUCTURE_TYPE_RENDER_PASS_INPUT_ATTACHMENT_ASPECT_CREATE_INFO:
            return {alignof(VkRenderPassInputAttachmentAspectCreateInfo), sizeof(VkRenderPassInputAttachmentAspectCreateInfo)};
        case VK_STRUCTURE_TYPE_RENDER_PASS_MULTIVIEW_CREATE_INFO:
            return {alignof(VkRenderPassMultiviewCreateInfo), sizeof(VkRenderPassMultiviewCreateInfo)};
        case VK_STRUCTURE_TYPE_RENDER_PASS_TILE_SHADING_CREATE_INFO_QCOM:
            return {alignof(VkRenderPassTileShadingCreateInfoQCOM), sizeof(VkRenderPassTileShadingCreateInfoQCOM)};
        case VK_STRUCTURE_TYPE_TILE_MEMORY_SIZE_INFO_QCOM:
            return {alignof(VkTileMemorySizeInfoQCOM), sizeof(VkTileMemorySizeInfoQCOM)};

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
#ifdef VK_USE_PLATFORM_OHOS
        case VK_STRUCTURE_TYPE_NATIVE_BUFFER_OHOS:
            return {alignof(VkNativeBufferOHOS), sizeof(VkNativeBufferOHOS)};
#endif  // VK_USE_PLATFORM_OHOS

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
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkDeviceGroupBindSparseInfo>(VkStructureType type) {
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
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkImageSparseMemoryRequirementsInfo2>(VkStructureType type) {
    switch (type) {
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
        case VK_STRUCTURE_TYPE_TILE_MEMORY_REQUIREMENTS_QCOM:
            return {alignof(VkTileMemoryRequirementsQCOM), sizeof(VkTileMemoryRequirementsQCOM)};

        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkSparseImageMemoryRequirements2>(VkStructureType type) {
    switch (type) {
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
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COPY_MEMORY_INDIRECT_FEATURES_KHR:
            return {alignof(VkPhysicalDeviceCopyMemoryIndirectFeaturesKHR), sizeof(VkPhysicalDeviceCopyMemoryIndirectFeaturesKHR)};
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
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DATA_GRAPH_FEATURES_ARM:
            return {alignof(VkPhysicalDeviceDataGraphFeaturesARM), sizeof(VkPhysicalDeviceDataGraphFeaturesARM)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DEDICATED_ALLOCATION_IMAGE_ALIASING_FEATURES_NV:
            return {alignof(VkPhysicalDeviceDedicatedAllocationImageAliasingFeaturesNV),
                    sizeof(VkPhysicalDeviceDedicatedAllocationImageAliasingFeaturesNV)};
#ifdef VK_ENABLE_BETA_EXTENSIONS
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DENSE_GEOMETRY_FORMAT_FEATURES_AMDX:
            return {alignof(VkPhysicalDeviceDenseGeometryFormatFeaturesAMDX),
                    sizeof(VkPhysicalDeviceDenseGeometryFormatFeaturesAMDX)};
#endif  // VK_ENABLE_BETA_EXTENSIONS
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
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DESCRIPTOR_BUFFER_TENSOR_FEATURES_ARM:
            return {alignof(VkPhysicalDeviceDescriptorBufferTensorFeaturesARM),
                    sizeof(VkPhysicalDeviceDescriptorBufferTensorFeaturesARM)};
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
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FORMAT_PACK_FEATURES_ARM:
            return {alignof(VkPhysicalDeviceFormatPackFeaturesARM), sizeof(VkPhysicalDeviceFormatPackFeaturesARM)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_DENSITY_MAP_2_FEATURES_EXT:
            return {alignof(VkPhysicalDeviceFragmentDensityMap2FeaturesEXT),
                    sizeof(VkPhysicalDeviceFragmentDensityMap2FeaturesEXT)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_DENSITY_MAP_FEATURES_EXT:
            return {alignof(VkPhysicalDeviceFragmentDensityMapFeaturesEXT), sizeof(VkPhysicalDeviceFragmentDensityMapFeaturesEXT)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_DENSITY_MAP_LAYERED_FEATURES_VALVE:
            return {alignof(VkPhysicalDeviceFragmentDensityMapLayeredFeaturesVALVE),
                    sizeof(VkPhysicalDeviceFragmentDensityMapLayeredFeaturesVALVE)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_DENSITY_MAP_OFFSET_FEATURES_EXT:
            return {alignof(VkPhysicalDeviceFragmentDensityMapOffsetFeaturesEXT),
                    sizeof(VkPhysicalDeviceFragmentDensityMapOffsetFeaturesEXT)};
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
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MAINTENANCE_10_FEATURES_KHR:
            return {alignof(VkPhysicalDeviceMaintenance10FeaturesKHR), sizeof(VkPhysicalDeviceMaintenance10FeaturesKHR)};
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
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MAINTENANCE_9_FEATURES_KHR:
            return {alignof(VkPhysicalDeviceMaintenance9FeaturesKHR), sizeof(VkPhysicalDeviceMaintenance9FeaturesKHR)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MAP_MEMORY_PLACED_FEATURES_EXT:
            return {alignof(VkPhysicalDeviceMapMemoryPlacedFeaturesEXT), sizeof(VkPhysicalDeviceMapMemoryPlacedFeaturesEXT)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MEMORY_DECOMPRESSION_FEATURES_EXT:
            return {alignof(VkPhysicalDeviceMemoryDecompressionFeaturesEXT),
                    sizeof(VkPhysicalDeviceMemoryDecompressionFeaturesEXT)};
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
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PIPELINE_CACHE_INCREMENTAL_MODE_FEATURES_SEC:
            return {alignof(VkPhysicalDevicePipelineCacheIncrementalModeFeaturesSEC),
                    sizeof(VkPhysicalDevicePipelineCacheIncrementalModeFeaturesSEC)};
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
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PRESENT_ID_2_FEATURES_KHR:
            return {alignof(VkPhysicalDevicePresentId2FeaturesKHR), sizeof(VkPhysicalDevicePresentId2FeaturesKHR)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PRESENT_ID_FEATURES_KHR:
            return {alignof(VkPhysicalDevicePresentIdFeaturesKHR), sizeof(VkPhysicalDevicePresentIdFeaturesKHR)};
#ifdef VK_ENABLE_BETA_EXTENSIONS
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PRESENT_METERING_FEATURES_NV:
            return {alignof(VkPhysicalDevicePresentMeteringFeaturesNV), sizeof(VkPhysicalDevicePresentMeteringFeaturesNV)};
#endif  // VK_ENABLE_BETA_EXTENSIONS
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PRESENT_MODE_FIFO_LATEST_READY_FEATURES_KHR:
            return {alignof(VkPhysicalDevicePresentModeFifoLatestReadyFeaturesKHR),
                    sizeof(VkPhysicalDevicePresentModeFifoLatestReadyFeaturesKHR)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PRESENT_WAIT_2_FEATURES_KHR:
            return {alignof(VkPhysicalDevicePresentWait2FeaturesKHR), sizeof(VkPhysicalDevicePresentWait2FeaturesKHR)};
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
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ROBUSTNESS_2_FEATURES_KHR:
            return {alignof(VkPhysicalDeviceRobustness2FeaturesKHR), sizeof(VkPhysicalDeviceRobustness2FeaturesKHR)};
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
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_64_BIT_INDEXING_FEATURES_EXT:
            return {alignof(VkPhysicalDeviceShader64BitIndexingFeaturesEXT),
                    sizeof(VkPhysicalDeviceShader64BitIndexingFeaturesEXT)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_ATOMIC_FLOAT16_VECTOR_FEATURES_NV:
            return {alignof(VkPhysicalDeviceShaderAtomicFloat16VectorFeaturesNV),
                    sizeof(VkPhysicalDeviceShaderAtomicFloat16VectorFeaturesNV)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_ATOMIC_FLOAT_2_FEATURES_EXT:
            return {alignof(VkPhysicalDeviceShaderAtomicFloat2FeaturesEXT), sizeof(VkPhysicalDeviceShaderAtomicFloat2FeaturesEXT)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_ATOMIC_FLOAT_FEATURES_EXT:
            return {alignof(VkPhysicalDeviceShaderAtomicFloatFeaturesEXT), sizeof(VkPhysicalDeviceShaderAtomicFloatFeaturesEXT)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_ATOMIC_INT64_FEATURES:
            return {alignof(VkPhysicalDeviceShaderAtomicInt64Features), sizeof(VkPhysicalDeviceShaderAtomicInt64Features)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_BFLOAT16_FEATURES_KHR:
            return {alignof(VkPhysicalDeviceShaderBfloat16FeaturesKHR), sizeof(VkPhysicalDeviceShaderBfloat16FeaturesKHR)};
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
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_FLOAT8_FEATURES_EXT:
            return {alignof(VkPhysicalDeviceShaderFloat8FeaturesEXT), sizeof(VkPhysicalDeviceShaderFloat8FeaturesEXT)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_FLOAT_CONTROLS_2_FEATURES:
            return {alignof(VkPhysicalDeviceShaderFloatControls2Features), sizeof(VkPhysicalDeviceShaderFloatControls2Features)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_FMA_FEATURES_KHR:
            return {alignof(VkPhysicalDeviceShaderFmaFeaturesKHR), sizeof(VkPhysicalDeviceShaderFmaFeaturesKHR)};
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
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_UNIFORM_BUFFER_UNSIZED_ARRAY_FEATURES_EXT:
            return {alignof(VkPhysicalDeviceShaderUniformBufferUnsizedArrayFeaturesEXT),
                    sizeof(VkPhysicalDeviceShaderUniformBufferUnsizedArrayFeaturesEXT)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_UNTYPED_POINTERS_FEATURES_KHR:
            return {alignof(VkPhysicalDeviceShaderUntypedPointersFeaturesKHR),
                    sizeof(VkPhysicalDeviceShaderUntypedPointersFeaturesKHR)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADING_RATE_IMAGE_FEATURES_NV:
            return {alignof(VkPhysicalDeviceShadingRateImageFeaturesNV), sizeof(VkPhysicalDeviceShadingRateImageFeaturesNV)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SUBGROUP_SIZE_CONTROL_FEATURES:
            return {alignof(VkPhysicalDeviceSubgroupSizeControlFeatures), sizeof(VkPhysicalDeviceSubgroupSizeControlFeatures)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SUBPASS_MERGE_FEEDBACK_FEATURES_EXT:
            return {alignof(VkPhysicalDeviceSubpassMergeFeedbackFeaturesEXT),
                    sizeof(VkPhysicalDeviceSubpassMergeFeedbackFeaturesEXT)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SUBPASS_SHADING_FEATURES_HUAWEI:
            return {alignof(VkPhysicalDeviceSubpassShadingFeaturesHUAWEI), sizeof(VkPhysicalDeviceSubpassShadingFeaturesHUAWEI)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SWAPCHAIN_MAINTENANCE_1_FEATURES_KHR:
            return {alignof(VkPhysicalDeviceSwapchainMaintenance1FeaturesKHR),
                    sizeof(VkPhysicalDeviceSwapchainMaintenance1FeaturesKHR)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SYNCHRONIZATION_2_FEATURES:
            return {alignof(VkPhysicalDeviceSynchronization2Features), sizeof(VkPhysicalDeviceSynchronization2Features)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TENSOR_FEATURES_ARM:
            return {alignof(VkPhysicalDeviceTensorFeaturesARM), sizeof(VkPhysicalDeviceTensorFeaturesARM)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TEXEL_BUFFER_ALIGNMENT_FEATURES_EXT:
            return {alignof(VkPhysicalDeviceTexelBufferAlignmentFeaturesEXT),
                    sizeof(VkPhysicalDeviceTexelBufferAlignmentFeaturesEXT)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TEXTURE_COMPRESSION_ASTC_HDR_FEATURES:
            return {alignof(VkPhysicalDeviceTextureCompressionASTCHDRFeatures),
                    sizeof(VkPhysicalDeviceTextureCompressionASTCHDRFeatures)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TILE_MEMORY_HEAP_FEATURES_QCOM:
            return {alignof(VkPhysicalDeviceTileMemoryHeapFeaturesQCOM), sizeof(VkPhysicalDeviceTileMemoryHeapFeaturesQCOM)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TILE_PROPERTIES_FEATURES_QCOM:
            return {alignof(VkPhysicalDeviceTilePropertiesFeaturesQCOM), sizeof(VkPhysicalDeviceTilePropertiesFeaturesQCOM)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TILE_SHADING_FEATURES_QCOM:
            return {alignof(VkPhysicalDeviceTileShadingFeaturesQCOM), sizeof(VkPhysicalDeviceTileShadingFeaturesQCOM)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TIMELINE_SEMAPHORE_FEATURES:
            return {alignof(VkPhysicalDeviceTimelineSemaphoreFeatures), sizeof(VkPhysicalDeviceTimelineSemaphoreFeatures)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TRANSFORM_FEEDBACK_FEATURES_EXT:
            return {alignof(VkPhysicalDeviceTransformFeedbackFeaturesEXT), sizeof(VkPhysicalDeviceTransformFeedbackFeaturesEXT)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_UNIFIED_IMAGE_LAYOUTS_FEATURES_KHR:
            return {alignof(VkPhysicalDeviceUnifiedImageLayoutsFeaturesKHR),
                    sizeof(VkPhysicalDeviceUnifiedImageLayoutsFeaturesKHR)};
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
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VIDEO_DECODE_VP9_FEATURES_KHR:
            return {alignof(VkPhysicalDeviceVideoDecodeVP9FeaturesKHR), sizeof(VkPhysicalDeviceVideoDecodeVP9FeaturesKHR)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VIDEO_ENCODE_AV1_FEATURES_KHR:
            return {alignof(VkPhysicalDeviceVideoEncodeAV1FeaturesKHR), sizeof(VkPhysicalDeviceVideoEncodeAV1FeaturesKHR)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VIDEO_ENCODE_INTRA_REFRESH_FEATURES_KHR:
            return {alignof(VkPhysicalDeviceVideoEncodeIntraRefreshFeaturesKHR),
                    sizeof(VkPhysicalDeviceVideoEncodeIntraRefreshFeaturesKHR)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VIDEO_ENCODE_QUANTIZATION_MAP_FEATURES_KHR:
            return {alignof(VkPhysicalDeviceVideoEncodeQuantizationMapFeaturesKHR),
                    sizeof(VkPhysicalDeviceVideoEncodeQuantizationMapFeaturesKHR)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VIDEO_ENCODE_RGB_CONVERSION_FEATURES_VALVE:
            return {alignof(VkPhysicalDeviceVideoEncodeRgbConversionFeaturesVALVE),
                    sizeof(VkPhysicalDeviceVideoEncodeRgbConversionFeaturesVALVE)};
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
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ZERO_INITIALIZE_DEVICE_MEMORY_FEATURES_EXT:
            return {alignof(VkPhysicalDeviceZeroInitializeDeviceMemoryFeaturesEXT),
                    sizeof(VkPhysicalDeviceZeroInitializeDeviceMemoryFeaturesEXT)};
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
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COPY_MEMORY_INDIRECT_PROPERTIES_KHR:
            return {alignof(VkPhysicalDeviceCopyMemoryIndirectPropertiesKHR),
                    sizeof(VkPhysicalDeviceCopyMemoryIndirectPropertiesKHR)};
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
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DESCRIPTOR_BUFFER_TENSOR_PROPERTIES_ARM:
            return {alignof(VkPhysicalDeviceDescriptorBufferTensorPropertiesARM),
                    sizeof(VkPhysicalDeviceDescriptorBufferTensorPropertiesARM)};
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
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTERNAL_COMPUTE_QUEUE_PROPERTIES_NV:
            return {alignof(VkPhysicalDeviceExternalComputeQueuePropertiesNV),
                    sizeof(VkPhysicalDeviceExternalComputeQueuePropertiesNV)};
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
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_DENSITY_MAP_LAYERED_PROPERTIES_VALVE:
            return {alignof(VkPhysicalDeviceFragmentDensityMapLayeredPropertiesVALVE),
                    sizeof(VkPhysicalDeviceFragmentDensityMapLayeredPropertiesVALVE)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_DENSITY_MAP_OFFSET_PROPERTIES_EXT:
            return {alignof(VkPhysicalDeviceFragmentDensityMapOffsetPropertiesEXT),
                    sizeof(VkPhysicalDeviceFragmentDensityMapOffsetPropertiesEXT)};
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
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MAINTENANCE_10_PROPERTIES_KHR:
            return {alignof(VkPhysicalDeviceMaintenance10PropertiesKHR), sizeof(VkPhysicalDeviceMaintenance10PropertiesKHR)};
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
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MAINTENANCE_9_PROPERTIES_KHR:
            return {alignof(VkPhysicalDeviceMaintenance9PropertiesKHR), sizeof(VkPhysicalDeviceMaintenance9PropertiesKHR)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MAP_MEMORY_PLACED_PROPERTIES_EXT:
            return {alignof(VkPhysicalDeviceMapMemoryPlacedPropertiesEXT), sizeof(VkPhysicalDeviceMapMemoryPlacedPropertiesEXT)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MEMORY_DECOMPRESSION_PROPERTIES_EXT:
            return {alignof(VkPhysicalDeviceMemoryDecompressionPropertiesEXT),
                    sizeof(VkPhysicalDeviceMemoryDecompressionPropertiesEXT)};
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
#ifdef VK_USE_PLATFORM_OHOS
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PRESENTATION_PROPERTIES_OHOS:
            return {alignof(VkPhysicalDevicePresentationPropertiesOHOS), sizeof(VkPhysicalDevicePresentationPropertiesOHOS)};
#endif  // VK_USE_PLATFORM_OHOS
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
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ROBUSTNESS_2_PROPERTIES_KHR:
            return {alignof(VkPhysicalDeviceRobustness2PropertiesKHR), sizeof(VkPhysicalDeviceRobustness2PropertiesKHR)};
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
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TENSOR_PROPERTIES_ARM:
            return {alignof(VkPhysicalDeviceTensorPropertiesARM), sizeof(VkPhysicalDeviceTensorPropertiesARM)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TEXEL_BUFFER_ALIGNMENT_PROPERTIES:
            return {alignof(VkPhysicalDeviceTexelBufferAlignmentProperties),
                    sizeof(VkPhysicalDeviceTexelBufferAlignmentProperties)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TILE_MEMORY_HEAP_PROPERTIES_QCOM:
            return {alignof(VkPhysicalDeviceTileMemoryHeapPropertiesQCOM), sizeof(VkPhysicalDeviceTileMemoryHeapPropertiesQCOM)};
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TILE_SHADING_PROPERTIES_QCOM:
            return {alignof(VkPhysicalDeviceTileShadingPropertiesQCOM), sizeof(VkPhysicalDeviceTileShadingPropertiesQCOM)};
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
        case VK_STRUCTURE_TYPE_TENSOR_FORMAT_PROPERTIES_ARM:
            return {alignof(VkTensorFormatPropertiesARM), sizeof(VkTensorFormatPropertiesARM)};

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
        case VK_STRUCTURE_TYPE_QUEUE_FAMILY_OWNERSHIP_TRANSFER_PROPERTIES_KHR:
            return {alignof(VkQueueFamilyOwnershipTransferPropertiesKHR), sizeof(VkQueueFamilyOwnershipTransferPropertiesKHR)};
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
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkSparseImageFormatProperties2>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPhysicalDeviceSparseImageFormatInfo2>(VkStructureType type) {
    switch (type) {
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
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkDescriptorUpdateTemplateEntry>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkDescriptorUpdateTemplateCreateInfo>(VkStructureType type) {
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
        case VK_STRUCTURE_TYPE_RENDER_PASS_TILE_SHADING_CREATE_INFO_QCOM:
            return {alignof(VkRenderPassTileShadingCreateInfoQCOM), sizeof(VkRenderPassTileShadingCreateInfoQCOM)};
        case VK_STRUCTURE_TYPE_TILE_MEMORY_SIZE_INFO_QCOM:
            return {alignof(VkTileMemorySizeInfoQCOM), sizeof(VkTileMemorySizeInfoQCOM)};

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
        case VK_STRUCTURE_TYPE_RENDER_PASS_FRAGMENT_DENSITY_MAP_OFFSET_END_INFO_EXT:
            return {alignof(VkRenderPassFragmentDensityMapOffsetEndInfoEXT),
                    sizeof(VkRenderPassFragmentDensityMapOffsetEndInfoEXT)};

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
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkDependencyInfo>(VkStructureType type) {
    switch (type) {
        case VK_STRUCTURE_TYPE_TENSOR_DEPENDENCY_INFO_ARM:
            return {alignof(VkTensorDependencyInfoARM), sizeof(VkTensorDependencyInfoARM)};
        case VK_STRUCTURE_TYPE_TENSOR_MEMORY_BARRIER_ARM:
            return {alignof(VkTensorMemoryBarrierARM), sizeof(VkTensorMemoryBarrierARM)};

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
        case VK_STRUCTURE_TYPE_FRAME_BOUNDARY_TENSORS_ARM:
            return {alignof(VkFrameBoundaryTensorsARM), sizeof(VkFrameBoundaryTensorsARM)};
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
        case VK_STRUCTURE_TYPE_COPY_COMMAND_TRANSFORM_INFO_QCOM:
            return {alignof(VkCopyCommandTransformInfoQCOM), sizeof(VkCopyCommandTransformInfoQCOM)};

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
        case VK_STRUCTURE_TYPE_RESOLVE_IMAGE_MODE_INFO_KHR:
            return {alignof(VkResolveImageModeInfoKHR), sizeof(VkResolveImageModeInfoKHR)};

        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkRenderingAttachmentInfo>(VkStructureType type) {
    switch (type) {
        case VK_STRUCTURE_TYPE_ATTACHMENT_FEEDBACK_LOOP_INFO_EXT:
            return {alignof(VkAttachmentFeedbackLoopInfoEXT), sizeof(VkAttachmentFeedbackLoopInfoEXT)};
        case VK_STRUCTURE_TYPE_RENDERING_ATTACHMENT_FLAGS_INFO_KHR:
            return {alignof(VkRenderingAttachmentFlagsInfoKHR), sizeof(VkRenderingAttachmentFlagsInfoKHR)};

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
        case VK_STRUCTURE_TYPE_RENDER_PASS_TILE_SHADING_CREATE_INFO_QCOM:
            return {alignof(VkRenderPassTileShadingCreateInfoQCOM), sizeof(VkRenderPassTileShadingCreateInfoQCOM)};
        case VK_STRUCTURE_TYPE_RENDERING_FRAGMENT_DENSITY_MAP_ATTACHMENT_INFO_EXT:
            return {alignof(VkRenderingFragmentDensityMapAttachmentInfoEXT),
                    sizeof(VkRenderingFragmentDensityMapAttachmentInfoEXT)};
        case VK_STRUCTURE_TYPE_RENDERING_FRAGMENT_SHADING_RATE_ATTACHMENT_INFO_KHR:
            return {alignof(VkRenderingFragmentShadingRateAttachmentInfoKHR),
                    sizeof(VkRenderingFragmentShadingRateAttachmentInfoKHR)};
        case VK_STRUCTURE_TYPE_TILE_MEMORY_SIZE_INFO_QCOM:
            return {alignof(VkTileMemorySizeInfoQCOM), sizeof(VkTileMemorySizeInfoQCOM)};

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
        case VK_STRUCTURE_TYPE_MEMORY_MAP_PLACED_INFO_EXT:
            return {alignof(VkMemoryMapPlacedInfoEXT), sizeof(VkMemoryMapPlacedInfoEXT)};

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
        case VK_STRUCTURE_TYPE_SWAPCHAIN_PRESENT_MODES_CREATE_INFO_KHR:
            return {alignof(VkSwapchainPresentModesCreateInfoKHR), sizeof(VkSwapchainPresentModesCreateInfoKHR)};
        case VK_STRUCTURE_TYPE_SWAPCHAIN_PRESENT_SCALING_CREATE_INFO_KHR:
            return {alignof(VkSwapchainPresentScalingCreateInfoKHR), sizeof(VkSwapchainPresentScalingCreateInfoKHR)};

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
        case VK_STRUCTURE_TYPE_FRAME_BOUNDARY_TENSORS_ARM:
            return {alignof(VkFrameBoundaryTensorsARM), sizeof(VkFrameBoundaryTensorsARM)};
#ifdef VK_USE_PLATFORM_GGP
        case VK_STRUCTURE_TYPE_PRESENT_FRAME_TOKEN_GGP:
            return {alignof(VkPresentFrameTokenGGP), sizeof(VkPresentFrameTokenGGP)};
#endif  // VK_USE_PLATFORM_GGP
        case VK_STRUCTURE_TYPE_PRESENT_ID_2_KHR:
            return {alignof(VkPresentId2KHR), sizeof(VkPresentId2KHR)};
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
        case VK_STRUCTURE_TYPE_SWAPCHAIN_PRESENT_FENCE_INFO_KHR:
            return {alignof(VkSwapchainPresentFenceInfoKHR), sizeof(VkSwapchainPresentFenceInfoKHR)};
        case VK_STRUCTURE_TYPE_SWAPCHAIN_PRESENT_MODE_INFO_KHR:
            return {alignof(VkSwapchainPresentModeInfoKHR), sizeof(VkSwapchainPresentModeInfoKHR)};

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
        case VK_STRUCTURE_TYPE_DISPLAY_SURFACE_STEREO_CREATE_INFO_NV:
            return {alignof(VkDisplaySurfaceStereoCreateInfoNV), sizeof(VkDisplaySurfaceStereoCreateInfoNV)};

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
#ifdef VK_USE_PLATFORM_XLIB_KHR

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkXlibSurfaceCreateInfoKHR>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}
#endif  // VK_USE_PLATFORM_XLIB_KHR
#ifdef VK_USE_PLATFORM_XCB_KHR

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkXcbSurfaceCreateInfoKHR>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}
#endif  // VK_USE_PLATFORM_XCB_KHR
#ifdef VK_USE_PLATFORM_WAYLAND_KHR

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkWaylandSurfaceCreateInfoKHR>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}
#endif  // VK_USE_PLATFORM_WAYLAND_KHR
#ifdef VK_USE_PLATFORM_ANDROID_KHR

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkAndroidSurfaceCreateInfoKHR>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}
#endif  // VK_USE_PLATFORM_ANDROID_KHR
#ifdef VK_USE_PLATFORM_WIN32_KHR

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkWin32SurfaceCreateInfoKHR>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}
#endif  // VK_USE_PLATFORM_WIN32_KHR

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkQueueFamilyQueryResultStatusPropertiesKHR>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkQueueFamilyVideoPropertiesKHR>(VkStructureType type) {
    switch (type) {
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
        case VK_STRUCTURE_TYPE_VIDEO_DECODE_VP9_PROFILE_INFO_KHR:
            return {alignof(VkVideoDecodeVP9ProfileInfoKHR), sizeof(VkVideoDecodeVP9ProfileInfoKHR)};
        case VK_STRUCTURE_TYPE_VIDEO_ENCODE_AV1_PROFILE_INFO_KHR:
            return {alignof(VkVideoEncodeAV1ProfileInfoKHR), sizeof(VkVideoEncodeAV1ProfileInfoKHR)};
        case VK_STRUCTURE_TYPE_VIDEO_ENCODE_H264_PROFILE_INFO_KHR:
            return {alignof(VkVideoEncodeH264ProfileInfoKHR), sizeof(VkVideoEncodeH264ProfileInfoKHR)};
        case VK_STRUCTURE_TYPE_VIDEO_ENCODE_H265_PROFILE_INFO_KHR:
            return {alignof(VkVideoEncodeH265ProfileInfoKHR), sizeof(VkVideoEncodeH265ProfileInfoKHR)};
        case VK_STRUCTURE_TYPE_VIDEO_ENCODE_PROFILE_RGB_CONVERSION_INFO_VALVE:
            return {alignof(VkVideoEncodeProfileRgbConversionInfoVALVE), sizeof(VkVideoEncodeProfileRgbConversionInfoVALVE)};
        case VK_STRUCTURE_TYPE_VIDEO_ENCODE_USAGE_INFO_KHR:
            return {alignof(VkVideoEncodeUsageInfoKHR), sizeof(VkVideoEncodeUsageInfoKHR)};

        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkVideoProfileListInfoKHR>(VkStructureType type) {
    switch (type) {
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
        case VK_STRUCTURE_TYPE_VIDEO_DECODE_VP9_CAPABILITIES_KHR:
            return {alignof(VkVideoDecodeVP9CapabilitiesKHR), sizeof(VkVideoDecodeVP9CapabilitiesKHR)};
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
        case VK_STRUCTURE_TYPE_VIDEO_ENCODE_INTRA_REFRESH_CAPABILITIES_KHR:
            return {alignof(VkVideoEncodeIntraRefreshCapabilitiesKHR), sizeof(VkVideoEncodeIntraRefreshCapabilitiesKHR)};
        case VK_STRUCTURE_TYPE_VIDEO_ENCODE_QUANTIZATION_MAP_CAPABILITIES_KHR:
            return {alignof(VkVideoEncodeQuantizationMapCapabilitiesKHR), sizeof(VkVideoEncodeQuantizationMapCapabilitiesKHR)};
        case VK_STRUCTURE_TYPE_VIDEO_ENCODE_RGB_CONVERSION_CAPABILITIES_VALVE:
            return {alignof(VkVideoEncodeRgbConversionCapabilitiesVALVE), sizeof(VkVideoEncodeRgbConversionCapabilitiesVALVE)};

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
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkVideoPictureResourceInfoKHR>(VkStructureType type) {
    switch (type) {
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
        case VK_STRUCTURE_TYPE_VIDEO_REFERENCE_INTRA_REFRESH_INFO_KHR:
            return {alignof(VkVideoReferenceIntraRefreshInfoKHR), sizeof(VkVideoReferenceIntraRefreshInfoKHR)};

        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkVideoSessionMemoryRequirementsKHR>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkBindVideoSessionMemoryInfoKHR>(VkStructureType type) {
    switch (type) {
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
        case VK_STRUCTURE_TYPE_VIDEO_ENCODE_SESSION_INTRA_REFRESH_CREATE_INFO_KHR:
            return {alignof(VkVideoEncodeSessionIntraRefreshCreateInfoKHR), sizeof(VkVideoEncodeSessionIntraRefreshCreateInfoKHR)};
        case VK_STRUCTURE_TYPE_VIDEO_ENCODE_SESSION_RGB_CONVERSION_CREATE_INFO_VALVE:
            return {alignof(VkVideoEncodeSessionRgbConversionCreateInfoVALVE),
                    sizeof(VkVideoEncodeSessionRgbConversionCreateInfoVALVE)};

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
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkVideoEndCodingInfoKHR>(VkStructureType type) {
    switch (type) {
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
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkVideoDecodeCapabilitiesKHR>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkVideoDecodeUsageInfoKHR>(VkStructureType type) {
    switch (type) {
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
        case VK_STRUCTURE_TYPE_VIDEO_DECODE_VP9_PICTURE_INFO_KHR:
            return {alignof(VkVideoDecodeVP9PictureInfoKHR), sizeof(VkVideoDecodeVP9PictureInfoKHR)};
        case VK_STRUCTURE_TYPE_VIDEO_INLINE_QUERY_INFO_KHR:
            return {alignof(VkVideoInlineQueryInfoKHR), sizeof(VkVideoInlineQueryInfoKHR)};

        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkVideoEncodeH264CapabilitiesKHR>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkVideoEncodeH264QpKHR>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkVideoEncodeH264QualityLevelPropertiesKHR>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkVideoEncodeH264SessionCreateInfoKHR>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkVideoEncodeH264SessionParametersAddInfoKHR>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkVideoEncodeH264SessionParametersCreateInfoKHR>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkVideoEncodeH264SessionParametersGetInfoKHR>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkVideoEncodeH264SessionParametersFeedbackInfoKHR>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkVideoEncodeH264NaluSliceInfoKHR>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkVideoEncodeH264PictureInfoKHR>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkVideoEncodeH264DpbSlotInfoKHR>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkVideoEncodeH264ProfileInfoKHR>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkVideoEncodeH264RateControlInfoKHR>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkVideoEncodeH264FrameSizeKHR>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkVideoEncodeH264RateControlLayerInfoKHR>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkVideoEncodeH264GopRemainingFrameInfoKHR>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkVideoEncodeH265CapabilitiesKHR>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkVideoEncodeH265SessionCreateInfoKHR>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkVideoEncodeH265QpKHR>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkVideoEncodeH265QualityLevelPropertiesKHR>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkVideoEncodeH265SessionParametersAddInfoKHR>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkVideoEncodeH265SessionParametersCreateInfoKHR>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkVideoEncodeH265SessionParametersGetInfoKHR>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkVideoEncodeH265SessionParametersFeedbackInfoKHR>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkVideoEncodeH265NaluSliceSegmentInfoKHR>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkVideoEncodeH265PictureInfoKHR>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkVideoEncodeH265DpbSlotInfoKHR>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkVideoEncodeH265ProfileInfoKHR>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkVideoEncodeH265RateControlInfoKHR>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkVideoEncodeH265FrameSizeKHR>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkVideoEncodeH265RateControlLayerInfoKHR>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkVideoEncodeH265GopRemainingFrameInfoKHR>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkVideoDecodeH264ProfileInfoKHR>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkVideoDecodeH264CapabilitiesKHR>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkVideoDecodeH264SessionParametersAddInfoKHR>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkVideoDecodeH264SessionParametersCreateInfoKHR>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkVideoDecodeH264PictureInfoKHR>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkVideoDecodeH264DpbSlotInfoKHR>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}
#ifdef VK_USE_PLATFORM_WIN32_KHR

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkImportMemoryWin32HandleInfoKHR>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkExportMemoryWin32HandleInfoKHR>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkMemoryWin32HandlePropertiesKHR>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkMemoryGetWin32HandleInfoKHR>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}
#endif  // VK_USE_PLATFORM_WIN32_KHR

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
#ifdef VK_USE_PLATFORM_WIN32_KHR

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkWin32KeyedMutexAcquireReleaseInfoKHR>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkImportSemaphoreWin32HandleInfoKHR>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkExportSemaphoreWin32HandleInfoKHR>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkD3D12FenceSubmitInfoKHR>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkSemaphoreGetWin32HandleInfoKHR>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}
#endif  // VK_USE_PLATFORM_WIN32_KHR

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
#ifdef VK_USE_PLATFORM_WIN32_KHR

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkImportFenceWin32HandleInfoKHR>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkExportFenceWin32HandleInfoKHR>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkFenceGetWin32HandleInfoKHR>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}
#endif  // VK_USE_PLATFORM_WIN32_KHR

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
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPhysicalDeviceSurfaceInfo2KHR>(VkStructureType type) {
    switch (type) {
#ifdef VK_USE_PLATFORM_WIN32_KHR
        case VK_STRUCTURE_TYPE_SURFACE_FULL_SCREEN_EXCLUSIVE_INFO_EXT:
            return {alignof(VkSurfaceFullScreenExclusiveInfoEXT), sizeof(VkSurfaceFullScreenExclusiveInfoEXT)};
        case VK_STRUCTURE_TYPE_SURFACE_FULL_SCREEN_EXCLUSIVE_WIN32_INFO_EXT:
            return {alignof(VkSurfaceFullScreenExclusiveWin32InfoEXT), sizeof(VkSurfaceFullScreenExclusiveWin32InfoEXT)};
#endif  // VK_USE_PLATFORM_WIN32_KHR
        case VK_STRUCTURE_TYPE_SURFACE_PRESENT_MODE_KHR:
            return {alignof(VkSurfacePresentModeKHR), sizeof(VkSurfacePresentModeKHR)};

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
        case VK_STRUCTURE_TYPE_SURFACE_CAPABILITIES_PRESENT_ID_2_KHR:
            return {alignof(VkSurfaceCapabilitiesPresentId2KHR), sizeof(VkSurfaceCapabilitiesPresentId2KHR)};
        case VK_STRUCTURE_TYPE_SURFACE_CAPABILITIES_PRESENT_WAIT_2_KHR:
            return {alignof(VkSurfaceCapabilitiesPresentWait2KHR), sizeof(VkSurfaceCapabilitiesPresentWait2KHR)};
        case VK_STRUCTURE_TYPE_SURFACE_PRESENT_MODE_COMPATIBILITY_KHR:
            return {alignof(VkSurfacePresentModeCompatibilityKHR), sizeof(VkSurfacePresentModeCompatibilityKHR)};
        case VK_STRUCTURE_TYPE_SURFACE_PRESENT_SCALING_CAPABILITIES_KHR:
            return {alignof(VkSurfacePresentScalingCapabilitiesKHR), sizeof(VkSurfacePresentScalingCapabilitiesKHR)};
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
        case VK_STRUCTURE_TYPE_DISPLAY_MODE_STEREO_PROPERTIES_NV:
            return {alignof(VkDisplayModeStereoPropertiesNV), sizeof(VkDisplayModeStereoPropertiesNV)};

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
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPhysicalDeviceShaderBfloat16FeaturesKHR>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}
#ifdef VK_ENABLE_BETA_EXTENSIONS

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPhysicalDevicePortabilitySubsetFeaturesKHR>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPhysicalDevicePortabilitySubsetPropertiesKHR>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}
#endif  // VK_ENABLE_BETA_EXTENSIONS

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPhysicalDeviceShaderClockFeaturesKHR>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkVideoDecodeH265ProfileInfoKHR>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkVideoDecodeH265CapabilitiesKHR>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkVideoDecodeH265SessionParametersAddInfoKHR>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkVideoDecodeH265SessionParametersCreateInfoKHR>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkVideoDecodeH265PictureInfoKHR>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkVideoDecodeH265DpbSlotInfoKHR>(VkStructureType type) {
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
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkRenderingFragmentShadingRateAttachmentInfoKHR>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPhysicalDeviceShaderQuadControlFeaturesKHR>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkSurfaceProtectedCapabilitiesKHR>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPhysicalDevicePresentWaitFeaturesKHR>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPhysicalDevicePipelineExecutablePropertiesFeaturesKHR>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPipelineInfoKHR>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPipelineExecutablePropertiesKHR>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPipelineExecutableInfoKHR>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPipelineExecutableStatisticValueKHR>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPipelineExecutableStatisticKHR>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPipelineExecutableInternalRepresentationKHR>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPipelineLibraryCreateInfoKHR>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPresentIdKHR>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPhysicalDevicePresentIdFeaturesKHR>(VkStructureType type) {
    switch (type) {
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
        case VK_STRUCTURE_TYPE_VIDEO_ENCODE_INTRA_REFRESH_INFO_KHR:
            return {alignof(VkVideoEncodeIntraRefreshInfoKHR), sizeof(VkVideoEncodeIntraRefreshInfoKHR)};
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
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkVideoEncodeCapabilitiesKHR>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkQueryPoolVideoEncodeFeedbackCreateInfoKHR>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkVideoEncodeUsageInfoKHR>(VkStructureType type) {
    switch (type) {
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
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkVideoEncodeRateControlInfoKHR>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPhysicalDeviceVideoEncodeQualityLevelInfoKHR>(
    VkStructureType type) {
    switch (type) {
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
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkVideoEncodeQualityLevelInfoKHR>(VkStructureType type) {
    switch (type) {
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
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPhysicalDeviceFragmentShaderBarycentricFeaturesKHR>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPhysicalDeviceFragmentShaderBarycentricPropertiesKHR>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPhysicalDeviceShaderSubgroupUniformControlFlowFeaturesKHR>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPhysicalDeviceWorkgroupMemoryExplicitLayoutFeaturesKHR>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPhysicalDeviceRayTracingMaintenance1FeaturesKHR>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkTraceRaysIndirectCommand2KHR>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPhysicalDeviceShaderUntypedPointersFeaturesKHR>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPhysicalDeviceShaderMaximalReconvergenceFeaturesKHR>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkSurfaceCapabilitiesPresentId2KHR>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPresentId2KHR>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPhysicalDevicePresentId2FeaturesKHR>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkSurfaceCapabilitiesPresentWait2KHR>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPhysicalDevicePresentWait2FeaturesKHR>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPresentWait2InfoKHR>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPhysicalDeviceRayTracingPositionFetchFeaturesKHR>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPhysicalDevicePipelineBinaryFeaturesKHR>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPhysicalDevicePipelineBinaryPropertiesKHR>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkDevicePipelineBinaryInternalCacheControlKHR>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPipelineBinaryKeyKHR>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPipelineBinaryDataKHR>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPipelineBinaryKeysAndDataKHR>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPipelineCreateInfoKHR>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPipelineBinaryCreateInfoKHR>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPipelineBinaryInfoKHR>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkReleaseCapturedPipelineDataInfoKHR>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPipelineBinaryDataInfoKHR>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPipelineBinaryHandlesInfoKHR>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkSurfacePresentModeKHR>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkSurfacePresentScalingCapabilitiesKHR>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkSurfacePresentModeCompatibilityKHR>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPhysicalDeviceSwapchainMaintenance1FeaturesKHR>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkSwapchainPresentFenceInfoKHR>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkSwapchainPresentModesCreateInfoKHR>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkSwapchainPresentModeInfoKHR>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkSwapchainPresentScalingCreateInfoKHR>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkReleaseSwapchainImagesInfoKHR>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkCooperativeMatrixPropertiesKHR>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPhysicalDeviceCooperativeMatrixFeaturesKHR>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPhysicalDeviceCooperativeMatrixPropertiesKHR>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPhysicalDeviceComputeShaderDerivativesFeaturesKHR>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPhysicalDeviceComputeShaderDerivativesPropertiesKHR>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkVideoDecodeAV1ProfileInfoKHR>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkVideoDecodeAV1CapabilitiesKHR>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkVideoDecodeAV1SessionParametersCreateInfoKHR>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkVideoDecodeAV1PictureInfoKHR>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkVideoDecodeAV1DpbSlotInfoKHR>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPhysicalDeviceVideoEncodeAV1FeaturesKHR>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkVideoEncodeAV1CapabilitiesKHR>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkVideoEncodeAV1QIndexKHR>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkVideoEncodeAV1QualityLevelPropertiesKHR>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkVideoEncodeAV1SessionCreateInfoKHR>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkVideoEncodeAV1SessionParametersCreateInfoKHR>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkVideoEncodeAV1PictureInfoKHR>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkVideoEncodeAV1DpbSlotInfoKHR>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkVideoEncodeAV1ProfileInfoKHR>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkVideoEncodeAV1FrameSizeKHR>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkVideoEncodeAV1GopRemainingFrameInfoKHR>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkVideoEncodeAV1RateControlInfoKHR>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkVideoEncodeAV1RateControlLayerInfoKHR>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPhysicalDeviceVideoDecodeVP9FeaturesKHR>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkVideoDecodeVP9ProfileInfoKHR>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkVideoDecodeVP9CapabilitiesKHR>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkVideoDecodeVP9PictureInfoKHR>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPhysicalDeviceVideoMaintenance1FeaturesKHR>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkVideoInlineQueryInfoKHR>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPhysicalDeviceUnifiedImageLayoutsFeaturesKHR>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkAttachmentFeedbackLoopInfoEXT>(VkStructureType type) {
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
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkStridedDeviceAddressRangeKHR>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkCopyMemoryIndirectCommandKHR>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkCopyMemoryIndirectInfoKHR>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkCopyMemoryToImageIndirectCommandKHR>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkCopyMemoryToImageIndirectInfoKHR>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPhysicalDeviceCopyMemoryIndirectFeaturesKHR>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPhysicalDeviceCopyMemoryIndirectPropertiesKHR>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkVideoEncodeIntraRefreshCapabilitiesKHR>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkVideoEncodeSessionIntraRefreshCreateInfoKHR>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkVideoEncodeIntraRefreshInfoKHR>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkVideoReferenceIntraRefreshInfoKHR>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPhysicalDeviceVideoEncodeIntraRefreshFeaturesKHR>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkVideoEncodeQuantizationMapCapabilitiesKHR>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkVideoFormatQuantizationMapPropertiesKHR>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkVideoEncodeQuantizationMapInfoKHR>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkVideoEncodeQuantizationMapSessionParametersCreateInfoKHR>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPhysicalDeviceVideoEncodeQuantizationMapFeaturesKHR>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkVideoEncodeH264QuantizationMapCapabilitiesKHR>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkVideoEncodeH265QuantizationMapCapabilitiesKHR>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkVideoFormatH265QuantizationMapPropertiesKHR>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkVideoEncodeAV1QuantizationMapCapabilitiesKHR>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkVideoFormatAV1QuantizationMapPropertiesKHR>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPhysicalDeviceShaderRelaxedExtendedInstructionFeaturesKHR>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPhysicalDeviceMaintenance7FeaturesKHR>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPhysicalDeviceMaintenance7PropertiesKHR>(
    VkStructureType type) {
    switch (type) {
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
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPhysicalDeviceLayeredApiPropertiesListKHR>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPhysicalDeviceLayeredApiVulkanPropertiesKHR>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkMemoryBarrierAccessFlags3KHR>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPhysicalDeviceMaintenance8FeaturesKHR>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPhysicalDeviceShaderFmaFeaturesKHR>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPhysicalDeviceMaintenance9FeaturesKHR>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPhysicalDeviceMaintenance9PropertiesKHR>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkQueueFamilyOwnershipTransferPropertiesKHR>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPhysicalDeviceVideoMaintenance2FeaturesKHR>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkVideoDecodeH264InlineSessionParametersInfoKHR>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkVideoDecodeH265InlineSessionParametersInfoKHR>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkVideoDecodeAV1InlineSessionParametersInfoKHR>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPhysicalDeviceDepthClampZeroOneFeaturesKHR>(
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
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPhysicalDevicePresentModeFifoLatestReadyFeaturesKHR>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPhysicalDeviceMaintenance10FeaturesKHR>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPhysicalDeviceMaintenance10PropertiesKHR>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkRenderingEndInfoKHR>(VkStructureType type) {
    switch (type) {
        case VK_STRUCTURE_TYPE_RENDER_PASS_FRAGMENT_DENSITY_MAP_OFFSET_END_INFO_EXT:
            return {alignof(VkRenderPassFragmentDensityMapOffsetEndInfoEXT),
                    sizeof(VkRenderPassFragmentDensityMapOffsetEndInfoEXT)};

        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkRenderingAttachmentFlagsInfoKHR>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkResolveImageModeInfoKHR>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkDebugReportCallbackCreateInfoEXT>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPipelineRasterizationStateRasterizationOrderAMD>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkDebugMarkerObjectNameInfoEXT>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkDebugMarkerObjectTagInfoEXT>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkDebugMarkerMarkerInfoEXT>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkDedicatedAllocationImageCreateInfoNV>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkDedicatedAllocationBufferCreateInfoNV>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkDedicatedAllocationMemoryAllocateInfoNV>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPhysicalDeviceTransformFeedbackFeaturesEXT>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPhysicalDeviceTransformFeedbackPropertiesEXT>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPipelineRasterizationStateStreamCreateInfoEXT>(
    VkStructureType type) {
    switch (type) {
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
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkCuModuleTexturingModeCreateInfoNVX>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkCuFunctionCreateInfoNVX>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkCuLaunchInfoNVX>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkImageViewHandleInfoNVX>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkImageViewAddressPropertiesNVX>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkTextureLODGatherFormatPropertiesAMD>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkShaderResourceUsageAMD>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkShaderStatisticsInfoAMD>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}
#ifdef VK_USE_PLATFORM_GGP

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkStreamDescriptorSurfaceCreateInfoGGP>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}
#endif  // VK_USE_PLATFORM_GGP

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPhysicalDeviceCornerSampledImageFeaturesNV>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkExternalImageFormatPropertiesNV>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkExternalMemoryImageCreateInfoNV>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkExportMemoryAllocateInfoNV>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}
#ifdef VK_USE_PLATFORM_WIN32_KHR

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkImportMemoryWin32HandleInfoNV>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkExportMemoryWin32HandleInfoNV>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkWin32KeyedMutexAcquireReleaseInfoNV>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}
#endif  // VK_USE_PLATFORM_WIN32_KHR

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkValidationFlagsEXT>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}
#ifdef VK_USE_PLATFORM_VI_NN

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkViSurfaceCreateInfoNN>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}
#endif  // VK_USE_PLATFORM_VI_NN

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
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkConditionalRenderingBeginInfoEXT>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPhysicalDeviceConditionalRenderingFeaturesEXT>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkCommandBufferInheritanceConditionalRenderingInfoEXT>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkViewportWScalingNV>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPipelineViewportWScalingStateCreateInfoNV>(
    VkStructureType type) {
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
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkRefreshCycleDurationGOOGLE>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPastPresentationTimingGOOGLE>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPresentTimeGOOGLE>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPresentTimesInfoGOOGLE>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPhysicalDeviceMultiviewPerViewAttributesPropertiesNVX>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkMultiviewPerViewAttributesInfoNVX>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkViewportSwizzleNV>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPipelineViewportSwizzleStateCreateInfoNV>(
    VkStructureType type) {
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
        case VK_STRUCTURE_TYPE_HDR_VIVID_DYNAMIC_METADATA_HUAWEI:
            return {alignof(VkHdrVividDynamicMetadataHUAWEI), sizeof(VkHdrVividDynamicMetadataHUAWEI)};

        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPhysicalDeviceRelaxedLineRasterizationFeaturesIMG>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}
#ifdef VK_USE_PLATFORM_IOS_MVK

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkIOSSurfaceCreateInfoMVK>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}
#endif  // VK_USE_PLATFORM_IOS_MVK
#ifdef VK_USE_PLATFORM_MACOS_MVK

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkMacOSSurfaceCreateInfoMVK>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}
#endif  // VK_USE_PLATFORM_MACOS_MVK

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
        case VK_STRUCTURE_TYPE_DEVICE_ADDRESS_BINDING_CALLBACK_DATA_EXT:
            return {alignof(VkDeviceAddressBindingCallbackDataEXT), sizeof(VkDeviceAddressBindingCallbackDataEXT)};

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
#ifdef VK_USE_PLATFORM_ANDROID_KHR

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkAndroidHardwareBufferUsageANDROID>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

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

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkAndroidHardwareBufferFormatPropertiesANDROID>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkImportAndroidHardwareBufferInfoANDROID>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkMemoryGetAndroidHardwareBufferInfoANDROID>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkExternalFormatANDROID>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkAndroidHardwareBufferFormatProperties2ANDROID>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}
#endif  // VK_USE_PLATFORM_ANDROID_KHR
#ifdef VK_ENABLE_BETA_EXTENSIONS

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPhysicalDeviceShaderEnqueueFeaturesAMDX>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPhysicalDeviceShaderEnqueuePropertiesAMDX>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkExecutionGraphPipelineScratchSizeAMDX>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

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

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkDeviceOrHostAddressConstAMDX>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkDispatchGraphInfoAMDX>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkDispatchGraphCountInfoAMDX>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPipelineShaderStageNodeCreateInfoAMDX>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}
#endif  // VK_ENABLE_BETA_EXTENSIONS

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkAttachmentSampleCountInfoAMD>(VkStructureType type) {
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
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPipelineCoverageToColorStateCreateInfoNV>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPipelineCoverageModulationStateCreateInfoNV>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPhysicalDeviceShaderSMBuiltinsPropertiesNV>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPhysicalDeviceShaderSMBuiltinsFeaturesNV>(
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
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkValidationCacheCreateInfoEXT>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkShaderModuleValidationCacheCreateInfoEXT>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkShadingRatePaletteNV>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPipelineViewportShadingRateImageStateCreateInfoNV>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPhysicalDeviceShadingRateImageFeaturesNV>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPhysicalDeviceShadingRateImagePropertiesNV>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkCoarseSampleLocationNV>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkCoarseSampleOrderCustomNV>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPipelineViewportCoarseSampleOrderStateCreateInfoNV>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkRayTracingShaderGroupCreateInfoNV>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

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
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkGeometryTrianglesNV>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkGeometryAABBNV>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkGeometryDataNV>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkGeometryNV>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkAccelerationStructureInfoNV>(VkStructureType type) {
    switch (type) {
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
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkBindAccelerationStructureMemoryInfoNV>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkWriteDescriptorSetAccelerationStructureNV>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkAccelerationStructureMemoryRequirementsInfoNV>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPhysicalDeviceRayTracingPropertiesNV>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkTransformMatrixKHR>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkAabbPositionsKHR>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkAccelerationStructureInstanceKHR>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPhysicalDeviceRepresentativeFragmentTestFeaturesNV>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPipelineRepresentativeFragmentTestStateCreateInfoNV>(
    VkStructureType type) {
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
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPipelineCompilerControlCreateInfoAMD>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPhysicalDeviceShaderCorePropertiesAMD>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkDeviceMemoryOverallocationCreateInfoAMD>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPhysicalDeviceVertexAttributeDivisorPropertiesEXT>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}
#ifdef VK_USE_PLATFORM_GGP

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPresentFrameTokenGGP>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}
#endif  // VK_USE_PLATFORM_GGP

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPhysicalDeviceMeshShaderFeaturesNV>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPhysicalDeviceMeshShaderPropertiesNV>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkDrawMeshTasksIndirectCommandNV>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPhysicalDeviceShaderImageFootprintFeaturesNV>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPipelineViewportExclusiveScissorStateCreateInfoNV>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPhysicalDeviceExclusiveScissorFeaturesNV>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkQueueFamilyCheckpointPropertiesNV>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkCheckpointDataNV>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkQueueFamilyCheckpointProperties2NV>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkCheckpointData2NV>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPhysicalDeviceShaderIntegerFunctions2FeaturesINTEL>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPerformanceValueDataINTEL>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPerformanceValueINTEL>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkInitializePerformanceApiInfoINTEL>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkQueryPoolPerformanceQueryCreateInfoINTEL>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPerformanceMarkerInfoINTEL>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPerformanceStreamMarkerInfoINTEL>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPerformanceOverrideInfoINTEL>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPerformanceConfigurationAcquireInfoINTEL>(
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
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkDisplayNativeHdrSurfaceCapabilitiesAMD>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkSwapchainDisplayNativeHdrCreateInfoAMD>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}
#ifdef VK_USE_PLATFORM_FUCHSIA

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkImagePipeSurfaceCreateInfoFUCHSIA>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}
#endif  // VK_USE_PLATFORM_FUCHSIA
#ifdef VK_USE_PLATFORM_METAL_EXT

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkMetalSurfaceCreateInfoEXT>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}
#endif  // VK_USE_PLATFORM_METAL_EXT

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPhysicalDeviceFragmentDensityMapFeaturesEXT>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPhysicalDeviceFragmentDensityMapPropertiesEXT>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkRenderPassFragmentDensityMapCreateInfoEXT>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkRenderingFragmentDensityMapAttachmentInfoEXT>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPhysicalDeviceShaderCoreProperties2AMD>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPhysicalDeviceCoherentMemoryFeaturesAMD>(
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
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPhysicalDeviceMemoryPriorityFeaturesEXT>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkMemoryPriorityAllocateInfoEXT>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPhysicalDeviceDedicatedAllocationImageAliasingFeaturesNV>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPhysicalDeviceBufferDeviceAddressFeaturesEXT>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkBufferDeviceAddressCreateInfoEXT>(VkStructureType type) {
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
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkCooperativeMatrixPropertiesNV>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPhysicalDeviceCooperativeMatrixFeaturesNV>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPhysicalDeviceCooperativeMatrixPropertiesNV>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPhysicalDeviceCoverageReductionModeFeaturesNV>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPipelineCoverageReductionStateCreateInfoNV>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkFramebufferMixedSamplesCombinationNV>(VkStructureType type) {
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
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPhysicalDeviceProvokingVertexFeaturesEXT>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPhysicalDeviceProvokingVertexPropertiesEXT>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPipelineRasterizationProvokingVertexStateCreateInfoEXT>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}
#ifdef VK_USE_PLATFORM_WIN32_KHR

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkSurfaceFullScreenExclusiveInfoEXT>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkSurfaceCapabilitiesFullScreenExclusiveEXT>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkSurfaceFullScreenExclusiveWin32InfoEXT>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}
#endif  // VK_USE_PLATFORM_WIN32_KHR

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
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPhysicalDeviceMapMemoryPlacedFeaturesEXT>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPhysicalDeviceMapMemoryPlacedPropertiesEXT>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkMemoryMapPlacedInfoEXT>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPhysicalDeviceShaderAtomicFloat2FeaturesEXT>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPhysicalDeviceDeviceGeneratedCommandsPropertiesNV>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPhysicalDeviceDeviceGeneratedCommandsFeaturesNV>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkGraphicsShaderGroupCreateInfoNV>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkGraphicsPipelineShaderGroupsCreateInfoNV>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkBindShaderGroupIndirectCommandNV>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkBindIndexBufferIndirectCommandNV>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkBindVertexBufferIndirectCommandNV>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkSetStateFlagsIndirectCommandNV>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkIndirectCommandsStreamNV>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkIndirectCommandsLayoutTokenNV>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkIndirectCommandsLayoutCreateInfoNV>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkGeneratedCommandsInfoNV>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkGeneratedCommandsMemoryRequirementsInfoNV>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPhysicalDeviceInheritedViewportScissorFeaturesNV>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkCommandBufferInheritanceViewportScissorInfoNV>(
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
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkRenderPassTransformBeginInfoQCOM>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkCommandBufferInheritanceRenderPassTransformInfoQCOM>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPhysicalDeviceDepthBiasControlFeaturesEXT>(
    VkStructureType type) {
    switch (type) {
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

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkDepthBiasRepresentationInfoEXT>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPhysicalDeviceDeviceMemoryReportFeaturesEXT>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkDeviceMemoryReportCallbackDataEXT>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkDeviceDeviceMemoryReportCreateInfoEXT>(
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
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPhysicalDevicePresentBarrierFeaturesNV>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkSurfaceCapabilitiesPresentBarrierNV>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkSwapchainPresentBarrierCreateInfoNV>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPhysicalDeviceDiagnosticsConfigFeaturesNV>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkDeviceDiagnosticsConfigCreateInfoNV>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}
#ifdef VK_ENABLE_BETA_EXTENSIONS

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkCudaModuleCreateInfoNV>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkCudaFunctionCreateInfoNV>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkCudaLaunchInfoNV>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPhysicalDeviceCudaKernelLaunchFeaturesNV>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPhysicalDeviceCudaKernelLaunchPropertiesNV>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}
#endif  // VK_ENABLE_BETA_EXTENSIONS

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPhysicalDeviceTileShadingFeaturesQCOM>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPhysicalDeviceTileShadingPropertiesQCOM>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkRenderPassTileShadingCreateInfoQCOM>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPerTileBeginInfoQCOM>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPerTileEndInfoQCOM>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkDispatchTileInfoQCOM>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkQueryLowLatencySupportNV>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}
#ifdef VK_USE_PLATFORM_METAL_EXT

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkExportMetalObjectCreateInfoEXT>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

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

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkExportMetalDeviceInfoEXT>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkExportMetalCommandQueueInfoEXT>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkExportMetalBufferInfoEXT>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkImportMetalBufferInfoEXT>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkExportMetalTextureInfoEXT>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkImportMetalTextureInfoEXT>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkExportMetalIOSurfaceInfoEXT>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkImportMetalIOSurfaceInfoEXT>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkExportMetalSharedEventInfoEXT>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkImportMetalSharedEventInfoEXT>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}
#endif  // VK_USE_PLATFORM_METAL_EXT

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPhysicalDeviceDescriptorBufferPropertiesEXT>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPhysicalDeviceDescriptorBufferDensityMapPropertiesEXT>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPhysicalDeviceDescriptorBufferFeaturesEXT>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkDescriptorAddressInfoEXT>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

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
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkDescriptorBufferBindingPushDescriptorBufferHandleEXT>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkDescriptorDataEXT>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkDescriptorGetInfoEXT>(VkStructureType type) {
    switch (type) {
        case VK_STRUCTURE_TYPE_DESCRIPTOR_GET_TENSOR_INFO_ARM:
            return {alignof(VkDescriptorGetTensorInfoARM), sizeof(VkDescriptorGetTensorInfoARM)};

        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkBufferCaptureDescriptorDataInfoEXT>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkImageCaptureDescriptorDataInfoEXT>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkImageViewCaptureDescriptorDataInfoEXT>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkSamplerCaptureDescriptorDataInfoEXT>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkOpaqueCaptureDescriptorDataCreateInfoEXT>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkAccelerationStructureCaptureDescriptorDataInfoEXT>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPhysicalDeviceGraphicsPipelineLibraryFeaturesEXT>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPhysicalDeviceGraphicsPipelineLibraryPropertiesEXT>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkGraphicsPipelineLibraryCreateInfoEXT>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPhysicalDeviceShaderEarlyAndLateFragmentTestsFeaturesAMD>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPhysicalDeviceFragmentShadingRateEnumsFeaturesNV>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPhysicalDeviceFragmentShadingRateEnumsPropertiesNV>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPipelineFragmentShadingRateEnumStateCreateInfoNV>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkDeviceOrHostAddressConstKHR>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkAccelerationStructureGeometryMotionTrianglesDataNV>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkAccelerationStructureMotionInfoNV>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkAccelerationStructureMatrixMotionInstanceNV>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkSRTDataNV>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkAccelerationStructureSRTMotionInstanceNV>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkAccelerationStructureMotionInstanceDataNV>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkAccelerationStructureMotionInstanceNV>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPhysicalDeviceRayTracingMotionBlurFeaturesNV>(
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
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPhysicalDeviceFragmentDensityMap2FeaturesEXT>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPhysicalDeviceFragmentDensityMap2PropertiesEXT>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkCopyCommandTransformInfoQCOM>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPhysicalDeviceImageCompressionControlFeaturesEXT>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkImageCompressionControlEXT>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkImageCompressionPropertiesEXT>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPhysicalDeviceAttachmentFeedbackLoopLayoutFeaturesEXT>(
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
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPhysicalDeviceFaultFeaturesEXT>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkDeviceFaultCountsEXT>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkDeviceFaultAddressInfoEXT>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkDeviceFaultVendorInfoEXT>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkDeviceFaultInfoEXT>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkDeviceFaultVendorBinaryHeaderVersionOneEXT>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPhysicalDeviceRasterizationOrderAttachmentAccessFeaturesEXT>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPhysicalDeviceRGBA10X6FormatsFeaturesEXT>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}
#ifdef VK_USE_PLATFORM_DIRECTFB_EXT

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkDirectFBSurfaceCreateInfoEXT>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}
#endif  // VK_USE_PLATFORM_DIRECTFB_EXT

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPhysicalDeviceMutableDescriptorTypeFeaturesEXT>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkMutableDescriptorTypeListEXT>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkMutableDescriptorTypeCreateInfoEXT>(VkStructureType type) {
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

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPhysicalDeviceDrmPropertiesEXT>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPhysicalDeviceAddressBindingReportFeaturesEXT>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkDeviceAddressBindingCallbackDataEXT>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPhysicalDeviceDepthClipControlFeaturesEXT>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPipelineViewportDepthClipControlCreateInfoEXT>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPhysicalDevicePrimitiveTopologyListRestartFeaturesEXT>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}
#ifdef VK_USE_PLATFORM_FUCHSIA

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkImportMemoryZirconHandleInfoFUCHSIA>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkMemoryZirconHandlePropertiesFUCHSIA>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkMemoryGetZirconHandleInfoFUCHSIA>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkImportSemaphoreZirconHandleInfoFUCHSIA>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkSemaphoreGetZirconHandleInfoFUCHSIA>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkBufferCollectionCreateInfoFUCHSIA>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkImportMemoryBufferCollectionFUCHSIA>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkBufferCollectionImageCreateInfoFUCHSIA>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkBufferCollectionConstraintsInfoFUCHSIA>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkBufferConstraintsInfoFUCHSIA>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkBufferCollectionBufferCreateInfoFUCHSIA>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkSysmemColorSpaceFUCHSIA>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkBufferCollectionPropertiesFUCHSIA>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkImageFormatConstraintsInfoFUCHSIA>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkImageConstraintsInfoFUCHSIA>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}
#endif  // VK_USE_PLATFORM_FUCHSIA

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkSubpassShadingPipelineCreateInfoHUAWEI>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPhysicalDeviceSubpassShadingFeaturesHUAWEI>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPhysicalDeviceSubpassShadingPropertiesHUAWEI>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPhysicalDeviceInvocationMaskFeaturesHUAWEI>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkMemoryGetRemoteAddressInfoNV>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPhysicalDeviceExternalMemoryRDMAFeaturesNV>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPipelinePropertiesIdentifierEXT>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPhysicalDevicePipelinePropertiesFeaturesEXT>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPhysicalDeviceFrameBoundaryFeaturesEXT>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkFrameBoundaryEXT>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPhysicalDeviceMultisampledRenderToSingleSampledFeaturesEXT>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkSubpassResolvePerformanceQueryEXT>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkMultisampledRenderToSingleSampledInfoEXT>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPhysicalDeviceExtendedDynamicState2FeaturesEXT>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}
#ifdef VK_USE_PLATFORM_SCREEN_QNX

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkScreenSurfaceCreateInfoQNX>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}
#endif  // VK_USE_PLATFORM_SCREEN_QNX

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
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPhysicalDevicePrimitivesGeneratedQueryFeaturesEXT>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPhysicalDeviceVideoEncodeRgbConversionFeaturesVALVE>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkVideoEncodeRgbConversionCapabilitiesVALVE>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkVideoEncodeProfileRgbConversionInfoVALVE>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkVideoEncodeSessionRgbConversionCreateInfoVALVE>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPhysicalDeviceImageViewMinLodFeaturesEXT>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkImageViewMinLodCreateInfoEXT>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPhysicalDeviceMultiDrawFeaturesEXT>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPhysicalDeviceMultiDrawPropertiesEXT>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkMultiDrawInfoEXT>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkMultiDrawIndexedInfoEXT>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPhysicalDeviceImage2DViewOf3DFeaturesEXT>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPhysicalDeviceShaderTileImageFeaturesEXT>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPhysicalDeviceShaderTileImagePropertiesEXT>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkMicromapUsageEXT>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkDeviceOrHostAddressKHR>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkMicromapBuildInfoEXT>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkMicromapCreateInfoEXT>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPhysicalDeviceOpacityMicromapFeaturesEXT>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPhysicalDeviceOpacityMicromapPropertiesEXT>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkMicromapVersionInfoEXT>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkCopyMicromapToMemoryInfoEXT>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkCopyMemoryToMicromapInfoEXT>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkCopyMicromapInfoEXT>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkMicromapBuildSizesInfoEXT>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkAccelerationStructureTrianglesOpacityMicromapEXT>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkMicromapTriangleEXT>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}
#ifdef VK_ENABLE_BETA_EXTENSIONS

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPhysicalDeviceDisplacementMicromapFeaturesNV>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPhysicalDeviceDisplacementMicromapPropertiesNV>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkAccelerationStructureTrianglesDisplacementMicromapNV>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}
#endif  // VK_ENABLE_BETA_EXTENSIONS

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
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPhysicalDeviceClusterCullingShaderPropertiesHUAWEI>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPhysicalDeviceClusterCullingShaderVrsFeaturesHUAWEI>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPhysicalDeviceBorderColorSwizzleFeaturesEXT>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkSamplerBorderColorComponentMappingCreateInfoEXT>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPhysicalDevicePageableDeviceLocalMemoryFeaturesEXT>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPhysicalDeviceShaderCorePropertiesARM>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkDeviceQueueShaderCoreControlCreateInfoARM>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPhysicalDeviceSchedulingControlsFeaturesARM>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPhysicalDeviceSchedulingControlsPropertiesARM>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPhysicalDeviceImageSlicedViewOf3DFeaturesEXT>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkImageViewSlicedCreateInfoEXT>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPhysicalDeviceDescriptorSetHostMappingFeaturesVALVE>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkDescriptorSetBindingReferenceVALVE>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkDescriptorSetLayoutHostMappingInfoVALVE>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPhysicalDeviceNonSeamlessCubeMapFeaturesEXT>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPhysicalDeviceRenderPassStripedFeaturesARM>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPhysicalDeviceRenderPassStripedPropertiesARM>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkRenderPassStripeInfoARM>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkRenderPassStripeBeginInfoARM>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkRenderPassStripeSubmitInfoARM>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPhysicalDeviceFragmentDensityMapOffsetFeaturesEXT>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPhysicalDeviceFragmentDensityMapOffsetPropertiesEXT>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkRenderPassFragmentDensityMapOffsetEndInfoEXT>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPhysicalDeviceCopyMemoryIndirectFeaturesNV>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkDecompressMemoryRegionNV>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPhysicalDeviceMemoryDecompressionFeaturesEXT>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPhysicalDeviceMemoryDecompressionPropertiesEXT>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPhysicalDeviceDeviceGeneratedCommandsComputeFeaturesNV>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkComputePipelineIndirectBufferInfoNV>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPipelineIndirectDeviceAddressInfoNV>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkBindPipelineIndirectCommandNV>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPhysicalDeviceRayTracingLinearSweptSpheresFeaturesNV>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkAccelerationStructureGeometryLinearSweptSpheresDataNV>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkAccelerationStructureGeometrySpheresDataNV>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPhysicalDeviceLinearColorAttachmentFeaturesNV>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPhysicalDeviceImageCompressionControlSwapchainFeaturesEXT>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkImageViewSampleWeightCreateInfoQCOM>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPhysicalDeviceImageProcessingFeaturesQCOM>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPhysicalDeviceImageProcessingPropertiesQCOM>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPhysicalDeviceNestedCommandBufferFeaturesEXT>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPhysicalDeviceNestedCommandBufferPropertiesEXT>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkExternalMemoryAcquireUnmodifiedEXT>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPhysicalDeviceExtendedDynamicState3FeaturesEXT>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPhysicalDeviceExtendedDynamicState3PropertiesEXT>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkColorBlendEquationEXT>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkColorBlendAdvancedEXT>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPhysicalDeviceSubpassMergeFeedbackFeaturesEXT>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkRenderPassCreationControlEXT>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkRenderPassCreationFeedbackInfoEXT>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkRenderPassCreationFeedbackCreateInfoEXT>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkRenderPassSubpassFeedbackInfoEXT>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkRenderPassSubpassFeedbackCreateInfoEXT>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkDirectDriverLoadingInfoLUNARG>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkDirectDriverLoadingListLUNARG>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkTensorDescriptionARM>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkTensorCreateInfoARM>(VkStructureType type) {
    switch (type) {
        case VK_STRUCTURE_TYPE_EXTERNAL_MEMORY_TENSOR_CREATE_INFO_ARM:
            return {alignof(VkExternalMemoryTensorCreateInfoARM), sizeof(VkExternalMemoryTensorCreateInfoARM)};
        case VK_STRUCTURE_TYPE_OPAQUE_CAPTURE_DESCRIPTOR_DATA_CREATE_INFO_EXT:
            return {alignof(VkOpaqueCaptureDescriptorDataCreateInfoEXT), sizeof(VkOpaqueCaptureDescriptorDataCreateInfoEXT)};

        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkTensorViewCreateInfoARM>(VkStructureType type) {
    switch (type) {
        case VK_STRUCTURE_TYPE_OPAQUE_CAPTURE_DESCRIPTOR_DATA_CREATE_INFO_EXT:
            return {alignof(VkOpaqueCaptureDescriptorDataCreateInfoEXT), sizeof(VkOpaqueCaptureDescriptorDataCreateInfoEXT)};

        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkTensorMemoryRequirementsInfoARM>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkBindTensorMemoryInfoARM>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkWriteDescriptorSetTensorARM>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkTensorFormatPropertiesARM>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPhysicalDeviceTensorPropertiesARM>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkTensorMemoryBarrierARM>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkTensorDependencyInfoARM>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPhysicalDeviceTensorFeaturesARM>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkDeviceTensorMemoryRequirementsARM>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkTensorCopyARM>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkCopyTensorInfoARM>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkMemoryDedicatedAllocateInfoTensorARM>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPhysicalDeviceExternalTensorInfoARM>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkExternalTensorPropertiesARM>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkExternalMemoryTensorCreateInfoARM>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPhysicalDeviceDescriptorBufferTensorFeaturesARM>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPhysicalDeviceDescriptorBufferTensorPropertiesARM>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkDescriptorGetTensorInfoARM>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkTensorCaptureDescriptorDataInfoARM>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkTensorViewCaptureDescriptorDataInfoARM>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkFrameBoundaryTensorsARM>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPhysicalDeviceShaderModuleIdentifierFeaturesEXT>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPhysicalDeviceShaderModuleIdentifierPropertiesEXT>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPipelineShaderStageModuleIdentifierCreateInfoEXT>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkShaderModuleIdentifierEXT>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPhysicalDeviceOpticalFlowFeaturesNV>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPhysicalDeviceOpticalFlowPropertiesNV>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkOpticalFlowImageFormatInfoNV>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkOpticalFlowImageFormatPropertiesNV>(VkStructureType type) {
    switch (type) {
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
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkOpticalFlowSessionCreatePrivateDataInfoNV>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkOpticalFlowExecuteInfoNV>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPhysicalDeviceLegacyDitheringFeaturesEXT>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}
#ifdef VK_USE_PLATFORM_ANDROID_KHR

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPhysicalDeviceExternalFormatResolveFeaturesANDROID>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPhysicalDeviceExternalFormatResolvePropertiesANDROID>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkAndroidHardwareBufferFormatResolvePropertiesANDROID>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}
#endif  // VK_USE_PLATFORM_ANDROID_KHR

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPhysicalDeviceAntiLagFeaturesAMD>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkAntiLagPresentationInfoAMD>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkAntiLagDataAMD>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}
#ifdef VK_ENABLE_BETA_EXTENSIONS

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPhysicalDeviceDenseGeometryFormatFeaturesAMDX>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkAccelerationStructureDenseGeometryFormatTrianglesDataAMDX>(
    VkStructureType type) {
    switch (type) {
        case VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_TRIANGLES_OPACITY_MICROMAP_EXT:
            return {alignof(VkAccelerationStructureTrianglesOpacityMicromapEXT),
                    sizeof(VkAccelerationStructureTrianglesOpacityMicromapEXT)};

        default:
            // Unknown structure
            return {0, 0};
    }
}
#endif  // VK_ENABLE_BETA_EXTENSIONS

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPhysicalDeviceShaderObjectFeaturesEXT>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPhysicalDeviceShaderObjectPropertiesEXT>(
    VkStructureType type) {
    switch (type) {
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

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkDepthClampRangeEXT>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPhysicalDeviceTilePropertiesFeaturesQCOM>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkTilePropertiesQCOM>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPhysicalDeviceAmigoProfilingFeaturesSEC>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkAmigoProfilingSubmitInfoSEC>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPhysicalDeviceMultiviewPerViewViewportsFeaturesQCOM>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPhysicalDeviceRayTracingInvocationReorderPropertiesNV>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPhysicalDeviceRayTracingInvocationReorderFeaturesNV>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPhysicalDeviceCooperativeVectorPropertiesNV>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPhysicalDeviceCooperativeVectorFeaturesNV>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkCooperativeVectorPropertiesNV>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkConvertCooperativeVectorMatrixInfoNV>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPhysicalDeviceExtendedSparseAddressSpaceFeaturesNV>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPhysicalDeviceExtendedSparseAddressSpacePropertiesNV>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPhysicalDeviceLegacyVertexAttributesFeaturesEXT>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPhysicalDeviceLegacyVertexAttributesPropertiesEXT>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

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

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPhysicalDeviceShaderCoreBuiltinsFeaturesARM>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPhysicalDeviceShaderCoreBuiltinsPropertiesARM>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPhysicalDevicePipelineLibraryGroupHandlesFeaturesEXT>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPhysicalDeviceDynamicRenderingUnusedAttachmentsFeaturesEXT>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkLatencySleepModeInfoNV>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkLatencySleepInfoNV>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkSetLatencyMarkerInfoNV>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkLatencyTimingsFrameReportNV>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkGetLatencyMarkerInfoNV>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkLatencySubmissionPresentIdNV>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkSwapchainLatencyCreateInfoNV>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkOutOfBandQueueTypeInfoNV>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkLatencySurfaceCapabilitiesNV>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPhysicalDeviceDataGraphFeaturesARM>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkDataGraphPipelineConstantARM>(VkStructureType type) {
    switch (type) {
        case VK_STRUCTURE_TYPE_DATA_GRAPH_PIPELINE_CONSTANT_TENSOR_SEMI_STRUCTURED_SPARSITY_INFO_ARM:
            return {alignof(VkDataGraphPipelineConstantTensorSemiStructuredSparsityInfoARM),
                    sizeof(VkDataGraphPipelineConstantTensorSemiStructuredSparsityInfoARM)};
        case VK_STRUCTURE_TYPE_TENSOR_DESCRIPTION_ARM:
            return {alignof(VkTensorDescriptionARM), sizeof(VkTensorDescriptionARM)};

        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkDataGraphPipelineResourceInfoARM>(VkStructureType type) {
    switch (type) {
        case VK_STRUCTURE_TYPE_TENSOR_DESCRIPTION_ARM:
            return {alignof(VkTensorDescriptionARM), sizeof(VkTensorDescriptionARM)};

        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkDataGraphPipelineCompilerControlCreateInfoARM>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkDataGraphPipelineCreateInfoARM>(VkStructureType type) {
    switch (type) {
        case VK_STRUCTURE_TYPE_DATA_GRAPH_PIPELINE_COMPILER_CONTROL_CREATE_INFO_ARM:
            return {alignof(VkDataGraphPipelineCompilerControlCreateInfoARM),
                    sizeof(VkDataGraphPipelineCompilerControlCreateInfoARM)};
        case VK_STRUCTURE_TYPE_DATA_GRAPH_PIPELINE_IDENTIFIER_CREATE_INFO_ARM:
            return {alignof(VkDataGraphPipelineIdentifierCreateInfoARM), sizeof(VkDataGraphPipelineIdentifierCreateInfoARM)};
        case VK_STRUCTURE_TYPE_DATA_GRAPH_PIPELINE_SHADER_MODULE_CREATE_INFO_ARM:
            return {alignof(VkDataGraphPipelineShaderModuleCreateInfoARM), sizeof(VkDataGraphPipelineShaderModuleCreateInfoARM)};
        case VK_STRUCTURE_TYPE_DATA_GRAPH_PROCESSING_ENGINE_CREATE_INFO_ARM:
            return {alignof(VkDataGraphProcessingEngineCreateInfoARM), sizeof(VkDataGraphProcessingEngineCreateInfoARM)};
        case VK_STRUCTURE_TYPE_PIPELINE_CREATION_FEEDBACK_CREATE_INFO:
            return {alignof(VkPipelineCreationFeedbackCreateInfo), sizeof(VkPipelineCreationFeedbackCreateInfo)};
        case VK_STRUCTURE_TYPE_SHADER_MODULE_CREATE_INFO:
            return {alignof(VkShaderModuleCreateInfo), sizeof(VkShaderModuleCreateInfo)};

        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkDataGraphPipelineShaderModuleCreateInfoARM>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkDataGraphPipelineSessionCreateInfoARM>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkDataGraphPipelineSessionBindPointRequirementsInfoARM>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkDataGraphPipelineSessionBindPointRequirementARM>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkDataGraphPipelineSessionMemoryRequirementsInfoARM>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkBindDataGraphPipelineSessionMemoryInfoARM>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkDataGraphPipelineInfoARM>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkDataGraphPipelinePropertyQueryResultARM>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkDataGraphPipelineIdentifierCreateInfoARM>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkDataGraphPipelineDispatchInfoARM>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPhysicalDeviceDataGraphProcessingEngineARM>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPhysicalDeviceDataGraphOperationSupportARM>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkQueueFamilyDataGraphPropertiesARM>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkDataGraphProcessingEngineCreateInfoARM>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPhysicalDeviceQueueFamilyDataGraphProcessingEngineInfoARM>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkQueueFamilyDataGraphProcessingEnginePropertiesARM>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t>
GetPNextChainStructAlignmentAndSize<VkDataGraphPipelineConstantTensorSemiStructuredSparsityInfoARM>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPhysicalDeviceMultiviewPerViewRenderAreasFeaturesQCOM>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkMultiviewPerViewRenderAreasRenderPassBeginInfoQCOM>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPhysicalDevicePerStageDescriptorSetFeaturesNV>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPhysicalDeviceImageProcessing2FeaturesQCOM>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPhysicalDeviceImageProcessing2PropertiesQCOM>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkSamplerBlockMatchWindowCreateInfoQCOM>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPhysicalDeviceCubicWeightsFeaturesQCOM>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkSamplerCubicWeightsCreateInfoQCOM>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkBlitImageCubicWeightsInfoQCOM>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPhysicalDeviceYcbcrDegammaFeaturesQCOM>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkSamplerYcbcrConversionYcbcrDegammaCreateInfoQCOM>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPhysicalDeviceCubicClampFeaturesQCOM>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPhysicalDeviceAttachmentFeedbackLoopDynamicStateFeaturesEXT>(
    VkStructureType type) {
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

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPhysicalDeviceLayeredDriverPropertiesMSFT>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPhysicalDeviceDescriptorPoolOverallocationFeaturesNV>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPhysicalDeviceTileMemoryHeapFeaturesQCOM>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPhysicalDeviceTileMemoryHeapPropertiesQCOM>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkTileMemoryRequirementsQCOM>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkTileMemoryBindInfoQCOM>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkTileMemorySizeInfoQCOM>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkDecompressMemoryRegionEXT>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkDecompressMemoryInfoEXT>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkDisplaySurfaceStereoCreateInfoNV>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkDisplayModeStereoPropertiesNV>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPhysicalDeviceRawAccessChainsFeaturesNV>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkExternalComputeQueueDeviceCreateInfoNV>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkExternalComputeQueueCreateInfoNV>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkExternalComputeQueueDataParamsNV>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPhysicalDeviceExternalComputeQueuePropertiesNV>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPhysicalDeviceCommandBufferInheritanceFeaturesNV>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPhysicalDeviceShaderAtomicFloat16VectorFeaturesNV>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPhysicalDeviceShaderReplicatedCompositesFeaturesEXT>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPhysicalDeviceShaderFloat8FeaturesEXT>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPhysicalDeviceRayTracingValidationFeaturesNV>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPhysicalDeviceClusterAccelerationStructureFeaturesNV>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPhysicalDeviceClusterAccelerationStructurePropertiesNV>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkClusterAccelerationStructureClustersBottomLevelInputNV>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkClusterAccelerationStructureTriangleClusterInputNV>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkClusterAccelerationStructureMoveObjectsInputNV>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkClusterAccelerationStructureOpInputNV>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkClusterAccelerationStructureInputInfoNV>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkStridedDeviceAddressRegionKHR>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkClusterAccelerationStructureCommandsInfoNV>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkStridedDeviceAddressNV>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkClusterAccelerationStructureGeometryIndexAndGeometryFlagsNV>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkClusterAccelerationStructureMoveObjectsInfoNV>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkClusterAccelerationStructureBuildClustersBottomLevelInfoNV>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkClusterAccelerationStructureBuildTriangleClusterInfoNV>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t>
GetPNextChainStructAlignmentAndSize<VkClusterAccelerationStructureBuildTriangleClusterTemplateInfoNV>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkClusterAccelerationStructureInstantiateClusterInfoNV>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkClusterAccelerationStructureGetTemplateIndicesInfoNV>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkAccelerationStructureBuildSizesInfoKHR>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkRayTracingPipelineClusterAccelerationStructureCreateInfoNV>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPhysicalDevicePartitionedAccelerationStructureFeaturesNV>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPhysicalDevicePartitionedAccelerationStructurePropertiesNV>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPartitionedAccelerationStructureFlagsNV>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkBuildPartitionedAccelerationStructureIndirectCommandNV>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPartitionedAccelerationStructureWriteInstanceDataNV>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPartitionedAccelerationStructureUpdateInstanceDataNV>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t>
GetPNextChainStructAlignmentAndSize<VkPartitionedAccelerationStructureWritePartitionTranslationDataNV>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkWriteDescriptorSetPartitionedAccelerationStructureNV>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

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
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkBuildPartitionedAccelerationStructureInfoNV>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPhysicalDeviceDeviceGeneratedCommandsFeaturesEXT>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPhysicalDeviceDeviceGeneratedCommandsPropertiesEXT>(
    VkStructureType type) {
    switch (type) {
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
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkIndirectExecutionSetPipelineInfoEXT>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkIndirectExecutionSetShaderLayoutInfoEXT>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkIndirectExecutionSetShaderInfoEXT>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkIndirectExecutionSetInfoEXT>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkIndirectExecutionSetCreateInfoEXT>(VkStructureType type) {
    switch (type) {
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
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkWriteIndirectExecutionSetPipelineEXT>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkIndirectCommandsPushConstantTokenEXT>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkIndirectCommandsVertexBufferTokenEXT>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkIndirectCommandsIndexBufferTokenEXT>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkIndirectCommandsExecutionSetTokenEXT>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkIndirectCommandsTokenDataEXT>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkIndirectCommandsLayoutTokenEXT>(VkStructureType type) {
    switch (type) {
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
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkDrawIndirectCountIndirectCommandEXT>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkBindVertexBufferIndirectCommandEXT>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkBindIndexBufferIndirectCommandEXT>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkGeneratedCommandsPipelineInfoEXT>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkGeneratedCommandsShaderInfoEXT>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkWriteIndirectExecutionSetShaderEXT>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPhysicalDeviceImageAlignmentControlFeaturesMESA>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPhysicalDeviceImageAlignmentControlPropertiesMESA>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkImageAlignmentControlCreateInfoMESA>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPhysicalDeviceDepthClampControlFeaturesEXT>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPipelineViewportDepthClampControlCreateInfoEXT>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}
#ifdef VK_USE_PLATFORM_OHOS

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkSurfaceCreateInfoOHOS>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkNativeBufferOHOS>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkSwapchainImageCreateInfoOHOS>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPhysicalDevicePresentationPropertiesOHOS>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}
#endif  // VK_USE_PLATFORM_OHOS

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPhysicalDeviceHdrVividFeaturesHUAWEI>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkHdrVividDynamicMetadataHUAWEI>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkCooperativeMatrixFlexibleDimensionsPropertiesNV>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPhysicalDeviceCooperativeMatrix2FeaturesNV>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPhysicalDeviceCooperativeMatrix2PropertiesNV>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPhysicalDevicePipelineOpacityMicromapFeaturesARM>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}
#ifdef VK_USE_PLATFORM_METAL_EXT

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkImportMemoryMetalHandleInfoEXT>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkMemoryMetalHandlePropertiesEXT>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkMemoryGetMetalHandleInfoEXT>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}
#endif  // VK_USE_PLATFORM_METAL_EXT

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPhysicalDeviceVertexAttributeRobustnessFeaturesEXT>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPhysicalDeviceFormatPackFeaturesARM>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPhysicalDeviceFragmentDensityMapLayeredFeaturesVALVE>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPhysicalDeviceFragmentDensityMapLayeredPropertiesVALVE>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPipelineFragmentDensityMapLayeredCreateInfoVALVE>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}
#ifdef VK_ENABLE_BETA_EXTENSIONS

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkSetPresentConfigNV>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPhysicalDevicePresentMeteringFeaturesNV>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}
#endif  // VK_ENABLE_BETA_EXTENSIONS

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPhysicalDeviceZeroInitializeDeviceMemoryFeaturesEXT>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPhysicalDeviceShader64BitIndexingFeaturesEXT>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPhysicalDevicePipelineCacheIncrementalModeFeaturesSEC>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPhysicalDeviceShaderUniformBufferUnsizedArrayFeaturesEXT>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkAccelerationStructureBuildRangeInfoKHR>(
    VkStructureType type) {
    switch (type) {
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
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkAccelerationStructureGeometryAabbsDataKHR>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkAccelerationStructureGeometryInstancesDataKHR>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkAccelerationStructureGeometryDataKHR>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkAccelerationStructureGeometryKHR>(VkStructureType type) {
    switch (type) {
#ifdef VK_ENABLE_BETA_EXTENSIONS
        case VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_DENSE_GEOMETRY_FORMAT_TRIANGLES_DATA_AMDX:
            return {alignof(VkAccelerationStructureDenseGeometryFormatTrianglesDataAMDX),
                    sizeof(VkAccelerationStructureDenseGeometryFormatTrianglesDataAMDX)};
#endif  // VK_ENABLE_BETA_EXTENSIONS
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
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkAccelerationStructureBuildGeometryInfoKHR>(
    VkStructureType type) {
    switch (type) {
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
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkWriteDescriptorSetAccelerationStructureKHR>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPhysicalDeviceAccelerationStructureFeaturesKHR>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPhysicalDeviceAccelerationStructurePropertiesKHR>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkAccelerationStructureDeviceAddressInfoKHR>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkAccelerationStructureVersionInfoKHR>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkCopyAccelerationStructureToMemoryInfoKHR>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkCopyMemoryToAccelerationStructureInfoKHR>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkCopyAccelerationStructureInfoKHR>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkRayTracingShaderGroupCreateInfoKHR>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkRayTracingPipelineInterfaceCreateInfoKHR>(
    VkStructureType type) {
    switch (type) {
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

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPhysicalDeviceRayTracingPipelineFeaturesKHR>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPhysicalDeviceRayTracingPipelinePropertiesKHR>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkTraceRaysIndirectCommandKHR>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPhysicalDeviceRayQueryFeaturesKHR>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPhysicalDeviceMeshShaderFeaturesEXT>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkPhysicalDeviceMeshShaderPropertiesEXT>(
    VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

template <>
inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<VkDrawMeshTasksIndirectCommandEXT>(VkStructureType type) {
    switch (type) {
        default:
            // Unknown structure
            return {0, 0};
    }
}

}  // namespace vk

// NOLINTEND
