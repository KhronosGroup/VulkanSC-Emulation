/*
 * Copyright (c) 2024 The Khronos Group Inc.
 * Copyright (c) 2024 RasterGrid Kft.
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#include "vksc_physical_device.h"
#include "vksc_instance.h"
#include "vksc_device.h"

namespace vksc {

PhysicalDevice::PhysicalDevice(VkPhysicalDevice physical_device, Instance& instance)
    : Dispatchable(),
      vk::PhysicalDevice(physical_device, instance.VkDispatch()),
      logger_(instance.Log(), VK_OBJECT_TYPE_PHYSICAL_DEVICE, physical_device) {}

VkResult PhysicalDevice::CreateDevice(const VkDeviceCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator,
                                      VkDevice* pDevice) {
    // TODO: Refine this
    VkDevice device = VK_NULL_HANDLE;
    VkResult result = vk::PhysicalDevice::CreateDevice(pCreateInfo, pAllocator, &device);
    if (result >= VK_SUCCESS) {
        *pDevice = vksc::Device::Create(device, *this);
    }
    return result;
}

}  // namespace vksc
