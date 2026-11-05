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

TEST_F(PipelineCacheTest, ShaderModuleCreation) {
    TEST_DESCRIPTION("Test shader module handling");

    PipelineCacheInfo caches;
    // clang-format off
    caches.in_pipeline_pools = {
        PipelinePoolDesc{65536, 8},
        PipelinePoolDesc{8192, 8}
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
                    "b23d0e5c-70a0-4d67-8781-99ec3798cd31",
                    6512,
                    kSampleComputePipelineJson,
                    {
                        CompileSPV(kSampleComputeShaderSpv2),
                    }
                }
            }
        },
        PipelineCacheDesc{
            {
                PipelineDesc{
                    "1265a236-e369-11ed-b5ea-0242ac121402",
                    49658,
                    kSampleGraphicsPipelineJson,
                    {
                        CompileSPV(kSampleVertexShaderSpv2),
                        CompileSPV(kSampleFragmentShaderSpv2)
                    }
                }
            }
        }
    };
    // clang-format on

    VkMockShaderModules mock_shader_modules(caches);

    VkMockObjects<VkPipelineCache> mock_pipeline_caches{};
    mock_pipeline_caches.Reset(4);
    vkmock::CreatePipelineCache = [&](auto, auto, auto, auto pHandle) {
        *pHandle = mock_pipeline_caches.Alloc();
        return VK_SUCCESS;
    };
    vkmock::DestroyPipelineCache = [&](auto, auto handle, auto) { mock_pipeline_caches.Free(handle); };

    VkMockObjects<VkPipeline> mock_pipelines{};
    mock_pipelines.Reset(32);
    vkmock::CreateGraphicsPipelines = [&](auto, auto, auto count, auto, auto, auto pHandles) {
        for (uint32_t i = 0; i < count; ++i) {
            pHandles[i] = mock_pipelines.Alloc();
        }
        return VK_SUCCESS;
    };
    vkmock::CreateComputePipelines = [&](auto, auto, auto count, auto, auto, auto pHandles) {
        for (uint32_t i = 0; i < count; ++i) {
            pHandles[i] = mock_pipelines.Alloc();
        }
        return VK_SUCCESS;
    };
    vkmock::DestroyPipeline = [&](auto, auto handle, auto) { mock_pipelines.Free(handle); };

    // Shader modules are not instantiated at device create time as SPIR-V validation can only
    // happen at pipeline creation time, therefore shader module creation also has to be delayed
    auto device = InitDeviceWithPipelineCaches(caches);
    EXPECT_EQ(mock_shader_modules.GetTotalShaderModuleCount(), 0);

    // Shader modules are also not instantiated at pipeline cache creation time
    std::vector<VkPipelineCache> pipeline_caches(caches.in_pipeline_caches.size(), VK_NULL_HANDLE);
    for (uint32_t i = 0; i < pipeline_caches.size(); ++i) {
        ASSERT_EQ(vksc::CreatePipelineCache(device, &caches.out_pipeline_cache_create_info[i], nullptr, &pipeline_caches[i]),
                  VK_SUCCESS);
        EXPECT_NE(pipeline_caches[i], VK_NULL_HANDLE);
        EXPECT_EQ(mock_shader_modules.GetTotalShaderModuleCount(), 0);
    }
    EXPECT_EQ(mock_shader_modules.GetTotalShaderModuleCount(), 0);

    // Shader modules are instantiated when vkCreate*Pipelines is called but only once
    std::vector<VkPipelineShaderStageCreateInfo> stage_infos(2, vku::InitStruct<VkPipelineShaderStageCreateInfo>());
    stage_infos[0].stage = VK_SHADER_STAGE_VERTEX_BIT;
    stage_infos[1].stage = VK_SHADER_STAGE_FRAGMENT_BIT;

    std::vector<VkPipelineOfflineCreateInfo> graphics_offline_infos(2, vku::InitStruct<VkPipelineOfflineCreateInfo>());
    for (auto &offline_info : graphics_offline_infos) {
        offline_info.matchControl = VK_PIPELINE_MATCH_CONTROL_APPLICATION_UUID_EXACT_MATCH;
        offline_info.poolEntrySize = 65536;
    }
    utils::UUID(caches.in_pipeline_caches[0].pipelines[0].uuid).CopyToArray(graphics_offline_infos[0].pipelineIdentifier);
    utils::UUID(caches.in_pipeline_caches[2].pipelines[0].uuid).CopyToArray(graphics_offline_infos[1].pipelineIdentifier);

    std::vector<VkGraphicsPipelineCreateInfo> graphics_create_infos(3, vku::InitStruct<VkGraphicsPipelineCreateInfo>());
    for (auto &create_info : graphics_create_infos) {
        create_info.stageCount = 2;
        create_info.pStages = stage_infos.data();
    }

    std::vector<VkPipelineOfflineCreateInfo> compute_offline_infos(2, vku::InitStruct<VkPipelineOfflineCreateInfo>());
    for (auto &offline_info : compute_offline_infos) {
        offline_info.matchControl = VK_PIPELINE_MATCH_CONTROL_APPLICATION_UUID_EXACT_MATCH;
        offline_info.poolEntrySize = 8192;
    }
    utils::UUID(caches.in_pipeline_caches[0].pipelines[1].uuid).CopyToArray(compute_offline_infos[0].pipelineIdentifier);
    utils::UUID(caches.in_pipeline_caches[1].pipelines[0].uuid).CopyToArray(compute_offline_infos[1].pipelineIdentifier);

    std::vector<VkComputePipelineCreateInfo> compute_create_infos(3, vku::InitStruct<VkComputePipelineCreateInfo>());
    for (auto &create_info : compute_create_infos) {
        create_info.stage.stage = VK_SHADER_STAGE_COMPUTE_BIT;
    }

    // Create graphics pipeline from cache #0
    VkPipeline pipeline = VK_NULL_HANDLE;
    graphics_create_infos[0].pNext = &graphics_offline_infos[0];
    ASSERT_EQ(vksc::CreateGraphicsPipelines(device, pipeline_caches[0], 1, &graphics_create_infos[0], nullptr, &pipeline),
              VK_SUCCESS);
    EXPECT_NE(pipeline, VK_NULL_HANDLE);

    // At this point the 2 shaders in the pipeline should be instantiated
    EXPECT_EQ(mock_shader_modules.GetTotalShaderModuleCount(), 2);
    EXPECT_EQ(mock_shader_modules.GetShaderModuleCount(0, "1265a236-e369-11ed-b5ea-0242ac120002"), 2);
    EXPECT_EQ(mock_shader_modules.GetShaderModuleCount(0, "b23d0e5c-70a0-4d67-8781-99ec3798ed31"), 0);
    EXPECT_EQ(mock_shader_modules.GetShaderModuleCount(1, "b23d0e5c-70a0-4d67-8781-99ec3798cd31"), 0);
    EXPECT_EQ(mock_shader_modules.GetShaderModuleCount(2, "1265a236-e369-11ed-b5ea-0242ac121402"), 0);

    // Creating multiple instances of the same pipeline does not increase the shader module count
    for (uint32_t i = 0; i < 5; ++i) {
        VkPipeline additional_pipeline_instance = VK_NULL_HANDLE;
        ASSERT_EQ(vksc::CreateGraphicsPipelines(device, pipeline_caches[0], 1, &graphics_create_infos[0], nullptr,
                                                &additional_pipeline_instance),
                  VK_SUCCESS);
        EXPECT_NE(additional_pipeline_instance, VK_NULL_HANDLE);
        EXPECT_EQ(mock_shader_modules.GetTotalShaderModuleCount(), 2);
        EXPECT_EQ(mock_shader_modules.GetShaderModuleCount(0, "1265a236-e369-11ed-b5ea-0242ac120002"), 2);
        vksc::DestroyPipeline(device, additional_pipeline_instance, nullptr);
    }

    // Destroying all pipeline instances does not destroy the shader modules (they remain cached)
    vksc::DestroyPipeline(device, pipeline, nullptr);
    EXPECT_EQ(mock_shader_modules.GetTotalShaderModuleCount(), 2);
    pipeline = VK_NULL_HANDLE;

    // Now we create the graphics pipeline from cache #2, multiple at once
    std::vector<VkPipeline> pipelines(graphics_create_infos.size(), VK_NULL_HANDLE);
    for (size_t i = 0; i < pipelines.size(); ++i) {
        graphics_create_infos[i].pNext = &graphics_offline_infos[1];
    }
    ASSERT_EQ(vksc::CreateGraphicsPipelines(device, pipeline_caches[2], static_cast<uint32_t>(pipelines.size()),
                                            graphics_create_infos.data(), nullptr, pipelines.data()),
              VK_SUCCESS);

    // At this point additional 2 shaders in the pipeline should be instantiated
    EXPECT_EQ(mock_shader_modules.GetTotalShaderModuleCount(), 4);
    EXPECT_EQ(mock_shader_modules.GetShaderModuleCount(0, "1265a236-e369-11ed-b5ea-0242ac120002"), 2);
    EXPECT_EQ(mock_shader_modules.GetShaderModuleCount(0, "b23d0e5c-70a0-4d67-8781-99ec3798ed31"), 0);
    EXPECT_EQ(mock_shader_modules.GetShaderModuleCount(1, "b23d0e5c-70a0-4d67-8781-99ec3798cd31"), 0);
    EXPECT_EQ(mock_shader_modules.GetShaderModuleCount(2, "1265a236-e369-11ed-b5ea-0242ac121402"), 2);

    for (size_t i = 0; i < pipelines.size(); ++i) {
        EXPECT_NE(pipelines[i], VK_NULL_HANDLE);
        vksc::DestroyPipeline(device, pipelines[i], nullptr);
    }
    pipelines.clear();

    EXPECT_EQ(mock_shader_modules.GetTotalShaderModuleCount(), 4);
    EXPECT_EQ(mock_shader_modules.GetShaderModuleCount(0, "1265a236-e369-11ed-b5ea-0242ac120002"), 2);
    EXPECT_EQ(mock_shader_modules.GetShaderModuleCount(0, "b23d0e5c-70a0-4d67-8781-99ec3798ed31"), 0);
    EXPECT_EQ(mock_shader_modules.GetShaderModuleCount(1, "b23d0e5c-70a0-4d67-8781-99ec3798cd31"), 0);
    EXPECT_EQ(mock_shader_modules.GetShaderModuleCount(2, "1265a236-e369-11ed-b5ea-0242ac121402"), 2);

    // Now do some similar tests with the compute pipelines
    // Create compute pipeline from cache #0
    compute_create_infos[0].pNext = &compute_offline_infos[0];
    ASSERT_EQ(vksc::CreateComputePipelines(device, pipeline_caches[0], 1, &compute_create_infos[0], nullptr, &pipeline),
              VK_SUCCESS);
    EXPECT_NE(pipeline, VK_NULL_HANDLE);

    // At this point one more compute shader should appear
    EXPECT_EQ(mock_shader_modules.GetTotalShaderModuleCount(), 5);
    EXPECT_EQ(mock_shader_modules.GetShaderModuleCount(0, "1265a236-e369-11ed-b5ea-0242ac120002"), 2);
    EXPECT_EQ(mock_shader_modules.GetShaderModuleCount(0, "b23d0e5c-70a0-4d67-8781-99ec3798ed31"), 1);
    EXPECT_EQ(mock_shader_modules.GetShaderModuleCount(1, "b23d0e5c-70a0-4d67-8781-99ec3798cd31"), 0);
    EXPECT_EQ(mock_shader_modules.GetShaderModuleCount(2, "1265a236-e369-11ed-b5ea-0242ac121402"), 2);

    // Creating multiple instances of the same pipeline does not increase the shader module count
    for (uint32_t i = 0; i < 5; ++i) {
        VkPipeline additional_pipeline_instance = VK_NULL_HANDLE;
        ASSERT_EQ(vksc::CreateComputePipelines(device, pipeline_caches[0], 1, &compute_create_infos[0], nullptr,
                                               &additional_pipeline_instance),
                  VK_SUCCESS);
        EXPECT_NE(additional_pipeline_instance, VK_NULL_HANDLE);
        EXPECT_EQ(mock_shader_modules.GetTotalShaderModuleCount(), 5);
        EXPECT_EQ(mock_shader_modules.GetShaderModuleCount(0, "b23d0e5c-70a0-4d67-8781-99ec3798ed31"), 1);
        vksc::DestroyPipeline(device, additional_pipeline_instance, nullptr);
    }

    // Destroying all pipeline instances does not destroy the shader modules (they remain cached)
    vksc::DestroyPipeline(device, pipeline, nullptr);
    EXPECT_EQ(mock_shader_modules.GetTotalShaderModuleCount(), 5);
    pipeline = VK_NULL_HANDLE;

    // Now we create the compute pipeline from cache #1, multiple at once
    pipelines.resize(compute_create_infos.size());
    for (size_t i = 0; i < pipelines.size(); ++i) {
        compute_create_infos[i].pNext = &compute_offline_infos[1];
    }
    ASSERT_EQ(vksc::CreateComputePipelines(device, pipeline_caches[1], static_cast<uint32_t>(pipelines.size()),
                                           compute_create_infos.data(), nullptr, pipelines.data()),
              VK_SUCCESS);

    // At this point an additional shader in the pipeline should be instantiated
    EXPECT_EQ(mock_shader_modules.GetTotalShaderModuleCount(), 6);
    EXPECT_EQ(mock_shader_modules.GetShaderModuleCount(0, "1265a236-e369-11ed-b5ea-0242ac120002"), 2);
    EXPECT_EQ(mock_shader_modules.GetShaderModuleCount(0, "b23d0e5c-70a0-4d67-8781-99ec3798ed31"), 1);
    EXPECT_EQ(mock_shader_modules.GetShaderModuleCount(1, "b23d0e5c-70a0-4d67-8781-99ec3798cd31"), 1);
    EXPECT_EQ(mock_shader_modules.GetShaderModuleCount(2, "1265a236-e369-11ed-b5ea-0242ac121402"), 2);

    for (size_t i = 0; i < pipelines.size(); ++i) {
        EXPECT_NE(pipelines[i], VK_NULL_HANDLE);
        vksc::DestroyPipeline(device, pipelines[i], nullptr);
        pipelines[i] = VK_NULL_HANDLE;
    }

    for (uint32_t i = 0; i < 3; ++i) {
        vksc::DestroyPipelineCache(device, pipeline_caches[i], nullptr);
    }

    // Even after deleting everything, the shader modules should remain cached
    EXPECT_EQ(mock_shader_modules.GetTotalShaderModuleCount(), 6);

    // Device destruction destroys all shader modules
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

        // Shader modules are only instantiated at pipeline creation time
        auto vertex_shader = mock_shader_modules.GetShaderModule(0, pipeline_uuid, 0);
        EXPECT_NE(vertex_shader, VK_NULL_HANDLE);

        auto fragment_shader = mock_shader_modules.GetShaderModule(0, pipeline_uuid, 1);
        EXPECT_NE(fragment_shader, VK_NULL_HANDLE);

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

TEST_F(PipelineCacheTest, CreateGraphicsPipelinesInvalidSpirv) {
    TEST_DESCRIPTION("Test graphics pipeline creation with invalid SPIR-V");

    const char *pipeline_uuid_invalid1 = "1265a236-e369-11ed-b5ea-0242ac120002";
    const char *pipeline_uuid_invalid2 = "1265a236-e369-11ed-b5ea-0242ac120003";
    const char *pipeline_uuid_invalid3 = "1265a236-e369-11ed-b5ea-0242ac120004";
    const char *pipeline_uuid_valid = "1265a236-e369-11ed-b5ea-0242ac120005";

    const char kInvalidVertexShaderSpv[] = R"spirv(
                OpCapability Shader
                OpCapability ImageRect
                OpMemoryModel Logical GLSL450
                OpEntryPoint Vertex %main "main"
                OpSource GLSL 450
        %void = OpTypeVoid
        %3 = OpTypeFunction %void
        %main = OpFunction %void None %3
        %5 = OpLabel
                OpReturn
                OpFunctionEnd
    )spirv";

    const char kInvalidVertexShaderSpv2[] = R"spirv(
                OpCapability Shader
                OpCapability ImageBuffer
                OpCapability ImageRect
                OpMemoryModel Logical GLSL450
                OpEntryPoint Vertex %main "main"
                OpSource GLSL 450
        %void = OpTypeVoid
        %3 = OpTypeFunction %void
        %main = OpFunction %void None %3
        %5 = OpLabel
                OpReturn
                OpFunctionEnd
    )spirv";

    const char kInvalidFragmentShaderSpv[] = R"spirv(
                OpCapability Shader
                OpCapability ImageRect
                OpMemoryModel Logical GLSL450
                OpEntryPoint Fragment %main "main"
                OpExecutionMode %main OriginUpperLeft
        %void = OpTypeVoid
        %3 = OpTypeFunction %void
        %main = OpFunction %void None %3
        %5 = OpLabel
                OpReturn
                OpFunctionEnd
    )spirv";

    const char kInvalidFragmentShaderSpv2[] = R"spirv(
                OpCapability Shader
                OpCapability ImageBuffer
                OpCapability ImageRect
                OpMemoryModel Logical GLSL450
                OpEntryPoint Fragment %main "main"
                OpExecutionMode %main OriginUpperLeft
        %void = OpTypeVoid
        %3 = OpTypeFunction %void
        %main = OpFunction %void None %3
        %5 = OpLabel
                OpReturn
                OpFunctionEnd
    )spirv";

    PipelineCacheInfo caches;
    // clang-format off
    caches.in_pipeline_pools = {
        PipelinePoolDesc{65536, 4}
    };
    caches.in_pipeline_caches = {
        PipelineCacheDesc{
            {
                PipelineDesc{
                    pipeline_uuid_invalid1,
                    49658,
                    kSampleGraphicsPipelineJson,
                    {
                        CompileSPV(kInvalidVertexShaderSpv),
                        CompileSPV(kInvalidFragmentShaderSpv)
                    }
                },
                PipelineDesc{
                    pipeline_uuid_invalid2,
                    49658,
                    kSampleGraphicsPipelineJson,
                    {
                        CompileSPV(kSampleVertexShaderSpv),
                        CompileSPV(kInvalidFragmentShaderSpv2)
                    }
                },
                PipelineDesc{
                    pipeline_uuid_invalid3,
                    49658,
                    kSampleGraphicsPipelineJson,
                    {
                        CompileSPV(kInvalidVertexShaderSpv2),
                        CompileSPV(kSampleFragmentShaderSpv)
                    }
                },
                PipelineDesc{
                    pipeline_uuid_valid,
                    49658,
                    kSampleGraphicsPipelineJson,
                    {
                        CompileSPV(kSampleVertexShaderSpv2),
                        CompileSPV(kSampleFragmentShaderSpv2)
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
    vkmock::CreateGraphicsPipelines = [&](auto, auto pipelineCache, auto createInfoCount, auto pCreateInfos, auto,
                                          auto pPipelines) {
        auto mock_pipeline = std::make_unique<VkMockObject<VkPipeline>>();
        pPipelines[0] = mock_pipeline->handle();
        vkmock_pipelines[pPipelines[0]] = std::move(mock_pipeline);
        return VK_SUCCESS;
    };
    vkmock::DestroyPipeline = [&](auto, auto pipeline, auto) { vkmock_pipelines.erase(pipeline); };

    std::vector<VkPipelineShaderStageCreateInfo> stage_infos(2, vku::InitStruct<VkPipelineShaderStageCreateInfo>());
    stage_infos[0].stage = VK_SHADER_STAGE_VERTEX_BIT;
    stage_infos[1].stage = VK_SHADER_STAGE_FRAGMENT_BIT;

    auto offline_info = vku::InitStruct<VkPipelineOfflineCreateInfo>();
    offline_info.matchControl = VK_PIPELINE_MATCH_CONTROL_APPLICATION_UUID_EXACT_MATCH;
    offline_info.poolEntrySize = 65536;

    auto create_info = vku::InitStruct<VkGraphicsPipelineCreateInfo>(&offline_info);
    create_info.stageCount = 2;
    create_info.pStages = stage_infos.data();

    VkPipeline pipeline = VK_NULL_HANDLE;

    // Both shader stages contain invalid SPIR-V
    utils::UUID(pipeline_uuid_invalid1).CopyToArray(offline_info.pipelineIdentifier);
    ASSERT_EQ(vksc::CreateGraphicsPipelines(device, cache, 1, &create_info, nullptr, &pipeline), VK_ERROR_VALIDATION_FAILED);
    EXPECT_EQ(pipeline, VK_NULL_HANDLE);

    // Fragment shader contains invalid SPIR-V
    utils::UUID(pipeline_uuid_invalid2).CopyToArray(offline_info.pipelineIdentifier);
    ASSERT_EQ(vksc::CreateGraphicsPipelines(device, cache, 1, &create_info, nullptr, &pipeline), VK_ERROR_VALIDATION_FAILED);
    EXPECT_EQ(pipeline, VK_NULL_HANDLE);

    // Vertex shader contains invalid SPIR-V
    utils::UUID(pipeline_uuid_invalid3).CopyToArray(offline_info.pipelineIdentifier);
    ASSERT_EQ(vksc::CreateGraphicsPipelines(device, cache, 1, &create_info, nullptr, &pipeline), VK_ERROR_VALIDATION_FAILED);
    EXPECT_EQ(pipeline, VK_NULL_HANDLE);

    // Both shader stages are valid, should succeed
    utils::UUID(pipeline_uuid_valid).CopyToArray(offline_info.pipelineIdentifier);
    ASSERT_EQ(vksc::CreateGraphicsPipelines(device, cache, 1, &create_info, nullptr, &pipeline), VK_SUCCESS);
    EXPECT_NE(pipeline, VK_NULL_HANDLE);
    vksc::DestroyPipeline(device, pipeline, nullptr);

    // Attempting to create all at once should result in error, but the last (valid) pipeline should be created successfully
    const uint32_t pipeline_count = static_cast<uint32_t>(caches.in_pipeline_caches[0].pipelines.size());
    std::vector<VkPipelineOfflineCreateInfo> offline_infos(pipeline_count, vku::InitStruct<VkPipelineOfflineCreateInfo>());
    std::vector<VkGraphicsPipelineCreateInfo> create_infos(pipeline_count, vku::InitStruct<VkGraphicsPipelineCreateInfo>());
    for (uint32_t i = 0; i < pipeline_count; ++i) {
        utils::UUID(caches.in_pipeline_caches[0].pipelines[i].uuid).CopyToArray(offline_infos[i].pipelineIdentifier);
        offline_infos[i].matchControl = VK_PIPELINE_MATCH_CONTROL_APPLICATION_UUID_EXACT_MATCH;
        offline_infos[i].poolEntrySize = 65536;
        create_infos[i].pNext = &offline_infos[i];
        create_infos[i].stageCount = 2;
        create_infos[i].pStages = stage_infos.data();
    }
    std::vector<VkPipeline> pipelines(pipeline_count, VK_NULL_HANDLE);
    ASSERT_EQ(vksc::CreateGraphicsPipelines(device, cache, pipeline_count, create_infos.data(), nullptr, pipelines.data()),
              VK_ERROR_VALIDATION_FAILED);
    for (uint32_t i = 0; i < pipeline_count; ++i) {
        if (strcmp(caches.in_pipeline_caches[0].pipelines[i].uuid, pipeline_uuid_valid) == 0) {
            EXPECT_NE(pipelines[i], VK_NULL_HANDLE);
        } else {
            EXPECT_EQ(pipelines[i], VK_NULL_HANDLE);
        }
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

        // Shader module is only instantiated at pipeline creation time
        auto compute_shader = mock_shader_modules.GetShaderModule(0, pipeline_uuid, 0);
        EXPECT_NE(compute_shader, VK_NULL_HANDLE);

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

TEST_F(PipelineCacheTest, CreateComputePipelinesInvalidSpirv) {
    TEST_DESCRIPTION("Test compute pipeline creation with invalid SPIR-V");

    const char *pipeline_uuid_invalid = "b23d0e5c-70a0-4d67-8781-99ec3798ed31";
    const char *pipeline_uuid_valid = "b23d0e5c-70a0-4d67-8781-99ec3798ed32";

    const char kInvalidComputeShaderSpv[] = R"spirv(
                OpCapability Shader
                OpCapability ImageRect
        %1 = OpExtInstImport "GLSL.std.450"
                OpMemoryModel Logical GLSL450
                OpEntryPoint GLCompute %main "main"
                OpExecutionMode %main LocalSize 2 1 1
                OpSource GLSL 450
        %void = OpTypeVoid
        %3 = OpTypeFunction %void
        %main = OpFunction %void None %3
        %5 = OpLabel
                OpReturn
                OpFunctionEnd
    )spirv";

    PipelineCacheInfo caches;
    // clang-format off
    caches.in_pipeline_pools = {
        PipelinePoolDesc{8192, 2}
    };
    caches.in_pipeline_caches = {
        PipelineCacheDesc{
            {
                PipelineDesc{
                    pipeline_uuid_invalid,
                    6512,
                    kSampleComputePipelineJson,
                    {
                        CompileSPV(kInvalidComputeShaderSpv),
                    }
                },
                PipelineDesc{
                    pipeline_uuid_valid,
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
    vkmock::DestroyPipeline = [&](auto, auto pipeline, auto) { vkmock_pipelines.erase(pipeline); };

    auto offline_info = vku::InitStruct<VkPipelineOfflineCreateInfo>();
    offline_info.matchControl = VK_PIPELINE_MATCH_CONTROL_APPLICATION_UUID_EXACT_MATCH;
    offline_info.poolEntrySize = 8192;

    auto create_info = vku::InitStruct<VkComputePipelineCreateInfo>(&offline_info);
    create_info.stage.stage = VK_SHADER_STAGE_COMPUTE_BIT;

    VkPipeline pipeline = VK_NULL_HANDLE;

    // Pipeline contains invalid SPIR-V
    utils::UUID(pipeline_uuid_invalid).CopyToArray(offline_info.pipelineIdentifier);
    ASSERT_EQ(vksc::CreateComputePipelines(device, cache, 1, &create_info, nullptr, &pipeline), VK_ERROR_VALIDATION_FAILED);
    EXPECT_EQ(pipeline, VK_NULL_HANDLE);

    // Pipeline contains valid SPIR-V, should succeed
    utils::UUID(pipeline_uuid_valid).CopyToArray(offline_info.pipelineIdentifier);
    ASSERT_EQ(vksc::CreateComputePipelines(device, cache, 1, &create_info, nullptr, &pipeline), VK_SUCCESS);
    EXPECT_NE(pipeline, VK_NULL_HANDLE);
    vksc::DestroyPipeline(device, pipeline, nullptr);

    // Attempting to create all at once should result in error, but the last (valid) pipeline should be created successfully
    const uint32_t pipeline_count = static_cast<uint32_t>(caches.in_pipeline_caches[0].pipelines.size());
    std::vector<VkPipelineOfflineCreateInfo> offline_infos(pipeline_count, vku::InitStruct<VkPipelineOfflineCreateInfo>());
    std::vector<VkComputePipelineCreateInfo> create_infos(pipeline_count, vku::InitStruct<VkComputePipelineCreateInfo>());
    for (uint32_t i = 0; i < pipeline_count; ++i) {
        utils::UUID(caches.in_pipeline_caches[0].pipelines[i].uuid).CopyToArray(offline_infos[i].pipelineIdentifier);
        offline_infos[i].matchControl = VK_PIPELINE_MATCH_CONTROL_APPLICATION_UUID_EXACT_MATCH;
        offline_infos[i].poolEntrySize = 8192;
        create_infos[i].pNext = &offline_infos[i];
        create_infos[i].stage.stage = VK_SHADER_STAGE_COMPUTE_BIT;
    }
    std::vector<VkPipeline> pipelines(pipeline_count, VK_NULL_HANDLE);
    ASSERT_EQ(vksc::CreateComputePipelines(device, cache, pipeline_count, create_infos.data(), nullptr, pipelines.data()),
              VK_ERROR_VALIDATION_FAILED);
    for (uint32_t i = 0; i < pipeline_count; ++i) {
        if (strcmp(caches.in_pipeline_caches[0].pipelines[i].uuid, pipeline_uuid_valid) == 0) {
            EXPECT_NE(pipelines[i], VK_NULL_HANDLE);
        } else {
            EXPECT_EQ(pipelines[i], VK_NULL_HANDLE);
        }
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
                        CompileSPV(kSampleComputeShaderSpv2),
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
