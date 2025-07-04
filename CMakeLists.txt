# ~~~
# Copyright (c) 2024-2025 The Khronos Group Inc.
# Copyright (c) 2024-2025 RasterGrid Kft.
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
option(BUILD_PCC "Build Vulkan SC emulation PCC" ON)
option(BUILD_WSI_XCB_SUPPORT "Build with XCB support" ON)

option(ENABLE_ADDRESS_SANITIZER "Use address sanitization")
if (ENABLE_ADDRESS_SANITIZER)
    add_compile_options(-fsanitize=address)
    if (NOT MSVC)
        add_link_options(-fsanitize=address)
    endif()
endif()

set_property(GLOBAL PROPERTY USE_FOLDERS ON)

find_package(VulkanHeaders REQUIRED CONFIG QUIET)
find_package(VulkanUtilityLibraries REQUIRED CONFIG QUIET)
find_package(SPIRV-Headers REQUIRED CONFIG QUIET)
find_package(SPIRV-Tools REQUIRED CONFIG QUIET)
find_package(SPIRV-Tools-opt REQUIRED CONFIG QUIET)
find_package(jsoncpp REQUIRED CONFIG QUIET)
find_package(valijson REQUIRED CONFIG QUIET)

include(GNUInstallDirs)

option(BUILD_WERROR "Treat compiler warnings as errors")
if (BUILD_WERROR)
    add_compile_options("$<IF:$<CXX_COMPILER_ID:MSVC>,/WX,-Werror>")
endif()

if(WIN32)
    add_compile_definitions(VK_USE_PLATFORM_WIN32_KHR)
elseif(ANDROID)
    add_compile_definitions(VK_USE_PLATFORM_ANDROID_KHR)
elseif(APPLE)
    add_compile_definitions(VK_USE_PLATFORM_METAL_EXT)
    if (IOS)
        add_compile_definitions(VK_USE_PLATFORM_IOS_MVK)
    endif()
    if (CMAKE_SYSTEM_NAME STREQUAL "Darwin")
        add_compile_definitions(VK_USE_PLATFORM_MACOS_MVK)
    endif()
else()
    if (BUILD_WSI_XCB_SUPPORT OR BUILD_WSI_XLIB_SUPPORT OR BUILD_WSI_WAYLAND_SUPPORT)
        find_package(PkgConfig REQUIRED QUIET)
    endif()

    if(BUILD_WSI_XCB_SUPPORT)
        pkg_check_modules(XCB REQUIRED QUIET IMPORTED_TARGET xcb)
        add_compile_definitions(VK_USE_PLATFORM_XCB_KHR)
    endif()

    if(BUILD_WSI_XLIB_SUPPORT)
        pkg_check_modules(X11 REQUIRED QUIET IMPORTED_TARGET x11)
        add_compile_definitions(VK_USE_PLATFORM_XLIB_KHR VK_USE_PLATFORM_XLIB_XRANDR_EXT)
    endif()

    if(BUILD_WSI_WAYLAND_SUPPORT)
        pkg_check_modules(WAYlAND_CLIENT QUIET REQUIRED IMPORTED_TARGET wayland-client)
        add_compile_definitions(VK_USE_PLATFORM_WAYLAND_KHR)
    endif()

    if(BUILD_WSI_SCREEN_QNX_SUPPORT)
        add_compile_definitions(VK_USE_PLATFORM_SCREEN_QNX)
    endif()

    if(BUILD_WSI_SCI_SUPPORT)
        add_compile_definitions(VK_USE_PLATFORM_SCI)
    endif()
endif()

if (${CMAKE_CXX_COMPILER_ID} MATCHES "(GNU|Clang)")
    add_compile_options(
        -Wall
        -Wextra
        -Wno-unused-parameter
        -Wno-missing-field-initializers
        -Wno-format-security
    )

    if (${CMAKE_CXX_COMPILER_ID} MATCHES "GNU")
        add_compile_options(
            -Wno-stringop-truncation
            -Wl,--no-undefined
        )
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
    add_compile_options("/W3")
    # Warn about nested declarations
    add_compile_options("/w34456")
    # Warn about potentially uninitialized variables
    add_compile_options("/w34701")
    add_compile_options("/w34703")
    # Warn about different indirection types
    add_compile_options("/w34057")
    # Warn about signed/unsigned mismatch
    add_compile_options("/w34245")
    # Warn about unused variables
    add_compile_options("/w34189")
    # Do not warn about switch statements with no case labels
    add_compile_options("/wd4065")
    # Stricter ISO conformance
    add_compile_options("/permissive-")

    # Allow usage of unsafe CRT functions and minimize what Windows.h leaks
    add_compile_definitions(_CRT_SECURE_NO_WARNINGS NOMINMAX WIN32_LEAN_AND_MEAN)
endif()

option(EMU_CODEGEN "Enable helper codegen target")
if (EMU_CODEGEN)
    find_package(Python3 REQUIRED QUIET)
    add_custom_target(emu_codegen
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

include_directories(utils)

if(BUILD_ICD)
    add_subdirectory(icd)
endif()

if(BUILD_PCC)
    add_subdirectory(pcc)
endif()

option(BUILD_TESTS "Build the tests")
if(BUILD_TESTS)
    enable_testing()
    add_subdirectory(tests)
endif()
