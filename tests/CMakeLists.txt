# ~~~
# Copyright (c) 2024-2025 The Khronos Group Inc.
# Copyright (c) 2024-2025 RasterGrid Kft.
#
# SPDX-License-Identifier: Apache-2.0
# ~~~

if(BUILD_ICD)
    add_subdirectory(icd)
endif()

if(BUILD_PCC)
    add_subdirectory(pcc)
endif()
