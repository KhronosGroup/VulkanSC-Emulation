/*
 * Copyright (c) 2024 The Khronos Group Inc.
 * Copyright (c) 2024 RasterGrid Kft.
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#pragma once

#include "vksc_dispatchable.h"
#include "vk_command_buffer.h"
#include "icd_log.h"

namespace vksc {

class Device;

class CommandBuffer : public Dispatchable<CommandBuffer, VkCommandBuffer>, public vk::CommandBuffer {
  public:
    CommandBuffer(VkCommandBuffer command_buffer, Device& device);

    icd::Logger& Log() { return logger_; }

    void CmdExecuteCommands(uint32_t commandBufferCount, const VkCommandBuffer* pCommandBuffers);

    void CmdRefreshObjectsKHR(const VkRefreshObjectListKHR* pRefreshObjects);

  private:
    icd::Logger logger_;
};

}  // namespace vksc
