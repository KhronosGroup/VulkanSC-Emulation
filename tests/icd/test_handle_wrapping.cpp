/*
 * Copyright (c) 2024 The Khronos Group Inc.
 * Copyright (c) 2024 RasterGrid Kft.
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

class HandleWrappingTest : public IcdTest {
  public:
    HandleWrappingTest() : IcdTest{} {}
};

TEST_F(HandleWrappingTest, CmdExecuteCommands) {
    TEST_DESCRIPTION("Test if VkCmdBuffer handles are properly unwrapped in VkCmdExecuteCommands");

    // Test params
    const uint32_t secondary_command_buffer_count = 2;
    const VkDeviceSize buffer_update_size = 256;  // maximal step size towards limit, VkCmdUpdateBuffer is capped at 65536

    vkmock::CmdUpdateBuffer = [&](auto, auto, auto, auto, auto) {};

    InitInstance();
    auto physical_device = GetPhysicalDevice();
    auto device = InitDevice();
    auto device_object_reservation_info = vku::InitStruct<VkDeviceObjectReservationCreateInfo>();
    device_object_reservation_info.commandPoolRequestCount = 1;
    device_object_reservation_info.commandBufferRequestCount = secondary_command_buffer_count + 1;
    auto command_pool =
        CreateCommandPool(secondary_command_buffer_count * (buffer_update_size + 2048), secondary_command_buffer_count + 1);

    std::vector<VkMockObject<VkCommandBuffer>> mock_command_buffers(secondary_command_buffer_count + 1);
    vkmock::AllocateCommandBuffers = [&, counter = 0](auto, const VkCommandBufferAllocateInfo *pAllocateInfo,
                                                      VkCommandBuffer *pCommandBuffers) mutable {
        for (uint32_t i = 0; i < pAllocateInfo->commandBufferCount; ++i, ++counter) {
            pCommandBuffers[i] = mock_command_buffers[counter];
        }
        return VK_SUCCESS;
    };
    std::vector<VkCommandBuffer> command_buffers(secondary_command_buffer_count + 1);
    auto command_buffer_info = vku::InitStruct<VkCommandBufferAllocateInfo>();
    command_buffer_info.commandPool = command_pool;
    command_buffer_info.level = VK_COMMAND_BUFFER_LEVEL_PRIMARY;
    command_buffer_info.commandBufferCount = 1;
    EXPECT_EQ(vksc::AllocateCommandBuffers(device, &command_buffer_info, &command_buffers[0]), VK_SUCCESS);
    command_buffer_info.level = VK_COMMAND_BUFFER_LEVEL_SECONDARY;
    command_buffer_info.commandBufferCount = secondary_command_buffer_count;
    EXPECT_EQ(vksc::AllocateCommandBuffers(device, &command_buffer_info, &command_buffers[1]), VK_SUCCESS);

    auto buffer = CreateBufferWithBoundMemory(buffer_update_size);
    std::vector<unsigned char> payload(secondary_command_buffer_count * buffer_update_size);

    for (VkDeviceSize i = 0; i < secondary_command_buffer_count; ++i) {
        auto begin_info = vku::InitStruct<VkCommandBufferBeginInfo>();
        vksc::BeginCommandBuffer(command_buffers[i + 1], &begin_info);
        vksc::CmdUpdateBuffer(command_buffers[i + 1], buffer, i * buffer_update_size, buffer_update_size, payload.data());
        EXPECT_EQ(vksc::EndCommandBuffer(command_buffers[i + 1]), VK_SUCCESS);
    }

    vkmock::CmdExecuteCommands = [&](VkCommandBuffer commandBuffer, uint32_t commandBufferCount,
                                     const VkCommandBuffer *pCommandBuffers) {
        EXPECT_EQ(commandBuffer, mock_command_buffers[0].handle());
        for (uint32_t i = 0; i < commandBufferCount; ++i) {
            EXPECT_EQ(pCommandBuffers[i], mock_command_buffers[i + 1].handle());
        }
    };
    vksc::CmdExecuteCommands(command_buffers[0], secondary_command_buffer_count, &command_buffers[1]);

    vksc::DestroyBuffer(device, buffer, nullptr);
    vksc::FreeCommandBuffers(device, command_pool, command_buffers.size(), command_buffers.data());
}

TEST_F(HandleWrappingTest, QueueSubmit) {
    TEST_DESCRIPTION("Test if VkCmdBuffer handles are properly unwrapped in VkSubmitInfo");

    // Test params
    const uint32_t command_buffer_count = 4;
    const uint32_t submit_count = 2;
    const VkDeviceSize buffer_update_size = 256;  // maximal step size towards limit, VkCmdUpdateBuffer is capped at 65536
    EXPECT_EQ(command_buffer_count % submit_count, 0);
    const uint32_t buffers_per_submit = command_buffer_count / submit_count;

    vkmock::CmdUpdateBuffer = [&](auto, auto, auto, auto, auto) {};
    vkmock::CreateFence = [](auto, auto, auto, VkFence *pFence) {
        static std::vector<std::unique_ptr<VkMockObject<VkFence>>> fences;
        fences.emplace_back(new VkMockObject<VkFence>);
        *pFence = fences.back()->handle();
        return VK_SUCCESS;
    };
    vkmock::WaitForFences = [](auto, auto, auto, auto, auto) { return VK_SUCCESS; };

    InitInstance();
    auto physical_device = GetPhysicalDevice();
    auto device = InitDevice();
    auto device_object_reservation_info = vku::InitStruct<VkDeviceObjectReservationCreateInfo>();
    device_object_reservation_info.commandPoolRequestCount = 1;
    device_object_reservation_info.commandBufferRequestCount = command_buffer_count;
    auto command_pool = CreateCommandPool(command_buffer_count * (buffer_update_size + 2048), command_buffer_count);

    std::vector<VkMockObject<VkCommandBuffer>> mock_command_buffers(command_buffer_count);
    vkmock::AllocateCommandBuffers = [&](auto, const VkCommandBufferAllocateInfo *pAllocateInfo, VkCommandBuffer *pCommandBuffers) {
        for (uint32_t i = 0; i < pAllocateInfo->commandBufferCount; ++i) {
            pCommandBuffers[i] = mock_command_buffers[i];
        }
        return VK_SUCCESS;
    };
    std::vector<VkCommandBuffer> command_buffers(command_buffer_count);
    auto command_buffer_info = vku::InitStruct<VkCommandBufferAllocateInfo>();
    command_buffer_info.commandPool = command_pool;
    command_buffer_info.level = VK_COMMAND_BUFFER_LEVEL_PRIMARY;
    command_buffer_info.commandBufferCount = command_buffer_count;
    EXPECT_EQ(vksc::AllocateCommandBuffers(device, &command_buffer_info, command_buffers.data()), VK_SUCCESS);

    auto buffer = CreateBufferWithBoundMemory(buffer_update_size);
    std::vector<unsigned char> payload(command_buffer_count * buffer_update_size);

    for (VkDeviceSize i = 0; i < command_buffer_count; ++i) {
        auto begin_info = vku::InitStruct<VkCommandBufferBeginInfo>();
        vksc::BeginCommandBuffer(command_buffers[i], &begin_info);
        vksc::CmdUpdateBuffer(command_buffers[i], buffer, i * buffer_update_size, buffer_update_size, payload.data());
        EXPECT_EQ(vksc::EndCommandBuffer(command_buffers[i]), VK_SUCCESS);
    }

    vkmock::QueueSubmit = [&](auto, uint32_t submitCount, const VkSubmitInfo *pSubmits, auto) {
        for (uint32_t i = 0; i < submitCount; ++i) {
            for (uint32_t j = 0; j < pSubmits[i].commandBufferCount; ++j) {
                EXPECT_EQ(pSubmits[i].pCommandBuffers[j], mock_command_buffers[i * pSubmits[i].commandBufferCount + j].handle());
            }
        }
        return VK_SUCCESS;
    };
    std::vector<VkSubmitInfo> submit_infos(submit_count, vku::InitStruct<VkSubmitInfo>());
    for (uint32_t i = 0; i < submit_count; ++i) {
        submit_infos[i].commandBufferCount = buffers_per_submit;
        submit_infos[i].pCommandBuffers = &command_buffers[i * buffers_per_submit];
    }

    VkQueue queue;
    vksc::GetDeviceQueue(device, 0, 0, &queue);
    EXPECT_NE(queue, VK_NULL_HANDLE);
    VkFence fence;
    auto fence_info = vku::InitStruct<VkFenceCreateInfo>();
    EXPECT_EQ(vksc::CreateFence(device, &fence_info, nullptr, &fence), VK_SUCCESS);
    EXPECT_EQ(vksc::QueueSubmit(queue, submit_count, submit_infos.data(), fence), VK_SUCCESS);
    EXPECT_EQ(vksc::WaitForFences(device, 1, &fence, VK_TRUE, 1'000'000), VK_SUCCESS);

    vkmock::QueueSubmit2 = [&](auto, uint32_t submitCount, const VkSubmitInfo2 *pSubmits, VkFence fence) {
        for (uint32_t i = 0; i < submitCount; ++i) {
            for (uint32_t j = 0; j < pSubmits[i].commandBufferInfoCount; ++j) {
                EXPECT_EQ(pSubmits[i].pCommandBufferInfos[j].commandBuffer,
                          mock_command_buffers[i * pSubmits[i].commandBufferInfoCount + j].handle());
            }
        }
        return VK_SUCCESS;
    };
    std::vector<VkSubmitInfo2> submit_infos2(submit_count, vku::InitStruct<VkSubmitInfo2>());
    std::vector<std::vector<VkCommandBufferSubmitInfo>> command_buffer_infos(
        submit_count, std::vector<VkCommandBufferSubmitInfo>(buffers_per_submit, vku::InitStruct<VkCommandBufferSubmitInfo>()));
    for (uint32_t i = 0; i < submit_count; ++i) {
        for (uint32_t j = 0; j < buffers_per_submit; ++j) {
            command_buffer_infos[i][j].commandBuffer = command_buffers[i * buffers_per_submit + j];
        }
        submit_infos2[i].commandBufferInfoCount = buffers_per_submit;
        submit_infos2[i].pCommandBufferInfos = command_buffer_infos[i].data();
    }
    VkFence fence2;
    EXPECT_EQ(vksc::CreateFence(device, &fence_info, nullptr, &fence2), VK_SUCCESS);
    EXPECT_EQ(vksc::QueueSubmit2(queue, submit_count, submit_infos2.data(), fence2), VK_SUCCESS);
    EXPECT_EQ(vksc::WaitForFences(device, 1, &fence2, VK_TRUE, 1'000'000), VK_SUCCESS);

    vksc::DestroyBuffer(device, buffer, nullptr);
    vksc::FreeCommandBuffers(device, command_pool, command_buffers.size(), command_buffers.data());
}
