/*
 * Copyright (c) 2024-2025 The Khronos Group Inc.
 * Copyright (c) 2024-2025 RasterGrid Kft.
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#pragma once

#include "vksc_command_pool.h"
#include "vksc_dispatchable.h"
#include "vksc_command_buffer_memory_tracker.h"
#include "icd_log.h"

namespace vksc {

class CommandBuffer : public Dispatchable<CommandBuffer, VkCommandBuffer>, public CommandBufferMemoryTracker {
  public:
    using NEXT = CommandBufferMemoryTracker;

    CommandBuffer(VkCommandBuffer command_buffer, CommandPool& command_pool);

    icd::Logger& Log() { return logger_; }

    void CmdExecuteCommands(uint32_t commandBufferCount, const VkCommandBuffer* pCommandBuffers);
    void CmdRefreshObjectsKHR(const VkRefreshObjectListKHR* pRefreshObjects);
    VkResult EndCommandBuffer();

    void CmdBeginDebugUtilsLabelEXT(const VkDebugUtilsLabelEXT* pLabelInfo);
    void CmdEndDebugUtilsLabelEXT();
    void CmdInsertDebugUtilsLabelEXT(const VkDebugUtilsLabelEXT* pLabelInfo);

  private:
    icd::Logger logger_;
};

}  // namespace vksc
