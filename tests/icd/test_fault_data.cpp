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

TEST_F(FaultDataTest, MaxQueryFaultCount) {
    TEST_DESCRIPTION("Test whether max queryable fault count conforms to Vulkan SC 1.0");

    EXPECT_GE(GetMaxQueryFaultCount(), 16);
}

TEST_F(FaultDataTest, Unrecorded) {
    TEST_DESCRIPTION("Test whether the presence of unrecorded faults behave as expected");

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
    TEST_DESCRIPTION("Test correct number of fault callback invocations (even when the fault is unrecorded)");

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
    TEST_DESCRIPTION("Test whether faults are triggered with adequate thread safety");

    // Test params
    const unsigned int num_of_threads = std::thread::hardware_concurrency();
    const size_t parallel_call_count = 100'000;
    const VkDeviceSize pool_reservation_size = 1'000;

    const auto max_fault_count = GetMaxQueryFaultCount();

    // trigger faults on on a single internally synchronized object
    PFN_vkFaultCallbackFunction callback = [](VkBool32, uint32_t, const VkFaultData*) -> void { callback_data.Call(); };
    auto reservation_info = vku::InitStruct<VkCommandPoolMemoryReservationCreateInfo>();
    reservation_info.commandPoolMaxCommandBuffers = num_of_threads;
    reservation_info.commandPoolReservedSize = pool_reservation_size;
    auto callback_info = vku::InitStruct<VkFaultCallbackInfo>(&reservation_info);
    callback_info.pfnFaultCallback = callback;
    auto device_info = GetDefaultDeviceCreateInfo(&callback_info);
    auto device = InitDevice(&device_info);

    std::vector<std::future<void>> futures(num_of_threads);
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
    EXPECT_EQ(callback_data.call_count, parallel_call_count);

    // trigger faults on multiple instances of externally synchronized objects
    PFN_vkFaultCallbackFunction threadsafe_callback = [](VkBool32, uint32_t, const VkFaultData*) -> void {
        threadsafe_callback_data.Call();
    };
    auto threadsafe_callback_info = vku::InitStruct<VkFaultCallbackInfo>(&reservation_info);
    threadsafe_callback_info.pfnFaultCallback = threadsafe_callback;
    auto device_info2 = GetDefaultDeviceCreateInfo(&threadsafe_callback_info);
    auto device2 = InitDevice(&device_info);

    auto command_pool_info = vku::InitStruct<VkCommandPoolCreateInfo>();
    command_pool_info.queueFamilyIndex = GetQueueFamilyIndex(has_flag<VkCommandPool>(VK_QUEUE_COMPUTE_BIT));
    VkCommandPool command_pool;
    VkResult result = vksc::CreateCommandPool(device2, &command_pool_info, nullptr, &command_pool);
    FAIL_TEST_IF(result != VK_SUCCESS, "Failed to create command pool: " << result);

    auto command_buffer_info = vku::InitStruct<VkCommandBufferAllocateInfo>();
    command_buffer_info.commandPool = command_pool;
    command_buffer_info.level = VK_COMMAND_BUFFER_LEVEL_PRIMARY;
    command_buffer_info.commandBufferCount = num_of_threads;
    std::vector<VkCommandBuffer> command_buffers(num_of_threads);
    result = vksc::AllocateCommandBuffers(device2, &command_buffer_info, command_buffers.data());
    FAIL_TEST_IF(result != VK_SUCCESS, "Failed to allocate command buffers: " << result);

    for (size_t i = 0; i < futures.size(); ++i) {
        futures[i] = std::async(
            std::launch::async,
            [&](const size_t I) {
                for (size_t j = I * parallel_call_count / futures.size(); j < (I + 1) * parallel_call_count / futures.size(); ++j) {
                }
            },
            i);
    }
    for (auto& future : futures) {
        future.wait();
    }
    EXPECT_EQ(threadsafe_callback_data.call_count, parallel_call_count);
}