# ~~~
# Copyright (c) 2024 The Khronos Group Inc.
# Copyright (c) 2024 RasterGrid Kft.
#
# SPDX-License-Identifier: Apache-2.0
# ~~~

file(GLOB PIPELINE_DIR_CHILDREN RELATIVE "${CMAKE_CURRENT_SOURCE_DIR}/data" data/*)
foreach(CHILD IN LISTS PIPELINE_DIR_CHILDREN)
    file(READ "${CMAKE_CURRENT_SOURCE_DIR}/data/${CHILD}/test_name.txt" TESTCASE_NAME)
    string(REPLACE "dEQP-VKSC." "" SHORT_TESTCASE_NAME "${TESTCASE_NAME}")
    add_test(
        NAME PCC.generate.${SHORT_TESTCASE_NAME}
        COMMAND
            pcc
            --path "${CMAKE_CURRENT_SOURCE_DIR}/data/${CHILD}"
            --out "${CMAKE_CURRENT_BINARY_DIR}/${CHILD}.bin"
            --log "${CMAKE_CURRENT_BINARY_DIR}/${CHILD}.txt"
    )
    add_test(
        NAME PCC.compare.${SHORT_TESTCASE_NAME}
        COMMAND
            "${CMAKE_COMMAND}"
            -E compare_files
            "${CMAKE_CURRENT_SOURCE_DIR}/data/${CHILD}/pipeline_cache.bin"
            "${CMAKE_CURRENT_BINARY_DIR}/${CHILD}.bin"
    )
    set_tests_properties(PCC.generate.${SHORT_TESTCASE_NAME} PROPERTIES FIXTURES_SETUP PCC)
    set_tests_properties(PCC.compare.${SHORT_TESTCASE_NAME} PROPERTIES FIXTURES_REQUIRED PCC)
endforeach()