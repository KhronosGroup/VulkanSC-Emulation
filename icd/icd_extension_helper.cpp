/*
 * Copyright (c) 2024-2025 The Khronos Group Inc.
 * Copyright (c) 2024-2025 RasterGrid Kft.
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#include "icd_extension_helper.h"
#include "vksc_extension_helper.h"

#include <map>
#include <algorithm>
#include <string.h>

namespace icd {

std::vector<VkExtensionProperties> GetVulkanSCExtensionList(const Logger& log,
                                                            const std::vector<VkExtensionProperties> vulkan_extension_list,
                                                            const vksc::ExtensionMap& allowed_vulkan_sc_extensions,
                                                            const vksc::ExtensionMap& icd_implemented_extensions) {
    std::map<vksc::ExtensionNumber, uint32_t> merged_sorted;

    for (const auto& icd_extension : icd_implemented_extensions) {
        merged_sorted.emplace(icd_extension);
    }

    for (const auto& vulkan_extension : vulkan_extension_list) {
        if (merged_sorted.find(vksc::GetExtensionNumber(vulkan_extension.extensionName)) == merged_sorted.end()) {
            auto it = allowed_vulkan_sc_extensions.find(vksc::GetExtensionNumber(vulkan_extension.extensionName));
            if (it != allowed_vulkan_sc_extensions.end()) {
                if (it->second != vulkan_extension.specVersion) {
                    log.Debug("VKSC-EMU-ExtensionFiltering-VersionClamp",
                              "Vulkan SC only supports revision %u of extension %s so revision %u exposed "
                              "by the underlying Vulkan implementation is clamped",
                              it->second, &vulkan_extension.extensionName[0], vulkan_extension.specVersion);
                }
                merged_sorted.emplace(std::make_pair(vksc::GetExtensionNumber(vulkan_extension.extensionName),
                                                     std::min(it->second, vulkan_extension.specVersion)));
            } else {
                log.Debug("VKSC-EMU-ExtensionFiltering-Hide",
                          "Extension %s supported by the underlying Vulkan implementation is hidden "
                          "because it is not supported in Vulkan SC",
                          vulkan_extension.extensionName);
            }
        } else {
            log.Debug("VKSC-EMU-ExtensionFiltering-BehaviorOverride",
                      "Vulkan SC Emulation ICD exposed extension %s is also supported by the underlying "
                      "Vulkan implementation but will be overridden",
                      &vulkan_extension.extensionName[0]);
        }
    }

    std::vector<VkExtensionProperties> result;
    for (const auto& extension : merged_sorted) {
        VkExtensionProperties props;
        strncpy(props.extensionName, vksc::GetExtensionName(extension.first), VK_MAX_EXTENSION_NAME_SIZE - 1);
        props.specVersion = extension.second;
        result.emplace_back(props);
    }

    return result;
}

vk::ExtensionNumber ConvertExtensionNumber(vksc::ExtensionNumber ext_num) {
    return vk::GetExtensionNumber(vksc::GetExtensionName(ext_num));
}

vksc::ExtensionNumber ConvertExtensionNumber(vk::ExtensionNumber ext_num) {
    return vksc::GetExtensionNumber(vk::GetExtensionName(ext_num));
}

}  // namespace icd
