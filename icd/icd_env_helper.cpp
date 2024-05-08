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

EnvironmentHelper::EnvironmentHelper() : log_severity_(ParseLogSeverity()), private_envs_(InitPrivateEnvs()) {}

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

EnvironmentOverride::EnvironmentOverride(const EnvironmentHelper& env) : env_(env) {
    for (const auto& it : env_.PrivateEnvs()) {
#ifdef _WIN32
        _putenv_s(it.first, "");
#else
        unsetenv(it.first);
#endif
    }
}

EnvironmentOverride::~EnvironmentOverride() {
    for (const auto& it : env_.PrivateEnvs()) {
#ifdef _WIN32
        _putenv_s(it.first, it.second.c_str());
#else
        setenv(it.first, it.second.c_str(), 1);
#endif
    }
}

}  // namespace icd
