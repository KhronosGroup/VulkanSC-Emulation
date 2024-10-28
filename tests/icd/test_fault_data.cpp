/*
 * Copyright (c) 2024 The Khronos Group Inc.
 * Copyright (c) 2024 RasterGrid Kft.
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#include "icd_test_framework.h"

#include <vector>
#include <atomic>
#include <thread>
#include <future>

class FaultDataTest : public IcdTest {
  public:
    void GenerateFault() { vksc::ResetCommandPool(device_, VK_NULL_HANDLE, 0); }

    uint32_t GetMaxQueryFaultCount() {
        auto physical_device = InitPhysicalDevice();
        auto vksc_physical_device_props = vku::InitStruct<VkPhysicalDeviceVulkanSC10Properties>();
        auto physical_device_props = vku::InitStruct<VkPhysicalDeviceProperties2>(&vksc_physical_device_props);
        vksc::GetPhysicalDeviceProperties2(physical_device, &physical_device_props);

        return vksc_physical_device_props.maxQueryFaultCount;
    }
};

TEST_F(FaultDataTest, MaxQueryFaultCount) { EXPECT_GE(GetMaxQueryFaultCount(), 16); }

TEST_F(FaultDataTest, Unrecorded) {
    const auto max_fault_count = GetMaxQueryFaultCount();
    auto device = InitDevice();

    std::vector<VkFaultData> faults(max_fault_count);
    for (uint32_t i = 0; i < max_fault_count; ++i) {
        GenerateFault();
    }
    uint32_t fault_count;
    VkBool32 unrecorded_faults;
    vksc::GetFaultData(device, VK_FAULT_QUERY_BEHAVIOR_GET_AND_CLEAR_ALL_FAULTS, &unrecorded_faults, &fault_count, nullptr);
    EXPECT_EQ(fault_count, max_fault_count);
    EXPECT_EQ(unrecorded_faults, VK_FALSE);
    vksc::GetFaultData(device, VK_FAULT_QUERY_BEHAVIOR_GET_AND_CLEAR_ALL_FAULTS, &unrecorded_faults, &fault_count, faults.data());
    EXPECT_EQ(fault_count, max_fault_count);
    vksc::GetFaultData(device, VK_FAULT_QUERY_BEHAVIOR_GET_AND_CLEAR_ALL_FAULTS, &unrecorded_faults, &fault_count, faults.data());
    EXPECT_EQ(fault_count, 0);

    for (uint32_t i = 0; i < max_fault_count; ++i) {
        GenerateFault();
    }
    GenerateFault();
    vksc::GetFaultData(device, VK_FAULT_QUERY_BEHAVIOR_GET_AND_CLEAR_ALL_FAULTS, &unrecorded_faults, &fault_count, nullptr);
    EXPECT_EQ(fault_count, max_fault_count);
    EXPECT_EQ(unrecorded_faults, VK_TRUE);
    vksc::GetFaultData(device, VK_FAULT_QUERY_BEHAVIOR_GET_AND_CLEAR_ALL_FAULTS, &unrecorded_faults, &fault_count, nullptr);
    EXPECT_EQ(fault_count, max_fault_count);
    EXPECT_EQ(unrecorded_faults, VK_FALSE);
}

struct CallbackData {
    uint32_t call_count = 0;
    void Call() { call_count++; }
} callback_data;

TEST_F(FaultDataTest, Callback) {
    const auto max_fault_count = GetMaxQueryFaultCount();

    PFN_vkFaultCallbackFunction callback = [](VkBool32, uint32_t, const VkFaultData*) -> void { callback_data.Call(); };
    auto callback_info = vku::InitStruct<VkFaultCallbackInfo>();
    callback_info.pfnFaultCallback = callback;
    auto device_info = GetDefaultDeviceCreateInfo(&callback_info);
    auto device = InitDevice(&device_info);

    std::vector<VkFaultData> faults(max_fault_count);
    for (uint32_t i = 0; i < max_fault_count; ++i) {
        GenerateFault();
    }
    uint32_t fault_count;
    VkBool32 unrecorded_faults;
    vksc::GetFaultData(device, VK_FAULT_QUERY_BEHAVIOR_GET_AND_CLEAR_ALL_FAULTS, &unrecorded_faults, &fault_count, nullptr);
    EXPECT_EQ(fault_count, max_fault_count);
    EXPECT_EQ(callback_data.call_count, max_fault_count);
    EXPECT_EQ(unrecorded_faults, VK_FALSE);
    vksc::GetFaultData(device, VK_FAULT_QUERY_BEHAVIOR_GET_AND_CLEAR_ALL_FAULTS, &unrecorded_faults, &fault_count, faults.data());
    EXPECT_EQ(fault_count, max_fault_count);
    EXPECT_EQ(callback_data.call_count, max_fault_count);
    vksc::GetFaultData(device, VK_FAULT_QUERY_BEHAVIOR_GET_AND_CLEAR_ALL_FAULTS, &unrecorded_faults, &fault_count, faults.data());
    EXPECT_EQ(fault_count, 0);
    EXPECT_EQ(callback_data.call_count, max_fault_count);

    callback_data.call_count = 0;
    for (uint32_t i = 0; i < max_fault_count; ++i) {
        GenerateFault();
    }
    GenerateFault();
    vksc::GetFaultData(device, VK_FAULT_QUERY_BEHAVIOR_GET_AND_CLEAR_ALL_FAULTS, &unrecorded_faults, &fault_count, nullptr);
    EXPECT_EQ(fault_count, max_fault_count);
    EXPECT_EQ(unrecorded_faults, VK_TRUE);
    EXPECT_EQ(callback_data.call_count, max_fault_count + 1);
    vksc::GetFaultData(device, VK_FAULT_QUERY_BEHAVIOR_GET_AND_CLEAR_ALL_FAULTS, &unrecorded_faults, &fault_count, nullptr);
    EXPECT_EQ(fault_count, max_fault_count);
    EXPECT_EQ(unrecorded_faults, VK_FALSE);
}

struct ThreadSafeCallbackData {
    std::atomic<size_t> call_count = 0;
    void Call() { ++call_count; }
} threadsafe_callback_data;

TEST_F(FaultDataTest, FaultHandlingThreadSafety) {
    const auto max_fault_count = GetMaxQueryFaultCount();

    PFN_vkFaultCallbackFunction callback = [](VkBool32, uint32_t, const VkFaultData*) -> void { threadsafe_callback_data.Call(); };
    auto callback_info = vku::InitStruct<VkFaultCallbackInfo>();
    callback_info.pfnFaultCallback = callback;
    auto device_info = GetDefaultDeviceCreateInfo(&callback_info);
    auto device = InitDevice(&device_info);

    const size_t parallel_call_count = 100'000;
    std::vector<std::future<void>> futures(std::thread::hardware_concurrency());
    for (size_t i = 0; i < futures.size(); ++i) {
        futures[i] = std::async(
            std::launch::async,
            [&](const size_t I) {
                for (size_t j = I * parallel_call_count / futures.size(); j < (I + 1) * parallel_call_count / futures.size(); ++j) {
                    GenerateFault();
                }
            },
            i);
    }
    for (auto& future : futures) {
        future.wait();
    }

    EXPECT_EQ(threadsafe_callback_data.call_count, parallel_call_count);
}