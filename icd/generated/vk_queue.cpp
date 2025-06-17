// *** THIS FILE IS GENERATED - DO NOT EDIT ***
// See vk_dispatchable_generator.py for modifications

/*
 * Copyright (c) 2024-2025 The Khronos Group Inc.
 * Copyright (c) 2024-2025 RasterGrid Kft.
 *
 * SPDX-License-Identifier: Apache-2.0
 */
// NOLINTBEGIN

#include "vk_queue.h"
#include "vksc_output_struct_sanitizer.h"

namespace vk {

VkResult Queue::QueueSubmit(uint32_t submitCount, const VkSubmitInfo* pSubmits, VkFence fence) {
    VkResult result = dispatch_table_.QueueSubmit(handle_, submitCount, pSubmits, fence);
    if (result == VK_ERROR_DEVICE_LOST) {
        fault_handler_.ReportFault(VK_FAULT_LEVEL_CRITICAL, VK_FAULT_TYPE_PHYSICAL_DEVICE);
    }
    return result;
}
VkResult Queue::QueueWaitIdle() {
    VkResult result = dispatch_table_.QueueWaitIdle(handle_);
    if (result == VK_ERROR_DEVICE_LOST) {
        fault_handler_.ReportFault(VK_FAULT_LEVEL_CRITICAL, VK_FAULT_TYPE_PHYSICAL_DEVICE);
    }
    return result;
}
VkResult Queue::QueueBindSparse(uint32_t bindInfoCount, const VkBindSparseInfo* pBindInfo, VkFence fence) {
    VkResult result = dispatch_table_.QueueBindSparse(handle_, bindInfoCount, pBindInfo, fence);
    if (result == VK_ERROR_DEVICE_LOST) {
        fault_handler_.ReportFault(VK_FAULT_LEVEL_CRITICAL, VK_FAULT_TYPE_PHYSICAL_DEVICE);
    }
    return result;
}
VkResult Queue::QueuePresentKHR(const VkPresentInfoKHR* pPresentInfo) {
    VkResult result = dispatch_table_.QueuePresentKHR(handle_, pPresentInfo);
    if (result == VK_ERROR_DEVICE_LOST) {
        fault_handler_.ReportFault(VK_FAULT_LEVEL_CRITICAL, VK_FAULT_TYPE_PHYSICAL_DEVICE);
    }
    return result;
}
VkResult Queue::QueueSubmit2KHR(uint32_t submitCount, const VkSubmitInfo2* pSubmits, VkFence fence) {
    VkResult result = dispatch_table_.QueueSubmit2KHR(handle_, submitCount, pSubmits, fence);
    if (result == VK_ERROR_DEVICE_LOST) {
        fault_handler_.ReportFault(VK_FAULT_LEVEL_CRITICAL, VK_FAULT_TYPE_PHYSICAL_DEVICE);
    }
    return result;
}
void Queue::QueueBeginDebugUtilsLabelEXT(const VkDebugUtilsLabelEXT* pLabelInfo) {
    dispatch_table_.QueueBeginDebugUtilsLabelEXT(handle_, pLabelInfo);
}
void Queue::QueueEndDebugUtilsLabelEXT() { dispatch_table_.QueueEndDebugUtilsLabelEXT(handle_); }
void Queue::QueueInsertDebugUtilsLabelEXT(const VkDebugUtilsLabelEXT* pLabelInfo) {
    dispatch_table_.QueueInsertDebugUtilsLabelEXT(handle_, pLabelInfo);
}
void Queue::GetQueueCheckpointDataNV(uint32_t* pCheckpointDataCount, VkCheckpointDataNV* pCheckpointData) {
    dispatch_table_.GetQueueCheckpointDataNV(handle_, pCheckpointDataCount, pCheckpointData);
    if (pCheckpointData != nullptr) {
        for (uint32_t i = 0; i < *pCheckpointDataCount; ++i)
            vksc::ConvertOutStructChainToVulkanSC<VkCheckpointDataNV>(&pCheckpointData[i]);
    }
}
void Queue::GetQueueCheckpointData2NV(uint32_t* pCheckpointDataCount, VkCheckpointData2NV* pCheckpointData) {
    dispatch_table_.GetQueueCheckpointData2NV(handle_, pCheckpointDataCount, pCheckpointData);
    if (pCheckpointData != nullptr) {
        for (uint32_t i = 0; i < *pCheckpointDataCount; ++i)
            vksc::ConvertOutStructChainToVulkanSC<VkCheckpointData2NV>(&pCheckpointData[i]);
    }
}
VkResult Queue::QueueSetPerformanceConfigurationINTEL(VkPerformanceConfigurationINTEL configuration) {
    return dispatch_table_.QueueSetPerformanceConfigurationINTEL(handle_, configuration);
}
void Queue::QueueNotifyOutOfBandNV(const VkOutOfBandQueueTypeInfoNV* pQueueTypeInfo) {
    dispatch_table_.QueueNotifyOutOfBandNV(handle_, pQueueTypeInfo);
}

}  // namespace vk

// NOLINTEND
