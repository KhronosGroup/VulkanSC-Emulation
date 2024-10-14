/*
 * Copyright (c) 2024 The Khronos Group Inc.
 * Copyright (c) 2024 RasterGrid Kft.
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#pragma once

#include "vksc_dispatchable.h"
#include "vksc_extension_helper.h"
#include "vk_instance.h"
#include "icd_log.h"

#include <unordered_map>
#include <unordered_set>
#include <vector>
#include <memory>

namespace vksc {

class Global;
class PhysicalDevice;

class Instance : public Dispatchable<Instance, VkInstance>, public vk::Instance {
  public:
    using NEXT = vk::Instance;

    Instance(VkInstance instance, Global& global, const VkInstanceCreateInfo& create_info);

    icd::Logger& Log() { return logger_; }

    VkResult GetStatus() const { return status_; }

    uint32_t GetApiVersion() const { return api_version_; }

    void DestroyInstance(const VkAllocationCallbacks* pAllocator);
    VkResult EnumeratePhysicalDevices(uint32_t* pPhysicalDeviceCount, VkPhysicalDevice* pPhysicalDevices);
    VkResult EnumeratePhysicalDeviceGroups(uint32_t* pPhysicalDeviceGroupCount,
                                           VkPhysicalDeviceGroupProperties* pPhysicalDeviceGroupProperties);

    bool IsExtensionEnabled(ExtensionNumber ext_num) const {
        return enabled_extensions_.find(ext_num) != enabled_extensions_.end();
    }

    VkResult CreateDebugUtilsMessengerEXT(const VkDebugUtilsMessengerCreateInfoEXT* pCreateInfo,
                                          const VkAllocationCallbacks* pAllocator, VkDebugUtilsMessengerEXT* pMessenger);
    void DestroyDebugUtilsMessengerEXT(VkDebugUtilsMessengerEXT messenger, const VkAllocationCallbacks* pAllocator);

  private:
    VkResult SetupInstance(const VkInstanceCreateInfo& create_info);
    icd::Logger CreateLogger(const VkInstanceCreateInfo& create_info);

    VkResult GetCompatiblePhysicalDeviceList(std::vector<VkPhysicalDevice>& physical_devices);
    VkResult GetCompatiblePhysicalDeviceGroupList(std::vector<VkPhysicalDeviceGroupProperties>& physical_device_groups);

    VkResult status_{VK_SUCCESS};

    icd::Logger logger_;

    uint32_t api_version_;

    DispatchableChildren<PhysicalDevice, VkPhysicalDevice> physical_devices_;

    std::unordered_set<ExtensionNumber> enabled_extensions_{};
};

}  // namespace vksc
