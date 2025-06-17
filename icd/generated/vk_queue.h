// *** THIS FILE IS GENERATED - DO NOT EDIT ***
// See vk_dispatchable_generator.py for modifications

/*
 * Copyright (c) 2024-2025 The Khronos Group Inc.
 * Copyright (c) 2024-2025 RasterGrid Kft.
 *
 * SPDX-License-Identifier: Apache-2.0
 */
// NOLINTBEGIN

#pragma once

#include "vk_dispatch_table.h"
#include "icd_fault_handler.h"

namespace vk {

class Queue {
  public:
    Queue(VkQueue handle, const DispatchTable& dispatch_table, icd::FaultHandler& fault_handler)
        : handle_(handle), dispatch_table_(dispatch_table), fault_handler_(fault_handler) {}
    VkResult QueueSubmit(uint32_t submitCount, const VkSubmitInfo* pSubmits, VkFence fence);
    VkResult QueueWaitIdle();
    VkResult QueueBindSparse(uint32_t bindInfoCount, const VkBindSparseInfo* pBindInfo, VkFence fence);
    VkResult QueuePresentKHR(const VkPresentInfoKHR* pPresentInfo);
    VkResult QueueSubmit2KHR(uint32_t submitCount, const VkSubmitInfo2* pSubmits, VkFence fence);
    void QueueBeginDebugUtilsLabelEXT(const VkDebugUtilsLabelEXT* pLabelInfo);
    void QueueEndDebugUtilsLabelEXT();
    void QueueInsertDebugUtilsLabelEXT(const VkDebugUtilsLabelEXT* pLabelInfo);
    void GetQueueCheckpointDataNV(uint32_t* pCheckpointDataCount, VkCheckpointDataNV* pCheckpointData);
    void GetQueueCheckpointData2NV(uint32_t* pCheckpointDataCount, VkCheckpointData2NV* pCheckpointData);
    VkResult QueueSetPerformanceConfigurationINTEL(VkPerformanceConfigurationINTEL configuration);
    void QueueNotifyOutOfBandNV(const VkOutOfBandQueueTypeInfoNV* pQueueTypeInfo);

    VkQueue VkHandle() const { return handle_; }
    const DispatchTable& VkDispatch() const { return dispatch_table_; }

    void ReportFault(VkFaultLevel level, VkFaultType type) { fault_handler_.ReportFault(level, type); }

  private:
    const VkQueue handle_;
    const DispatchTable& dispatch_table_;
    icd::FaultHandler& fault_handler_;
};

}  // namespace vk

// NOLINTEND
