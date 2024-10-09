/*
 * Copyright (c) 2024 The Khronos Group Inc.
 * Copyright (c) 2024 RasterGrid Kft.
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#include <vulkan/vulkan.h>

#if defined(__GNUC__) && __GNUC__ >= 4
#define EXPORT __attribute__((visibility("default")))
#elif defined(__SUNPRO_C) && (__SUNPRO_C >= 0x590)
#define EXPORT __attribute__((visibility("default")))
#else
#define EXPORT
#endif

typedef PFN_vkVoidFunction(VKAPI_PTR *PFN_vkmockGetProcAddr)(const char *);
typedef void(VKAPI_PTR *PFN_vkmockInit)(PFN_vkmockGetProcAddr);
