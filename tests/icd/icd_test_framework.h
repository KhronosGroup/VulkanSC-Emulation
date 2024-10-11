/*
 * Copyright (c) 2024 The Khronos Group Inc.
 * Copyright (c) 2024 RasterGrid Kft.
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#include <gtest/gtest.h>
#include <string>

#include <vulkan/utility/vk_struct_helper.hpp>
#include <vulkan/vk_icd.h>

#include "icd_test_defs.h"
#include "test_vkmock_framework.h"
#include "test_vksc_dispatch_table.h"

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

    VkInstance InitInstance(const VkInstanceCreateInfo* pCreateInfo = nullptr);
    VkDevice InitDevice(const VkDeviceCreateInfo* pCreateInfo = nullptr);

    VkDeviceObjectReservationCreateInfo& ObjectReservation() { return object_reservation_; }

  private:
    VkInstance instance_{VK_NULL_HANDLE};
    VkDevice device_{VK_NULL_HANDLE};
    VkDeviceObjectReservationCreateInfo object_reservation_{};
};
