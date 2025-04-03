// *** THIS FILE IS GENERATED - DO NOT EDIT ***
// See vk_dispatchable_generator.py for modifications

/*
 * Copyright (c) 2024-2025 The Khronos Group Inc.
 * Copyright (c) 2024-2025 RasterGrid Kft.
 *
 * SPDX-License-Identifier: Apache-2.0
 */
// NOLINTBEGIN

#include "vk_instance.h"
#include "vksc_output_struct_sanitizer.h"

namespace vk {

void Instance::DestroyInstance(const VkAllocationCallbacks* pAllocator) { dispatch_table_.DestroyInstance(handle_, pAllocator); }
VkResult Instance::EnumeratePhysicalDevices(uint32_t* pPhysicalDeviceCount, VkPhysicalDevice* pPhysicalDevices) {
    return dispatch_table_.EnumeratePhysicalDevices(handle_, pPhysicalDeviceCount, pPhysicalDevices);
}
PFN_vkVoidFunction Instance::GetInstanceProcAddr(const char* pName) { return dispatch_table_.GetInstanceProcAddr(handle_, pName); }
VkResult Instance::EnumeratePhysicalDeviceGroups(uint32_t* pPhysicalDeviceGroupCount,
                                                 VkPhysicalDeviceGroupProperties* pPhysicalDeviceGroupProperties) {
    VkResult result =
        dispatch_table_.EnumeratePhysicalDeviceGroups(handle_, pPhysicalDeviceGroupCount, pPhysicalDeviceGroupProperties);
    if (pPhysicalDeviceGroupProperties != nullptr) {
        for (uint32_t i = 0; i < *pPhysicalDeviceGroupCount; ++i)
            vksc::ConvertOutStructChainToVulkanSC<VkPhysicalDeviceGroupProperties>(&pPhysicalDeviceGroupProperties[i]);
    }
    return result;
}
void Instance::DestroySurfaceKHR(VkSurfaceKHR surface, const VkAllocationCallbacks* pAllocator) {
    dispatch_table_.DestroySurfaceKHR(handle_, surface, pAllocator);
}
VkResult Instance::CreateDisplayPlaneSurfaceKHR(const VkDisplaySurfaceCreateInfoKHR* pCreateInfo,
                                                const VkAllocationCallbacks* pAllocator, VkSurfaceKHR* pSurface) {
    return dispatch_table_.CreateDisplayPlaneSurfaceKHR(handle_, pCreateInfo, pAllocator, pSurface);
}
#ifdef VK_USE_PLATFORM_XLIB_KHR
VkResult Instance::CreateXlibSurfaceKHR(const VkXlibSurfaceCreateInfoKHR* pCreateInfo, const VkAllocationCallbacks* pAllocator,
                                        VkSurfaceKHR* pSurface) {
    return dispatch_table_.CreateXlibSurfaceKHR(handle_, pCreateInfo, pAllocator, pSurface);
}
#endif  // VK_USE_PLATFORM_XLIB_KHR
#ifdef VK_USE_PLATFORM_XCB_KHR
VkResult Instance::CreateXcbSurfaceKHR(const VkXcbSurfaceCreateInfoKHR* pCreateInfo, const VkAllocationCallbacks* pAllocator,
                                       VkSurfaceKHR* pSurface) {
    return dispatch_table_.CreateXcbSurfaceKHR(handle_, pCreateInfo, pAllocator, pSurface);
}
#endif  // VK_USE_PLATFORM_XCB_KHR
#ifdef VK_USE_PLATFORM_WAYLAND_KHR
VkResult Instance::CreateWaylandSurfaceKHR(const VkWaylandSurfaceCreateInfoKHR* pCreateInfo,
                                           const VkAllocationCallbacks* pAllocator, VkSurfaceKHR* pSurface) {
    return dispatch_table_.CreateWaylandSurfaceKHR(handle_, pCreateInfo, pAllocator, pSurface);
}
#endif  // VK_USE_PLATFORM_WAYLAND_KHR
#ifdef VK_USE_PLATFORM_ANDROID_KHR
VkResult Instance::CreateAndroidSurfaceKHR(const VkAndroidSurfaceCreateInfoKHR* pCreateInfo,
                                           const VkAllocationCallbacks* pAllocator, VkSurfaceKHR* pSurface) {
    return dispatch_table_.CreateAndroidSurfaceKHR(handle_, pCreateInfo, pAllocator, pSurface);
}
#endif  // VK_USE_PLATFORM_ANDROID_KHR
#ifdef VK_USE_PLATFORM_WIN32_KHR
VkResult Instance::CreateWin32SurfaceKHR(const VkWin32SurfaceCreateInfoKHR* pCreateInfo, const VkAllocationCallbacks* pAllocator,
                                         VkSurfaceKHR* pSurface) {
    return dispatch_table_.CreateWin32SurfaceKHR(handle_, pCreateInfo, pAllocator, pSurface);
}
#endif  // VK_USE_PLATFORM_WIN32_KHR
VkResult Instance::CreateDebugReportCallbackEXT(const VkDebugReportCallbackCreateInfoEXT* pCreateInfo,
                                                const VkAllocationCallbacks* pAllocator, VkDebugReportCallbackEXT* pCallback) {
    return dispatch_table_.CreateDebugReportCallbackEXT(handle_, pCreateInfo, pAllocator, pCallback);
}
void Instance::DestroyDebugReportCallbackEXT(VkDebugReportCallbackEXT callback, const VkAllocationCallbacks* pAllocator) {
    dispatch_table_.DestroyDebugReportCallbackEXT(handle_, callback, pAllocator);
}
void Instance::DebugReportMessageEXT(VkDebugReportFlagsEXT flags, VkDebugReportObjectTypeEXT objectType, uint64_t object,
                                     size_t location, int32_t messageCode, const char* pLayerPrefix, const char* pMessage) {
    dispatch_table_.DebugReportMessageEXT(handle_, flags, objectType, object, location, messageCode, pLayerPrefix, pMessage);
}
#ifdef VK_USE_PLATFORM_GGP
VkResult Instance::CreateStreamDescriptorSurfaceGGP(const VkStreamDescriptorSurfaceCreateInfoGGP* pCreateInfo,
                                                    const VkAllocationCallbacks* pAllocator, VkSurfaceKHR* pSurface) {
    return dispatch_table_.CreateStreamDescriptorSurfaceGGP(handle_, pCreateInfo, pAllocator, pSurface);
}
#endif  // VK_USE_PLATFORM_GGP
#ifdef VK_USE_PLATFORM_VI_NN
VkResult Instance::CreateViSurfaceNN(const VkViSurfaceCreateInfoNN* pCreateInfo, const VkAllocationCallbacks* pAllocator,
                                     VkSurfaceKHR* pSurface) {
    return dispatch_table_.CreateViSurfaceNN(handle_, pCreateInfo, pAllocator, pSurface);
}
#endif  // VK_USE_PLATFORM_VI_NN
#ifdef VK_USE_PLATFORM_IOS_MVK
VkResult Instance::CreateIOSSurfaceMVK(const VkIOSSurfaceCreateInfoMVK* pCreateInfo, const VkAllocationCallbacks* pAllocator,
                                       VkSurfaceKHR* pSurface) {
    return dispatch_table_.CreateIOSSurfaceMVK(handle_, pCreateInfo, pAllocator, pSurface);
}
#endif  // VK_USE_PLATFORM_IOS_MVK
#ifdef VK_USE_PLATFORM_MACOS_MVK
VkResult Instance::CreateMacOSSurfaceMVK(const VkMacOSSurfaceCreateInfoMVK* pCreateInfo, const VkAllocationCallbacks* pAllocator,
                                         VkSurfaceKHR* pSurface) {
    return dispatch_table_.CreateMacOSSurfaceMVK(handle_, pCreateInfo, pAllocator, pSurface);
}
#endif  // VK_USE_PLATFORM_MACOS_MVK
VkResult Instance::CreateDebugUtilsMessengerEXT(const VkDebugUtilsMessengerCreateInfoEXT* pCreateInfo,
                                                const VkAllocationCallbacks* pAllocator, VkDebugUtilsMessengerEXT* pMessenger) {
    return dispatch_table_.CreateDebugUtilsMessengerEXT(handle_, pCreateInfo, pAllocator, pMessenger);
}
void Instance::DestroyDebugUtilsMessengerEXT(VkDebugUtilsMessengerEXT messenger, const VkAllocationCallbacks* pAllocator) {
    dispatch_table_.DestroyDebugUtilsMessengerEXT(handle_, messenger, pAllocator);
}
void Instance::SubmitDebugUtilsMessageEXT(VkDebugUtilsMessageSeverityFlagBitsEXT messageSeverity,
                                          VkDebugUtilsMessageTypeFlagsEXT messageTypes,
                                          const VkDebugUtilsMessengerCallbackDataEXT* pCallbackData) {
    dispatch_table_.SubmitDebugUtilsMessageEXT(handle_, messageSeverity, messageTypes, pCallbackData);
}
#ifdef VK_USE_PLATFORM_FUCHSIA
VkResult Instance::CreateImagePipeSurfaceFUCHSIA(const VkImagePipeSurfaceCreateInfoFUCHSIA* pCreateInfo,
                                                 const VkAllocationCallbacks* pAllocator, VkSurfaceKHR* pSurface) {
    return dispatch_table_.CreateImagePipeSurfaceFUCHSIA(handle_, pCreateInfo, pAllocator, pSurface);
}
#endif  // VK_USE_PLATFORM_FUCHSIA
#ifdef VK_USE_PLATFORM_METAL_EXT
VkResult Instance::CreateMetalSurfaceEXT(const VkMetalSurfaceCreateInfoEXT* pCreateInfo, const VkAllocationCallbacks* pAllocator,
                                         VkSurfaceKHR* pSurface) {
    return dispatch_table_.CreateMetalSurfaceEXT(handle_, pCreateInfo, pAllocator, pSurface);
}
#endif  // VK_USE_PLATFORM_METAL_EXT
VkResult Instance::CreateHeadlessSurfaceEXT(const VkHeadlessSurfaceCreateInfoEXT* pCreateInfo,
                                            const VkAllocationCallbacks* pAllocator, VkSurfaceKHR* pSurface) {
    return dispatch_table_.CreateHeadlessSurfaceEXT(handle_, pCreateInfo, pAllocator, pSurface);
}
#ifdef VK_USE_PLATFORM_DIRECTFB_EXT
VkResult Instance::CreateDirectFBSurfaceEXT(const VkDirectFBSurfaceCreateInfoEXT* pCreateInfo,
                                            const VkAllocationCallbacks* pAllocator, VkSurfaceKHR* pSurface) {
    return dispatch_table_.CreateDirectFBSurfaceEXT(handle_, pCreateInfo, pAllocator, pSurface);
}
#endif  // VK_USE_PLATFORM_DIRECTFB_EXT
#ifdef VK_USE_PLATFORM_SCREEN_QNX
VkResult Instance::CreateScreenSurfaceQNX(const VkScreenSurfaceCreateInfoQNX* pCreateInfo, const VkAllocationCallbacks* pAllocator,
                                          VkSurfaceKHR* pSurface) {
    return dispatch_table_.CreateScreenSurfaceQNX(handle_, pCreateInfo, pAllocator, pSurface);
}
#endif  // VK_USE_PLATFORM_SCREEN_QNX

}  // namespace vk

// NOLINTEND
