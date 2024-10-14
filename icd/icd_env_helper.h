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
    std::mutex& EnvironmentOverrideMutex() const;

  private:
    VkDebugUtilsMessageSeverityFlagsEXT ParseLogSeverity();
    bool ParseRecyclePipelineMemory();
    const std::unordered_map<const char*, std::string> InitPrivateEnvs();
    const std::unordered_map<const char*, std::string> InitLayeredEnvs();
    const std::vector<const char*>& LoaderEnvVars() const;

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
    std::lock_guard<std::mutex> lock_;
    const EnvironmentHelper& env_;
};

}  // namespace icd
