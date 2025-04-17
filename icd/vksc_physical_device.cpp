/*
 * Copyright (c) 2024-2025 The Khronos Group Inc.
 * Copyright (c) 2024-2025 RasterGrid Kft.
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#include "vksc_physical_device.h"
#include "vksc_instance.h"
#include "vksc_device.h"
#include "vksc_global.h"
#include "icd_extension_helper.h"
#include "icd_defs.h"
#include "icd_shadow_stack.h"
#include "icd_pnext_chain_utils.h"
#include "uuid.h"

#include <vulkan/utility/vk_struct_helper.hpp>

#include <cstddef>
#include <array>

namespace vksc {

constexpr std::array<size_t, 10> UnsupportedFeatureOffsets() {
    // Vulkan SC limits the available physical device features.
    return {
        offsetof(VkPhysicalDeviceFeatures, shaderResourceResidency),  offsetof(VkPhysicalDeviceFeatures, sparseBinding),
        offsetof(VkPhysicalDeviceFeatures, sparseResidencyBuffer),    offsetof(VkPhysicalDeviceFeatures, sparseResidencyImage2D),
        offsetof(VkPhysicalDeviceFeatures, sparseResidencyImage3D),   offsetof(VkPhysicalDeviceFeatures, sparseResidency2Samples),
        offsetof(VkPhysicalDeviceFeatures, sparseResidency4Samples),  offsetof(VkPhysicalDeviceFeatures, sparseResidency8Samples),
        offsetof(VkPhysicalDeviceFeatures, sparseResidency16Samples), offsetof(VkPhysicalDeviceFeatures, sparseResidencyAliased)};
}

static utils::UUID GenerateUUID(const uint8_t uuid[VK_UUID_SIZE]) {
    // Mask XOR'd with the incoming UUID to update its timestamp to something new and unique
    uint8_t xor_mask[VK_UUID_SIZE] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
                                      0x1F, 0x2E, 0x3D, 0x4C, 0x5B, 0x6A, 0x79, 0x88};
    for (uint8_t i = 0; i < VK_UUID_SIZE; ++i) {
        xor_mask[i] = xor_mask[i] ^ uuid[i];
    }
    return utils::UUID(xor_mask);
}

static std::string GenerateDriverInfo(char driver_name[VK_MAX_DRIVER_NAME_SIZE], char driver_info[VK_MAX_DRIVER_INFO_SIZE]) {
    return std::string("Vulkan driver: ") + std::string(driver_name) + " (" + std::string(driver_info) + ")";
}

PhysicalDevice::PhysicalDevice(VkPhysicalDevice physical_device, Instance& instance)
    : Dispatchable(),
      NEXT(physical_device, instance.VkDispatch(), icd::FaultHandler::Nil()),
      instance_(instance),
      logger_(instance.Log(), VK_OBJECT_TYPE_PHYSICAL_DEVICE, physical_device),
      display_manager_(instance.GetDisplayManager(), *this) {
    // Initialize extensions from the underlying Vulkan implementation
    uint32_t device_extension_count = 0;
    VkResult result = NEXT::EnumerateDeviceExtensionProperties(nullptr, &device_extension_count, nullptr);
    if (result >= VK_SUCCESS) {
        device_extension_list_.resize(device_extension_count);
        result = NEXT::EnumerateDeviceExtensionProperties(nullptr, &device_extension_count, device_extension_list_.data());
        if (result >= VK_SUCCESS) {
            // Save original Vulkan extensions
            for (const auto& device_extension : device_extension_list_) {
                vk_device_extensions_.insert(vk::GetExtensionNumber(device_extension.extensionName));
            }
            // Filter and add Vulkan SC extensions
            device_extension_list_ = icd::GetVulkanSCExtensionList(Log(), device_extension_list_, vksc::GetDeviceExtensionsMap());
            // Save updated Vulkan SC exensions
            for (const auto& device_extension : device_extension_list_) {
                device_extensions_.insert(GetExtensionNumber(device_extension.extensionName));
            }
        } else {
            device_extension_list_.clear();
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

bool PhysicalDevice::RecyclePipelineMemory() const { return ICD.Environment().RecyclePipelineMemory(); }

VkResult PhysicalDevice::EnumerateDeviceExtensionProperties(const char* pLayerName, uint32_t* pPropertyCount,
                                                            VkExtensionProperties* pProperties) {
    VkResult result = VK_SUCCESS;

    if (pLayerName != nullptr) {
        Log().Warning("VKSC-EMU-DeviceExtensions-UnexpectedLayerName",
                      "vkEnumerateDeviceExtensionProperties is called with pLayerName != nullptr");
    }

    if (pProperties == nullptr) {
        *pPropertyCount = static_cast<uint32_t>(device_extension_list_.size());
    } else {
        if (*pPropertyCount < device_extension_list_.size()) {
            result = VK_INCOMPLETE;
        }
        *pPropertyCount = std::min(*pPropertyCount, static_cast<uint32_t>(device_extension_list_.size()));
        for (uint32_t i = 0; i < *pPropertyCount; ++i) {
            pProperties[i] = device_extension_list_[i];
        }
    }

    return result;
}

VkResult PhysicalDevice::CreateDevice(const VkDeviceCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator,
                                      VkDevice* pDevice) {
    // Vulkan SC limits the supported physical device features. If a logical device is requested with any of those features,
    // VK_ERROR_FEATURE_NOT_PRESENT shall be returned, even if the underlying device would support them.
    if (pCreateInfo->pEnabledFeatures != nullptr) {
        for (const auto& offset : UnsupportedFeatureOffsets()) {
            if (*reinterpret_cast<const VkBool32*>(reinterpret_cast<const char*>(pCreateInfo->pEnabledFeatures) + offset) ==
                VK_TRUE) {
                return VK_ERROR_FEATURE_NOT_PRESENT;
            }
        }
    }
    auto features2 = vku::FindStructInPNextChain<VkPhysicalDeviceFeatures2>(pCreateInfo->pNext);
    if (features2 != nullptr) {
        for (const auto& offset : UnsupportedFeatureOffsets()) {
            if (*reinterpret_cast<const VkBool32*>(reinterpret_cast<const char*>(&features2->features) + offset) == VK_TRUE) {
                return VK_ERROR_FEATURE_NOT_PRESENT;
            }
        }
    }
    // Construct the Vulkan version of the create info with appropriate filtering and handle unwrapping
    icd::ShadowStack::Frame stack_frame{};
    VkDeviceCreateInfo vk_create_info = *pCreateInfo;
    icd::ModifiablePNextChain vk_mod_pnext_chain(stack_frame, vk_create_info);

    // We need to unwrap physical device handles in the device group info
    auto vk_mod_device_group_info = vk_mod_pnext_chain.GetStruct<VkDeviceGroupDeviceCreateInfo>();
    if (vk_mod_device_group_info != nullptr) {
        auto physical_devices = stack_frame.Alloc<VkPhysicalDevice>(vk_mod_device_group_info->physicalDeviceCount);
        for (uint32_t i = 0; i < vk_mod_device_group_info->physicalDeviceCount; ++i) {
            physical_devices[i] = vksc::PhysicalDevice::FromHandle(vk_mod_device_group_info->pPhysicalDevices[i])->VkHandle();
        }
        vk_mod_device_group_info->pPhysicalDevices = physical_devices;
    }

    // We need to filter emulated extensions
    auto vk_enabled_extension_names = stack_frame.Alloc<const char*>(pCreateInfo->enabledExtensionCount);
    vk_create_info.enabledExtensionCount = 0;
    vk_create_info.ppEnabledExtensionNames = vk_enabled_extension_names;
    for (uint32_t i = 0; i < pCreateInfo->enabledExtensionCount; ++i) {
        vksc::ExtensionNumber ext_num = vksc::GetExtensionNumber(pCreateInfo->ppEnabledExtensionNames[i]);
        if (IsDeviceExtensionSupported(ext_num)) {
            if (!IsDeviceExtensionEmulated(ext_num)) {
                // Not an emulated extension, include it in the Vulkan create info
                vk_enabled_extension_names[vk_create_info.enabledExtensionCount++] = pCreateInfo->ppEnabledExtensionNames[i];
            }
        } else {
            Log().Error("VKSC-EMU-CreateDevice-UnsupportedExtension", "Unsupported device extension '%s'",
                        pCreateInfo->ppEnabledExtensionNames[i]);
            return VK_ERROR_EXTENSION_NOT_PRESENT;
        }
    }

    // Filter all Vulkan SC structures
    vk_create_info.pNext = vk_mod_pnext_chain.RemoveAllStructsFromChain<VkPerformanceQueryReservationInfoKHR>()
                               .RemoveAllStructsFromChain<VkFaultCallbackInfo>()
                               .RemoveAllStructsFromChain<VkDeviceObjectReservationCreateInfo>()
                               .RemoveAllStructsFromChain<VkPhysicalDeviceVulkanSC10Features>()
#ifdef VK_USE_PLATFORM_SCI
                               .RemoveAllStructsFromChain<VkDeviceSemaphoreSciSyncPoolReservationCreateInfoNV>()
#endif
                               .GetModifiedPNext();

    // Create device
    VkDevice device = VK_NULL_HANDLE;
    VkResult result = NEXT::CreateDevice(&vk_create_info, pAllocator, &device);
    if (result >= VK_SUCCESS) {
        *pDevice = vksc::Device::Create(device, *this, *pCreateInfo);
        result = vksc::Device::FromHandle(*pDevice)->GetStatus();
        if (result < VK_SUCCESS) {
            vksc::Device::FromHandle(*pDevice)->DestroyDevice(pAllocator);
        }
    }
    return result;
}

void PhysicalDevice::UpdatePhysicalDeviceFeaturesForVulkanSC(VkPhysicalDeviceFeatures& features) {
    // Update physical device features to reflect Vulkan SC limitations
    for (const auto& offset : UnsupportedFeatureOffsets()) {
        *reinterpret_cast<VkBool32*>(reinterpret_cast<char*>(&features) + offset) = VK_FALSE;
    }
}

void PhysicalDevice::GetPhysicalDeviceFeatures(VkPhysicalDeviceFeatures* pFeatures) {
    NEXT::GetPhysicalDeviceFeatures(pFeatures);
    UpdatePhysicalDeviceFeaturesForVulkanSC(*pFeatures);
}

void PhysicalDevice::GetPhysicalDeviceFeatures2(VkPhysicalDeviceFeatures2* pFeatures) {
    NEXT::GetPhysicalDeviceFeatures2(pFeatures);
    UpdatePhysicalDeviceFeaturesForVulkanSC(pFeatures->features);

    // Handle Vulkan SC specific features
    auto sc_10_features = vku::FindStructInPNextChain<VkPhysicalDeviceVulkanSC10Features>(pFeatures->pNext);
    if (sc_10_features != nullptr) {
        sc_10_features->shaderAtomicInstructions = VK_TRUE;
    }
}

void PhysicalDevice::UpdatePhysicalDevicePropertiesForVulkanSC(VkPhysicalDeviceProperties& properties) {
    // Update physical device properties to reflect Vulkan SC limitations
    properties.sparseProperties.residencyStandard2DBlockShape = VK_FALSE;
    properties.sparseProperties.residencyStandard2DMultisampleBlockShape = VK_FALSE;
    properties.sparseProperties.residencyStandard3DBlockShape = VK_FALSE;
    properties.sparseProperties.residencyAlignedMipSize = VK_FALSE;
    properties.sparseProperties.residencyNonResidentStrict = VK_FALSE;

    // Patch values that need to be customized as we are an emulation layer
    properties.apiVersion = VK_HEADER_VERSION_COMPLETE;
    properties.driverVersion = VK_HEADER_VERSION_COMPLETE;
    properties.vendorID = VK_VENDOR_ID_KHRONOS;
    properties.deviceID = VK_VENDOR_ID_KHRONOS | properties.deviceID;
    utils::UUID(utils::EmulationPipelineCacheUUID).CopyToArray(properties.pipelineCacheUUID);
}

void PhysicalDevice::GetPhysicalDeviceProperties(VkPhysicalDeviceProperties* pProperties) {
    NEXT::GetPhysicalDeviceProperties(pProperties);
    UpdatePhysicalDevicePropertiesForVulkanSC(*pProperties);
}

void PhysicalDevice::GetPhysicalDeviceProperties2(VkPhysicalDeviceProperties2* pProperties) {
    NEXT::GetPhysicalDeviceProperties2(pProperties);
    UpdatePhysicalDevicePropertiesForVulkanSC(pProperties->properties);

    // Handle Vulkan SC specific properties
    auto sc_10_props = vku::FindStructInPNextChain<VkPhysicalDeviceVulkanSC10Properties>(pProperties->pNext);
    if (sc_10_props != nullptr) {
        sc_10_props->deviceNoDynamicHostAllocations = VK_FALSE;
        sc_10_props->deviceDestroyFreesMemory = VK_TRUE;
        sc_10_props->commandPoolMultipleCommandBuffersRecording = VK_TRUE;
        sc_10_props->commandPoolResetCommandBuffer = VK_TRUE;
        sc_10_props->commandBufferSimultaneousUse = VK_TRUE;
        sc_10_props->secondaryCommandBufferNullOrImagelessFramebuffer = VK_TRUE;
        sc_10_props->recycleDescriptorSetMemory = VK_TRUE;
        sc_10_props->recyclePipelineMemory = RecyclePipelineMemory() ? VK_TRUE : VK_FALSE;
        sc_10_props->maxRenderPassSubpasses = 1;
        sc_10_props->maxRenderPassDependencies = 18;
        sc_10_props->maxSubpassInputAttachments = 0;
        sc_10_props->maxSubpassPreserveAttachments = 0;
        sc_10_props->maxFramebufferAttachments = std::max(pProperties->properties.limits.maxColorAttachments * 2u + 1u, 9u);
        sc_10_props->maxDescriptorSetLayoutBindings = 64;
        sc_10_props->maxQueryFaultCount = GetMaxQueryFaultCount();
        sc_10_props->maxCallbackFaultCount = 1;
        sc_10_props->maxCommandPoolCommandBuffers = 256;
        sc_10_props->maxCommandBufferSize = GetMaxCommandBufferSize();
    }

    // Update device ID and driver properties
    const char* driver_name = "Vulkan SC Emulation on Vulkan";
    auto id_props = vku::FindStructInPNextChain<VkPhysicalDeviceIDProperties>(pProperties->pNext);
    if (id_props) {
        // Customize UUIDs / LUIDs to avoid collisions
        GenerateUUID(id_props->deviceUUID).CopyToArray(id_props->deviceUUID);
        GenerateUUID(id_props->driverUUID).CopyToArray(id_props->driverUUID);
        id_props->deviceLUIDValid = VK_FALSE;
    }
    auto driver_props = vku::FindStructInPNextChain<VkPhysicalDeviceDriverProperties>(pProperties->pNext);
    if (driver_props) {
        driver_props->driverID = VK_DRIVER_ID_VULKAN_SC_EMULATION_ON_VULKAN;
        auto driver_info = GenerateDriverInfo(driver_props->driverName, driver_props->driverInfo);
        memset(driver_props->driverName, 0, VK_MAX_DRIVER_NAME_SIZE);
        strncpy(driver_props->driverName, driver_name, VK_MAX_DRIVER_NAME_SIZE - 1);
        strncpy(driver_props->driverInfo, driver_info.c_str(), VK_MAX_DRIVER_INFO_SIZE - 1);
        driver_props->conformanceVersion = {0, 0, 0, 0};
    }
    auto vk11_props = vku::FindStructInPNextChain<VkPhysicalDeviceVulkan11Properties>(pProperties->pNext);
    if (vk11_props) {
        // Customize UUIDs / LUIDs to avoid collisions
        GenerateUUID(vk11_props->deviceUUID).CopyToArray(vk11_props->deviceUUID);
        GenerateUUID(vk11_props->driverUUID).CopyToArray(vk11_props->driverUUID);
        vk11_props->deviceLUIDValid = VK_FALSE;
    }
    auto vk12_props = vku::FindStructInPNextChain<VkPhysicalDeviceVulkan12Properties>(pProperties->pNext);
    if (vk12_props) {
        vk12_props->driverID = VK_DRIVER_ID_VULKAN_SC_EMULATION_ON_VULKAN;
        auto driver_info = GenerateDriverInfo(vk12_props->driverName, vk12_props->driverInfo);
        memset(vk12_props->driverName, 0, VK_MAX_DRIVER_NAME_SIZE);
        strncpy(vk12_props->driverName, driver_name, VK_MAX_DRIVER_NAME_SIZE - 1);
        strncpy(vk12_props->driverInfo, driver_info.c_str(), VK_MAX_DRIVER_INFO_SIZE - 1);
        vk12_props->conformanceVersion = {0, 0, 0, 0};
    }
}

VkResult PhysicalDevice::GetPhysicalDeviceRefreshableObjectTypesKHR(uint32_t* pRefreshableObjectTypeCount,
                                                                    VkObjectType* pRefreshableObjectTypes) {
    // TODO: Add implementation if we would like to expose support for VK_KHR_object_refresh in the future
    return VK_SUCCESS;
}

VkResult PhysicalDevice::GetPhysicalDeviceFragmentShadingRatesKHR(uint32_t* pFragmentShadingRateCount,
                                                                  VkPhysicalDeviceFragmentShadingRateKHR* pFragmentShadingRates) {
    VkResult result = NEXT::GetPhysicalDeviceFragmentShadingRatesKHR(pFragmentShadingRateCount, pFragmentShadingRates);
    // The spec requires ~0 to be returned in VkPhysicalDeviceFragmentShadingRateKHR::sampleCount
    // when VkPhysicalDeviceFragmentShadingRateKHR::fragmentSize == {1, 1}, even though that is technically
    // not a value comprising of valid, well defined bit flags, so we have to work this around here manually
    // because the result sanitization logic will remove all the bits from flags that are not defined in
    // in Vulkan SC API.
    if (result >= VK_SUCCESS && pFragmentShadingRates != nullptr) {
        for (uint32_t i = 0; i < *pFragmentShadingRateCount; ++i) {
            auto& entry = pFragmentShadingRates[i];
            if (entry.fragmentSize.width == 1 && entry.fragmentSize.height == 1) {
                entry.sampleCounts = 0xFFFFFFFF;
            }
        }
    }
    return result;
}

#if defined(VK_USE_PLATFORM_WIN32_KHR)
VkResult PhysicalDevice::AcquireWinrtDisplayNV(VkDisplayKHR display) {
    auto emulated_display = GetDisplayManager().GetEmulatedDisplayFromHandle(display);
    if (emulated_display != nullptr) {
        // Our emulated displays are not owned by WinRT
        return VK_SUCCESS;
    } else {
        return NEXT::AcquireWinrtDisplayNV(display);
    }
}
#endif

VkResult PhysicalDevice::ReleaseDisplayEXT(VkDisplayKHR display) {
    auto emulated_display = GetDisplayManager().GetEmulatedDisplayFromHandle(display);
    if (emulated_display != nullptr) {
        // Our emulated displays are never owned by any window system
        return VK_SUCCESS;
    } else {
        return NEXT::ReleaseDisplayEXT(display);
    }
}

VkResult PhysicalDevice::GetPhysicalDeviceDisplayPropertiesKHR(uint32_t* pPropertyCount, VkDisplayPropertiesKHR* pProperties) {
    VkResult result = VK_SUCCESS;
    if (pProperties != nullptr) {
        uint32_t properties_written = 0;
        // Write emulated display properties first
        for (const auto& display : GetDisplayManager().GetDisplays()) {
            if (properties_written < *pPropertyCount) {
                pProperties[properties_written++] = display->GetProperties();
            } else {
                result = VK_INCOMPLETE;
                break;
            }
        }
        // Then write native display properties if available
        if (properties_written <= *pPropertyCount) {
            uint32_t properties_remaining = *pPropertyCount - properties_written;
            if (ICD.IsInstanceExtensionSupported(vk::ExtensionNumber::KHR_display)) {
                result = NEXT::GetPhysicalDeviceDisplayPropertiesKHR(&properties_remaining, &pProperties[properties_written]);
                properties_written += properties_remaining;
            }
        }
        *pPropertyCount = properties_written;
    } else {
        // Query native display count first if available
        if (ICD.IsInstanceExtensionSupported(vk::ExtensionNumber::KHR_display)) {
            result = NEXT::GetPhysicalDeviceDisplayPropertiesKHR(pPropertyCount, nullptr);
        } else {
            *pPropertyCount = 0;
        }
        // Add emulated display count
        *pPropertyCount += ICD.GetDisplayManager().GetDisplayCount();
    }
    return result;
}

VkResult PhysicalDevice::GetPhysicalDeviceDisplayProperties2KHR(uint32_t* pPropertyCount, VkDisplayProperties2KHR* pProperties) {
    VkResult result = VK_SUCCESS;
    if (pProperties != nullptr) {
        uint32_t properties_written = 0;
        // Write emulated display properties first
        for (const auto& display : GetDisplayManager().GetDisplays()) {
            if (properties_written < *pPropertyCount) {
                pProperties[properties_written++].displayProperties = display->GetProperties();
            } else {
                result = VK_INCOMPLETE;
                break;
            }
        }
        // Then write native display properties if available
        if (properties_written <= *pPropertyCount) {
            uint32_t properties_remaining = *pPropertyCount - properties_written;
            if (ICD.IsInstanceExtensionSupported(vk::ExtensionNumber::KHR_get_display_properties2)) {
                result = NEXT::GetPhysicalDeviceDisplayProperties2KHR(&properties_remaining, &pProperties[properties_written]);
                properties_written += properties_remaining;
            } else if (ICD.IsInstanceExtensionSupported(vk::ExtensionNumber::KHR_display)) {
                icd::ShadowStack::Frame stack_frame{};
                auto props = stack_frame.Alloc<VkDisplayPropertiesKHR>(properties_remaining);
                result = NEXT::GetPhysicalDeviceDisplayPropertiesKHR(&properties_remaining, props);
                for (uint32_t i = 0; i < properties_remaining; ++i) {
                    pProperties[properties_written++].displayProperties = props[i];
                }
            }
        }
        *pPropertyCount = properties_written;
    } else {
        // Query native display count first if available
        if (ICD.IsInstanceExtensionSupported(vk::ExtensionNumber::KHR_get_display_properties2)) {
            result = NEXT::GetPhysicalDeviceDisplayProperties2KHR(pPropertyCount, nullptr);
        } else if (ICD.IsInstanceExtensionSupported(vk::ExtensionNumber::KHR_display)) {
            result = NEXT::GetPhysicalDeviceDisplayPropertiesKHR(pPropertyCount, nullptr);
        } else {
            *pPropertyCount = 0;
        }
        // Add emulated display count
        *pPropertyCount += ICD.GetDisplayManager().GetDisplayCount();
    }
    return result;
}

VkResult PhysicalDevice::GetPhysicalDeviceDisplayPlanePropertiesKHR(uint32_t* pPropertyCount,
                                                                    VkDisplayPlanePropertiesKHR* pProperties) {
    VkResult result = VK_SUCCESS;
    if (pProperties != nullptr) {
        uint32_t properties_written = 0;
        // Write emulated display plane properties first
        for (const auto& display : GetDisplayManager().GetDisplays()) {
            if (properties_written < *pPropertyCount) {
                pProperties[properties_written].currentDisplay = display->VkSCHandle();
                pProperties[properties_written].currentStackIndex = 0;
                properties_written++;
            } else {
                result = VK_INCOMPLETE;
                break;
            }
        }

        // Then write native display plane properties if available
        if (properties_written <= *pPropertyCount) {
            uint32_t properties_remaining = *pPropertyCount - properties_written;
            if (ICD.IsInstanceExtensionSupported(vk::ExtensionNumber::KHR_display)) {
                icd::ShadowStack::Frame stack_frame{};
                auto props = stack_frame.Alloc<VkDisplayPlanePropertiesKHR>(properties_remaining);
                result = NEXT::GetPhysicalDeviceDisplayPlanePropertiesKHR(&properties_remaining, props);
                for (uint32_t i = 0; i < properties_remaining; ++i) {
                    pProperties[properties_written++] = props[i];
                }
            }
        }
        *pPropertyCount = properties_written;
    } else {
        // Query native display plane count first if available
        if (ICD.IsInstanceExtensionSupported(vk::ExtensionNumber::KHR_display)) {
            result = NEXT::GetPhysicalDeviceDisplayPlanePropertiesKHR(pPropertyCount, nullptr);
        } else {
            *pPropertyCount = 0;
        }
        // If there are emulated displays make sure to report at least one display plane for each of them
        *pPropertyCount += ICD.GetDisplayManager().GetDisplayCount();
    }
    return result;
}

VkResult PhysicalDevice::GetPhysicalDeviceDisplayPlaneProperties2KHR(uint32_t* pPropertyCount,
                                                                     VkDisplayPlaneProperties2KHR* pProperties) {
    VkResult result = VK_SUCCESS;
    if (pProperties != nullptr) {
        uint32_t properties_written = 0;
        // Write emulated display plane properties first
        for (const auto& display : GetDisplayManager().GetDisplays()) {
            if (properties_written < *pPropertyCount) {
                pProperties[properties_written].displayPlaneProperties.currentDisplay = display->VkSCHandle();
                pProperties[properties_written].displayPlaneProperties.currentStackIndex = 0;
                properties_written++;
            } else {
                result = VK_INCOMPLETE;
                break;
            }
        }

        // Then write native display plane properties if available
        if (properties_written <= *pPropertyCount) {
            uint32_t properties_remaining = *pPropertyCount - properties_written;
            if (ICD.IsInstanceExtensionSupported(vk::ExtensionNumber::KHR_get_display_properties2)) {
                result = NEXT::GetPhysicalDeviceDisplayPlaneProperties2KHR(&properties_remaining, &pProperties[properties_written]);
                properties_written += properties_remaining;
            } else if (ICD.IsInstanceExtensionSupported(vk::ExtensionNumber::KHR_display)) {
                icd::ShadowStack::Frame stack_frame{};
                auto props = stack_frame.Alloc<VkDisplayPlanePropertiesKHR>(properties_remaining);
                result = NEXT::GetPhysicalDeviceDisplayPlanePropertiesKHR(&properties_remaining, props);
                for (uint32_t i = 0; i < properties_remaining; ++i) {
                    pProperties[properties_written++].displayPlaneProperties = props[i];
                }
            }
        }
        *pPropertyCount = properties_written;
    } else {
        // Query native display plane count first if available
        if (ICD.IsInstanceExtensionSupported(vk::ExtensionNumber::KHR_get_display_properties2)) {
            result = NEXT::GetPhysicalDeviceDisplayPlaneProperties2KHR(pPropertyCount, nullptr);
        } else if (ICD.IsInstanceExtensionSupported(vk::ExtensionNumber::KHR_display)) {
            result = NEXT::GetPhysicalDeviceDisplayPlanePropertiesKHR(pPropertyCount, nullptr);
        } else {
            *pPropertyCount = 0;
        }
        // If there are emulated displays make sure to report at least one display plane for each of them
        *pPropertyCount += ICD.GetDisplayManager().GetDisplayCount();
    }
    return result;
}

VkResult PhysicalDevice::GetDisplayPlaneSupportedDisplaysKHR(uint32_t planeIndex, uint32_t* pDisplayCount,
                                                             VkDisplayKHR* pDisplays) {
    VkResult result = VK_SUCCESS;
    const uint32_t emulated_display_count = ICD.GetDisplayManager().GetDisplayCount();
    if (pDisplays != nullptr) {
        // The first planes are dedicated to the individual emulated displays
        if (planeIndex < emulated_display_count) {
            // Emulated display planes support only their corresponding display
            if (*pDisplayCount > 0) {
                pDisplays[0] = GetDisplayManager().GetDisplays()[planeIndex]->VkSCHandle();
                *pDisplayCount = 1;
            } else {
                result = VK_INCOMPLETE;
            }
        } else if (ICD.IsInstanceExtensionSupported(vk::ExtensionNumber::KHR_display)) {
            const uint32_t native_plane_index = planeIndex - emulated_display_count;
            result = NEXT::GetDisplayPlaneSupportedDisplaysKHR(native_plane_index, pDisplayCount, pDisplays);
        } else {
            *pDisplayCount = 0;
        }
    } else {
        if (planeIndex < emulated_display_count) {
            // Emulated display planes support only their corresponding display
            *pDisplayCount = 1;
        } else if (ICD.IsInstanceExtensionSupported(vk::ExtensionNumber::KHR_display)) {
            const uint32_t native_plane_index = planeIndex - emulated_display_count;
            result = NEXT::GetDisplayPlaneSupportedDisplaysKHR(native_plane_index, pDisplayCount, pDisplays);
        } else {
            *pDisplayCount = 0;
        }
    }
    return result;
}

VkResult PhysicalDevice::GetDisplayModePropertiesKHR(VkDisplayKHR display, uint32_t* pPropertyCount,
                                                     VkDisplayModePropertiesKHR* pProperties) {
    VkResult result = VK_SUCCESS;
    auto emulated_display = GetDisplayManager().GetEmulatedDisplayFromHandle(display);
    if (emulated_display != nullptr) {
        if (pProperties != nullptr) {
            uint32_t properties_written = 0;
            for (const auto& display_mode : emulated_display->GetPredefinedModes()) {
                if (properties_written < *pPropertyCount) {
                    pProperties[properties_written].displayMode = display_mode->VkSCHandle();
                    pProperties[properties_written].parameters = display_mode->GetParameters();
                    properties_written++;
                } else {
                    result = VK_INCOMPLETE;
                    break;
                }
            }
            *pPropertyCount = properties_written;
        } else {
            *pPropertyCount = static_cast<uint32_t>(emulated_display->GetPredefinedModes().size());
        }
    } else if (ICD.IsInstanceExtensionSupported(vk::ExtensionNumber::KHR_display)) {
        // Assume that the display handle is a Vulkan one
        result = NEXT::GetDisplayModePropertiesKHR(display, pPropertyCount, pProperties);
    } else {
        // If all other options fail then this has to be an invalid handle
        result = VK_ERROR_VALIDATION_FAILED;
        *pPropertyCount = 0;
    }
    return result;
}

VkResult PhysicalDevice::GetDisplayModeProperties2KHR(VkDisplayKHR display, uint32_t* pPropertyCount,
                                                      VkDisplayModeProperties2KHR* pProperties) {
    VkResult result = VK_SUCCESS;
    auto emulated_display = GetDisplayManager().GetEmulatedDisplayFromHandle(display);
    if (emulated_display != nullptr) {
        if (pProperties != nullptr) {
            uint32_t properties_written = 0;
            for (const auto& display_mode : emulated_display->GetPredefinedModes()) {
                if (properties_written < *pPropertyCount) {
                    pProperties[properties_written].displayModeProperties.displayMode = display_mode->VkSCHandle();
                    pProperties[properties_written].displayModeProperties.parameters = display_mode->GetParameters();
                    properties_written++;
                } else {
                    result = VK_INCOMPLETE;
                    break;
                }
            }
            *pPropertyCount = properties_written;
        } else {
            *pPropertyCount = static_cast<uint32_t>(emulated_display->GetPredefinedModes().size());
        }
    } else if (ICD.IsInstanceExtensionSupported(vk::ExtensionNumber::KHR_get_display_properties2)) {
        // Assume that the display handle is a Vulkan one
        result = NEXT::GetDisplayModeProperties2KHR(display, pPropertyCount, pProperties);
    } else if (ICD.IsInstanceExtensionSupported(vk::ExtensionNumber::KHR_display)) {
        // Emulate GDP2 if the underlying Vulkan implementation does not support it
        if (pProperties != nullptr) {
            icd::ShadowStack::Frame stack_frame{};
            auto props = stack_frame.Alloc<VkDisplayModePropertiesKHR>(*pPropertyCount);
            result = NEXT::GetDisplayModePropertiesKHR(display, pPropertyCount, props);
            for (uint32_t i = 0; i < *pPropertyCount; ++i) {
                pProperties[i].displayModeProperties = props[i];
            }
        } else {
            result = NEXT::GetDisplayModePropertiesKHR(display, pPropertyCount, nullptr);
        }
    } else {
        // If all other options fail then this has to be an invalid handle
        result = VK_ERROR_VALIDATION_FAILED;
        *pPropertyCount = 0;
    }
    return result;
}

VkResult PhysicalDevice::CreateDisplayModeKHR(VkDisplayKHR display, const VkDisplayModeCreateInfoKHR* pCreateInfo,
                                              const VkAllocationCallbacks* pAllocator, VkDisplayModeKHR* pMode) {
    auto emulated_display = GetDisplayManager().GetEmulatedDisplayFromHandle(display);
    if (emulated_display != nullptr) {
        auto display_mode = GetDisplayManager().CreateDisplayMode(*emulated_display, pCreateInfo->parameters);
        if (display_mode != nullptr) {
            *pMode = display_mode->VkSCHandle();
            return VK_SUCCESS;
        } else {
            return VK_ERROR_INITIALIZATION_FAILED;
        }
    } else {
        return NEXT::CreateDisplayModeKHR(display, pCreateInfo, pAllocator, pMode);
    }
}

VkResult PhysicalDevice::GetDisplayPlaneCapabilitiesKHR(VkDisplayModeKHR mode, uint32_t planeIndex,
                                                        VkDisplayPlaneCapabilitiesKHR* pCapabilities) {
    const uint32_t emulated_display_count = ICD.GetDisplayManager().GetDisplayCount();
    auto emulated_display_mode = GetDisplayManager().GetEmulatedDisplayModeFromHandle(mode);
    if (emulated_display_mode != nullptr) {
        *pCapabilities = emulated_display_mode->GetDisplayPlaneCapabilities(planeIndex);
        return VK_SUCCESS;
    } else if (planeIndex < emulated_display_count) {
        // Emulated display plane cannot be used with native Vulkan display
        *pCapabilities = VkDisplayPlaneCapabilitiesKHR{};
        return VK_SUCCESS;
    } else {
        const uint32_t native_plane_index = planeIndex - emulated_display_count;
        return NEXT::GetDisplayPlaneCapabilitiesKHR(mode, native_plane_index, pCapabilities);
    }
}

VkResult PhysicalDevice::GetDisplayPlaneCapabilities2KHR(const VkDisplayPlaneInfo2KHR* pDisplayPlaneInfo,
                                                         VkDisplayPlaneCapabilities2KHR* pCapabilities) {
    const uint32_t emulated_display_count = ICD.GetDisplayManager().GetDisplayCount();
    auto emulated_display_mode = GetDisplayManager().GetEmulatedDisplayModeFromHandle(pDisplayPlaneInfo->mode);
    if (emulated_display_mode != nullptr && pDisplayPlaneInfo->planeIndex < emulated_display_count) {
        pCapabilities->capabilities = emulated_display_mode->GetDisplayPlaneCapabilities(pDisplayPlaneInfo->planeIndex);
        return VK_SUCCESS;
    } else if (ICD.IsInstanceExtensionSupported(vk::ExtensionNumber::KHR_get_display_properties2)) {
        auto display_plane_info = *pDisplayPlaneInfo;
        display_plane_info.planeIndex -= emulated_display_count;
        return NEXT::GetDisplayPlaneCapabilities2KHR(&display_plane_info, pCapabilities);
    } else if (ICD.IsInstanceExtensionSupported(vk::ExtensionNumber::KHR_display)) {
        const uint32_t native_plane_index = pDisplayPlaneInfo->planeIndex - emulated_display_count;
        return NEXT::GetDisplayPlaneCapabilitiesKHR(pDisplayPlaneInfo->mode, native_plane_index, &pCapabilities->capabilities);
    } else {
        // Emulated display plane cannot be used with native Vulkan display
        pCapabilities->capabilities = VkDisplayPlaneCapabilitiesKHR{};
        return VK_SUCCESS;
    }
}

}  // namespace vksc
