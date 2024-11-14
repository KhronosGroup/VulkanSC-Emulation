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

    vkmock::CmdSetDeviceMask = [&](auto, auto) {};

    auto physical_device = GetPhysicalDevice();
    auto vksc_physical_device_props = vku::InitStruct<VkPhysicalDeviceVulkanSC10Properties>();
    auto physical_device_props = vku::InitStruct<VkPhysicalDeviceProperties2>(&vksc_physical_device_props);
    vksc::GetPhysicalDeviceProperties2(physical_device, &physical_device_props);

    auto device_object_reservation_info = vku::InitStruct<VkDeviceObjectReservationCreateInfo>();
    device_object_reservation_info.commandPoolRequestCount = 1;
    device_object_reservation_info.commandBufferRequestCount = 1;
    auto device_info = GetDefaultDeviceCreateInfo(&device_object_reservation_info);
    auto device = InitDevice(&device_info);
    auto command_pool = CreateCommandPool(pool_reservation_size);
    auto command_buffers = CreateCommandBuffers(command_pool);
    auto command_buffer = command_buffers.front();

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

TEST_F(MemConsumptionTest, OverallocatePool) {
    TEST_DESCRIPTION("Test whether command buffer errors and faults when overallocating pool reservation");

    // Test params
    const VkDeviceSize pool_reservation_size = 1'000;
    const VkDeviceSize buffer_update_size = 2 * pool_reservation_size;
    EXPECT_LE(buffer_update_size, 65536);  // test param assertion. VkCmdUpdateBuffer is capped at 65536

    vkmock::CmdUpdateBuffer = [&](auto, auto, auto, auto, auto) {};

    auto physical_device = GetPhysicalDevice();
    auto vksc_physical_device_props = vku::InitStruct<VkPhysicalDeviceVulkanSC10Properties>();
    auto physical_device_props = vku::InitStruct<VkPhysicalDeviceProperties2>(&vksc_physical_device_props);
    vksc::GetPhysicalDeviceProperties2(physical_device, &physical_device_props);

    auto device_object_reservation_info = vku::InitStruct<VkDeviceObjectReservationCreateInfo>();
    device_object_reservation_info.commandPoolRequestCount = 1;
    device_object_reservation_info.commandBufferRequestCount = 1;
    auto device_info = GetDefaultDeviceCreateInfo(&device_object_reservation_info);
    auto device = InitDevice(&device_info);
    auto command_pool = CreateCommandPool(pool_reservation_size);
    auto command_buffers = CreateCommandBuffers(command_pool);
    auto buffer = CreateBufferWithBoundMemory(buffer_update_size);
    auto command_buffer = command_buffers.front();

    std::vector<unsigned char> payload(buffer_update_size);

    // Test error
    auto begin_info = vku::InitStruct<VkCommandBufferBeginInfo>();
    vksc::BeginCommandBuffer(command_buffer, &begin_info);
    vksc::CmdUpdateBuffer(command_buffer, buffer, 0, buffer_update_size, payload.data());
    EXPECT_EQ(vksc::EndCommandBuffer(command_buffer), VK_ERROR_OUT_OF_DEVICE_MEMORY);

    // Test fault emission
    const auto max_fault_count = GetMaxQueryFaultCount();
    std::vector<VkFaultData> faults(max_fault_count);
    uint32_t fault_count = max_fault_count;
    vksc::GetFaultData(device, VK_FAULT_QUERY_BEHAVIOR_GET_AND_CLEAR_ALL_FAULTS, nullptr, &fault_count, faults.data());
    EXPECT_EQ(fault_count, 1);
    EXPECT_EQ(faults[0].faultType, VK_FAULT_TYPE_COMMAND_BUFFER_FULL);

    vksc::DestroyBuffer(device, buffer, nullptr);
    vksc::FreeCommandBuffers(device, command_pool, command_buffers.size(), command_buffers.data());
}

TEST_F(MemConsumptionTest, OverallocateDeviceLimit) {
    TEST_DESCRIPTION("Test whether command buffer errors and faults when overallocating device limit");

    vkmock::CmdUpdateBuffer = [&](auto, auto, auto, auto, auto) {};

    auto physical_device = GetPhysicalDevice();
    auto vksc_physical_device_props = vku::InitStruct<VkPhysicalDeviceVulkanSC10Properties>();
    auto physical_device_props = vku::InitStruct<VkPhysicalDeviceProperties2>(&vksc_physical_device_props);
    vksc::GetPhysicalDeviceProperties2(physical_device, &physical_device_props);

    // Test params
    const VkDeviceSize buffer_update_size = 65536;  // maximal step size towards limit, VkCmdUpdateBuffer is capped at 65536
    const VkDeviceSize pool_reservation_size = vksc_physical_device_props.maxCommandBufferSize + buffer_update_size;
    EXPECT_LE(buffer_update_size, 65536);  // test param assertion. VkCmdUpdateBuffer is capped at 65536

    auto device_object_reservation_info = vku::InitStruct<VkDeviceObjectReservationCreateInfo>();
    device_object_reservation_info.commandPoolRequestCount = 1;
    device_object_reservation_info.commandBufferRequestCount = 1;
    auto device_info = GetDefaultDeviceCreateInfo(&device_object_reservation_info);
    auto device = InitDevice(&device_info);
    auto command_pool = CreateCommandPool(pool_reservation_size);
    auto command_buffers = CreateCommandBuffers(command_pool);
    auto buffer = CreateBufferWithBoundMemory(buffer_update_size);
    auto command_buffer = command_buffers.front();

    std::vector<unsigned char> payload(buffer_update_size);

    // Test error
    auto begin_info = vku::InitStruct<VkCommandBufferBeginInfo>();
    vksc::BeginCommandBuffer(command_buffer, &begin_info);
    for (VkDeviceSize i = 0; i < pool_reservation_size; i += buffer_update_size) {
        vksc::CmdUpdateBuffer(command_buffer, buffer, i, buffer_update_size, payload.data());
    }
    EXPECT_EQ(vksc::EndCommandBuffer(command_buffer), VK_ERROR_OUT_OF_DEVICE_MEMORY);

    // Test fault emission
    const auto max_fault_count = GetMaxQueryFaultCount();
    std::vector<VkFaultData> faults(max_fault_count);
    uint32_t fault_count = max_fault_count;
    vksc::GetFaultData(device, VK_FAULT_QUERY_BEHAVIOR_GET_AND_CLEAR_ALL_FAULTS, nullptr, &fault_count, faults.data());
    EXPECT_GE(fault_count, 1);
    EXPECT_EQ(faults[0].faultType, VK_FAULT_TYPE_COMMAND_BUFFER_FULL);

    vksc::DestroyBuffer(device, buffer, nullptr);
    vksc::FreeCommandBuffers(device, command_pool, command_buffers.size(), command_buffers.data());
}

TEST_F(MemConsumptionTest, FreeCommandBuffer) {
    TEST_DESCRIPTION("Test whether command buffer free returns memory to the command pool");

    // Test params
    const VkDeviceSize pool_reservation_size = 100'000;
    const VkDeviceSize buffer_update_size = 65536;
    EXPECT_GT(pool_reservation_size, buffer_update_size);
    EXPECT_LE(buffer_update_size, 65536);  // test param assertion. VkCmdUpdateBuffer is capped at 65536

    vkmock::CmdUpdateBuffer = [&](auto, auto, auto, auto, auto) {};

    auto physical_device = GetPhysicalDevice();
    auto vksc_physical_device_props = vku::InitStruct<VkPhysicalDeviceVulkanSC10Properties>();
    auto physical_device_props = vku::InitStruct<VkPhysicalDeviceProperties2>(&vksc_physical_device_props);
    vksc::GetPhysicalDeviceProperties2(physical_device, &physical_device_props);

    auto device_object_reservation_info = vku::InitStruct<VkDeviceObjectReservationCreateInfo>();
    device_object_reservation_info.commandPoolRequestCount = 1;
    device_object_reservation_info.commandBufferRequestCount = 1;
    auto device_info = GetDefaultDeviceCreateInfo(&device_object_reservation_info);
    auto device = InitDevice(&device_info);
    auto command_pool = CreateCommandPool(pool_reservation_size);
    auto command_buffers = CreateCommandBuffers(command_pool);
    auto buffer = CreateBufferWithBoundMemory(buffer_update_size);
    auto command_buffer = command_buffers.front();

    std::vector<unsigned char> payload(buffer_update_size);

    auto begin_info = vku::InitStruct<VkCommandBufferBeginInfo>();
    vksc::BeginCommandBuffer(command_buffer, &begin_info);
    vksc::CmdUpdateBuffer(command_buffer, buffer, 0, buffer_update_size, payload.data());
    EXPECT_EQ(vksc::EndCommandBuffer(command_buffer), VK_SUCCESS);

    auto command_pool_mem_consumption = vku::InitStruct<VkCommandPoolMemoryConsumption>();
    vksc::GetCommandPoolMemoryConsumption(device, command_pool, command_buffer, &command_pool_mem_consumption);
    EXPECT_GE(command_pool_mem_consumption.commandBufferAllocated, buffer_update_size);
    EXPECT_GE(command_pool_mem_consumption.commandPoolAllocated, buffer_update_size);
    EXPECT_GE(command_pool_mem_consumption.commandPoolAllocated, command_pool_mem_consumption.commandBufferAllocated);

    auto prev_command_pool_allocated = command_pool_mem_consumption.commandPoolAllocated;
    vksc::FreeCommandBuffers(device, command_pool, command_buffers.size(), command_buffers.data());
    vksc::GetCommandPoolMemoryConsumption(device, command_pool, VK_NULL_HANDLE, &command_pool_mem_consumption);
    EXPECT_LT(command_pool_mem_consumption.commandPoolAllocated, prev_command_pool_allocated);
    EXPECT_GE(prev_command_pool_allocated - command_pool_mem_consumption.commandPoolAllocated, buffer_update_size);

    vksc::DestroyBuffer(device, buffer, nullptr);
}

TEST_F(MemConsumptionTest, ResetCommandBuffer) {
    TEST_DESCRIPTION("Test whether command buffer reset returns memory to the command pool");

    // Test params
    const VkDeviceSize buffer_update_size = 65536;
    const VkDeviceSize pool_reservation_size = buffer_update_size + buffer_update_size / 2;
    EXPECT_LT(pool_reservation_size, 2 * buffer_update_size);
    EXPECT_LE(buffer_update_size, 65536);  // test param assertion. VkCmdUpdateBuffer is capped at 65536

    vkmock::CmdUpdateBuffer = [&](auto, auto, auto, auto, auto) {};
    vkmock::ResetCommandBuffer = [&](auto, auto) { return VK_SUCCESS; };

    auto physical_device = GetPhysicalDevice();
    auto vksc_physical_device_props = vku::InitStruct<VkPhysicalDeviceVulkanSC10Properties>();
    auto physical_device_props = vku::InitStruct<VkPhysicalDeviceProperties2>(&vksc_physical_device_props);
    vksc::GetPhysicalDeviceProperties2(physical_device, &physical_device_props);

    auto device_object_reservation_info = vku::InitStruct<VkDeviceObjectReservationCreateInfo>();
    device_object_reservation_info.commandPoolRequestCount = 1;
    device_object_reservation_info.commandBufferRequestCount = 2;
    auto device_info = GetDefaultDeviceCreateInfo(&device_object_reservation_info);
    auto device = InitDevice(&device_info);
    auto command_pool = CreateCommandPool(pool_reservation_size, 2);
    auto command_buffers = CreateCommandBuffers(command_pool, 2);
    auto buffer = CreateBufferWithBoundMemory(buffer_update_size);
    auto command_buffer = command_buffers.at(0);
    auto command_buffer2 = command_buffers.at(1);

    std::vector<unsigned char> payload(buffer_update_size);

    auto begin_info = vku::InitStruct<VkCommandBufferBeginInfo>();
    vksc::BeginCommandBuffer(command_buffer, &begin_info);
    vksc::CmdUpdateBuffer(command_buffer, buffer, 0, buffer_update_size, payload.data());
    vksc::CmdUpdateBuffer(command_buffer, buffer, buffer_update_size, buffer_update_size, payload.data());
    EXPECT_EQ(vksc::EndCommandBuffer(command_buffer), VK_ERROR_OUT_OF_DEVICE_MEMORY);

    EXPECT_EQ(vksc::ResetCommandBuffer(command_buffer, VK_COMMAND_BUFFER_RESET_RELEASE_RESOURCES_BIT), VK_SUCCESS);
    vksc::BeginCommandBuffer(command_buffer2, &begin_info);
    vksc::CmdUpdateBuffer(command_buffer2, buffer, 0, buffer_update_size, payload.data());
    EXPECT_EQ(vksc::EndCommandBuffer(command_buffer2), VK_SUCCESS);

    vksc::DestroyBuffer(device, buffer, nullptr);
    vksc::FreeCommandBuffers(device, command_pool, command_buffers.size(), command_buffers.data());
}

TEST_F(MemConsumptionTest, ResetCommandPool) {
    TEST_DESCRIPTION("Test whether command pool reset reclaims memory from command buffers");

    // Test params
    const VkDeviceSize buffer_update_size = 65536;
    const VkDeviceSize pool_reservation_size = buffer_update_size + buffer_update_size / 2;
    EXPECT_LT(pool_reservation_size, 2 * buffer_update_size);
    EXPECT_LE(buffer_update_size, 65536);  // test param assertion. VkCmdUpdateBuffer is capped at 65536

    vkmock::CmdUpdateBuffer = [&](auto, auto, auto, auto, auto) {};
    vkmock::ResetCommandPool = [&](auto, auto, auto) { return VK_SUCCESS; };

    auto physical_device = GetPhysicalDevice();
    auto vksc_physical_device_props = vku::InitStruct<VkPhysicalDeviceVulkanSC10Properties>();
    auto physical_device_props = vku::InitStruct<VkPhysicalDeviceProperties2>(&vksc_physical_device_props);
    vksc::GetPhysicalDeviceProperties2(physical_device, &physical_device_props);

    auto device_object_reservation_info = vku::InitStruct<VkDeviceObjectReservationCreateInfo>();
    device_object_reservation_info.commandPoolRequestCount = 1;
    device_object_reservation_info.commandBufferRequestCount = 3;
    auto device_info = GetDefaultDeviceCreateInfo(&device_object_reservation_info);
    auto device = InitDevice(&device_info);
    auto command_pool = CreateCommandPool(pool_reservation_size, 3);
    auto buffer = CreateBufferWithBoundMemory(buffer_update_size);

    std::vector<unsigned char> payload(buffer_update_size);

    auto command_buffers = CreateCommandBuffers(command_pool);
    auto begin_info = vku::InitStruct<VkCommandBufferBeginInfo>();
    vksc::BeginCommandBuffer(command_buffers.front(), &begin_info);
    vksc::CmdUpdateBuffer(command_buffers.front(), buffer, 0, buffer_update_size, payload.data());
    vksc::CmdUpdateBuffer(command_buffers.front(), buffer, buffer_update_size, buffer_update_size, payload.data());
    EXPECT_EQ(vksc::EndCommandBuffer(command_buffers.front()), VK_ERROR_OUT_OF_DEVICE_MEMORY);

    auto command_buffers2 = CreateCommandBuffers(command_pool);
    vksc::BeginCommandBuffer(command_buffers2.front(), &begin_info);
    vksc::CmdUpdateBuffer(command_buffers2.front(), buffer, 0, buffer_update_size, payload.data());
    EXPECT_EQ(vksc::EndCommandBuffer(command_buffers2.front()), VK_ERROR_OUT_OF_DEVICE_MEMORY);

    EXPECT_EQ(vksc::ResetCommandPool(device, command_pool, 0), VK_SUCCESS);

    auto command_buffers3 = CreateCommandBuffers(command_pool);
    vksc::BeginCommandBuffer(command_buffers3.front(), &begin_info);
    vksc::CmdUpdateBuffer(command_buffers3.front(), buffer, 0, buffer_update_size, payload.data());
    EXPECT_EQ(vksc::EndCommandBuffer(command_buffers3.front()), VK_SUCCESS);

    vksc::DestroyBuffer(device, buffer, nullptr);
    vksc::FreeCommandBuffers(device, command_pool, command_buffers.size(), command_buffers.data());
    vksc::FreeCommandBuffers(device, command_pool, command_buffers2.size(), command_buffers2.data());
    vksc::FreeCommandBuffers(device, command_pool, command_buffers3.size(), command_buffers3.data());
}
