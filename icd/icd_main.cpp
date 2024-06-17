/*
 * Copyright (c) 2024 The Khronos Group Inc.
 * Copyright (c) 2024 RasterGrid Kft.
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#include "icd_defs.h"
#include "icd_proc_addr.h"
#include "vksc_global.h"

extern "C" {

EXPORT VKAPI_ATTR PFN_vkVoidFunction VKAPI_CALL vk_icdGetInstanceProcAddr(VkInstance instance, const char* pName) {
    return icd::GetProcAddr(icd::ProcTypeMask::Instance, pName);
}

EXPORT VKAPI_ATTR PFN_vkVoidFunction VKAPI_CALL vk_icdGetPhysicalDeviceProcAddr(VkInstance instance, const char* pName) {
    return icd::GetProcAddr(icd::ProcTypeMask::PhysicalDevice, pName);
}

// NOTE: We export this symbol because the CTS expects this to be exported even when doing direct driver loading
EXPORT VKAPI_ATTR PFN_vkVoidFunction VKAPI_CALL vkGetInstanceProcAddr(VkInstance instance, const char* pName) {
    return icd::GetProcAddr(icd::ProcTypeMask::Instance, pName);
}

EXPORT VKAPI_ATTR VkResult VKAPI_CALL vk_icdNegotiateLoaderICDInterfaceVersion(uint32_t* pSupportedVersion) {
    const uint32_t SUPPORTED_LOADER_ICD_INTERFACE_VERSION = 5;
    if (*pSupportedVersion > SUPPORTED_LOADER_ICD_INTERFACE_VERSION) {
        *pSupportedVersion = SUPPORTED_LOADER_ICD_INTERFACE_VERSION;
    }
    return VK_SUCCESS;
}

}  // extern "C"
