/*
 * Copyright (c) 2024 The Khronos Group Inc.
 * Copyright (c) 2024 RasterGrid Kft.
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#include "vksc_global.h"
#include "vksc_instance.h"
#include "icd_env_helper.h"
#include "icd_extension_helper.h"

#include <string>

#ifdef _WIN32
#include <windows.h>
#else
#include <dlfcn.h>
#endif

#include <stdlib.h>

namespace vksc {

Global ICD;

Global::Global() : environment_(), logger_(Environment().LogSeverityEnv()) {
    for (const auto& private_env : Environment().PrivateEnvs()) {
        Log().Debug("VKSC-EMU-PrivateEnvs", "Environment variable %s=%s is shadowed", private_env.first,
                    private_env.second.c_str());
    }

    icd::EnvironmentOverride override(Environment());

#if defined(_WIN32)
    HMODULE module = LoadLibraryA("vulkan-1.dll");
    if (!module) {
        return;
    }
    vk_get_instance_proc_addr_ = (PFN_vkGetInstanceProcAddr)(void (*)(void))GetProcAddress(module, "vkGetInstanceProcAddr");
#elif defined(__APPLE__)
    void* module = dlopen("libvulkan.dylib", RTLD_NOW | RTLD_LOCAL);
    if (!module) {
        module = dlopen("libvulkan.1.dylib", RTLD_NOW | RTLD_LOCAL);
    }
    if (!module) {
        module = dlopen("libMoltenVK.dylib", RTLD_NOW | RTLD_LOCAL);
    }
    // modern versions of macOS don't search /usr/local/lib automatically contrary to what man dlopen says
    // Vulkan SDK uses this as the system-wide installation location, so we're going to fallback to this if all else fails
    if (!module && getenv("DYLD_FALLBACK_LIBRARY_PATH") == NULL) {
        module = dlopen("/usr/local/lib/libvulkan.dylib", RTLD_NOW | RTLD_LOCAL);
    }
    if (!module) {
        return;
    }

    vk_get_instance_proc_addr_ = (PFN_vkGetInstanceProcAddr)dlsym(module, "vkGetInstanceProcAddr");
#else
    void* module = dlopen("libvulkan.so.1", RTLD_NOW | RTLD_LOCAL);
    if (!module) {
        module = dlopen("libvulkan.so", RTLD_NOW | RTLD_LOCAL);
    }
    if (!module) {
        Log().Fatal("VKSC-EMU-Vulkan-Loader", "Failed to load the Vulkan Loader");
        valid_ = false;
        return;
    }

    vk_get_instance_proc_addr_ = (PFN_vkGetInstanceProcAddr)dlsym(module, "vkGetInstanceProcAddr");
#endif

    vk_loader_module_ = module;

    // Load global entry points
#define VK_GET_PROC_ADDR(name)                                                                                 \
    vk_dispatch_table_.name = reinterpret_cast<PFN_vk##name>(vk_get_instance_proc_addr_(nullptr, "vk" #name)); \
    if (vk_dispatch_table_.name == nullptr) {                                                                  \
        Log().Fatal("VKSC-EMU-" #name, "Failed to load entry point " #name);                                   \
        valid_ = false;                                                                                        \
    }
    VK_GET_PROC_ADDR(EnumerateInstanceVersion);
    VK_GET_PROC_ADDR(EnumerateInstanceExtensionProperties);
    VK_GET_PROC_ADDR(EnumerateInstanceLayerProperties);
    VK_GET_PROC_ADDR(CreateInstance);
#undef VK_GET_PROC_ADDR

    // Initialize version and extensions from the underlying Vulkan implementation
    {
        uint32_t vk_api_version = 0;
        VkDispatch().EnumerateInstanceVersion(&vk_api_version);
        if (vk_api_version < VK_API_VERSION_1_2) {
            Log().Fatal("VKSC-EMU-ApiVersion", "Underlying Vulkan implementation does not support Vulkan 1.2");
            valid_ = false;
            return;
        }

        uint32_t instance_extension_count = 0;
        VkResult result = VkDispatch().EnumerateInstanceExtensionProperties(nullptr, &instance_extension_count, nullptr);
        if (result >= VK_SUCCESS) {
            instance_extensions_.resize(instance_extension_count);
            result =
                VkDispatch().EnumerateInstanceExtensionProperties(nullptr, &instance_extension_count, instance_extensions_.data());
            if (result >= VK_SUCCESS) {
                instance_extensions_ = icd::GetVulkanSCExtensionList(Log(), instance_extensions_, vksc::GetInstanceExtensionsMap());
            } else {
                instance_extensions_.clear();
                Log().Fatal("VKSC-EMU-InstanceExtensions",
                            "Failed to retrieve instance extension list from the underlying Vulkan implementation");
                valid_ = false;
                return;
            }
        } else {
            Log().Fatal("VKSC-EMU-InstanceExtensionCount",
                        "Failed to retrieve number of instance extensions from the underlying Vulkan implementation");
            valid_ = false;
            return;
        }
    }
}

Global::~Global() {
    if (vk_loader_module_) {
#if defined(_WIN32)
        FreeLibrary((HMODULE)vk_loader_module_);
#else
        dlclose(vk_loader_module_);
#endif
    }
}

VkResult Global::EnumerateInstanceExtensionProperties(const char* pLayerName, uint32_t* pPropertyCount,
                                                      VkExtensionProperties* pProperties) {
    VkResult result = VK_SUCCESS;

    if (pLayerName != nullptr) {
        Log().Warning("VKSC-EMU-InstanceExtensions-UnexpectedLayerName",
                      "vkEnumerateInstanceExtensionProperties is called with pLayerName != nullptr");
    }

    if (pProperties == nullptr) {
        *pPropertyCount = static_cast<uint32_t>(instance_extensions_.size());
    } else {
        if (*pPropertyCount < instance_extensions_.size()) {
            result = VK_INCOMPLETE;
        }
        *pPropertyCount = std::min(*pPropertyCount, static_cast<uint32_t>(instance_extensions_.size()));
        for (uint32_t i = 0; i < *pPropertyCount; ++i) {
            pProperties[i] = instance_extensions_[i];
        }
    }

    return result;
}

}  // namespace vksc

extern "C" {

VKAPI_ATTR VkResult VKAPI_CALL vkEnumerateInstanceVersion(uint32_t* pApiVersion) {
    *pApiVersion = VK_HEADER_VERSION_COMPLETE;
    return VK_SUCCESS;
}

VKAPI_ATTR VkResult VKAPI_CALL vkEnumerateInstanceExtensionProperties(const char* pLayerName, uint32_t* pPropertyCount,
                                                                      VkExtensionProperties* pProperties) {
    icd::EnvironmentOverride override(vksc::ICD.Environment());
    return vksc::ICD.EnumerateInstanceExtensionProperties(pLayerName, pPropertyCount, pProperties);
}

VKAPI_ATTR VkResult VKAPI_CALL vkEnumerateInstanceLayerProperties(uint32_t* pPropertyCount, VkLayerProperties* pProperties) {
    icd::EnvironmentOverride override(vksc::ICD.Environment());
    return vksc::ICD.VkDispatch().EnumerateInstanceLayerProperties(pPropertyCount, pProperties);
}

VKAPI_ATTR VkResult VKAPI_CALL vkCreateInstance(const VkInstanceCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator,
                                                VkInstance* pInstance) {
    if (!vksc::ICD.IsValid()) {
        return VK_ERROR_INCOMPATIBLE_DRIVER;
    }

    icd::EnvironmentOverride override(vksc::ICD.Environment());

    // We need to override the target API version
    VkInstanceCreateInfo create_info = *pCreateInfo;
    VkApplicationInfo app_info;
    if (create_info.pApplicationInfo != nullptr) {
        if (create_info.pApplicationInfo != 0) {
            if (create_info.pApplicationInfo->apiVersion != 0 &&
                VK_API_VERSION_VARIANT(create_info.pApplicationInfo->apiVersion) != VKSC_API_VARIANT) {
                // Unsupported API variant
                return VK_ERROR_INCOMPATIBLE_DRIVER;
            }
        }
        app_info = *create_info.pApplicationInfo;
        app_info.apiVersion = VK_API_VERSION_1_2;
        create_info.pApplicationInfo = &app_info;
    }

    VkInstance instance = VK_NULL_HANDLE;
    VkResult result = vksc::ICD.VkDispatch().CreateInstance(&create_info, pAllocator, &instance);
    if (result >= VK_SUCCESS) {
        *pInstance = vksc::Instance::Create(instance, vksc::ICD, create_info);
        if (!vksc::Instance::FromHandle(*pInstance)->IsValid()) {
            vksc::Instance::FromHandle(*pInstance)->DestroyInstance(pAllocator);
            result = VK_ERROR_INCOMPATIBLE_DRIVER;
        }
    }

    return result;
}

}  // extern "C"
