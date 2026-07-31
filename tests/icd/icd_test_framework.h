/*
 * Copyright (c) 2024-2025 The Khronos Group Inc.
 * Copyright (c) 2024-2025 RasterGrid Kft.
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#pragma once

#include <gtest/gtest.h>
#include <string>
#include <vector>
#include <unordered_map>
#include <utility>
#include <mutex>
#include <atomic>

#include <vulkan/utility/vk_struct_helper.hpp>
#include <vulkan/vk_icd.h>

#include "icd_test_defs.h"
#include "test_vkmock_framework.h"
#include "test_vksc_dispatch_table.h"

// Can be used by tests to record additional details / description of test
#define TEST_DESCRIPTION(desc) RecordProperty("description", desc)

class Framework : public ::testing::Environment {
  public:
    virtual void SetUp() override;
    virtual void TearDown() override;

    static void InitArgs(int* argc, char* argv[]);

    static bool WithVulkanLoader() { return with_vulkan_loader_; }
    static bool WithVulkanSCLoader() { return with_vulkansc_loader_; }

  private:
    inline static bool with_vulkan_loader_{false};
    inline static bool with_vulkansc_loader_{false};
};

template <typename T>
class VkMockObject {
  public:
    VkMockObject() {}
    T handle() {
        set_loader_magic_value(this);
        return (T)this;
    }
    operator T() {
        set_loader_magic_value(this);
        return (T)this;
    }

  private:
    VK_LOADER_DATA loader_data_;
};

template <typename T>
class VkMockObjects {
  public:
    void Reset(uint32_t count) {
        std::unique_lock lock(mutex_);
        mock_objects_.clear();
        unused_mock_objects_.clear();
        mock_objects_.resize(count);
        unused_mock_objects_.reserve(count);
        for (auto& mock_object : mock_objects_) {
            unused_mock_objects_.push_back(mock_object);
        }
    }

    T Alloc() {
        std::unique_lock lock(mutex_);
        if (!unused_mock_objects_.empty()) {
            auto handle = unused_mock_objects_.back();
            unused_mock_objects_.pop_back();
            // Need to reset loader magic value on reuse
            set_loader_magic_value(handle);
            return handle;
        } else {
            return VK_NULL_HANDLE;
        }
    }

    void Free(T handle) {
        if (handle != VK_NULL_HANDLE) {
            std::unique_lock lock(mutex_);
            unused_mock_objects_.push_back(handle);
        }
    }

  private:
    std::mutex mutex_{};
    std::vector<VkMockObject<T>> mock_objects_{};
    std::vector<T> unused_mock_objects_{};
};

class VkMockNonDispatchableObjectGenerator {
  public:
    template <typename T>
    T Alloc() {
        return reinterpret_cast<T>(next_mock_handle_.fetch_add(1));
    }

  private:
    std::atomic_uint64_t next_mock_handle_{42};
};

class IcdTest : public ::testing::Test {
  public:
    IcdTest();
    virtual ~IcdTest();

    void DestroyDevice();
    void DestroyInstance();

    void EnableInstanceExtension(const char* extension_name);
    const VkInstanceCreateInfo GetDefaultInstanceCreateInfo(void* pnext_chain = nullptr) const;
    VkInstance InitInstance(VkInstanceCreateInfo* create_info = nullptr);

    VkInstance GetInstance() const { return instance_; }
    VkPhysicalDevice GetPhysicalDevice();
    VkDevice GetDevice() const { return device_; }
    VkQueue GetQueue() const { return queue_; }

    void EnableDeviceExtension(const char* extension_name);
    const VkDeviceCreateInfo GetDefaultDeviceCreateInfo(void* pnext_chain = nullptr) const;
    VkDevice InitDevice(VkDeviceCreateInfo* create_info = nullptr);

    VkDeviceObjectReservationCreateInfo& ObjectReservation() { return object_reservation_; }

    uint32_t GetMaxQueryFaultCount();

    VkCommandPool CreateCommandPool(VkDeviceSize reserved_size, uint32_t max_command_buffers = 1);
    std::vector<VkCommandBuffer> CreateCommandBuffers(VkCommandPool command_pool, uint32_t count = 1,
                                                      VkCommandBufferLevel level = VK_COMMAND_BUFFER_LEVEL_PRIMARY);

    VkBuffer GetBuffer(VkDeviceSize size, VkBufferUsageFlags usage);
    VkDeviceMemory AllocateMemory(VkBuffer buffer, VkDeviceSize size, VkMemoryPropertyFlags mem_flags = 0);
    void BindMemory(VkDeviceMemory memory, VkBuffer buffer);
    VkBuffer CreateBufferWithBoundMemory(VkDeviceSize size, VkBufferUsageFlags usage = VK_BUFFER_USAGE_STORAGE_BUFFER_BIT,
                                         VkMemoryPropertyFlags mem_flags = 0);

  private:
    VkInstance instance_{VK_NULL_HANDLE};
    VkPhysicalDevice physical_device_{VK_NULL_HANDLE};
    VkDevice device_{VK_NULL_HANDLE};
    VkQueue queue_{VK_NULL_HANDLE};
    VkDeviceSize buffer_size_{0};

    VkDeviceObjectReservationCreateInfo object_reservation_{};
    std::vector<const char*> instance_extensions_{};
    std::vector<const char*> device_extensions_{};
};
