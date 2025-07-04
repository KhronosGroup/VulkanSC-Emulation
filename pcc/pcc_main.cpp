/*
 * Copyright (c) 2024-2025 The Khronos Group Inc.
 * Copyright (c) 2024-2025 RasterGrid Kft.
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#include "pcc_log.h"
#include "pcc_builder.h"
#include "uuid.h"

#include "base64.h"
#include <cxxopts.hpp>
#include <json/json.h>
#include <spirv-tools/libspirv.hpp>
#include <spirv-tools/optimizer.hpp>
#include <spirv/unified1/spirv.hpp>
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
        logger.Write(logger.kError, "failed to parse JSON file '%s'\n%s\n", filepath.c_str(), errors.c_str());
        return Json::nullValue;
    }

    return result;
}

static bool validate_spirv(const Json::Value& enabled_extensions, const Json::Value& pipeline_state, const Json::Value& stage_info,
                           std::vector<uint32_t>* spirv, bool spirv_dis) {
    spv_result_t spv_valid = SPV_SUCCESS;
    spv_target_env target_env = SPV_ENV_VULKAN_1_2;
    spv_context ctx = spvContextCreate(target_env);
    spv_const_binary_t binary{spirv->data(), spirv->size()};
    spv_diagnostic diag = nullptr;
    spvtools::ValidatorOptions options;

    // Adjust SPIR-V validation options based on the enabled extensions and features
    if (enabled_extensions.isArray()) {
        for (Json::ArrayIndex ext_idx = 0; ext_idx < enabled_extensions.size(); ++ext_idx) {
            if (enabled_extensions[ext_idx].asString() == "VK_KHR_relaxed_block_layout") {
                options.SetRelaxBlockLayout(true);
            }
        }
    }
    auto features_struct = pipeline_state["PhysicalDeviceFeatures"]["pNext"];
    while (features_struct.isObject()) {
        auto is_feature_enabled = [&](const char* feature) {
            // The pipeline JSON really ought to represent boolean struct members as JSON bools.
            // As ill fate would have it, they're currently stored as C macro strings.
            return (features_struct[feature].isBool() && features_struct[feature].asBool()) ||
                   (features_struct[feature].isString() && features_struct[feature].asString() == "VK_TRUE");
        };
        if (is_feature_enabled("uniformBufferStandardLayout")) {
            options.SetUniformBufferStandardLayout(true);
        }
        if (is_feature_enabled("scalarBlockLayout")) {
            options.SetScalarBlockLayout(true);
        }
        features_struct = features_struct["pNext"];
    }

    // Validate without specialization constants
    spv_valid = spvValidateWithOptions(ctx, options, &binary, &diag);
    if (spv_valid != SPV_SUCCESS) {
        if (spv_valid == SPV_WARNING) {
            logger.Write(logger.kWarning, "spirv-val: %s\n", diag && diag->error ? diag->error : "(no error text)");
        } else {
            logger.Write(logger.kError, "spirv-val: %s\n", diag && diag->error ? diag->error : "(no error text)");
        }
    }
    spvDiagnosticDestroy(diag);

    if (spirv_dis) {
        spv_text text = nullptr;
        spv_result_t error = spvBinaryToText(ctx, spirv->data(), spirv->size(), SPV_BINARY_TO_TEXT_OPTION_INDENT, &text, &diag);
        if (error) {
            logger.Write(logger.kError, "spirv-dis: %s\n", diag && diag->error ? diag->error : "(no error text)");
            spvDiagnosticDestroy(diag);
        } else {
            logger.Write(logger.kInfo, "spirv-dis:\n%s\n", text->str);
            spvTextDestroy(text);
        }
    }

    // Check entry point
    auto stage_flag = stage_info["stage"].asString();
    auto entry_point_name = stage_info["pName"];
    if (entry_point_name.isString()) {
        bool entry_point_found = false;
        spvtools::SpirvTools parser(target_env);
        parser.Parse(
            *spirv, [](const spv_endianness_t endianess, const spv_parsed_header_t& instruction) { return SPV_SUCCESS; },
            [&](const spv_parsed_instruction_t& instruction) {
                if (instruction.opcode == spv::OpEntryPoint) {
                    auto name = reinterpret_cast<const char*>(&instruction.words[3]);
                    if (name == entry_point_name.asString()) {
                        auto exec_model = spv::ExecutionModel(instruction.words[1]);
                        switch (exec_model) {
                            case spv::ExecutionModelVertex:
                                if (stage_flag != "VK_SHADER_STAGE_VERTEX_BIT") {
                                    logger.Write(
                                        logger.kError,
                                        "Pipeline stage flag (%s) incompatible with ExecutionModelVertex for entry point '%s'\n",
                                        stage_flag.c_str(), entry_point_name.asCString());
                                }
                                break;
                            case spv::ExecutionModelTessellationControl:
                                if (stage_flag != "VK_SHADER_STAGE_TESSELLATION_CONTROL_BIT") {
                                    logger.Write(logger.kError,
                                                 "Pipeline stage flag (%s) incompatible with ExecutionModelTessellationControl for "
                                                 "entry point '%s'\n",
                                                 stage_flag.c_str(), entry_point_name.asCString());
                                }
                                break;
                            case spv::ExecutionModelTessellationEvaluation:
                                if (stage_flag != "VK_SHADER_STAGE_TESSELLATION_EVALUATION_BIT") {
                                    logger.Write(logger.kError,
                                                 "Pipeline stage flag (%s) incompatible with ExecutionModelTessellationEvaluation "
                                                 "for entry point '%s'\n",
                                                 stage_flag.c_str(), entry_point_name.asCString());
                                }
                                break;
                            case spv::ExecutionModelGeometry:
                                if (stage_flag != "VK_SHADER_STAGE_GEOMETRY_BIT") {
                                    logger.Write(
                                        logger.kError,
                                        "Pipeline stage flag (%s) incompatible with ExecutionModelGeometry for entry point '%s'\n",
                                        stage_flag.c_str(), entry_point_name.asCString());
                                }
                                break;
                            case spv::ExecutionModelFragment:
                                if (stage_flag != "VK_SHADER_STAGE_FRAGMENT_BIT") {
                                    logger.Write(
                                        logger.kError,
                                        "Pipeline stage flag (%s) incompatible with ExecutionModelFragment for entry point '%s'\n",
                                        stage_flag.c_str(), entry_point_name.asCString());
                                }
                                break;
                            case spv::ExecutionModelGLCompute:
                                if (stage_flag != "VK_SHADER_STAGE_COMPUTE_BIT") {
                                    logger.Write(
                                        logger.kError,
                                        "Pipeline stage flag (%s) incompatible with ExecutionModelGLCompute for entry point '%s'\n",
                                        stage_flag.c_str(), entry_point_name.asCString());
                                }
                                break;
                            default:
                                logger.Write(logger.kError, "Unsupported execution model (%d) for entry point '%s'\n", exec_model,
                                             entry_point_name.asCString());
                                break;
                        }
                        entry_point_found = true;
                    }
                }
                return SPV_SUCCESS;
            },
            nullptr);
        if (!entry_point_found) {
            logger.Write(logger.kError, "Entry point '%s' not found!\n", entry_point_name.asCString());
        }
    } else {
        logger.Write(logger.kError, "Missing entry point name from stage info\n");
    }

    // Apply specialization constants, if needed
    auto specialization_info = stage_info["pSpecializationInfo"];
    if (specialization_info.isObject() && (spv_valid == SPV_SUCCESS || spv_valid == SPV_WARNING)) {
        // First we check if the spec info well formed and has any meaningful payload (CTS captures tell us this is needed)
        auto map_entry_count = specialization_info["mapEntryCount"];
        auto map_entries = specialization_info["pMapEntries"];
        auto data_size = specialization_info["dataSize"];
        auto specialization_data = specialization_info["pData"];

        bool map_entry_count_valid = map_entry_count.isUInt() && map_entry_count.asUInt() != 0;
        bool map_entries_valid = map_entries.isArray() || (map_entries.isString() && map_entries.asString() == "NULL");
        bool data_size_valid = data_size.isUInt() && data_size.asUInt() != 0;
        bool specialization_data_valid = specialization_data.isArray() || specialization_data.isString();

        if (map_entry_count_valid && map_entries_valid && data_size_valid && specialization_data_valid) {
            // Then we need to flatten group decorations in case there are any
            std::vector<uint32_t> flattened_spirv{};
            {
                spvtools::Optimizer optimizer(target_env);
                optimizer.RegisterPass(spvtools::CreateFlattenDecorationPass());
                optimizer.Run(binary.code, binary.wordCount, &flattened_spirv, spvtools::ValidatorOptions(), true);
            }

            // Then parse SPIR-V instructions to collect the SPIR-V ID of specialization constant IDs
            std::unordered_map<uint32_t, uint32_t> id_to_spec_id;
            spvtools::SpirvTools parser(target_env);
            parser.Parse(
                *spirv, [](const spv_endianness_t endianess, const spv_parsed_header_t& instruction) { return SPV_SUCCESS; },
                [&](const spv_parsed_instruction_t& instruction) {
                    if (instruction.opcode == spv::OpDecorate && instruction.words[2] == spv::DecorationSpecId) {
                        id_to_spec_id[instruction.words[1]] = instruction.words[3];
                    }
                    return SPV_SUCCESS;
                },
                nullptr);

            // Now we can apply the specialization info
            std::vector<uint32_t> specialized_spirv{};
            auto map_entry_count_val = specialization_info["mapEntryCount"].asUInt();
            auto data_size_val = specialization_info["dataSize"].asUInt();

            std::vector<uint8_t> data;
            bool data_parsed = false;
            if (specialization_data.isArray()) {
                // Parse specialization data as array
                if (specialization_data.size() == data_size_val) {
                    data.resize(data_size_val);
                    for (uint32_t data_idx = 0; data_idx < data.size(); ++data_idx) {
                        data[data_idx] = specialization_data[data_idx].asUInt();
                    }
                    data_parsed = true;
                }
            } else if (specialization_data.isString()) {
                // Parse specialization data as Base64 string
                auto parsed_data = utils::decode_base64(specialization_data.asString());
                if (parsed_data.has_value() && parsed_data->size() == data_size_val) {
                    data = std::move(*parsed_data);
                    data_parsed = true;
                }
            }

            if (data_parsed && map_entries.isArray() && map_entries.size() == map_entry_count_val) {
                // Initialize ID value map for applying specialization data
                std::unordered_map<uint32_t, std::vector<uint32_t>> id_value_map{};
                id_value_map.reserve(map_entry_count_val);
                for (const auto& it : id_to_spec_id) {
                    const uint32_t spec_id = it.second;

                    // Find specialization map entry
                    VkSpecializationMapEntry map_entry = {UINT32_MAX, 0, 0};
                    for (uint32_t map_entry_idx = 0; map_entry_idx < map_entry_count_val; ++map_entry_idx) {
                        if (map_entries[map_entry_idx]["constantID"].asUInt() == spec_id) {
                            map_entry.constantID = spec_id;
                            map_entry.offset = map_entries[map_entry_idx]["offset"].asUInt();
                            map_entry.size = map_entries[map_entry_idx]["size"].asUInt();
                            break;
                        }
                    }
                    if (map_entry.constantID == UINT32_MAX) continue;

                    std::vector<uint32_t> entry_data((map_entry.size + sizeof(uint32_t) - 1) / sizeof(uint32_t), 0);
                    const uint8_t* map_data = reinterpret_cast<const uint8_t*>(data.data()) + map_entry.offset;
                    memcpy(entry_data.data(), map_data, map_entry.size);
                    id_value_map.emplace(map_entry.constantID, std::move(entry_data));
                }

                // Finally, apply the optimizer steps
                {
                    spvtools::Optimizer optimizer(target_env);
                    optimizer.RegisterPass(spvtools::CreateSetSpecConstantDefaultValuePass(id_value_map));
                    optimizer.RegisterPass(spvtools::CreateFreezeSpecConstantValuePass());
                    // Pass doesn't support OpQuantizeF16
                    // optimizer.RegisterPass(spvtools::CreateFoldSpecConstantOpAndCompositePass());
                    if (!optimizer.Run(flattened_spirv.data(), flattened_spirv.size(), &specialized_spirv, options, true)) {
                        logger.Write(logger.kError, "Failed to apply specialized constants\n");
                        specialized_spirv.clear();
                        spv_valid = SPV_ERROR_INVALID_BINARY;
                    }
                }
            } else {
                logger.Write(logger.kError, "Invalid SPIR-V specialization info\n");
                spv_valid = SPV_ERROR_INVALID_BINARY;
            }

            // Now we only have to revalidate specialized SPIR-V code
            if (specialized_spirv.size() > 0) {
                spv_const_binary_t specialized_binary{specialized_spirv.data(), specialized_spirv.size()};
                spv_valid = spvValidateWithOptions(ctx, options, &specialized_binary, &diag);
                if (spv_valid != SPV_SUCCESS) {
                    if (spv_valid == SPV_WARNING) {
                        logger.Write(logger.kWarning, "spirv-val: %s\n", diag && diag->error ? diag->error : "(no error text)");
                    } else {
                        logger.Write(logger.kError, "spirv-val: %s\n", diag && diag->error ? diag->error : "(no error text)");
                    }
                }
                spvDiagnosticDestroy(diag);
            }

            // We will store the specialized SPIR-V binary in the pipeline cache to not have to redo this on the ICD side
            *spirv = specialized_spirv;

            if (spirv_dis) {
                spv_text text = nullptr;
                spv_result_t error =
                    spvBinaryToText(ctx, spirv->data(), spirv->size(), SPV_BINARY_TO_TEXT_OPTION_INDENT, &text, &diag);
                if (error) {
                    logger.Write(logger.kError, "spirv-dis (after specialization): %s\n",
                                 diag && diag->error ? diag->error : "(no error text)");
                    spvDiagnosticDestroy(diag);
                } else {
                    logger.Write(logger.kInfo, "spirv-dis (after specialization):\n%s\n", text->str);
                    spvTextDestroy(text);
                }
            }
        }
    }

    spvContextDestroy(ctx);

    return spv_valid == SPV_SUCCESS || spv_valid == SPV_WARNING;
}

static std::optional<std::vector<std::vector<uint32_t>>> load_shader_spirv(const std::string& path,
                                                                           const Json::Value& enabled_extensions,
                                                                           const Json::Value& pipeline_state,
                                                                           const Json::Value& stages, bool spirv_dis) {
    std::optional<std::vector<std::vector<uint32_t>>> result{};
    uint32_t stage_count = stages.isArray() ? stages.size() : 1;
    auto filenames = pipeline_state["ShaderFileNames"];

    // Collect the set of stages in the pipeline
    std::unordered_map<std::string, uint32_t> stage_indices{};
    for (uint32_t stage_idx = 0; stage_idx < stage_count; ++stage_idx) {
        auto stage = stages.isArray() ? stages[stage_idx]["stage"].asString() : stages["stage"].asString();
        // TODO: We should validate whether the stage is a valid VkShaderStageFlagBits value
        // because the pipeline JSON schema is not validating that
        if (!stage_indices.insert(std::make_pair(stage, stage_idx)).second) {
            logger.Write(logger.kError, "Duplicate stage (%s) in pipeline creation info\n", stage.c_str());
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
            logger.Write(logger.kError, "No matching stage (%s) found in pipeline creation info for ShaderFileNames[%u]\n",
                         stage.c_str(), file_idx);
            result.reset();
            return result;
        }
    }

    // Load and validate SPIR-V files
    logger.Write(logger.kInfo, "Loading shaders:\n");
    result = std::vector<std::vector<uint32_t>>(stage_count);
    for (uint32_t file_idx = 0; file_idx < stage_count; ++file_idx) {
        uint32_t stage_idx = filename_stage_index_remap[file_idx];
        auto stage_info = stages.isArray() ? stages[stage_idx] : stages;

        auto filename = filenames[file_idx]["filename"].asString();
        if (filename.size() > 0) {
            std::filesystem::path filepath = path;
            filepath += std::filesystem::path::preferred_separator;
            filepath += filename;

            logger.Write(logger.kInfo, "  %s\n", filepath.string().c_str());

            FILE* fp = fopen(filepath.string().c_str(), "rb");
            if (!fp) {
                logger.Write(logger.kError, "Failed to open SPIR-V file '%s' for ShaderFileNames[%u]\n", filepath.string().c_str(),
                             file_idx);
                result.reset();
                return result;
            }

            fseek(fp, 0, SEEK_END);
            auto file_size = ftell(fp);
            if (file_size % sizeof(uint32_t) != 0) {
                logger.Write(logger.kError, "Size of SPIR-V file '%s' (%ld) for ShaderFileNames[%u] is not a multiple of 4\n",
                             filepath.string().c_str(), file_size, file_idx);
                fclose(fp);
                result.reset();
                return result;
            }
            rewind(fp);

            auto& spirv = (*result)[stage_idx];
            spirv.resize(file_size / sizeof(uint32_t));
            size_t read_count = fread(spirv.data(), sizeof(uint32_t), spirv.size(), fp);
            if (read_count != spirv.size()) {
                logger.Write(logger.kError, "Failed to read SPIR-V file '%s' for ShaderFileNames[%u]\n", filepath.string().c_str(),
                             file_idx);
                fclose(fp);
                result.reset();
                return result;
            }

            // Validate SPIR-V
            if (!validate_spirv(enabled_extensions, pipeline_state, stage_info, &spirv, spirv_dis)) {
                logger.Write(logger.kError, "Failed to validate SPIR-V file '%s' for ShaderFileNames[%u]\n",
                             filepath.string().c_str(), file_idx);
                fclose(fp);
                result.reset();
                return result;
            }

            fclose(fp);
        } else {
            logger.Write(logger.kError, "Invalid filename in ShaderFileNames[%u]\n", file_idx);
            result.reset();
            return result;
        }
    }

    return result;
}

int main(int argc, char* argv[]) {
    // clang-format off
    cxxopts::Options options(argv[0], "Pipeline Cache Compiler for Vulkan SC Emulation on Vulkan ICD");
    options.add_options()
        ("prefix", "Pipeline JSON file name prefix used to select the subset of JSON files to compile.",
            cxxopts::value<std::string>(), "<prefix>")
        ("path", "Path containing pipeline JSON files. All JSON files will be parsed in the path that start with the specified prefix.",
            cxxopts::value<std::string>(), "<path>")
        ("out", "Output file name.",
            cxxopts::value<std::string>(), "<filename>")
        ("mode", "UUID mode to use.",
            cxxopts::value<std::string>()->default_value("rfc4122"), "<rfc4122|autoincrement>")
        ("x,hex-bytes", "Output binary as comma separated C hexadecimals to enable embedding the binary in source code.",
            cxxopts::value<bool>()->default_value("false"))
        ("debug", "Include pipeline and SPIR-V debug data (always included when outputting device independent pipeline cache).",
            cxxopts::value<bool>()->default_value("true"))
        ("spirv-dis", "Output SPIR-V disassembly",
            cxxopts::value<bool>()->default_value("false"))
        ("log", "Log file name.",
            cxxopts::value<std::string>(), "<filename>")
        ("level", "Log Level.",
            cxxopts::value<std::string>(), "<info|warning|error|quiet>")
        ("help", "Show this help.");
    // clang-format on

    cxxopts::ParseResult args{};
    try {
        args = options.parse(argc, argv);
    } catch (cxxopts::exceptions::exception& excp) {
        logger.Write(logger.kError, "%s\n", excp.what());
        printf("%s\n", options.help().c_str());
        return EXIT_FAILURE;
    }

    if (args.count("help")) {
        printf("%s\n", options.help().c_str());
        return EXIT_SUCCESS;
    }

    if (args.count("level")) {
        if (args["level"].as<std::string>() == "info") {
            logger.SetLogLevel(Logger::Info);
        } else if (args["level"].as<std::string>() == "warning") {
            logger.SetLogLevel(Logger::Warning);
        } else if (args["level"].as<std::string>() == "error") {
            logger.SetLogLevel(Logger::Error);
        } else if (args["level"].as<std::string>() == "quiet") {
            logger.SetLogLevel(Logger::Quiet);
        } else {
            printf("%s\n", options.help().c_str());
            return EXIT_SUCCESS;
        }
    }

    if (!args.count("path") || !args.count("out")) {
        logger.Write(logger.kError, "Missing arguments (--path and --out are required)\n");
        printf("%s\n", options.help().c_str());
        return EXIT_FAILURE;
    }

    if (args.count("mode")) {
        auto mode = args["mode"].as<std::string>();
        if (mode != "rfc4122" && mode != "autoincrement") {
            logger.Write(logger.kError, "Invalid UUID mode specified: %s", mode.c_str());
            printf("%s\n", options.help().c_str());
            return EXIT_FAILURE;
        }
    }

    if (args.count("log")) {
        auto log_filename = args["log"].as<std::string>();
        if (!logger.SetLogFile(log_filename)) {
            logger.Write(logger.kError, "Failed to open logger file '%s'\n", log_filename.c_str());
        }
    }

    std::string path = args["path"].as<std::string>();
    std::string out = args["out"].as<std::string>();
    std::optional<std::string> prefix{};
    if (args.count("prefix")) {
        prefix = args["prefix"].as<std::string>();
    }
    auto uuid_mode =
        args["mode"].as<std::string>() == "autoincrement" ? utils::UUID::Mode::AutoIncrement : utils::UUID::Mode::RFC4122;

    if (!std::filesystem::is_directory(path)) {
        logger.Write(logger.kError, "'%s' is not a valid directory\n", path.c_str());
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

    logger.Write(logger.kInfo, "Reading JSON files from '%s'\n", path.c_str());
    // We preprocess the directory entries, because there are no guarantees on the order of traversal.
    // (MS-STL and libstdc++ disagree on the order of traversing a directory.)
    std::vector<std::filesystem::directory_entry> entries;
    auto is_pipeline_json_predicate = [=](const std::filesystem::directory_entry& entry) {
        if (!std::filesystem::is_regular_file(entry)) return false;

        if (!std::filesystem::is_regular_file(entry)) return false;

        if (!entry.path().has_filename() || entry.path().filename().extension() != ".json") return false;

        if (prefix.has_value()) {
            auto filename = entry.path().filename();
            // Skip all files whose name does not start with the specified prefix
            return std::mismatch(prefix->begin(), prefix->end(), filename.string().begin()).first == prefix->end();
        } else {
            return true;
        }
    };
    auto lexicographic_dir_entry_comparator = [](const std::filesystem::directory_entry& lhs,
                                                 const std::filesystem::directory_entry& rhs) {
        // Allocation eliding optimization assumes std::fs::path::native() orders alike on all platforms
        return lhs.path().native() < rhs.path().native();
    };
    std::copy_if(std::filesystem::directory_iterator(path), std::filesystem::directory_iterator(), std::back_inserter(entries),
                 is_pipeline_json_predicate);
    std::sort(entries.begin(), entries.end(), lexicographic_dir_entry_comparator);
    for (const auto& entry : entries) {
        PipelineInfo pipeline_info{};

        // Load JSON file
        logger.Write(logger.kInfo, "Parsing pipeline JSON '%s'\n", entry.path().string().c_str());
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
        if (pipeline_uuid.isNull()) {
            utils::UUID random_uuid(uuid_mode, pipeline_info.minified_json.c_str());
            logger.Write(logger.kInfo, "No PipelineUUID provided, embedding: %s\n", random_uuid.toString().c_str());
            for (uint32_t i = 0; i < VK_UUID_SIZE; ++i) {
                pipeline_info.uuid[i] = random_uuid[i];
            }
        } else if (pipeline_uuid.isArray() && pipeline_uuid.size() == VK_UUID_SIZE) {
            for (uint32_t i = 0; i < VK_UUID_SIZE; ++i) {
                pipeline_info.uuid[i] = pipeline_uuid[i].asUInt();
            }
        } else {
            logger.Write(logger.kError, "Invalid PipelineUUID\n");
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
                        spirv = load_shader_spirv(path, json["EnabledExtensions"], graphics_pipe_state, shader_stages,
                                                  args.count("spirv-dis"));
                    } else {
                        logger.Write(logger.kError, "The size of ShaderFileNames array (%u) does not match stageCount (%u)",
                                     shader_filenames.size(), stage_count);
                    }
                } else {
                    logger.Write(logger.kError, "pStages is not an array with stageCount (%u) elements", stage_count);
                }
            } else {
                logger.Write(logger.kError, "stageCount is zero");
            }
        }
        auto compute_pipe_state = json["ComputePipelineState"];
        if (compute_pipe_state != Json::nullValue) {
            auto shader_filenames = compute_pipe_state["ShaderFileNames"];
            if (shader_filenames.size() == 1) {
                spirv = load_shader_spirv(path, json["EnabledExtensions"], compute_pipe_state,
                                          compute_pipe_state["ComputePipeline"]["stage"], args.count("spirv-dis"));
            } else {
                logger.Write(logger.kError, "The size of ShaderFileNames array (%u) is not 1 for compute pipeline\n",
                             shader_filenames.size());
            }
        }
        if (graphics_pipe_state == Json::nullValue && compute_pipe_state == Json::nullValue) {
            logger.Write(logger.kError, "No pipeline state found!\n");
            return EXIT_FAILURE;
        }
        if (spirv.has_value()) {
            pipeline_info.spirv = std::move(*spirv);
            // Calculate pipeline memory size as the sum of the sizes of the SPIR-V module data
            for (const auto& pipeline_spv : pipeline_info.spirv) {
                pipeline_info.pipeline_memory_size += pipeline_spv.size() * sizeof(uint32_t);
            }
        } else {
            logger.Write(logger.kError, "Failed to load SPIR-V data!\n");
            return EXIT_FAILURE;
        }

        pipelines.emplace_back(std::move(pipeline_info));

        logger.Write(logger.kInfo, "Compiled pipeline JSON '%s' successfully.\n\n", entry.path().string().c_str());
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
    if (args["hex-bytes"].count()) {
        FILE* fp = fopen(out.c_str(), "w");
        if (!fp) {
            logger.Write(logger.kError, "Failed to open output file '%s.hpp'\n", out.c_str());
            return EXIT_FAILURE;
        }
        int status = 0;
        for (std::size_t i = 0; i < builder.GetData().size(); ++i) {
            if (status < 0) break;
            uint8_t byte = builder.GetData()[i];
            if (i > 0) {
                if (i % 16 == 0) {
                    status = fprintf(fp, ",\n0x%02x", byte);
                } else {
                    status = fprintf(fp, ",0x%02x", byte);
                }
            } else {
                status = fprintf(fp, "0x%02x", byte);
            }
        }
        if (status >= 0) {
            status = fprintf(fp, "\n");
        }
        if (status < 0) {
            logger.Write(logger.kError, "Failed to write pipeline cache data to '%s'\n", out.c_str());
            fclose(fp);
            return EXIT_FAILURE;
        }
        fclose(fp);
        logger.Write(logger.kInfo, "Pipeline cache data written to '%s'\n", out.c_str());
    } else {
        FILE* fp = fopen(out.c_str(), "wb");
        if (!fp) {
            logger.Write(logger.kError, "Failed to open output file '%s'\n", out.c_str());
            return EXIT_FAILURE;
        }
        size_t write_count = fwrite(builder.GetData().data(), 1, builder.GetData().size(), fp);
        if (write_count != builder.GetData().size()) {
            logger.Write(logger.kError, "Failed to write pipeline cache data to '%s'\n", out.c_str());
            fclose(fp);
            return EXIT_FAILURE;
        }
        fclose(fp);
        logger.Write(logger.kInfo, "Pipeline cache data written to '%s'\n", out.c_str());
    }

    return EXIT_SUCCESS;
}
