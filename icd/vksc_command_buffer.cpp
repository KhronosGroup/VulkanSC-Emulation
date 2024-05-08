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

void CommandBuffer::CmdRefreshObjectsKHR(const VkRefreshObjectListKHR* pRefreshObjects) {
    // TODO: Add implementation
}

}  // namespace vksc
