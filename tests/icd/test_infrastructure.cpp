/*
 * Copyright (c) 2024-2025 The Khronos Group Inc.
 * Copyright (c) 2024-2025 RasterGrid Kft.
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#include "icd_test_framework.h"

#include <vulkan/vk_layer.h>

#include <algorithm>
#include <string>
#include <vector>
#include <unordered_map>
#include <initializer_list>
#include <stdlib.h>

class ScopedEnvVars {
  public:
    ScopedEnvVars(std::initializer_list<std::unordered_map<std::string, std::string>::value_type> init) : old_env_{} {
        for (const auto& env_var : init) {
            auto value = getenv(env_var.first.c_str());
            old_env_[env_var.first] = value != nullptr ? value : "";
        }

        for (const auto& env_var : init) {
#ifdef _WIN32
            _putenv_s(env_var.first.c_str(), env_var.second.c_str());
#else
            setenv(env_var.first.c_str(), env_var.second.c_str(), 1);
#endif
        }
    }
    ~ScopedEnvVars() {
        for (const auto& env_var : old_env_) {
            if (env_var.second.empty()) {
#ifdef _WIN32
                _putenv_s(env_var.first.c_str(), "");
#else
                unsetenv(env_var.first.c_str());
#endif
            } else {
#ifdef _WIN32
                _putenv_s(env_var.first.c_str(), env_var.second.c_str());
#else
                setenv(env_var.first.c_str(), env_var.second.c_str(), 1);
#endif
            }
        }
    }

  private:
    std::unordered_map<std::string, std::string> old_env_;
};

class InfrastructureTest : public IcdTest {};

TEST_F(InfrastructureTest, EnvironmentVariables) {
    TEST_DESCRIPTION("Test handling and translation of loader environment variables");

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
                                                      "VK_IMPLICIT_LAYER_PATH",
                                                      "VK_ADD_IMPLICIT_LAYER_PATH",
                                                      "VK_LOADER_DEVICE_ID_FILTER",
                                                      "VK_LOADER_VENDOR_ID_FILTER",
                                                      "VK_LOADER_DRIVER_ID_FILTER",
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

    vkmock::CreateInstance = [&](auto, auto, auto pInstance) {
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

        static VkMockObject<VkInstance> mock_instance{};
        *pInstance = mock_instance;
        return VK_SUCCESS;
    };

    InitInstance();

    EXPECT_TRUE(vkmock_create_instance_called);
}

TEST_F(InfrastructureTest, CreateInstanceLayerNotPresent) {
    TEST_DESCRIPTION("Test that no layers can be used at the ICD level");

    const char* placeholder_layer_name = "VK_LAYER_placeholder";

    auto create_info = GetDefaultInstanceCreateInfo();
    create_info.enabledLayerCount = 1;
    create_info.ppEnabledLayerNames = &placeholder_layer_name;

    VkInstance instance = VK_NULL_HANDLE;
    EXPECT_EQ(vksc::CreateInstance(&create_info, nullptr, &instance), VK_ERROR_LAYER_NOT_PRESENT);
}

TEST_F(InfrastructureTest, CreateInstanceExtensionNotPresent) {
    TEST_DESCRIPTION("Test that create instance fails with unsupported extensions");

    const char* placeholder_ext_name = "VK_EXT_unsupported_extension";

    auto create_info = GetDefaultInstanceCreateInfo();
    create_info.enabledExtensionCount = 1;
    create_info.ppEnabledExtensionNames = &placeholder_ext_name;

    VkInstance instance = VK_NULL_HANDLE;
    EXPECT_EQ(vksc::CreateInstance(&create_info, nullptr, &instance), VK_ERROR_EXTENSION_NOT_PRESENT);
}

TEST_F(InfrastructureTest, CreateDeviceExtensionNotPresent) {
    TEST_DESCRIPTION("Test that create instance fails with unsupported extensions");

    InitInstance();

    const char* placeholder_ext_name = "VK_EXT_unsupported_extension";

    auto create_info = GetDefaultDeviceCreateInfo();
    create_info.enabledExtensionCount = 1;
    create_info.ppEnabledExtensionNames = &placeholder_ext_name;

    VkDevice device = VK_NULL_HANDLE;
    EXPECT_EQ(vksc::CreateDevice(GetPhysicalDevice(), &create_info, nullptr, &device), VK_ERROR_EXTENSION_NOT_PRESENT);
}

TEST_F(InfrastructureTest, DeviceLoaderFiltering) {
    TEST_DESCRIPTION("Test filtering of devices and device groups using loader env vars");

    if (!Framework::WithVulkanLoader() || !Framework::WithVulkanSCLoader()) {
        GTEST_SKIP() << "Test requries both the Vulkan and SC loaders";
    }

    VkMockObject<VkPhysicalDevice> mock_physdev_dev1{}, mock_physdev_dev2{}, mock_physdev_dev3{}, mock_physdev_dev4{},
        mock_physdev_dev5{};

    vkmock::EnumeratePhysicalDevices = [&](auto, auto pPhysicalDeviceCount, auto pPhysicalDevices) {
        static const std::vector<VkPhysicalDevice> physical_devices = {mock_physdev_dev1, mock_physdev_dev2, mock_physdev_dev3,
                                                                       mock_physdev_dev4, mock_physdev_dev5};

        VkResult result = VK_SUCCESS;
        if (pPhysicalDevices == nullptr) {
            *pPhysicalDeviceCount = static_cast<uint32_t>(physical_devices.size());
        } else {
            if (*pPhysicalDeviceCount < physical_devices.size()) {
                result = VK_INCOMPLETE;
            }
            *pPhysicalDeviceCount = std::min(*pPhysicalDeviceCount, static_cast<uint32_t>(physical_devices.size()));
            for (uint32_t i = 0; i < *pPhysicalDeviceCount; ++i) {
                pPhysicalDevices[i] = physical_devices[i];
            }
        }
        return result;
    };
    // Setup physical device properties as such that the first and last device survive filtering only
    vkmock::GetPhysicalDeviceProperties = [&](auto physicalDevice, auto pProperties) {
        pProperties->apiVersion = VK_API_VERSION_1_2;
        if (physicalDevice == mock_physdev_dev1) {
            strcpy(pProperties->deviceName, "Mock device 1");
            pProperties->deviceID = 12345;
            pProperties->vendorID = 23456;
        } else if (physicalDevice == mock_physdev_dev2) {
            strcpy(pProperties->deviceName, "Mock device 2");
            pProperties->deviceID = 34567;  // Non-matching value
            pProperties->vendorID = 23456;
        } else if (physicalDevice == mock_physdev_dev3) {
            strcpy(pProperties->deviceName, "Mock device 3");
            pProperties->deviceID = 12345;
            pProperties->vendorID = 34567;  // Non-matching value
        } else if (physicalDevice == mock_physdev_dev4) {
            strcpy(pProperties->deviceName, "Mock device 4");
            pProperties->deviceID = 12345;
            pProperties->vendorID = 23456;
        } else if (physicalDevice == mock_physdev_dev5) {
            strcpy(pProperties->deviceName, "Mock device 5");
            pProperties->deviceID = 12345;
            pProperties->vendorID = 23456;
        } else {
            assert(false);
        }
    };
    vkmock::GetPhysicalDeviceProperties2 = [&](auto physicalDevice, auto pProperties2) {
        vkmock::GetPhysicalDeviceProperties(physicalDevice, &pProperties2->properties);
        auto physical_device_driver_properties = vku::FindStructInPNextChain<VkPhysicalDeviceDriverProperties>(pProperties2->pNext);
        if (physical_device_driver_properties) {
            if (physicalDevice == mock_physdev_dev1) {
                physical_device_driver_properties->driverID = VK_DRIVER_ID_AMD_PROPRIETARY;
            } else if (physicalDevice == mock_physdev_dev2) {
                physical_device_driver_properties->driverID = VK_DRIVER_ID_AMD_PROPRIETARY;
            } else if (physicalDevice == mock_physdev_dev3) {
                physical_device_driver_properties->driverID = VK_DRIVER_ID_AMD_PROPRIETARY;
            } else if (physicalDevice == mock_physdev_dev4) {
                physical_device_driver_properties->driverID = VK_DRIVER_ID_AMD_OPEN_SOURCE;  // Non-matching value
            } else if (physicalDevice == mock_physdev_dev5) {
                physical_device_driver_properties->driverID = VK_DRIVER_ID_AMD_PROPRIETARY;
            } else {
                assert(false);
            }
        }
    };
    vkmock::GetPhysicalDeviceFeatures2 = [&](auto physicalDevice, auto pFeatures) {
        vkmock::GetPhysicalDeviceFeatures(physicalDevice, &pFeatures->features);
        auto vulkan_memory_model_features =
            vku::FindStructInPNextChain<VkPhysicalDeviceVulkanMemoryModelFeatures>(pFeatures->pNext);
        if (vulkan_memory_model_features) {
            vulkan_memory_model_features->vulkanMemoryModel = VK_TRUE;
        }
    };

    ScopedEnvVars env{{"VKSC_EMU_VK_LOADER_DEVICE_ID_FILTER", "12345"},
                      {"VKSC_EMU_VK_LOADER_VENDOR_ID_FILTER", "23456"},
                      {"VKSC_EMU_VK_LOADER_DRIVER_ID_FILTER", "1"},
                      {"VK_LOADER_VENDOR_ID_FILTER", "0x10000"},
                      {"VK_LOADER_DRIVER_ID_FILTER", "27"}};
    auto instance = InitInstance();

    uint32_t count = 0;
    EXPECT_EQ(vksc::EnumeratePhysicalDevices(instance, &count, nullptr), VK_SUCCESS);
    EXPECT_EQ(count, 2);
    std::vector<VkPhysicalDevice> physdevs(count);
    EXPECT_EQ(vksc::EnumeratePhysicalDevices(instance, &count, physdevs.data()), VK_SUCCESS);
    EXPECT_EQ(count, 2);
    VkPhysicalDeviceProperties props;
    vksc::GetPhysicalDeviceProperties(physdevs[0], &props);
    EXPECT_STREQ(props.deviceName, "Mock device 1") << "Unexpected device filtering";
    vksc::GetPhysicalDeviceProperties(physdevs[1], &props);
    EXPECT_STREQ(props.deviceName, "Mock device 5") << "Unexpected device filtering";
}

TEST_F(InfrastructureTest, DeviceFiltering) {
    TEST_DESCRIPTION("Test filtering of devices and device groups");

    VkMockObject<VkPhysicalDevice> mock_physdev_vulkan11{};
    VkMockObject<VkPhysicalDevice> mock_physdev_vulkan12{};
    VkMockObject<VkPhysicalDevice> mock_physdev_vulkan12_no_memory_model{};
    VkMockObject<VkPhysicalDevice> mock_physdev_vulkan13{};
    VkMockObject<VkPhysicalDevice> mock_physdev_vulkan13_no_memory_model{};

    vkmock::EnumeratePhysicalDevices = [&](auto, auto pPhysicalDeviceCount, auto pPhysicalDevices) {
        static const std::vector<VkPhysicalDevice> physical_devices = {mock_physdev_vulkan11, mock_physdev_vulkan12,
                                                                       mock_physdev_vulkan12_no_memory_model, mock_physdev_vulkan13,
                                                                       mock_physdev_vulkan13_no_memory_model};

        VkResult result = VK_SUCCESS;
        if (pPhysicalDevices == nullptr) {
            *pPhysicalDeviceCount = static_cast<uint32_t>(physical_devices.size());
        } else {
            if (*pPhysicalDeviceCount < physical_devices.size()) {
                result = VK_INCOMPLETE;
            }
            *pPhysicalDeviceCount = std::min(*pPhysicalDeviceCount, static_cast<uint32_t>(physical_devices.size()));
            for (uint32_t i = 0; i < *pPhysicalDeviceCount; ++i) {
                pPhysicalDevices[i] = physical_devices[i];
            }
        }
        return result;
    };
    vkmock::EnumeratePhysicalDeviceGroups = [&](auto, auto pPhysicalDeviceGroupCount, auto pPhysicalDeviceGroupProperties) {
        static const std::vector<std::vector<VkPhysicalDevice>> physical_device_groups = {
            {mock_physdev_vulkan11, mock_physdev_vulkan12_no_memory_model, mock_physdev_vulkan13_no_memory_model},
            {mock_physdev_vulkan12, mock_physdev_vulkan13}};
        VkResult result = VK_SUCCESS;
        if (pPhysicalDeviceGroupProperties == nullptr) {
            *pPhysicalDeviceGroupCount = static_cast<uint32_t>(physical_device_groups.size());
        } else {
            if (*pPhysicalDeviceGroupCount < physical_device_groups.size()) {
                result = VK_INCOMPLETE;
            }
            *pPhysicalDeviceGroupCount = std::min(*pPhysicalDeviceGroupCount, static_cast<uint32_t>(physical_device_groups.size()));
            for (uint32_t i = 0; i < *pPhysicalDeviceGroupCount; ++i) {
                pPhysicalDeviceGroupProperties[i].physicalDeviceCount = static_cast<uint32_t>(physical_device_groups[i].size());
                for (size_t j = 0; j < physical_device_groups[i].size(); ++j) {
                    pPhysicalDeviceGroupProperties[i].physicalDevices[j] = physical_device_groups[i][j];
                }
            }
        }
        return result;
    };
    vkmock::GetPhysicalDeviceProperties = [&](auto physicalDevice, auto pProperties) {
        if (physicalDevice == mock_physdev_vulkan11) {
            pProperties->apiVersion = VK_API_VERSION_1_1;
        } else if (physicalDevice == mock_physdev_vulkan12 || physicalDevice == mock_physdev_vulkan12_no_memory_model) {
            pProperties->apiVersion = VK_API_VERSION_1_2;
        } else {
            pProperties->apiVersion = VK_API_VERSION_1_3;
        }
    };
    vkmock::GetPhysicalDeviceFeatures2 = [&](auto physicalDevice, auto pFeatures) {
        vkmock::GetPhysicalDeviceFeatures(physicalDevice, &pFeatures->features);
        auto vulkan_memory_model_features =
            vku::FindStructInPNextChain<VkPhysicalDeviceVulkanMemoryModelFeatures>(pFeatures->pNext);
        if (vulkan_memory_model_features) {
            vulkan_memory_model_features->vulkanMemoryModel =
                (physicalDevice == mock_physdev_vulkan12 || physicalDevice == mock_physdev_vulkan13) ? VK_TRUE : VK_FALSE;
        }
    };

    auto instance = InitInstance();

    // Device filtering
    uint32_t count = 0;
    EXPECT_EQ(vksc::EnumeratePhysicalDevices(instance, &count, nullptr), VK_SUCCESS);
    EXPECT_EQ(count, 2);

    std::vector<VkPhysicalDevice> physdevs(10);
    EXPECT_EQ(vksc::EnumeratePhysicalDevices(instance, &count, physdevs.data()), VK_SUCCESS);
    EXPECT_EQ(count, 2);

    count = 4;
    EXPECT_EQ(vksc::EnumeratePhysicalDevices(instance, &count, physdevs.data()), VK_SUCCESS);
    EXPECT_EQ(count, 2);

    count = 1;
    EXPECT_EQ(vksc::EnumeratePhysicalDevices(instance, &count, physdevs.data()), VK_INCOMPLETE);
    EXPECT_EQ(count, 1);

    VkPhysicalDevice parent_of_device = VK_NULL_HANDLE;
    vkmock::CreateDevice = [&](auto physicalDevice, auto, auto, auto pDevice) {
        parent_of_device = physicalDevice;
        static VkMockObject<VkDevice> mock_devices[2] = {};
        *pDevice = (physicalDevice == mock_physdev_vulkan12) ? mock_devices[0] : mock_devices[1];
        return VK_SUCCESS;
    };

    auto create_info = GetDefaultDeviceCreateInfo();
    VkDevice device = VK_NULL_HANDLE;

    EXPECT_EQ(vksc::CreateDevice(physdevs[0], &create_info, nullptr, &device), VK_SUCCESS);
    EXPECT_EQ(parent_of_device, mock_physdev_vulkan12.handle());
    vksc::DestroyDevice(device, nullptr);

    EXPECT_EQ(vksc::CreateDevice(physdevs[1], &create_info, nullptr, &device), VK_SUCCESS);
    EXPECT_EQ(parent_of_device, mock_physdev_vulkan13.handle());
    vksc::DestroyDevice(device, nullptr);

    // Device group filtering
    vkmock::CreateDevice = [&](auto physicalDevice, auto pCreateInfo, auto, auto pDevice) {
        auto device_group_ci = vku::FindStructInPNextChain<VkDeviceGroupDeviceCreateInfo>(pCreateInfo->pNext);
        EXPECT_NE(device_group_ci, nullptr);
        if (device_group_ci != nullptr) {
            EXPECT_EQ(device_group_ci->physicalDeviceCount, 2);
            if (device_group_ci->physicalDeviceCount == 2) {
                EXPECT_EQ(device_group_ci->pPhysicalDevices[0], mock_physdev_vulkan12.handle());
                EXPECT_EQ(device_group_ci->pPhysicalDevices[1], mock_physdev_vulkan13.handle());
            }
        }
        static VkMockObject<VkDevice> mock_device{};
        *pDevice = mock_device;
        return VK_SUCCESS;
    };

    count = 0;
    EXPECT_EQ(vksc::EnumeratePhysicalDeviceGroups(instance, &count, nullptr), VK_SUCCESS);
    EXPECT_EQ(count, 1);

    auto device_group_props = vku::InitStruct<VkPhysicalDeviceGroupProperties>();
    EXPECT_EQ(vksc::EnumeratePhysicalDeviceGroups(instance, &count, &device_group_props), VK_SUCCESS);
    EXPECT_EQ(count, 1);
    EXPECT_EQ(device_group_props.physicalDeviceCount, 2);

    auto device_group_ci = vku::InitStruct<VkDeviceGroupDeviceCreateInfo>();
    device_group_ci.physicalDeviceCount = device_group_props.physicalDeviceCount;
    device_group_ci.pPhysicalDevices = &device_group_props.physicalDevices[0];
    create_info = GetDefaultDeviceCreateInfo(&device_group_ci);

    EXPECT_EQ(vksc::CreateDevice(physdevs[1], &create_info, nullptr, &device), VK_SUCCESS);
    vksc::DestroyDevice(device, nullptr);
}

TEST_F(InfrastructureTest, ExtensionFiltering) {
    TEST_DESCRIPTION("Test filtering of extensions");

    vkmock::EnumerateDeviceExtensionProperties = [&](auto, auto, auto pPropertyCount, auto pProperties) {
        static const std::vector<VkExtensionProperties> extensions = {
            {VK_EXT_DEBUG_MARKER_EXTENSION_NAME, VK_EXT_DEBUG_MARKER_SPEC_VERSION},
            {VK_KHR_SWAPCHAIN_EXTENSION_NAME, VK_KHR_SWAPCHAIN_SPEC_VERSION},
            {VK_EXT_SHADER_MODULE_IDENTIFIER_EXTENSION_NAME, VK_EXT_SHADER_MODULE_IDENTIFIER_SPEC_VERSION},
            {VK_EXT_SAMPLE_LOCATIONS_EXTENSION_NAME, VK_EXT_SAMPLE_LOCATIONS_SPEC_VERSION},
            {VK_EXT_SHADER_OBJECT_EXTENSION_NAME, VK_EXT_SHADER_OBJECT_SPEC_VERSION},
        };

        VkResult result = VK_SUCCESS;
        if (pProperties == nullptr) {
            *pPropertyCount = static_cast<uint32_t>(extensions.size());
        } else {
            if (*pPropertyCount < extensions.size()) {
                result = VK_INCOMPLETE;
            }
            *pPropertyCount = std::min(*pPropertyCount, static_cast<uint32_t>(extensions.size()));
            for (uint32_t i = 0; i < *pPropertyCount; ++i) {
                pProperties[i] = extensions[i];
            }
        }
        return result;
    };

    auto instance = InitInstance();

    uint32_t count = 1;
    VkPhysicalDevice physdev = VK_NULL_HANDLE;
    vksc::EnumeratePhysicalDevices(instance, &count, &physdev);

    EXPECT_EQ(vksc::EnumerateDeviceExtensionProperties(physdev, nullptr, &count, nullptr), VK_SUCCESS);
    EXPECT_EQ(count, 2);

    std::vector<VkExtensionProperties> props(10);
    EXPECT_EQ(vksc::EnumerateDeviceExtensionProperties(physdev, nullptr, &count, props.data()), VK_SUCCESS);
    EXPECT_EQ(count, 2);
    EXPECT_STREQ(props[0].extensionName, VK_KHR_SWAPCHAIN_EXTENSION_NAME);
    EXPECT_STREQ(props[1].extensionName, VK_EXT_SAMPLE_LOCATIONS_EXTENSION_NAME);

    count = 4;
    EXPECT_EQ(vksc::EnumerateDeviceExtensionProperties(physdev, nullptr, &count, props.data()), VK_SUCCESS);
    EXPECT_EQ(count, 2);
    EXPECT_STREQ(props[0].extensionName, VK_KHR_SWAPCHAIN_EXTENSION_NAME);
    EXPECT_STREQ(props[1].extensionName, VK_EXT_SAMPLE_LOCATIONS_EXTENSION_NAME);

    count = 1;
    EXPECT_EQ(vksc::EnumerateDeviceExtensionProperties(physdev, nullptr, &count, props.data()), VK_INCOMPLETE);
    EXPECT_EQ(count, 1);
    EXPECT_STREQ(props[0].extensionName, VK_KHR_SWAPCHAIN_EXTENSION_NAME);
}

TEST_F(InfrastructureTest, DebugUtilsMessenger) {
    TEST_DESCRIPTION("Test debug utils messengers");

    struct CallbackData {
        uint32_t call_count = 0;
        void Call() { call_count++; }
    } callback_data;

    PFN_vkDebugUtilsMessengerCallbackEXT user_callback =
        [](VkDebugUtilsMessageSeverityFlagBitsEXT severity, VkDebugUtilsMessageTypeFlagsEXT messageTypes,
           const VkDebugUtilsMessengerCallbackDataEXT* pCallbackData, void* pUserData) -> VkBool32 {
        reinterpret_cast<CallbackData*>(pUserData)->Call();
        return VK_FALSE;
    };

    // Set up two instance-create-time messengers
    auto messenger_info = vku::InitStruct<VkDebugUtilsMessengerCreateInfoEXT>();
    messenger_info.messageSeverity = VK_DEBUG_UTILS_MESSAGE_SEVERITY_ERROR_BIT_EXT;
    messenger_info.messageType = VK_DEBUG_UTILS_MESSAGE_TYPE_GENERAL_BIT_EXT;
    messenger_info.pfnUserCallback = user_callback;
    messenger_info.pUserData = &callback_data;

    auto messenger_info2 = messenger_info;
    messenger_info2.pNext = &messenger_info;

    EnableInstanceExtension(VK_EXT_DEBUG_UTILS_EXTENSION_NAME);
    auto instance_ci = GetDefaultInstanceCreateInfo(&messenger_info2);
    auto instance = InitInstance(&instance_ci);
    auto device = InitDevice();

    // Force out an error but as the instance-create-time messengers only apply to
    // vkCreateInstance and vkDestroyInstance, we should receive no callbacks
    auto pipeline_cache_ci = vku::InitStruct<VkPipelineCacheCreateInfo>();
    VkPipelineCache pipeline_cache = VK_NULL_HANDLE;
    EXPECT_EQ(vksc::CreatePipelineCache(device, &pipeline_cache_ci, nullptr, &pipeline_cache),
              VK_ERROR_INVALID_PIPELINE_CACHE_DATA);
    EXPECT_EQ(callback_data.call_count, 0);

    // Send a manual message (we still should receive no callbacks)
    auto cb_data = vku::InitStruct<VkDebugUtilsMessengerCallbackDataEXT>();
    vksc::SubmitDebugUtilsMessageEXT(instance, VK_DEBUG_UTILS_MESSAGE_SEVERITY_ERROR_BIT_EXT,
                                     VK_DEBUG_UTILS_MESSAGE_TYPE_GENERAL_BIT_EXT, &cb_data);
    EXPECT_EQ(callback_data.call_count, 0);

    // Create an additional messenger
    if (Framework::WithVulkanLoader()) {
        // The Vulkan loader exposes support for VK_EXT_debug_utils so we need mocks
        vkmock::CreateDebugUtilsMessengerEXT = [](auto, auto, auto, auto pMessenger) {
            static VkMockObject<VkDebugUtilsMessengerEXT> mock_messenger{};
            *pMessenger = mock_messenger;
            return VK_SUCCESS;
        };
        vkmock::DestroyDebugUtilsMessengerEXT = [](auto, auto, auto) {};
    }
    VkDebugUtilsMessengerEXT messenger = VK_NULL_HANDLE;
    EXPECT_EQ(vksc::CreateDebugUtilsMessengerEXT(instance, &messenger_info, nullptr, &messenger), VK_SUCCESS);

    // Now we should have 1 call to the messenger if forcing out the same error
    EXPECT_EQ(vksc::CreatePipelineCache(device, &pipeline_cache_ci, nullptr, &pipeline_cache),
              VK_ERROR_INVALID_PIPELINE_CACHE_DATA);
    EXPECT_EQ(callback_data.call_count, 1);

    // Create yet another messenger
    VkDebugUtilsMessengerEXT messenger2 = VK_NULL_HANDLE;
    EXPECT_EQ(vksc::CreateDebugUtilsMessengerEXT(instance, &messenger_info, nullptr, &messenger2), VK_SUCCESS);

    // Now we should have 2 calls to the messenger if forcing out the same error
    EXPECT_EQ(vksc::CreatePipelineCache(device, &pipeline_cache_ci, nullptr, &pipeline_cache),
              VK_ERROR_INVALID_PIPELINE_CACHE_DATA);
    EXPECT_EQ(callback_data.call_count, 3);

    // Destroy the first messenger
    vksc::DestroyDebugUtilsMessengerEXT(instance, messenger, nullptr);

    // Now we should have 1 call to the messenger if forcing out the same error
    EXPECT_EQ(vksc::CreatePipelineCache(device, &pipeline_cache_ci, nullptr, &pipeline_cache),
              VK_ERROR_INVALID_PIPELINE_CACHE_DATA);
    EXPECT_EQ(callback_data.call_count, 4);

    // We send a manual message forcing out another call
    vksc::SubmitDebugUtilsMessageEXT(instance, VK_DEBUG_UTILS_MESSAGE_SEVERITY_ERROR_BIT_EXT,
                                     VK_DEBUG_UTILS_MESSAGE_TYPE_GENERAL_BIT_EXT, &cb_data);
    EXPECT_EQ(callback_data.call_count, 5);

    // Destroy the second messenger
    vksc::DestroyDebugUtilsMessengerEXT(instance, messenger2, nullptr);

    // After deleting the additional messenger, once again, no calls are triggered
    EXPECT_EQ(vksc::CreatePipelineCache(device, &pipeline_cache_ci, nullptr, &pipeline_cache),
              VK_ERROR_INVALID_PIPELINE_CACHE_DATA);
    EXPECT_EQ(callback_data.call_count, 5);
}

TEST_F(InfrastructureTest, CreateDeviceStructChain) {
    TEST_DESCRIPTION("Test device create struct chain handling dealing with loader private structs");

    auto obj_res_info = vku::InitStruct<VkDeviceObjectReservationCreateInfo>();
    auto sc10_features = vku::InitStruct<VkPhysicalDeviceVulkanSC10Features>(&obj_res_info);
    auto features2 = vku::InitStruct<VkPhysicalDeviceFeatures2>(&sc10_features);
    auto fault_info = vku::InitStruct<VkFaultCallbackInfo>(&features2);
    VkLayerDeviceCreateInfo loader_info{VK_STRUCTURE_TYPE_LOADER_DEVICE_CREATE_INFO, &fault_info};
    auto create_info = vku::InitStruct<VkDeviceCreateInfo>(&loader_info);
    create_info.queueCreateInfoCount = 1;
    create_info.pQueueCreateInfos = [] {
        static float queue_priority = 1.f;
        static auto queue_info = vku::InitStruct<VkDeviceQueueCreateInfo>();
        queue_info.queueCount = 1;
        queue_info.pQueuePriorities = &queue_priority;
        return &queue_info;
    }();
    InitInstance();
    InitDevice(&create_info);
}
