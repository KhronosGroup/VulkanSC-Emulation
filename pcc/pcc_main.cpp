/*
 * Copyright (c) 2024 The Khronos Group Inc.
 * Copyright (c) 2024 RasterGrid Kft.
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#include "pcc_log.h"
#include "pcc_builder.h"
#include "uuid.h"

#include <cxxopts.hpp>
#include <json/json.h>
#include <stdlib.h>
#include <stdio.h>
#include <optional>
#include <algorithm>
#include <filesystem>
#include <unordered_map>

Logger logger{};

static Json::Value load_json_file(const std::filesystem::path& filepath) {
    std::ifstream file(filepath);
    if (!file.is_open()) {
        return Json::nullValue;
    }

    std::string errors;
    Json::CharReaderBuilder builder;
    Json::Value result = Json::nullValue;
    if (!Json::parseFromStream(builder, file, &result, &errors)) {
        logger.Write(logger.ERROR, "failed to parse JSON file '%s'\n%s\n", filepath.c_str(), errors.c_str());
        return Json::nullValue;
    }

    return result;
}

static std::optional<std::vector<std::vector<uint32_t>>> load_shader_spirv(const std::string& path, const Json::Value& stages,
                                                                           const Json::Value& filenames) {
    std::optional<std::vector<std::vector<uint32_t>>> result{};
    uint32_t stage_count = stages.isArray() ? stages.size() : 1;

    // Collect the set of stages in the pipeline
    std::unordered_map<std::string, uint32_t> stage_indices{};
    for (uint32_t stage_idx = 0; stage_idx < stage_count; ++stage_idx) {
        auto stage = stages.isArray() ? stages[stage_idx]["stage"].asString() : stages["stage"].asString();
        // TODO: We should validate whether the stage is a valid VkShaderStageFlagBits value
        // because the pipeline JSON schema is not validating that
        if (!stage_indices.insert(std::make_pair(stage, stage_idx)).second) {
            logger.Write(logger.ERROR, "Duplicate stage (%s) in pipeline creation info\n", stage.c_str());
            result.reset();
            return result;
        }
    }

    // Cross-validate the stages specified in the ShaderFileNames array
    std::vector<uint32_t> filename_stage_index_remap;
    for (uint32_t file_idx = 0; file_idx < stage_count; ++file_idx) {
        auto stage = filenames[file_idx]["stage"].asString();
        // TODO: We should validate whether the stage is a valid VkShaderStageFlagBits value
        // because the pipeline JSON schema is not validating that
        auto stage_index = stage_indices.find(stage);
        if (stage_index != stage_indices.end()) {
            filename_stage_index_remap.push_back(stage_index->second);
            stage_indices.erase(stage);
        } else {
            logger.Write(logger.ERROR, "No matching stage (%s) found in pipeline creation info for ShaderFileNames[%u]\n",
                         stage.c_str(), file_idx);
            result.reset();
            return result;
        }
    }

    // Load and validate SPIR-V files
    logger.Write(logger.INFO, "Loading shaders:\n");
    result = std::vector<std::vector<uint32_t>>(stage_count);
    for (uint32_t file_idx = 0; file_idx < stage_count; ++file_idx) {
        uint32_t stage_idx = filename_stage_index_remap[file_idx];

        auto filename = filenames[file_idx]["filename"].asString();
        if (filename.size() > 0) {
            std::filesystem::path filepath = path;
            filepath += std::filesystem::path::preferred_separator;
            filepath += filename;

            logger.Write(logger.INFO, "  %s\n", filepath.c_str());

            FILE* fp = fopen(filepath.c_str(), "rb");
            if (!fp) {
                logger.Write(logger.ERROR, "Failed to open SPIR-V file '%s' for ShaderFileNames[%u]\n", filepath.c_str(), file_idx);
                result.reset();
                return result;
            }

            fseek(fp, 0, SEEK_END);
            auto file_size = ftell(fp);
            if (file_size % sizeof(uint32_t) != 0) {
                logger.Write(logger.ERROR, "Size of SPIR-V file '%s' (%ld) for ShaderFileNames[%u] is not a multiple of 4\n",
                             filepath.c_str(), file_size, file_idx);
                fclose(fp);
                result.reset();
                return result;
            }
            rewind(fp);

            auto& spirv = (*result)[stage_idx];
            spirv.resize(file_size / sizeof(uint32_t));
            size_t read_count = fread(spirv.data(), sizeof(uint32_t), spirv.size(), fp);
            if (read_count != spirv.size()) {
                logger.Write(logger.ERROR, "Failed to read SPIR-V file '%s' for ShaderFileNames[%u]\n", filepath.c_str(), file_idx);
                fclose(fp);
                result.reset();
                return result;
            }

            // TODO: Validate SPIR-V

            fclose(fp);
        } else {
            logger.Write(logger.ERROR, "Invalid filename in ShaderFileNames[%u]\n", file_idx);
            result.reset();
            return result;
        }
    }

    return result;
}

int main(int argc, char* argv[]) {
    cxxopts::Options options(argv[0], "Pipeline Cache Compiler for Vulkan SC Emulation on Vulkan ICD");
    options.add_options()("prefix", "Pipeline JSON file name prefix used to select the subset of JSON files to compile.",
                          cxxopts::value<std::string>(), "<prefix>")(
        "path",
        "Path containing pipeline JSON files. All JSON files will be parsed in the path that start with the specified prefix.",
        cxxopts::value<std::string>(), "<path>")("out", "Output file name.", cxxopts::value<std::string>(), "<filename>")(
        "hex", "Output C++ hex string to enable embedding the binary in source code.",
        cxxopts::value<bool>()->default_value("false"))(
        "debug", "Include pipeline and SPIR-V debug data (always included when outputting device independent pipeline cache).",
        cxxopts::value<bool>()->default_value("true"))("log", "Log file name.", cxxopts::value<std::string>(), "<filename>")(
        "help", "Show this help.");

    cxxopts::ParseResult args{};
    try {
        args = options.parse(argc, argv);
    } catch (cxxopts::exceptions::exception& excp) {
        logger.Write(logger.ERROR, "%s\n", excp.what());
        printf("%s\n", options.help().c_str());
        return EXIT_FAILURE;
    }

    if (args.count("help")) {
        printf("%s\n", options.help().c_str());
        return EXIT_SUCCESS;
    }

    if (!args.count("path") || !args.count("out")) {
        logger.Write(logger.ERROR, "Missing arguments (--path and --out are required)\n");
        printf("%s\n", options.help().c_str());
        return EXIT_FAILURE;
    }

    if (args.count("log")) {
        auto log_filename = args["log"].as<std::string>();
        if (!logger.SetLogFile(log_filename)) {
            logger.Write(logger.ERROR, "Failed to open logger file '%s'\n", log_filename.c_str());
        }
    }

    std::string path = args["path"].as<std::string>();
    std::string out = args["out"].as<std::string>();
    std::optional<std::string> prefix{};
    if (args.count("prefix")) {
        prefix = args["prefix"].as<std::string>();
    }

    if (!std::filesystem::is_directory(path)) {
        logger.Write(logger.ERROR, "'%s' is not a valid directory\n", path.c_str());
        return EXIT_FAILURE;
    }

    // Parse all JSON files in the source path
    struct PipelineInfo {
        utils::UUID uuid{};
        std::string minified_json{};
        std::vector<std::vector<uint32_t>> spirv{};
        uint64_t pipeline_memory_size{0};
    };
    std::vector<PipelineInfo> pipelines;

    logger.Write(logger.INFO, "Reading JSON files from '%s'\n", path.c_str());
    for (const auto& entry : std::filesystem::directory_iterator(path)) {
        PipelineInfo pipeline_info{};

        // Skip directories
        if (!std::filesystem::is_regular_file(entry)) continue;

        auto filename = entry.path().filename();

        // Skip all files except JSON files
        if (filename.extension() != ".json") continue;

        // Skip all files whose name does not start with the specified prefix
        if (prefix.has_value() && std::mismatch(prefix->begin(), prefix->end(), filename.string().begin()).first != prefix->end())
            continue;

        // Load JSON file
        logger.Write(logger.INFO, "Parsing pipeline JSON '%s'\n", entry.path().c_str());
        auto json = load_json_file(entry.path());
        if (json == Json::nullValue) {
            return EXIT_FAILURE;
        }

        // TODO: Validate pipeline JSON
        // In its current form, the pipeline JSON schema is not very robust or type-safe
        // so there is limited benefit to trying to validate it.

        Json::FastWriter fast_writer;
        pipeline_info.minified_json = fast_writer.write(json);

        // Read pipeline UUID
        auto pipeline_uuid = json["PipelineUUID"];
        if (pipeline_uuid.isArray() && pipeline_uuid.size() == VK_UUID_SIZE) {
            for (uint32_t i = 0; i < VK_UUID_SIZE; ++i) {
                pipeline_info.uuid[i] = pipeline_uuid[i].asUInt();
            }
        } else {
            logger.Write(logger.ERROR, "Invalid or missing PipelineUUID\n");
            return EXIT_FAILURE;
        }

        // Collect SPIR-V data and cross-validate with pipeline state
        std::optional<std::vector<std::vector<uint32_t>>> spirv{};
        auto graphics_pipe_state = json["GraphicsPipelineState"];
        if (graphics_pipe_state != Json::nullValue) {
            uint32_t stage_count = graphics_pipe_state["GraphicsPipeline"]["stageCount"].asUInt();
            if (stage_count > 0) {
                auto shader_stages = graphics_pipe_state["GraphicsPipeline"]["pStages"];
                if (shader_stages.isArray() && shader_stages.size() == stage_count) {
                    auto shader_filenames = graphics_pipe_state["ShaderFileNames"];
                    if (shader_filenames.size() == stage_count) {
                        spirv = load_shader_spirv(path, shader_stages, shader_filenames);
                    } else {
                        logger.Write(logger.ERROR, "The size of ShaderFileNames array (%u) does not match stageCount (%u)",
                                     shader_filenames.size(), stage_count);
                    }
                } else {
                    logger.Write(logger.ERROR, "pStages is not an array with stageCount (%u) elements", stage_count);
                }
            } else {
                logger.Write(logger.ERROR, "stageCount is zero");
            }
        }
        auto compute_pipe_state = json["ComputePipelineState"];
        if (compute_pipe_state != Json::nullValue) {
            auto shader_filenames = compute_pipe_state["ShaderFileNames"];
            if (shader_filenames.size() == 1) {
                spirv = load_shader_spirv(path, compute_pipe_state["ComputePipeline"]["stage"], shader_filenames);
            } else {
                logger.Write(logger.ERROR, "The size of ShaderFileNames array (%u) is not 1 for compute pipeline\n",
                             shader_filenames.size());
            }
        }
        if (graphics_pipe_state == Json::nullValue && compute_pipe_state == Json::nullValue) {
            logger.Write(logger.ERROR, "No pipeline state found!\n");
            return EXIT_FAILURE;
        }
        if (spirv.has_value()) {
            pipeline_info.spirv = std::move(*spirv);
            // Calculate pipeline memory size as the sum of the sizes of the SPIR-V module data
            for (const auto& spv : pipeline_info.spirv) {
                pipeline_info.pipeline_memory_size += spv.size() * sizeof(uint32_t);
            }
        } else {
            logger.Write(logger.ERROR, "Failed to load SPIR-V data!\n");
            return EXIT_FAILURE;
        }

        pipelines.emplace_back(std::move(pipeline_info));

        logger.Write(logger.INFO, "Compiled pipeline JSON '%s' successfully.\n\n", entry.path().c_str());
    }

    // Build pipeline cache
    PipelineCacheBuilder builder;
    auto header = builder.AddHeader();
    header->headerVersionOne.vendorID = VK_VENDOR_ID_KHRONOS;
    header->headerVersionOne.deviceID = VK_DEVICE_ID_PORTABLE;
    utils::UUID(utils::EmulationPipelineCacheUUID).CopyToArray(header->headerVersionOne.pipelineCacheUUID);
    header->implementationData = VK_DRIVER_ID_VULKAN_SC_EMULATION_ON_VULKAN;

    std::vector<PipelineCacheBuilder::SCIndexEntry<>> pipeline_entries{};
    for (std::size_t i = 0; i < pipelines.size(); ++i) {
        pipeline_entries.emplace_back(builder.AddPipelineEntry(header, pipelines[i].uuid, pipelines[i].pipeline_memory_size));
    }
    for (std::size_t i = 0; i < pipelines.size(); ++i) {
        builder.AddStageValidation(pipeline_entries[i], pipelines[i].minified_json.c_str(), pipelines[i].spirv);
    }

    // Write out pipeline cache
    if (args["hex"].count()) {
        FILE* fp = fopen((out + ".hpp").c_str(), "w");
        if (!fp) {
            logger.Write(logger.ERROR, "Failed to open output file '%s.hpp'\n", out.c_str());
            return EXIT_FAILURE;
        }
        int status = fprintf(fp, "const int cache_size = %zu;\n", builder.GetData().size());
        if (status >= 0) {
            status = fprintf(fp, "const unsigned char cache_file[cache_size] = {\n");
        }
        for (std::size_t i = 0; i < builder.GetData().size(); ++i) {
            if (status < 0) break;
            uint8_t byte = builder.GetData()[i];
            if (i > 0) {
                if (i % 16 == 0) {
                    fprintf(fp, ",\n0x%02x", byte);
                } else {
                    fprintf(fp, ",0x%02x", byte);
                }
            } else {
                fprintf(fp, "0x%02x", byte);
            }
        }
        if (status >= 0) {
            status = fprintf(fp, "\n};\n");
        }
        if (status < 0) {
            logger.Write(logger.ERROR, "Failed to write pipeline cache data to '%s.hpp'\n", out.c_str());
            fclose(fp);
            return EXIT_FAILURE;
        }
        fclose(fp);
        logger.Write(logger.INFO, "Pipeline cache data written to '%s.hpp'\n", out.c_str());
    } else {
        FILE* fp = fopen(out.c_str(), "wb");
        if (!fp) {
            logger.Write(logger.ERROR, "Failed to open output file '%s'\n", out.c_str());
            return EXIT_FAILURE;
        }
        size_t write_count = fwrite(builder.GetData().data(), 1, builder.GetData().size(), fp);
        if (write_count != builder.GetData().size()) {
            logger.Write(logger.ERROR, "Failed to write pipeline cache data to '%s'\n", out.c_str());
            fclose(fp);
            return EXIT_FAILURE;
        }
        fclose(fp);
        logger.Write(logger.INFO, "Pipeline cache data written to '%s'\n", out.c_str());
    }

    return EXIT_SUCCESS;
}
