/*
 * Copyright (c) 2024 The Khronos Group Inc.
 * Copyright (c) 2024 RasterGrid Kft.
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#include <gtest/gtest.h>
#include <string>
#include <vector>

#include <vulkan/utility/vk_struct_helper.hpp>
#include <vulkan/vk_icd.h>

#include "icd_test_defs.h"
#include "test_vkmock_framework.h"
#include "test_vksc_dispatch_table.h"

// Can be used by tests to record additional details / description of test
#define TEST_DESCRIPTION(desc) RecordProperty("description", desc)

// Shorthand to throw GTest exception, causing the test to fail with user-provided message stream fragment
#define FAIL_TEST_IF(pred, msg_stream)                                                                         \
    do {                                                                                                       \
        if (pred) {                                                                                            \
            GTEST_MESSAGE_AT_(__FILE__, __LINE__, "", ::testing::TestPartResult::kFatalFailure) << msg_stream; \
            throw testing::AssertionException(                                                                 \
                testing::TestPartResult(testing::TestPartResult::kFatalFailure, __FILE__, __LINE__, ""));      \
        }                                                                                                      \
    } while (0)

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
    VkMockObject() { set_loader_magic_value(this); }
    T handle() { return (T)this; }
    operator T() { return (T)this; }

  private:
    VK_LOADER_DATA loader_data_;
};

class IcdTest : public ::testing::Test {
  public:
    IcdTest();
    virtual ~IcdTest();

    void EnableInstanceExtension(const char* extension_name);
    const VkInstanceCreateInfo GetDefaultInstanceCreateInfo(void* pnext_chain = nullptr) const;
    VkInstance InitInstance(VkInstanceCreateInfo* create_info = nullptr);

    VkPhysicalDevice InitPhysicalDevice();

    void EnableDeviceExtension(const char* extension_name);
    const VkDeviceCreateInfo GetDefaultDeviceCreateInfo(void* pnext_chain = nullptr) const;
    VkDevice InitDevice(VkDeviceCreateInfo* create_info = nullptr);

    VkDeviceObjectReservationCreateInfo& ObjectReservation() { return object_reservation_; }

    template <typename Pred>
    uint32_t GetQueueFamilyIndex(Pred&& pred);
    uint32_t GetUniversalQueueFamilyIndex();

    template <typename T>
    auto has_flag(int);
    template <typename T>
    auto is_flag(int);

    template <>
    auto has_flag<VkCommandPool>(int flags) {
        return [flags](VkQueueFamilyProperties other) -> bool { return other.queueFlags & flags; };
    }
    template <>
    auto is_flag<VkCommandPool>(int flags) {
        return [flags](VkQueueFamilyProperties other) -> bool { return other.queueFlags == flags; };
    }

    template <>
    auto has_flag<VkDeviceMemory>(int flags) {
        return [flags](VkMemoryType other) -> bool { return other.propertyFlags & flags; };
    }
    template <>
    auto is_flag<VkDeviceMemory>(int flags) {
        return [flags](VkMemoryType other) -> bool { return other.propertyFlags == flags; };
    }

    VkCommandPool GetCommandPool(VkDeviceSize reserved_size, uint32_t queue_family_index, uint32_t max_command_buffers = 1);
    std::vector<VkCommandBuffer> GetCommandBuffers(VkCommandPool command_pool, uint32_t count = 1,
                                                   VkCommandBufferLevel level = VK_COMMAND_BUFFER_LEVEL_PRIMARY);

    template <typename ContinuousRange = std::initializer_list<uint32_t>>
    VkBuffer GetBuffer(VkDeviceSize size, VkBufferUsageFlags usage, ContinuousRange&& queueFamilyIndices);

    template <typename Pred>
    uint32_t GetMemoryTypeIndex(Pred&& pred);

    VkDeviceMemory AllocateMemory(VkBuffer buffer, VkDeviceSize size, VkMemoryPropertyFlags mem_flags = 0);
    void BindMemory(VkDeviceMemory memory, VkBuffer buffer);

  protected:
    VkInstance instance_{VK_NULL_HANDLE};
    VkPhysicalDevice physical_device_{VK_NULL_HANDLE};
    VkDevice device_{VK_NULL_HANDLE};
    VkDeviceSize buffer_size_{0};

    VkDeviceObjectReservationCreateInfo object_reservation_{};
    std::vector<const char*> instance_extensions_{};
    std::vector<const char*> device_extensions_{};
};

template <typename Pred>
uint32_t IcdTest::GetQueueFamilyIndex(Pred&& pred) {
    uint32_t queue_fam_prop_count;
    vksc::GetPhysicalDeviceQueueFamilyProperties(physical_device_, &queue_fam_prop_count, NULL);
    std::vector<VkQueueFamilyProperties> queue_fam_props(queue_fam_prop_count);
    vksc::GetPhysicalDeviceQueueFamilyProperties(physical_device_, &queue_fam_prop_count, queue_fam_props.data());

    for (uint32_t i = 0; i < queue_fam_prop_count; ++i) {
        if (pred(queue_fam_props[i])) {
            return i;
        }
    }
    return UINT32_MAX;
}

template <typename ContinuousRange>
VkBuffer IcdTest::GetBuffer(VkDeviceSize size, VkBufferUsageFlags usage, ContinuousRange&& queueFamilyIndices) {
    auto buf_info = vku::InitStruct<VkBufferCreateInfo>();
    buf_info.flags = 0;
    buf_info.size = size;
    buf_info.usage = usage;
    buf_info.sharingMode = VK_SHARING_MODE_EXCLUSIVE;
    buf_info.queueFamilyIndexCount =
        static_cast<uint32_t>(std::distance(std::begin(queueFamilyIndices), std::end(queueFamilyIndices)));
    buf_info.pQueueFamilyIndices = std::data(queueFamilyIndices);
    VkBuffer buffer;
    FAIL_TEST_IF(vksc::CreateBuffer(device_, &buf_info, NULL, &buffer) != VK_SUCCESS, "Failed to create buffer.");
    buffer_size_ = size;

    return buffer;
}
