/*
 * Copyright (c) 2024 The Khronos Group Inc.
 * Copyright (c) 2024 RasterGrid Kft.
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#pragma once

#include "icd_log.h"
#include "icd_env_helper.h"
#include "icd_extension_helper.h"
#include "vk_extension_helper.h"
#include "vksc_extension_helper.h"
#include "vksc_display_emulation.h"

#include <vulkan/vulkan.h>
#include <unordered_set>
#include <vector>

namespace vksc {

class Global {
  public:
    Global();
    ~Global();

    struct DispatchTable {
        PFN_vkEnumerateInstanceVersion EnumerateInstanceVersion;
        PFN_vkEnumerateInstanceExtensionProperties EnumerateInstanceExtensionProperties;
        PFN_vkEnumerateInstanceLayerProperties EnumerateInstanceLayerProperties;
        PFN_vkCreateInstance CreateInstance;
    };

    const icd::EnvironmentHelper& Environment() const { return environment_; }
    const icd::Logger& Log() const { return logger_; }

    GlobalDisplayManager& GetDisplayManager() { return display_manager_; }

    bool IsValid() const { return valid_; }

    bool IsInstanceExtensionSupported(ExtensionNumber ext_num) const {
        return instance_extensions_.find(ext_num) != instance_extensions_.end();
    }

    bool IsInstanceExtensionSupported(vk::ExtensionNumber ext_num) const {
        return vk_instance_extensions_.find(ext_num) != vk_instance_extensions_.end();
    }

    bool IsInstanceExtensionEmulated(ExtensionNumber ext_num) const {
        return IsInstanceExtensionSupported(ext_num) && !IsInstanceExtensionSupported(icd::ConvertExtensionNumber(ext_num));
    }

    const DispatchTable& VkDispatch() const { return vk_dispatch_table_; }
    PFN_vkGetInstanceProcAddr VkGetProcAddr() const { return vk_get_instance_proc_addr_; }

    VkResult EnumerateInstanceExtensionProperties(const char* pLayerName, uint32_t* pPropertyCount,
                                                  VkExtensionProperties* pProperties);

  private:
    bool valid_{true};

    icd::EnvironmentHelper environment_;

    icd::Logger logger_;

    GlobalDisplayManager display_manager_;

    void* vk_loader_module_{nullptr};
    PFN_vkGetInstanceProcAddr vk_get_instance_proc_addr_{nullptr};
    DispatchTable vk_dispatch_table_{};

    std::vector<VkExtensionProperties> instance_extension_list_{};
    std::unordered_set<ExtensionNumber> instance_extensions_{};
    std::unordered_set<vk::ExtensionNumber> vk_instance_extensions_{};
};

extern Global ICD;

}  // namespace vksc
