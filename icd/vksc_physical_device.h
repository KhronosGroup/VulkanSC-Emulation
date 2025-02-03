/*
 * Copyright (c) 2024 The Khronos Group Inc.
 * Copyright (c) 2024 RasterGrid Kft.
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#pragma once

#include "vksc_dispatchable.h"
#include "vksc_extension_helper.h"
#include "vksc_display_emulation.h"
#include "vk_extension_helper.h"
#include "vk_physical_device.h"
#include "icd_log.h"
#include "icd_extension_helper.h"

#include <unordered_set>
#include <vector>
#include <memory>

namespace vksc {

class Instance;

class PhysicalDevice : public Dispatchable<PhysicalDevice, VkPhysicalDevice>, public vk::PhysicalDevice {
  public:
    using NEXT = vk::PhysicalDevice;

    PhysicalDevice(VkPhysicalDevice physical_device, Instance& instance);

    icd::Logger& Log() { return logger_; }

    bool IsValid() const { return valid_; }

    bool IsDeviceExtensionSupported(ExtensionNumber ext_num) const {
        return device_extensions_.find(ext_num) != device_extensions_.end();
    }

    bool IsDeviceExtensionSupported(vk::ExtensionNumber ext_num) const {
        return vk_device_extensions_.find(ext_num) != vk_device_extensions_.end();
    }

    bool IsDeviceExtensionEmulated(ExtensionNumber ext_num) const {
        return IsDeviceExtensionSupported(ext_num) && !IsDeviceExtensionSupported(icd::ConvertExtensionNumber(ext_num));
    }

    bool RecyclePipelineMemory() const;

    DeviceDisplayManager& GetDisplayManager() { return display_manager_; }

    const Instance& GetInstance() const { return instance_; }

    VkResult EnumerateDeviceExtensionProperties(const char* pLayerName, uint32_t* pPropertyCount,
                                                VkExtensionProperties* pProperties);

    VkResult CreateDevice(const VkDeviceCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkDevice* pDevice);

    void GetPhysicalDeviceFeatures(VkPhysicalDeviceFeatures* pFeatures);
    void GetPhysicalDeviceFeatures2(VkPhysicalDeviceFeatures2* pFeatures);

    void GetPhysicalDeviceProperties(VkPhysicalDeviceProperties* pProperties);
    void GetPhysicalDeviceProperties2(VkPhysicalDeviceProperties2* pProperties);

    VkResult GetPhysicalDeviceRefreshableObjectTypesKHR(uint32_t* pRefreshableObjectTypeCount,
                                                        VkObjectType* pRefreshableObjectTypes);

#if defined(VK_USE_PLATFORM_WIN32_KHR)
    VkResult AcquireWinrtDisplayNV(VkDisplayKHR display);
#endif
    VkResult ReleaseDisplayEXT(VkDisplayKHR display);

    VkResult GetPhysicalDeviceDisplayPropertiesKHR(uint32_t* pPropertyCount, VkDisplayPropertiesKHR* pProperties);
    VkResult GetPhysicalDeviceDisplayProperties2KHR(uint32_t* pPropertyCount, VkDisplayProperties2KHR* pProperties);

    VkResult GetPhysicalDeviceDisplayPlanePropertiesKHR(uint32_t* pPropertyCount, VkDisplayPlanePropertiesKHR* pProperties);
    VkResult GetPhysicalDeviceDisplayPlaneProperties2KHR(uint32_t* pPropertyCount, VkDisplayPlaneProperties2KHR* pProperties);

    VkResult GetDisplayPlaneSupportedDisplaysKHR(uint32_t planeIndex, uint32_t* pDisplayCount, VkDisplayKHR* pDisplays);

    VkResult GetDisplayModePropertiesKHR(VkDisplayKHR display, uint32_t* pPropertyCount, VkDisplayModePropertiesKHR* pProperties);
    VkResult GetDisplayModeProperties2KHR(VkDisplayKHR display, uint32_t* pPropertyCount, VkDisplayModeProperties2KHR* pProperties);

    VkResult CreateDisplayModeKHR(VkDisplayKHR display, const VkDisplayModeCreateInfoKHR* pCreateInfo,
                                  const VkAllocationCallbacks* pAllocator, VkDisplayModeKHR* pMode);

    VkResult GetDisplayPlaneCapabilitiesKHR(VkDisplayModeKHR mode, uint32_t planeIndex,
                                            VkDisplayPlaneCapabilitiesKHR* pCapabilities);
    VkResult GetDisplayPlaneCapabilities2KHR(const VkDisplayPlaneInfo2KHR* pDisplayPlaneInfo,
                                             VkDisplayPlaneCapabilities2KHR* pCapabilities);

    constexpr uint32_t GetMaxQueryFaultCount() const { return 16; }
    constexpr VkDeviceSize GetMaxCommandBufferSize() const { return 1 << 20; }

  private:
    void UpdatePhysicalDeviceFeaturesForVulkanSC(VkPhysicalDeviceFeatures& features);
    void UpdatePhysicalDevicePropertiesForVulkanSC(VkPhysicalDeviceProperties& properties);

    bool valid_{true};

    const Instance& instance_;
    icd::Logger logger_;

    DeviceDisplayManager display_manager_;

    std::vector<VkExtensionProperties> device_extension_list_{};
    std::unordered_set<ExtensionNumber> device_extensions_{};
    std::unordered_set<vk::ExtensionNumber> vk_device_extensions_{};
};

}  // namespace vksc
