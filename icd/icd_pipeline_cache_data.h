/*
 * Copyright (c) 2024 The Khronos Group Inc.
 * Copyright (c) 2024 RasterGrid Kft.
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#pragma once

#include "icd_defs.h"
#include "icd_log.h"
#include "uuid.h"

#include <spirv-tools/libspirv.hpp>
#include <string.h>
#include <string>
#include <vector>
#include <optional>
#include <unordered_map>

namespace vksc {
class Device;
}

namespace icd {

class PipelineCacheData {
  public:
    class Entry {
      public:
        Entry(const uint8_t* data, const size_t data_size, const std::optional<VkPipelineCacheSafetyCriticalIndexEntry> entry)
            : data_(data), data_size_(data_size), entry_(entry) {}

        utils::UUID PipelineID() const { return utils::UUID(entry_->pipelineIdentifier); }

        operator bool() const { return entry_.has_value(); }

        const VkPipelineCacheSafetyCriticalIndexEntry* operator->() const { return &entry_.value(); }

        uint64_t JSONDataSize() const { return entry_.has_value() ? entry_->jsonSize : 0; }

        const char* JSONData() const {
            return entry_.has_value() ? reinterpret_cast<const char*>(data_ + entry_->jsonOffset) : nullptr;
        }

        bool HasSPIRVDebugInfo() const { return entry_.has_value() ? entry_->stageIndexCount != 0 : false; }

        uint32_t StageIndexCount() const { return entry_.has_value() ? entry_->stageIndexCount : 0; }

        const std::optional<VkPipelineCacheStageValidationIndexEntry> StageIndexEntry(uint32_t index) const {
            if (index < StageIndexCount()) {
                uint64_t offset = entry_->stageIndexOffset + index * entry_->stageIndexStride;
                return CopyDataFrom<VkPipelineCacheStageValidationIndexEntry>(offset);
            } else {
                return std::optional<VkPipelineCacheStageValidationIndexEntry>();
            }
        }

        std::vector<uint32_t> StageSPIRV(uint32_t index) const {
            auto stage_info = StageIndexEntry(index);
            if (stage_info.has_value()) {
                std::vector<uint32_t> spirv(static_cast<std::size_t>(stage_info->codeSize / sizeof(uint32_t)));
                memcpy(spirv.data(), data_ + stage_info->codeOffset, static_cast<std::size_t>(stage_info->codeSize));
                return spirv;
            } else {
                return std::vector<uint32_t>();
            }
        }

      private:
        const uint8_t* data_;
        const size_t data_size_;
        const std::optional<VkPipelineCacheSafetyCriticalIndexEntry> entry_;

        template <typename T>
        std::optional<T> CopyDataFrom(uint64_t offset) const {
            if (offset + sizeof(T) <= data_size_) {
                T data;
                memcpy(&data, data_ + offset, sizeof(T));
                return std::optional<T>(std::move(data));
            } else {
                return std::optional<T>();
            }
        }
    };

    PipelineCacheData(const VkPipelineCacheCreateInfo& create_info)
        : create_info_(create_info), header_(CopyDataFrom<VkPipelineCacheHeaderVersionSafetyCriticalOne>(0)) {}

    const std::optional<VkPipelineCacheHeaderVersionSafetyCriticalOne> GetHeader() const { return header_; }

    uint32_t PipelineIndexCount() const { return header_.has_value() ? header_->pipelineIndexCount : 0; }

    Entry PipelineIndexEntry(uint32_t index) const {
        if (index < PipelineIndexCount()) {
            uint64_t offset = header_->pipelineIndexOffset + index * header_->pipelineIndexStride;
            return Entry(Data(), DataSize(), CopyDataFrom<VkPipelineCacheSafetyCriticalIndexEntry>(offset));
        } else {
            return Entry(Data(), DataSize(), std::optional<VkPipelineCacheSafetyCriticalIndexEntry>());
        }
    }

    const uint8_t* Data() const { return reinterpret_cast<const uint8_t*>(create_info_.pInitialData); }
    size_t Size() const { return create_info_.initialDataSize; }

  private:
    const VkPipelineCacheCreateInfo create_info_;
    const std::optional<VkPipelineCacheHeaderVersionSafetyCriticalOne> header_;

    size_t DataSize() const { return create_info_.initialDataSize; }

    template <typename T>
    std::optional<T> CopyDataFrom(uint64_t offset) const {
        if (offset + sizeof(T) <= DataSize()) {
            T data;
            memcpy(&data, Data() + offset, sizeof(T));
            return std::optional<T>(std::move(data));
        } else {
            return std::optional<T>();
        }
    }
};

class Pipeline;
class PipelineCache;

class PipelineStage {
  public:
    PipelineStage(const Pipeline& pipeline, uint32_t stage_idx, std::vector<uint32_t>&& spirv, std::string&& entry_point);
    PipelineStage(const PipelineStage&) = delete;
    PipelineStage& operator=(const PipelineStage&) = delete;
    PipelineStage(PipelineStage&& stage)
        : device_(stage.device_),
          stage_idx_(stage.stage_idx_),
          shader_module_(stage.shader_module_),
          spirv_(std::move(stage.spirv_)),
          entry_point_(std::move(stage.entry_point_)) {
        stage.shader_module_ = VK_NULL_HANDLE;
    }
    PipelineStage& operator=(PipelineStage&& stage) = delete;
    ~PipelineStage();

    uint32_t GetIndex() const { return stage_idx_; }
    vksc::Device& GetDevice() const { return device_; }

    VkShaderModule GetShaderModule() const { return shader_module_; }
    const std::string& GetEntryPoint() const { return entry_point_; }

  protected:
    VkShaderModule CreateShaderModule(const Pipeline& pipeline, const std::vector<uint32_t>& spirv);

    vksc::Device& device_;
    uint32_t stage_idx_;
    VkShaderModule shader_module_;
    std::vector<uint32_t> spirv_;
    std::string entry_point_;
};

class Pipeline {
  public:
    Pipeline(const PipelineCache& pipeline_cache, const utils::UUID& id, uint64_t memory_size);
    Pipeline(const Pipeline&) = delete;
    Pipeline& operator=(const Pipeline&) = delete;
    Pipeline(Pipeline&&) = default;
    Pipeline& operator=(Pipeline&&) = delete;

    vksc::Device& GetDevice() const { return device_; }

    const utils::UUID& ID() const { return id_; }
    uint64_t GetMemorySize() const { return memory_size_; }

    bool AddStage(PipelineStage&& stage) {
        if (stage.GetShaderModule() != VK_NULL_HANDLE) {
            stages_.emplace_back(std::move(stage));
            return true;
        } else {
            return false;
        }
    }

    const PipelineStage& GetStage(uint32_t stage_idx) const { return stages_[stage_idx]; }

  protected:
    vksc::Device& device_;
    utils::UUID id_;
    uint64_t memory_size_;
    std::vector<PipelineStage> stages_;
};

class PipelineCache {
  public:
    PipelineCache(vksc::Device& device, const VkDeviceCreateInfo& device_create_info, const VkPipelineCacheCreateInfo& create_info);
    PipelineCache(const PipelineCache&) = delete;
    PipelineCache& operator=(const PipelineCache&) = delete;
    PipelineCache(PipelineCache&&) = default;
    PipelineCache& operator=(PipelineCache&&) = delete;

    bool IsValid() const { return valid_; }

    vksc::Device& GetDevice() const { return device_; }

    const Pipeline* GetPipeline(const utils::UUID& id) const {
        auto it = pipelines_.find(id);
        if (it != pipelines_.end()) {
            return &it->second;
        } else {
            return nullptr;
        }
    }

    static const PipelineCache* FromHandle(VkPipelineCache handle) { return reinterpret_cast<const PipelineCache*>(handle); }
    VkPipelineCache VkSCHandle() { return reinterpret_cast<VkPipelineCache>(this); }

  protected:
    spv_target_env GetSpirvEnv() const;
    void AdjustValidatorOptions(const VkDeviceCreateInfo& device_create_info, spvtools::ValidatorOptions& options);

    bool ValidatePipelineCacheDataHeader(const icd::PipelineCacheData& data);
    bool ValidatePipelineCacheDataEntry(const VkDeviceCreateInfo& device_create_info, const icd::PipelineCacheData& data,
                                        uint32_t pipeline_idx, std::vector<std::string>* entry_points);

    bool valid_{true};

    vksc::Device& device_;
    std::unordered_map<utils::UUID, Pipeline> pipelines_;
};

}  // namespace icd
