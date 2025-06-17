# ~~~
# Copyright (c) 2024-2025 The Khronos Group Inc.
# Copyright (c) 2024-2025 RasterGrid Kft.
#
# SPDX-License-Identifier: Apache-2.0
# ~~~

add_test(
    NAME PCC.${CHILD}
    COMMAND
        pcc
        --path "${CMAKE_CURRENT_LIST_DIR}"
        --out "${CMAKE_CURRENT_BINARY_DIR}/${CHILD}.bin"
)
set_tests_properties(PCC.${CHILD}
    PROPERTIES
        LABELS PCC
        PASS_REGULAR_EXPRESSION "No PipelineUUID provided"
)