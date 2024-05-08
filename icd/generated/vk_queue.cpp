// *** THIS FILE IS GENERATED - DO NOT EDIT ***
// See vk_dispatchable_generator.py for modifications

/*
 * Copyright (c) 2024 The Khronos Group Inc.
 * Copyright (c) 2024 RasterGrid Kft.
 *
 * SPDX-License-Identifier: Apache-2.0
 */
// NOLINTBEGIN

#include "vk_queue.h"

namespace vk {

VkResult Queue::QueueSubmit(uint32_t submitCount, const VkSubmitInfo* pSubmits, VkFence fence) {
    return dispatch_table_.QueueSubmit(handle_, submitCount, pSubmits, fence);
}

VkResult Queue::QueueWaitIdle() { return dispatch_table_.QueueWaitIdle(handle_); }

VkResult Queue::QueueBindSparse(uint32_t bindInfoCount, const VkBindSparseInfo* pBindInfo, VkFence fence) {
    return dispatch_table_.QueueBindSparse(handle_, bindInfoCount, pBindInfo, fence);
}

VkResult Queue::QueueSubmit2(uint32_t submitCount, const VkSubmitInfo2* pSubmits, VkFence fence) {
    return dispatch_table_.QueueSubmit2(handle_, submitCount, pSubmits, fence);
}

VkResult Queue::QueuePresentKHR(const VkPresentInfoKHR* pPresentInfo) {
    return dispatch_table_.QueuePresentKHR(handle_, pPresentInfo);
}

void Queue::GetQueueCheckpointData2NV(uint32_t* pCheckpointDataCount, VkCheckpointData2NV* pCheckpointData) {
    return dispatch_table_.GetQueueCheckpointData2NV(handle_, pCheckpointDataCount, pCheckpointData);
}

void Queue::QueueBeginDebugUtilsLabelEXT(const VkDebugUtilsLabelEXT* pLabelInfo) {
    return dispatch_table_.QueueBeginDebugUtilsLabelEXT(handle_, pLabelInfo);
}

void Queue::QueueEndDebugUtilsLabelEXT() { return dispatch_table_.QueueEndDebugUtilsLabelEXT(handle_); }

void Queue::QueueInsertDebugUtilsLabelEXT(const VkDebugUtilsLabelEXT* pLabelInfo) {
    return dispatch_table_.QueueInsertDebugUtilsLabelEXT(handle_, pLabelInfo);
}

void Queue::GetQueueCheckpointDataNV(uint32_t* pCheckpointDataCount, VkCheckpointDataNV* pCheckpointData) {
    return dispatch_table_.GetQueueCheckpointDataNV(handle_, pCheckpointDataCount, pCheckpointData);
}

VkResult Queue::QueueSetPerformanceConfigurationINTEL(VkPerformanceConfigurationINTEL configuration) {
    return dispatch_table_.QueueSetPerformanceConfigurationINTEL(handle_, configuration);
}

void Queue::QueueNotifyOutOfBandNV(const VkOutOfBandQueueTypeInfoNV* pQueueTypeInfo) {
    return dispatch_table_.QueueNotifyOutOfBandNV(handle_, pQueueTypeInfo);
}

}  // namespace vk

// NOLINTEND
