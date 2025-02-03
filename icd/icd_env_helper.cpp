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
      emulated_display_count_(ParseEmulatedDisplayCount()),
      emulated_display_config_(getenv("VKSC_EMULATION_DISPLAY_CONFIG")),
      private_envs_(InitPrivateEnvs()),
      layered_envs_(InitLayeredEnvs()) {}

std::mutex& EnvironmentHelper::EnvironmentOverrideMutex() const {
    // We have to declare this mutex as a plain-old static variable because if declared as an inline
    // static variable in EnvironmentOverride then compilers generate code such that the mutex is
    // only initialized the first time the shared library is loaded and it is not initialized if
    // the shared library is later unloaded and reloaded which could cause soft-hangs
    static std::mutex s_environment_override_mutex{};
    return s_environment_override_mutex;
}

const std::vector<const char*>& EnvironmentHelper::LoaderEnvVars() const {
    // Loader environment variables that may conflict with Vulkan vs Vulkan SC loader configuration
    // These environment variables will only affect the Vulkan SC loader and the emulation ICD will
    // clear these when calling down the Vulkan loader in order to avoid the conflicts.
    // If the user needs to configure any of these environment variables to be used by the Vulkan
    // loader instead of the Vulkan SC loader (e.g. for development purposes), then the user should
    // set an environment variable with the VKSC_EMU_ prefix instead (e.g. VKSC_EMU_VK_LAYER_PATH).
    static const std::vector<const char*> s_loader_env_vars = {"VK_ICD_FILENAMES",
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
    return s_loader_env_vars;
}

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

uint32_t EnvironmentHelper::ParseEmulatedDisplayCount() {
    // Default is to emulate 4 displays
    uint32_t value = 4;
    auto env_var_value = getenv("VKSC_EMULATION_DISPLAYS");
    if (env_var_value != nullptr) {
        value = atoi(env_var_value);
    }
    return value;
}

const std::unordered_map<const char*, std::string> EnvironmentHelper::InitPrivateEnvs() {
    std::unordered_map<const char*, std::string> private_envs;
    for (auto loader_env_var : LoaderEnvVars()) {
        auto env_var_value = getenv(loader_env_var);
        if (env_var_value != nullptr) {
            private_envs.emplace(loader_env_var, env_var_value);
        }
    }
    return private_envs;
}

const std::unordered_map<const char*, std::string> EnvironmentHelper::InitLayeredEnvs() {
    std::unordered_map<const char*, std::string> layered_envs;
    for (auto loader_env_var : LoaderEnvVars()) {
        auto layered_env_var = std::string("VKSC_EMU_") + loader_env_var;
        auto env_var_value = getenv(layered_env_var.c_str());
        if (env_var_value != nullptr) {
            layered_envs.emplace(loader_env_var, env_var_value);
        }
    }
    return layered_envs;
}

EnvironmentOverride::EnvironmentOverride(const EnvironmentHelper& env) : lock_(env.EnvironmentOverrideMutex()), env_(env) {
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
