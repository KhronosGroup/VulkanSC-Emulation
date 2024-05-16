/*
 * Copyright (c) 2024 The Khronos Group Inc.
 * Copyright (c) 2024 RasterGrid Kft.
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#include "vksc_physical_device.h"
#include "vksc_instance.h"
#include "vksc_device.h"
#include "icd_extension_helper.h"

namespace vksc {

PhysicalDevice::PhysicalDevice(VkPhysicalDevice physical_device, Instance& instance)
    : Dispatchable(),
      vk::PhysicalDevice(physical_device, instance.VkDispatch()),
      logger_(instance.Log(), VK_OBJECT_TYPE_PHYSICAL_DEVICE, physical_device) {
    // Initialize extensions from the underlying Vulkan implementation
    uint32_t device_extension_count = 0;
    VkResult result = vk::PhysicalDevice::EnumerateDeviceExtensionProperties(nullptr, &device_extension_count, nullptr);
    if (result >= VK_SUCCESS) {
        device_extensions_.resize(device_extension_count);
        result =
            vk::PhysicalDevice::EnumerateDeviceExtensionProperties(nullptr, &device_extension_count, device_extensions_.data());
        if (result >= VK_SUCCESS) {
            device_extensions_ = icd::GetVulkanSCExtensionList(Log(), device_extensions_, vksc::GetDeviceExtensionsMap());
        } else {
            device_extensions_.clear();
            Log().Error("VKSC-EMU-DeviceExtensions",
                        "Failed to retrieve device extension list from the underlying Vulkan implementation");
            valid_ = false;
            return;
        }
    } else {
        Log().Error("VKSC-EMU-DeviceExtensionCount",
                    "Failed to retrieve number of device extensions from the underlying Vulkan implementation");
        valid_ = false;
        return;
    }
}

VkResult PhysicalDevice::EnumerateDeviceExtensionProperties(const char* pLayerName, uint32_t* pPropertyCount,
                                                            VkExtensionProperties* pProperties) {
    VkResult result = VK_SUCCESS;

    if (pLayerName != nullptr) {
        Log().Warning("VKSC-EMU-DeviceExtensions-UnexpectedLayerName",
                      "vkEnumerateDeviceExtensionProperties is called with pLayerName != nullptr");
    }

    if (pProperties == nullptr) {
        *pPropertyCount = static_cast<uint32_t>(device_extensions_.size());
    } else {
        if (*pPropertyCount < device_extensions_.size()) {
            result = VK_INCOMPLETE;
        }
        *pPropertyCount = std::min(*pPropertyCount, static_cast<uint32_t>(device_extensions_.size()));
        for (uint32_t i = 0; i < *pPropertyCount; ++i) {
            pProperties[i] = device_extensions_[i];
        }
    }

    return result;
}

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
