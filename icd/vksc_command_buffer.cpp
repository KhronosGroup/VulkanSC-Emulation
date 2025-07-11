/*
 * Copyright (c) 2024-2025 The Khronos Group Inc.
 * Copyright (c) 2024-2025 RasterGrid Kft.
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#include "vksc_command_buffer.h"
#include "vksc_device.h"
#include "vksc_global.h"

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

void CommandBuffer::CmdBeginDebugUtilsLabelEXT(const VkDebugUtilsLabelEXT* pLabelInfo) {
    // NOTE: We do not currently include debug util labels in our debug messages
    if (ICD.IsInstanceExtensionSupported(vk::ExtensionNumber::EXT_debug_utils)) {
        // Forward call to the underlying Vulkan implementation if it supports it
        NEXT::CmdBeginDebugUtilsLabelEXT(pLabelInfo);
    }
}

void CommandBuffer::CmdEndDebugUtilsLabelEXT() {
    // NOTE: We do not currently include debug util labels in our debug messages
    if (ICD.IsInstanceExtensionSupported(vk::ExtensionNumber::EXT_debug_utils)) {
        // Forward call to the underlying Vulkan implementation if it supports it
        NEXT::CmdEndDebugUtilsLabelEXT();
    }
}

void CommandBuffer::CmdInsertDebugUtilsLabelEXT(const VkDebugUtilsLabelEXT* pLabelInfo) {
    // NOTE: We do not currently include debug util labels in our debug messages
    if (ICD.IsInstanceExtensionSupported(vk::ExtensionNumber::EXT_debug_utils)) {
        // Forward call to the underlying Vulkan implementation if it supports it
        NEXT::CmdInsertDebugUtilsLabelEXT(pLabelInfo);
    }
}

}  // namespace vksc
