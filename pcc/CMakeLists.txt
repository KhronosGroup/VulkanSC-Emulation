# ~~~
# Copyright (c) 2024 The Khronos Group Inc.
# Copyright (c) 2024 RasterGrid Kft.
#
# SPDX-License-Identifier: Apache-2.0
# ~~~

set(PCC_NAME "pcconvk")

add_executable(pcc)
target_sources(pcc PRIVATE
    pcc_builder.h
    pcc_log.h
    pcc_main.cpp
)

find_package(jsoncpp REQUIRED CONFIG)
find_package(valijson REQUIRED CONFIG)
find_package(cxxopts REQUIRED CONFIG)

target_link_libraries(pcc PRIVATE
    jsoncpp_static
    valijson
    cxxopts::cxxopts
    Vulkan::Headers
    Vulkan::UtilityHeaders
    SPIRV-Tools-opt
    SPIRV-Tools-static
    SPIRV-Headers::SPIRV-Headers
)

target_include_directories(pcc PRIVATE
    .
)

set_target_properties(pcc PROPERTIES OUTPUT_NAME ${PCC_NAME})

install(TARGETS pcc)
