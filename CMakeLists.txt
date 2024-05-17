# ~~~
# Copyright (c) 2024 The Khronos Group Inc.
# Copyright (c) 2024 RasterGrid Kft.
#
# SPDX-License-Identifier: Apache-2.0
# ~~~
cmake_minimum_required(VERSION 3.17.2)

project(VulkanSC-Emulation)

set(API_TYPE "vulkansc")
add_definitions(-DVULKANSC)

add_subdirectory(scripts)

set(CMAKE_CXX_VISIBILITY_PRESET "hidden")
set(CMAKE_C_VISIBILITY_PRESET "hidden")
set(CMAKE_VISIBILITY_INLINES_HIDDEN "YES")
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)
set(CMAKE_C_STANDARD 99)
set(CMAKE_C_STANDARD_REQUIRED ON)
set(CMAKE_C_EXTENSIONS OFF)
set(CMAKE_POSITION_INDEPENDENT_CODE ON)

option(BUILD_ICD "Build Vulkan SC emulation ICD" ON)

option(ENABLE_ADDRESS_SANITIZER "Use address sanitization")
if (ENABLE_ADDRESS_SANITIZER)
    add_compile_options(-fsanitize=address)
    if (NOT MSVC)
        add_link_options(-fsanitize=address)
    endif()
endif()

set_property(GLOBAL PROPERTY USE_FOLDERS ON)

find_package(VulkanHeaders REQUIRED QUIET CONFIG)
find_package(VulkanUtilityLibraries REQUIRED CONFIG QUIET)

include(GNUInstallDirs)

option(BUILD_WERROR "Treat compiler warnings as errors")
if (BUILD_WERROR)
    add_compile_options("$<IF:$<CXX_COMPILER_ID:MSVC>,/WX,-Werror>")
endif()

if (${CMAKE_CXX_COMPILER_ID} MATCHES "(GNU|Clang)")
    add_compile_options(
        -Wall
        -Wextra
        -Wno-unused-parameter
        -Wno-missing-field-initializers
    )

    if (${CMAKE_CXX_COMPILER_ID} MATCHES "GNU")
        add_compile_options(-Wno-stringop-truncation)
    endif()

    if (${CMAKE_CXX_COMPILER_ID} MATCHES "Clang")
        add_compile_options(
            -Wno-sign-conversion
            -Wno-shorten-64-to-32
            -Wno-string-conversion
            -Wno-implicit-int-conversion
            -Wno-enum-enum-conversion
        )
    endif()
elseif(MSVC)
    # TODO: Update to /W4
    add_compile_options("/W3")
    # Warn about nested declarations
    add_compile_options("/w34456")
    # Warn about potentially uninitialized variables
    add_compile_options("/w34701")
    add_compile_options("/w34703")
    # Warn about different indirection types.
    add_compile_options("/w34057")
    # Warn about signed/unsigned mismatch.
    add_compile_options("/w34245")

    # Allow usage of unsafe CRT functions and minimize what Windows.h leaks
    add_compile_definitions(_CRT_SECURE_NO_WARNINGS NOMINMAX WIN32_LEAN_AND_MEAN)
endif()

option(EMU_CODEGEN "Enable helper codegen target")
if (EMU_CODEGEN)
    find_package(Python3 REQUIRED QUIET)
    add_custom_target(tools_codegen
        COMMAND Python3::Interpreter ${PROJECT_SOURCE_DIR}/scripts/generate_source.py
            "${VULKAN_HEADERS_INSTALL_DIR}/${CMAKE_INSTALL_DATADIR}/vulkan/registry"
            --incremental --generated-version ${VulkanHeaders_VERSION} --api ${API_TYPE}
    )
endif()

# Default to using the static CRT
set(CMAKE_MSVC_RUNTIME_LIBRARY "MultiThreaded$<$<CONFIG:Debug>:Debug>")

# Find the Git branch & tag info for use in the generated artifacts
find_package (Git)
if (GIT_FOUND AND EXISTS "${CMAKE_CURRENT_LIST_DIR}/.git/HEAD")
    execute_process(
        COMMAND ${GIT_EXECUTABLE} describe --tags --always
        WORKING_DIRECTORY ${CMAKE_CURRENT_LIST_DIR}
        OUTPUT_VARIABLE GIT_TAG_INFO)
    string(REGEX REPLACE "\n$" "" GIT_TAG_INFO "${GIT_TAG_INFO}")

    file(READ "${CMAKE_CURRENT_LIST_DIR}/.git/HEAD" GIT_HEAD_REF_INFO)
    if (GIT_HEAD_REF_INFO)
        string(REGEX MATCH "ref: refs/heads/(.*)" _ ${GIT_HEAD_REF_INFO})
        if (CMAKE_MATCH_1)
            set(GIT_BRANCH_NAME ${CMAKE_MATCH_1})
        else()
            set(GIT_BRANCH_NAME ${GIT_HEAD_REF_INFO})
        endif()
        string(REGEX REPLACE "\n$" "" GIT_BRANCH_NAME "${GIT_BRANCH_NAME}")
    endif()
endif()

if(BUILD_ICD)
    add_subdirectory(icd)
endif()

option(BUILD_TESTS "Build the tests")
if(BUILD_TESTS)
    enable_testing()
    add_subdirectory(tests)
endif()
