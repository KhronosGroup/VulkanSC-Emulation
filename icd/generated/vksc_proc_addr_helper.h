// *** THIS FILE IS GENERATED - DO NOT EDIT ***
// See proc_addr_helper_generator.py for modifications

/*
 * Copyright (c) 2024 The Khronos Group Inc.
 * Copyright (c) 2024 RasterGrid Kft.
 *
 * SPDX-License-Identifier: Apache-2.0
 */
// NOLINTBEGIN

#pragma once

#include <vulkan/vulkan.h>
#include <unordered_map>
#include <string>

#include "vksc_extension_helper.h"

namespace vksc {

struct ProcAddrInfo {
    PFN_vkVoidFunction pfn;
    std::vector<ExtensionNumber> enabled_by;
};

const std::unordered_map<std::string, ProcAddrInfo>& GetGlobalProcAddrMap();
const std::unordered_map<std::string, ProcAddrInfo>& GetInstanceProcAddrMap();
const std::unordered_map<std::string, ProcAddrInfo>& GetPhysicalDeviceProcAddrMap();
const std::unordered_map<std::string, ProcAddrInfo>& GetDeviceProcAddrMap();
}  // namespace vksc
// NOLINTEND
