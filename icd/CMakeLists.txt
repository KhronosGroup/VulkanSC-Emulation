# ~~~
# Copyright (c) 2024-2025 The Khronos Group Inc.
# Copyright (c) 2024-2025 RasterGrid Kft.
#
# SPDX-License-Identifier: Apache-2.0
# ~~~

set(ICD_NAME "vksconvk")

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
    generated/vk_pnext_chain_helper.h
    generated/vk_queue.h
    generated/vk_queue.cpp
    generated/vksc_command_buffer_memory_tracker.h
    generated/vksc_command_buffer_memory_tracker.cpp
    generated/vksc_entry_points.cpp
    generated/vksc_extension_helper.h
    generated/vksc_extension_helper.cpp
    generated/vksc_output_struct_sanitizer.h
    generated/vksc_output_struct_sanitizer.cpp
    generated/vksc_pnext_chain_helper.h
    generated/vksc_proc_addr_helper.h
    generated/vksc_proc_addr_helper.cpp
    icd_defs.h
    icd_env_helper.h
    icd_env_helper.cpp
    icd_extension_helper.h
    icd_extension_helper.cpp
    icd_fault_handler.h
    icd_fault_handler.cpp
    icd_log.h
    icd_log.cpp
    icd_main.cpp
    icd_object_tracker.h
    icd_pipeline_cache_data.cpp
    icd_pipeline_cache_data.h
    icd_proc_addr.h
    icd_shadow_stack.h
    icd_shadow_stack.cpp
    vksc_command_buffer.h
    vksc_command_buffer.cpp
    vksc_command_pool.h
    vksc_command_pool.cpp
    vksc_device.h
    vksc_device.cpp
    vksc_display_emulation.h
    vksc_display_emulation.cpp
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
    jsoncpp_static
    valijson
    Vulkan::Headers
    Vulkan::UtilityHeaders
    SPIRV-Tools-opt
    SPIRV-Tools-static
    SPIRV-Headers::SPIRV-Headers
)

if(BUILD_WSI_XCB_SUPPORT)
    # We link to the XCB libraries to enable WSI display emulation
    target_link_libraries(icd PRIVATE ${XCB_LIBRARIES})
endif()

target_include_directories(icd PRIVATE
    generated
    .
)

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

# There are 2 primary deliverables for the ICD.
# - The actual library (lib)vksconvk.(dll|so|dylib)
# - The respective json file, vksconvk.json
# This code generates the appropriate json for both local testing and the installation.
# NOTE: For WIN32 the JSON and dll MUST be placed in the same location, due to Win32 using a relative path for installation.
set(INPUT_FILE "${CMAKE_CURRENT_SOURCE_DIR}/${ICD_NAME}.json.in")
set(INTERMEDIATE_FILE "${CMAKE_CURRENT_BINARY_DIR}/json/icd.json")
set(OUTPUT_FILE_FINAL_NAME "${ICD_NAME}.json")

if(WIN32)
    set(JSON_LIBRARY_PATH ".\\\\${CMAKE_SHARED_LIBRARY_PREFIX}${ICD_NAME}${CMAKE_SHARED_LIBRARY_SUFFIX}")
else()
    set(JSON_LIBRARY_PATH "./${CMAKE_SHARED_LIBRARY_PREFIX}${ICD_NAME}${CMAKE_SHARED_LIBRARY_SUFFIX}")
endif()

configure_file(${INPUT_FILE} ${INTERMEDIATE_FILE} @ONLY)

# To support both multi/single configuration generators just copy the json to the correct directory
add_custom_command(TARGET icd POST_BUILD
    COMMAND ${CMAKE_COMMAND} -E copy_if_different ${INTERMEDIATE_FILE} $<TARGET_FILE_DIR:icd>/${OUTPUT_FILE_FINAL_NAME}
)

# For UNIX-based systems, `library_path` should not contain a relative path (indicated by "./") before installing to system directories
# This json isn't used for regular local development, it's used for installation
if(WIN32)
    set(ICD_INSTALL_DIR ${CMAKE_INSTALL_BINDIR})
    set(MANIFEST_INSTALL_DIR ${CMAKE_INSTALL_BINDIR})
else()
    set(ICD_INSTALL_DIR ${CMAKE_INSTALL_LIBDIR})
    set(MANIFEST_INSTALL_DIR ${CMAKE_INSTALL_DATAROOTDIR}/${API_TYPE}/icd.d)
endif()

if (UNIX)
    set(UNIX_INTERMEDIATE_FILE "${CMAKE_CURRENT_BINARY_DIR}/json/unix_install_icd.json")
    set(JSON_LIBRARY_PATH "${CMAKE_SHARED_LIBRARY_PREFIX}${ICD_NAME}${CMAKE_SHARED_LIBRARY_SUFFIX}")

    configure_file(${INPUT_FILE} ${UNIX_INTERMEDIATE_FILE} @ONLY)

    install(FILES ${UNIX_INTERMEDIATE_FILE} DESTINATION ${MANIFEST_INSTALL_DIR} RENAME ${OUTPUT_FILE_FINAL_NAME})
endif()

if (WIN32)
    install(FILES ${INTERMEDIATE_FILE} DESTINATION ${MANIFEST_INSTALL_DIR} RENAME ${OUTPUT_FILE_FINAL_NAME})
endif()

install(TARGETS icd LIBRARY DESTINATION ${ICD_INSTALL_DIR})
