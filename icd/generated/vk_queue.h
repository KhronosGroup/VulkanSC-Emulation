// *** THIS FILE IS GENERATED - DO NOT EDIT ***
// See vk_dispatchable_generator.py for modifications

/*
 * Copyright (c) 2024 The Khronos Group Inc.
 * Copyright (c) 2024 RasterGrid Kft.
 *
 * SPDX-License-Identifier: Apache-2.0
 */
// NOLINTBEGIN

#pragma once

#include "vk_dispatch_table.h"

namespace vk {

class Queue {
  public:
    Queue(VkQueue handle, const DispatchTable& dispatch_table) : handle_(handle), dispatch_table_(dispatch_table) {}
    VkResult QueueSubmit(uint32_t submitCount, const VkSubmitInfo* pSubmits, VkFence fence);
    VkResult QueueWaitIdle();
    VkResult QueueBindSparse(uint32_t bindInfoCount, const VkBindSparseInfo* pBindInfo, VkFence fence);
    VkResult QueueSubmit2(uint32_t submitCount, const VkSubmitInfo2* pSubmits, VkFence fence);
    VkResult QueuePresentKHR(const VkPresentInfoKHR* pPresentInfo);
    void GetQueueCheckpointData2NV(uint32_t* pCheckpointDataCount, VkCheckpointData2NV* pCheckpointData);
    void QueueBeginDebugUtilsLabelEXT(const VkDebugUtilsLabelEXT* pLabelInfo);
    void QueueEndDebugUtilsLabelEXT();
    void QueueInsertDebugUtilsLabelEXT(const VkDebugUtilsLabelEXT* pLabelInfo);
    void GetQueueCheckpointDataNV(uint32_t* pCheckpointDataCount, VkCheckpointDataNV* pCheckpointData);
    VkResult QueueSetPerformanceConfigurationINTEL(VkPerformanceConfigurationINTEL configuration);
    void QueueNotifyOutOfBandNV(const VkOutOfBandQueueTypeInfoNV* pQueueTypeInfo);

    VkQueue VkHandle() const { return handle_; }
    const DispatchTable& VkDispatch() const { return dispatch_table_; }

  private:
    const VkQueue handle_;
    const DispatchTable& dispatch_table_;
};

}  // namespace vk

// NOLINTEND
