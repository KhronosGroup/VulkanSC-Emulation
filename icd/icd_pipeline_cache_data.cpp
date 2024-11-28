/*
 * Copyright (c) 2024 The Khronos Group Inc.
 * Copyright (c) 2024 RasterGrid Kft.
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#include "icd_pipeline_cache_data.h"
#include "vksc_device.h"
#include "vksc_instance.h"

#include <vulkan/utility/vk_struct_helper.hpp>
#include <spirv-tools/optimizer.hpp>
#include <spirv/unified1/spirv.hpp>
#include <json/json.h>

namespace icd {

PipelineStage::PipelineStage(const Pipeline& pipeline, uint32_t stage_idx, std::vector<uint32_t>&& spirv, std::string&& entry_point)
    : device_(pipeline.GetDevice()),
      stage_idx_(stage_idx),
      shader_module_(CreateShaderModule(pipeline, spirv)),
      spirv_(std::move(spirv)),
      entry_point_(std::move(entry_point)) {}

PipelineStage::~PipelineStage() {
    if (shader_module_ != VK_NULL_HANDLE) {
        GetDevice().DestroyShaderModule(shader_module_, nullptr);
    }
}

VkShaderModule PipelineStage::CreateShaderModule(const Pipeline& pipeline, const std::vector<uint32_t>& spirv) {
    VkShaderModule shader_module = VK_NULL_HANDLE;
    auto create_info = vku::InitStruct<VkShaderModuleCreateInfo>();
    create_info.codeSize = spirv.size() * sizeof(uint32_t);
    create_info.pCode = spirv.data();
    auto result = GetDevice().CreateShaderModule(&create_info, nullptr, &shader_module);
    if (result < VK_SUCCESS) {
        GetDevice().ReportFault(VK_FAULT_LEVEL_CRITICAL, VK_FAULT_TYPE_IMPLEMENTATION);
        GetDevice().Log().Error("VKSC-EMU-Shader-ShaderModuleCreateFailed",
                                "Failed to create VkShaderModule for pipeline %s stage index %u (result: %d)",
                                pipeline.ID().toString().c_str(), GetIndex(), result);
    }
    return shader_module;
}

Pipeline::Pipeline(const PipelineCache& pipeline_cache, const utils::UUID& id, uint64_t memory_size)
    : device_(pipeline_cache.GetDevice()), id_(id), memory_size_(memory_size), stages_() {}

PipelineCache::PipelineCache(vksc::Device& device, const VkDeviceCreateInfo& device_create_info,
                             const VkPipelineCacheCreateInfo& create_info)
    : device_(device), pipelines_() {
    if (create_info.pInitialData == nullptr) {
        valid_ = false;
        return;
    }

    icd::PipelineCacheData data(create_info);
    if (!ValidatePipelineCacheDataHeader(data)) {
        valid_ = false;
        return;
    }

    for (uint32_t pipeline_idx = 0; pipeline_idx < data.PipelineIndexCount(); ++pipeline_idx) {
        std::vector<std::string> entry_points{};
        if (!ValidatePipelineCacheDataEntry(device_create_info, data, pipeline_idx, &entry_points)) {
            valid_ = false;
            return;
        }

        auto entry = data.PipelineIndexEntry(pipeline_idx);
        auto id = entry.PipelineID();
        icd::Pipeline pipeline(*this, id, entry->pipelineMemorySize);
        for (uint32_t stage_idx = 0; stage_idx < entry.StageIndexCount(); ++stage_idx) {
            if (!pipeline.AddStage(
                    icd::PipelineStage(pipeline, stage_idx, entry.StageSPIRV(stage_idx), std::move(entry_points[stage_idx])))) {
                valid_ = false;
                return;
            }
        }

        if (!pipelines_.emplace(pipeline.ID(), std::move(pipeline)).second) {
            GetDevice().Log().Error("VKSC-EMU-PipelineCacheData-DuplicatePipelineID",
                                    "Duplicate pipeline ID (%s) in pipeline cache data (%p)", id.toString().c_str(),
                                    create_info.pInitialData);
            valid_ = false;
            return;
        }
    }
}

spv_target_env PipelineCache::GetSpirvEnv() const { return SPV_ENV_VULKAN_1_2; }

void PipelineCache::AdjustValidatorOptions(const VkDeviceCreateInfo& device_create_info, spvtools::ValidatorOptions& options) {
    // Adjust SPIR-V validation options based on the enabled features
    options.SetRelaxBlockLayout(true);
    auto vulkan12_features = vku::FindStructInPNextChain<VkPhysicalDeviceVulkan12Features>(device_create_info.pNext);
    auto uniform_buffer_standard_layout_features =
        vku::FindStructInPNextChain<VkPhysicalDeviceUniformBufferStandardLayoutFeatures>(device_create_info.pNext);
    auto scalar_block_layout_features =
        vku::FindStructInPNextChain<VkPhysicalDeviceScalarBlockLayoutFeatures>(device_create_info.pNext);

    if ((vulkan12_features != nullptr && vulkan12_features->uniformBufferStandardLayout) ||
        (uniform_buffer_standard_layout_features != nullptr &&
         uniform_buffer_standard_layout_features->uniformBufferStandardLayout)) {
        options.SetUniformBufferStandardLayout(true);
    }

    if ((vulkan12_features != nullptr && vulkan12_features->scalarBlockLayout) ||
        (scalar_block_layout_features != nullptr && scalar_block_layout_features->scalarBlockLayout)) {
        options.SetScalarBlockLayout(true);
    }
}

bool PipelineCache::ValidatePipelineCacheDataHeader(const icd::PipelineCacheData& data) {
    auto header = data.GetHeader();
    if (!header.has_value() || header->headerVersionOne.headerSize != sizeof(VkPipelineCacheHeaderVersionSafetyCriticalOne) ||
        header->headerVersionOne.headerVersion != VK_PIPELINE_CACHE_HEADER_VERSION_SAFETY_CRITICAL_ONE ||
        header->validationVersion != VK_PIPELINE_CACHE_VALIDATION_VERSION_SAFETY_CRITICAL_ONE ||
        header->pipelineIndexStride < sizeof(VkPipelineCacheSafetyCriticalIndexEntry) ||
        header->pipelineIndexOffset + header->pipelineIndexCount * header->pipelineIndexStride > data.Size()) {
        GetDevice().Log().Error("VKSC-EMU-PipelineCacheData-InvalidHeader", "Invalid header in pipeline cache data (%p)",
                                data.Data());
        return false;
    }

    if (header->implementationData != VK_DRIVER_ID_VULKAN_SC_EMULATION_ON_VULKAN) {
        GetDevice().Log().Error("VKSC-EMU-PipelineCacheData-Incompatible",
                                "Incompatible implementation data (%u) in pipeline cache data (%p)", header->implementationData,
                                data.Data());
        return false;
    }

    if (header->headerVersionOne.vendorID != VK_VENDOR_ID_KHRONOS) {
        GetDevice().Log().Error("VKSC-EMU-PipelineCacheData-InvalidVendorID", "Invalid vendor ID (%u) in pipeline cache data (%p)",
                                header->headerVersionOne.vendorID, data.Data());
        return false;
    }

    if (header->headerVersionOne.deviceID != VK_DEVICE_ID_PORTABLE) {
        GetDevice().Log().Error("VKSC-EMU-PipelineCacheData-InvalidDeviceID", "Invalid device ID (%u) in pipeline cache data (%p)",
                                header->headerVersionOne.deviceID, data.Data());
        return false;
    }

    if (utils::UUID(header->headerVersionOne.pipelineCacheUUID) != utils::UUID(utils::EmulationPipelineCacheUUID)) {
        GetDevice().Log().Error("VKSC-EMU-PipelineCacheData-InvalidPipelineCacheUUID",
                                "Invalid pipeline cache UUID (%s) in pipeline cache data (%p)",
                                utils::UUID(header->headerVersionOne.pipelineCacheUUID).toString().c_str(), data.Data());
        return false;
    }

    return true;
}

bool PipelineCache::ValidatePipelineCacheDataEntry(const VkDeviceCreateInfo& device_create_info, const icd::PipelineCacheData& data,
                                                   uint32_t pipeline_idx, std::vector<std::string>* entry_points) {
    auto entry = data.PipelineIndexEntry(pipeline_idx);
    if (!entry) {
        GetDevice().Log().Error("VKSC-EMU-PipelineCacheData-InvalidPipelineEntry",
                                "Invalid pipeline entry at index %u in pipeline cache data (%p)", pipeline_idx, data.Data());
        return false;
    }

    if (entry->jsonSize == 0 || entry->jsonOffset + entry->jsonSize > data.Size()) {
        GetDevice().Log().Error("VKSC-EMU-PipelineCacheData-InvalidJson",
                                "Missing or out-of-bounds JSON data for pipeline (%s) in pipeline cache data (%p)",
                                entry.PipelineID().toString().c_str(), data.Data());
        return false;
    }

    if (entry->stageIndexCount == 0 || entry->stageIndexStride != sizeof(VkPipelineCacheStageValidationIndexEntry) ||
        entry->stageIndexOffset + entry->stageIndexCount * entry->stageIndexStride > data.Size()) {
        GetDevice().Log().Error("VKSC-EMU-PipelineCacheData-InvalidStageValidation",
                                "Missing or out-of-bounds stage validation data for pipeline (%s) in pipeline cache data (%p)",
                                entry.PipelineID().toString().c_str(), data.Data());
        return false;
    }

    Json::Value json{};
    {
        // Parse pipeline JSON
        std::string json_string(entry.JSONData(), static_cast<std::size_t>(entry.JSONDataSize()));
        std::istringstream json_stream(json_string);
        std::string json_error;
        Json::CharReaderBuilder builder{};
        if (!Json::parseFromStream(builder, json_stream, &json, &json_error)) {
            GetDevice().Log().Error("VKSC-EMU-PipelineCacheData-InvalidJson",
                                    "Failed to parse JSON data for pipeline (%s) in pipeline cache data (%p):\n%s",
                                    entry.PipelineID().toString().c_str(), data.Data(), json_error.c_str());
            return false;
        }

        // Extract stage infos
        std::vector<Json::Value> stage_info{};
        auto graphics_pipe_state = json["GraphicsPipelineState"];
        if (graphics_pipe_state != Json::nullValue) {
            const uint32_t stage_count = graphics_pipe_state["GraphicsPipeline"]["stageCount"].asUInt();
            stage_info.reserve(stage_count);
            for (uint32_t stage_idx = 0; stage_idx < stage_count; ++stage_idx) {
                stage_info.emplace_back(graphics_pipe_state["GraphicsPipeline"]["pStages"][stage_idx]);
            }
        }
        auto compute_pipe_state = json["ComputePipelineState"];
        if (compute_pipe_state != Json::nullValue) {
            stage_info.emplace_back(compute_pipe_state["ComputePipeline"]["stage"]);
        }
        if (graphics_pipe_state == Json::nullValue && compute_pipe_state == Json::nullValue) {
            GetDevice().Log().Error(
                "VKSC-EMU-PipelineCacheData-InvalidJson",
                "JSON data for pipeline (%s) is missing graphics or compute pipeline stage in pipeline cache data (%p)",
                entry.PipelineID().toString().c_str(), data.Data());
            return false;
        }
        if (stage_info.size() != entry.StageIndexCount()) {
            GetDevice().Log().Error("VKSC-EMU-PipelineCacheData-InvalidJson",
                                    "JSON data stage count (%zu) for pipeline (%s) does not match stage index entry count (%u) for "
                                    "pipeline (%s) in pipeline cache data (%p)",
                                    stage_info.size(), entry.StageIndexCount(), entry.PipelineID().toString().c_str(), data.Data());
            return false;
        }

        // Collect entry point names
        entry_points->reserve(stage_info.size());
        for (const auto& stage : stage_info) {
            entry_points->emplace_back(stage["pName"].asString());
        }
    }

    // TODO: We should probably validate the pipeline JSON PhysicalDeviceFeatures against the device create features
    // although anything that does affect the SPIR-V semantics is expected to be caught by SPIR-V validation

    // Validate stages
    for (uint32_t stage_idx = 0; stage_idx < entry.StageIndexCount(); ++stage_idx) {
        auto stage_info = entry.StageIndexEntry(stage_idx);
        if (!entry) {
            GetDevice().Log().Error("VKSC-EMU-PipelineCacheData-InvalidStageEntry",
                                    "Invalid stage validation entry at index %u for pipeline (%s) in pipeline cache data (%p)",
                                    stage_idx, entry.PipelineID().toString().c_str(), data.Data());
            return false;
        }

        if (stage_info->codeSize == 0 || stage_info->codeSize % 4 != 0 ||
            stage_info->codeOffset + stage_info->codeSize > data.Size()) {
            GetDevice().Log().Error(
                "VKSC-EMU-PipelineCacheData-InvalidJson",
                "Missing or out-of-bounds SPIR-V data at stage index %u for pipeline (%s) in pipeline cache data (%p)", stage_idx,
                entry.PipelineID().toString().c_str(), data.Data());
            return false;
        }

        auto spirv = entry.StageSPIRV(stage_idx);

        // Validate SPIR-V
        spv_target_env spirv_environment = GetSpirvEnv();
        spv_context ctx = spvContextCreate(spirv_environment);
        spv_const_binary_t binary{spirv.data(), spirv.size()};
        spv_diagnostic diag = nullptr;
        spvtools::ValidatorOptions options;
        AdjustValidatorOptions(device_create_info, options);
        spv_result_t spv_valid = spvValidateWithOptions(ctx, options, &binary, &diag);
        if (spv_valid != SPV_SUCCESS) {
            if (spv_valid == SPV_WARNING) {
                GetDevice().Log().Warning("VKSC-EMU-PipelineCacheData-SpirvVal",
                                          "SPIR-V data at stage index %u for pipeline (%s) in pipeline cache data (%p) produced "
                                          "spirv-val warning:\n%s",
                                          stage_idx, entry.PipelineID().toString().c_str(), data.Data(),
                                          diag && diag->error ? diag->error : "(no error text)");
            } else {
                GetDevice().Log().Error("VKSC-EMU-PipelineCacheData-SpirvVal",
                                        "SPIR-V data at stage index %u for pipeline (%s) in pipeline cache data (%p) produced "
                                        "spirv-val error:\n%s",
                                        stage_idx, entry.PipelineID().toString().c_str(), data.Data(),
                                        diag && diag->error ? diag->error : "(no error text)");
                spvDiagnosticDestroy(diag);
                spvContextDestroy(ctx);
                return false;
            }
        }
        spvDiagnosticDestroy(diag);
        spvContextDestroy(ctx);
    }

    return true;
}

}  // namespace icd
