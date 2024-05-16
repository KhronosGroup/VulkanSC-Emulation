/*
 * Copyright (c) 2024 The Khronos Group Inc.
 * Copyright (c) 2024 RasterGrid Kft.
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#pragma once

#include "vksc_dispatchable.h"
#include "vk_queue.h"
#include "icd_log.h"

namespace vksc {

class Device;

class Queue : public Dispatchable<Queue, VkQueue>, public vk::Queue {
  public:
    Queue(VkQueue queue, Device& device);

    icd::Logger& Log() { return logger_; }

    bool IsValid() const { return true; }

    VkResult QueueSubmit(uint32_t submitCount, const VkSubmitInfo* pSubmits, VkFence fence);
    VkResult QueueSubmit2(uint32_t submitCount, const VkSubmitInfo2* pSubmits, VkFence fence);

  private:
    icd::Logger logger_;
};

}  // namespace vksc
