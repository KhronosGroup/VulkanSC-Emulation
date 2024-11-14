/*
 * Copyright (c) 2024 The Khronos Group Inc.
 * Copyright (c) 2024 RasterGrid Kft.
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

bool CommandPool::operator==(const VkCommandPool& rhs) const { return this->handle_ == rhs; }

VkDeviceSize CommandPool::GetReservedMemorySize() const {
    const std::lock_guard<std::recursive_mutex> lock{mutex_};
    return reserved_memory_size_;
}

VkDeviceSize CommandPool::GetAllocatedMemorySize() const {
    const std::lock_guard<std::recursive_mutex> lock{mutex_};
    return allocated_memory_size_;
}

uint32_t CommandPool::GetReservedCount() const {
    const std::lock_guard<std::recursive_mutex> lock{mutex_};
    return max_command_buffer_count_;
}

uint32_t CommandPool::GetAllocatedCount() const {
    const std::lock_guard<std::recursive_mutex> lock{mutex_};
    return static_cast<uint32_t>(command_buffers_.size());
}

VkResult CommandPool::AllocateMemory(VkDeviceSize size) {
    if (const std::lock_guard<std::recursive_mutex> lock{mutex_}; allocated_memory_size_ + size <= reserved_memory_size_) {
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
    if (const std::lock_guard<std::recursive_mutex> lock{mutex_}; size <= allocated_memory_size_) {
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
    const std::lock_guard<std::recursive_mutex> lock{mutex_};

    for (uint32_t i = 0; i < count; ++i) {
        if (buffers[i] == VK_NULL_HANDLE) {
            continue;
        }
        auto it = std::find(command_buffers_.cbegin(), command_buffers_.cend(), buffers[i]);
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
    const std::lock_guard<std::recursive_mutex> lock{mutex_};
    VkResult result = VK_SUCCESS;

    for (auto& command_buffer : command_buffers_) {
        vksc::CommandBuffer::FromHandle(command_buffer)->FreeMemory();
        if (vksc::CommandBuffer::FromHandle(command_buffer)->GetStatus() != VK_SUCCESS) {
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

void CommandPool::CancelInternal() { mutex_.unlock(); }

void CommandPool::CommitInternal(VkCommandBuffer* handles, uint32_t count) {
    for (uint32_t i = 0; i < count; ++i) {
        command_buffers_.insert(handles[i]);
    }
    mutex_.unlock();
}

}  // namespace vksc
