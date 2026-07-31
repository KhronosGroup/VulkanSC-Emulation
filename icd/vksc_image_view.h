/*
 * Copyright (c) 2024-2026 The Khronos Group Inc.
 * Copyright (c) 2024-2026 RasterGrid Kft.
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#pragma once

#include "icd_defs.h"

namespace vksc {

class ImageView {
  public:
    ImageView(VkImageView handle, bool layered) : layered_(layered) {}

    bool IsLayered() const { return layered_; }

  private:
    const bool layered_;
};

}  // namespace vksc
