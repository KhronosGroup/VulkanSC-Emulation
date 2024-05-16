/*
 * Copyright (c) 2024 The Khronos Group Inc.
 * Copyright (c) 2024 RasterGrid Kft.
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#pragma once

#include "vksc_extension_helper.h"
#include "icd_log.h"

#include <vulkan/vulkan.h>
#include <vector>

namespace icd {

std::vector<VkExtensionProperties> GetVulkanSCExtensionList(const Logger& log,
                                                            const std::vector<VkExtensionProperties> vulkan_extension_list,
                                                            const vksc::ExtensionMap& allowed_vulkan_sc_extensions,
                                                            const vksc::ExtensionMap& icd_implemented_extensions = {});

}  // namespace icd
