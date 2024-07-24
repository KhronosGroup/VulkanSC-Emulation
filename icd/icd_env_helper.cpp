/*
 * Copyright (c) 2024 The Khronos Group Inc.
 * Copyright (c) 2024 RasterGrid Kft.
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#include "icd_env_helper.h"

#include <stdlib.h>
#include <sstream>

#ifdef _WIN32
#include <Windows.h>
#endif  // _WIN32

namespace icd {

EnvironmentHelper::EnvironmentHelper()
    : log_severity_(ParseLogSeverity()),
      recycle_pipeline_memory_(ParseRecyclePipelineMemory()),
      private_envs_(InitPrivateEnvs()),
      layered_envs_(InitLayeredEnvs()) {}

VkDebugUtilsMessageSeverityFlagsEXT EnvironmentHelper::ParseLogSeverity() {
    VkDebugUtilsMessageSeverityFlagsEXT log_severity = 0;
    auto env_var_value = getenv("VKSC_EMULATION_DEBUG");
    if (env_var_value != nullptr) {
        std::stringstream ss(env_var_value);
        std::string str;
        while (getline(ss, str, ',')) {
            if (str == "error") {
                log_severity = VK_DEBUG_UTILS_MESSAGE_SEVERITY_ERROR_BIT_EXT;
            } else if (str == "warn") {
                log_severity = VK_DEBUG_UTILS_MESSAGE_SEVERITY_WARNING_BIT_EXT;
            } else if (str == "info") {
                log_severity = VK_DEBUG_UTILS_MESSAGE_SEVERITY_INFO_BIT_EXT;
            } else if (str == "debug") {
                log_severity = VK_DEBUG_UTILS_MESSAGE_SEVERITY_VERBOSE_BIT_EXT;
            }
        }
    }
    return log_severity;
}

bool EnvironmentHelper::ParseRecyclePipelineMemory() {
    auto env_var_value = getenv("VKSC_EMULATION_RECYCLE_PIPELINE_MEMORY");
    if (env_var_value != nullptr) {
        std::string_view value(env_var_value);
        if (value == "1") return false;
    }
    // Default to recycling
    return true;
}

const std::unordered_map<const char*, std::string> EnvironmentHelper::InitPrivateEnvs() {
    std::unordered_map<const char*, std::string> private_envs;
    for (auto loader_env_var : s_loader_env_vars) {
        auto env_var_value = getenv(loader_env_var);
        if (env_var_value != nullptr) {
            private_envs.emplace(loader_env_var, env_var_value);
        }
    }
    return private_envs;
}

const std::unordered_map<const char*, std::string> EnvironmentHelper::InitLayeredEnvs() {
    std::unordered_map<const char*, std::string> layered_envs;
    for (auto loader_env_var : s_loader_env_vars) {
        auto layered_env_var = std::string("VKSC_EMU_") + loader_env_var;
        auto env_var_value = getenv(layered_env_var.c_str());
        if (env_var_value != nullptr) {
            layered_envs.emplace(loader_env_var, env_var_value);
        }
    }
    return layered_envs;
}

EnvironmentOverride::EnvironmentOverride(const EnvironmentHelper& env) : lock_(mutex_), env_(env) {
    for (const auto& it : env_.PrivateEnvs()) {
#ifdef _WIN32
        _putenv_s(it.first, "");
#else
        unsetenv(it.first);
#endif
    }
    for (const auto& it : env_.LayeredEnvs()) {
#ifdef _WIN32
        _putenv_s(it.first, it.second.c_str());
#else
        setenv(it.first, it.second.c_str(), 1);
#endif
    }
}

EnvironmentOverride::~EnvironmentOverride() {
    for (const auto& it : env_.LayeredEnvs()) {
#ifdef _WIN32
        _putenv_s(it.first, "");
#else
        unsetenv(it.first);
#endif
    }
    for (const auto& it : env_.PrivateEnvs()) {
#ifdef _WIN32
        _putenv_s(it.first, it.second.c_str());
#else
        setenv(it.first, it.second.c_str(), 1);
#endif
    }
}

}  // namespace icd
