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

class MemConsumptionTest : public IcdTest {
  public:
    MemConsumptionTest() : IcdTest{} {}
};

TEST_F(MemConsumptionTest, CornerCases) {
    TEST_DESCRIPTION("Test whether command pool memory consumption corner cases");

    // Test params
    const VkDeviceSize pool_reservation_size = 1'000;

    auto physical_device = InitPhysicalDevice();
    auto vksc_physical_device_props = vku::InitStruct<VkPhysicalDeviceVulkanSC10Properties>();
    auto physical_device_props = vku::InitStruct<VkPhysicalDeviceProperties2>(&vksc_physical_device_props);
    vksc::GetPhysicalDeviceProperties2(physical_device, &physical_device_props);

    auto device_object_reservation_info = vku::InitStruct<VkDeviceObjectReservationCreateInfo>();
    device_object_reservation_info.commandPoolRequestCount = 1;
    device_object_reservation_info.commandBufferRequestCount = 1;
    auto device_info = GetDefaultDeviceCreateInfo(&device_object_reservation_info);
    auto device = InitDevice(&device_info);
    auto command_pool = GetCommandPool(pool_reservation_size, GetUniversalQueueFamilyIndex());
    auto command_buffers = GetCommandBuffers(command_pool);
    VkCommandBuffer command_buffer = command_buffers.front();

    auto begin_info = vku::InitStruct<VkCommandBufferBeginInfo>();
    vksc::BeginCommandBuffer(command_buffer, &begin_info);
    vksc::CmdSetDeviceMask(command_buffer, 0);
    EXPECT_EQ(vksc::EndCommandBuffer(command_buffer), VK_SUCCESS);

    auto command_pool_mem_consumption = vku::InitStruct<VkCommandPoolMemoryConsumption>();
    vksc::GetCommandPoolMemoryConsumption(device, command_pool, command_buffer, &command_pool_mem_consumption);
    EXPECT_EQ(command_pool_mem_consumption.commandPoolReservedSize, pool_reservation_size);
    EXPECT_GE(command_pool_mem_consumption.commandPoolAllocated, 0);
    EXPECT_GE(command_pool_mem_consumption.commandPoolAllocated, command_pool_mem_consumption.commandBufferAllocated);
    EXPECT_LE(command_pool_mem_consumption.commandBufferAllocated, vksc_physical_device_props.maxCommandBufferSize);

    // When not specifying the optional buffer arg, an explicit 0 must be written into the result
    vksc::GetCommandPoolMemoryConsumption(device, command_pool, VK_NULL_HANDLE, &command_pool_mem_consumption);
    EXPECT_EQ(command_pool_mem_consumption.commandBufferAllocated, 0);
}

TEST_F(MemConsumptionTest, Overallocate) {
    TEST_DESCRIPTION("Test whether command buffer errors when overallocating");

    // Test params
    const VkDeviceSize pool_reservation_size = 1'000;
    const VkDeviceSize buffer_update_size = 2 * pool_reservation_size;
    EXPECT_LE(pool_reservation_size, 65536);  // VkCmdUpdateBuffer is capped at 65536

    auto physical_device = InitPhysicalDevice();
    auto vksc_physical_device_props = vku::InitStruct<VkPhysicalDeviceVulkanSC10Properties>();
    auto physical_device_props = vku::InitStruct<VkPhysicalDeviceProperties2>(&vksc_physical_device_props);
    vksc::GetPhysicalDeviceProperties2(physical_device, &physical_device_props);

    auto device_object_reservation_info = vku::InitStruct<VkDeviceObjectReservationCreateInfo>();
    device_object_reservation_info.commandPoolRequestCount = 1;
    device_object_reservation_info.commandBufferRequestCount = 1;
    auto device_info = GetDefaultDeviceCreateInfo(&device_object_reservation_info);
    auto device = InitDevice(&device_info);
    auto command_pool = GetCommandPool(pool_reservation_size, GetUniversalQueueFamilyIndex());
    auto command_buffers = GetCommandBuffers(command_pool);
    VkCommandBuffer command_buffer = command_buffers.front();

    auto buffer = GetBuffer(buffer_update_size, VK_BUFFER_USAGE_STORAGE_BUFFER_BIT, {GetUniversalQueueFamilyIndex()});
    auto memory = AllocateMemory(buffer, buffer_update_size);
    BindMemory(memory, buffer);
    std::vector<unsigned char> payload(buffer_update_size);

    auto begin_info = vku::InitStruct<VkCommandBufferBeginInfo>();
    vksc::BeginCommandBuffer(command_buffer, &begin_info);
    vksc::CmdUpdateBuffer(command_buffer, buffer, 0, buffer_update_size, payload.data());
    EXPECT_EQ(vksc::EndCommandBuffer(command_buffer), VK_ERROR_OUT_OF_DEVICE_MEMORY);
}
