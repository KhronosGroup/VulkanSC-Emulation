/*
 * Copyright (c) 2024 The Khronos Group Inc.
 * Copyright (c) 2024 RasterGrid Kft.
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#include "icd_test_framework.h"

#include <string>
#include <vector>
#include <unordered_map>
#include <stdlib.h>

class InfrastructureTest : public IcdTest {};

TEST_F(InfrastructureTest, EnvironmentVariables) {
    const std::vector<std::string> loader_env_vars = {"VK_ICD_FILENAMES",
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

    std::unordered_map<std::string, std::string> env_vars;

    // Capture all Vulkan SC loader and Vulkan loader relay environment variables
    for (const auto& env_var_name : loader_env_vars) {
        auto vksc_emu_env_var_name = std::string("VKSC_EMU_") + env_var_name;

        auto value = getenv(env_var_name.c_str());
        if (value == nullptr) {
            env_vars[env_var_name] = "";
        } else {
            env_vars[env_var_name] = value;
        }

        auto vksc_emu_value = getenv(vksc_emu_env_var_name.c_str());
        if (vksc_emu_value == nullptr) {
            env_vars[vksc_emu_env_var_name] = "";
        } else {
            env_vars[vksc_emu_env_var_name] = vksc_emu_value;
        }
    }

    bool vkmock_create_instance_called = false;

    vkmock::CreateInstance = [&](auto pCreateInfo, auto pAllocator, auto pInstance) {
        vkmock_create_instance_called = true;

        // If running without loaders, make sure that the environment variables
        // correctly propagate down the stack
        if (!Framework::WithVulkanLoader() && !Framework::WithVulkanSCLoader()) {
            for (const auto& env_var_name : loader_env_vars) {
                auto vksc_emu_env_var_name = std::string("VKSC_EMU_") + env_var_name;

                // Expect VK_* to have the value of VKSC_EMU_VK_*
                const char* value = getenv(env_var_name.c_str());
                if (value == nullptr) {
                    value = "";
                }
                EXPECT_STREQ(env_vars[vksc_emu_env_var_name].c_str(), value) << env_var_name << " has incorrect value";

                // Expect VKSC_EMU_VK_* to also have the value of VKSC_EMU_VK_*
                const char* vksc_emu_value = getenv(vksc_emu_env_var_name.c_str());
                if (vksc_emu_value == nullptr) {
                    vksc_emu_value = "";
                }
                EXPECT_STREQ(env_vars[vksc_emu_env_var_name].c_str(), vksc_emu_value)
                    << vksc_emu_env_var_name << " has incorrect value";
            }
        }

        *pInstance = (VkInstance)0xDEADBEEF;
        return VK_SUCCESS;
    };

    InitInstance();

    EXPECT_TRUE(vkmock_create_instance_called);
}
