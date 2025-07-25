/*
 * Copyright (c) 2024-2025 The Khronos Group Inc.
 * Copyright (c) 2024-2025 RasterGrid Kft.
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#pragma once

#include "vksc_dispatchable.h"
#include "vksc_extension_helper.h"
#include "vksc_display_emulation.h"
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

    const icd::Logger& Log() const { return logger_; }

    VkResult GetStatus() const { return status_; }

    uint32_t GetApiVersion() const { return api_version_; }

    InstanceDisplayManager& GetDisplayManager() { return display_manager_; }

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
    void SubmitDebugUtilsMessageEXT(VkDebugUtilsMessageSeverityFlagBitsEXT messageSeverity,
                                    VkDebugUtilsMessageTypeFlagsEXT messageTypes,
                                    const VkDebugUtilsMessengerCallbackDataEXT* pCallbackData);

    VkResult CreateDisplayPlaneSurfaceKHR(const VkDisplaySurfaceCreateInfoKHR* pCreateInfo, const VkAllocationCallbacks* pAllocator,
                                          VkSurfaceKHR* pSurface);
    void DestroySurfaceKHR(VkSurfaceKHR surface, const VkAllocationCallbacks* pAllocator);

  private:
    VkResult SetupInstance(const VkInstanceCreateInfo& create_info);

    VkResult GetCompatiblePhysicalDeviceList(std::vector<VkPhysicalDevice>& physical_devices);
    VkResult GetCompatiblePhysicalDeviceGroupList(std::vector<VkPhysicalDeviceGroupProperties>& physical_device_groups);

    VkResult status_{VK_SUCCESS};

    icd::Logger logger_;

    uint32_t api_version_;

    DispatchableChildren<PhysicalDevice, VkPhysicalDevice> physical_devices_;

    InstanceDisplayManager display_manager_;

    std::unordered_set<ExtensionNumber> enabled_extensions_{};
};

}  // namespace vksc
