/*
 * Copyright (c) 2024 The Khronos Group Inc.
 * Copyright (c) 2024 RasterGrid Kft.
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#include "vksc_command_buffer.h"
#include "vksc_device.h"

namespace vksc {

CommandBuffer::CommandBuffer(VkCommandBuffer command_buffer, CommandPool& command_pool)
    : Dispatchable(),
      CommandBufferMemoryTracker(command_buffer, command_pool),
      logger_(command_pool.GetDevice().Log(), VK_OBJECT_TYPE_COMMAND_BUFFER, command_buffer) {}

void CommandBuffer::CmdExecuteCommands(uint32_t commandBufferCount, const VkCommandBuffer* pCommandBuffers) {
    icd::ShadowStack::Frame stack_frame{};
    auto command_buffers = stack_frame.Alloc<VkCommandBuffer>(commandBufferCount);

    for (uint32_t i = 0; i < commandBufferCount; ++i) {
        command_buffers[i] = CommandBuffer::FromHandle(pCommandBuffers[i])->VkHandle();
    }

    return NEXT::CmdExecuteCommands(commandBufferCount, command_buffers);
}

void CommandBuffer::CmdRefreshObjectsKHR(const VkRefreshObjectListKHR* pRefreshObjects) {
    // TODO: Add implementation if we would like to expose support for VK_KHR_object_refresh in the future
}

VkResult CommandBuffer::EndCommandBuffer() {
    if (GetStatus() != VK_SUCCESS) {
        return GetStatus();
    } else {
        return NEXT::EndCommandBuffer();
    }
}

}  // namespace vksc
