# ~~~
# Copyright (c) 2024 The Khronos Group Inc.
# Copyright (c) 2024 RasterGrid Kft.
#
# SPDX-License-Identifier: Apache-2.0
# ~~~

# OVERVIEW:
#
# This script aims to help with regression testing the PCC. It generates the
# golden dataset accepted as correct which may be committed to the repository
# to be used in unit testing. The source dataset is created using the VulkanSC
# CTS runner, deqp-vksc[.exe].
#
# USAGE:
#
# The script is intended to be run from the folder where the CTS tests are
# usually run from.
#
# EXAMPLE:
#
# - cmake --log-level=VERBOSE
#         -D CMAKE_PREFIX_PATH:PATH=<root_to_vulkansc_ecosystem_install>
#         -D CASELIST_FILE:PATH=<root_to_vulkansc_emulation_sources>\tests\pcc\caselist.pcc.txt
#         -D PIPELINE_DIR:PATH=<root_to_vulkansc_emulation_sources>\tests\pcc\data
#         -P <root_to_vulkansc_emulation_sources>\scripts\generators\GeneratePCCTestData.cmake

find_file(CASELIST_FILE
    REQUIRED
    NAMES caselist.txt
    DOC "Path to the caselist file to draw test names from"
)
find_program(DEQP_VKSC_EXECUTABLE
    REQUIRED
    NAMES deqp-vksc
    PATHS "${CMAKE_CURRENT_BINARY_DIR}"
    PATH_SUFFIXES Release Debug
    DOC "Path to the CTS test runner"
)
if(WIN32)
    set(CMAKE_FIND_LIBRARY_SUFFIXES .dll)
endif()
find_library(VULKAN_LIBRARY
    REQUIRED
    NAMES vksconvk vulkansc-1
    DOC "Path to the VulkanSC ICD library"
)
find_program(PCC_EXECUTABLE
    REQUIRED
    NAMES pcconvk pcc
    DOC "Path to the pipeline cache compiler"
)
set(PIPELINE_DIR pipelinedir CACHE PATH "Path to the pipeline cache directory")
set(WRITE_LOGS OFF CACHE BOOL "Write CTS test runner and PCC logs")

file(STRINGS "${CASELIST_FILE}" TESTCASES)

set(i 0)
foreach(TESTCASE ${TESTCASES})
    message(VERBOSE "Generating test data for ${TESTCASE}")

    math(EXPR i "${i} + 1")
    file(MAKE_DIRECTORY "${PIPELINE_DIR}/${i}")
    if(WRITE_LOGS)
        set(DEQP_VKSC_LOG_ARG "--deqp-log-filename=${PIPELINE_DIR}/${i}/log.qpa")
        set(PCC_LOG_ARGS --log "${PIPELINE_DIR}/${i}/log.txt")
    else()
        set(DEQP_VKSC_LOG_ARG)
        set(PCC_LOG_ARGS)
    endif()

    execute_process(
        COMMAND
            "${DEQP_VKSC_EXECUTABLE}"
            --deqp-case=${TESTCASE}
            "--deqp-vk-library-path=${VULKAN_LIBRARY}"
            "--deqp-pipeline-compiler=${PCC_EXECUTABLE}"
            "--deqp-pipeline-dir=${PIPELINE_DIR}/${i}"
            ${DEQP_VKSC_LOG_ARG}
            --deqp-log-flush=disable
            --deqp-log-images=disable
            --deqp-log-shader-sources=disable
            --deqp-shadercache=disable
            --deqp-command-pool-min-size=1700000
        OUTPUT_QUIET
        RESULT_VARIABLE DEQP_VKSC_EXIT_CODE
    )

    if(DEQP_VKSC_EXIT_CODE)
        message(SEND_ERROR "Test failed to execute")
        continue()
    endif()

    file(GLOB PIPELINE_JSONS "${PIPELINE_DIR}/${i}/*.json")
    if(NOT PIPELINE_JSONS)
        message(SEND_ERROR "No pipelines captured by CTS framework")
        continue()
    endif()

    execute_process(
        COMMAND
            "${PCC_EXECUTABLE}"
            --path "${PIPELINE_DIR}/${i}"
            --out "${PIPELINE_DIR}/${i}/pipeline_cache.bin"
            ${PCC_LOG_ARGS}
        OUTPUT_QUIET
        ERROR_QUIET
        RESULT_VARIABLE PCC_EXIT_CODE
    )

    if(PCC_EXIT_CODE)
        message(SEND_ERROR "PCC failed to process CTS framework output")
    endif()

    file(WRITE "${PIPELINE_DIR}/${i}/test_name.txt" ${TESTCASE})
endforeach()