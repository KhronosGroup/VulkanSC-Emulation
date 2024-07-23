/*
 * Copyright (c) 2024 The Khronos Group Inc.
 * Copyright (c) 2024 RasterGrid Kft.
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#pragma once

#include "vksc_dispatchable.h"
#include "vk_instance.h"
#include "icd_log.h"

#include "generated/vksc_extension_helper.h"

#include <unordered_map>
#include <vector>
#include <memory>

namespace vksc {

class Global;
class PhysicalDevice;

class Instance : public Dispatchable<Instance, VkInstance>, public vk::Instance {
  public:
    Instance(VkInstance instance, Global& global, const VkInstanceCreateInfo& create_info);

    icd::Logger& Log() { return logger_; }

    bool IsValid() const { return valid_; }

    uint32_t GetApiVersion() const { return api_version_; }

    void DestroyInstance(const VkAllocationCallbacks* pAllocator);
    VkResult EnumeratePhysicalDevices(uint32_t* pPhysicalDeviceCount, VkPhysicalDevice* pPhysicalDevices);
    VkResult EnumeratePhysicalDeviceGroups(uint32_t* pPhysicalDeviceGroupCount,
                                           VkPhysicalDeviceGroupProperties* pPhysicalDeviceGroupProperties);

    bool IsExtensionEnabled(ExtensionNumber ext);

    VkResult CreateDebugUtilsMessengerEXT(const VkDebugUtilsMessengerCreateInfoEXT* pCreateInfo,
                                          const VkAllocationCallbacks* pAllocator, VkDebugUtilsMessengerEXT* pMessenger);
    void DestroyDebugUtilsMessengerEXT(VkDebugUtilsMessengerEXT messenger, const VkAllocationCallbacks* pAllocator);

  private:
    VkResult status_{VK_SUCCESS};
    VkResult SetupInstance(const VkInstanceCreateInfo& create_info);
    icd::Logger CreateLogger(const VkInstanceCreateInfo& create_info);

    VkResult GetCompatiblePhysicalDeviceList(std::vector<VkPhysicalDevice>& physical_devices);
    VkResult GetCompatiblePhysicalDeviceGroupList(std::vector<VkPhysicalDeviceGroupProperties>& physical_device_groups);

    bool valid_{true};

    icd::Logger logger_;

    uint32_t api_version_;

    DispatchableChildren<PhysicalDevice, VkPhysicalDevice> physical_devices_;

    std::vector<ExtensionNumber> enabled_exts_;
};

}  // namespace vksc
