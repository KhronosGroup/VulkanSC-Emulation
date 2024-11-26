/*
 * Copyright (c) 2024 The Khronos Group Inc.
 * Copyright (c) 2024 RasterGrid Kft.
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#pragma once

#include "icd_defs.h"

#include <mutex>
#include <vector>
#include <optional>
#include <utility>
#include <atomic>

namespace icd {

class FaultHandler {
  public:
    FaultHandler(uint32_t max_fault_count, const VkFaultCallbackInfo* callback_info);

    void ReportFault(VkFaultLevel level, VkFaultType type);

    VkResult GetFaultData(VkFaultQueryBehavior faultQueryBehavior, VkBool32* pUnrecordedFaults, uint32_t* pFaultCount,
                          VkFaultData* pFaults);

    static FaultHandler& Nil() {
        static FaultHandler nil(0, nullptr);
        return nil;
    }

  private:
    struct FaultCallbackInfo {
        uint32_t faultCount;
        VkFaultData* pFaults;
        PFN_vkFaultCallbackFunction pfnFaultCallback;
    };

    const std::size_t max_fault_count_{};
    const std::optional<FaultCallbackInfo> fault_callback_{std::nullopt};
    std::mutex faults_mutex_{};
    std::vector<VkFaultData> faults_{};
    std::atomic_bool unrecorded_faults_{false};
};

}  // namespace icd
