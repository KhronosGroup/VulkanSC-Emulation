/*
 * Copyright (c) 2024-2025 The Khronos Group Inc.
 * Copyright (c) 2024-2025 RasterGrid Kft.
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#include "icd_test_framework.h"
#include "uuid.h"

#include <vector>
#include <atomic>
#include <thread>
#include <future>
#include <array>
#include <numeric>

class OutputStructSanitizerTest : public IcdTest {
  public:
    OutputStructSanitizerTest() : IcdTest{} {}
};

TEST_F(OutputStructSanitizerTest, MemoryPropertyFlagBits) {
    TEST_DESCRIPTION("Test that memory property flags are properly sanitized");

    InitInstance();
    auto physical_device = GetPhysicalDevice();

    vkmock::GetPhysicalDeviceMemoryProperties = [](auto, VkPhysicalDeviceMemoryProperties *pMemoryProperties) {
        pMemoryProperties[0] = VkPhysicalDeviceMemoryProperties{
            3,
            {{VkMemoryPropertyFlags{VK_MEMORY_PROPERTY_DEVICE_LOCAL_BIT | VK_MEMORY_PROPERTY_DEVICE_COHERENT_BIT_AMD}, 0},
             {VkMemoryPropertyFlags{VK_MEMORY_PROPERTY_DEVICE_LOCAL_BIT | VK_MEMORY_PROPERTY_DEVICE_UNCACHED_BIT_AMD}, 1},
             {VkMemoryPropertyFlags{VK_MEMORY_PROPERTY_DEVICE_LOCAL_BIT | VK_MEMORY_PROPERTY_RDMA_CAPABLE_BIT_NV}, 2}},
            3,
            {{65536, VkMemoryHeapFlags{VK_MEMORY_HEAP_DEVICE_LOCAL_BIT}},
             {65536, VkMemoryHeapFlags{VK_MEMORY_HEAP_DEVICE_LOCAL_BIT}},
             {65536, VkMemoryHeapFlags{VK_MEMORY_HEAP_DEVICE_LOCAL_BIT}}}};
    };
    vkmock::GetPhysicalDeviceMemoryProperties2 = [&](auto, VkPhysicalDeviceMemoryProperties2 *pMemoryProperties) {
        vkmock::GetPhysicalDeviceMemoryProperties(VK_NULL_HANDLE, &pMemoryProperties->memoryProperties);
    };

    VkPhysicalDeviceMemoryProperties mem_props{};
    vksc::GetPhysicalDeviceMemoryProperties(physical_device, &mem_props);
    for (uint32_t i = 0; i < 3; ++i) {
        EXPECT_EQ(mem_props.memoryTypes[i].propertyFlags & VK_MEMORY_PROPERTY_DEVICE_COHERENT_BIT_AMD, 0);
        EXPECT_EQ(mem_props.memoryTypes[i].propertyFlags & VK_MEMORY_PROPERTY_DEVICE_UNCACHED_BIT_AMD, 0);
        EXPECT_EQ(mem_props.memoryTypes[i].propertyFlags & VK_MEMORY_PROPERTY_RDMA_CAPABLE_BIT_NV, 0);
    }

    auto mem_props2 = vku::InitStruct<VkPhysicalDeviceMemoryProperties2>();
    vksc::GetPhysicalDeviceMemoryProperties2(physical_device, &mem_props2);
    EXPECT_EQ(mem_props2.memoryProperties.memoryTypes[0].propertyFlags & VK_MEMORY_PROPERTY_DEVICE_COHERENT_BIT_AMD,
              VkMemoryPropertyFlags{});
    EXPECT_EQ(mem_props2.memoryProperties.memoryTypes[0].propertyFlags & VK_MEMORY_PROPERTY_DEVICE_UNCACHED_BIT_AMD,
              VkMemoryPropertyFlags{});
    EXPECT_EQ(mem_props2.memoryProperties.memoryTypes[0].propertyFlags & VK_MEMORY_PROPERTY_RDMA_CAPABLE_BIT_NV,
              VkMemoryPropertyFlags{});
}

TEST_F(OutputStructSanitizerTest, QueueFlagBits) {
    TEST_DESCRIPTION("Test if queue flags are properly sanitized");

    InitInstance();
    auto physical_device = GetPhysicalDevice();

    vkmock::GetPhysicalDeviceQueueFamilyProperties = [](auto, uint32_t *pQueueFamilyPropertyCount,
                                                        VkQueueFamilyProperties *pQueueFamilyProperties) {
        static std::vector<VkQueueFamilyProperties> props = {
            {VkQueueFlags{VK_QUEUE_GRAPHICS_BIT | VK_QUEUE_COMPUTE_BIT | VK_QUEUE_TRANSFER_BIT | VK_QUEUE_SPARSE_BINDING_BIT |
                          VK_QUEUE_PROTECTED_BIT | VK_QUEUE_OPTICAL_FLOW_BIT_NV},
             1,
             32,
             {0, 0, 0}},
            {VkQueueFlags{VK_QUEUE_GRAPHICS_BIT | VK_QUEUE_COMPUTE_BIT | VK_QUEUE_TRANSFER_BIT | VK_QUEUE_SPARSE_BINDING_BIT |
                          VK_QUEUE_PROTECTED_BIT},
             1,
             32,
             {0, 0, 0}}};
        *pQueueFamilyPropertyCount = 2;
        for (uint32_t i = 0; i < props.size(); ++i) {
            pQueueFamilyProperties[i] = props[i];
        }
    };
    vkmock::GetPhysicalDeviceQueueFamilyProperties2 = [&](auto, uint32_t *pQueueFamilyPropertyCount,
                                                          VkQueueFamilyProperties2 *pQueueFamilyProperties2) {
        *pQueueFamilyPropertyCount = 2;
        std::vector<VkQueueFamilyProperties> props(2);
        vkmock::GetPhysicalDeviceQueueFamilyProperties(VK_NULL_HANDLE, pQueueFamilyPropertyCount, props.data());
        for (uint32_t i = 0; i < props.size(); ++i) {
            pQueueFamilyProperties2[i].queueFamilyProperties = props[i];
        }
    };

    uint32_t queue_props_count = 2;
    std::vector<VkQueueFamilyProperties> queue_props(queue_props_count);
    vksc::GetPhysicalDeviceQueueFamilyProperties(physical_device, &queue_props_count, queue_props.data());
    for (uint32_t i = 0; i < queue_props_count; ++i) {
        EXPECT_EQ(queue_props[i].queueFlags & VK_QUEUE_SPARSE_BINDING_BIT, 0);
        EXPECT_EQ(queue_props[i].queueFlags & VK_QUEUE_OPTICAL_FLOW_BIT_NV, 0);
    }

    auto queue_props2 = std::vector<VkQueueFamilyProperties2>(queue_props_count, vku::InitStruct<VkQueueFamilyProperties2>());
    vksc::GetPhysicalDeviceQueueFamilyProperties2(physical_device, &queue_props_count, queue_props2.data());
    for (uint32_t i = 0; i < queue_props_count; ++i) {
        EXPECT_EQ(queue_props2[i].queueFamilyProperties.queueFlags & VK_QUEUE_SPARSE_BINDING_BIT, 0);
        EXPECT_EQ(queue_props2[i].queueFamilyProperties.queueFlags & VK_QUEUE_OPTICAL_FLOW_BIT_NV, 0);
    }
}

TEST_F(OutputStructSanitizerTest, FragmentShadingRateSpecialCase11) {
    TEST_DESCRIPTION(
        "Test that we restore a sampleCount of ~0 for fragmentSize {1,1} in the results of "
        "vkGetPhysicalDeviceFragmentShadingRatesKHR");

    InitInstance();
    auto physical_device = GetPhysicalDevice();

    vkmock::GetPhysicalDeviceFragmentShadingRatesKHR = [&](auto, uint32_t *pFragmentShadingRateCount,
                                                           VkPhysicalDeviceFragmentShadingRateKHR *pFragmentShadingRates) {
        static const std::vector<VkPhysicalDeviceFragmentShadingRateKHR> fragment_shading_rates = {
            VkPhysicalDeviceFragmentShadingRateKHR{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_SHADING_RATE_KHR, nullptr,
                                                   VK_SAMPLE_COUNT_1_BIT | VK_SAMPLE_COUNT_4_BIT, VkExtent2D{2, 1}},
            VkPhysicalDeviceFragmentShadingRateKHR{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_SHADING_RATE_KHR, nullptr, 0xFFFFFFFF,
                                                   VkExtent2D{1, 1}},
            VkPhysicalDeviceFragmentShadingRateKHR{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_SHADING_RATE_KHR, nullptr,
                                                   VK_SAMPLE_COUNT_1_BIT | VK_SAMPLE_COUNT_4_BIT, VkExtent2D{2, 2}},
        };
        VkResult result = VK_SUCCESS;
        if (pFragmentShadingRates == nullptr) {
            *pFragmentShadingRateCount = static_cast<uint32_t>(fragment_shading_rates.size());
        } else {
            if (*pFragmentShadingRateCount < fragment_shading_rates.size()) {
                result = VK_INCOMPLETE;
            }
            *pFragmentShadingRateCount = std::min(*pFragmentShadingRateCount, static_cast<uint32_t>(fragment_shading_rates.size()));
            for (uint32_t i = 0; i < *pFragmentShadingRateCount; ++i) {
                pFragmentShadingRates[i] = fragment_shading_rates[i];
            }
        }
        return result;
    };

    uint32_t count = 4;
    std::vector<VkPhysicalDeviceFragmentShadingRateKHR> results(count, vku::InitStruct<VkPhysicalDeviceFragmentShadingRateKHR>());

    EXPECT_EQ(vksc::GetPhysicalDeviceFragmentShadingRatesKHR(physical_device, &count, nullptr), VK_SUCCESS);
    EXPECT_EQ(count, 3);

    EXPECT_EQ(vksc::GetPhysicalDeviceFragmentShadingRatesKHR(physical_device, &count, results.data()), VK_SUCCESS);
    EXPECT_EQ(count, 3);
    EXPECT_EQ(results[0].fragmentSize.width, 2);
    EXPECT_EQ(results[0].fragmentSize.height, 1);
    EXPECT_EQ(results[0].sampleCounts, VK_SAMPLE_COUNT_1_BIT | VK_SAMPLE_COUNT_4_BIT);
    EXPECT_EQ(results[1].fragmentSize.width, 1);
    EXPECT_EQ(results[1].fragmentSize.height, 1);
    EXPECT_EQ(results[1].sampleCounts, 0xFFFFFFFF);
    EXPECT_EQ(results[2].fragmentSize.width, 2);
    EXPECT_EQ(results[2].fragmentSize.height, 2);
    EXPECT_EQ(results[2].sampleCounts, VK_SAMPLE_COUNT_1_BIT | VK_SAMPLE_COUNT_4_BIT);

    count = 2;
    results.clear();
    results.resize(count, vku::InitStruct<VkPhysicalDeviceFragmentShadingRateKHR>());
    EXPECT_EQ(vksc::GetPhysicalDeviceFragmentShadingRatesKHR(physical_device, &count, results.data()), VK_INCOMPLETE);
    EXPECT_EQ(count, 2);
    EXPECT_EQ(results[0].fragmentSize.width, 2);
    EXPECT_EQ(results[0].fragmentSize.height, 1);
    EXPECT_EQ(results[0].sampleCounts, VK_SAMPLE_COUNT_1_BIT | VK_SAMPLE_COUNT_4_BIT);
    EXPECT_EQ(results[1].fragmentSize.width, 1);
    EXPECT_EQ(results[1].fragmentSize.height, 1);
    EXPECT_EQ(results[1].sampleCounts, 0xFFFFFFFF);

    count = 1;
    results.clear();
    results.resize(count, vku::InitStruct<VkPhysicalDeviceFragmentShadingRateKHR>());
    EXPECT_EQ(vksc::GetPhysicalDeviceFragmentShadingRatesKHR(physical_device, &count, results.data()), VK_INCOMPLETE);
    EXPECT_EQ(count, 1);
    EXPECT_EQ(results[0].fragmentSize.width, 2);
    EXPECT_EQ(results[0].fragmentSize.height, 1);
    EXPECT_EQ(results[0].sampleCounts, VK_SAMPLE_COUNT_1_BIT | VK_SAMPLE_COUNT_4_BIT);
}
