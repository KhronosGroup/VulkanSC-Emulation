/*
 * Copyright (c) 2024 The Khronos Group Inc.
 * Copyright (c) 2024 RasterGrid Kft.
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#include "icd_fault_handler.h"

namespace icd {

FaultHandler::FaultHandler(uint32_t max_fault_count, const VkFaultCallbackInfo* callback_info) : max_fault_count_(max_fault_count) {
    faults_.reserve(max_fault_count);
    if (callback_info != nullptr) {
        fault_callback_ = FaultCallbackInfo{callback_info->faultCount, callback_info->pFaults, callback_info->pfnFaultCallback};
    }
}

void FaultHandler::ReportFault(VkFaultLevel level, VkFaultType type) {
    VkFaultData fault_data = {VK_STRUCTURE_TYPE_FAULT_DATA, nullptr, level, type};

    if (fault_callback_) {
        fault_callback_.value().pfnFaultCallback(unrecorded_faults_, 1, &fault_data);
    }

    if (max_fault_count_ != 0) {
        std::lock_guard<std::mutex> lock{faults_mutex_};

        if (faults_.size() < max_fault_count_) {
            faults_.push_back(fault_data);
        } else {
            unrecorded_faults_ = true;
        }
    }
}

VkResult FaultHandler::GetFaultData(VkFaultQueryBehavior faultQueryBehavior, VkBool32* pUnrecordedFaults, uint32_t* pFaultCount,
                                    VkFaultData* pFaults) {
    std::lock_guard<std::mutex> lock{faults_mutex_};

    switch (faultQueryBehavior) {
        case VkFaultQueryBehavior::VK_FAULT_QUERY_BEHAVIOR_GET_AND_CLEAR_ALL_FAULTS:
            if (pUnrecordedFaults != nullptr) {
                *pUnrecordedFaults = unrecorded_faults_;
            }
            unrecorded_faults_ = VK_FALSE;

            if (pFaults == nullptr) {
                *pFaultCount = static_cast<uint32_t>(faults_.size());
                return VK_SUCCESS;
            } else {
                VkResult result = *pFaultCount < static_cast<uint32_t>(faults_.size()) ? VK_INCOMPLETE : VK_SUCCESS;
                uint32_t elems_to_copy = std::min(*pFaultCount, static_cast<uint32_t>(faults_.size()));
                for (uint32_t i = 0; i < elems_to_copy; ++i) {
                    pFaults[i].faultLevel = faults_[i].faultLevel;
                    pFaults[i].faultType = faults_[i].faultType;
                }
                faults_.erase(faults_.begin(), faults_.begin() + elems_to_copy);
                *pFaultCount = elems_to_copy;
                return result;
            }
            break;
        default:
            return VK_ERROR_UNKNOWN;
            break;
    }
}

}  // namespace icd
