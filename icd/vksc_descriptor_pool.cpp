/*
 * Copyright (c) 2024-2026 The Khronos Group Inc.
 * Copyright (c) 2024-2026 RasterGrid Kft.
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#include "vksc_descriptor_pool.h"
#include "vksc_device.h"

namespace vksc {

uint32_t DescriptorPool::GetAllocatedSetsAndReset() { return allocated_descriptor_sets_.exchange(0); }

void DescriptorPool::AllocateDescriptorSets(uint32_t count) {
    if (allocated_descriptor_sets_.fetch_add(count) + count > max_descriptor_sets_) {
        device_.ReportFault(VK_FAULT_LEVEL_CRITICAL, VK_FAULT_TYPE_INVALID_API_USAGE);
        device_.Log().Error("VKSC-EMU-AllocateDescriptorSets-UnexpectedOverflow",
                            "Unexpectedly exceeded number of descriptor sets in descriptor pool");
    }
}

void DescriptorPool::FreeDescriptorSets(uint32_t count) {
    if (allocated_descriptor_sets_.fetch_sub(count) < count) {
        allocated_descriptor_sets_.store(0);
        device_.ReportFault(VK_FAULT_LEVEL_CRITICAL, VK_FAULT_TYPE_INVALID_API_USAGE);
        device_.Log().Error("VKSC-EMU-FreeDescriptorSets-UnexpectedUnderflow",
                            "Unexpectedly attempted to free more descriptor sets than allocated in descriptor pool");
    }
}

}  // namespace vksc
