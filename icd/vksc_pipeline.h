/*
 * Copyright (c) 2024-2026 The Khronos Group Inc.
 * Copyright (c) 2024-2026 RasterGrid Kft.
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#pragma once

#include "icd_defs.h"

namespace vksc {

class Pipeline {
  public:
    Pipeline(VkPipeline handle, VkPipelineBindPoint bind_point, uint64_t pool_size)
        : bind_point_(bind_point), pool_size_(pool_size) {}

    VkPipelineBindPoint GetBindPoint() const { return bind_point_; }
    uint64_t GetPoolSize() const { return pool_size_; }

  private:
    const VkPipelineBindPoint bind_point_;
    const uint64_t pool_size_;
};

}  // namespace vksc
