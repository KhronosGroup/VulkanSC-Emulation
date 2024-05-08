/*
 * Copyright (c) 2024 The Khronos Group Inc.
 * Copyright (c) 2024 RasterGrid Kft.
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#pragma once

#include "icd_defs.h"
#include "vksc_proc_addr_helper.h"

namespace icd {

enum ProcTypeBits { GlobalProc = 1 << 0, InstanceProc = 1 << 1, PhysicalDeviceProc = 1 << 2, DeviceProc = 1 << 3 };

enum class ProcTypeMask {
    Global = GlobalProc,
    Instance = GlobalProc | InstanceProc | PhysicalDeviceProc | DeviceProc,
    PhysicalDevice = PhysicalDeviceProc,
    Device = DeviceProc
};

inline PFN_vkVoidFunction GetProcAddr(ProcTypeMask proc_type_mask, const char *proc_name) {
    uint32_t mask = static_cast<uint32_t>(proc_type_mask);
    if (mask & GlobalProc) {
        const auto &proc = vksc::GetGlobalProcAddrMap().find(proc_name);
        if (proc != vksc::GetGlobalProcAddrMap().end()) {
            return proc->second;
        }
    }
    if (mask & InstanceProc) {
        const auto &proc = vksc::GetInstanceProcAddrMap().find(proc_name);
        if (proc != vksc::GetInstanceProcAddrMap().end()) {
            return proc->second;
        }
    }
    if (mask & PhysicalDeviceProc) {
        const auto &proc = vksc::GetPhysicalDeviceProcAddrMap().find(proc_name);
        if (proc != vksc::GetPhysicalDeviceProcAddrMap().end()) {
            return proc->second;
        }
    }
    if (mask & DeviceProc) {
        const auto &proc = vksc::GetDeviceProcAddrMap().find(proc_name);
        if (proc != vksc::GetDeviceProcAddrMap().end()) {
            return proc->second;
        }
    }
    return nullptr;
}

}  // namespace icd
