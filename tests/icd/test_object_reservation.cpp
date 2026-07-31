/*
 * Copyright (c) 2024-2026 The Khronos Group Inc.
 * Copyright (c) 2024-2026 RasterGrid Kft.
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#include "icd_test_framework.h"
#include "icd_test_pipeline_cache_utils.h"

#include <vector>
#include <algorithm>
#include <functional>

class ObjectReservationTest : public IcdTest {
  public:
    inline static uint64_t kPipelinePoolEntrySize = 65536;
    inline static const char* kGraphicsPipelineUUID = "1265a236-e369-11ed-b5ea-0242ac120002";
    inline static const char* kComputePipelineUUID = "b23d0e5c-70a0-4d67-8781-99ec3798ed31";

    void InitPipelineCaches() {
        // clang-format off
        pipeline_caches_.in_pipeline_pools = {
            PipelinePoolDesc{kPipelinePoolEntrySize, 2}
        };
        pipeline_caches_.in_pipeline_caches = {
            PipelineCacheDesc{
                {
                    PipelineDesc{
                        kGraphicsPipelineUUID,
                        49658,
                        kSampleGraphicsPipelineJson,
                        {
                            CompileSPV(kSampleVertexShaderSpv),
                            CompileSPV(kSampleFragmentShaderSpv)
                        }
                    },
                    PipelineDesc{
                        kComputePipelineUUID,
                        6512,
                        kSampleComputePipelineJson,
                        {
                            CompileSPV(kSampleComputeShaderSpv),
                        }
                    }
                }
            }
        };
        // clang-format on

        BuildPipelineCaches(pipeline_caches_);
    }

    VkPipelinePoolSize GetPipelinePoolSize() const {
        assert(!pipeline_caches_.out_pipeline_pool_sizes.empty());
        return pipeline_caches_.out_pipeline_pool_sizes[0];
    }

    VkPipelineCacheCreateInfo GetPipelineCacheCreateInfo() const {
        assert(!pipeline_caches_.out_pipeline_cache_create_info.empty());
        return pipeline_caches_.out_pipeline_cache_create_info[0];
    }

    VkPipelineOfflineCreateInfo GetGraphicsPipelineOfflineCreateInfo() const {
        auto offline_info = vku::InitStruct<VkPipelineOfflineCreateInfo>();
        utils::UUID(kGraphicsPipelineUUID).CopyToArray(offline_info.pipelineIdentifier);
        offline_info.poolEntrySize = kPipelinePoolEntrySize;
        return offline_info;
    }

    VkPipelineOfflineCreateInfo GetComputePipelineOfflineCreateInfo() const {
        auto offline_info = vku::InitStruct<VkPipelineOfflineCreateInfo>();
        utils::UUID(kComputePipelineUUID).CopyToArray(offline_info.pipelineIdentifier);
        offline_info.poolEntrySize = kPipelinePoolEntrySize;
        return offline_info;
    }

    VkPhysicalDeviceVulkanSC10Properties GetVulkanSC10Properties() {
        auto physical_device = GetPhysicalDevice();
        auto sc_10_props = vku::InitStruct<VkPhysicalDeviceVulkanSC10Properties>();
        auto props2 = vku::InitStruct<VkPhysicalDeviceProperties2>(&sc_10_props);
        vksc::GetPhysicalDeviceProperties2(physical_device, &props2);
        return sc_10_props;
    }

    using caps_func_t = std::function<bool(VkDeviceObjectReservationCreateInfo& object_reservation_info, uint32_t tested_limit)>;
    using setup_func_t = std::function<bool(VkDevice device)>;
    using create_func_t = std::function<void(VkDevice device, uint32_t index, uint32_t create_count, bool should_fail)>;
    using destroy_func_t = std::function<void(VkDevice device, uint32_t index, uint32_t destroy_count)>;
    using teardown_func_t = std::function<void(VkDevice device)>;

    VkDevice InitDeviceWithCustomObjectReservation(void* object_reservation_info) {
        const float queue_priority = 1.f;
        auto queue_info = vku::InitStruct<VkDeviceQueueCreateInfo>();
        queue_info.queueCount = 1;
        queue_info.pQueuePriorities = &queue_priority;

        auto device_reservation_info = vku::InitStruct<VkDeviceObjectReservationCreateInfo>(object_reservation_info);
        device_reservation_info.pipelineCacheCreateInfoCount =
            static_cast<uint32_t>(pipeline_caches_.out_pipeline_cache_create_info.size());
        device_reservation_info.pPipelineCacheCreateInfos = pipeline_caches_.out_pipeline_cache_create_info.data();
        device_reservation_info.pipelinePoolSizeCount = static_cast<uint32_t>(pipeline_caches_.out_pipeline_pool_sizes.size());
        device_reservation_info.pPipelinePoolSizes = pipeline_caches_.out_pipeline_pool_sizes.data();

        auto phys_dev_sc_features = vku::InitStruct<VkPhysicalDeviceVulkanSC10Features>(&device_reservation_info);
        auto create_info = vku::InitStruct<VkDeviceCreateInfo>(&phys_dev_sc_features);
        create_info.queueCreateInfoCount = 1;
        create_info.pQueueCreateInfos = &queue_info;

        return InitDevice(&create_info);
    }

    void TestObjectReservationLimit(uint32_t max_create_count, bool can_destroy, bool has_parent, caps_func_t caps_func,
                                    setup_func_t setup_func, create_func_t create_func, destroy_func_t destroy_func,
                                    teardown_func_t teardown_func) {
        auto sc_10_features = vku::InitStruct<VkPhysicalDeviceVulkanSC10Features>();
        auto object_reservation_info = vku::InitStruct<VkDeviceObjectReservationCreateInfo>(&sc_10_features);

        const std::vector<uint32_t> tested_limits{0, 1};  //, 7, 13, 42, 111, 499};
        for (auto tested_limit : tested_limits) {
            const uint32_t over_limit = 5;

            if (!caps_func(object_reservation_info, tested_limit)) {
                continue;
            }

            const float queue_priority = 1.f;
            auto queue_info = vku::InitStruct<VkDeviceQueueCreateInfo>();
            queue_info.queueCount = 1;
            queue_info.pQueuePriorities = &queue_priority;

            auto device_reservation_info = vku::InitStruct<VkDeviceObjectReservationCreateInfo>(&object_reservation_info);
            device_reservation_info.pipelineCacheCreateInfoCount =
                static_cast<uint32_t>(pipeline_caches_.out_pipeline_cache_create_info.size());
            device_reservation_info.pPipelineCacheCreateInfos = pipeline_caches_.out_pipeline_cache_create_info.data();
            device_reservation_info.pipelinePoolSizeCount = static_cast<uint32_t>(pipeline_caches_.out_pipeline_pool_sizes.size());
            device_reservation_info.pPipelinePoolSizes = pipeline_caches_.out_pipeline_pool_sizes.data();

            auto phys_dev_sc_features = vku::InitStruct<VkPhysicalDeviceVulkanSC10Features>(&device_reservation_info);
            auto create_info = vku::InitStruct<VkDeviceCreateInfo>(&phys_dev_sc_features);
            create_info.queueCreateInfoCount = 1;
            create_info.pQueueCreateInfos = &queue_info;

            auto device = InitDevice(&create_info);

            if (setup_func) {
                if (!setup_func(device)) {
                    if (teardown_func) {
                        teardown_func(device);
                    }
                    continue;
                }
            }

            if (max_create_count == 0) {
                // Commands can only create a single object at a time

                // Create up to the desired limit
                for (uint32_t i = 0; i < tested_limit; ++i) {
                    create_func(device, i, 1, false);
                }

                // Expect additional creates to fail
                for (uint32_t i = 0; i < over_limit; ++i) {
                    create_func(device, tested_limit + i, 1, true);
                }

                if (can_destroy) {
                    // Destroy some objects
                    for (uint32_t i = 0; i < tested_limit; i += 5) {
                        destroy_func(device, i, 1);
                    }

                    // Expect that we can create new objects instead of the destroyed ones
                    for (uint32_t i = 0; i < tested_limit; i += 5) {
                        create_func(device, i, 1, false);
                    }

                    // Expect additional creates to fail once again
                    for (uint32_t i = 0; i < over_limit; ++i) {
                        create_func(device, tested_limit + i, 1, true);
                    }

                    if (tested_limit > 0) {
                        // Destroy the first object multiple times (later destroys will be ignored)
                        for (uint32_t i = 0; i < 5; ++i) {
                            destroy_func(device, 0, 1);
                        }

                        // Expect to be able to create an object instead of it
                        create_func(device, 0, 1, false);

                        // Expect additional attempts to fail once again
                        for (uint32_t i = 0; i < over_limit; ++i) {
                            create_func(device, tested_limit + i, 1, true);
                        }
                    }

                    // Destroy all objects
                    for (uint32_t i = 0; i < tested_limit; ++i) {
                        destroy_func(device, i, 1);
                    }
                }
            } else if (!has_parent) {
                // Commands can create multiple objects at a time, and they're not part of a parent object
                // (e.g. like pipelines)

                // Create up to the desired limit
                uint32_t already_created_count = 0;
                while (already_created_count < tested_limit) {
                    uint32_t create_count = std::min(tested_limit - already_created_count, max_create_count);
                    create_func(device, already_created_count, create_count, false);
                    already_created_count += create_count;
                }

                // Expect additional creates to fail
                for (uint32_t i = 0; i < over_limit; ++i) {
                    create_func(device, tested_limit + i, over_limit - i, true);
                }

                if (can_destroy) {
                    // Destroy some objects
                    uint32_t destroy_count = tested_limit / 4;
                    for (uint32_t i = 0; i < destroy_count; ++i) {
                        destroy_func(device, i, 1);
                        destroy_func(device, i + tested_limit / 2, 1);
                    }

                    // Expect that we can create new objects instead of the destroyed ones
                    for (uint32_t i = 0; i < destroy_count; ++i) {
                        create_func(device, i, 1, false);
                        create_func(device, i + tested_limit / 2, 1, false);
                    }

                    // Expect additional creates to fail again
                    for (uint32_t i = 0; i < over_limit; ++i) {
                        create_func(device, tested_limit + i, over_limit - i, true);
                    }

                    if (tested_limit > 0) {
                        // Destroy the first object multiple times (later destroys will be ignored)
                        for (uint32_t i = 0; i < 5; ++i) {
                            destroy_func(device, 0, 1);
                        }

                        // Expect to be able to create an object instead of it
                        create_func(device, 0, 1, false);

                        // Expect additional attempts to fail once again
                        for (uint32_t i = 0; i < over_limit; ++i) {
                            create_func(device, tested_limit + i, 1, true);
                        }
                    }

                    // Destroy all objects
                    for (uint32_t i = 0; i < tested_limit; ++i) {
                        destroy_func(device, i, 1);
                    }
                }
            } else {
                // Commands can create multiple objects at a time, and they're part of a parent object
                // (e.g. like render pass attachment descriptions)

                // Create up to the desired limit minus max_create_count - 1
                uint32_t object_count = 0;
                uint32_t left_to_create = (tested_limit >= max_create_count) ? tested_limit + 1 - max_create_count : 0;
                while (left_to_create >= max_create_count) {
                    create_func(device, object_count++, max_create_count, false);
                    left_to_create -= max_create_count;
                }

                if (left_to_create > 0) {
                    create_func(device, object_count++, left_to_create, false);
                }

                // Trying to create another max_create_count number should fail
                create_func(device, object_count, max_create_count, true);

                // Now allocate one by one and try to reserve one more than remaining
                uint32_t remaining_count = std::min(max_create_count - 1, tested_limit);
                for (uint32_t i = 0; i < remaining_count; ++i) {
                    create_func(device, object_count++, 1, false);
                    create_func(device, object_count, remaining_count - i + 1, true);
                }

                if (can_destroy) {
                    // Destroy one by one the allocations done in the previous step
                    for (uint32_t i = 0; i < remaining_count; ++i) {
                        destroy_func(device, --object_count, 0);
                    }

                    if (tested_limit > 0) {
                        if (max_create_count > 1) {
                            // Expect to be able to create a single object instead of it with max_create_count - 1
                            create_func(device, object_count++, std::min(max_create_count - 1, tested_limit), false);
                        }

                        // After that any attempts to create should fail
                        create_func(device, object_count, 1, true);

                        // Destroy the first object multiple times (later destroys will be ignored)
                        for (uint32_t i = 0; i < 5; ++i) {
                            destroy_func(device, 0, 0);
                        }

                        // Expect to be able to create an object instead of it
                        create_func(device, 0, std::min(max_create_count, tested_limit), false);

                        // Expect additional attempts to fail once again
                        for (uint32_t i = 0; i < over_limit; ++i) {
                            create_func(device, tested_limit + i, 1, true);
                        }
                    }

                    // Destroy all objects
                    for (uint32_t i = 0; i < object_count; ++i) {
                        destroy_func(device, i, 0);
                    }
                }
            }

            if (teardown_func) {
                teardown_func(device);
            }

            DestroyDevice();
        }
    }

  private:
    PipelineCacheInfo pipeline_caches_;
};

TEST_F(ObjectReservationTest, CommandPoolRequestCount) {
    TEST_DESCRIPTION("Test VkDeviceObjectReservationCreateInfo::commandPoolRequestCount");

    struct {
        std::vector<VkCommandPool> cmd_pools{};
    } data;

    const uint32_t max_create_count = 0;  // Not a multi-create API
    const bool can_destroy = false;
    const bool has_parent = false;

    TestObjectReservationLimit(
        max_create_count, can_destroy, has_parent,
        // Init object reservation info
        [&](VkDeviceObjectReservationCreateInfo& object_reservation_info, uint32_t tested_limit) {
            object_reservation_info.commandPoolRequestCount = tested_limit;
            object_reservation_info.commandBufferRequestCount = tested_limit + 1;

            data.cmd_pools.clear();
            data.cmd_pools.resize(tested_limit, VK_NULL_HANDLE);

            static VkMockObjects<VkCommandPool> mock_objects{};
            mock_objects.Reset(tested_limit);
            vkmock::CreateCommandPool = [&](auto, auto, auto, auto pHandle) {
                *pHandle = mock_objects.Alloc();
                return VK_SUCCESS;
            };
            vkmock::DestroyCommandPool = [&](auto, auto handle, auto) { mock_objects.Free(handle); };

            return true;
        },
        // Setup common device objects
        nullptr,
        // Create objects
        [&](VkDevice device, uint32_t index, uint32_t create_count, bool should_fail) {
            VkCommandPool cmd_pool = VK_NULL_HANDLE;

            auto mem_reservation_info = vku::InitStruct<VkCommandPoolMemoryReservationCreateInfo>();
            mem_reservation_info.commandPoolReservedSize = 64 * 1024;
            mem_reservation_info.commandPoolMaxCommandBuffers = 1;

            auto create_info = vku::InitStruct<VkCommandPoolCreateInfo>(&mem_reservation_info);

            if (should_fail) {
                EXPECT_EQ(vksc::CreateCommandPool(device, &create_info, nullptr, &cmd_pool), VK_ERROR_VALIDATION_FAILED);
            } else {
                assert(index < data.cmd_pools.size());
                EXPECT_EQ(vksc::CreateCommandPool(device, &create_info, nullptr, &data.cmd_pools[index]), VK_SUCCESS);
            }
        },
        // Destroy objects
        nullptr,
        // Teardown common device objects
        nullptr);
}

TEST_F(ObjectReservationTest, CommandBufferRequestCount) {
    TEST_DESCRIPTION("Test VkDeviceObjectReservationCreateInfo::commandBufferRequestCount");

    struct {
        std::vector<VkCommandPool> cmd_pools{};
    } data;

    const uint32_t max_create_count = std::min(GetVulkanSC10Properties().maxCommandPoolCommandBuffers, 16u);
    const bool can_destroy = false;
    const bool has_parent = true;

    TestObjectReservationLimit(
        max_create_count, can_destroy, has_parent,
        // Init object reservation info
        [&](VkDeviceObjectReservationCreateInfo& object_reservation_info, uint32_t tested_limit) {
            object_reservation_info.commandPoolRequestCount = tested_limit + 1;
            object_reservation_info.commandBufferRequestCount = tested_limit;

            data.cmd_pools.clear();
            data.cmd_pools.resize(tested_limit, VK_NULL_HANDLE);

            static VkMockObjects<VkCommandPool> mock_objects{};
            mock_objects.Reset(tested_limit + 1);
            vkmock::CreateCommandPool = [&](auto, auto, auto, auto pHandle) {
                *pHandle = mock_objects.Alloc();
                return VK_SUCCESS;
            };
            vkmock::DestroyCommandPool = [&](auto, auto handle, auto) { mock_objects.Free(handle); };

            return true;
        },
        // Setup common device objects
        nullptr,
        // Create objects
        [&](VkDevice device, uint32_t index, uint32_t create_count, bool should_fail) {
            VkCommandPool cmd_pool = VK_NULL_HANDLE;

            auto mem_reservation_info = vku::InitStruct<VkCommandPoolMemoryReservationCreateInfo>();
            mem_reservation_info.commandPoolReservedSize = 1024 * 1024;
            mem_reservation_info.commandPoolMaxCommandBuffers = create_count;

            auto create_info = vku::InitStruct<VkCommandPoolCreateInfo>(&mem_reservation_info);

            if (should_fail) {
                EXPECT_EQ(vksc::CreateCommandPool(device, &create_info, nullptr, &cmd_pool), VK_ERROR_VALIDATION_FAILED);
            } else {
                assert(index < data.cmd_pools.size());
                EXPECT_EQ(vksc::CreateCommandPool(device, &create_info, nullptr, &data.cmd_pools[index]), VK_SUCCESS);
            }
        },
        // Destroy objects
        nullptr,
        // Teardown common device objects
        nullptr);
}

TEST_F(ObjectReservationTest, DescriptorSetLayoutRequestCount) {
    TEST_DESCRIPTION("Test VkDeviceObjectReservationCreateInfo::descriptorSetLayoutRequestCount");

    struct {
        std::vector<VkDescriptorSetLayout> descriptor_set_layouts{};
    } data;

    const uint32_t max_create_count = 0;  // Not a multi-create API
    const bool can_destroy = true;
    const bool has_parent = false;

    TestObjectReservationLimit(
        max_create_count, can_destroy, has_parent,
        // Init object reservation info
        [&](VkDeviceObjectReservationCreateInfo& object_reservation_info, uint32_t tested_limit) {
            object_reservation_info.descriptorSetLayoutRequestCount = tested_limit;
            object_reservation_info.descriptorSetLayoutBindingRequestCount = tested_limit + 1;
            object_reservation_info.descriptorSetLayoutBindingLimit = 1;

            data.descriptor_set_layouts.clear();
            data.descriptor_set_layouts.resize(tested_limit, VK_NULL_HANDLE);

            static VkMockObjects<VkDescriptorSetLayout> mock_objects{};
            mock_objects.Reset(tested_limit);
            vkmock::CreateDescriptorSetLayout = [&](auto, auto, auto, auto pHandle) {
                *pHandle = mock_objects.Alloc();
                return VK_SUCCESS;
            };
            vkmock::DestroyDescriptorSetLayout = [&](auto, auto handle, auto) { mock_objects.Free(handle); };

            return true;
        },
        // Setup common device objects
        nullptr,
        // Create objects
        [&](VkDevice device, uint32_t index, uint32_t create_count, bool should_fail) {
            VkDescriptorSetLayout descriptor_set_layout = VK_NULL_HANDLE;

            VkDescriptorSetLayoutBinding binding{};
            binding.descriptorType = VK_DESCRIPTOR_TYPE_UNIFORM_BUFFER;
            binding.descriptorCount = 1;
            binding.stageFlags = VK_SHADER_STAGE_FRAGMENT_BIT;

            auto create_info = vku::InitStruct<VkDescriptorSetLayoutCreateInfo>();
            create_info.bindingCount = 1;
            create_info.pBindings = &binding;

            if (should_fail) {
                EXPECT_EQ(vksc::CreateDescriptorSetLayout(device, &create_info, nullptr, &descriptor_set_layout),
                          VK_ERROR_VALIDATION_FAILED);
            } else {
                assert(index < data.descriptor_set_layouts.size());
                EXPECT_EQ(vksc::CreateDescriptorSetLayout(device, &create_info, nullptr, &data.descriptor_set_layouts[index]),
                          VK_SUCCESS);
            }
        },
        // Destroy objects
        [&](VkDevice device, uint32_t index, uint32_t destroy_count) {
            assert(index < data.descriptor_set_layouts.size());
            assert(destroy_count == 1);

            vksc::DestroyDescriptorSetLayout(device, data.descriptor_set_layouts[index], nullptr);
            data.descriptor_set_layouts[index] = VK_NULL_HANDLE;
        },
        // Teardown common device objects
        nullptr);
}

TEST_F(ObjectReservationTest, DescriptorSetLayoutBindingRequestCount) {
    TEST_DESCRIPTION("Test VkDeviceObjectReservationCreateInfo::descriptorSetLayoutBindingRequestCount");

    struct {
        std::vector<VkDescriptorSetLayout> descriptor_set_layouts{};
    } data;

    const uint32_t max_create_count = 4;
    const bool can_destroy = true;
    const bool has_parent = true;

    TestObjectReservationLimit(
        max_create_count, can_destroy, has_parent,
        // Init object reservation info
        [&](VkDeviceObjectReservationCreateInfo& object_reservation_info, uint32_t tested_limit) {
            object_reservation_info.descriptorSetLayoutRequestCount = tested_limit + 1;
            object_reservation_info.descriptorSetLayoutBindingRequestCount = tested_limit;
            object_reservation_info.descriptorSetLayoutBindingLimit = 4;

            data.descriptor_set_layouts.clear();
            data.descriptor_set_layouts.resize(tested_limit, VK_NULL_HANDLE);

            static VkMockObjects<VkDescriptorSetLayout> mock_objects{};
            mock_objects.Reset(tested_limit + 1);
            vkmock::CreateDescriptorSetLayout = [&](auto, auto, auto, auto pHandle) {
                *pHandle = mock_objects.Alloc();
                return VK_SUCCESS;
            };
            vkmock::DestroyDescriptorSetLayout = [&](auto, auto handle, auto) { mock_objects.Free(handle); };

            return true;
        },
        // Setup common device objects
        nullptr,
        // Create objects
        [&](VkDevice device, uint32_t index, uint32_t create_count, bool should_fail) {
            VkDescriptorSetLayout descriptor_set_layout = VK_NULL_HANDLE;

            uint32_t binding_count = 0;
            std::vector<VkDescriptorSetLayoutBinding> bindings(create_count, VkDescriptorSetLayoutBinding{});
            for (auto& binding : bindings) {
                binding.binding = binding_count++;
                binding.descriptorType = VK_DESCRIPTOR_TYPE_SAMPLED_IMAGE;
                binding.descriptorCount = 2;
                binding.stageFlags = VK_SHADER_STAGE_FRAGMENT_BIT;
            }

            auto create_info = vku::InitStruct<VkDescriptorSetLayoutCreateInfo>();
            create_info.bindingCount = binding_count;
            create_info.pBindings = bindings.data();

            if (should_fail) {
                EXPECT_EQ(vksc::CreateDescriptorSetLayout(device, &create_info, nullptr, &descriptor_set_layout),
                          VK_ERROR_VALIDATION_FAILED);
            } else {
                assert(index < data.descriptor_set_layouts.size());
                EXPECT_EQ(vksc::CreateDescriptorSetLayout(device, &create_info, nullptr, &data.descriptor_set_layouts[index]),
                          VK_SUCCESS);
            }
        },
        // Destroy objects
        [&](VkDevice device, uint32_t index, uint32_t destroy_count) {
            assert(index < data.descriptor_set_layouts.size());
            assert(destroy_count == 0);

            vksc::DestroyDescriptorSetLayout(device, data.descriptor_set_layouts[index], nullptr);
            data.descriptor_set_layouts[index] = VK_NULL_HANDLE;
        },
        // Teardown common device objects
        nullptr);
}

TEST_F(ObjectReservationTest, PipelineLayoutRequestCount) {
    TEST_DESCRIPTION("Test VkDeviceObjectReservationCreateInfo::pipelineLayoutRequestCount");

    struct {
        VkDescriptorSetLayout descriptor_set_layout{VK_NULL_HANDLE};
        std::vector<VkPipelineLayout> pipeline_layouts{};
    } data;

    const uint32_t max_create_count = 0;  // Not a multi-create API
    const bool can_destroy = true;
    const bool has_parent = false;

    TestObjectReservationLimit(
        max_create_count, can_destroy, has_parent,
        // Init object reservation info
        [&](VkDeviceObjectReservationCreateInfo& object_reservation_info, uint32_t tested_limit) {
            object_reservation_info.pipelineLayoutRequestCount = tested_limit;
            object_reservation_info.descriptorSetLayoutRequestCount = 1;
            object_reservation_info.descriptorSetLayoutBindingRequestCount = 1;
            object_reservation_info.descriptorSetLayoutBindingLimit = 1;

            data.pipeline_layouts.clear();
            data.pipeline_layouts.resize(tested_limit, VK_NULL_HANDLE);

            static VkMockObjects<VkPipelineLayout> mock_objects{};
            mock_objects.Reset(tested_limit);
            vkmock::CreatePipelineLayout = [&](auto, auto, auto, auto pHandle) {
                *pHandle = mock_objects.Alloc();
                return VK_SUCCESS;
            };
            vkmock::DestroyPipelineLayout = [&](auto, auto handle, auto) { mock_objects.Free(handle); };

            return true;
        },
        // Setup common device objects
        [&](VkDevice device) {
            VkResult result = VK_SUCCESS;

            VkDescriptorSetLayoutBinding binding{};
            binding.descriptorType = VK_DESCRIPTOR_TYPE_UNIFORM_BUFFER;
            binding.descriptorCount = 1;
            binding.stageFlags = VK_SHADER_STAGE_FRAGMENT_BIT;

            auto create_info = vku::InitStruct<VkDescriptorSetLayoutCreateInfo>();
            create_info.bindingCount = 1;
            create_info.pBindings = &binding;

            result = vksc::CreateDescriptorSetLayout(device, &create_info, nullptr, &data.descriptor_set_layout);
            if (result != VK_SUCCESS) return false;

            return true;
        },
        // Create objects
        [&](VkDevice device, uint32_t index, uint32_t create_count, bool should_fail) {
            VkPipelineLayout pipeline_layout = VK_NULL_HANDLE;

            auto create_info = vku::InitStruct<VkPipelineLayoutCreateInfo>();
            create_info.setLayoutCount = 1;
            create_info.pSetLayouts = &data.descriptor_set_layout;

            if (should_fail) {
                EXPECT_EQ(vksc::CreatePipelineLayout(device, &create_info, nullptr, &pipeline_layout), VK_ERROR_VALIDATION_FAILED);
            } else {
                assert(index < data.pipeline_layouts.size());
                EXPECT_EQ(vksc::CreatePipelineLayout(device, &create_info, nullptr, &data.pipeline_layouts[index]), VK_SUCCESS);
            }
        },
        // Destroy objects
        [&](VkDevice device, uint32_t index, uint32_t destroy_count) {
            assert(index < data.pipeline_layouts.size());
            assert(destroy_count == 1);

            vksc::DestroyPipelineLayout(device, data.pipeline_layouts[index], nullptr);
            data.pipeline_layouts[index] = VK_NULL_HANDLE;
        },
        // Teardown common device objects
        [&](VkDevice device) { vksc::DestroyDescriptorSetLayout(device, data.descriptor_set_layout, nullptr); });
}

TEST_F(ObjectReservationTest, DescriptorPoolRequestCount) {
    TEST_DESCRIPTION("Test VkDeviceObjectReservationCreateInfo::descriptorPoolRequestCount");

    struct {
        std::vector<VkDescriptorPool> descriptor_pools{};
    } data;

    const uint32_t max_create_count = 0;  // Not a multi-create API
    const bool can_destroy = false;
    const bool has_parent = false;

    TestObjectReservationLimit(
        max_create_count, can_destroy, has_parent,
        // Init object reservation info
        [&](VkDeviceObjectReservationCreateInfo& object_reservation_info, uint32_t tested_limit) {
            object_reservation_info.descriptorPoolRequestCount = tested_limit;
            object_reservation_info.descriptorSetRequestCount = tested_limit + 1;

            data.descriptor_pools.clear();
            data.descriptor_pools.resize(tested_limit, VK_NULL_HANDLE);

            static VkMockObjects<VkDescriptorPool> mock_objects{};
            mock_objects.Reset(tested_limit);
            vkmock::CreateDescriptorPool = [&](auto, auto, auto, auto pHandle) {
                *pHandle = mock_objects.Alloc();
                return VK_SUCCESS;
            };
            vkmock::DestroyDescriptorPool = [&](auto, auto handle, auto) { mock_objects.Free(handle); };

            return true;
        },
        // Setup common device objects
        nullptr,
        // Create objects
        [&](VkDevice device, uint32_t index, uint32_t create_count, bool should_fail) {
            VkDescriptorPool descriptor_pool = VK_NULL_HANDLE;

            VkDescriptorPoolSize pool_size{};
            pool_size.type = VK_DESCRIPTOR_TYPE_SAMPLED_IMAGE;
            pool_size.descriptorCount = 4;

            auto create_info = vku::InitStruct<VkDescriptorPoolCreateInfo>();
            create_info.maxSets = 1;
            create_info.poolSizeCount = 1;
            create_info.pPoolSizes = &pool_size;

            if (should_fail) {
                EXPECT_EQ(vksc::CreateDescriptorPool(device, &create_info, nullptr, &descriptor_pool), VK_ERROR_VALIDATION_FAILED);
            } else {
                assert(index < data.descriptor_pools.size());
                EXPECT_EQ(vksc::CreateDescriptorPool(device, &create_info, nullptr, &data.descriptor_pools[index]), VK_SUCCESS);
            }
        },
        // Destroy objects
        nullptr,
        // Teardown common device objects
        nullptr);
}

TEST_F(ObjectReservationTest, DescriptorSetRequestCount) {
    TEST_DESCRIPTION("Test VkDeviceObjectReservationCreateInfo::descriptorSetRequestCount");

    struct {
        const uint32_t max_descriptor_sets_per_pool = 16;
        VkDescriptorSetLayout descriptor_set_layout{};
        VkDescriptorPool descriptor_pool_to_use_on_fail{};
        std::vector<VkDescriptorPool> descriptor_pools{};
    } data;

    const uint32_t max_create_count = data.max_descriptor_sets_per_pool;
    const bool can_destroy = true;
    const bool has_parent = true;

    TestObjectReservationLimit(
        max_create_count, can_destroy, has_parent,
        // Init object reservation info
        [&](VkDeviceObjectReservationCreateInfo& object_reservation_info, uint32_t tested_limit) {
            object_reservation_info.descriptorPoolRequestCount = tested_limit + 1;
            object_reservation_info.descriptorSetRequestCount = tested_limit;
            object_reservation_info.descriptorSetLayoutRequestCount = 1;
            object_reservation_info.descriptorSetLayoutBindingRequestCount = 1;
            object_reservation_info.descriptorSetLayoutBindingLimit = 1;

            data.descriptor_set_layout = VK_NULL_HANDLE;
            data.descriptor_pool_to_use_on_fail = VK_NULL_HANDLE;
            data.descriptor_pools.clear();
            data.descriptor_pools.resize(tested_limit, VK_NULL_HANDLE);

            static VkMockObjects<VkDescriptorPool> mock_objects{};
            mock_objects.Reset(tested_limit + 1);
            vkmock::CreateDescriptorPool = [&](auto, auto, auto, auto pHandle) {
                *pHandle = mock_objects.Alloc();
                return VK_SUCCESS;
            };
            vkmock::DestroyDescriptorPool = [&](auto, auto handle, auto) { mock_objects.Free(handle); };

            vkmock::ResetDescriptorPool = [&](auto, auto, auto) { return VK_SUCCESS; };
            vkmock::AllocateDescriptorSets = [&](auto, auto, auto) { return VK_SUCCESS; };
            vkmock::FreeDescriptorSets = [&](auto, auto, auto, auto) { return VK_SUCCESS; };

            return true;
        },
        // Setup common device objects
        [&](VkDevice device) {
            VkResult result = VK_SUCCESS;

            VkDescriptorSetLayoutBinding binding{};
            binding.descriptorType = VK_DESCRIPTOR_TYPE_UNIFORM_BUFFER;
            binding.descriptorCount = 2;
            binding.stageFlags = VK_SHADER_STAGE_FRAGMENT_BIT;

            auto create_info = vku::InitStruct<VkDescriptorSetLayoutCreateInfo>();
            create_info.bindingCount = 1;
            create_info.pBindings = &binding;

            result = vksc::CreateDescriptorSetLayout(device, &create_info, nullptr, &data.descriptor_set_layout);
            if (result != VK_SUCCESS) return false;

            return true;
        },
        // Create objects
        [&](VkDevice device, uint32_t index, uint32_t create_count, bool should_fail) {
            std::vector<VkDescriptorSet> descriptor_sets(create_count, VK_NULL_HANDLE);
            std::vector<VkDescriptorSetLayout> set_layouts(create_count, data.descriptor_set_layout);

            auto alloc_info = vku::InitStruct<VkDescriptorSetAllocateInfo>();
            alloc_info.descriptorSetCount = create_count;
            alloc_info.pSetLayouts = set_layouts.data();

            // Create descriptor pool first if needed
            {
                VkDescriptorPoolSize pool_size{};
                pool_size.type = VK_DESCRIPTOR_TYPE_UNIFORM_BUFFER;
                pool_size.descriptorCount = 50;

                auto create_info = vku::InitStruct<VkDescriptorPoolCreateInfo>();
                create_info.maxSets = data.max_descriptor_sets_per_pool;
                create_info.poolSizeCount = 1;
                create_info.pPoolSizes = &pool_size;

                if (should_fail) {
                    if (data.descriptor_pool_to_use_on_fail == VK_NULL_HANDLE) {
                        vksc::CreateDescriptorPool(device, &create_info, nullptr, &data.descriptor_pool_to_use_on_fail);
                    } else {
                        vksc::ResetDescriptorPool(device, data.descriptor_pool_to_use_on_fail, 0);
                    }
                    alloc_info.descriptorPool = data.descriptor_pool_to_use_on_fail;
                } else {
                    assert(index < data.descriptor_pools.size());
                    if (data.descriptor_pools[index] == VK_NULL_HANDLE) {
                        vksc::CreateDescriptorPool(device, &create_info, nullptr, &data.descriptor_pools[index]);
                    }
                    alloc_info.descriptorPool = data.descriptor_pools[index];
                }
            }

            if (alloc_info.descriptorPool != VK_NULL_HANDLE) {
                if (should_fail) {
                    EXPECT_EQ(vksc::AllocateDescriptorSets(device, &alloc_info, descriptor_sets.data()),
                              VK_ERROR_VALIDATION_FAILED);
                } else {
                    EXPECT_EQ(vksc::AllocateDescriptorSets(device, &alloc_info, descriptor_sets.data()), VK_SUCCESS);
                }
            }
        },
        // Destroy objects
        [&](VkDevice device, uint32_t index, uint32_t destroy_count) {
            assert(index < data.descriptor_pools.size());

            if (data.descriptor_pools[index] != VK_NULL_HANDLE) {
                vksc::ResetDescriptorPool(device, data.descriptor_pools[index], 0);
            }
        },
        // Teardown common device objects
        [&](VkDevice device) { vksc::DestroyDescriptorSetLayout(device, data.descriptor_set_layout, nullptr); });
}

TEST_F(ObjectReservationTest, DeviceMemoryRequestCount) {
    TEST_DESCRIPTION("Test VkDeviceObjectReservationCreateInfo::deviceMemoryRequestCount");

    struct {
        std::vector<VkDeviceMemory> device_memories{};
    } data;

    const uint32_t max_create_count = 0;  // Not a multi-create API
    const bool can_destroy = false;
    const bool has_parent = false;

    TestObjectReservationLimit(
        max_create_count, can_destroy, has_parent,
        // Init object reservation info
        [&](VkDeviceObjectReservationCreateInfo& object_reservation_info, uint32_t tested_limit) {
            object_reservation_info.deviceMemoryRequestCount = tested_limit;

            data.device_memories.clear();
            data.device_memories.resize(tested_limit, VK_NULL_HANDLE);

            static VkMockObjects<VkDeviceMemory> mock_objects{};
            mock_objects.Reset(tested_limit);
            vkmock::AllocateMemory = [&](auto, auto, auto, auto pHandle) {
                *pHandle = mock_objects.Alloc();
                return VK_SUCCESS;
            };
            vkmock::FreeMemory = [&](auto, auto handle, auto) { mock_objects.Free(handle); };

            return true;
        },
        // Setup common device objects
        nullptr,
        // Create objects
        [&](VkDevice device, uint32_t index, uint32_t create_count, bool should_fail) {
            VkDeviceMemory device_memory = VK_NULL_HANDLE;

            auto alloc_info = vku::InitStruct<VkMemoryAllocateInfo>();
            alloc_info.allocationSize = 1024;
            alloc_info.memoryTypeIndex = 0;

            if (should_fail) {
                EXPECT_EQ(vksc::AllocateMemory(device, &alloc_info, nullptr, &device_memory), VK_ERROR_VALIDATION_FAILED);
            } else {
                assert(index < data.device_memories.size());
                EXPECT_EQ(vksc::AllocateMemory(device, &alloc_info, nullptr, &data.device_memories[index]), VK_SUCCESS);
            }
        },
        // Destroy objects
        nullptr,
        // Teardown common device objects
        nullptr);
}

TEST_F(ObjectReservationTest, PipelineCacheRequestCount) {
    TEST_DESCRIPTION("Test VkDeviceObjectReservationCreateInfo::pipelineCacheRequestCount");

    InitPipelineCaches();

    struct {
        std::vector<VkPipelineCache> pipeline_caches{};
    } data;

    const uint32_t max_create_count = 0;  // Not a multi-create API
    const bool can_destroy = true;
    const bool has_parent = false;

    TestObjectReservationLimit(
        max_create_count, can_destroy, has_parent,
        // Init object reservation info
        [&](VkDeviceObjectReservationCreateInfo& object_reservation_info, uint32_t tested_limit) {
            object_reservation_info.pipelineCacheRequestCount = tested_limit;

            data.pipeline_caches.clear();
            data.pipeline_caches.resize(tested_limit, VK_NULL_HANDLE);

            static VkMockObjects<VkPipelineCache> mock_objects{};
            mock_objects.Reset(tested_limit);
            vkmock::CreatePipelineCache = [&](auto, auto, auto, auto pHandle) {
                *pHandle = mock_objects.Alloc();
                return VK_SUCCESS;
            };
            vkmock::DestroyPipelineCache = [&](auto, auto handle, auto) { mock_objects.Free(handle); };

            return true;
        },
        // Setup common device objects
        nullptr,
        // Create objects
        [&](VkDevice device, uint32_t index, uint32_t create_count, bool should_fail) {
            VkPipelineCache pipeline_cache = VK_NULL_HANDLE;

            auto create_info = GetPipelineCacheCreateInfo();

            if (should_fail) {
                EXPECT_EQ(vksc::CreatePipelineCache(device, &create_info, nullptr, &pipeline_cache), VK_ERROR_VALIDATION_FAILED);
            } else {
                assert(index < data.pipeline_caches.size());
                EXPECT_EQ(vksc::CreatePipelineCache(device, &create_info, nullptr, &data.pipeline_caches[index]), VK_SUCCESS);
            }
        },
        // Destroy objects
        [&](VkDevice device, uint32_t index, uint32_t destroy_count) {
            assert(index < data.pipeline_caches.size());
            assert(destroy_count == 1);

            vksc::DestroyPipelineCache(device, data.pipeline_caches[index], nullptr);
            data.pipeline_caches[index] = VK_NULL_HANDLE;
        },
        // Teardown common device objects
        nullptr);
}

TEST_F(ObjectReservationTest, ComputePipelineRequestCount) {
    TEST_DESCRIPTION("Test VkDeviceObjectReservationCreateInfo::computePipelineRequestCount");

    InitPipelineCaches();

    struct {
        VkPipelinePoolSize pipeline_pool_size{};
        VkPipelineLayout pipeline_layout{VK_NULL_HANDLE};
        VkPipelineCache pipeline_cache{VK_NULL_HANDLE};
        std::vector<VkPipeline> pipelines{};
    } data;

    const uint32_t max_create_count = 16;
    const bool can_destroy = true;
    const bool has_parent = false;

    TestObjectReservationLimit(
        max_create_count, can_destroy, has_parent,
        // Init object reservation info
        [&](VkDeviceObjectReservationCreateInfo& object_reservation_info, uint32_t tested_limit) {
            data.pipeline_pool_size = GetPipelinePoolSize();
            data.pipeline_pool_size.poolEntryCount = 100 + tested_limit * 3;

            object_reservation_info.pipelinePoolSizeCount = 1;
            object_reservation_info.pPipelinePoolSizes = &data.pipeline_pool_size;

            object_reservation_info.pipelineCacheRequestCount = 1;
            object_reservation_info.pipelineLayoutRequestCount = 1;
            object_reservation_info.computePipelineRequestCount = tested_limit;

            data.pipeline_layout = VK_NULL_HANDLE;
            data.pipeline_cache = VK_NULL_HANDLE;
            data.pipelines.clear();
            data.pipelines.resize(tested_limit, VK_NULL_HANDLE);

            static VkMockObjects<VkPipeline> mock_objects{};
            mock_objects.Reset(tested_limit);
            vkmock::CreateComputePipelines = [&](auto, auto, auto count, auto, auto, auto pHandles) {
                for (uint32_t i = 0; i < count; ++i) {
                    pHandles[i] = mock_objects.Alloc();
                }
                return VK_SUCCESS;
            };
            vkmock::DestroyPipeline = [&](auto, auto handle, auto) { mock_objects.Free(handle); };

            return true;
        },
        // Setup common device objects
        [&](VkDevice device) {
            VkResult result = VK_SUCCESS;

            {
                auto create_info = GetPipelineCacheCreateInfo();
                result = vksc::CreatePipelineCache(device, &create_info, nullptr, &data.pipeline_cache);
                if (result != VK_SUCCESS) return false;
            }

            {
                auto create_info = vku::InitStruct<VkPipelineLayoutCreateInfo>();
                result = vksc::CreatePipelineLayout(device, &create_info, nullptr, &data.pipeline_layout);
                if (result != VK_SUCCESS) return false;
            }

            return true;
        },
        // Create objects
        [&](VkDevice device, uint32_t index, uint32_t create_count, bool should_fail) {
            std::vector<VkPipeline> pipelines(create_count, VK_NULL_HANDLE);

            auto offline_info = GetComputePipelineOfflineCreateInfo();
            std::vector<VkComputePipelineCreateInfo> create_info(create_count,
                                                                 vku::InitStruct<VkComputePipelineCreateInfo>(&offline_info));
            for (uint32_t i = 0; i < create_count; ++i) {
                create_info[i].stage = vku::InitStruct<VkPipelineShaderStageCreateInfo>();
                create_info[i].stage.stage = VK_SHADER_STAGE_COMPUTE_BIT;
                create_info[i].stage.pName = "main";
                create_info[i].layout = data.pipeline_layout;
            }

            if (should_fail) {
                EXPECT_EQ(vksc::CreateComputePipelines(device, data.pipeline_cache, create_count, create_info.data(), nullptr,
                                                       pipelines.data()),
                          VK_ERROR_VALIDATION_FAILED);
            } else {
                assert(index + create_count <= data.pipelines.size());
                EXPECT_EQ(vksc::CreateComputePipelines(device, data.pipeline_cache, create_count, create_info.data(), nullptr,
                                                       &data.pipelines[index]),
                          VK_SUCCESS);
            }
        },
        // Destroy objects
        [&](VkDevice device, uint32_t index, uint32_t destroy_count) {
            assert(index < data.pipelines.size());
            assert(destroy_count == 1);

            vksc::DestroyPipeline(device, data.pipelines[index], nullptr);
            data.pipelines[index] = VK_NULL_HANDLE;
        },
        // Teardown common device objects
        [&](VkDevice device) {
            vksc::DestroyPipelineCache(device, data.pipeline_cache, nullptr);
            vksc::DestroyPipelineLayout(device, data.pipeline_layout, nullptr);
        });
}

TEST_F(ObjectReservationTest, GraphicsPipelineRequestCount) {
    TEST_DESCRIPTION("Test VkDeviceObjectReservationCreateInfo::graphicsPipelineRequestCount");

    InitPipelineCaches();

    struct {
        VkPipelinePoolSize pipeline_pool_size{};
        VkRenderPass render_pass{VK_NULL_HANDLE};
        VkPipelineLayout pipeline_layout{VK_NULL_HANDLE};
        VkPipelineCache pipeline_cache{VK_NULL_HANDLE};
        std::vector<VkPipeline> pipelines{};
    } data;

    const uint32_t max_create_count = 16;
    const bool can_destroy = true;
    const bool has_parent = false;

    TestObjectReservationLimit(
        max_create_count, can_destroy, has_parent,
        // Init object reservation info
        [&](VkDeviceObjectReservationCreateInfo& object_reservation_info, uint32_t tested_limit) {
            data.pipeline_pool_size = GetPipelinePoolSize();
            data.pipeline_pool_size.poolEntryCount = 100 + tested_limit * 3;

            object_reservation_info.pipelinePoolSizeCount = 1;
            object_reservation_info.pPipelinePoolSizes = &data.pipeline_pool_size;

            object_reservation_info.renderPassRequestCount = 1;
            object_reservation_info.subpassDescriptionRequestCount = 1;
            object_reservation_info.pipelineCacheRequestCount = 1;
            object_reservation_info.pipelineLayoutRequestCount = 1;
            object_reservation_info.graphicsPipelineRequestCount = tested_limit;

            data.render_pass = VK_NULL_HANDLE;
            data.pipeline_layout = VK_NULL_HANDLE;
            data.pipeline_cache = VK_NULL_HANDLE;
            data.pipelines.clear();
            data.pipelines.resize(tested_limit, VK_NULL_HANDLE);

            static VkMockObjects<VkPipeline> mock_objects{};
            mock_objects.Reset(tested_limit);
            vkmock::CreateGraphicsPipelines = [&](auto, auto, auto count, auto, auto, auto pHandles) {
                for (uint32_t i = 0; i < count; ++i) {
                    pHandles[i] = mock_objects.Alloc();
                }
                return VK_SUCCESS;
            };
            vkmock::DestroyPipeline = [&](auto, auto handle, auto) { mock_objects.Free(handle); };

            return true;
        },
        // Setup common device objects
        [&](VkDevice device) {
            VkResult result = VK_SUCCESS;

            {
                VkSubpassDescription subpass{};
                subpass.pipelineBindPoint = VK_PIPELINE_BIND_POINT_GRAPHICS;

                auto create_info = vku::InitStruct<VkRenderPassCreateInfo>();
                create_info.subpassCount = 1;
                create_info.pSubpasses = &subpass;

                result = vksc::CreateRenderPass(device, &create_info, nullptr, &data.render_pass);
                if (result != VK_SUCCESS) return false;
            }

            {
                auto create_info = GetPipelineCacheCreateInfo();
                result = vksc::CreatePipelineCache(device, &create_info, nullptr, &data.pipeline_cache);
                if (result != VK_SUCCESS) return false;
            }

            {
                auto create_info = vku::InitStruct<VkPipelineLayoutCreateInfo>();
                result = vksc::CreatePipelineLayout(device, &create_info, nullptr, &data.pipeline_layout);
                if (result != VK_SUCCESS) return false;
            }

            return true;
        },
        // Create objects
        [&](VkDevice device, uint32_t index, uint32_t create_count, bool should_fail) {
            std::vector<VkPipeline> pipelines(create_count, VK_NULL_HANDLE);

            auto stage_info = vku::InitStruct<VkPipelineShaderStageCreateInfo>();
            stage_info.stage = VK_SHADER_STAGE_VERTEX_BIT;
            stage_info.pName = "main";

            auto vi_state = vku::InitStruct<VkPipelineVertexInputStateCreateInfo>();
            auto ia_state = vku::InitStruct<VkPipelineInputAssemblyStateCreateInfo>();
            auto rs_state = vku::InitStruct<VkPipelineRasterizationStateCreateInfo>();
            rs_state.rasterizerDiscardEnable = VK_TRUE;
            rs_state.lineWidth = 1.f;

            auto offline_info = GetGraphicsPipelineOfflineCreateInfo();
            std::vector<VkGraphicsPipelineCreateInfo> create_info(create_count,
                                                                  vku::InitStruct<VkGraphicsPipelineCreateInfo>(&offline_info));
            for (uint32_t i = 0; i < create_count; ++i) {
                create_info[i].stageCount = 1;
                create_info[i].pStages = &stage_info;
                create_info[i].pVertexInputState = &vi_state;
                create_info[i].pInputAssemblyState = &ia_state;
                create_info[i].pRasterizationState = &rs_state;
                create_info[i].layout = data.pipeline_layout;
                create_info[i].renderPass = data.render_pass;
            }

            if (should_fail) {
                EXPECT_EQ(vksc::CreateGraphicsPipelines(device, data.pipeline_cache, create_count, create_info.data(), nullptr,
                                                        pipelines.data()),
                          VK_ERROR_VALIDATION_FAILED);
            } else {
                assert(index + create_count <= data.pipelines.size());
                EXPECT_EQ(vksc::CreateGraphicsPipelines(device, data.pipeline_cache, create_count, create_info.data(), nullptr,
                                                        &data.pipelines[index]),
                          VK_SUCCESS);
            }
        },
        // Destroy objects
        [&](VkDevice device, uint32_t index, uint32_t destroy_count) {
            assert(index < data.pipelines.size());
            assert(destroy_count == 1);

            vksc::DestroyPipeline(device, data.pipelines[index], nullptr);
            data.pipelines[index] = VK_NULL_HANDLE;
        },
        // Teardown common device objects
        [&](VkDevice device) {
            vksc::DestroyRenderPass(device, data.render_pass, nullptr);
            vksc::DestroyPipelineCache(device, data.pipeline_cache, nullptr);
            vksc::DestroyPipelineLayout(device, data.pipeline_layout, nullptr);
        });
}

TEST_F(ObjectReservationTest, QueryPoolRequestCount) {
    TEST_DESCRIPTION("Test VkDeviceObjectReservationCreateInfo::queryPoolRequestCount");

    struct {
        std::vector<VkQueryPool> query_pools{};
    } data;

    const uint32_t max_create_count = 0;  // Not a multi-create API
    const bool can_destroy = false;
    const bool has_parent = false;

    TestObjectReservationLimit(
        max_create_count, can_destroy, has_parent,
        // Init object reservation info
        [&](VkDeviceObjectReservationCreateInfo& object_reservation_info, uint32_t tested_limit) {
            object_reservation_info.queryPoolRequestCount = tested_limit;
            object_reservation_info.maxOcclusionQueriesPerPool = 8;

            data.query_pools.clear();
            data.query_pools.resize(tested_limit, VK_NULL_HANDLE);

            static VkMockObjects<VkQueryPool> mock_objects{};
            mock_objects.Reset(tested_limit);
            vkmock::CreateQueryPool = [&](auto, auto, auto, auto pHandle) {
                *pHandle = mock_objects.Alloc();
                return VK_SUCCESS;
            };
            vkmock::DestroyQueryPool = [&](auto, auto handle, auto) { mock_objects.Free(handle); };

            return true;
        },
        // Setup common device objects
        nullptr,
        // Create objects
        [&](VkDevice device, uint32_t index, uint32_t create_count, bool should_fail) {
            VkQueryPool query_pool = VK_NULL_HANDLE;

            auto create_info = vku::InitStruct<VkQueryPoolCreateInfo>();
            create_info.queryType = VK_QUERY_TYPE_OCCLUSION;
            create_info.queryCount = 8;

            if (should_fail) {
                EXPECT_EQ(vksc::CreateQueryPool(device, &create_info, nullptr, &query_pool), VK_ERROR_VALIDATION_FAILED);
            } else {
                assert(index < data.query_pools.size());
                EXPECT_EQ(vksc::CreateQueryPool(device, &create_info, nullptr, &data.query_pools[index]), VK_SUCCESS);
            }
        },
        // Destroy objects
        nullptr,
        // Teardown common device objects
        nullptr);
}

TEST_F(ObjectReservationTest, RenderPassRequestCount) {
    TEST_DESCRIPTION("Test VkDeviceObjectReservationCreateInfo::renderPassRequestCount");

    struct {
        bool use_create_render_pass2{};
        std::vector<VkRenderPass> render_passes{};
    } data;

    const uint32_t max_create_count = 0;  // Not a multi-create API
    const bool can_destroy = true;
    const bool has_parent = false;

    TestObjectReservationLimit(
        max_create_count, can_destroy, has_parent,
        // Init object reservation info
        [&](VkDeviceObjectReservationCreateInfo& object_reservation_info, uint32_t tested_limit) {
            object_reservation_info.renderPassRequestCount = tested_limit;
            object_reservation_info.subpassDescriptionRequestCount = tested_limit;

            data.render_passes.clear();
            data.render_passes.resize(tested_limit, VK_NULL_HANDLE);

            static VkMockObjects<VkRenderPass> mock_objects{};
            mock_objects.Reset(tested_limit);
            vkmock::CreateRenderPass = [&](auto, auto, auto, auto pHandle) {
                *pHandle = mock_objects.Alloc();
                return VK_SUCCESS;
            };
            vkmock::CreateRenderPass2 = [&](auto, auto, auto, auto pHandle) {
                *pHandle = mock_objects.Alloc();
                return VK_SUCCESS;
            };
            vkmock::DestroyRenderPass = [&](auto, auto handle, auto) { mock_objects.Free(handle); };

            return true;
        },
        // Setup common device objects
        nullptr,
        // Create objects
        [&](VkDevice device, uint32_t index, uint32_t create_count, bool should_fail) {
            VkRenderPass render_pass = VK_NULL_HANDLE;

            // Use CreateRenderPass2 for every second create call
            data.use_create_render_pass2 = !data.use_create_render_pass2;
            if (data.use_create_render_pass2) {
                auto subpass = vku::InitStruct<VkSubpassDescription2>();
                subpass.pipelineBindPoint = VK_PIPELINE_BIND_POINT_GRAPHICS;

                auto create_info = vku::InitStruct<VkRenderPassCreateInfo2>();
                create_info.subpassCount = 1;
                create_info.pSubpasses = &subpass;

                if (should_fail) {
                    EXPECT_EQ(vksc::CreateRenderPass2(device, &create_info, nullptr, &render_pass), VK_ERROR_VALIDATION_FAILED);
                } else {
                    assert(index < data.render_passes.size());
                    EXPECT_EQ(vksc::CreateRenderPass2(device, &create_info, nullptr, &data.render_passes[index]), VK_SUCCESS);
                }
            } else {
                VkSubpassDescription subpass{};
                subpass.pipelineBindPoint = VK_PIPELINE_BIND_POINT_GRAPHICS;

                auto create_info = vku::InitStruct<VkRenderPassCreateInfo>();
                create_info.subpassCount = 1;
                create_info.pSubpasses = &subpass;

                if (should_fail) {
                    EXPECT_EQ(vksc::CreateRenderPass(device, &create_info, nullptr, &render_pass), VK_ERROR_VALIDATION_FAILED);
                } else {
                    assert(index < data.render_passes.size());
                    EXPECT_EQ(vksc::CreateRenderPass(device, &create_info, nullptr, &data.render_passes[index]), VK_SUCCESS);
                }
            }
        },
        // Destroy objects
        [&](VkDevice device, uint32_t index, uint32_t destroy_count) {
            assert(index < data.render_passes.size());
            assert(destroy_count == 1);

            vksc::DestroyRenderPass(device, data.render_passes[index], nullptr);
            data.render_passes[index] = VK_NULL_HANDLE;
        },
        // Teardown common device objects
        nullptr);
}

TEST_F(ObjectReservationTest, SubpassDescriptionRequestCount) {
    TEST_DESCRIPTION("Test VkDeviceObjectReservationCreateInfo::subpassDescriptionRequestCount");

    struct {
        bool use_create_render_pass2{};
        std::vector<VkRenderPass> render_passes{};
    } data;

    const uint32_t max_create_count = std::min(GetVulkanSC10Properties().maxRenderPassSubpasses, 4u);
    const bool can_destroy = true;
    const bool has_parent = true;

    TestObjectReservationLimit(
        max_create_count, can_destroy, has_parent,
        // Init object reservation info
        [&](VkDeviceObjectReservationCreateInfo& object_reservation_info, uint32_t tested_limit) {
            object_reservation_info.renderPassRequestCount = tested_limit + 1;
            object_reservation_info.subpassDescriptionRequestCount = tested_limit;

            data.render_passes.clear();
            data.render_passes.resize(tested_limit, VK_NULL_HANDLE);

            static VkMockObjects<VkRenderPass> mock_objects{};
            mock_objects.Reset(tested_limit + 1);
            vkmock::CreateRenderPass = [&](auto, auto, auto, auto pHandle) {
                *pHandle = mock_objects.Alloc();
                return VK_SUCCESS;
            };
            vkmock::CreateRenderPass2 = [&](auto, auto, auto, auto pHandle) {
                *pHandle = mock_objects.Alloc();
                return VK_SUCCESS;
            };
            vkmock::DestroyRenderPass = [&](auto, auto handle, auto) { mock_objects.Free(handle); };

            return true;
        },
        // Setup common device objects
        nullptr,
        // Create objects
        [&](VkDevice device, uint32_t index, uint32_t create_count, bool should_fail) {
            VkRenderPass render_pass = VK_NULL_HANDLE;

            // Use CreateRenderPass2 for every second create call
            data.use_create_render_pass2 = !data.use_create_render_pass2;
            if (data.use_create_render_pass2) {
                std::vector<VkSubpassDescription2> subpasses(create_count, vku::InitStruct<VkSubpassDescription2>());
                for (auto& subpass : subpasses) {
                    subpass.pipelineBindPoint = VK_PIPELINE_BIND_POINT_GRAPHICS;
                }

                auto create_info = vku::InitStruct<VkRenderPassCreateInfo2>();
                create_info.subpassCount = create_count;
                create_info.pSubpasses = subpasses.data();

                if (should_fail) {
                    EXPECT_EQ(vksc::CreateRenderPass2(device, &create_info, nullptr, &render_pass), VK_ERROR_VALIDATION_FAILED);
                } else {
                    assert(index < data.render_passes.size());
                    EXPECT_EQ(vksc::CreateRenderPass2(device, &create_info, nullptr, &data.render_passes[index]), VK_SUCCESS);
                }
            } else {
                std::vector<VkSubpassDescription> subpasses(create_count, VkSubpassDescription{});
                for (auto& subpass : subpasses) {
                    subpass.pipelineBindPoint = VK_PIPELINE_BIND_POINT_GRAPHICS;
                }

                auto create_info = vku::InitStruct<VkRenderPassCreateInfo>();
                create_info.subpassCount = create_count;
                create_info.pSubpasses = subpasses.data();

                if (should_fail) {
                    EXPECT_EQ(vksc::CreateRenderPass(device, &create_info, nullptr, &render_pass), VK_ERROR_VALIDATION_FAILED);
                } else {
                    assert(index < data.render_passes.size());
                    EXPECT_EQ(vksc::CreateRenderPass(device, &create_info, nullptr, &data.render_passes[index]), VK_SUCCESS);
                }
            }
        },
        // Destroy objects
        [&](VkDevice device, uint32_t index, uint32_t destroy_count) {
            assert(index < data.render_passes.size());
            assert(destroy_count == 0);

            vksc::DestroyRenderPass(device, data.render_passes[index], nullptr);
            data.render_passes[index] = VK_NULL_HANDLE;
        },
        // Teardown common device objects
        nullptr);
}

TEST_F(ObjectReservationTest, AttachmentDescriptionRequestCount) {
    TEST_DESCRIPTION("Test VkDeviceObjectReservationCreateInfo::attachmentDescriptionRequestCount");

    struct {
        bool use_create_render_pass2{};
        std::vector<VkRenderPass> render_passes{};
    } data;

    const uint32_t max_create_count = 4;
    const bool can_destroy = true;
    const bool has_parent = true;

    TestObjectReservationLimit(
        max_create_count, can_destroy, has_parent,
        // Init object reservation info
        [&](VkDeviceObjectReservationCreateInfo& object_reservation_info, uint32_t tested_limit) {
            object_reservation_info.renderPassRequestCount = tested_limit + 1;
            object_reservation_info.subpassDescriptionRequestCount = tested_limit + 1;
            object_reservation_info.attachmentDescriptionRequestCount = tested_limit;

            data.render_passes.clear();
            data.render_passes.resize(tested_limit, VK_NULL_HANDLE);

            static VkMockObjects<VkRenderPass> mock_objects{};
            mock_objects.Reset(tested_limit + 1);
            vkmock::CreateRenderPass = [&](auto, auto, auto, auto pHandle) {
                *pHandle = mock_objects.Alloc();
                return VK_SUCCESS;
            };
            vkmock::CreateRenderPass2 = [&](auto, auto, auto, auto pHandle) {
                *pHandle = mock_objects.Alloc();
                return VK_SUCCESS;
            };
            vkmock::DestroyRenderPass = [&](auto, auto handle, auto) { mock_objects.Free(handle); };

            return true;
        },
        // Setup common device objects
        nullptr,
        // Create objects
        [&](VkDevice device, uint32_t index, uint32_t create_count, bool should_fail) {
            VkRenderPass render_pass = VK_NULL_HANDLE;

            // Use CreateRenderPass2 for every second create call
            data.use_create_render_pass2 = !data.use_create_render_pass2;
            if (data.use_create_render_pass2) {
                std::vector<VkAttachmentDescription2> attachments(create_count, vku::InitStruct<VkAttachmentDescription2>());
                for (auto& attachment : attachments) {
                    attachment.format = VK_FORMAT_R8G8B8A8_UNORM;
                    attachment.samples = VK_SAMPLE_COUNT_1_BIT;
                    attachment.loadOp = VK_ATTACHMENT_LOAD_OP_CLEAR;
                    attachment.storeOp = VK_ATTACHMENT_STORE_OP_DONT_CARE;
                    attachment.initialLayout = VK_IMAGE_LAYOUT_COLOR_ATTACHMENT_OPTIMAL;
                    attachment.finalLayout = VK_IMAGE_LAYOUT_COLOR_ATTACHMENT_OPTIMAL;
                }

                auto subpass = vku::InitStruct<VkSubpassDescription2>();
                subpass.pipelineBindPoint = VK_PIPELINE_BIND_POINT_GRAPHICS;

                auto create_info = vku::InitStruct<VkRenderPassCreateInfo2>();
                create_info.attachmentCount = create_count;
                create_info.pAttachments = attachments.data();
                create_info.subpassCount = 1;
                create_info.pSubpasses = &subpass;

                if (should_fail) {
                    EXPECT_EQ(vksc::CreateRenderPass2(device, &create_info, nullptr, &render_pass), VK_ERROR_VALIDATION_FAILED);
                } else {
                    assert(index < data.render_passes.size());
                    EXPECT_EQ(vksc::CreateRenderPass2(device, &create_info, nullptr, &data.render_passes[index]), VK_SUCCESS);
                }
            } else {
                std::vector<VkAttachmentDescription> attachments(create_count, VkAttachmentDescription{});
                for (auto& attachment : attachments) {
                    attachment.format = VK_FORMAT_R8G8B8A8_UNORM;
                    attachment.samples = VK_SAMPLE_COUNT_1_BIT;
                    attachment.loadOp = VK_ATTACHMENT_LOAD_OP_CLEAR;
                    attachment.storeOp = VK_ATTACHMENT_STORE_OP_DONT_CARE;
                    attachment.initialLayout = VK_IMAGE_LAYOUT_COLOR_ATTACHMENT_OPTIMAL;
                    attachment.finalLayout = VK_IMAGE_LAYOUT_COLOR_ATTACHMENT_OPTIMAL;
                }

                VkSubpassDescription subpass{};
                subpass.pipelineBindPoint = VK_PIPELINE_BIND_POINT_GRAPHICS;

                auto create_info = vku::InitStruct<VkRenderPassCreateInfo>();
                create_info.attachmentCount = create_count;
                create_info.pAttachments = attachments.data();
                create_info.subpassCount = 1;
                create_info.pSubpasses = &subpass;

                if (should_fail) {
                    EXPECT_EQ(vksc::CreateRenderPass(device, &create_info, nullptr, &render_pass), VK_ERROR_VALIDATION_FAILED);
                } else {
                    assert(index < data.render_passes.size());
                    EXPECT_EQ(vksc::CreateRenderPass(device, &create_info, nullptr, &data.render_passes[index]), VK_SUCCESS);
                }
            }
        },
        // Destroy objects
        [&](VkDevice device, uint32_t index, uint32_t destroy_count) {
            assert(index < data.render_passes.size());
            assert(destroy_count == 0);

            vksc::DestroyRenderPass(device, data.render_passes[index], nullptr);
            data.render_passes[index] = VK_NULL_HANDLE;
        },
        // Teardown common device objects
        nullptr);
}

TEST_F(ObjectReservationTest, FramebufferRequestCount) {
    TEST_DESCRIPTION("Test VkDeviceObjectReservationCreateInfo::framebufferRequestCount");

    struct {
        VkRenderPass render_pass{VK_NULL_HANDLE};
        std::vector<VkFramebuffer> framebuffers{};
    } data;

    const uint32_t max_create_count = 0;  // Not a multi-create API
    const bool can_destroy = true;
    const bool has_parent = false;

    TestObjectReservationLimit(
        max_create_count, can_destroy, has_parent,
        // Init object reservation info
        [&](VkDeviceObjectReservationCreateInfo& object_reservation_info, uint32_t tested_limit) {
            object_reservation_info.renderPassRequestCount = 1;
            object_reservation_info.subpassDescriptionRequestCount = 1;
            object_reservation_info.framebufferRequestCount = tested_limit;

            data.render_pass = VK_NULL_HANDLE;
            data.framebuffers.clear();
            data.framebuffers.resize(tested_limit, VK_NULL_HANDLE);

            static VkMockObjects<VkFramebuffer> mock_objects{};
            mock_objects.Reset(tested_limit);
            vkmock::CreateFramebuffer = [&](auto, auto, auto, auto pHandle) {
                *pHandle = mock_objects.Alloc();
                return VK_SUCCESS;
            };
            vkmock::DestroyFramebuffer = [&](auto, auto handle, auto) { mock_objects.Free(handle); };

            return true;
        },
        // Setup common device objects
        [&](VkDevice device) {
            VkResult result = VK_SUCCESS;

            VkSubpassDescription subpass{};
            subpass.pipelineBindPoint = VK_PIPELINE_BIND_POINT_GRAPHICS;

            auto create_info = vku::InitStruct<VkRenderPassCreateInfo>();
            create_info.subpassCount = 1;
            create_info.pSubpasses = &subpass;

            result = vksc::CreateRenderPass(device, &create_info, nullptr, &data.render_pass);
            if (result != VK_SUCCESS) return false;

            return true;
        },
        // Create objects
        [&](VkDevice device, uint32_t index, uint32_t create_count, bool should_fail) {
            VkFramebuffer framebuffer = VK_NULL_HANDLE;

            auto create_info = vku::InitStruct<VkFramebufferCreateInfo>();
            create_info.renderPass = data.render_pass;
            create_info.width = 128;
            create_info.height = 128;
            create_info.layers = 1;

            if (should_fail) {
                EXPECT_EQ(vksc::CreateFramebuffer(device, &create_info, nullptr, &framebuffer), VK_ERROR_VALIDATION_FAILED);
            } else {
                assert(index < data.framebuffers.size());
                EXPECT_EQ(vksc::CreateFramebuffer(device, &create_info, nullptr, &data.framebuffers[index]), VK_SUCCESS);
            }
        },
        // Destroy objects
        [&](VkDevice device, uint32_t index, uint32_t destroy_count) {
            assert(index < data.framebuffers.size());
            assert(destroy_count == 1);

            vksc::DestroyFramebuffer(device, data.framebuffers[index], nullptr);
            data.framebuffers[index] = VK_NULL_HANDLE;
        },
        // Teardown common device objects
        [&](VkDevice device) { vksc::DestroyRenderPass(device, data.render_pass, nullptr); });
}

TEST_F(ObjectReservationTest, BufferRequestCount) {
    TEST_DESCRIPTION("Test VkDeviceObjectReservationCreateInfo::bufferRequestCount");

    struct {
        std::vector<VkBuffer> buffers{};
    } data;

    const uint32_t max_create_count = 0;  // Not a multi-create API
    const bool can_destroy = true;
    const bool has_parent = false;

    TestObjectReservationLimit(
        max_create_count, can_destroy, has_parent,
        // Init object reservation info
        [&](VkDeviceObjectReservationCreateInfo& object_reservation_info, uint32_t tested_limit) {
            object_reservation_info.bufferRequestCount = tested_limit;

            data.buffers.clear();
            data.buffers.resize(tested_limit, VK_NULL_HANDLE);

            static VkMockObjects<VkBuffer> mock_objects{};
            mock_objects.Reset(tested_limit);
            vkmock::CreateBuffer = [&](auto, auto, auto, auto pHandle) {
                *pHandle = mock_objects.Alloc();
                return VK_SUCCESS;
            };
            vkmock::DestroyBuffer = [&](auto, auto handle, auto) { mock_objects.Free(handle); };

            return true;
        },
        // Setup common device objects
        nullptr,
        // Create objects
        [&](VkDevice device, uint32_t index, uint32_t create_count, bool should_fail) {
            VkBuffer buffer = VK_NULL_HANDLE;

            auto create_info = vku::InitStruct<VkBufferCreateInfo>();
            create_info.size = 1024;
            create_info.usage = VK_BUFFER_USAGE_UNIFORM_TEXEL_BUFFER_BIT;

            if (should_fail) {
                EXPECT_EQ(vksc::CreateBuffer(device, &create_info, nullptr, &buffer), VK_ERROR_VALIDATION_FAILED);
            } else {
                assert(index < data.buffers.size());
                EXPECT_EQ(vksc::CreateBuffer(device, &create_info, nullptr, &data.buffers[index]), VK_SUCCESS);
            }
        },
        // Destroy objects
        [&](VkDevice device, uint32_t index, uint32_t destroy_count) {
            assert(index < data.buffers.size());
            assert(destroy_count == 1);

            vksc::DestroyBuffer(device, data.buffers[index], nullptr);
            data.buffers[index] = VK_NULL_HANDLE;
        },
        // Teardown common device objects
        nullptr);
}

TEST_F(ObjectReservationTest, BufferViewRequestCount) {
    TEST_DESCRIPTION("Test VkDeviceObjectReservationCreateInfo::bufferViewRequestCount");

    struct {
        VkBuffer buffer{};
        std::vector<VkBufferView> buffer_views{};
    } data;

    const uint32_t max_create_count = 0;  // Not a multi-create API
    const bool can_destroy = true;
    const bool has_parent = false;

    TestObjectReservationLimit(
        max_create_count, can_destroy, has_parent,
        // Init object reservation info
        [&](VkDeviceObjectReservationCreateInfo& object_reservation_info, uint32_t tested_limit) {
            object_reservation_info.deviceMemoryRequestCount = 1;
            object_reservation_info.bufferRequestCount = 1;
            object_reservation_info.bufferViewRequestCount = tested_limit;

            data.buffer_views.clear();
            data.buffer_views.resize(tested_limit, VK_NULL_HANDLE);

            static VkMockObjects<VkBufferView> mock_objects{};
            mock_objects.Reset(tested_limit);
            vkmock::CreateBufferView = [&](auto, auto, auto, auto pHandle) {
                *pHandle = mock_objects.Alloc();
                return VK_SUCCESS;
            };
            vkmock::DestroyBufferView = [&](auto, auto handle, auto) { mock_objects.Free(handle); };

            return true;
        },
        // Setup common device objects
        [&](VkDevice device) {
            auto create_info = vku::InitStruct<VkBufferCreateInfo>();
            create_info.size = 1024;
            create_info.usage = VK_BUFFER_USAGE_UNIFORM_TEXEL_BUFFER_BIT;

            VkResult result = vksc::CreateBuffer(device, &create_info, nullptr, &data.buffer);
            if (result != VK_SUCCESS) return false;

            return true;
        },
        // Create objects
        [&](VkDevice device, uint32_t index, uint32_t create_count, bool should_fail) {
            VkBufferView buffer_view = VK_NULL_HANDLE;

            auto create_info = vku::InitStruct<VkBufferViewCreateInfo>();
            create_info.buffer = data.buffer;
            create_info.format = VK_FORMAT_R32_UINT;
            create_info.range = 256;

            if (should_fail) {
                EXPECT_EQ(vksc::CreateBufferView(device, &create_info, nullptr, &buffer_view), VK_ERROR_VALIDATION_FAILED);
            } else {
                assert(index < data.buffer_views.size());
                EXPECT_EQ(vksc::CreateBufferView(device, &create_info, nullptr, &data.buffer_views[index]), VK_SUCCESS);
            }
        },
        // Destroy objects
        [&](VkDevice device, uint32_t index, uint32_t destroy_count) {
            assert(index < data.buffer_views.size());
            assert(destroy_count == 1);

            vksc::DestroyBufferView(device, data.buffer_views[index], nullptr);
            data.buffer_views[index] = VK_NULL_HANDLE;
        },
        // Teardown common device objects
        [&](VkDevice device) {
            vksc::DestroyBuffer(device, data.buffer, nullptr);
            data.buffer = VK_NULL_HANDLE;
        });
}

TEST_F(ObjectReservationTest, ImageRequestCount) {
    TEST_DESCRIPTION("Test VkDeviceObjectReservationCreateInfo::imageRequestCount");

    struct {
        std::vector<VkImage> images{};
    } data;

    const uint32_t max_create_count = 0;  // Not a multi-create API
    const bool can_destroy = true;
    const bool has_parent = false;

    TestObjectReservationLimit(
        max_create_count, can_destroy, has_parent,
        // Init object reservation info
        [&](VkDeviceObjectReservationCreateInfo& object_reservation_info, uint32_t tested_limit) {
            object_reservation_info.imageRequestCount = tested_limit;

            data.images.clear();
            data.images.resize(tested_limit, VK_NULL_HANDLE);

            static VkMockObjects<VkImage> mock_objects{};
            mock_objects.Reset(tested_limit);
            vkmock::CreateImage = [&](auto, auto, auto, auto pHandle) {
                *pHandle = mock_objects.Alloc();
                return VK_SUCCESS;
            };
            vkmock::DestroyImage = [&](auto, auto handle, auto) { mock_objects.Free(handle); };

            return true;
        },
        // Setup common device objects
        nullptr,
        // Create objects
        [&](VkDevice device, uint32_t index, uint32_t create_count, bool should_fail) {
            VkImage image = VK_NULL_HANDLE;

            auto create_info = vku::InitStruct<VkImageCreateInfo>();
            create_info.imageType = VK_IMAGE_TYPE_2D;
            create_info.format = VK_FORMAT_R8G8B8A8_UNORM;
            create_info.extent = {16, 16, 1};
            create_info.mipLevels = 1;
            create_info.arrayLayers = 1;
            create_info.samples = VK_SAMPLE_COUNT_1_BIT;
            create_info.tiling = VK_IMAGE_TILING_OPTIMAL;
            create_info.usage = VK_IMAGE_USAGE_SAMPLED_BIT;

            if (should_fail) {
                EXPECT_EQ(vksc::CreateImage(device, &create_info, nullptr, &image), VK_ERROR_VALIDATION_FAILED);
            } else {
                assert(index < data.images.size());
                EXPECT_EQ(vksc::CreateImage(device, &create_info, nullptr, &data.images[index]), VK_SUCCESS);
            }
        },
        // Destroy objects
        [&](VkDevice device, uint32_t index, uint32_t destroy_count) {
            assert(index < data.images.size());
            assert(destroy_count == 1);

            vksc::DestroyImage(device, data.images[index], nullptr);
            data.images[index] = VK_NULL_HANDLE;
        },
        // Teardown common device objects
        nullptr);
}

TEST_F(ObjectReservationTest, ImageViewRequestCount) {
    TEST_DESCRIPTION("Test VkDeviceObjectReservationCreateInfo::imageViewRequestCount");

    struct {
        VkImage image{};
        std::vector<VkImageView> image_views{};
    } data;

    const uint32_t max_create_count = 0;  // Not a multi-create API
    const bool can_destroy = true;
    const bool has_parent = false;

    TestObjectReservationLimit(
        max_create_count, can_destroy, has_parent,
        // Init object reservation info
        [&](VkDeviceObjectReservationCreateInfo& object_reservation_info, uint32_t tested_limit) {
            object_reservation_info.deviceMemoryRequestCount = 1;
            object_reservation_info.imageRequestCount = 1;
            object_reservation_info.imageViewRequestCount = tested_limit;
            object_reservation_info.maxImageViewMipLevels = 1;
            object_reservation_info.maxImageViewArrayLayers = 1;

            data.image_views.clear();
            data.image_views.resize(tested_limit, VK_NULL_HANDLE);

            static VkMockObjects<VkImageView> mock_objects{};
            mock_objects.Reset(tested_limit);
            vkmock::CreateImageView = [&](auto, auto, auto, auto pHandle) {
                *pHandle = mock_objects.Alloc();
                return VK_SUCCESS;
            };
            vkmock::DestroyImageView = [&](auto, auto handle, auto) { mock_objects.Free(handle); };

            return true;
        },
        // Setup common device objects
        [&](VkDevice device) {
            auto create_info = vku::InitStruct<VkImageCreateInfo>();
            create_info.imageType = VK_IMAGE_TYPE_2D;
            create_info.format = VK_FORMAT_R8G8B8A8_UNORM;
            create_info.extent = {16, 16, 1};
            create_info.mipLevels = 1;
            create_info.arrayLayers = 1;
            create_info.samples = VK_SAMPLE_COUNT_1_BIT;
            create_info.tiling = VK_IMAGE_TILING_OPTIMAL;
            create_info.usage = VK_IMAGE_USAGE_SAMPLED_BIT;

            VkResult result = vksc::CreateImage(device, &create_info, nullptr, &data.image);
            if (result != VK_SUCCESS) return false;

            return true;
        },
        // Create objects
        [&](VkDevice device, uint32_t index, uint32_t create_count, bool should_fail) {
            VkImageView image_view = VK_NULL_HANDLE;

            auto create_info = vku::InitStruct<VkImageViewCreateInfo>();
            create_info.image = data.image;
            create_info.viewType = VK_IMAGE_VIEW_TYPE_2D;
            create_info.format = VK_FORMAT_R8G8B8A8_UNORM;
            create_info.subresourceRange = {VK_IMAGE_ASPECT_COLOR_BIT, 0, 1, 0, 1};

            if (should_fail) {
                EXPECT_EQ(vksc::CreateImageView(device, &create_info, nullptr, &image_view), VK_ERROR_VALIDATION_FAILED);
            } else {
                assert(index < data.image_views.size());
                EXPECT_EQ(vksc::CreateImageView(device, &create_info, nullptr, &data.image_views[index]), VK_SUCCESS);
            }
        },
        // Destroy objects
        [&](VkDevice device, uint32_t index, uint32_t destroy_count) {
            assert(index < data.image_views.size());
            assert(destroy_count == 1);

            vksc::DestroyImageView(device, data.image_views[index], nullptr);
            data.image_views[index] = VK_NULL_HANDLE;
        },
        // Teardown common device objects
        [&](VkDevice device) {
            vksc::DestroyImage(device, data.image, nullptr);
            data.image = VK_NULL_HANDLE;
        });
}

TEST_F(ObjectReservationTest, LayeredImageViewRequestCount) {
    TEST_DESCRIPTION("Test VkDeviceObjectReservationCreateInfo::layeredImageViewRequestCount");

    struct {
        const uint32_t layer_count = 32;
        VkImage image{};
        std::vector<VkImageView> non_layered_image_views{};
        std::vector<VkImageView> layered_image_views{};
    } data;

    const uint32_t max_create_count = 0;  // Not a multi-create API
    const bool can_destroy = true;
    const bool has_parent = false;

    TestObjectReservationLimit(
        max_create_count, can_destroy, has_parent,
        // Init object reservation info
        [&](VkDeviceObjectReservationCreateInfo& object_reservation_info, uint32_t tested_limit) {
            object_reservation_info.deviceMemoryRequestCount = 1;
            object_reservation_info.imageRequestCount = 1;
            object_reservation_info.imageViewRequestCount = tested_limit + data.layer_count + 1;
            object_reservation_info.layeredImageViewRequestCount = tested_limit;
            object_reservation_info.maxImageViewMipLevels = 1;
            object_reservation_info.maxImageViewArrayLayers = data.layer_count;
            object_reservation_info.maxLayeredImageViewMipLevels = 1;

            data.non_layered_image_views.clear();
            data.non_layered_image_views.resize(data.layer_count, VK_NULL_HANDLE);
            data.layered_image_views.clear();
            data.layered_image_views.resize(tested_limit, VK_NULL_HANDLE);

            static VkMockObjects<VkImageView> mock_objects{};
            mock_objects.Reset(tested_limit + data.layer_count + 1);
            vkmock::CreateImageView = [&](auto, auto, auto, auto pHandle) {
                *pHandle = mock_objects.Alloc();
                return VK_SUCCESS;
            };
            vkmock::DestroyImageView = [&](auto, auto handle, auto) { mock_objects.Free(handle); };

            return true;
        },
        // Setup common device objects
        [&](VkDevice device) {
            VkResult result = VK_SUCCESS;

            auto create_info = vku::InitStruct<VkImageCreateInfo>();
            create_info.imageType = VK_IMAGE_TYPE_2D;
            create_info.format = VK_FORMAT_R8G8B8A8_UNORM;
            create_info.extent = {16, 16, 1};
            create_info.mipLevels = 1;
            create_info.arrayLayers = data.layer_count;
            create_info.samples = VK_SAMPLE_COUNT_1_BIT;
            create_info.tiling = VK_IMAGE_TILING_OPTIMAL;
            create_info.usage = VK_IMAGE_USAGE_SAMPLED_BIT;

            result = vksc::CreateImage(device, &create_info, nullptr, &data.image);
            if (result != VK_SUCCESS) return false;

            for (uint32_t i = 0; i < data.layer_count; ++i) {
                auto view_create_info = vku::InitStruct<VkImageViewCreateInfo>();
                view_create_info.image = data.image;
                view_create_info.viewType = VK_IMAGE_VIEW_TYPE_2D_ARRAY;
                view_create_info.format = VK_FORMAT_R8G8B8A8_UNORM;
                view_create_info.subresourceRange = {VK_IMAGE_ASPECT_COLOR_BIT, 0, 1, i, 1};

                result = vksc::CreateImageView(device, &view_create_info, nullptr, &data.non_layered_image_views[i]);
                if (result != VK_SUCCESS) return false;
            }

            return true;
        },
        // Create objects
        [&](VkDevice device, uint32_t index, uint32_t create_count, bool should_fail) {
            VkImageView image_view = VK_NULL_HANDLE;

            auto create_info = vku::InitStruct<VkImageViewCreateInfo>();
            create_info.image = data.image;
            create_info.viewType = VK_IMAGE_VIEW_TYPE_2D_ARRAY;
            create_info.format = VK_FORMAT_R8G8B8A8_UNORM;
            create_info.subresourceRange = {VK_IMAGE_ASPECT_COLOR_BIT, 0, 1};
            create_info.subresourceRange.baseArrayLayer = index % (data.layer_count / 2);
            create_info.subresourceRange.layerCount = (index % 2 == 0) ? data.layer_count / 2 : VK_REMAINING_ARRAY_LAYERS;

            assert(create_info.subresourceRange.layerCount > 1);

            if (should_fail) {
                EXPECT_EQ(vksc::CreateImageView(device, &create_info, nullptr, &image_view), VK_ERROR_VALIDATION_FAILED);
            } else {
                assert(index < data.layered_image_views.size());
                EXPECT_EQ(vksc::CreateImageView(device, &create_info, nullptr, &data.layered_image_views[index]), VK_SUCCESS);
            }
        },
        // Destroy objects
        [&](VkDevice device, uint32_t index, uint32_t destroy_count) {
            assert(index < data.layered_image_views.size());
            assert(destroy_count == 1);

            vksc::DestroyImageView(device, data.layered_image_views[index], nullptr);
            data.layered_image_views[index] = VK_NULL_HANDLE;
        },
        // Teardown common device objects
        [&](VkDevice device) {
            for (uint32_t i = 0; i < data.layer_count; ++i) {
                vksc::DestroyImageView(device, data.non_layered_image_views[i], nullptr);
            }
            vksc::DestroyImage(device, data.image, nullptr);
            data.image = VK_NULL_HANDLE;
        });
}

TEST_F(ObjectReservationTest, SamplerRequestCount) {
    TEST_DESCRIPTION("Test VkDeviceObjectReservationCreateInfo::samplerRequestCount");

    struct {
        std::vector<VkSampler> samplers{};
    } data;

    const uint32_t max_create_count = 0;  // Not a multi-create API
    const bool can_destroy = true;
    const bool has_parent = false;

    TestObjectReservationLimit(
        max_create_count, can_destroy, has_parent,
        // Init object reservation info
        [&](VkDeviceObjectReservationCreateInfo& object_reservation_info, uint32_t tested_limit) {
            object_reservation_info.samplerRequestCount = tested_limit;

            data.samplers.clear();
            data.samplers.resize(tested_limit, VK_NULL_HANDLE);

            static VkMockObjects<VkSampler> mock_objects{};
            mock_objects.Reset(tested_limit);
            vkmock::CreateSampler = [&](auto, auto, auto, auto pHandle) {
                *pHandle = mock_objects.Alloc();
                return VK_SUCCESS;
            };
            vkmock::DestroySampler = [&](auto, auto handle, auto) { mock_objects.Free(handle); };

            return true;
        },
        // Setup common device objects
        nullptr,
        // Create objects
        [&](VkDevice device, uint32_t index, uint32_t create_count, bool should_fail) {
            VkSampler sampler = VK_NULL_HANDLE;

            auto create_info = vku::InitStruct<VkSamplerCreateInfo>();
            create_info.magFilter = VK_FILTER_LINEAR;
            create_info.minFilter = VK_FILTER_LINEAR;

            if (should_fail) {
                EXPECT_EQ(vksc::CreateSampler(device, &create_info, nullptr, &sampler), VK_ERROR_VALIDATION_FAILED);
            } else {
                assert(index < data.samplers.size());
                EXPECT_EQ(vksc::CreateSampler(device, &create_info, nullptr, &data.samplers[index]), VK_SUCCESS);
            }
        },
        // Destroy objects
        [&](VkDevice device, uint32_t index, uint32_t destroy_count) {
            assert(index < data.samplers.size());
            assert(destroy_count == 1);

            vksc::DestroySampler(device, data.samplers[index], nullptr);
            data.samplers[index] = VK_NULL_HANDLE;
        },
        // Teardown common device objects
        nullptr);
}

TEST_F(ObjectReservationTest, SamplerYcbcrConversionRequestCount) {
    TEST_DESCRIPTION("Test VkDeviceObjectReservationCreateInfo::samplerYcbcrConversionRequestCount");

    struct {
        VkFormat ycbcr_format = VK_FORMAT_UNDEFINED;
        std::vector<VkSamplerYcbcrConversion> sampler_ycbcr_conversions{};
    } data;

    const uint32_t max_create_count = 0;  // Not a multi-create API
    const bool can_destroy = true;
    const bool has_parent = false;

    TestObjectReservationLimit(
        max_create_count, can_destroy, has_parent,
        // Init object reservation info
        [&](VkDeviceObjectReservationCreateInfo& object_reservation_info, uint32_t tested_limit) {
            object_reservation_info.samplerYcbcrConversionRequestCount = tested_limit;

            data.sampler_ycbcr_conversions.clear();
            data.sampler_ycbcr_conversions.resize(tested_limit, VK_NULL_HANDLE);

            static VkMockObjects<VkSamplerYcbcrConversion> mock_objects{};
            mock_objects.Reset(tested_limit);
            vkmock::CreateSamplerYcbcrConversion = [&](auto, auto, auto, auto pHandle) {
                *pHandle = mock_objects.Alloc();
                return VK_SUCCESS;
            };
            vkmock::DestroySamplerYcbcrConversion = [&](auto, auto handle, auto) { mock_objects.Free(handle); };

            return true;
        },
        // Setup common device objects
        nullptr,
        // Create objects
        [&](VkDevice device, uint32_t index, uint32_t create_count, bool should_fail) {
            VkSamplerYcbcrConversion sampler_ycbcr_conversion = VK_NULL_HANDLE;

            auto create_info = vku::InitStruct<VkSamplerYcbcrConversionCreateInfo>();
            create_info.format = data.ycbcr_format;

            if (should_fail) {
                EXPECT_EQ(vksc::CreateSamplerYcbcrConversion(device, &create_info, nullptr, &sampler_ycbcr_conversion),
                          VK_ERROR_VALIDATION_FAILED);
            } else {
                assert(index < data.sampler_ycbcr_conversions.size());
                EXPECT_EQ(vksc::CreateSamplerYcbcrConversion(device, &create_info, nullptr, &data.sampler_ycbcr_conversions[index]),
                          VK_SUCCESS);
            }
        },
        // Destroy objects
        [&](VkDevice device, uint32_t index, uint32_t destroy_count) {
            assert(index < data.sampler_ycbcr_conversions.size());
            assert(destroy_count == 1);

            vksc::DestroySamplerYcbcrConversion(device, data.sampler_ycbcr_conversions[index], nullptr);
            data.sampler_ycbcr_conversions[index] = VK_NULL_HANDLE;
        },
        // Teardown common device objects
        nullptr);
}

TEST_F(ObjectReservationTest, FenceRequestCount) {
    TEST_DESCRIPTION("Test VkDeviceObjectReservationCreateInfo::fenceRequestCount");

    struct {
        std::vector<VkFence> fences{};
    } data;

    const uint32_t max_create_count = 0;  // Not a multi-create API
    const bool can_destroy = true;
    const bool has_parent = false;

    TestObjectReservationLimit(
        max_create_count, can_destroy, has_parent,
        // Init object reservation info
        [&](VkDeviceObjectReservationCreateInfo& object_reservation_info, uint32_t tested_limit) {
            object_reservation_info.fenceRequestCount = tested_limit;

            data.fences.clear();
            data.fences.resize(tested_limit, VK_NULL_HANDLE);

            static VkMockObjects<VkFence> mock_objects{};
            mock_objects.Reset(tested_limit);
            vkmock::CreateFence = [&](auto, auto, auto, auto pHandle) {
                *pHandle = mock_objects.Alloc();
                return VK_SUCCESS;
            };
            vkmock::DestroyFence = [&](auto, auto handle, auto) { mock_objects.Free(handle); };

            return true;
        },
        // Setup common device objects
        nullptr,
        // Create objects
        [&](VkDevice device, uint32_t index, uint32_t create_count, bool should_fail) {
            VkFence fence = VK_NULL_HANDLE;

            auto create_info = vku::InitStruct<VkFenceCreateInfo>();

            if (should_fail) {
                EXPECT_EQ(vksc::CreateFence(device, &create_info, nullptr, &fence), VK_ERROR_VALIDATION_FAILED);
            } else {
                assert(index < data.fences.size());
                EXPECT_EQ(vksc::CreateFence(device, &create_info, nullptr, &data.fences[index]), VK_SUCCESS);
            }
        },
        // Destroy objects
        [&](VkDevice device, uint32_t index, uint32_t destroy_count) {
            assert(index < data.fences.size());
            assert(destroy_count == 1);

            vksc::DestroyFence(device, data.fences[index], nullptr);
            data.fences[index] = VK_NULL_HANDLE;
        },
        // Teardown common device objects
        nullptr);
}

TEST_F(ObjectReservationTest, SemaphoreRequestCount) {
    TEST_DESCRIPTION("Test VkDeviceObjectReservationCreateInfo::semaphoreRequestCount");

    struct {
        std::vector<VkSemaphore> semaphores{};
    } data;

    const uint32_t max_create_count = 0;  // Not a multi-create API
    const bool can_destroy = true;
    const bool has_parent = false;

    TestObjectReservationLimit(
        max_create_count, can_destroy, has_parent,
        // Init object reservation info
        [&](VkDeviceObjectReservationCreateInfo& object_reservation_info, uint32_t tested_limit) {
            object_reservation_info.semaphoreRequestCount = tested_limit;

            data.semaphores.clear();
            data.semaphores.resize(tested_limit, VK_NULL_HANDLE);

            static VkMockObjects<VkSemaphore> mock_objects{};
            mock_objects.Reset(tested_limit);
            vkmock::CreateSemaphore = [&](auto, auto, auto, auto pHandle) {
                *pHandle = mock_objects.Alloc();
                return VK_SUCCESS;
            };
            vkmock::DestroySemaphore = [&](auto, auto handle, auto) { mock_objects.Free(handle); };

            return true;
        },
        // Setup common device objects
        nullptr,
        // Create objects
        [&](VkDevice device, uint32_t index, uint32_t create_count, bool should_fail) {
            VkSemaphore semaphore = VK_NULL_HANDLE;

            auto create_info = vku::InitStruct<VkSemaphoreCreateInfo>();

            if (should_fail) {
                EXPECT_EQ(vksc::CreateSemaphore(device, &create_info, nullptr, &semaphore), VK_ERROR_VALIDATION_FAILED);
            } else {
                assert(index < data.semaphores.size());
                EXPECT_EQ(vksc::CreateSemaphore(device, &create_info, nullptr, &data.semaphores[index]), VK_SUCCESS);
            }
        },
        // Destroy objects
        [&](VkDevice device, uint32_t index, uint32_t destroy_count) {
            assert(index < data.semaphores.size());
            assert(destroy_count == 1);

            vksc::DestroySemaphore(device, data.semaphores[index], nullptr);
            data.semaphores[index] = VK_NULL_HANDLE;
        },
        // Teardown common device objects
        nullptr);
}

TEST_F(ObjectReservationTest, EventRequestCount) {
    TEST_DESCRIPTION("Test VkDeviceObjectReservationCreateInfo::eventRequestCount");

    struct {
        std::vector<VkEvent> events{};
    } data;

    const uint32_t max_create_count = 0;  // Not a multi-create API
    const bool can_destroy = true;
    const bool has_parent = false;

    TestObjectReservationLimit(
        max_create_count, can_destroy, has_parent,
        // Init object reservation info
        [&](VkDeviceObjectReservationCreateInfo& object_reservation_info, uint32_t tested_limit) {
            object_reservation_info.eventRequestCount = tested_limit;

            data.events.clear();
            data.events.resize(tested_limit, VK_NULL_HANDLE);

            static VkMockObjects<VkEvent> mock_objects{};
            mock_objects.Reset(tested_limit);
            vkmock::CreateEvent = [&](auto, auto, auto, auto pHandle) {
                *pHandle = mock_objects.Alloc();
                return VK_SUCCESS;
            };
            vkmock::DestroyEvent = [&](auto, auto handle, auto) { mock_objects.Free(handle); };

            return true;
        },
        // Setup common device objects
        nullptr,
        // Create objects
        [&](VkDevice device, uint32_t index, uint32_t create_count, bool should_fail) {
            VkEvent event = VK_NULL_HANDLE;

            auto create_info = vku::InitStruct<VkEventCreateInfo>();

            if (should_fail) {
                EXPECT_EQ(vksc::CreateEvent(device, &create_info, nullptr, &event), VK_ERROR_VALIDATION_FAILED);
            } else {
                assert(index < data.events.size());
                EXPECT_EQ(vksc::CreateEvent(device, &create_info, nullptr, &data.events[index]), VK_SUCCESS);
            }
        },
        // Destroy objects
        [&](VkDevice device, uint32_t index, uint32_t destroy_count) {
            assert(index < data.events.size());
            assert(destroy_count == 1);

            vksc::DestroyEvent(device, data.events[index], nullptr);
            data.events[index] = VK_NULL_HANDLE;
        },
        // Teardown common device objects
        nullptr);
}

TEST_F(ObjectReservationTest, DescriptorSetLayoutBindingLimit) {
    TEST_DESCRIPTION("vkCreateDescriptorSetLayout - descriptor binding index must be below descriptorSetLayoutBindingLimit");

    auto object_reservation_info1 = vku::InitStruct<VkDeviceObjectReservationCreateInfo>();
    auto object_reservation_info2 = vku::InitStruct<VkDeviceObjectReservationCreateInfo>(&object_reservation_info1);
    auto object_reservation_info3 = vku::InitStruct<VkDeviceObjectReservationCreateInfo>(&object_reservation_info2);

    object_reservation_info1.descriptorSetLayoutRequestCount = 2;

    object_reservation_info1.descriptorSetLayoutBindingRequestCount = 20;

    object_reservation_info1.descriptorSetLayoutBindingLimit = 1;
    object_reservation_info2.descriptorSetLayoutBindingLimit = 4;
    object_reservation_info3.descriptorSetLayoutBindingLimit = 3;

    auto device = InitDeviceWithCustomObjectReservation(&object_reservation_info3);

    VkDescriptorSetLayoutBinding bindings[] = {
        {0, VK_DESCRIPTOR_TYPE_STORAGE_BUFFER, 1, VK_SHADER_STAGE_FRAGMENT_BIT, nullptr},
        {5, VK_DESCRIPTOR_TYPE_STORAGE_BUFFER, 1, VK_SHADER_STAGE_FRAGMENT_BIT, nullptr},
        {1, VK_DESCRIPTOR_TYPE_STORAGE_BUFFER, 1, VK_SHADER_STAGE_FRAGMENT_BIT, nullptr},
        {3, VK_DESCRIPTOR_TYPE_STORAGE_BUFFER, 1, VK_SHADER_STAGE_FRAGMENT_BIT, nullptr},
        {4, VK_DESCRIPTOR_TYPE_STORAGE_BUFFER, 1, VK_SHADER_STAGE_FRAGMENT_BIT, nullptr},
    };

    auto create_info = vku::InitStruct<VkDescriptorSetLayoutCreateInfo>();
    create_info.bindingCount = sizeof(bindings) / sizeof(bindings[0]);
    create_info.pBindings = &bindings[0];

    VkDescriptorSetLayout layout = VK_NULL_HANDLE;

    // Should fail with all bindings
    EXPECT_EQ(vksc::CreateDescriptorSetLayout(device, &create_info, nullptr, &layout), VK_ERROR_VALIDATION_FAILED);
    vksc::DestroyDescriptorSetLayout(device, layout, nullptr);
    layout = VK_NULL_HANDLE;

    // Should succeed if we exclude the first two and the last bindings
    create_info.bindingCount -= 3;
    create_info.pBindings += 2;
    EXPECT_EQ(vksc::CreateDescriptorSetLayout(device, &create_info, nullptr, &layout), VK_SUCCESS);
    vksc::DestroyDescriptorSetLayout(device, layout, nullptr);
    layout = VK_NULL_HANDLE;
}

TEST_F(ObjectReservationTest, MaxImageViewMipLevels) {
    TEST_DESCRIPTION("vkCreateImageView - levelCount cannot exceed max[Layered]ImageViewMipLevels");

    auto object_reservation_info1 = vku::InitStruct<VkDeviceObjectReservationCreateInfo>();
    auto object_reservation_info2 = vku::InitStruct<VkDeviceObjectReservationCreateInfo>(&object_reservation_info1);
    auto object_reservation_info3 = vku::InitStruct<VkDeviceObjectReservationCreateInfo>(&object_reservation_info2);

    object_reservation_info1.imageRequestCount = 1;
    object_reservation_info1.imageViewRequestCount = 2;
    object_reservation_info1.layeredImageViewRequestCount = 2;

    object_reservation_info1.maxImageViewArrayLayers = 4;

    object_reservation_info1.maxImageViewMipLevels = 1;
    object_reservation_info2.maxImageViewMipLevels = 3;
    object_reservation_info3.maxImageViewMipLevels = 2;

    object_reservation_info1.maxLayeredImageViewMipLevels = 2;
    object_reservation_info2.maxLayeredImageViewMipLevels = 0;
    object_reservation_info3.maxLayeredImageViewMipLevels = 1;

    auto device = InitDeviceWithCustomObjectReservation(&object_reservation_info3);

    auto image_info = vku::InitStruct<VkImageCreateInfo>();
    image_info.imageType = VK_IMAGE_TYPE_2D;
    image_info.format = VK_FORMAT_R8G8B8A8_UNORM;
    image_info.extent = {128, 128, 1};
    image_info.mipLevels = 6;
    image_info.arrayLayers = 4;
    image_info.tiling = VK_IMAGE_TILING_OPTIMAL;
    image_info.usage = VK_IMAGE_USAGE_TRANSFER_SRC_BIT | VK_IMAGE_USAGE_SAMPLED_BIT;

    VkImage image = VK_NULL_HANDLE;
    ASSERT_EQ(vksc::CreateImage(device, &image_info, nullptr, &image), VK_SUCCESS);

    auto create_info = vku::InitStruct<VkImageViewCreateInfo>();
    create_info.image = image;
    create_info.viewType = VK_IMAGE_VIEW_TYPE_2D_ARRAY;
    create_info.format = image_info.format;
    create_info.subresourceRange = {VK_IMAGE_ASPECT_COLOR_BIT, 2, 3, 2, 1};

    VkImageView image_view = VK_NULL_HANDLE;

    EXPECT_EQ(vksc::CreateImageView(device, &create_info, nullptr, &image_view), VK_SUCCESS);
    vksc::DestroyImageView(device, image_view, nullptr);
    image_view = VK_NULL_HANDLE;

    create_info.subresourceRange.levelCount++;
    EXPECT_EQ(vksc::CreateImageView(device, &create_info, nullptr, &image_view), VK_ERROR_VALIDATION_FAILED);
    vksc::DestroyImageView(device, image_view, nullptr);
    image_view = VK_NULL_HANDLE;

    create_info.subresourceRange.levelCount--;
    create_info.subresourceRange.layerCount++;
    EXPECT_EQ(vksc::CreateImageView(device, &create_info, nullptr, &image_view), VK_ERROR_VALIDATION_FAILED);
    vksc::DestroyImageView(device, image_view, nullptr);
    image_view = VK_NULL_HANDLE;

    create_info.subresourceRange.layerCount--;
    create_info.subresourceRange.levelCount = VK_REMAINING_MIP_LEVELS;
    EXPECT_EQ(vksc::CreateImageView(device, &create_info, nullptr, &image_view), VK_ERROR_VALIDATION_FAILED);
    vksc::DestroyImageView(device, image_view, nullptr);
    image_view = VK_NULL_HANDLE;

    create_info.subresourceRange.layerCount = VK_REMAINING_ARRAY_LAYERS;
    EXPECT_EQ(vksc::CreateImageView(device, &create_info, nullptr, &image_view), VK_ERROR_VALIDATION_FAILED);
    vksc::DestroyImageView(device, image_view, nullptr);
    image_view = VK_NULL_HANDLE;

    create_info.subresourceRange.baseMipLevel = 4;
    create_info.subresourceRange.baseArrayLayer = 3;
    EXPECT_EQ(vksc::CreateImageView(device, &create_info, nullptr, &image_view), VK_SUCCESS);
    vksc::DestroyImageView(device, image_view, nullptr);
    image_view = VK_NULL_HANDLE;
}

TEST_F(ObjectReservationTest, MaxImageViewArrayLayers) {
    TEST_DESCRIPTION("vkCreateImageView - levelCount cannot exceed maxImageViewArrayLayers");

    auto object_reservation_info1 = vku::InitStruct<VkDeviceObjectReservationCreateInfo>();
    auto object_reservation_info2 = vku::InitStruct<VkDeviceObjectReservationCreateInfo>(&object_reservation_info1);
    auto object_reservation_info3 = vku::InitStruct<VkDeviceObjectReservationCreateInfo>(&object_reservation_info2);

    object_reservation_info1.imageRequestCount = 1;
    object_reservation_info1.imageViewRequestCount = 2;
    object_reservation_info1.layeredImageViewRequestCount = 2;

    object_reservation_info1.maxImageViewMipLevels = 6;
    object_reservation_info1.maxLayeredImageViewMipLevels = 6;

    object_reservation_info1.maxImageViewArrayLayers = 3;
    object_reservation_info2.maxImageViewArrayLayers = 1;
    object_reservation_info3.maxImageViewArrayLayers = 5;

    auto device = InitDeviceWithCustomObjectReservation(&object_reservation_info3);

    auto image_info = vku::InitStruct<VkImageCreateInfo>();
    image_info.imageType = VK_IMAGE_TYPE_2D;
    image_info.format = VK_FORMAT_R8G8B8A8_UNORM;
    image_info.extent = {128, 128, 1};
    image_info.mipLevels = 6;
    image_info.arrayLayers = 8;
    image_info.tiling = VK_IMAGE_TILING_OPTIMAL;
    image_info.usage = VK_IMAGE_USAGE_TRANSFER_SRC_BIT | VK_IMAGE_USAGE_SAMPLED_BIT;

    VkImage image = VK_NULL_HANDLE;
    ASSERT_EQ(vksc::CreateImage(device, &image_info, nullptr, &image), VK_SUCCESS);

    auto create_info = vku::InitStruct<VkImageViewCreateInfo>();
    create_info.image = image;
    create_info.viewType = VK_IMAGE_VIEW_TYPE_2D_ARRAY;
    create_info.format = image_info.format;
    create_info.subresourceRange = {VK_IMAGE_ASPECT_COLOR_BIT, 1, 3, 2, 5};

    VkImageView image_view = VK_NULL_HANDLE;

    EXPECT_EQ(vksc::CreateImageView(device, &create_info, nullptr, &image_view), VK_SUCCESS);
    vksc::DestroyImageView(device, image_view, nullptr);
    image_view = VK_NULL_HANDLE;

    create_info.subresourceRange.layerCount++;
    EXPECT_EQ(vksc::CreateImageView(device, &create_info, nullptr, &image_view), VK_ERROR_VALIDATION_FAILED);
    vksc::DestroyImageView(device, image_view, nullptr);
    image_view = VK_NULL_HANDLE;

    create_info.subresourceRange.layerCount = VK_REMAINING_ARRAY_LAYERS;
    EXPECT_EQ(vksc::CreateImageView(device, &create_info, nullptr, &image_view), VK_ERROR_VALIDATION_FAILED);
    vksc::DestroyImageView(device, image_view, nullptr);
    image_view = VK_NULL_HANDLE;

    create_info.subresourceRange.baseArrayLayer = 5;
    EXPECT_EQ(vksc::CreateImageView(device, &create_info, nullptr, &image_view), VK_SUCCESS);
    vksc::DestroyImageView(device, image_view, nullptr);
    image_view = VK_NULL_HANDLE;
}

TEST_F(ObjectReservationTest, MaxQueriesPerPool) {
    TEST_DESCRIPTION("vkCreateQueryPool - queryCount cannot exceed max*QueriesPerPool for the corresponding query type");

    auto object_reservation_info1 = vku::InitStruct<VkDeviceObjectReservationCreateInfo>();
    auto object_reservation_info2 = vku::InitStruct<VkDeviceObjectReservationCreateInfo>(&object_reservation_info1);
    auto object_reservation_info3 = vku::InitStruct<VkDeviceObjectReservationCreateInfo>(&object_reservation_info2);

    object_reservation_info1.queryPoolRequestCount = 9;

    object_reservation_info1.maxOcclusionQueriesPerPool = 16;
    object_reservation_info2.maxOcclusionQueriesPerPool = 0;
    object_reservation_info3.maxOcclusionQueriesPerPool = 4;

    object_reservation_info1.maxPipelineStatisticsQueriesPerPool = 6;
    object_reservation_info2.maxPipelineStatisticsQueriesPerPool = 8;
    object_reservation_info3.maxPipelineStatisticsQueriesPerPool = 2;

    object_reservation_info1.maxTimestampQueriesPerPool = 0;
    object_reservation_info2.maxTimestampQueriesPerPool = 10;
    object_reservation_info3.maxTimestampQueriesPerPool = 20;

    auto perf_query_reservation_info1 = vku::InitStruct<VkPerformanceQueryReservationInfoKHR>(&object_reservation_info3);
    auto perf_query_reservation_info2 = vku::InitStruct<VkPerformanceQueryReservationInfoKHR>(&perf_query_reservation_info1);

    perf_query_reservation_info1.maxPerformanceQueriesPerPool = 1;
    perf_query_reservation_info2.maxPerformanceQueriesPerPool = 3;

    auto device = InitDeviceWithCustomObjectReservation(&perf_query_reservation_info2);

    // Test occlusion queries
    {
        VkQueryPool query_pool = VK_NULL_HANDLE;

        auto create_info = vku::InitStruct<VkQueryPoolCreateInfo>();
        create_info.queryType = VK_QUERY_TYPE_OCCLUSION;
        create_info.queryCount = 16;

        EXPECT_EQ(vksc::CreateQueryPool(device, &create_info, nullptr, &query_pool), VK_SUCCESS);

        create_info.queryCount++;
        EXPECT_EQ(vksc::CreateQueryPool(device, &create_info, nullptr, &query_pool), VK_ERROR_VALIDATION_FAILED);
    }

    // Test pipeline statistics queries
    {
        VkQueryPool query_pool = VK_NULL_HANDLE;

        auto create_info = vku::InitStruct<VkQueryPoolCreateInfo>();
        create_info.queryType = VK_QUERY_TYPE_PIPELINE_STATISTICS;
        create_info.queryCount = 8;
        create_info.pipelineStatistics = VK_QUERY_PIPELINE_STATISTIC_INPUT_ASSEMBLY_VERTICES_BIT;

        EXPECT_EQ(vksc::CreateQueryPool(device, &create_info, nullptr, &query_pool), VK_SUCCESS);

        create_info.queryCount++;
        EXPECT_EQ(vksc::CreateQueryPool(device, &create_info, nullptr, &query_pool), VK_ERROR_VALIDATION_FAILED);
    }

    // Test timestamp queries
    {
        VkQueryPool query_pool = VK_NULL_HANDLE;

        auto create_info = vku::InitStruct<VkQueryPoolCreateInfo>();
        create_info.queryType = VK_QUERY_TYPE_TIMESTAMP;
        create_info.queryCount = 20;

        EXPECT_EQ(vksc::CreateQueryPool(device, &create_info, nullptr, &query_pool), VK_SUCCESS);

        create_info.queryCount++;
        EXPECT_EQ(vksc::CreateQueryPool(device, &create_info, nullptr, &query_pool), VK_ERROR_VALIDATION_FAILED);
    }

    // Test performance queries
    {
        VkQueryPool query_pool = VK_NULL_HANDLE;

        uint32_t perf_counter_index = 0;
        auto perf_info = vku::InitStruct<VkQueryPoolPerformanceCreateInfoKHR>();
        perf_info.counterIndexCount = 1;
        perf_info.pCounterIndices = &perf_counter_index;

        auto create_info = vku::InitStruct<VkQueryPoolCreateInfo>(&perf_info);
        create_info.queryType = VK_QUERY_TYPE_PERFORMANCE_QUERY_KHR;
        create_info.queryCount = 3;

        EXPECT_EQ(vksc::CreateQueryPool(device, &create_info, nullptr, &query_pool), VK_SUCCESS);

        create_info.queryCount++;
        EXPECT_EQ(vksc::CreateQueryPool(device, &create_info, nullptr, &query_pool), VK_ERROR_VALIDATION_FAILED);
    }
}

TEST_F(ObjectReservationTest, MaxImmutableSamplersPerDescriptorSetLayout) {
    TEST_DESCRIPTION(
        "vkCreateDescriptorSetLayout - immutable sampler limit cannot exceed maxImmutableSamplersPerDescriptorSetLayout");

    auto object_reservation_info1 = vku::InitStruct<VkDeviceObjectReservationCreateInfo>();
    auto object_reservation_info2 = vku::InitStruct<VkDeviceObjectReservationCreateInfo>(&object_reservation_info1);
    auto object_reservation_info3 = vku::InitStruct<VkDeviceObjectReservationCreateInfo>(&object_reservation_info2);

    object_reservation_info1.samplerRequestCount = 1;
    object_reservation_info1.descriptorSetLayoutRequestCount = 2;

    object_reservation_info1.descriptorSetLayoutBindingRequestCount = 20;
    object_reservation_info1.descriptorSetLayoutBindingLimit = 10;

    object_reservation_info1.maxImmutableSamplersPerDescriptorSetLayout = 0;
    object_reservation_info2.maxImmutableSamplersPerDescriptorSetLayout = 7;
    object_reservation_info3.maxImmutableSamplersPerDescriptorSetLayout = 5;

    auto device = InitDeviceWithCustomObjectReservation(&object_reservation_info3);

    auto sampler_ci = vku::InitStruct<VkSamplerCreateInfo>();
    VkSampler sampler = VK_NULL_HANDLE;
    ASSERT_EQ(vksc::CreateSampler(device, &sampler_ci, nullptr, &sampler), VK_SUCCESS);

    std::vector<VkSampler> samplers(10, sampler);

    VkDescriptorSetLayoutBinding bindings[] = {
        {0, VK_DESCRIPTOR_TYPE_COMBINED_IMAGE_SAMPLER, 4, VK_SHADER_STAGE_FRAGMENT_BIT, samplers.data()},
        {1, VK_DESCRIPTOR_TYPE_SAMPLER, 1, VK_SHADER_STAGE_FRAGMENT_BIT, samplers.data()},
        {2, VK_DESCRIPTOR_TYPE_UNIFORM_BUFFER, 2, VK_SHADER_STAGE_FRAGMENT_BIT, samplers.data()},
        {3, VK_DESCRIPTOR_TYPE_SAMPLER, 3, VK_SHADER_STAGE_FRAGMENT_BIT, nullptr},
        {4, VK_DESCRIPTOR_TYPE_COMBINED_IMAGE_SAMPLER, 2, VK_SHADER_STAGE_FRAGMENT_BIT, samplers.data()},
        // The bindings below will cause the limit to be exceeded
        {5, VK_DESCRIPTOR_TYPE_COMBINED_IMAGE_SAMPLER, 1, VK_SHADER_STAGE_FRAGMENT_BIT, samplers.data()},
        {6, VK_DESCRIPTOR_TYPE_SAMPLER, 2, VK_SHADER_STAGE_FRAGMENT_BIT, samplers.data()},
    };

    auto create_info = vku::InitStruct<VkDescriptorSetLayoutCreateInfo>();
    create_info.bindingCount = sizeof(bindings) / sizeof(bindings[0]);
    create_info.pBindings = &bindings[0];

    VkDescriptorSetLayout layout = VK_NULL_HANDLE;

    // Should fail with all bindings
    EXPECT_EQ(vksc::CreateDescriptorSetLayout(device, &create_info, nullptr, &layout), VK_ERROR_VALIDATION_FAILED);
    vksc::DestroyDescriptorSetLayout(device, layout, nullptr);
    layout = VK_NULL_HANDLE;

    // Should still fail if we exclude the last binding
    create_info.bindingCount--;
    EXPECT_EQ(vksc::CreateDescriptorSetLayout(device, &create_info, nullptr, &layout), VK_ERROR_VALIDATION_FAILED);
    vksc::DestroyDescriptorSetLayout(device, layout, nullptr);
    layout = VK_NULL_HANDLE;

    // Should succeed if we exclude the last two bindings
    create_info.bindingCount--;
    EXPECT_EQ(vksc::CreateDescriptorSetLayout(device, &create_info, nullptr, &layout), VK_SUCCESS);
    vksc::DestroyDescriptorSetLayout(device, layout, nullptr);
    layout = VK_NULL_HANDLE;
}
