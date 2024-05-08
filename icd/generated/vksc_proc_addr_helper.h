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

namespace vksc {
const std::unordered_map<std::string, PFN_vkVoidFunction>& GetGlobalProcAddrMap();
const std::unordered_map<std::string, PFN_vkVoidFunction>& GetInstanceProcAddrMap();
const std::unordered_map<std::string, PFN_vkVoidFunction>& GetPhysicalDeviceProcAddrMap();
const std::unordered_map<std::string, PFN_vkVoidFunction>& GetDeviceProcAddrMap();
}  // namespace vksc
// NOLINTEND
