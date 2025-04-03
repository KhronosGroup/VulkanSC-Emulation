/*
 * Copyright (c) 2024-2025 The Khronos Group Inc.
 * Copyright (c) 2024-2025 RasterGrid Kft.
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#include "icd_test_framework.h"
#include "icd_test_pipeline_cache_utils.h"

class PipelineCacheTest : public IcdTest {
  public:
    PipelineCacheTest() : IcdTest{} {}

    VkDevice InitDeviceWithPipelineCaches(PipelineCacheInfo &caches, VkResult expected_result = VK_SUCCESS) {
        BuildPipelineCaches(caches);
        auto create_info = GetDefaultDeviceCreateInfo(&caches.out_object_reservation_info);
        if (expected_result == VK_SUCCESS) {
            return InitDevice(&create_info);
        } else {
            VkDevice device = VK_NULL_HANDLE;
            InitInstance();
            VkResult result = vksc::CreateDevice(GetPhysicalDevice(), &create_info, nullptr, &device);
            EXPECT_EQ(result, expected_result);
            return VK_NULL_HANDLE;
        }
    }
};

TEST_F(PipelineCacheTest, CreateDeviceSingleCache) {
    TEST_DESCRIPTION("Test device creation with single pipeline cache");

    PipelineCacheInfo caches;
    // clang-format off
    caches.in_pipeline_pools = {
        PipelinePoolDesc{65536, 2}
    };
    caches.in_pipeline_caches = {
        PipelineCacheDesc{
            {
                PipelineDesc{
                    "1265a236-e369-11ed-b5ea-0242ac120002",
                    49658,
                    kSampleGraphicsPipelineJson,
                    {
                        CompileSPV(kSampleVertexShaderSpv),
                        CompileSPV(kSampleFragmentShaderSpv)
                    }
                },
                PipelineDesc{
                    "b23d0e5c-70a0-4d67-8781-99ec3798ed31",
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

    VkMockShaderModules mock_shader_modules(caches);

    InitDeviceWithPipelineCaches(caches);
    mock_shader_modules.VerifyShaderModulesCreated();

    EXPECT_EQ(mock_shader_modules.GetTotalShaderModuleCount(), 3);
    EXPECT_EQ(mock_shader_modules.GetShaderModuleCount(0, "1265a236-e369-11ed-b5ea-0242ac120002"), 2);
    EXPECT_EQ(mock_shader_modules.GetShaderModuleCount(0, "b23d0e5c-70a0-4d67-8781-99ec3798ed31"), 1);

    DestroyDevice();
    mock_shader_modules.VerifyShaderModulesDestroyed();
}

TEST_F(PipelineCacheTest, CreateDeviceMultipleCaches) {
    TEST_DESCRIPTION("Test device creation with multiple pipeline caches");

    PipelineCacheInfo caches;
    // clang-format off
    caches.in_pipeline_pools = {
        PipelinePoolDesc{65536, 2}
    };
    caches.in_pipeline_caches = {
        PipelineCacheDesc{
            {
                PipelineDesc{
                    "1265a236-e369-11ed-b5ea-0242ac120002",
                    49658,
                    kSampleGraphicsPipelineJson,
                    {
                        CompileSPV(kSampleVertexShaderSpv),
                        CompileSPV(kSampleFragmentShaderSpv)
                    }
                },
                PipelineDesc{
                    "b23d0e5c-70a0-4d67-8781-99ec3798ed31",
                    6512,
                    kSampleComputePipelineJson,
                    {
                        CompileSPV(kSampleComputeShaderSpv),
                    }
                }
            }
        },
        PipelineCacheDesc{
            {
                PipelineDesc{
                    "b23d0e5c-70a0-4d67-8781-99ec3798ed31",
                    6512,
                    kSampleComputePipelineJson,
                    {
                        CompileSPV(kSampleComputeShaderSpv),
                    }
                }
            }
        },
        PipelineCacheDesc{
            {
                PipelineDesc{
                    "1265a236-e369-11ed-b5ea-0242ac120002",
                    49658,
                    kSampleGraphicsPipelineJson,
                    {
                        CompileSPV(kSampleVertexShaderSpv),
                        CompileSPV(kSampleFragmentShaderSpv)
                    }
                }
            }
        }
    };
    // clang-format on

    VkMockShaderModules mock_shader_modules(caches);

    InitDeviceWithPipelineCaches(caches);
    mock_shader_modules.VerifyShaderModulesCreated();

    EXPECT_EQ(mock_shader_modules.GetTotalShaderModuleCount(), 6);
    EXPECT_EQ(mock_shader_modules.GetShaderModuleCount(0, "1265a236-e369-11ed-b5ea-0242ac120002"), 2);
    EXPECT_EQ(mock_shader_modules.GetShaderModuleCount(0, "b23d0e5c-70a0-4d67-8781-99ec3798ed31"), 1);
    EXPECT_EQ(mock_shader_modules.GetShaderModuleCount(1, "b23d0e5c-70a0-4d67-8781-99ec3798ed31"), 1);
    EXPECT_EQ(mock_shader_modules.GetShaderModuleCount(2, "1265a236-e369-11ed-b5ea-0242ac120002"), 2);

    DestroyDevice();
    mock_shader_modules.VerifyShaderModulesDestroyed();
}

TEST_F(PipelineCacheTest, CreateDeviceInvalidSpirv) {
    TEST_DESCRIPTION("Test device creation with invalid pipeline cache SPIR-V");

    PipelineCacheInfo caches;
    // clang-format off
    caches.in_pipeline_pools = {
        PipelinePoolDesc{65536, 2}
    };
    caches.in_pipeline_caches = {
        PipelineCacheDesc{
            {
                PipelineDesc{
                    "1265a236-e369-11ed-b5ea-0242ac120002",
                    49658,
                    kSampleGraphicsPipelineJson,
                    {
                        CompileSPV(kSampleVertexShaderSpv),
                        { 0xDEADBEEF }
                    }
                },
                PipelineDesc{
                    "b23d0e5c-70a0-4d67-8781-99ec3798ed31",
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

    VkMockShaderModules mock_shader_modules(caches);

    InitDeviceWithPipelineCaches(caches, VK_ERROR_INVALID_PIPELINE_CACHE_DATA);
}

TEST_F(PipelineCacheTest, CreateDeviceDuplicatePipelineUUID) {
    TEST_DESCRIPTION("Test device creation with duplicate pipeline UUID in pipeline cache");

    PipelineCacheInfo caches;
    // clang-format off
    caches.in_pipeline_pools = {
        PipelinePoolDesc{65536, 2}
    };
    caches.in_pipeline_caches = {
        PipelineCacheDesc{
            {
                PipelineDesc{
                    "1265a236-e369-11ed-b5ea-0242ac120002",
                    49658,
                    kSampleGraphicsPipelineJson,
                    {
                        CompileSPV(kSampleVertexShaderSpv),
                        { 0xDEADBEEF }
                    }
                },
                PipelineDesc{
                    "1265a236-e369-11ed-b5ea-0242ac120002",
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

    VkMockShaderModules mock_shader_modules(caches);

    InitDeviceWithPipelineCaches(caches, VK_ERROR_INVALID_PIPELINE_CACHE_DATA);
}

TEST_F(PipelineCacheTest, CreatePipelineCache) {
    TEST_DESCRIPTION("Test basic pipeline cache creation");

    PipelineCacheInfo caches;
    // clang-format off
    caches.in_pipeline_pools = {
        PipelinePoolDesc{65536, 2}
    };
    caches.in_pipeline_caches = {
        PipelineCacheDesc{
            {
                PipelineDesc{
                    "1265a236-e369-11ed-b5ea-0242ac120002",
                    49658,
                    kSampleGraphicsPipelineJson,
                    {
                        CompileSPV(kSampleVertexShaderSpv),
                        CompileSPV(kSampleFragmentShaderSpv)
                    }
                },
                PipelineDesc{
                    "b23d0e5c-70a0-4d67-8781-99ec3798ed31",
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

    VkMockShaderModules mock_shader_modules(caches);

    auto device = InitDeviceWithPipelineCaches(caches);

    vkmock::CreatePipelineCache = [&](auto, auto, auto, auto) {
        // We should never actually create Vulkan pipeline caches
        EXPECT_TRUE(false);
        return VK_ERROR_INITIALIZATION_FAILED;
    };

    VkPipelineCache cache1 = VK_NULL_HANDLE;
    ASSERT_EQ(vksc::CreatePipelineCache(device, &caches.out_pipeline_cache_create_info[0], nullptr, &cache1), VK_SUCCESS);
    EXPECT_NE(cache1, VK_NULL_HANDLE);

    VkPipelineCache cache2 = VK_NULL_HANDLE;
    ASSERT_EQ(vksc::CreatePipelineCache(device, &caches.out_pipeline_cache_create_info[0], nullptr, &cache2), VK_SUCCESS);
    EXPECT_NE(cache2, VK_NULL_HANDLE);

    // We are allowed to return the same handle for both object
    EXPECT_EQ(cache1, cache2);

    vkmock::DestroyPipelineCache = [&](auto, auto, auto) {
        // We should never actually destroy Vulkan pipeline caches
        EXPECT_TRUE(false);
        return VK_ERROR_INITIALIZATION_FAILED;
    };

    vksc::DestroyPipelineCache(device, cache1, nullptr);
    vksc::DestroyPipelineCache(device, cache2, nullptr);

    DestroyDevice();
}

TEST_F(PipelineCacheTest, CreatePipelineCacheUnknown) {
    TEST_DESCRIPTION("Test pipeline cache creation referring to unknown pipeline cache data");

    PipelineCacheInfo caches;
    // clang-format off
    caches.in_pipeline_pools = {
        PipelinePoolDesc{65536, 2}
    };
    caches.in_pipeline_caches = {
        PipelineCacheDesc{
            {
                PipelineDesc{
                    "1265a236-e369-11ed-b5ea-0242ac120002",
                    49658,
                    kSampleGraphicsPipelineJson,
                    {
                        CompileSPV(kSampleVertexShaderSpv),
                        CompileSPV(kSampleFragmentShaderSpv)
                    }
                },
                PipelineDesc{
                    "b23d0e5c-70a0-4d67-8781-99ec3798ed31",
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

    auto device = InitDevice();

    BuildPipelineCaches(caches);

    VkPipelineCache cache = VK_NULL_HANDLE;
    ASSERT_EQ(vksc::CreatePipelineCache(device, &caches.out_pipeline_cache_create_info[0], nullptr, &cache),
              VK_ERROR_INVALID_PIPELINE_CACHE_DATA);
}

TEST_F(PipelineCacheTest, CreateGraphicsPipelines) {
    TEST_DESCRIPTION("Test graphics pipeline creation");

    const char *pipeline_uuid = "1265a236-e369-11ed-b5ea-0242ac120002";

    PipelineCacheInfo caches;
    // clang-format off
    caches.in_pipeline_pools = {
        PipelinePoolDesc{65536, 3}
    };
    caches.in_pipeline_caches = {
        PipelineCacheDesc{
            {
                PipelineDesc{
                    pipeline_uuid,
                    49658,
                    kSampleGraphicsPipelineJson,
                    {
                        CompileSPV(kSampleVertexShaderSpv),
                        CompileSPV(kSampleFragmentShaderSpv)
                    }
                }
            }
        }
    };
    // clang-format on

    VkMockShaderModules mock_shader_modules(caches);

    auto device = InitDeviceWithPipelineCaches(caches);

    auto vertex_shader = mock_shader_modules.GetShaderModule(0, pipeline_uuid, 0);
    EXPECT_NE(vertex_shader, VK_NULL_HANDLE);

    auto fragment_shader = mock_shader_modules.GetShaderModule(0, pipeline_uuid, 1);
    EXPECT_NE(fragment_shader, VK_NULL_HANDLE);

    VkPipelineCache cache = VK_NULL_HANDLE;
    ASSERT_EQ(vksc::CreatePipelineCache(device, &caches.out_pipeline_cache_create_info[0], nullptr, &cache), VK_SUCCESS);

    VkMockObject<VkPipeline> mock_pipelines[3] = {};

    // CreateGraphicsPipelines is called multiple times, once for each requested pipeline
    uint32_t num_calls = 0;
    vkmock::CreateGraphicsPipelines = [&](auto, auto pipelineCache, auto createInfoCount, auto pCreateInfos, auto,
                                          auto pPipelines) {
        // VkPipelineOfflineCreateInfo should not be passed down to the Vulkan driver
        EXPECT_EQ(vku::FindStructInPNextChain<VkPipelineOfflineCreateInfo>(pCreateInfos[0].pNext), nullptr);

        if (num_calls < 3) {
            pPipelines[0] = mock_pipelines[num_calls].handle();
        }
        num_calls++;

        // No pipeline cache should be sent down to the Vulkan stack
        EXPECT_EQ(pipelineCache, VK_NULL_HANDLE);

        EXPECT_EQ(pCreateInfos[0].basePipelineHandle, VK_NULL_HANDLE);
        EXPECT_EQ(pCreateInfos[0].basePipelineIndex, -1);

        EXPECT_EQ(createInfoCount, 1);
        EXPECT_EQ(pCreateInfos[0].stageCount, 2);

        EXPECT_EQ(pCreateInfos[0].pStages[0].stage, VK_SHADER_STAGE_VERTEX_BIT);
        EXPECT_EQ(pCreateInfos[0].pStages[0].module, vertex_shader);
        EXPECT_STREQ(pCreateInfos[0].pStages[0].pName, "main");

        EXPECT_EQ(pCreateInfos[0].pStages[1].stage, VK_SHADER_STAGE_FRAGMENT_BIT);
        EXPECT_EQ(pCreateInfos[0].pStages[1].module, fragment_shader);
        EXPECT_STREQ(pCreateInfos[0].pStages[1].pName, "main");

        // Specialization info should be removed as the pipeline cache SPIR-V binaries are already specialized
        EXPECT_EQ(pCreateInfos[0].pStages[0].pSpecializationInfo, nullptr);
        EXPECT_EQ(pCreateInfos[0].pStages[1].pSpecializationInfo, nullptr);

        return VK_SUCCESS;
    };

    VkSpecializationInfo specialization_info{};

    std::vector<VkPipelineShaderStageCreateInfo> stage_infos(2, vku::InitStruct<VkPipelineShaderStageCreateInfo>());
    stage_infos[0].stage = VK_SHADER_STAGE_VERTEX_BIT;
    stage_infos[0].pSpecializationInfo = &specialization_info;
    stage_infos[1].stage = VK_SHADER_STAGE_FRAGMENT_BIT;
    stage_infos[1].pSpecializationInfo = &specialization_info;

    auto offline_info = vku::InitStruct<VkPipelineOfflineCreateInfo>();
    utils::UUID(pipeline_uuid).CopyToArray(offline_info.pipelineIdentifier);
    offline_info.matchControl = VK_PIPELINE_MATCH_CONTROL_APPLICATION_UUID_EXACT_MATCH;
    offline_info.poolEntrySize = 65536;

    std::vector<VkGraphicsPipelineCreateInfo> create_infos(3, vku::InitStruct<VkGraphicsPipelineCreateInfo>(&offline_info));
    for (auto &create_info : create_infos) {
        create_info.stageCount = 2;
        create_info.pStages = stage_infos.data();
    }

    VkPipeline pipelines[3] = {};
    ASSERT_EQ(vksc::CreateGraphicsPipelines(device, cache, 3, create_infos.data(), nullptr, pipelines), VK_SUCCESS);

    EXPECT_NE(pipelines[0], VK_NULL_HANDLE);
    EXPECT_NE(pipelines[1], VK_NULL_HANDLE);
    EXPECT_NE(pipelines[2], VK_NULL_HANDLE);

    EXPECT_EQ(num_calls, 3);

    for (uint32_t i = 0; i < 3; ++i) {
        vkmock::DestroyPipeline = [&](auto, auto pipeline, auto) { EXPECT_EQ(pipeline, mock_pipelines[i].handle()); };

        vksc::DestroyPipeline(device, pipelines[i], nullptr);
    }

    vksc::DestroyPipelineCache(device, cache, nullptr);

    DestroyDevice();
}

TEST_F(PipelineCacheTest, CreateComputePipelines) {
    TEST_DESCRIPTION("Test compute pipeline creation");

    const char *pipeline_uuid = "b23d0e5c-70a0-4d67-8781-99ec3798ed31";

    PipelineCacheInfo caches;
    // clang-format off
    caches.in_pipeline_pools = {
        PipelinePoolDesc{8192, 3}
    };
    caches.in_pipeline_caches = {
        PipelineCacheDesc{
            {
                PipelineDesc{
                    pipeline_uuid,
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

    VkMockShaderModules mock_shader_modules(caches);

    auto device = InitDeviceWithPipelineCaches(caches);

    auto compute_shader = mock_shader_modules.GetShaderModule(0, pipeline_uuid, 0);
    EXPECT_NE(compute_shader, VK_NULL_HANDLE);

    VkPipelineCache cache = VK_NULL_HANDLE;
    ASSERT_EQ(vksc::CreatePipelineCache(device, &caches.out_pipeline_cache_create_info[0], nullptr, &cache), VK_SUCCESS);

    VkMockObject<VkPipeline> mock_pipelines[3] = {};

    // CreateComputePipelines is called multiple times, once for each requested pipeline
    uint32_t num_calls = 0;
    vkmock::CreateComputePipelines = [&](auto, auto pipelineCache, auto createInfoCount, auto pCreateInfos, auto, auto pPipelines) {
        // VkPipelineOfflineCreateInfo should not be passed down to the Vulkan driver
        EXPECT_EQ(vku::FindStructInPNextChain<VkPipelineOfflineCreateInfo>(pCreateInfos[0].pNext), nullptr);

        if (num_calls < 3) {
            pPipelines[0] = mock_pipelines[num_calls].handle();
        }
        num_calls++;

        // No pipeline cache should be sent down to the Vulkan stack
        EXPECT_EQ(pipelineCache, VK_NULL_HANDLE);

        EXPECT_EQ(pCreateInfos[0].basePipelineHandle, VK_NULL_HANDLE);
        EXPECT_EQ(pCreateInfos[0].basePipelineIndex, -1);

        EXPECT_EQ(createInfoCount, 1);
        EXPECT_EQ(pCreateInfos[0].stage.stage, VK_SHADER_STAGE_COMPUTE_BIT);
        EXPECT_EQ(pCreateInfos[0].stage.module, compute_shader);
        EXPECT_STREQ(pCreateInfos[0].stage.pName, "main");

        // Specialization info should be removed as the pipeline cache SPIR-V binaries are already specialized
        EXPECT_EQ(pCreateInfos[0].stage.pSpecializationInfo, nullptr);

        return VK_SUCCESS;
    };

    auto offline_info = vku::InitStruct<VkPipelineOfflineCreateInfo>();
    utils::UUID(pipeline_uuid).CopyToArray(offline_info.pipelineIdentifier);
    offline_info.matchControl = VK_PIPELINE_MATCH_CONTROL_APPLICATION_UUID_EXACT_MATCH;
    offline_info.poolEntrySize = 8192;

    VkSpecializationInfo specialization_info{};

    std::vector<VkComputePipelineCreateInfo> create_infos(3, vku::InitStruct<VkComputePipelineCreateInfo>(&offline_info));
    for (auto &create_info : create_infos) {
        create_info.stage.stage = VK_SHADER_STAGE_COMPUTE_BIT;
        create_info.stage.pSpecializationInfo = &specialization_info;
    }

    VkPipeline pipelines[3] = {};
    ASSERT_EQ(vksc::CreateComputePipelines(device, cache, 3, create_infos.data(), nullptr, pipelines), VK_SUCCESS);

    EXPECT_NE(pipelines[0], VK_NULL_HANDLE);
    EXPECT_NE(pipelines[1], VK_NULL_HANDLE);
    EXPECT_NE(pipelines[2], VK_NULL_HANDLE);

    EXPECT_EQ(num_calls, 3);

    for (uint32_t i = 0; i < 3; ++i) {
        vkmock::DestroyPipeline = [&](auto, auto pipeline, auto) { EXPECT_EQ(pipeline, mock_pipelines[i].handle()); };

        vksc::DestroyPipeline(device, pipelines[i], nullptr);
    }

    vksc::DestroyPipelineCache(device, cache, nullptr);

    DestroyDevice();
}

TEST_F(PipelineCacheTest, PipelinePoolUsage) {
    TEST_DESCRIPTION("Test pipeline pool exhaustion o");

    PipelineCacheInfo caches;
    // clang-format off
    caches.in_pipeline_pools = {
        PipelinePoolDesc{65536, 5},
        PipelinePoolDesc{32768, 4},
        PipelinePoolDesc{8192, 3}
    };
    caches.in_pipeline_caches = {
        PipelineCacheDesc{
            {
                PipelineDesc{
                    "1265a236-e369-11ed-b5ea-0242ac120002",
                    49658,
                    kSampleGraphicsPipelineJson,
                    {
                        CompileSPV(kSampleVertexShaderSpv),
                        CompileSPV(kSampleFragmentShaderSpv)
                    }
                },
                PipelineDesc{
                    "3ddda923-b6fc-433e-803c-822c1bccbc05",
                    25536,
                    kSampleComputePipelineJson,
                    {
                        CompileSPV(kSampleComputeShaderSpv),
                    }
                },
                PipelineDesc{
                    "b23d0e5c-70a0-4d67-8781-99ec3798ed31",
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

    VkMockShaderModules mock_shader_modules(caches);

    auto device = InitDeviceWithPipelineCaches(caches);

    VkPipelineCache cache = VK_NULL_HANDLE;
    ASSERT_EQ(vksc::CreatePipelineCache(device, &caches.out_pipeline_cache_create_info[0], nullptr, &cache), VK_SUCCESS);

    std::unordered_map<VkPipeline, std::unique_ptr<VkMockObject<VkPipeline>>> vkmock_pipelines{};
    vkmock::CreateComputePipelines = [&](auto, auto pipelineCache, auto createInfoCount, auto pCreateInfos, auto, auto pPipelines) {
        auto mock_pipeline = std::make_unique<VkMockObject<VkPipeline>>();
        pPipelines[0] = mock_pipeline->handle();
        vkmock_pipelines[pPipelines[0]] = std::move(mock_pipeline);
        return VK_SUCCESS;
    };
    vkmock::CreateGraphicsPipelines = [&](auto, auto pipelineCache, auto createInfoCount, auto pCreateInfos, auto,
                                          auto pPipelines) {
        auto mock_pipeline = std::make_unique<VkMockObject<VkPipeline>>();
        pPipelines[0] = mock_pipeline->handle();
        vkmock_pipelines[pPipelines[0]] = std::move(mock_pipeline);
        return VK_SUCCESS;
    };
    vkmock::DestroyPipeline = [&](auto, auto pipeline, auto) { vkmock_pipelines.erase(pipeline); };

    auto offline_info = vku::InitStruct<VkPipelineOfflineCreateInfo>();
    offline_info.matchControl = VK_PIPELINE_MATCH_CONTROL_APPLICATION_UUID_EXACT_MATCH;

    std::vector<VkComputePipelineCreateInfo> compute_ci(10, vku::InitStruct<VkComputePipelineCreateInfo>(&offline_info));
    for (auto &create_info : compute_ci) {
        create_info.stage.stage = VK_SHADER_STAGE_COMPUTE_BIT;
    }

    std::vector<VkPipelineShaderStageCreateInfo> stage_infos(2, vku::InitStruct<VkPipelineShaderStageCreateInfo>());
    stage_infos[0].stage = VK_SHADER_STAGE_VERTEX_BIT;
    stage_infos[1].stage = VK_SHADER_STAGE_FRAGMENT_BIT;

    std::vector<VkGraphicsPipelineCreateInfo> graphics_ci(10, vku::InitStruct<VkGraphicsPipelineCreateInfo>(&offline_info));
    for (auto &create_info : graphics_ci) {
        create_info.stageCount = 2;
        create_info.pStages = stage_infos.data();
    }

    std::vector<VkPipeline> pipelines_64k_pool{};
    std::vector<VkPipeline> pipelines_32k_pool{};
    std::vector<VkPipeline> pipelines_8k_pool{};
    VkPipeline pipelines[10] = {};

    // Attempt to create pipeline with non-existend pool size
    offline_info.poolEntrySize = 99999;

    utils::UUID("1265a236-e369-11ed-b5ea-0242ac120002").CopyToArray(offline_info.pipelineIdentifier);
    ASSERT_EQ(vksc::CreateGraphicsPipelines(device, cache, 2, graphics_ci.data(), nullptr, pipelines), VK_ERROR_OUT_OF_POOL_MEMORY);
    EXPECT_EQ(pipelines[0], VK_NULL_HANDLE);
    EXPECT_EQ(pipelines[1], VK_NULL_HANDLE);

    utils::UUID("b23d0e5c-70a0-4d67-8781-99ec3798ed31").CopyToArray(offline_info.pipelineIdentifier);
    ASSERT_EQ(vksc::CreateComputePipelines(device, cache, 2, compute_ci.data(), nullptr, pipelines), VK_ERROR_OUT_OF_POOL_MEMORY);
    EXPECT_EQ(pipelines[0], VK_NULL_HANDLE);
    EXPECT_EQ(pipelines[1], VK_NULL_HANDLE);

    // Attempt to create pipeline with a smaller pool size than the memory size requirements of the pipeline
    utils::UUID("1265a236-e369-11ed-b5ea-0242ac120002").CopyToArray(offline_info.pipelineIdentifier);
    offline_info.poolEntrySize = 32768;
    ASSERT_EQ(vksc::CreateGraphicsPipelines(device, cache, 2, graphics_ci.data(), nullptr, pipelines), VK_ERROR_OUT_OF_POOL_MEMORY);
    EXPECT_EQ(pipelines[0], VK_NULL_HANDLE);
    EXPECT_EQ(pipelines[1], VK_NULL_HANDLE);

    utils::UUID("3ddda923-b6fc-433e-803c-822c1bccbc05").CopyToArray(offline_info.pipelineIdentifier);
    offline_info.poolEntrySize = 8192;
    ASSERT_EQ(vksc::CreateComputePipelines(device, cache, 2, compute_ci.data(), nullptr, pipelines), VK_ERROR_OUT_OF_POOL_MEMORY);
    EXPECT_EQ(pipelines[0], VK_NULL_HANDLE);
    EXPECT_EQ(pipelines[1], VK_NULL_HANDLE);

    // Create multiple pipelines exhausing 32K pools
    offline_info.poolEntrySize = 32768;

    utils::UUID("3ddda923-b6fc-433e-803c-822c1bccbc05").CopyToArray(offline_info.pipelineIdentifier);
    ASSERT_EQ(vksc::CreateComputePipelines(device, cache, 3, compute_ci.data(), nullptr, pipelines), VK_SUCCESS);
    pipelines_32k_pool.push_back(pipelines[0]);
    pipelines_32k_pool.push_back(pipelines[1]);
    pipelines_32k_pool.push_back(pipelines[2]);

    utils::UUID("b23d0e5c-70a0-4d67-8781-99ec3798ed31").CopyToArray(offline_info.pipelineIdentifier);
    ASSERT_EQ(vksc::CreateComputePipelines(device, cache, 1, compute_ci.data(), nullptr, pipelines), VK_SUCCESS);
    pipelines_32k_pool.push_back(pipelines[0]);

    // Further attempts to create pipelines from 32K pools will fail
    for (uint32_t i = 0; i < 2; ++i) {
        ASSERT_EQ(vksc::CreateComputePipelines(device, cache, 1, compute_ci.data(), nullptr, pipelines),
                  VK_ERROR_OUT_OF_POOL_MEMORY);
    }

    // But still can use the 8K pools
    offline_info.poolEntrySize = 8192;
    utils::UUID("b23d0e5c-70a0-4d67-8781-99ec3798ed31").CopyToArray(offline_info.pipelineIdentifier);

    for (uint32_t i = 0; i < 3; ++i) {
        ASSERT_EQ(vksc::CreateComputePipelines(device, cache, 1, compute_ci.data(), nullptr, pipelines), VK_SUCCESS);
        pipelines_8k_pool.push_back(pipelines[0]);
    }

    // Further attempts to create pipelines from 8K pools will also fail
    for (uint32_t i = 0; i < 2; ++i) {
        ASSERT_EQ(vksc::CreateComputePipelines(device, cache, 1, compute_ci.data(), nullptr, pipelines),
                  VK_ERROR_OUT_OF_POOL_MEMORY);
    }

    // Finally, fill up the 64K pools
    offline_info.poolEntrySize = 65536;

    utils::UUID("b23d0e5c-70a0-4d67-8781-99ec3798ed31").CopyToArray(offline_info.pipelineIdentifier);
    ASSERT_EQ(vksc::CreateComputePipelines(device, cache, 2, compute_ci.data(), nullptr, pipelines), VK_SUCCESS);
    pipelines_64k_pool.push_back(pipelines[0]);
    pipelines_64k_pool.push_back(pipelines[1]);

    utils::UUID("1265a236-e369-11ed-b5ea-0242ac120002").CopyToArray(offline_info.pipelineIdentifier);
    ASSERT_EQ(vksc::CreateGraphicsPipelines(device, cache, 3, graphics_ci.data(), nullptr, pipelines), VK_SUCCESS);
    pipelines_64k_pool.push_back(pipelines[0]);
    pipelines_64k_pool.push_back(pipelines[1]);
    pipelines_64k_pool.push_back(pipelines[2]);

    // Fail subsequent attempts to use 64K pools
    for (uint32_t i = 0; i < 3; ++i) {
        utils::UUID("1265a236-e369-11ed-b5ea-0242ac120002").CopyToArray(offline_info.pipelineIdentifier);
        ASSERT_EQ(vksc::CreateGraphicsPipelines(device, cache, i + 1, graphics_ci.data(), nullptr, pipelines),
                  VK_ERROR_OUT_OF_POOL_MEMORY);

        utils::UUID("b23d0e5c-70a0-4d67-8781-99ec3798ed31").CopyToArray(offline_info.pipelineIdentifier);
        ASSERT_EQ(vksc::CreateComputePipelines(device, cache, i + 1, compute_ci.data(), nullptr, pipelines),
                  VK_ERROR_OUT_OF_POOL_MEMORY);
    }

    // Free up a 32K slot
    vksc::DestroyPipeline(device, pipelines_32k_pool.back(), nullptr);
    pipelines_32k_pool.pop_back();

    // 8K slots are still full
    offline_info.poolEntrySize = 8192;
    utils::UUID("b23d0e5c-70a0-4d67-8781-99ec3798ed31").CopyToArray(offline_info.pipelineIdentifier);
    ASSERT_EQ(vksc::CreateComputePipelines(device, cache, 1, compute_ci.data(), nullptr, pipelines), VK_ERROR_OUT_OF_POOL_MEMORY);

    // So are 64K slots
    offline_info.poolEntrySize = 65536;

    utils::UUID("1265a236-e369-11ed-b5ea-0242ac120002").CopyToArray(offline_info.pipelineIdentifier);
    ASSERT_EQ(vksc::CreateGraphicsPipelines(device, cache, 1, graphics_ci.data(), nullptr, pipelines), VK_ERROR_OUT_OF_POOL_MEMORY);

    utils::UUID("b23d0e5c-70a0-4d67-8781-99ec3798ed31").CopyToArray(offline_info.pipelineIdentifier);
    ASSERT_EQ(vksc::CreateComputePipelines(device, cache, 1, compute_ci.data(), nullptr, pipelines), VK_ERROR_OUT_OF_POOL_MEMORY);

    // But one 32K slot can be reused
    offline_info.poolEntrySize = 32768;

    utils::UUID("3ddda923-b6fc-433e-803c-822c1bccbc05").CopyToArray(offline_info.pipelineIdentifier);
    ASSERT_EQ(vksc::CreateComputePipelines(device, cache, 1, compute_ci.data(), nullptr, pipelines), VK_SUCCESS);
    pipelines_32k_pool.push_back(pipelines[0]);

    // Then it will fail again
    ASSERT_EQ(vksc::CreateComputePipelines(device, cache, 1, compute_ci.data(), nullptr, pipelines), VK_ERROR_OUT_OF_POOL_MEMORY);

    // Do the same with freeing up 2 8K slots and 1 64K slot this time
    vksc::DestroyPipeline(device, pipelines_8k_pool.back(), nullptr);
    pipelines_8k_pool.pop_back();
    vksc::DestroyPipeline(device, pipelines_8k_pool.back(), nullptr);
    pipelines_8k_pool.pop_back();

    vksc::DestroyPipeline(device, pipelines_64k_pool.back(), nullptr);
    pipelines_64k_pool.pop_back();

    // ... then reuse them and run out again

    offline_info.poolEntrySize = 8192;
    utils::UUID("b23d0e5c-70a0-4d67-8781-99ec3798ed31").CopyToArray(offline_info.pipelineIdentifier);
    ASSERT_EQ(vksc::CreateComputePipelines(device, cache, 1, compute_ci.data(), nullptr, pipelines), VK_SUCCESS);
    pipelines_8k_pool.push_back(pipelines[0]);

    offline_info.poolEntrySize = 32768;
    ASSERT_EQ(vksc::CreateComputePipelines(device, cache, 1, compute_ci.data(), nullptr, pipelines), VK_ERROR_OUT_OF_POOL_MEMORY);

    offline_info.poolEntrySize = 65536;
    ASSERT_EQ(vksc::CreateComputePipelines(device, cache, 1, compute_ci.data(), nullptr, pipelines), VK_SUCCESS);
    pipelines_64k_pool.push_back(pipelines[0]);

    ASSERT_EQ(vksc::CreateComputePipelines(device, cache, 1, compute_ci.data(), nullptr, pipelines), VK_ERROR_OUT_OF_POOL_MEMORY);

    utils::UUID("1265a236-e369-11ed-b5ea-0242ac120002").CopyToArray(offline_info.pipelineIdentifier);
    ASSERT_EQ(vksc::CreateGraphicsPipelines(device, cache, 1, graphics_ci.data(), nullptr, pipelines), VK_ERROR_OUT_OF_POOL_MEMORY);

    offline_info.poolEntrySize = 8192;
    utils::UUID("b23d0e5c-70a0-4d67-8781-99ec3798ed31").CopyToArray(offline_info.pipelineIdentifier);
    ASSERT_EQ(vksc::CreateComputePipelines(device, cache, 1, compute_ci.data(), nullptr, pipelines), VK_SUCCESS);
    pipelines_8k_pool.push_back(pipelines[0]);

    ASSERT_EQ(vksc::CreateComputePipelines(device, cache, 1, compute_ci.data(), nullptr, pipelines), VK_ERROR_OUT_OF_POOL_MEMORY);

    // Finally free up everything
    for (auto pipeline : pipelines_64k_pool) {
        vksc::DestroyPipeline(device, pipeline, nullptr);
    }
    for (auto pipeline : pipelines_32k_pool) {
        vksc::DestroyPipeline(device, pipeline, nullptr);
    }
    for (auto pipeline : pipelines_8k_pool) {
        vksc::DestroyPipeline(device, pipeline, nullptr);
    }

    vksc::DestroyPipelineCache(device, cache, nullptr);

    DestroyDevice();
}
