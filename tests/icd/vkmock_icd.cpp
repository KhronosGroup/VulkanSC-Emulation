/*
 * Copyright (c) 2024-2025 The Khronos Group Inc.
 * Copyright (c) 2024-2025 RasterGrid Kft.
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#include "icd_test_defs.h"

extern "C" {

static PFN_vkmockGetProcAddr g_get_proc_addr = nullptr;

EXPORT VKAPI_ATTR void VKAPI_CALL vkmockInit(PFN_vkmockGetProcAddr get_proc_addr) { g_get_proc_addr = get_proc_addr; }

EXPORT VKAPI_ATTR PFN_vkVoidFunction VKAPI_CALL vk_icdGetInstanceProcAddr(VkInstance instance, const char* pName) {
    return g_get_proc_addr(pName);
}

EXPORT VKAPI_ATTR PFN_vkVoidFunction VKAPI_CALL vk_icdGetPhysicalDeviceProcAddr(VkInstance instance, const char* pName) {
    return g_get_proc_addr(pName);
}

EXPORT VKAPI_ATTR PFN_vkVoidFunction VKAPI_CALL vkGetInstanceProcAddr(VkInstance instance, const char* pName) {
    return g_get_proc_addr(pName);
}

EXPORT VKAPI_ATTR VkResult VKAPI_CALL vk_icdNegotiateLoaderICDInterfaceVersion(uint32_t* pSupportedVersion) {
    const uint32_t SUPPORTED_LOADER_ICD_INTERFACE_VERSION = 5;
    if (*pSupportedVersion > SUPPORTED_LOADER_ICD_INTERFACE_VERSION) {
        *pSupportedVersion = SUPPORTED_LOADER_ICD_INTERFACE_VERSION;
    }
    return VK_SUCCESS;
}

}  // extern "C"
