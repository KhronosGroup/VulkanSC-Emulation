/*
 * Copyright (c) 2024 The Khronos Group Inc.
 * Copyright (c) 2024 RasterGrid Kft.
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#pragma once

#include "icd_log.h"
#include "icd_env_helper.h"

#include <vulkan/vulkan.h>

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

    const DispatchTable& VkDispatch() const { return vk_dispatch_table_; }
    PFN_vkGetInstanceProcAddr VkGetProcAddr() const { return vk_get_instance_proc_addr_; }

  private:
    icd::EnvironmentHelper environment_;

    icd::Logger logger_;

    void* vk_loader_module_{nullptr};
    PFN_vkGetInstanceProcAddr vk_get_instance_proc_addr_{nullptr};
    DispatchTable vk_dispatch_table_{};
};

extern Global ICD;

}  // namespace vksc
