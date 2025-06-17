/*
 * Copyright (c) 2024-2025 The Khronos Group Inc.
 * Copyright (c) 2024-2025 RasterGrid Kft.
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#pragma once

#include "vksc_dispatchable.h"
#include "vk_queue.h"
#include "icd_log.h"
#include "icd_shadow_stack.h"

namespace vksc {

class Device;

class Queue : public Dispatchable<Queue, VkQueue>, public vk::Queue {
  public:
    using NEXT = vk::Queue;

    Queue(VkQueue queue, Device& device);

    icd::Logger& Log() { return logger_; }

    bool IsValid() const { return true; }

    VkResult QueueSubmit(uint32_t submitCount, const VkSubmitInfo* pSubmits, VkFence fence);
    VkResult QueueSubmit2KHR(uint32_t submitCount, const VkSubmitInfo2* pSubmits, VkFence fence);

  private:
    icd::Logger logger_;
};

}  // namespace vksc
