# ~~~
# Copyright (c) 2024-2025 The Khronos Group Inc.
# Copyright (c) 2024-2025 RasterGrid Kft.
#
# SPDX-License-Identifier: Apache-2.0
# ~~~

add_test(
    NAME PCC.misc.${CHILD}
    COMMAND
        pcc
        --path "${CMAKE_CURRENT_LIST_DIR}"
        --out "${CMAKE_CURRENT_BINARY_DIR}/PCC.misc.${CHILD}.bin"
        --level info
)
set_tests_properties(PCC.misc.${CHILD}
    PROPERTIES
        LABELS PCC
        PASS_REGULAR_EXPRESSION "No PipelineUUID provided"
)

add_test(
    NAME PCC.generate.${CHILD}_autoincrement
    COMMAND
        pcc
        --path "${CMAKE_CURRENT_LIST_DIR}"
        --out "${CMAKE_CURRENT_BINARY_DIR}/PCC.generate.${CHILD}_autoincrement.bin"
        --log "${CMAKE_CURRENT_BINARY_DIR}/PCC.generate.${CHILD}_autoincrement.txt"
        --level info
        --mode autoincrement
)
set_tests_properties(PCC.generate.${CHILD}_autoincrement
    PROPERTIES
        LABELS PCC
        FIXTURES_SETUP "PCC.generate.${CHILD}_autoincrement"
)
add_test(
    NAME PCC.misc.${CHILD}_autoincrement
    COMMAND
        "${CMAKE_COMMAND}"
        -D "LOG_FILENAME:FILEPATH=${CMAKE_CURRENT_BINARY_DIR}/PCC.generate.${CHILD}_autoincrement.txt"
        -P "${CMAKE_CURRENT_LIST_DIR}/CheckAutoIncrement.cmake"
)
set_tests_properties(PCC.misc.${CHILD}_autoincrement
    PROPERTIES
        LABELS PCC
        FIXTURES_REQUIRED "PCC.generate.${CHILD}_autoincrement"
)