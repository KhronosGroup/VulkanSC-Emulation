/*
 * Copyright (c) 2024-2026 The Khronos Group Inc.
 * Copyright (c) 2024-2026 RasterGrid Kft.
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#pragma once

#include "icd_defs.h"

namespace vksc {

class Image {
  public:
    Image(VkImage handle, VkImageType image_type, VkExtent3D extent, uint32_t mip_levels, uint32_t array_layers)
        : image_type_(image_type), extent_(extent), mip_levels_(mip_levels), array_layers_(array_layers) {}

    uint32_t GetImageViewLevelCount(const VkImageViewCreateInfo& create_info) const {
        return GetSubresourceRangeLevelCount(create_info.subresourceRange);
    }

    uint32_t GetImageViewLayerCount(const VkImageViewCreateInfo& create_info) const {
        if (image_type_ == VK_IMAGE_TYPE_3D && create_info.viewType != VK_IMAGE_VIEW_TYPE_3D) {
            return create_info.subresourceRange.layerCount == VK_REMAINING_ARRAY_LAYERS
                       ? extent_.depth - create_info.subresourceRange.baseArrayLayer
                       : create_info.subresourceRange.layerCount;
        } else {
            return GetSubresourceRangeLayerCount(create_info.subresourceRange);
        }
    }

  private:
    uint32_t GetSubresourceRangeLevelCount(const VkImageSubresourceRange& range) const {
        return range.levelCount == VK_REMAINING_MIP_LEVELS ? mip_levels_ - range.baseMipLevel : range.levelCount;
    }

    uint32_t GetSubresourceRangeLayerCount(const VkImageSubresourceRange& range) const {
        return range.layerCount == VK_REMAINING_ARRAY_LAYERS ? array_layers_ - range.baseArrayLayer : range.layerCount;
    }

    const VkImageType image_type_;
    const VkExtent3D extent_;
    const uint32_t mip_levels_;
    const uint32_t array_layers_;
};

}  // namespace vksc
