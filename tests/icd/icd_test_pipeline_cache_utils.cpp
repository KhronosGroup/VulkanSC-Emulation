/*
 * Copyright (c) 2024-2025 The Khronos Group Inc.
 * Copyright (c) 2024-2025 RasterGrid Kft.
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#include "icd_test_pipeline_cache_utils.h"
#include "test_vkmock_framework.h"

#include <string.h>

VkMockShaderModules::VkMockShaderModules(const PipelineCacheInfo& info)
    : mutex_(), spirv_data_to_pipeline_id_map_(), mock_objects_(), per_pipeline_mock_objects_() {
    vkmock::CreateShaderModule = [&](auto, auto pCreateInfo, auto, auto pShaderModule) {
        std::unique_lock lock(mutex_);
        std::vector<uint32_t> spirv_code(pCreateInfo->codeSize / sizeof(uint32_t));
        memcpy(spirv_code.data(), pCreateInfo->pCode, pCreateInfo->codeSize);
        auto it = spirv_data_to_pipeline_id_map_.find(spirv_code);
        EXPECT_NE(it, spirv_data_to_pipeline_id_map_.end());
        if (it == spirv_data_to_pipeline_id_map_.end()) {
            return VK_ERROR_INITIALIZATION_FAILED;
        }
        // The shader modules of a given pipeline should never be instantiated twice
        EXPECT_FALSE(it->second.already_created);
        it->second.already_created = true;

        const auto& cache = info.in_pipeline_caches[it->second.cache_index];
        const auto& pipeline = cache.pipelines[it->second.pipeline_index];

        auto mock_object = std::make_shared<VkMockObject<VkShaderModule>>();
        mock_objects_.insert(mock_object->handle());

        *pShaderModule = mock_object->handle();

        per_pipeline_mock_objects_[it->second.cache_index][utils::UUID(pipeline.uuid)].push_back(std::move(mock_object));

        return VK_SUCCESS;
    };

    // Initialize SPIR-V binary to pipeline stage ID mapping so that we can reverse engineer
    // the pipeline stage ID based on the shader binary received in vkCreateShaderModule
    for (uint32_t cache_idx = 0; cache_idx < info.in_pipeline_caches.size(); ++cache_idx) {
        const auto& cache = info.in_pipeline_caches[cache_idx];
        for (uint32_t pipeline_idx = 0; pipeline_idx < cache.pipelines.size(); ++pipeline_idx) {
            const auto& pipeline = cache.pipelines[pipeline_idx];
            for (uint32_t stage_idx = 0; stage_idx < pipeline.spirv_stages.size(); ++stage_idx) {
                const auto& stage = pipeline.spirv_stages[stage_idx];
                // VkMockShaderModules expects the SPIR-V code to be unique for each pipeline stage
                // as the shader binary is used as the key for the lookup
                EXPECT_EQ(spirv_data_to_pipeline_id_map_.find(stage), spirv_data_to_pipeline_id_map_.end());
                spirv_data_to_pipeline_id_map_[stage] = PipelineStageId{cache_idx, pipeline_idx, stage_idx};
            }
        }
    }

    per_pipeline_mock_objects_.resize(info.in_pipeline_caches.size());

    vkmock::DestroyShaderModule = [&](auto, auto shaderModule, auto) {
        auto it = mock_objects_.find(shaderModule);
        EXPECT_NE(it, mock_objects_.end());
        mock_objects_.erase(shaderModule);
    };
}

void VkMockShaderModules::VerifyShaderModulesDestroyed() { EXPECT_TRUE(mock_objects_.empty()); }

std::vector<uint32_t> CompileSPV(const char* spv, const spv_target_env target_env) {
    std::vector<uint32_t> output{};

    spv_binary binary;
    spv_diagnostic diagnostic = nullptr;
    spv_context context = spvContextCreate(target_env);
    spv_result_t error = spvTextToBinaryWithOptions(context, spv, strlen(spv), 0, &binary, &diagnostic);
    spvContextDestroy(context);
    if (error) {
        spvDiagnosticPrint(diagnostic);
        spvDiagnosticDestroy(diagnostic);
        return output;
    }

    output.insert(output.end(), binary->code, binary->code + binary->wordCount);
    spvBinaryDestroy(binary);

    return output;
}

void BuildPipelineCaches(PipelineCacheInfo& info) {
    info.out_pipeline_pool_sizes.clear();
    info.out_pipeline_pool_sizes.reserve(info.in_pipeline_pools.size());
    for (auto& pipeline_pool : info.in_pipeline_pools) {
        auto pool_size = vku::InitStruct<VkPipelinePoolSize>();
        pool_size.poolEntrySize = pipeline_pool.size;
        pool_size.poolEntryCount = pipeline_pool.count;
        info.out_pipeline_pool_sizes.push_back(pool_size);
    }

    info.out_pipeline_cache_create_info.clear();
    info.out_pipeline_cache_create_info.reserve(info.in_pipeline_caches.size());
    info.builders.clear();
    info.builders.reserve(info.in_pipeline_caches.size());
    for (auto& pipeline_cache : info.in_pipeline_caches) {
        auto& builder = info.builders.emplace_back();

        auto header = builder.AddHeader();
        header->headerVersionOne.vendorID = VK_VENDOR_ID_KHRONOS;
        header->headerVersionOne.deviceID = VK_DEVICE_ID_PORTABLE;
        utils::UUID(utils::EmulationPipelineCacheUUID).CopyToArray(header->headerVersionOne.pipelineCacheUUID);
        header->implementationData = VK_DRIVER_ID_VULKAN_SC_EMULATION_ON_VULKAN;

        std::vector<PipelineCacheBuilder::SCIndexEntry<>> pipeline_entries{};
        for (std::size_t i = 0; i < pipeline_cache.pipelines.size(); ++i) {
            pipeline_entries.emplace_back(builder.AddPipelineEntry(header, utils::UUID(pipeline_cache.pipelines[i].uuid),
                                                                   pipeline_cache.pipelines[i].memory_size));
        }
        for (std::size_t i = 0; i < pipeline_cache.pipelines.size(); ++i) {
            std::vector<std::vector<uint32_t>> spirv_binaries{};
            for (std::size_t j = 0; j < pipeline_cache.pipelines[i].spirv_stages.size(); ++j) {
                spirv_binaries.emplace_back(pipeline_cache.pipelines[i].spirv_stages[j]);
            }
            builder.AddStageValidation(pipeline_entries[i], pipeline_cache.pipelines[i].json, spirv_binaries);
        }

        auto create_info = vku::InitStruct<VkPipelineCacheCreateInfo>();
        create_info.flags = VK_PIPELINE_CACHE_CREATE_READ_ONLY_BIT | VK_PIPELINE_CACHE_CREATE_USE_APPLICATION_STORAGE_BIT;
        create_info.initialDataSize = builder.GetData().size();
        create_info.pInitialData = builder.GetData().data();

        info.out_pipeline_cache_create_info.push_back(create_info);
    }

    info.out_object_reservation_info = vku::InitStruct<VkDeviceObjectReservationCreateInfo>();
    info.out_object_reservation_info.pipelinePoolSizeCount = static_cast<uint32_t>(info.out_pipeline_pool_sizes.size());
    info.out_object_reservation_info.pPipelinePoolSizes = info.out_pipeline_pool_sizes.data();
    info.out_object_reservation_info.pipelineCacheCreateInfoCount =
        static_cast<uint32_t>(info.out_pipeline_cache_create_info.size());
    info.out_object_reservation_info.pPipelineCacheCreateInfos = info.out_pipeline_cache_create_info.data();
}
