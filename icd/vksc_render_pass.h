/*
 * Copyright (c) 2024-2026 The Khronos Group Inc.
 * Copyright (c) 2024-2026 RasterGrid Kft.
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#pragma once

#include "icd_defs.h"

namespace vksc {

class RenderPass {
  public:
    RenderPass(VkRenderPass handle, uint32_t subpass_desc_count, uint32_t attachment_desc_count)
        : subpass_desc_count_(subpass_desc_count), attachment_desc_count_(attachment_desc_count) {}

    uint32_t GetSubpassDescriptionCount() const { return subpass_desc_count_; }
    uint32_t GetAttachmentDescriptionCount() const { return attachment_desc_count_; }

  private:
    const uint32_t subpass_desc_count_;
    const uint32_t attachment_desc_count_;
};

}  // namespace vksc
