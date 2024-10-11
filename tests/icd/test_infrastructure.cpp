/*
 * Copyright (c) 2024 The Khronos Group Inc.
 * Copyright (c) 2024 RasterGrid Kft.
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#include "icd_test_framework.h"

#include <algorithm>
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

        static VkMockObject<VkInstance> kPlaceholderInstance{};
        *pInstance = kPlaceholderInstance;
        return VK_SUCCESS;
    };

    InitInstance();

    EXPECT_TRUE(vkmock_create_instance_called);
}

TEST_F(InfrastructureTest, DeviceFiltering) {
    VkMockObject<VkPhysicalDevice> kPhysicalDeviceVulkan11{};
    VkMockObject<VkPhysicalDevice> kPhysicalDeviceVulkan12{};
    VkMockObject<VkPhysicalDevice> kPhysicalDeviceVulkan12NoMemoryModel{};
    VkMockObject<VkPhysicalDevice> kPhysicalDeviceVulkan13{};
    VkMockObject<VkPhysicalDevice> kPhysicalDeviceVulkan13NoMemoryModel{};

    vkmock::EnumeratePhysicalDevices = [&](auto instance, auto pPhysicalDeviceCount, auto pPhysicalDevices) {
        static const std::vector<VkPhysicalDevice> physical_devices = {
            kPhysicalDeviceVulkan11, kPhysicalDeviceVulkan12, kPhysicalDeviceVulkan12NoMemoryModel, kPhysicalDeviceVulkan13,
            kPhysicalDeviceVulkan13NoMemoryModel};

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
    vkmock::GetPhysicalDeviceProperties = [&](auto physicalDevice, auto pProperties) {
        if (physicalDevice == kPhysicalDeviceVulkan11) {
            pProperties->apiVersion = VK_API_VERSION_1_1;
        } else if (physicalDevice == kPhysicalDeviceVulkan12 || physicalDevice == kPhysicalDeviceVulkan12NoMemoryModel) {
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
                (physicalDevice == kPhysicalDeviceVulkan12 || physicalDevice == kPhysicalDeviceVulkan13) ? VK_TRUE : VK_FALSE;
        }
    };

    VkInstance instance = InitInstance();

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
    vkmock::CreateDevice = [&](auto physicalDevice, auto pCreateInfo, auto pAllocator, auto pDevice) {
        parent_of_device = physicalDevice;
        static VkMockObject<VkDevice> kPlaceholderDevices[2] = {};
        *pDevice = (physicalDevice == kPhysicalDeviceVulkan12) ? kPlaceholderDevices[0] : kPlaceholderDevices[1];
        return VK_SUCCESS;
    };

    auto object_reservation = vku::InitStruct<VkDeviceObjectReservationCreateInfo>();
    auto vksc10_features = vku::InitStruct<VkPhysicalDeviceVulkanSC10Features>(&object_reservation);

    float queue_priority = 1.f;
    auto queue_info = vku::InitStruct<VkDeviceQueueCreateInfo>();
    queue_info.queueCount = 1;
    queue_info.pQueuePriorities = &queue_priority;

    auto create_info = vku::InitStruct<VkDeviceCreateInfo>(&vksc10_features);
    create_info.queueCreateInfoCount = 1;
    create_info.pQueueCreateInfos = &queue_info;

    VkDevice device = VK_NULL_HANDLE;

    EXPECT_EQ(vksc::CreateDevice(physdevs[0], &create_info, nullptr, &device), VK_SUCCESS);
    EXPECT_EQ(parent_of_device, kPhysicalDeviceVulkan12.handle());
    vksc::DestroyDevice(device, nullptr);

    EXPECT_EQ(vksc::CreateDevice(physdevs[1], &create_info, nullptr, &device), VK_SUCCESS);
    EXPECT_EQ(parent_of_device, kPhysicalDeviceVulkan13.handle());
    vksc::DestroyDevice(device, nullptr);
}

TEST_F(InfrastructureTest, ExtensionFiltering) {
    vkmock::EnumerateDeviceExtensionProperties = [&](auto physicalDevice, auto pLayerName, auto pPropertyCount, auto pProperties) {
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

    VkInstance instance = InitInstance();

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

    auto app_info = vku::InitStruct<VkApplicationInfo>();
    app_info.pApplicationName = "Vulkan SC Emulation ICD Test";
    app_info.applicationVersion = 1;
    app_info.apiVersion = VKSC_API_VERSION_1_0;

    const char* debug_utils_ext = "VK_EXT_debug_utils";
    auto create_info = vku::InitStruct<VkInstanceCreateInfo>(&messenger_info2);
    create_info.pApplicationInfo = &app_info;
    create_info.enabledExtensionCount = 1;
    create_info.ppEnabledExtensionNames = &debug_utils_ext;

    VkInstance instance = VK_NULL_HANDLE;
    EXPECT_EQ(vksc::CreateInstance(&create_info, nullptr, &instance), VK_SUCCESS);

    // Create a device
    vksc::LoadInstanceEntryPoints(instance);

    uint32_t count = 1;
    VkPhysicalDevice physdev = VK_NULL_HANDLE;
    vksc::EnumeratePhysicalDevices(instance, &count, &physdev);

    auto object_reservation = vku::InitStruct<VkDeviceObjectReservationCreateInfo>();
    auto vksc10_features = vku::InitStruct<VkPhysicalDeviceVulkanSC10Features>(&object_reservation);

    float queue_priority = 1.f;
    auto queue_info = vku::InitStruct<VkDeviceQueueCreateInfo>();
    queue_info.queueCount = 1;
    queue_info.pQueuePriorities = &queue_priority;

    auto device_ci = vku::InitStruct<VkDeviceCreateInfo>(&vksc10_features);
    device_ci.queueCreateInfoCount = 1;
    device_ci.pQueueCreateInfos = &queue_info;

    VkDevice device = VK_NULL_HANDLE;
    EXPECT_EQ(vksc::CreateDevice(physdev, &device_ci, nullptr, &device), VK_SUCCESS);

    // Force out an error which should be reported on both messengers
    auto pipeline_cache_ci = vku::InitStruct<VkPipelineCacheCreateInfo>();
    VkPipelineCache pipeline_cache = VK_NULL_HANDLE;
    EXPECT_EQ(vksc::CreatePipelineCache(device, &pipeline_cache_ci, nullptr, &pipeline_cache),
              VK_ERROR_INVALID_PIPELINE_CACHE_DATA);
    EXPECT_EQ(callback_data.call_count, 2);

    // Create an additional messenger
    vkmock::CreateDebugUtilsMessengerEXT = [](auto, auto, auto, auto) { return VK_SUCCESS; };
    VkDebugUtilsMessengerEXT messenger = VK_NULL_HANDLE;
    EXPECT_EQ(vksc::CreateDebugUtilsMessengerEXT(instance, &messenger_info, nullptr, &messenger), VK_SUCCESS);

    // Now we should have 3 more calls to the messenger if forcing out the same error
    EXPECT_EQ(vksc::CreatePipelineCache(device, &pipeline_cache_ci, nullptr, &pipeline_cache),
              VK_ERROR_INVALID_PIPELINE_CACHE_DATA);
    EXPECT_EQ(callback_data.call_count, 5);

    vkmock::DestroyDebugUtilsMessengerEXT = [](auto, auto, auto) {};
    vksc::DestroyDebugUtilsMessengerEXT(instance, messenger, nullptr);

    // After deleting the additional messenger, once again, only 2 calls are triggered
    EXPECT_EQ(vksc::CreatePipelineCache(device, &pipeline_cache_ci, nullptr, &pipeline_cache),
              VK_ERROR_INVALID_PIPELINE_CACHE_DATA);
    EXPECT_EQ(callback_data.call_count, 7);

    vksc::DestroyDevice(device, nullptr);
    vksc::DestroyInstance(instance, nullptr);
}
