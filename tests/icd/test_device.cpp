/*
 * Copyright (c) 2024-2025 The Khronos Group Inc.
 * Copyright (c) 2024-2025 RasterGrid Kft.
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#include "icd_test_framework.h"
#include "uuid.h"

#include <vector>
#include <atomic>
#include <thread>
#include <future>
#include <array>
#include <numeric>
#include <algorithm>

class DeviceTest : public IcdTest {
  public:
    DeviceTest() : IcdTest{} {}

    template <typename T>
    auto GetUnsupportedFeatures(T& f) -> std::array<std::reference_wrapper<decltype(f.shaderResourceResidency)>, 10> {
        return {f.shaderResourceResidency,  f.sparseResidencyBuffer, f.sparseResidencyImage3D, f.sparseResidency4Samples,
                f.sparseResidency16Samples, f.sparseBinding,         f.sparseResidencyImage2D, f.sparseResidency2Samples,
                f.sparseResidency8Samples,  f.sparseResidencyAliased};
    }

    template <typename T>
    auto GetUnsupportedProperties(T& p)
        -> std::array<std::reference_wrapper<decltype(p.sparseProperties.residencyStandard2DBlockShape)>, 5> {
        return {p.sparseProperties.residencyStandard2DBlockShape, p.sparseProperties.residencyStandard2DMultisampleBlockShape,
                p.sparseProperties.residencyStandard3DBlockShape, p.sparseProperties.residencyAlignedMipSize,
                p.sparseProperties.residencyNonResidentStrict};
    }
};

TEST_F(DeviceTest, CreateInfo) {
    TEST_DESCRIPTION("Test if device create info is properly sanitized");

    InitInstance();
    auto physical_device = GetPhysicalDevice();
    VkDevice device = VK_NULL_HANDLE;

    VkMockObject<VkDevice> mock_device{};

    // Test pNext chain filtering
    vkmock::CreateDevice = [&](auto, const auto pCreateInfo, auto, auto pDevice) {
        EXPECT_EQ(vku::FindStructInPNextChain<VkPerformanceQueryReservationInfoKHR>(pCreateInfo->pNext), nullptr);
#ifdef VK_USE_PLATFORM_SCI
        EXPECT_EQ(vku::FindStructInPNextChain<VkDeviceSemaphoreSciSyncPoolReservationCreateInfoNV>(pCreateInfo->pNext), nullptr);
#endif
        EXPECT_EQ(vku::FindStructInPNextChain<VkFaultCallbackInfo>(pCreateInfo->pNext), nullptr);
        EXPECT_EQ(vku::FindStructInPNextChain<VkDeviceObjectReservationCreateInfo>(pCreateInfo->pNext), nullptr);
        EXPECT_EQ(vku::FindStructInPNextChain<VkPhysicalDeviceVulkanSC10Features>(pCreateInfo->pNext), nullptr);
        *pDevice = mock_device;
        return VK_SUCCESS;
    };

#ifdef VK_USE_PLATFORM_SCI
    auto device_sema_sci_sync_pool_reservation_info_nv = vku::InitStruct<VkDeviceSemaphoreSciSyncPoolReservationCreateInfoNV>();
    auto perf_query_reservation_info =
        vku::InitStruct<VkPerformanceQueryReservationInfoKHR>(&device_sema_sci_sync_pool_reservation_info_nv);
#else
    auto perf_query_reservation_info = vku::InitStruct<VkPerformanceQueryReservationInfoKHR>();
#endif
    auto fallback_info = vku::InitStruct<VkFaultCallbackInfo>(&perf_query_reservation_info);
    auto device_reservation_info = vku::InitStruct<VkDeviceObjectReservationCreateInfo>(&fallback_info);
    auto phys_dev_sc_features = vku::InitStruct<VkPhysicalDeviceVulkanSC10Features>(&device_reservation_info);
    auto create_info = vku::InitStruct<VkDeviceCreateInfo>(&phys_dev_sc_features);

    const float queue_priority = 1.f;
    auto queue_info = vku::InitStruct<VkDeviceQueueCreateInfo>();
    queue_info.queueCount = 1;
    queue_info.pQueuePriorities = &queue_priority;

    create_info.queueCreateInfoCount = 1;
    create_info.pQueueCreateInfos = &queue_info;

    EXPECT_EQ(vksc::CreateDevice(physical_device, &create_info, nullptr, &device), VK_SUCCESS);
    vksc::DestroyDevice(device, nullptr);

    vkmock::CreateDevice = [&](auto, auto, auto, auto pDevice) {
        *pDevice = mock_device;
        return VK_SUCCESS;
    };

    VkPhysicalDeviceFeatures features{};
    create_info.pEnabledFeatures = &features;

    for (auto& feature : GetUnsupportedFeatures(features)) {
        feature.get() = VK_TRUE;
        EXPECT_EQ(vksc::CreateDevice(physical_device, &create_info, nullptr, &device), VK_ERROR_FEATURE_NOT_PRESENT);
        feature.get() = VK_FALSE;
    }

    auto features2 = vku::InitStruct<VkPhysicalDeviceFeatures2>(&phys_dev_sc_features);
    create_info.pNext = &features2;
    create_info.pEnabledFeatures = nullptr;

    for (auto& feature : GetUnsupportedFeatures(features2.features)) {
        feature.get() = VK_TRUE;
        EXPECT_EQ(vksc::CreateDevice(physical_device, &create_info, nullptr, &device), VK_ERROR_FEATURE_NOT_PRESENT);
        feature.get() = VK_FALSE;
    }
}

TEST_F(DeviceTest, GetPhysicalDeviceFeatures) {
    TEST_DESCRIPTION("Test if physical device features are properly sanitized");

    InitInstance();
    auto physical_device = GetPhysicalDevice();

    vkmock::GetPhysicalDeviceFeatures = [&](auto, VkPhysicalDeviceFeatures* pFeatures) {
        for (auto& feature : GetUnsupportedFeatures(*pFeatures)) {
            feature.get() = VK_TRUE;
        }
    };

    VkPhysicalDeviceFeatures features{};
    vksc::GetPhysicalDeviceFeatures(physical_device, &features);
    for (auto& feature : GetUnsupportedFeatures(features)) {
        EXPECT_EQ(feature, VK_FALSE);
    }

    vkmock::GetPhysicalDeviceFeatures2 = [&](auto, VkPhysicalDeviceFeatures2* pFeatures) {
        for (auto& feature : GetUnsupportedFeatures(pFeatures->features)) {
            feature.get() = VK_TRUE;
        }
    };

    auto sc_10_features = vku::InitStruct<VkPhysicalDeviceVulkanSC10Features>();
    auto features2 = vku::InitStruct<VkPhysicalDeviceFeatures2>(&sc_10_features);
    vksc::GetPhysicalDeviceFeatures2(physical_device, &features2);
    for (auto& feature : GetUnsupportedFeatures(features2.features)) {
        EXPECT_EQ(feature, VK_FALSE);
    }
    EXPECT_EQ(sc_10_features.shaderAtomicInstructions, VK_TRUE);
}

TEST_F(DeviceTest, GetPhysicalDeviceProperties) {
    TEST_DESCRIPTION("Test if physical device properties are properly altered");

    InitInstance();
    auto physical_device = GetPhysicalDevice();

    vkmock::GetPhysicalDeviceProperties = [&](auto, VkPhysicalDeviceProperties* pProperties) {
        for (auto& property : GetUnsupportedProperties(*pProperties)) {
            property.get() = VK_TRUE;
        }
    };

    VkPhysicalDeviceProperties properties{};
    vksc::GetPhysicalDeviceProperties(physical_device, &properties);
    for (auto& property : GetUnsupportedProperties(properties)) {
        EXPECT_EQ(property, VK_FALSE);
    }

    utils::UUID mock_device_uuid("b23d0e5c-70a0-4d67-8781-99ec3798ed31");
    utils::UUID mock_driver_uuid("1265a236-e369-11ed-b5ea-0242ac120002");

    // We expect the output UUIDs to be derived from the Vulkan UUIDs (see GenerateUUID)
    utils::UUID expected_device_uuid("b23d0e5c-70a0-4d67-98af-a4a06cf294b9");
    utils::UUID expected_driver_uuid("1265a236-e369-11ed-aac4-3f0ef778798a");

    VkDriverId mock_driver_id = VK_DRIVER_ID_AMD_OPEN_SOURCE;
    vkmock::GetPhysicalDeviceProperties2 = [&](auto, VkPhysicalDeviceProperties2* pProperties) {
        for (auto& property : GetUnsupportedProperties(pProperties->properties)) {
            property.get() = VK_TRUE;
        }
        auto dev_id_props = vku::FindStructInPNextChain<VkPhysicalDeviceIDProperties>(pProperties->pNext);
        if (dev_id_props) {
            dev_id_props->deviceLUIDValid = VK_TRUE;
            mock_device_uuid.CopyToArray(dev_id_props->deviceUUID);
            mock_driver_uuid.CopyToArray(dev_id_props->driverUUID);
        }
        auto dev_driver_props = vku::FindStructInPNextChain<VkPhysicalDeviceDriverProperties>(pProperties->pNext);
        if (dev_driver_props) {
            dev_driver_props->driverID = mock_driver_id;
        }
        auto dev_11_props = vku::FindStructInPNextChain<VkPhysicalDeviceVulkan11Properties>(pProperties->pNext);
        if (dev_11_props) {
            dev_11_props->deviceLUIDValid = VK_TRUE;
            mock_device_uuid.CopyToArray(dev_11_props->deviceUUID);
            mock_driver_uuid.CopyToArray(dev_11_props->driverUUID);
        }
        auto dev_12_props = vku::FindStructInPNextChain<VkPhysicalDeviceVulkan12Properties>(pProperties->pNext);
        if (dev_12_props) {
            dev_12_props->driverID = mock_driver_id;
        }
    };

    auto dev_12_props = vku::InitStruct<VkPhysicalDeviceVulkan12Properties>();
    auto dev_11_props = vku::InitStruct<VkPhysicalDeviceVulkan11Properties>(&dev_12_props);
    auto driver_props = vku::InitStruct<VkPhysicalDeviceDriverProperties>(&dev_11_props);
    auto id_properties = vku::InitStruct<VkPhysicalDeviceIDProperties>(&driver_props);
    auto sc_10_properties = vku::InitStruct<VkPhysicalDeviceVulkanSC10Properties>(&id_properties);
    auto properties2 = vku::InitStruct<VkPhysicalDeviceProperties2>(&sc_10_properties);
    vksc::GetPhysicalDeviceProperties2(physical_device, &properties2);
    for (auto& property : GetUnsupportedProperties(properties2.properties)) {
        EXPECT_EQ(property, VK_FALSE);
    }
    EXPECT_NE(sc_10_properties.maxCallbackFaultCount, 0);
    EXPECT_EQ(id_properties.deviceLUIDValid, VK_FALSE);
    EXPECT_STREQ(expected_device_uuid.toString().c_str(), utils::UUID(id_properties.deviceUUID).toString().c_str());
    EXPECT_STREQ(expected_driver_uuid.toString().c_str(), utils::UUID(id_properties.driverUUID).toString().c_str());
    EXPECT_NE(std::string(driver_props.driverName).find("Emulation"), std::string::npos);
    EXPECT_NE(driver_props.driverID, mock_driver_id);
    EXPECT_EQ(driver_props.driverID, VK_DRIVER_ID_VULKAN_SC_EMULATION_ON_VULKAN);
    EXPECT_EQ(dev_11_props.deviceLUIDValid, VK_FALSE);
    EXPECT_STREQ(expected_device_uuid.toString().c_str(), utils::UUID(dev_11_props.deviceUUID).toString().c_str());
    EXPECT_STREQ(expected_driver_uuid.toString().c_str(), utils::UUID(dev_11_props.driverUUID).toString().c_str());
    EXPECT_NE(dev_12_props.driverID, mock_driver_id);
}

TEST_F(DeviceTest, CommandPoolReservationInfo) {
    TEST_DESCRIPTION("Test that SC-specific command pool creation info is correctly removed");

    InitInstance();
    InitDevice();

    vkmock::CreateCommandPool = [](auto, const VkCommandPoolCreateInfo* pCreateInfo, auto, VkCommandPool* pCommandPool) {
        EXPECT_EQ(vku::FindStructInPNextChain<VkCommandPoolMemoryReservationCreateInfo>(pCreateInfo), nullptr);

        static VkMockObject<VkCommandPool> mock_command_pool{};
        *pCommandPool = mock_command_pool;
        return VK_SUCCESS;
    };

    CreateCommandPool(1000);
}
