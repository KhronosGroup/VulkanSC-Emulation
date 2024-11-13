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
#include "icd_shadow_stack.h"
#include "icd_pnext_chain_utils.h"

#include <algorithm>
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
    // List of instance extensions implemented by the ICD even if the underlying Vulkan implementation does not support them
    static const ExtensionMap s_icd_implemented_instance_extensions = {
        {ExtensionNumber::EXT_debug_utils, VK_EXT_DEBUG_UTILS_SPEC_VERSION}};

    for (const auto& private_env : Environment().PrivateEnvs()) {
        Log().Debug("VKSC-EMU-PrivateEnvs", "Environment variable %s=%s is shadowed", private_env.first,
                    private_env.second.c_str());
    }

    icd::EnvironmentOverride override(Environment());

    auto custom_library_path = getenv("VKSC_EMU_VULKAN_LIB_PATH");
    if (custom_library_path != nullptr) {
#if defined(_WIN32)
        vk_loader_module_ = LoadLibraryA(custom_library_path);
#else
        vk_loader_module_ = dlopen(custom_library_path, RTLD_NOW | RTLD_LOCAL);
#endif
        if (!vk_loader_module_) {
            Log().Fatal("VKSC-EMU-Custom-Vulkan-Library", "Failed to load custom Vulkan library '%s'", custom_library_path);
            valid_ = false;
            return;
        }
    } else {
#if defined(_WIN32)
        vk_loader_module_ = LoadLibraryA("vulkan-1.dll");
#elif defined(__APPLE__)
        vk_loader_module_ = dlopen("libvulkan.dylib", RTLD_NOW | RTLD_LOCAL);
        if (!vk_loader_module_) {
            vk_loader_module_ = dlopen("libvulkan.1.dylib", RTLD_NOW | RTLD_LOCAL);
        }
        if (!vk_loader_module_) {
            vk_loader_module_ = dlopen("libMoltenVK.dylib", RTLD_NOW | RTLD_LOCAL);
        }
        // modern versions of macOS don't search /usr/local/lib automatically contrary to what man dlopen says
        // Vulkan SDK uses this as the system-wide installation location, so we're going to fallback to this if all else fails
        if (!vk_loader_module_ && getenv("DYLD_FALLBACK_LIBRARY_PATH") == NULL) {
            vk_loader_module_ = dlopen("/usr/local/lib/libvulkan.dylib", RTLD_NOW | RTLD_LOCAL);
        }
#else
        vk_loader_module_ = dlopen("libvulkan.so.1", RTLD_NOW | RTLD_LOCAL);
        if (!vk_loader_module_) {
            vk_loader_module_ = dlopen("libvulkan.so", RTLD_NOW | RTLD_LOCAL);
        }
#endif
        if (!vk_loader_module_) {
            Log().Fatal("VKSC-EMU-Vulkan-Loader", "Failed to load the Vulkan Loader");
            valid_ = false;
            return;
        }
    }

#if defined(_WIN32)
    vk_get_instance_proc_addr_ =
        (PFN_vkGetInstanceProcAddr)(void (*)(void))GetProcAddress((HMODULE)vk_loader_module_, "vkGetInstanceProcAddr");
#else
    vk_get_instance_proc_addr_ = (PFN_vkGetInstanceProcAddr)dlsym(vk_loader_module_, "vkGetInstanceProcAddr");
#endif
    if (vk_get_instance_proc_addr_ == nullptr) {
        Log().Fatal("VKSC-EMU-GetInstanceProcAddr", "Failed to load entry point vkGetInstanceProcAddr");
        valid_ = false;
        return;
    }

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
            instance_extension_list_.resize(instance_extension_count);
            result = VkDispatch().EnumerateInstanceExtensionProperties(nullptr, &instance_extension_count,
                                                                       instance_extension_list_.data());
            if (result >= VK_SUCCESS) {
                // Save original Vulkan extensions
                for (const auto& instance_extension : instance_extension_list_) {
                    vk_instance_extensions_.insert(vk::GetExtensionNumber(instance_extension.extensionName));
                }
                // Filter and add Vulkan SC extensions
                instance_extension_list_ = icd::GetVulkanSCExtensionList(
                    Log(), instance_extension_list_, vksc::GetInstanceExtensionsMap(), s_icd_implemented_instance_extensions);
                // Save updated Vulkan SC exensions
                for (const auto& instance_extension : instance_extension_list_) {
                    instance_extensions_.insert(GetExtensionNumber(instance_extension.extensionName));
                }
            } else {
                instance_extension_list_.clear();
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
        *pPropertyCount = static_cast<uint32_t>(instance_extension_list_.size());
    } else {
        if (*pPropertyCount < instance_extension_list_.size()) {
            result = VK_INCOMPLETE;
        }
        *pPropertyCount = std::min(*pPropertyCount, static_cast<uint32_t>(instance_extension_list_.size()));
        for (uint32_t i = 0; i < *pPropertyCount; ++i) {
            pProperties[i] = instance_extension_list_[i];
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
    // We don't want to report back Vulkan layers
    *pPropertyCount = 0;
    return VK_SUCCESS;
}

VKAPI_ATTR VkResult VKAPI_CALL vkCreateInstance(const VkInstanceCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator,
                                                VkInstance* pInstance) {
    if (!vksc::ICD.IsValid()) {
        return VK_ERROR_INCOMPATIBLE_DRIVER;
    }

    icd::EnvironmentOverride override(vksc::ICD.Environment());

    // Construct the Vulkan version of the create info with appropriate filtering
    icd::ShadowStack::Frame stack_frame{};
    VkInstanceCreateInfo vk_create_info = *pCreateInfo;
    icd::ModifiablePNextChain vk_mod_pnext_chain(stack_frame, vk_create_info);

    // We need to override the target API version
    VkApplicationInfo vk_app_info;
    if (pCreateInfo->pApplicationInfo != nullptr) {
        if (pCreateInfo->pApplicationInfo->apiVersion != 0 &&
            VK_API_VERSION_VARIANT(pCreateInfo->pApplicationInfo->apiVersion) != VKSC_API_VARIANT) {
            // Unsupported API variant
            return VK_ERROR_INCOMPATIBLE_DRIVER;
        }
        vk_app_info = *vk_create_info.pApplicationInfo;
        vk_app_info.apiVersion = VK_API_VERSION_1_2;
        vk_create_info.pApplicationInfo = &vk_app_info;
    }

    // We don't support any layers and we do not want to pass down any layer enablement to the Vulkan stack anyway
    if (pCreateInfo->enabledLayerCount != 0) {
        return VK_ERROR_LAYER_NOT_PRESENT;
    }

    // We need to filter emulated extensions
    auto vk_enabled_extension_names = stack_frame.Alloc<const char*>(pCreateInfo->enabledExtensionCount);
    vk_create_info.enabledExtensionCount = 0;
    vk_create_info.ppEnabledExtensionNames = vk_enabled_extension_names;
    for (uint32_t i = 0; i < pCreateInfo->enabledExtensionCount; ++i) {
        vksc::ExtensionNumber ext_num = vksc::GetExtensionNumber(pCreateInfo->ppEnabledExtensionNames[i]);
        if (vksc::ICD.IsInstanceExtensionSupported(ext_num)) {
            if (vksc::ICD.IsInstanceExtensionEmulated(ext_num)) {
                if (ext_num == vksc::ExtensionNumber::EXT_debug_utils) {
                    // If we are emulating VK_EXT_debug_utils (e.g. because we don't have the Vulkan loader enabled in the
                    // stack and the Vulkan ICD does not support it) then we need to filter out any callback create infos
                    vk_create_info.pNext =
                        vk_mod_pnext_chain.RemoveAllStructsFromChain<VkDebugUtilsMessengerCreateInfoEXT>().GetModifiedPNext();
                }
            } else {
                // Not an emulated extension, include it in the Vulkan create info
                vk_enabled_extension_names[vk_create_info.enabledExtensionCount++] = pCreateInfo->ppEnabledExtensionNames[i];
            }
        } else {
            vksc::ICD.Log().Error("VKSC-EMU-CreateInstance-UnsupportedExtension", "Unsupported instance extension '%s'",
                                  pCreateInfo->ppEnabledExtensionNames[i]);
            return VK_ERROR_EXTENSION_NOT_PRESENT;
        }
    }

    VkInstance instance = VK_NULL_HANDLE;
    VkResult result = vksc::ICD.VkDispatch().CreateInstance(&vk_create_info, pAllocator, &instance);
    if (result >= VK_SUCCESS) {
        *pInstance = vksc::Instance::Create(instance, vksc::ICD, *pCreateInfo);
        result = vksc::Instance::FromHandle(*pInstance)->GetStatus();
        if (result < VK_SUCCESS) {
            vksc::Instance::FromHandle(*pInstance)->DestroyInstance(pAllocator);
        }
    }

    return result;
}

}  // extern "C"
