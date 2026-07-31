/*
 * Copyright (c) 2024-2026 The Khronos Group Inc.
 * Copyright (c) 2024-2026 RasterGrid Kft.
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#pragma once

#include "icd_defs.h"

#include <atomic>

namespace vksc {

class Device;

class DescriptorPool {
  public:
    DescriptorPool(VkDescriptorPool handle, Device& device, uint32_t max_descriptor_sets)
        : device_(device), max_descriptor_sets_(max_descriptor_sets), allocated_descriptor_sets_(0) {}

    uint32_t GetAllocatedSetsAndReset();
    void AllocateDescriptorSets(uint32_t count);
    void FreeDescriptorSets(uint32_t count);

  private:
    Device& device_;
    const uint32_t max_descriptor_sets_;
    std::atomic_uint32_t allocated_descriptor_sets_;
};

}  // namespace vksc
