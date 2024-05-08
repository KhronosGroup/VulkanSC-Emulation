/*
 * Copyright (c) 2024 The Khronos Group Inc.
 * Copyright (c) 2024 RasterGrid Kft.
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#include "vksc_device.h"
#include "vksc_physical_device.h"
#include "vksc_queue.h"
#include "vksc_command_buffer.h"
#include "vksc_instance.h"
#include "icd_proc_addr.h"

namespace vksc {

Device::Device(VkDevice device, PhysicalDevice& physical_device)
    : Dispatchable(),
      vk::Device(device, physical_device.VkDispatch()),
      logger_(physical_device.Log(), VK_OBJECT_TYPE_DEVICE, device),
      device_queues_() {}

PFN_vkVoidFunction Device::GetDeviceProcAddr(const char* pName) { return icd::GetProcAddr(icd::ProcTypeMask::Device, pName); }

void Device::DestroyDevice(const VkAllocationCallbacks* pAllocator) {
    vk::Device::DestroyDevice(pAllocator);
    Destroy();
}

void Device::GetDeviceQueue(uint32_t queueFamilyIndex, uint32_t queueIndex, VkQueue* pQueue) {
    vk::Device::GetDeviceQueue(queueFamilyIndex, queueIndex, pQueue);
    if (*pQueue != VK_NULL_HANDLE) {
        *pQueue = device_queues_.GetOrAddChild(*pQueue, *this)->VkSCHandle();
    }
}

void Device::GetDeviceQueue2(const VkDeviceQueueInfo2* pQueueInfo, VkQueue* pQueue) {
    vk::Device::GetDeviceQueue2(pQueueInfo, pQueue);
    if (*pQueue != VK_NULL_HANDLE) {
        *pQueue = device_queues_.GetOrAddChild(*pQueue, *this)->VkSCHandle();
    }
}

VkResult Device::AllocateCommandBuffers(const VkCommandBufferAllocateInfo* pAllocateInfo, VkCommandBuffer* pCommandBuffers) {
    VkResult result = vk::Device::AllocateCommandBuffers(pAllocateInfo, pCommandBuffers);
    if (result >= VK_SUCCESS) {
        for (uint32_t i = 0; i < pAllocateInfo->commandBufferCount; ++i) {
            pCommandBuffers[i] = CommandBuffer::Create(pCommandBuffers[i], *this);
        }
    }
    return result;
}

void Device::FreeCommandBuffers(VkCommandPool commandPool, uint32_t commandBufferCount, const VkCommandBuffer* pCommandBuffers) {
    std::vector<VkCommandBuffer> cmd_buffers(commandBufferCount);
    for (uint32_t i = 0; i < commandBufferCount; ++i) {
        CommandBuffer* cmd_buffer = CommandBuffer::FromHandle(pCommandBuffers[i]);
        cmd_buffers[i] = cmd_buffer->VkHandle();
        cmd_buffer->Destroy();
    }
    vk::Device::FreeCommandBuffers(commandPool, commandBufferCount, cmd_buffers.data());
}

void Device::GetCommandPoolMemoryConsumption(VkCommandPool commandPool, VkCommandBuffer commandBuffer,
                                             VkCommandPoolMemoryConsumption* pConsumption) {
    // TODO: Add implementation
}

VkResult Device::GetFaultData(VkFaultQueryBehavior faultQueryBehavior, VkBool32* pUnrecordedFaults, uint32_t* pFaultCount,
                              VkFaultData* pFaults) {
    // TODO: Add implementation
    return VK_SUCCESS;
}

}  // namespace vksc
