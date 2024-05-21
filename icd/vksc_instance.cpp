/*
 * Copyright (c) 2024 The Khronos Group Inc.
 * Copyright (c) 2024 RasterGrid Kft.
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#include "vksc_instance.h"
#include "vksc_global.h"
#include "vksc_physical_device.h"

#include <unordered_set>

namespace vksc {

Instance::Instance(VkInstance instance, Global& global, const VkInstanceCreateInfo& create_info)
    : Dispatchable(),
      vk::Instance(instance, vk::DispatchTable(instance, global.VkGetProcAddr())),
      logger_(CreateLogger(create_info), VK_OBJECT_TYPE_INSTANCE, instance),
      physical_devices_() {}

void Instance::DestroyInstance(const VkAllocationCallbacks* pAllocator) {
    vk::Instance::DestroyInstance(pAllocator);
    Destroy();
}

icd::Logger Instance::CreateLogger(const VkInstanceCreateInfo& create_info) {
    std::vector<VkDebugUtilsMessengerCreateInfoEXT> messenger_list{};
    auto messenger_ci = vku::FindStructInPNextChain<VkDebugUtilsMessengerCreateInfoEXT>(create_info.pNext);
    while (messenger_ci != nullptr) {
        messenger_list.push_back(*messenger_ci);
        messenger_ci = vku::FindStructInPNextChain<VkDebugUtilsMessengerCreateInfoEXT>(messenger_ci->pNext);
    }
    return icd::Logger(vksc::ICD.Environment().LogSeverityEnv(), std::move(messenger_list));
}

VkResult Instance::GetCompatiblePhysicalDeviceList(std::vector<VkPhysicalDevice>& physical_devices) {
    // We have to filter out physical devices that do not support Vulkan 1.2 or the Vulkan Memory Model
    uint32_t physical_device_count = 0;
    VkResult result = vk::Instance::EnumeratePhysicalDevices(&physical_device_count, nullptr);
    if (result >= VK_SUCCESS) {
        physical_devices.reserve(physical_device_count);
        std::vector<VkPhysicalDevice> all_physical_devices(physical_device_count);
        result = vk::Instance::EnumeratePhysicalDevices(&physical_device_count, all_physical_devices.data());
        if (result >= VK_SUCCESS) {
            for (const auto physical_device : all_physical_devices) {
                vk::PhysicalDevice vk_obj(physical_device, VkDispatch());
                VkPhysicalDeviceProperties props{};
                vk_obj.GetPhysicalDeviceProperties(&props);
                if (props.apiVersion >= VK_API_VERSION_1_2) {
                    auto memory_model_features = vku::InitStruct<VkPhysicalDeviceVulkanMemoryModelFeatures>();
                    auto features = vku::InitStruct<VkPhysicalDeviceFeatures2>(&memory_model_features);
                    vk_obj.GetPhysicalDeviceFeatures2(&features);
                    if (memory_model_features.vulkanMemoryModel) {
                        physical_devices.push_back(physical_device);
                    }
                }
            }
        }
    }
    return result;
}

VkResult Instance::EnumeratePhysicalDevices(uint32_t* pPhysicalDeviceCount, VkPhysicalDevice* pPhysicalDevices) {
    std::vector<VkPhysicalDevice> physical_devices{};
    VkResult result = GetCompatiblePhysicalDeviceList(physical_devices);
    if (result >= VK_SUCCESS) {
        if (pPhysicalDevices == nullptr) {
            *pPhysicalDeviceCount = static_cast<uint32_t>(physical_devices.size());
        } else {
            if (*pPhysicalDeviceCount < physical_devices.size()) {
                result = VK_INCOMPLETE;
            }
            *pPhysicalDeviceCount = std::min(*pPhysicalDeviceCount, static_cast<uint32_t>(physical_devices.size()));
            for (uint32_t i = 0; i < *pPhysicalDeviceCount; ++i) {
                pPhysicalDevices[i] = physical_devices_.GetOrAddChild(physical_devices[i], *this)->VkSCHandle();
            }
        }
    }
    return result;
}

VkResult Instance::GetCompatiblePhysicalDeviceGroupList(std::vector<VkPhysicalDeviceGroupProperties>& physical_device_groups) {
    // We have to filter out physical device groups that include incompatible physical devices
    std::vector<VkPhysicalDevice> physical_devices{};
    VkResult result = GetCompatiblePhysicalDeviceList(physical_devices);
    std::unordered_set<VkPhysicalDevice> physical_device_set(physical_devices.begin(), physical_devices.end());
    if (result >= VK_SUCCESS) {
        uint32_t physical_device_group_count = 0;
        result = vk::Instance::EnumeratePhysicalDeviceGroups(&physical_device_group_count, nullptr);
        if (result >= VK_SUCCESS) {
            physical_device_groups.reserve(physical_device_group_count);
            std::vector<VkPhysicalDeviceGroupProperties> all_physical_device_groups(
                physical_device_group_count, vku::InitStruct<VkPhysicalDeviceGroupProperties>());
            result = vk::Instance::EnumeratePhysicalDeviceGroups(&physical_device_group_count, all_physical_device_groups.data());
            if (result >= VK_SUCCESS) {
                for (const auto& physical_device_group : all_physical_device_groups) {
                    bool all_physical_devices_compatible = true;
                    for (uint32_t i = 0; i < physical_device_group.physicalDeviceCount; ++i) {
                        if (physical_device_set.find(physical_device_group.physicalDevices[i]) == physical_device_set.end()) {
                            all_physical_devices_compatible = false;
                            break;
                        }
                    }
                    if (all_physical_devices_compatible) {
                        physical_device_groups.push_back(physical_device_group);
                    }
                }
            }
        }
    }
    return result;
}

VkResult Instance::EnumeratePhysicalDeviceGroups(uint32_t* pPhysicalDeviceGroupCount,
                                                 VkPhysicalDeviceGroupProperties* pPhysicalDeviceGroupProperties) {
    for (uint32_t i = 0; i < *pPhysicalDeviceGroupCount; ++i) {
        // NOTE: This code assumes that nothing is chained to the pNext (which is currently the case)
        // This could be handled in the future with a more general solution, but none of the current
        // VulkanSC-Utility-Libraries utilities, nor the safe struct chain utilities are sufficient
        // to handle copying pNext chains into an application allocated pNext chain.
        if (pPhysicalDeviceGroupProperties[i].pNext != nullptr) {
            Log().Error("VKSC-EMU-DeviceGroupProperties", "Unsupported structures in VkPhysicalDeviceGroupProperties::pNext chain");
            return VK_ERROR_INITIALIZATION_FAILED;
        }
    }
    std::vector<VkPhysicalDeviceGroupProperties> physical_device_groups{};
    VkResult result = GetCompatiblePhysicalDeviceGroupList(physical_device_groups);
    if (result >= VK_SUCCESS) {
        if (pPhysicalDeviceGroupProperties == nullptr) {
            *pPhysicalDeviceGroupCount = static_cast<uint32_t>(physical_device_groups.size());
        } else {
            if (*pPhysicalDeviceGroupCount < physical_device_groups.size()) {
                result = VK_INCOMPLETE;
            }
            *pPhysicalDeviceGroupCount = std::min(*pPhysicalDeviceGroupCount, static_cast<uint32_t>(physical_device_groups.size()));
            for (uint32_t i = 0; i < *pPhysicalDeviceGroupCount; ++i) {
                pPhysicalDeviceGroupProperties[i] = physical_device_groups[i];
            }
        }
    }
    return result;
}

VkResult Instance::CreateDebugUtilsMessengerEXT(const VkDebugUtilsMessengerCreateInfoEXT* pCreateInfo,
                                                const VkAllocationCallbacks* pAllocator, VkDebugUtilsMessengerEXT* pMessenger) {
    VkResult result = vk::Instance::CreateDebugUtilsMessengerEXT(pCreateInfo, pAllocator, pMessenger);
    if (result >= VK_SUCCESS) {
        Log().AddDebugMessenger(*pMessenger, *pCreateInfo);
    }
    return result;
}

void Instance::DestroyDebugUtilsMessengerEXT(VkDebugUtilsMessengerEXT messenger, const VkAllocationCallbacks* pAllocator) {
    Log().RemoveDebugMessenger(messenger);
    vk::Instance::DestroyDebugUtilsMessengerEXT(messenger, pAllocator);
}

}  // namespace vksc
