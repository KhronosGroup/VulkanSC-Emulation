/*
 * Copyright (c) 2024 The Khronos Group Inc.
 * Copyright (c) 2024 RasterGrid Kft.
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#pragma once

#include <vulkan/vulkan.h>

#include <string>
#include <vector>
#include <unordered_map>
#include <mutex>

namespace icd {

class EnvironmentHelper {
  public:
    EnvironmentHelper();

    VkDebugUtilsMessageSeverityFlagsEXT LogSeverityEnv() const { return log_severity_; }
    bool RecyclePipelineMemory() const { return recycle_pipeline_memory_; }
    const std::unordered_map<const char*, std::string> PrivateEnvs() const { return private_envs_; }
    const std::unordered_map<const char*, std::string> LayeredEnvs() const { return layered_envs_; }

  private:
    // Loader environment variables that may conflict with Vulkan vs Vulkan SC loader configuration
    // These environment variables will only affect the Vulkan SC loader and the emulation ICD will
    // clear these when calling down the Vulkan loader in order to avoid the conflicts.
    // If the user needs to configure any of these environment variables to be used by the Vulkan
    // loader instead of the Vulkan SC loader (e.g. for development purposes), then the user should
    // set an environment variable with the VKSC_EMU_ prefix instead (e.g. VKSC_EMU_VK_LAYER_PATH).
    inline static const std::vector<const char*> s_loader_env_vars = {"VK_ICD_FILENAMES",
                                                                      "VK_DRIVER_FILES",
                                                                      "VK_LAYER_PATH",
                                                                      "VK_ADD_DRIVER_FILES",
                                                                      "VK_ADD_LAYER_PATH",
                                                                      "VK_LOADER_LAYERS_ENABLE",
                                                                      "VK_LOADER_LAYERS_DISABLE",
                                                                      "VK_LOADER_LAYERS_ALLOW",
                                                                      "VK_LOADER_DRIVERS_SELECT",
                                                                      "VK_LOADER_DRIVERS_DISABLE",
                                                                      "VK_INSTANCE_LAYERS",
                                                                      "VK_LOADER_DEVICE_SELECT",
                                                                      "VK_LOADER_DISABLE_INST_EXT_FILTER",
                                                                      "VK_LOADER_DISABLE_SELECT"};

    VkDebugUtilsMessageSeverityFlagsEXT ParseLogSeverity();
    bool ParseRecyclePipelineMemory();
    const std::unordered_map<const char*, std::string> InitPrivateEnvs();
    const std::unordered_map<const char*, std::string> InitLayeredEnvs();

    const VkDebugUtilsMessageSeverityFlagsEXT log_severity_;
    const bool recycle_pipeline_memory_;
    const std::unordered_map<const char*, std::string> private_envs_;
    const std::unordered_map<const char*, std::string> layered_envs_;
};

class EnvironmentOverride {
  public:
    EnvironmentOverride(const EnvironmentHelper& env);
    ~EnvironmentOverride();

  private:
    inline static std::mutex mutex_;
    std::lock_guard<std::mutex> lock_;
    const EnvironmentHelper& env_;
};

}  // namespace icd
