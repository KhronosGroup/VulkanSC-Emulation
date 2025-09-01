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

target_include_directories(pcc PRIVATE
    .
)

set_target_properties(pcc PROPERTIES OUTPUT_NAME ${PCC_NAME})

set(INPUT_FILE "${CMAKE_CURRENT_SOURCE_DIR}/${PCC_NAME}.json.in")
set(INTERMEDIATE_FILE "${CMAKE_CURRENT_BINARY_DIR}/pcc/pcc.json")
set(OUTPUT_FILE_FINAL_NAME "${PCC_NAME}.json")
set(COMPONENT_INSTALL_DIR ${CMAKE_INSTALL_BINDIR})
set(ICD_INSTALL_DIR ${CMAKE_INSTALL_LIBDIR})
if (WIN32)
    set(ICD_INSTALL_DIR ${CMAKE_INSTALL_LIBDIR})
endif()

cmake_path(RELATIVE_PATH COMPONENT_INSTALL_DIR BASE_DIRECTORY "${ICD_INSTALL_DIR}" OUTPUT_VARIABLE JSON_TO_PCC_DIR)
cmake_path(APPEND JSON_TO_PCC_DIR "${PCC_NAME}${CMAKE_EXECUTABLE_SUFFIX}" OUTPUT_VARIABLE PCC_PATH)
cmake_path(NATIVE_PATH PCC_PATH PCC_PATH)

configure_file(${INPUT_FILE} ${INTERMEDIATE_FILE} @ONLY)

# To support both multi/single configuration generators just copy the json to the correct directory
add_custom_command(TARGET pcc POST_BUILD
    COMMAND ${CMAKE_COMMAND} -E copy_if_different ${INTERMEDIATE_FILE} $<TARGET_FILE_DIR:icd>/${OUTPUT_FILE_FINAL_NAME}
)

if (WIN32)
    install(FILES ${INTERMEDIATE_FILE} DESTINATION ${COMPONENT_INSTALL_DIR} RENAME ${OUTPUT_FILE_FINAL_NAME})
    if(INSTALL_WITH_REGISTRATION)
        get_property(GENERATOR_IS_MULTI_CONFIG GLOBAL PROPERTY GENERATOR_IS_MULTI_CONFIG)
        if(GENERATOR_IS_MULTI_CONFIG)
            set(CONFIGS "${CMAKE_CONFIGURATION_TYPES}")
        else()
            set(CONFIGS "${CMAKE_BUILD_TYPE}")
        endif()
        set(ECOSYSTEM_COMPONENT PCC)
        foreach(CONFIG IN LISTS CONFIGS)
            configure_file(
                "${PROJECT_SOURCE_DIR}/scripts/RegisterComponent.in.cmake"
                "${CMAKE_CURRENT_BINARY_DIR}/Register${ECOSYSTEM_COMPONENT}.${CONFIG}.cmake"
                @ONLY
            )
        endforeach()
        install(SCRIPT "${CMAKE_CURRENT_BINARY_DIR}/Register${ECOSYSTEM_COMPONENT}.$<CONFIG>.cmake" COMPONENT pcc)
    endif()
endif()

install(TARGETS pcc)
