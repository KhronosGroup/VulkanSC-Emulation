/*
 * Copyright (c) 2024-2026 The Khronos Group Inc.
 * Copyright (c) 2024-2026 RasterGrid Kft.
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#pragma once

#include "icd_defs.h"

namespace vksc {

class Device;

class DescriptorSetLayout {
  public:
    DescriptorSetLayout(VkDescriptorSetLayout handle, uint32_t binding_count) : binding_count_(binding_count) {}

    uint32_t GetBindingCount() const { return binding_count_; }

  private:
    const uint32_t binding_count_;
};

}  // namespace vksc
