// *** THIS FILE IS GENERATED - DO NOT EDIT ***
// See extension_helper_generator.py for modifications

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

namespace vk {

using ExtensionMap = std::unordered_map<std::string, uint32_t>;

const ExtensionMap& GetInstanceExtensionsMap();
const ExtensionMap& GetDeviceExtensionsMap();

}  // namespace vk

// NOLINTEND
