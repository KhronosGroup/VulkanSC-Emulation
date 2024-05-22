/*
 * Copyright (c) 2024 The Khronos Group Inc.
 * Copyright (c) 2024 RasterGrid Kft.
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#pragma once

#include "vksc_dispatchable.h"
#include "vk_physical_device.h"
#include "icd_log.h"

#include <vector>

namespace vksc {

class Instance;

class PhysicalDevice : public Dispatchable<PhysicalDevice, VkPhysicalDevice>, public vk::PhysicalDevice {
  public:
    PhysicalDevice(VkPhysicalDevice physical_device, Instance& instance);

    icd::Logger& Log() { return logger_; }

    bool IsValid() const { return valid_; }

    VkResult EnumerateDeviceExtensionProperties(const char* pLayerName, uint32_t* pPropertyCount,
                                                VkExtensionProperties* pProperties);

    VkResult CreateDevice(const VkDeviceCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkDevice* pDevice);

    void GetPhysicalDeviceFeatures(VkPhysicalDeviceFeatures* pFeatures);
    void GetPhysicalDeviceFeatures2(VkPhysicalDeviceFeatures2* pFeatures);

    void GetPhysicalDeviceProperties(VkPhysicalDeviceProperties* pProperties);
    void GetPhysicalDeviceProperties2(VkPhysicalDeviceProperties2* pProperties);

    VkResult GetPhysicalDeviceRefreshableObjectTypesKHR(uint32_t* pRefreshableObjectTypeCount,
                                                        VkObjectType* pRefreshableObjectTypes) {
        // TODO
        return VK_SUCCESS;
    }

  private:
    void UpdatePhysicalDeviceFeaturesForVulkanSC(VkPhysicalDeviceFeatures& features);
    void UpdatePhysicalDevicePropertiesForVulkanSC(VkPhysicalDeviceProperties& properties);

    bool valid_{true};

    icd::Logger logger_;

    std::vector<VkExtensionProperties> device_extensions_{};
};

}  // namespace vksc
