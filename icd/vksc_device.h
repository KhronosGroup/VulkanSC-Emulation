/*
 * Copyright (c) 2024 The Khronos Group Inc.
 * Copyright (c) 2024 RasterGrid Kft.
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#pragma once

#include "vksc_dispatchable.h"
#include "vk_device.h"
#include "icd_log.h"

#include <vector>
#include <memory>

namespace vksc {

class PhysicalDevice;
class Queue;

class Device : public Dispatchable<Device, VkDevice>, public vk::Device {
  public:
    Device(VkDevice device, PhysicalDevice& physical_device);

    icd::Logger& Log() { return logger_; }

    PFN_vkVoidFunction GetDeviceProcAddr(const char* pName);
    void DestroyDevice(const VkAllocationCallbacks* pAllocator);
    void GetDeviceQueue(uint32_t queueFamilyIndex, uint32_t queueIndex, VkQueue* pQueue);
    void GetDeviceQueue2(const VkDeviceQueueInfo2* pQueueInfo, VkQueue* pQueue);

    VkResult AllocateCommandBuffers(const VkCommandBufferAllocateInfo* pAllocateInfo, VkCommandBuffer* pCommandBuffers);
    void FreeCommandBuffers(VkCommandPool commandPool, uint32_t commandBufferCount, const VkCommandBuffer* pCommandBuffers);

    void GetCommandPoolMemoryConsumption(VkCommandPool commandPool, VkCommandBuffer commandBuffer,
                                         VkCommandPoolMemoryConsumption* pConsumption);

    VkResult GetFaultData(VkFaultQueryBehavior faultQueryBehavior, VkBool32* pUnrecordedFaults, uint32_t* pFaultCount,
                          VkFaultData* pFaults);

  private:
    icd::Logger logger_;

    DispatchableChildren<Queue, VkQueue> device_queues_;
};

}  // namespace vksc
