/*
 * Copyright (c) 2024-2025 The Khronos Group Inc.
 * Copyright (c) 2024-2025 RasterGrid Kft.
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#include "icd_test_framework.h"

#include <vector>
#include <atomic>
#include <thread>
#include <future>

class CleanupTest : public IcdTest {
  public:
    CleanupTest() : IcdTest{} {}
};

TEST_F(CleanupTest, DestroyCommandPool) {
    TEST_DESCRIPTION("Test if command pools are released upon device destruction");

    // Test params
    const VkDeviceSize pool_reservation_size = 1'000;

    VkMockObject<VkCommandPool> vk_pool;
    std::vector<VkCommandPool> actually_destroyed;
    std::vector<VkCommandPool> expected_destroyed{vk_pool};
    vkmock::CreateCommandPool = [&](auto, const auto, const auto, auto pCommandPool) {
        *pCommandPool = vk_pool;
        return VK_SUCCESS;
    };
    vkmock::DestroyCommandPool = [&](auto, auto commandPool, auto) { actually_destroyed.push_back(commandPool); };

    auto device_object_reservation_info = vku::InitStruct<VkDeviceObjectReservationCreateInfo>();
    device_object_reservation_info.commandPoolRequestCount = 1;
    device_object_reservation_info.commandBufferRequestCount = 1;
    auto device_info = GetDefaultDeviceCreateInfo(&device_object_reservation_info);
    InitDevice(&device_info);
    CreateCommandPool(pool_reservation_size);

    DestroyDevice();
    EXPECT_TRUE(
        std::equal(actually_destroyed.begin(), actually_destroyed.end(), expected_destroyed.begin(), expected_destroyed.end()));
}

TEST_F(CleanupTest, FreeMemory) {
    TEST_DESCRIPTION("Test if command pools are released upon device destruction");

    // Test params
    const VkDeviceSize pool_reservation_size = 1'000;

    VkDeviceMemory vk_device_mem = reinterpret_cast<VkDeviceMemory>(this);
    std::vector<VkDeviceMemory> actually_freed;
    std::vector<VkDeviceMemory> expected_freed{vk_device_mem};
    vkmock::AllocateMemory = [&](auto, auto, auto, auto pMemory) {
        *pMemory = vk_device_mem;
        return VK_SUCCESS;
    };
    vkmock::FreeMemory = [&](auto, auto memory, auto) { actually_freed.push_back(memory); };

    auto device = InitDevice();
    auto buffer = CreateBufferWithBoundMemory(pool_reservation_size);

    vksc::DestroyBuffer(device, buffer, nullptr);
    DestroyDevice();
    EXPECT_TRUE(std::equal(actually_freed.begin(), actually_freed.end(), expected_freed.begin(), expected_freed.end()));
}
