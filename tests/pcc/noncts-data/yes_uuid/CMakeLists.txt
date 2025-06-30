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
)
set_tests_properties(PCC.misc.${CHILD}
    PROPERTIES
        LABELS PCC
        FAIL_REGULAR_EXPRESSION "No PipelineUUID provided"
)