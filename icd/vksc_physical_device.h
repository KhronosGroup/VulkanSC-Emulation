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

namespace vksc {

class Instance;

class PhysicalDevice : public Dispatchable<PhysicalDevice, VkPhysicalDevice>, public vk::PhysicalDevice {
  public:
    PhysicalDevice(VkPhysicalDevice physical_device, Instance& instance);

    icd::Logger& Log() { return logger_; }

    VkResult CreateDevice(const VkDeviceCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkDevice* pDevice);

    VkResult GetPhysicalDeviceRefreshableObjectTypesKHR(uint32_t* pRefreshableObjectTypeCount,
                                                        VkObjectType* pRefreshableObjectTypes) {
        // TODO
        return VK_SUCCESS;
    }

  private:
    icd::Logger logger_;
};

}  // namespace vksc
