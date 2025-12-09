# ~~~
# Copyright (c) 2024-2025 The Khronos Group Inc.
# Copyright (c) 2024-2025 RasterGrid Kft.
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

if(${CMAKE_CXX_COMPILER_ID} MATCHES "GNU")
    target_compile_options(pcc PRIVATE
        -Wno-uninitialized # Needed to work around GCC + address sanitizer STL warning in regex
        -Wno-nonnull # Needed to workaround overzealous GCC 14 checks
    )
endif()

target_include_directories(pcc PRIVATE "${CMAKE_CURRENT_SOURCE_DIR}")

set_target_properties(pcc PROPERTIES OUTPUT_NAME ${PCC_NAME})

set(INPUT_FILE "${CMAKE_CURRENT_SOURCE_DIR}/${PCC_NAME}.json.in")
set(INTERMEDIATE_FILE "${CMAKE_CURRENT_BINARY_DIR}/pcc/pcc.json")
set(OUTPUT_FILE_FINAL_NAME "${PCC_NAME}.json")

if(WIN32)
    set(JSON_PCC_PATH ".\\\\${PCC_NAME}${CMAKE_EXECUTABLE_SUFFIX}")
else()
    set(JSON_PCC_PATH "./${PCC_NAME}${CMAKE_EXECUTABLE_SUFFIX}")
endif()

configure_file(${INPUT_FILE} ${INTERMEDIATE_FILE} @ONLY)

# To support both multi/single configuration generators just copy the json to the correct directory
add_custom_command(TARGET pcc POST_BUILD
    COMMAND ${CMAKE_COMMAND} -E copy_if_different ${INTERMEDIATE_FILE} $<TARGET_FILE_DIR:pcc>/${OUTPUT_FILE_FINAL_NAME}
)

if(WIN32)
    set(COMPONENT_INSTALL_DIR ${CMAKE_INSTALL_BINDIR}) # WIN32 expect the dll in the `bin` dir, this matches our WIN32 SDK process
else()
    set(COMPONENT_INSTALL_DIR ${CMAKE_INSTALL_DATAROOTDIR}/${API_TYPE}/pcc.d)
endif()

set(INTERMEDIATE_FILE "${CMAKE_CURRENT_BINARY_DIR}/pcc/install_pcc.json")
set(JSON_PCC_PATH "${PCC_NAME}${CMAKE_EXECUTABLE_SUFFIX}")

configure_file(${INPUT_FILE} ${INTERMEDIATE_FILE} @ONLY)

install(FILES ${INTERMEDIATE_FILE} DESTINATION ${COMPONENT_INSTALL_DIR} RENAME ${OUTPUT_FILE_FINAL_NAME})
install(TARGETS pcc)
