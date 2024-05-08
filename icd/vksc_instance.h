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

    void DestroyInstance(const VkAllocationCallbacks* pAllocator);
    VkResult EnumeratePhysicalDevices(uint32_t* pPhysicalDeviceCount, VkPhysicalDevice* pPhysicalDevices);
    VkResult EnumeratePhysicalDeviceGroups(uint32_t* pPhysicalDeviceGroupCount,
                                           VkPhysicalDeviceGroupProperties* pPhysicalDeviceGroupProperties);

    VkResult CreateDebugUtilsMessengerEXT(const VkDebugUtilsMessengerCreateInfoEXT* pCreateInfo,
                                          const VkAllocationCallbacks* pAllocator, VkDebugUtilsMessengerEXT* pMessenger);
    void DestroyDebugUtilsMessengerEXT(VkDebugUtilsMessengerEXT messenger, const VkAllocationCallbacks* pAllocator);

  private:
    icd::Logger CreateLogger(const VkInstanceCreateInfo& create_info);

    icd::Logger logger_;

    DispatchableChildren<PhysicalDevice, VkPhysicalDevice> physical_devices_;
};

}  // namespace vksc
