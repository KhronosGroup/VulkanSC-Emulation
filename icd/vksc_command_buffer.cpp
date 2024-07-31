/*
 * Copyright (c) 2024 The Khronos Group Inc.
 * Copyright (c) 2024 RasterGrid Kft.
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#include "vksc_command_buffer.h"
#include "vksc_device.h"

namespace vksc {

CommandBuffer::CommandBuffer(VkCommandBuffer command_buffer, Device& device)
    : Dispatchable(),
      vk::CommandBuffer(command_buffer, device.VkDispatch()),
      logger_(device.Log(), VK_OBJECT_TYPE_COMMAND_BUFFER, command_buffer) {}

void CommandBuffer::CmdExecuteCommands(uint32_t commandBufferCount, const VkCommandBuffer* pCommandBuffers) {
    icd::ShadowStack::Frame stack_frame{};
    auto command_buffers = stack_frame.Alloc<VkCommandBuffer>(commandBufferCount);

    for (uint32_t i = 0; i < commandBufferCount; ++i) {
        command_buffers[i] = CommandBuffer::FromHandle(pCommandBuffers[i])->VkHandle();
    }

    return vk::CommandBuffer::CmdExecuteCommands(commandBufferCount, command_buffers);
}

void CommandBuffer::CmdRefreshObjectsKHR(const VkRefreshObjectListKHR* pRefreshObjects) {
    // TODO: Add implementation
}

}  // namespace vksc
