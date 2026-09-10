/*
 * Copyright (c) 2024-2026 The Khronos Group Inc.
 * Copyright (c) 2024-2026 RasterGrid Kft.
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#include "vksc_dispatchable.h"

#include "vksc_instance.h"
#include "vksc_physical_device.h"
#include "vksc_device.h"
#include "vksc_queue.h"
#include "vksc_command_buffer.h"

namespace vksc {

uint64_t ConvertVkSCHandleToVulkan(VkObjectType object_type, uint64_t object_handle) {
    if (object_handle == 0) {
        return 0;
    }

    switch (object_type) {
        case VK_OBJECT_TYPE_INSTANCE:
            return ConvertVkSCHandleToVulkan<Instance, VkInstance>(object_handle);

        case VK_OBJECT_TYPE_PHYSICAL_DEVICE:
            return ConvertVkSCHandleToVulkan<PhysicalDevice, VkPhysicalDevice>(object_handle);

        case VK_OBJECT_TYPE_DEVICE:
            return ConvertVkSCHandleToVulkan<Device, VkDevice>(object_handle);

        case VK_OBJECT_TYPE_QUEUE:
            return ConvertVkSCHandleToVulkan<Queue, VkQueue>(object_handle);

        case VK_OBJECT_TYPE_COMMAND_BUFFER:
            return ConvertVkSCHandleToVulkan<CommandBuffer, VkCommandBuffer>(object_handle);

        default:
            return object_handle;
    }
}

}  // namespace vksc
