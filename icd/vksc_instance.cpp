/*
 * Copyright (c) 2024-2025 The Khronos Group Inc.
 * Copyright (c) 2024-2025 RasterGrid Kft.
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#include "vksc_instance.h"
#include "vksc_global.h"
#include "vksc_physical_device.h"
#include "vksc_extension_helper.h"

#include <vulkan/utility/vk_struct_helper.hpp>
#include <unordered_set>
#include <algorithm>

namespace vksc {

// Placeholder debug utils messenger object class
class DebugUtilsMessengerEXT {
  public:
    static DebugUtilsMessengerEXT* FromHandle(VkDebugUtilsMessengerEXT handle) {
        return reinterpret_cast<DebugUtilsMessengerEXT*>(handle);
    }
    VkDebugUtilsMessengerEXT VkSCHandle() { return reinterpret_cast<VkDebugUtilsMessengerEXT>(this); }
};

Instance::Instance(VkInstance instance, Global& global, const VkInstanceCreateInfo& create_info)
    : Dispatchable(),
      NEXT(instance, vk::DispatchTable(instance, global.VkGetProcAddr()), icd::FaultHandler::Nil()),
      logger_(vksc::ICD.Environment().LogSeverityEnv()),
      api_version_(create_info.pApplicationInfo != nullptr ? create_info.pApplicationInfo->apiVersion : VKSC_API_VERSION_1_0),
      physical_devices_(),
      display_manager_() {
    status_ = SetupInstance(create_info);
}

VkResult Instance::SetupInstance(const VkInstanceCreateInfo& create_info) {
    // Remember enabled extensions
    if (create_info.ppEnabledExtensionNames && create_info.enabledExtensionCount != 0) {
        for (uint32_t i = 0; i < create_info.enabledExtensionCount; ++i) {
            ExtensionNumber ext_num = GetExtensionNumber(create_info.ppEnabledExtensionNames[i]);
            if (ICD.IsInstanceExtensionSupported(ext_num)) {
                enabled_extensions_.insert(ext_num);
            } else {
                return VK_ERROR_EXTENSION_NOT_PRESENT;
            }
        }
    }
    return VK_SUCCESS;
}

void Instance::DestroyInstance(const VkAllocationCallbacks* pAllocator) {
    Destroy(VkDispatch().DestroyInstance, VkHandle(), pAllocator);
}

VkResult Instance::GetCompatiblePhysicalDeviceList(std::vector<VkPhysicalDevice>& physical_devices) {
    // We have to filter out physical devices that do not support Vulkan 1.2 or the Vulkan Memory Model
    uint32_t physical_device_count = 0;
    VkResult result = NEXT::EnumeratePhysicalDevices(&physical_device_count, nullptr);
    if (result >= VK_SUCCESS) {
        physical_devices.reserve(physical_device_count);
        std::vector<VkPhysicalDevice> all_physical_devices(physical_device_count);
        result = NEXT::EnumeratePhysicalDevices(&physical_device_count, all_physical_devices.data());
        if (result >= VK_SUCCESS) {
            for (const auto physical_device : all_physical_devices) {
                vk::PhysicalDevice vk_obj(physical_device, VkDispatch(), icd::FaultHandler::Nil());
                VkPhysicalDeviceProperties props{};
                vk_obj.GetPhysicalDeviceProperties(&props);
                if (props.apiVersion >= VK_API_VERSION_1_2) {
                    auto memory_model_features = vku::InitStruct<VkPhysicalDeviceVulkanMemoryModelFeatures>();
                    auto features = vku::InitStruct<VkPhysicalDeviceFeatures2>(&memory_model_features);
                    vk_obj.GetPhysicalDeviceFeatures2(&features);
                    if (memory_model_features.vulkanMemoryModel) {
                        physical_devices.push_back(physical_device);
                    } else {
                        Log().Debug("VKSC-EMU-PhysicalDeviceFiltering",
                                    "Physical device (%p) '{%s}' filterred out due to no support for Vulkan Memory Model",
                                    physical_device, props.deviceName);
                    }
                } else {
                    Log().Debug("VKSC-EMU-PhysicalDeviceFiltering",
                                "Physical device (%p) '{%s}' filterred out due to no support for Vulkan 1.2", physical_device,
                                props.deviceName);
                }
            }
        }
    }
    return result;
}

VkResult Instance::EnumeratePhysicalDevices(uint32_t* pPhysicalDeviceCount, VkPhysicalDevice* pPhysicalDevices) {
    std::vector<VkPhysicalDevice> physical_devices{};
    VkResult result = GetCompatiblePhysicalDeviceList(physical_devices);
    if (result >= VK_SUCCESS) {
        if (pPhysicalDevices == nullptr) {
            *pPhysicalDeviceCount = static_cast<uint32_t>(physical_devices.size());
        } else {
            if (*pPhysicalDeviceCount < physical_devices.size()) {
                result = VK_INCOMPLETE;
            }
            *pPhysicalDeviceCount = std::min(*pPhysicalDeviceCount, static_cast<uint32_t>(physical_devices.size()));
            for (uint32_t i = 0; i < *pPhysicalDeviceCount; ++i) {
                pPhysicalDevices[i] = physical_devices_.GetOrAddChild(physical_devices[i], *this)->VkSCHandle();
            }
        }
    }
    return result;
}

VkResult Instance::GetCompatiblePhysicalDeviceGroupList(std::vector<VkPhysicalDeviceGroupProperties>& physical_device_groups) {
    // We have to filter out physical device groups that include incompatible physical devices
    std::vector<VkPhysicalDevice> physical_devices{};
    VkResult result = GetCompatiblePhysicalDeviceList(physical_devices);
    std::unordered_set<VkPhysicalDevice> physical_device_set(physical_devices.begin(), physical_devices.end());
    if (result >= VK_SUCCESS) {
        uint32_t physical_device_group_count = 0;
        result = NEXT::EnumeratePhysicalDeviceGroups(&physical_device_group_count, nullptr);
        if (result >= VK_SUCCESS) {
            physical_device_groups.reserve(physical_device_group_count);
            std::vector<VkPhysicalDeviceGroupProperties> all_physical_device_groups(
                physical_device_group_count, vku::InitStruct<VkPhysicalDeviceGroupProperties>());
            result = NEXT::EnumeratePhysicalDeviceGroups(&physical_device_group_count, all_physical_device_groups.data());
            if (result >= VK_SUCCESS) {
                for (const auto& physical_device_group : all_physical_device_groups) {
                    bool all_physical_devices_compatible = true;
                    for (uint32_t i = 0; i < physical_device_group.physicalDeviceCount; ++i) {
                        if (physical_device_set.find(physical_device_group.physicalDevices[i]) == physical_device_set.end()) {
                            all_physical_devices_compatible = false;
                            break;
                        }
                    }
                    if (all_physical_devices_compatible) {
                        physical_device_groups.push_back(physical_device_group);
                    }
                }
            }
        }
    }
    return result;
}

VkResult Instance::EnumeratePhysicalDeviceGroups(uint32_t* pPhysicalDeviceGroupCount,
                                                 VkPhysicalDeviceGroupProperties* pPhysicalDeviceGroupProperties) {
    if (pPhysicalDeviceGroupProperties != nullptr) {
        for (uint32_t i = 0; i < *pPhysicalDeviceGroupCount; ++i) {
            // NOTE: This code assumes that nothing is chained to the pNext (which is currently the case)
            // This could be handled in the future with a more general solution, but none of the current
            // VulkanSC-Utility-Libraries utilities, nor the safe struct chain utilities are sufficient
            // to handle copying pNext chains into an application allocated pNext chain.
            if (pPhysicalDeviceGroupProperties[i].pNext != nullptr) {
                Log().Error("VKSC-EMU-DeviceGroupProperties",
                            "Unsupported structures in VkPhysicalDeviceGroupProperties::pNext chain");
                return VK_ERROR_INITIALIZATION_FAILED;
            }
        }
    }
    std::vector<VkPhysicalDeviceGroupProperties> physical_device_groups{};
    VkResult result = GetCompatiblePhysicalDeviceGroupList(physical_device_groups);
    if (result >= VK_SUCCESS) {
        if (pPhysicalDeviceGroupProperties == nullptr) {
            *pPhysicalDeviceGroupCount = static_cast<uint32_t>(physical_device_groups.size());
        } else {
            if (*pPhysicalDeviceGroupCount < physical_device_groups.size()) {
                result = VK_INCOMPLETE;
            }
            *pPhysicalDeviceGroupCount = std::min(*pPhysicalDeviceGroupCount, static_cast<uint32_t>(physical_device_groups.size()));
            for (uint32_t i = 0; i < *pPhysicalDeviceGroupCount; ++i) {
                pPhysicalDeviceGroupProperties[i] = physical_device_groups[i];
                for (uint32_t j = 0; j < physical_device_groups[i].physicalDeviceCount; ++j) {
                    pPhysicalDeviceGroupProperties[i].physicalDevices[j] =
                        physical_devices_.GetOrAddChild(physical_device_groups[i].physicalDevices[j], *this)->VkSCHandle();
                }
            }
        }
    }
    return result;
}

VkResult Instance::CreateDebugUtilsMessengerEXT(const VkDebugUtilsMessengerCreateInfoEXT* pCreateInfo,
                                                const VkAllocationCallbacks* pAllocator, VkDebugUtilsMessengerEXT* pMessenger) {
    VkResult result = VK_SUCCESS;
    if (ICD.IsInstanceExtensionEmulated(ExtensionNumber::EXT_debug_utils)) {
        // Create placeholder object ourselves because the Vulkan stack does not support VK_EXT_debug_utils
        *pMessenger = (new DebugUtilsMessengerEXT)->VkSCHandle();
        if (pMessenger == nullptr) {
            result = VK_ERROR_OUT_OF_HOST_MEMORY;
        }
    } else {
        // Forward call to the Vulkan stack to also capture Vulkan debug messages
        result = NEXT::CreateDebugUtilsMessengerEXT(pCreateInfo, pAllocator, pMessenger);
    }
    if (result >= VK_SUCCESS) {
        Log().AddDebugMessenger(*pMessenger, *pCreateInfo);
    }
    return result;
}

void Instance::DestroyDebugUtilsMessengerEXT(VkDebugUtilsMessengerEXT messenger, const VkAllocationCallbacks* pAllocator) {
    Log().RemoveDebugMessenger(messenger);
    if (ICD.IsInstanceExtensionEmulated(ExtensionNumber::EXT_debug_utils)) {
        // Destroy placeholder object because the Vulkan stack does not support VK_EXT_debug_utils
        delete DebugUtilsMessengerEXT::FromHandle(messenger);
    } else {
        // Forward call to the Vulkan stack
        NEXT::DestroyDebugUtilsMessengerEXT(messenger, pAllocator);
    }
}

void Instance::SubmitDebugUtilsMessageEXT(VkDebugUtilsMessageSeverityFlagBitsEXT messageSeverity,
                                          VkDebugUtilsMessageTypeFlagsEXT messageTypes,
                                          const VkDebugUtilsMessengerCallbackDataEXT* pCallbackData) {
    if (ICD.IsInstanceExtensionEmulated(ExtensionNumber::EXT_debug_utils)) {
        Log().SubmitMessage(messageSeverity, messageTypes, *pCallbackData);
    } else {
        NEXT::SubmitDebugUtilsMessageEXT(messageSeverity, messageTypes, pCallbackData);
    }
}

VkResult Instance::CreateDisplayPlaneSurfaceKHR(const VkDisplaySurfaceCreateInfoKHR* pCreateInfo,
                                                const VkAllocationCallbacks* pAllocator, VkSurfaceKHR* pSurface) {
    auto emulated_display_mode = GetDisplayManager().GetEmulatedDisplayModeFromHandle(pCreateInfo->displayMode);
    if (emulated_display_mode != nullptr) {
        return emulated_display_mode->GetDisplay().CreateSurface(*this, *emulated_display_mode, *pCreateInfo, *pSurface);
    } else {
        // The first planes are dedicated to the individual emulated displays
        auto create_info = *pCreateInfo;
        create_info.planeIndex -= ICD.GetDisplayManager().GetDisplayCount();
        return NEXT::CreateDisplayPlaneSurfaceKHR(pCreateInfo, pAllocator, pSurface);
    }
}

void Instance::DestroySurfaceKHR(VkSurfaceKHR surface, const VkAllocationCallbacks* pAllocator) {
    NEXT::DestroySurfaceKHR(surface, pAllocator);
    auto emulated_display = GetDisplayManager().GetEmulatedDisplayFromSurfaceHandle(surface);
    if (emulated_display != nullptr) {
        emulated_display->DestroySurface();
    }
}

}  // namespace vksc
