# ~~~
# Copyright (c) 2024 The Khronos Group Inc.
# Copyright (c) 2024 RasterGrid Kft.
#
# SPDX-License-Identifier: Apache-2.0
# ~~~

add_library(vkmock_icd MODULE)
target_sources(vkmock_icd PRIVATE vkmock_icd.cpp icd_test_defs.h)
target_link_libraries(vkmock_icd PRIVATE Vulkan::Headers)
target_include_directories(vkmock_icd PRIVATE .)

if(MSVC)
    target_link_options(vkmock_icd PRIVATE /DEF:${CMAKE_CURRENT_SOURCE_DIR}/vkmock_icd.def)
elseif(APPLE)
    set_target_properties(vkmock_icd PROPERTIES SUFFIX ".dylib")
endif()

if(WIN32)
    set(VKMOCK_ICD_INSTALL_DIR ${CMAKE_INSTALL_BINDIR})
else()
    set(VKMOCK_ICD_INSTALL_DIR ${CMAKE_INSTALL_LIBDIR})
endif()

set(INTERMEDIATE_FILE "${CMAKE_CURRENT_BINARY_DIR}/json/vkmock_icd.json")

if (WIN32)
    set(JSON_LIBRARY_PATH ".\\\\vkmock_icd.dll")
elseif(APPLE)
    set(JSON_LIBRARY_PATH "./libvkmock_icd.dylib")
else()
    set(JSON_LIBRARY_PATH "./libvkmock_icd.so")
endif()

configure_file(${CMAKE_CURRENT_SOURCE_DIR}/vkmock_icd.json.in ${INTERMEDIATE_FILE} @ONLY)

# To support both multi/single configuration generators just copy the json to the correct directory
add_custom_command(TARGET vkmock_icd POST_BUILD
    COMMAND ${CMAKE_COMMAND} -E copy_if_different ${INTERMEDIATE_FILE} $<TARGET_FILE_DIR:vkmock_icd>/vkmock_icd.json
)

# For UNIX-based systems, `library_path` should not contain a relative path (indicated by "./") before installing to system directories
# This json isn't used for regular local development, it's used for installation
if (UNIX)
    set(UNIX_INTERMEDIATE_FILE "${CMAKE_CURRENT_BINARY_DIR}/json/unix_install_vmock_icd.json")

    if(APPLE)
        set(JSON_LIBRARY_PATH "libvkmock_icd.dylib")
    else()
        set(JSON_LIBRARY_PATH "libvkmock_icd.so")
    endif()

    configure_file(${CMAKE_CURRENT_SOURCE_DIR}/vkmock_icd.json.in ${UNIX_INTERMEDIATE_FILE} @ONLY)

    install(FILES ${UNIX_INTERMEDIATE_FILE} DESTINATION ${CMAKE_INSTALL_DATAROOTDIR}/vulkan/icd.d RENAME vkmock_icd.json)
endif()

if (WIN32)
    install(FILES ${INTERMEDIATE_FILE} DESTINATION ${VKMOCK_ICD_INSTALL_DIR} RENAME vkmock_icd.json)
endif()

install(TARGETS vkmock_icd DESTINATION ${VKMOCK_ICD_INSTALL_DIR})

add_executable(icd_tests)
set_target_properties(icd_tests PROPERTIES OUTPUT_NAME "test_vksconvk")
set_target_properties(icd_tests PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}/..)

target_sources(icd_tests PRIVATE
    ${CMAKE_SOURCE_DIR}/icd/generated/test_vkmock_framework.h
    ${CMAKE_SOURCE_DIR}/icd/generated/test_vkmock_framework.cpp
    ${CMAKE_SOURCE_DIR}/icd/generated/test_vksc_dispatch_table.h
    icd_test_defs.h
    icd_test_framework.h
    icd_test_framework.cpp
    test_infrastructure.cpp
)

add_dependencies(icd_tests icd)
target_include_directories(icd_tests PRIVATE
    .
    ${CMAKE_SOURCE_DIR}/icd
    ${CMAKE_SOURCE_DIR}/icd/generated
    ${CMAKE_SOURCE_DIR}/pcc
    ${CMAKE_SOURCE_DIR}/utils
)

if(${CMAKE_CXX_COMPILER_ID} MATCHES "(GNU|Clang)")
    target_compile_options(icd_tests PRIVATE
        -Wno-unused-parameter
        -Wno-sign-compare
        -Wno-shorten-64-to-32
        -Wno-missing-field-initializers
    )
    if(CMAKE_CXX_COMPILER_ID MATCHES "Clang")
        target_compile_options(icd_tests PRIVATE
            -Wno-sign-conversion
            -Wno-implicit-int-conversion
        )
    endif()
elseif(MSVC)
    target_compile_options(icd_tests PRIVATE
        /wd4100 # unreferenced formal parameter
        /wd4389 # signed/unsigned mismatch
        /wd4267 # disable some signed/unsigned mismatch warnings.
        /wd4312
    )
endif()

find_package(GTest CONFIG)

target_link_libraries(icd_tests PRIVATE
    Vulkan::Headers
    Vulkan::UtilityHeaders
    GTest::gtest
    GTest::gtest_main
)

find_package(SPIRV-Tools CONFIG QUIET)

# See https://github.com/KhronosGroup/SPIRV-Tools/issues/3909 for background on this.
# The targets available from SPIRV-Tools change depending on how SPIRV_TOOLS_BUILD_STATIC is set.
# Try to handle all possible combinations so that we work with externally built packages.
if (TARGET SPIRV-Tools)
    target_link_libraries(icd_tests PRIVATE SPIRV-Tools)
elseif(TARGET SPIRV-Tools-static)
    target_link_libraries(icd_tests PRIVATE SPIRV-Tools-static)
elseif(TARGET SPIRV-Tools-shared)
    target_link_libraries(icd_tests PRIVATE SPIRV-Tools-shared)
else()
    message(FATAL_ERROR "Cannot determine SPIRV-Tools target name")
endif()

install(TARGETS icd_tests)

include(GoogleTest)

# gtest_discover_tests requires running the output binaries which will not
# work with cross-compiling, thus we fall back to using gtest_add_tests
if (CMAKE_CROSSCOMPILING)
    gtest_add_tests(TARGET icd_tests)
else()
    gtest_discover_tests(icd_tests DISCOVERY_TIMEOUT 100)
endif()
