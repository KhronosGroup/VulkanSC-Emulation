/*
 * Copyright (c) 2024 The Khronos Group Inc.
 * Copyright (c) 2024 RasterGrid Kft.
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#include "vksc_instance.h"
#include "vksc_global.h"
#include "vksc_physical_device.h"

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

VkResult Instance::EnumeratePhysicalDevices(uint32_t* pPhysicalDeviceCount, VkPhysicalDevice* pPhysicalDevices) {
    VkResult result = vk::Instance::EnumeratePhysicalDevices(pPhysicalDeviceCount, pPhysicalDevices);
    if (result >= VK_SUCCESS && pPhysicalDevices != nullptr) {
        for (uint32_t i = 0; i < *pPhysicalDeviceCount; ++i) {
            pPhysicalDevices[i] = physical_devices_.GetOrAddChild(pPhysicalDevices[i], *this)->VkSCHandle();
        }
    }
    return result;
}

VkResult Instance::EnumeratePhysicalDeviceGroups(uint32_t* pPhysicalDeviceGroupCount,
                                                 VkPhysicalDeviceGroupProperties* pPhysicalDeviceGroupProperties) {
    VkResult result = vk::Instance::EnumeratePhysicalDeviceGroups(pPhysicalDeviceGroupCount, pPhysicalDeviceGroupProperties);
    if (result >= VK_SUCCESS && pPhysicalDeviceGroupProperties != nullptr) {
        for (uint32_t i = 0; i < *pPhysicalDeviceGroupCount; ++i) {
            for (uint32_t j = 0; j < pPhysicalDeviceGroupProperties[i].physicalDeviceCount; ++j) {
                pPhysicalDeviceGroupProperties[i].physicalDevices[j] =
                    physical_devices_.GetOrAddChild(pPhysicalDeviceGroupProperties[i].physicalDevices[j], *this)->VkSCHandle();
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
