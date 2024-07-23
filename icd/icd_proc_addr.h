/*
 * Copyright (c) 2024 The Khronos Group Inc.
 * Copyright (c) 2024 RasterGrid Kft.
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#pragma once

#include "icd_defs.h"
#include "vksc_device.h"
#include "vksc_extension_helper.h"
#include "vksc_proc_addr_helper.h"
#include "vksc_instance.h"
#include "vksc_physical_device.h"

namespace icd {

enum ProcTypeBits { GlobalProc = 1 << 0, InstanceProc = 1 << 1, PhysicalDeviceProc = 1 << 2, DeviceProc = 1 << 3 };

enum class ProcTypeMask {
    Global = GlobalProc,
    Instance = GlobalProc | InstanceProc | PhysicalDeviceProc | DeviceProc,
    PhysicalDevice = PhysicalDeviceProc,
    Device = DeviceProc
};

inline PFN_vkVoidFunction GetInstanceProcAddr(VkInstance instance, const char *proc_name) {
    if (strcmp(proc_name, "vkGetInstanceProcAddr") == 0) {
        // instance = NULL  && "pName == vkGetInstanceProcAddr"
        // instance = valid && "pName == vkGetInstanceProcAddr"
        return (PFN_vkVoidFunction)::icd::GetInstanceProcAddr;
    }
    if (instance != VK_NULL_HANDLE) {
        const auto &global_proc = vksc::GetGlobalProcAddrMap().find(proc_name);
        if (global_proc != vksc::GetGlobalProcAddrMap().end()) {
            // instance = NULL && global command
            return global_proc->second.pfn;
        }
        const auto &instance_proc = vksc::GetInstanceProcAddrMap().find(proc_name);
        if (instance_proc != vksc::GetInstanceProcAddrMap().end()) {
            for (auto ext_num : instance_proc->second.enabled_by) {
                if (vksc::GetInstanceExtensionsMap().find(ext_num) != vksc::GetInstanceExtensionsMap().cend() &&
                    !vksc::Instance::FromHandle(instance)->IsExtensionEnabled(ext_num)) {
                    // instance = valid && not enabled instance ext
                    return nullptr;
                }
            }
            // instance = valid && core dispatchable command
            return instance_proc->second.pfn;
        }
        const auto &phys_dev_proc = vksc::GetPhysicalDeviceProcAddrMap().find(proc_name);
        if (phys_dev_proc != vksc::GetPhysicalDeviceProcAddrMap().end()) {
            for (auto ext_num : phys_dev_proc->second.enabled_by) {
                if (vksc::GetInstanceExtensionsMap().find(ext_num) != vksc::GetInstanceExtensionsMap().cend() &&
                    !vksc::Instance::FromHandle(instance)->IsExtensionEnabled(ext_num)) {
                    // instance = valid && not enabled instance ext
                    return nullptr;
                }
            }
            return phys_dev_proc->second.pfn;
        }
        const auto &dev_proc = vksc::GetDeviceProcAddrMap().find(proc_name);
        if (dev_proc != vksc::GetDeviceProcAddrMap().end()) {
            if (!dev_proc->second.enabled_by.empty()) {
                // TODO: We could check available device extensions here
            }
            return dev_proc->second.pfn;
        }
    } else {
        const auto &global_proc = vksc::GetGlobalProcAddrMap().find(proc_name);
        if (global_proc != vksc::GetGlobalProcAddrMap().end()) {
            // instance = NULL && global command
            return global_proc->second.pfn;
        }
    }
    // any other case not covered above
    return nullptr;
}

inline PFN_vkVoidFunction GetDeviceProcAddr(VkDevice device, const char *proc_name) {
    if (device != VK_NULL_HANDLE) {
        const auto &proc = vksc::GetDeviceProcAddrMap().find(proc_name);
        if (proc != vksc::GetDeviceProcAddrMap().end()) {
            for (auto ext_num : proc->second.enabled_by) {
                if (vksc::GetDeviceExtensionsMap().find(ext_num) != vksc::GetDeviceExtensionsMap().cend() &&
                    !vksc::Device::FromHandle(device)->IsExtensionEnabled(ext_num)) {
                    // device = valid && not enabled device ext
                    return nullptr;
                }
            }
            // device = valid && core dispatchable command
            return proc->second.pfn;
        }
    }
    // any other case not covered above
    return nullptr;
}

inline PFN_vkVoidFunction GetProcAddr(ProcTypeMask proc_type_mask, const char *proc_name) {
    uint32_t mask = static_cast<uint32_t>(proc_type_mask);
    if (mask & GlobalProc) {
        const auto &proc = vksc::GetGlobalProcAddrMap().find(proc_name);
        if (proc != vksc::GetGlobalProcAddrMap().end()) {
            return proc->second.pfn;
        }
    }
    if (mask & InstanceProc) {
        const auto &proc = vksc::GetInstanceProcAddrMap().find(proc_name);
        if (proc != vksc::GetInstanceProcAddrMap().end()) {
            return proc->second.pfn;
        }
    }
    if (mask & PhysicalDeviceProc) {
        const auto &proc = vksc::GetPhysicalDeviceProcAddrMap().find(proc_name);
        if (proc != vksc::GetPhysicalDeviceProcAddrMap().end()) {
            return proc->second.pfn;
        }
    }
    if (mask & DeviceProc) {
        const auto &proc = vksc::GetDeviceProcAddrMap().find(proc_name);
        if (proc != vksc::GetDeviceProcAddrMap().end()) {
            return proc->second.pfn;
        }
    }
    return nullptr;
}

}  // namespace icd
