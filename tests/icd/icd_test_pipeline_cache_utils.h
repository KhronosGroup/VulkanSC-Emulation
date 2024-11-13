/*
 * Copyright (c) 2024 The Khronos Group Inc.
 * Copyright (c) 2024 RasterGrid Kft.
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#pragma once

#include "icd_test_framework.h"
#include "pcc_builder.h"

#include <spirv-tools/libspirv.h>
#include <memory>
#include <vector>
#include <unordered_set>

struct PipelineStageDesc {
    std::vector<uint32_t> spirv_stages;
};

struct PipelineDesc {
    const char* uuid;
    VkDeviceSize memory_size;
    const char* json;
    std::vector<std::vector<uint32_t>> spirv_stages;
};

struct PipelineCacheDesc {
    std::vector<PipelineDesc> pipelines{};
};

struct PipelinePoolDesc {
    VkDeviceSize size;
    uint32_t count;
};

struct PipelineCacheInfo {
    std::vector<PipelineCacheBuilder> builders{};

    std::vector<PipelinePoolDesc> in_pipeline_pools{};
    std::vector<PipelineCacheDesc> in_pipeline_caches{};

    std::vector<VkPipelinePoolSize> out_pipeline_pool_sizes{};
    std::vector<VkPipelineCacheCreateInfo> out_pipeline_cache_create_info{};

    VkDeviceObjectReservationCreateInfo out_object_reservation_info{};
};

class VkMockShaderModules {
  public:
    VkMockShaderModules(const PipelineCacheInfo& info);
    void VerifyShaderModulesCreated();
    void VerifyShaderModulesDestroyed();

    std::size_t GetTotalShaderModuleCount() const { return mock_objects_.size(); }

    std::size_t GetShaderModuleCount(uint32_t cache_index, const char* pipeline_uuid) const {
        if (cache_index >= per_pipeline_mock_objects_.size()) {
            return 0;
        } else {
            auto it = per_pipeline_mock_objects_[cache_index].find(utils::UUID(pipeline_uuid));
            if (it == per_pipeline_mock_objects_[cache_index].end()) {
                return 0;
            } else {
                return it->second.size();
            }
        }
    }

    VkShaderModule GetShaderModule(uint32_t cache_index, const char* pipeline_uuid, uint32_t stage_index) const {
        if (cache_index >= per_pipeline_mock_objects_.size()) {
            return VK_NULL_HANDLE;
        } else {
            auto it = per_pipeline_mock_objects_[cache_index].find(utils::UUID(pipeline_uuid));
            if (it == per_pipeline_mock_objects_[cache_index].end() || stage_index >= it->second.size()) {
                return VK_NULL_HANDLE;
            } else {
                return it->second[stage_index]->handle();
            }
        }
    }

  private:
    const PipelineCacheInfo& info_;
    uint32_t cache_index_;
    uint32_t pipeline_index_;
    uint32_t stage_index_;
    std::unordered_set<VkShaderModule> mock_objects_;

    // Indexed by cache index, keyed by pipeline UUID, contains array of mock shader module objects
    // NOTE: We only use a shared_ptr here instead of unique_ptr because the MSVC STL does not do the
    // reasonable thing for a C++ spec typo that does not require unordered_map's move constructor
    // to be noexcept (see https://github.com/microsoft/STL/issues/5084)
    std::vector<std::unordered_map<utils::UUID, std::vector<std::shared_ptr<VkMockObject<VkShaderModule>>>>>
        per_pipeline_mock_objects_;
};

std::vector<uint32_t> CompileSPV(const char* spv, const spv_target_env target_env = SPV_ENV_VULKAN_1_2);

void BuildPipelineCaches(PipelineCacheInfo& info);

[[maybe_unused]] static char const kSampleComputePipelineJson[] = R"json(
    {
        "ComputePipelineState": {
            "YcbcrSamplers": [],
            "ImmutableSamplers": [],
            "DescriptorSetLayouts": [],
            "PipelineLayout": {
                "sType": "VK_STRUCTURE_TYPE_PIPELINE_LAYOUT_CREATE_INFO",
                "pNext": "NULL",
                "flags": 0,
                "setLayoutCount": 0,
                "pSetLayouts": "NULL",
                "pushConstantRangeCount": 0,
                "pPushConstantRanges": "NULL"
            },
            "ComputePipeline": {
                "sType": "VK_STRUCTURE_TYPE_COMPUTE_PIPELINE_CREATE_INFO",
                "pNext": "NULL",
                "flags": "0",
                "stage": {
                    "sType": "VK_STRUCTURE_TYPE_PIPELINE_SHADER_STAGE_CREATE_INFO",
                    "pNext": "NULL",
                    "flags": "0",
                    "stage": "VK_SHADER_STAGE_COMPUTE_BIT",
                    "module": "",
                    "pName": "main",
                    "pSpecializationInfo": "NULL"
                },
                "layout": "",
                "basePipelineHandle": "",
                "basePipelineIndex": 0
            }
        }
    }
)json";

[[maybe_unused]] static char const kSampleGraphicsPipelineJson[] = R"json(
    {
        "GraphicsPipelineState": {
            "Renderpass": {
                "sType": "VK_STRUCTURE_TYPE_RENDER_PASS_CREATE_INFO",
                "pNext":"NULL",
                "flags": "0",
                "attachmentCount": 0,
                "pAttachments": [],
                "subpassCount": 1,
                "pSubpasses": [
                    {
                        "flags": "0",
                        "pipelineBindPoint": "VK_PIPELINE_BIND_POINT_GRAPHICS",
                        "inputAttachmentCount": 0,
                        "pInputAttachments": "NULL",
                        "colorAttachmentCount" : 0,
                        "pColorAttachments": "NULL",
                        "pResolveAttachments": "NULL",
                        "pDepthStencilAttachment": "NULL",
                        "preserveAttachmentCount": 0,
                        "pPreserveAttachments": "NULL"
                    }
                ],
                "dependencyCount": 0,
                "pDependencies": "NULL"
            },
            "YcbcrSamplers": [],
            "ImmutableSamplers": [],
            "DescriptorSetLayouts": [],
            "PipelineLayout": {
                "sType": "VK_STRUCTURE_TYPE_PIPELINE_LAYOUT_CREATE_INFO",
                "pNext": "NULL",
                "flags": 0,
                "setLayoutCount": 0,
                "pSetLayouts": "NULL",
                "pushConstantRangeCount": 0,
                "pPushConstantRanges": "NULL"
            },
            "GraphicsPipeline": {
                "sType": "VK_STRUCTURE_TYPE_GRAPHICS_PIPELINE_CREATE_INFO",
                "pNext": "NULL",
                "flags": "0",
                "stageCount": 2,
                "pStages": [
                    {
                        "sType": "VK_STRUCTURE_TYPE_PIPELINE_SHADER_STAGE_CREATE_INFO",
                        "pNext": "NULL",
                        "flags": "0",
                        "stage": "VK_SHADER_STAGE_VERTEX_BIT",
                        "module": "",
                        "pName": "main",
                        "pSpecializationInfo": "NULL"
                    },
                    {
                        "sType": "VK_STRUCTURE_TYPE_PIPELINE_SHADER_STAGE_CREATE_INFO",
                        "pNext": "NULL",
                        "flags": "0",
                        "stage": "VK_SHADER_STAGE_FRAGMENT_BIT",
                        "module": "",
                        "pName": "main",
                        "pSpecializationInfo": "NULL"
                    }
                ],
                "pVertexInputState": "NULL",
                "pInputAssemblyState": {
                    "sType": "VK_STRUCTURE_TYPE_PIPELINE_INPUT_ASSEMBLY_STATE_CREATE_INFO",
                    "pNext": "NULL",
                    "flags": 0,
                    "topology": "VK_PRIMITIVE_TOPOLOGY_TRIANGLE_LIST",
                    "primitiveRestartEnable": "VK_FALSE"
                },
                "pTessellationState": "NULL",
                "pViewportState": {
                    "sType": "VK_STRUCTURE_TYPE_PIPELINE_VIEWPORT_STATE_CREATE_INFO",
                    "pNext": "NULL",
                    "flags": 0,
                    "viewportCount": 1,
                    "pViewports": "NULL",
                    "scissorCount": 1,
                    "pScissors": "NULL"
                },
                "pRasterizationState": {
                    "sType": "VK_STRUCTURE_TYPE_PIPELINE_RASTERIZATION_STATE_CREATE_INFO",
                    "pNext":"NULL",
                    "flags": 0,
                    "depthClampEnable": "VK_FALSE",
                    "rasterizerDiscardEnable": "VK_FALSE",
                    "polygonMode": "VK_POLYGON_MODE_FILL",
                    "cullMode": "0",
                    "frontFace": "VK_FRONT_FACE_COUNTER_CLOCKWISE",
                    "depthBiasEnable": "VK_FALSE",
                    "depthBiasConstantFactor" : 0,
                    "depthBiasClamp": 0,
                    "depthBiasSlopeFactor" : 0,
                    "lineWidth": 1
                },
                "pMultisampleState": {
                    "sType": "VK_STRUCTURE_TYPE_PIPELINE_MULTISAMPLE_STATE_CREATE_INFO",
                    "pNext": "NULL",
                    "flags": 0,
                    "rasterizationSamples": "VK_SAMPLE_COUNT_1_BIT",
                    "sampleShadingEnable": "VK_FALSE",
                    "minSampleShading": 0,
                    "pSampleMask": "NULL",
                    "alphaToCoverageEnable": "VK_FALSE",
                    "alphaToOneEnable": "VK_FALSE"
                },
                "pDepthStencilState": "NULL",
                "pColorBlendState": {
                    "sType": "VK_STRUCTURE_TYPE_PIPELINE_COLOR_BLEND_STATE_CREATE_INFO",
                    "pNext": "NULL",
                    "flags": "0",
                    "logicOpEnable": "VK_FALSE",
                    "logicOp": "VK_LOGIC_OP_CLEAR",
                    "attachmentCount": 0,
                    "pAttachments": "NULL",
                    "blendConstants": [ 0, 0, 0, 0 ]
                },
                "pDynamicState": {
                    "sType": "VK_STRUCTURE_TYPE_PIPELINE_DYNAMIC_STATE_CREATE_INFO",
                    "pNext": "NULL",
                    "flags": 0,
                    "dynamicStateCount": 2,
                    "pDynamicStates": [
                        "VK_DYNAMIC_STATE_VIEWPORT",
                        "VK_DYNAMIC_STATE_SCISSOR"
                    ]
                },
                "layout": "",
                "renderPass": "",
                "subpass": 0,
                "basePipelineHandle": "",
                "basePipelineIndex": 0
            }
        }
    }
)json";

[[maybe_unused]] static char const kSampleComputeShaderSpv[] = R"spirv(
            OpCapability Shader
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

[[maybe_unused]] static char const kSampleVertexShaderSpv[] = R"spirv(
            OpCapability Shader
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

[[maybe_unused]] static char const kSampleFragmentShaderSpv[] = R"spirv(
            OpCapability Shader
            OpCapability ImageBuffer
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
