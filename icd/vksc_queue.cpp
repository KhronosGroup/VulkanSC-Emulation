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
    icd::ShadowStack::Frame stack_frame{};
    auto submit_info = stack_frame.Alloc<VkSubmitInfo>(submitCount);

    for (uint32_t submit_idx = 0; submit_idx < submitCount; ++submit_idx) {
        submit_info[submit_idx] = pSubmits[submit_idx];
        auto cmd_buffers = stack_frame.Alloc<VkCommandBuffer>(pSubmits[submit_idx].commandBufferCount);
        for (uint32_t cmd_buffer_idx = 0; cmd_buffer_idx < pSubmits[submit_idx].commandBufferCount; ++cmd_buffer_idx) {
            cmd_buffers[cmd_buffer_idx] =
                CommandBuffer::FromHandle(pSubmits[submit_idx].pCommandBuffers[cmd_buffer_idx])->VkHandle();
        }
        submit_info[submit_idx].pCommandBuffers = cmd_buffers;
    }

    return vk::Queue::QueueSubmit(submitCount, submit_info, fence);
}

VkResult Queue::QueueSubmit2(uint32_t submitCount, const VkSubmitInfo2* pSubmits, VkFence fence) {
    icd::ShadowStack::Frame stack_frame{};
    auto submit_info = stack_frame.Alloc<VkSubmitInfo2>(submitCount);

    for (uint32_t submit_idx = 0; submit_idx < submitCount; ++submit_idx) {
        submit_info[submit_idx] = pSubmits[submit_idx];
        auto cmd_buffer_info = stack_frame.Alloc<VkCommandBufferSubmitInfo>(pSubmits[submit_idx].commandBufferInfoCount);
        for (uint32_t cmd_buffer_idx = 0; cmd_buffer_idx < pSubmits[submit_idx].commandBufferInfoCount; ++cmd_buffer_idx) {
            cmd_buffer_info[cmd_buffer_idx] = pSubmits[submit_idx].pCommandBufferInfos[cmd_buffer_idx];
            cmd_buffer_info[cmd_buffer_idx].commandBuffer =
                CommandBuffer::FromHandle(pSubmits[submit_idx].pCommandBufferInfos[cmd_buffer_idx].commandBuffer)->VkHandle();
        }
        submit_info[submit_idx].pCommandBufferInfos = cmd_buffer_info;
    }

    return vk::Queue::QueueSubmit2(submitCount, submit_info, fence);
}

}  // namespace vksc
