/*
 * Copyright (c) 2024 The Khronos Group Inc.
 * Copyright (c) 2024 RasterGrid Kft.
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#include "icd_test_pipeline_cache_utils.h"
#include "test_vkmock_framework.h"

#include <string.h>

VkMockShaderModules::VkMockShaderModules(const PipelineCacheInfo &info)
    : info_(info), cache_index_(0), pipeline_index_(0), stage_index_(0), mock_objects_(), per_pipeline_mock_objects_() {
    vkmock::CreateShaderModule = [&](auto, auto pCreateInfo, auto, auto pShaderModule) {
        EXPECT_LT(cache_index_, info.in_pipeline_caches.size());
        if (cache_index_ >= info.in_pipeline_caches.size()) {
            return VK_ERROR_INITIALIZATION_FAILED;
        }

        const auto &cache = info.in_pipeline_caches[cache_index_];
        EXPECT_LT(pipeline_index_, cache.pipelines.size());
        if (pipeline_index_ >= cache.pipelines.size()) {
            return VK_ERROR_INITIALIZATION_FAILED;
        }

        const auto &pipeline = cache.pipelines[pipeline_index_];
        EXPECT_LT(stage_index_, pipeline.spirv_stages.size());
        if (stage_index_ >= pipeline.spirv_stages.size()) {
            return VK_ERROR_INITIALIZATION_FAILED;
        }

        const auto &spirv = pipeline.spirv_stages[stage_index_];
        EXPECT_EQ(pCreateInfo->codeSize, spirv.size() * sizeof(uint32_t));
        if (pCreateInfo->codeSize != spirv.size() * sizeof(uint32_t)) {
            return VK_ERROR_INITIALIZATION_FAILED;
        }
        EXPECT_EQ(memcmp(pCreateInfo->pCode, spirv.data(), pCreateInfo->codeSize), 0);
        if (memcmp(pCreateInfo->pCode, spirv.data(), pCreateInfo->codeSize) != 0) {
            return VK_ERROR_INITIALIZATION_FAILED;
        }

        auto mock_object = std::make_unique<VkMockObject<VkShaderModule>>();
        mock_objects_.insert(mock_object->handle());

        *pShaderModule = mock_object->handle();

        per_pipeline_mock_objects_.resize(cache_index_ + 1);
        per_pipeline_mock_objects_[cache_index_][utils::UUID(pipeline.uuid)].push_back(std::move(mock_object));

        if (++stage_index_ >= pipeline.spirv_stages.size()) {
            stage_index_ = 0;
            if (++pipeline_index_ >= cache.pipelines.size()) {
                pipeline_index_ = 0;
                ++cache_index_;
            }
        }

        return VK_SUCCESS;
    };

    vkmock::DestroyShaderModule = [&](auto, auto shaderModule, auto) {
        auto it = mock_objects_.find(shaderModule);
        EXPECT_NE(it, mock_objects_.end());
        mock_objects_.erase(shaderModule);
    };
}

void VkMockShaderModules::VerifyShaderModulesCreated() { EXPECT_EQ(cache_index_, info_.in_pipeline_caches.size()); }

void VkMockShaderModules::VerifyShaderModulesDestroyed() { EXPECT_TRUE(mock_objects_.empty()); }

std::vector<uint32_t> CompileSPV(const char *spv, const spv_target_env target_env) {
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

void BuildPipelineCaches(PipelineCacheInfo &info) {
    info.out_pipeline_pool_sizes.clear();
    info.out_pipeline_pool_sizes.reserve(info.in_pipeline_pools.size());
    for (auto &pipeline_pool : info.in_pipeline_pools) {
        auto pool_size = vku::InitStruct<VkPipelinePoolSize>();
        pool_size.poolEntrySize = pipeline_pool.size;
        pool_size.poolEntryCount = pipeline_pool.count;
        info.out_pipeline_pool_sizes.push_back(pool_size);
    }

    info.out_pipeline_cache_create_info.clear();
    info.out_pipeline_cache_create_info.reserve(info.in_pipeline_caches.size());
    info.builders.clear();
    info.builders.reserve(info.in_pipeline_caches.size());
    for (auto &pipeline_cache : info.in_pipeline_caches) {
        auto &builder = info.builders.emplace_back();

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
