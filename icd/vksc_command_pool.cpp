/*
 * Copyright (c) 2024-2026 The Khronos Group Inc.
 * Copyright (c) 2024-2026 RasterGrid Kft.
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#include "vksc_command_pool.h"
#include "vksc_device.h"
#include "vksc_command_buffer.h"

namespace vksc {

CommandPool::CommandPool(VkCommandPool command_pool, Device& device, VkDeviceSize reserved_size, uint32_t reserved_count)
    : handle_(command_pool),
      device_(device),
      logger_(device.Log(), VK_OBJECT_TYPE_COMMAND_POOL, command_pool),
      reserved_memory_size_(reserved_size),
      max_command_buffer_count_(reserved_count) {
    command_buffers_.reserve(reserved_count);
}

CommandPool::~CommandPool() {
    for (auto command_buffer : command_buffers_) {
        CommandBuffer::FromHandle(command_buffer)->Free();
    }
}

bool CommandPool::operator==(const VkCommandPool& rhs) const { return this->handle_ == rhs; }

void CommandPool::GetMemoryConsumption(VkCommandPoolMemoryConsumption* pConsumption) const {
    std::unique_lock lock(mutex_);
    pConsumption->commandPoolReservedSize = reserved_memory_size_;
    pConsumption->commandPoolAllocated = allocated_memory_size_;
}

VkResult CommandPool::AllocateMemory(VkDeviceSize size) {
    std::unique_lock lock(mutex_);
    if (allocated_memory_size_ + size <= reserved_memory_size_) {
        allocated_memory_size_ += size;
        return VK_SUCCESS;
    } else {
        Log().Error("VKSC-EMU-CommandPool-OutOfReservedMemory", "Ran out of the reserved memory for the command pool (%p)",
                    handle_);
        return VK_ERROR_OUT_OF_DEVICE_MEMORY;
    }
}
icd::ObjectReservation<CommandPool, VkCommandBuffer> CommandPool::ReserveCommandBuffers(uint32_t count,
                                                                                        const VkCommandBuffer* buffers) {
    return {*this, count};
}

VkResult CommandPool::FreeMemory(VkDeviceSize size) {
    std::unique_lock lock(mutex_);
    if (size <= allocated_memory_size_) {
        allocated_memory_size_ -= size;
        return VK_SUCCESS;
    } else {
        GetDevice().ReportFault(VK_FAULT_LEVEL_CRITICAL, VK_FAULT_TYPE_INVALID_API_USAGE);
        Log().Fatal("VKSC-EMU-CommandPool-Underflow",
                    "Command buffer memory release resulted in command pool (%p) memory underflow", handle_);
        return VK_ERROR_OUT_OF_DEVICE_MEMORY;
    }
}

VkResult CommandPool::FreeCommandBuffers(uint32_t count, const VkCommandBuffer* buffers) {
    std::unique_lock lock(mutex_);

    for (uint32_t i = 0; i < count; ++i) {
        if (buffers[i] == VK_NULL_HANDLE) {
            continue;
        }
        auto it = command_buffers_.find(buffers[i]);
        if (it == command_buffers_.cend()) {
            GetDevice().ReportFault(VK_FAULT_LEVEL_CRITICAL, VK_FAULT_TYPE_INVALID_API_USAGE);
            Log().Fatal("VKSC-EMU-CommandPool-UnknownCommandBuffer",
                        "Command pool (%p) was requested to free command buffer buffer (%p) which wasn't recognized by it.",
                        handle_, buffers[i]);
            return VK_ERROR_OUT_OF_DEVICE_MEMORY;
        }
        command_buffers_.erase(it);
    }

    return VK_SUCCESS;
}

VkResult CommandPool::ResetCommandPool(VkCommandPoolResetFlags) {
    std::unique_lock lock(mutex_);

    VkResult result = VK_SUCCESS;

    for (auto& command_buffer : command_buffers_) {
        CommandBuffer::FromHandle(command_buffer)->FreeMemory();
        if (CommandBuffer::FromHandle(command_buffer)->GetStatus() != VK_SUCCESS) {
            result = VK_ERROR_OUT_OF_DEVICE_MEMORY;
        }
    }

    return result;
}

uint32_t CommandPool::ReserveInternal(uint32_t count) {
    mutex_.lock();
    if (command_buffers_.size() + count <= max_command_buffer_count_) {
        return count;
    } else {
        mutex_.unlock();
        return 0;
    }
}

void CommandPool::CancelInternal(uint32_t count) { mutex_.unlock(); }

void CommandPool::CommitInternal(VkCommandBuffer* handles, uint32_t count) {
    for (uint32_t i = 0; i < count; ++i) {
        command_buffers_.insert(handles[i]);
    }
    mutex_.unlock();
}

}  // namespace vksc
