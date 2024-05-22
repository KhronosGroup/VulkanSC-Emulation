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
#include "icd_defs.h"
#include "uuid.h"

namespace vksc {

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

void PhysicalDevice::UpdatePhysicalDeviceFeaturesForVulkanSC(VkPhysicalDeviceFeatures& features) {
    // Update physical device features to reflect Vulkan SC limitations
    features.shaderResourceResidency = VK_FALSE;
    features.sparseBinding = VK_FALSE;
    features.sparseResidencyBuffer = VK_FALSE;
    features.sparseResidencyImage2D = VK_FALSE;
    features.sparseResidencyImage3D = VK_FALSE;
    features.sparseResidency2Samples = VK_FALSE;
    features.sparseResidency4Samples = VK_FALSE;
    features.sparseResidency8Samples = VK_FALSE;
    features.sparseResidency16Samples = VK_FALSE;
    features.sparseResidencyAliased = VK_FALSE;
}

void PhysicalDevice::GetPhysicalDeviceFeatures(VkPhysicalDeviceFeatures* pFeatures) {
    vk::PhysicalDevice::GetPhysicalDeviceFeatures(pFeatures);
    UpdatePhysicalDeviceFeaturesForVulkanSC(*pFeatures);
}

void PhysicalDevice::GetPhysicalDeviceFeatures2(VkPhysicalDeviceFeatures2* pFeatures) {
    vk::PhysicalDevice::GetPhysicalDeviceFeatures2(pFeatures);
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
    properties.driverVersion = VKSC_EMU_ICD_VERSION;
    properties.vendorID = VK_VENDOR_ID_KHRONOS;
    properties.deviceID = VK_VENDOR_ID_KHRONOS | properties.deviceID;
    utils::UUID(utils::EmulationPipelineCacheUUID).CopyToArray(properties.pipelineCacheUUID);
}

void PhysicalDevice::GetPhysicalDeviceProperties(VkPhysicalDeviceProperties* pProperties) {
    vk::PhysicalDevice::GetPhysicalDeviceProperties(pProperties);
    UpdatePhysicalDevicePropertiesForVulkanSC(*pProperties);
}

void PhysicalDevice::GetPhysicalDeviceProperties2(VkPhysicalDeviceProperties2* pProperties) {
    vk::PhysicalDevice::GetPhysicalDeviceProperties2(pProperties);
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
        sc_10_props->recyclePipelineMemory = VK_TRUE;
        sc_10_props->maxRenderPassSubpasses = 1;
        sc_10_props->maxRenderPassDependencies = 18;
        sc_10_props->maxSubpassInputAttachments = 0;
        sc_10_props->maxSubpassPreserveAttachments = 0;
        sc_10_props->maxFramebufferAttachments = std::max(pProperties->properties.limits.maxColorAttachments * 2u + 1u, 9u);
        sc_10_props->maxDescriptorSetLayoutBindings = 64;
        sc_10_props->maxQueryFaultCount = 16;
        sc_10_props->maxCallbackFaultCount = 1;
        sc_10_props->maxCommandPoolCommandBuffers = 256;
        sc_10_props->maxCommandBufferSize = 1 << 20;
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

}  // namespace vksc
