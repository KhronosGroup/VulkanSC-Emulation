/*
 * Copyright (c) 2024 The Khronos Group Inc.
 * Copyright (c) 2024 RasterGrid Kft.
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#pragma once

#include "icd_log.h"
#include "icd_object_tracker.h"

#include <vulkan/vulkan.h>

#include <mutex>
#include <unordered_set>

namespace vksc {

class Device;
class CommandBufferMemoryTracker;

class CommandPool {
  public:
    CommandPool(VkCommandPool command_pool, Device& device, VkDeviceSize reserved_size, uint32_t reserved_count);

    icd::Logger& Log() { return logger_; }

    Device& GetDevice() const { return device_; }

    VkDeviceSize GetReservedSize() const;
    VkDeviceSize GetAllocatedSize() const;
    uint32_t GetReservedCount() const;
    uint32_t GetAllocatedCount() const;

    VkResult AllocateMemory(VkDeviceSize size);
    icd::ObjectReservation<CommandPool, VkCommandBuffer> ReserveCommandBuffers(uint32_t count, const VkCommandBuffer* buffers);

    VkResult FreeMemory(VkDeviceSize size);
    VkResult FreeCommandBuffers(uint32_t count, const VkCommandBuffer* buffers);
    VkResult ResetCommandPool(VkCommandPoolResetFlags flags = 0);

    bool operator==(const VkCommandPool& rhs) const;

  private:
    friend class icd::ObjectReservation<CommandPool, VkCommandBuffer>;

    uint32_t ReserveInternal(uint32_t count);
    void CancelInternal();
    void CommitInternal(VkCommandBuffer* handles, uint32_t count);

    VkCommandPool handle_;
    Device& device_;
    icd::Logger logger_;

    VkDeviceSize reserved_size_;
    VkDeviceSize allocated_size_{0};

    uint32_t max_command_buffer_count_;
    std::unordered_set<VkCommandBuffer> command_buffers_{};

    mutable std::recursive_mutex mutex_{};
};

}  // namespace vksc
