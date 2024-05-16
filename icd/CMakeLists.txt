# ~~~
# Copyright (c) 2024 The Khronos Group Inc.
# Copyright (c) 2024 RasterGrid Kft.
#
# SPDX-License-Identifier: Apache-2.0
# ~~~

set(ICD_NAME "VKSC_emulation")

add_library(icd MODULE)
target_sources(icd PRIVATE
    generated/vk_command_buffer.h
    generated/vk_command_buffer.cpp
    generated/vk_device.h
    generated/vk_device.cpp
    generated/vk_dispatch_table.h
    generated/vk_dispatch_table.cpp
    generated/vk_extension_helper.h
    generated/vk_extension_helper.cpp
    generated/vk_instance.h
    generated/vk_instance.cpp
    generated/vk_physical_device.h
    generated/vk_physical_device.cpp
    generated/vk_queue.h
    generated/vk_queue.cpp
    generated/vksc_entry_points.cpp
    generated/vksc_extension_helper.h
    generated/vksc_extension_helper.cpp
    generated/vksc_proc_addr_helper.h
    generated/vksc_proc_addr_helper.cpp
    icd_defs.h
    icd_env_helper.h
    icd_env_helper.cpp
    icd_extension_helper.h
    icd_extension_helper.cpp
    icd_log.h
    icd_log.cpp
    icd_main.cpp
    icd_proc_addr.h
    vksc_command_buffer.h
    vksc_command_buffer.cpp
    vksc_device.h
    vksc_device.cpp
    vksc_global.h
    vksc_global.cpp
    vksc_instance.h
    vksc_instance.cpp
    vksc_physical_device.h
    vksc_physical_device.cpp
    vksc_queue.h
    vksc_queue.cpp
)

target_link_libraries(icd PRIVATE
    Vulkan::Headers
    Vulkan::UtilityHeaders
)

target_include_directories(icd PRIVATE
    generated
    .
)

if(${CMAKE_CXX_COMPILER_ID} MATCHES "GNU|Clang")
    target_compile_options(icd PRIVATE
        -Wpointer-arith
        -Wno-unused-function
        -Wno-sign-compare
    )
endif()

if(MSVC)
    target_compile_options(icd PRIVATE /bigobj)
    target_compile_definitions(icd PRIVATE _CRT_SECURE_NO_WARNINGS)
    target_link_options(icd PRIVATE /DEF:${CMAKE_CURRENT_SOURCE_DIR}/${ICD_NAME}.def)
else()
    if(APPLE)
        set_target_properties(icd PROPERTIES SUFFIX ".dylib")
    endif()
endif()

set_target_properties(icd PROPERTIES OUTPUT_NAME ${ICD_NAME})

if (DEFINED GIT_BRANCH_NAME AND DEFINED GIT_TAG_INFO)
    target_compile_definitions(icd PRIVATE GIT_BRANCH_NAME="${GIT_BRANCH_NAME}" GIT_TAG_INFO="${GIT_TAG_INFO}")
endif()

# There are 2 primary deliverables for the ICD.
# - The actual library (lib)VKSC_emulation.(dll|so|dylib)
# - The respective json file, VKSC_emulation.json
# This code generates the appropriate json for both local testing and the installation.
# NOTE: For WIN32 the JSON and dll MUST be placed in the same location, due to Win32 using a relative path for installation.
set(INPUT_FILE "${CMAKE_CURRENT_SOURCE_DIR}/${ICD_NAME}.json.in")
set(INTERMEDIATE_FILE "${CMAKE_CURRENT_BINARY_DIR}/json/icd.json")
set(OUTPUT_FILE_FINAL_NAME "${ICD_NAME}.json")
set(LAYER_INSTALL_DIR ${CMAKE_INSTALL_LIBDIR})
if (WIN32)
    set(LAYER_INSTALL_DIR ${CMAKE_INSTALL_BINDIR}) # WIN32 expect the dll in the `bin` dir, this matches our WIN32 SDK process
endif()

if (WIN32)
    set(JSON_LIBRARY_PATH ".\\\\${ICD_NAME}.dll")
elseif(APPLE)
    set(JSON_LIBRARY_PATH "./lib${ICD_NAME}.dylib")
else()
    set(JSON_LIBRARY_PATH "./lib${ICD_NAME}.so")
endif()

configure_file(${INPUT_FILE} ${INTERMEDIATE_FILE} @ONLY)

# To support both multi/single configuration generators just copy the json to the correct directory
add_custom_command(TARGET icd POST_BUILD
    COMMAND ${CMAKE_COMMAND} -E copy_if_different ${INTERMEDIATE_FILE} $<TARGET_FILE_DIR:icd>/${OUTPUT_FILE_FINAL_NAME}
)

# For UNIX-based systems, `library_path` should not contain a relative path (indicated by "./") before installing to system directories
# This json isn't used for regular local development, it's used for installation
if (UNIX)
    set(UNIX_INTERMEDIATE_FILE "${CMAKE_CURRENT_BINARY_DIR}/json/unix_install_icd.json")

    if(APPLE)
        set(JSON_LIBRARY_PATH "lib${ICD_NAME}.dylib")
    else()
        set(JSON_LIBRARY_PATH "lib${ICD_NAME}.so")
    endif()

    configure_file(${INPUT_FILE} ${UNIX_INTERMEDIATE_FILE} @ONLY)

    install(FILES ${UNIX_INTERMEDIATE_FILE} DESTINATION ${CMAKE_INSTALL_DATAROOTDIR}/${API_TYPE}/icd.d RENAME ${OUTPUT_FILE_FINAL_NAME})
endif()

if (WIN32)
    install(FILES ${INTERMEDIATE_FILE} DESTINATION ${LAYER_INSTALL_DIR} RENAME ${OUTPUT_FILE_FINAL_NAME})
endif()

install(TARGETS icd DESTINATION ${LAYER_INSTALL_DIR})
