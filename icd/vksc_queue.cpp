/*
 * Copyright (c) 2024 The Khronos Group Inc.
 * Copyright (c) 2024 RasterGrid Kft.
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#include "vksc_queue.h"
#include "vksc_device.h"
#include "vksc_command_buffer.h"

namespace vksc {

Queue::Queue(VkQueue queue, Device& device)
    : Dispatchable(), vk::Queue(queue, device.VkDispatch()), logger_(device.Log(), VK_OBJECT_TYPE_QUEUE, queue) {}

VkResult Queue::QueueSubmit(uint32_t submitCount, const VkSubmitInfo* pSubmits, VkFence fence) {
    std::vector<VkSubmitInfo> submit_info(submitCount);
    std::vector<VkCommandBuffer> cmd_buffers{};

    size_t cmd_buffer_count = 0;
    for (uint32_t submit_idx = 0; submit_idx < submitCount; ++submit_idx) {
        submit_info[submit_idx] = pSubmits[submit_idx];
        cmd_buffer_count = pSubmits[submit_idx].commandBufferCount;
    }

    cmd_buffers.resize(cmd_buffer_count);
    cmd_buffer_count = 0;
    for (uint32_t submit_idx = 0; submit_idx < submitCount; ++submit_idx) {
        submit_info[submit_idx].pCommandBuffers = &cmd_buffers[cmd_buffer_count];
        for (uint32_t cmd_buffer_idx = 0; cmd_buffer_idx < pSubmits[submit_idx].commandBufferCount; ++cmd_buffer_idx) {
            cmd_buffers[cmd_buffer_count] =
                CommandBuffer::FromHandle(pSubmits[submit_idx].pCommandBuffers[cmd_buffer_idx])->VkHandle();
            cmd_buffer_count++;
        }
    }

    return vk::Queue::QueueSubmit(submitCount, submit_info.data(), fence);
}

VkResult Queue::QueueSubmit2(uint32_t submitCount, const VkSubmitInfo2* pSubmits, VkFence fence) {
    std::vector<VkSubmitInfo2> submit_info(submitCount);
    std::vector<VkCommandBufferSubmitInfo> cmd_buffer_info{};

    size_t cmd_buffer_count = 0;
    for (uint32_t submit_idx = 0; submit_idx < submitCount; ++submit_idx) {
        submit_info[submit_idx] = pSubmits[submit_idx];
        cmd_buffer_count = pSubmits[submit_idx].commandBufferInfoCount;
    }

    cmd_buffer_info.resize(cmd_buffer_count);
    cmd_buffer_count = 0;
    for (uint32_t submit_idx = 0; submit_idx < submitCount; ++submit_idx) {
        submit_info[submit_idx].pCommandBufferInfos = &cmd_buffer_info[cmd_buffer_count];
        for (uint32_t cmd_buffer_idx = 0; cmd_buffer_idx < pSubmits[submit_idx].commandBufferInfoCount; ++cmd_buffer_idx) {
            cmd_buffer_info[cmd_buffer_count] = pSubmits[submit_idx].pCommandBufferInfos[cmd_buffer_idx];
            cmd_buffer_info[cmd_buffer_count].commandBuffer =
                CommandBuffer::FromHandle(pSubmits[submit_idx].pCommandBufferInfos[cmd_buffer_idx].commandBuffer)->VkHandle();
            cmd_buffer_count++;
        }
    }

    return vk::Queue::QueueSubmit2(submitCount, submit_info.data(), fence);
}

}  // namespace vksc
