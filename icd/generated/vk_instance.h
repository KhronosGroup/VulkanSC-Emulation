// *** THIS FILE IS GENERATED - DO NOT EDIT ***
// See vk_dispatchable_generator.py for modifications

/*
 * Copyright (c) 2024-2025 The Khronos Group Inc.
 * Copyright (c) 2024-2025 RasterGrid Kft.
 *
 * SPDX-License-Identifier: Apache-2.0
 */
// NOLINTBEGIN

#pragma once

#include "vk_dispatch_table.h"
#include "icd_fault_handler.h"
#include <utility>

namespace vk {

class Instance {
  public:
    Instance(VkInstance handle, DispatchTable&& dispatch_table, icd::FaultHandler& fault_handler)
        : handle_(handle), dispatch_table_(std::move(dispatch_table)), fault_handler_(fault_handler) {}
    void DestroyInstance(const VkAllocationCallbacks* pAllocator);
    VkResult EnumeratePhysicalDevices(uint32_t* pPhysicalDeviceCount, VkPhysicalDevice* pPhysicalDevices);
    PFN_vkVoidFunction GetInstanceProcAddr(const char* pName);
    VkResult EnumeratePhysicalDeviceGroups(uint32_t* pPhysicalDeviceGroupCount,
                                           VkPhysicalDeviceGroupProperties* pPhysicalDeviceGroupProperties);
    void DestroySurfaceKHR(VkSurfaceKHR surface, const VkAllocationCallbacks* pAllocator);
    VkResult CreateDisplayPlaneSurfaceKHR(const VkDisplaySurfaceCreateInfoKHR* pCreateInfo, const VkAllocationCallbacks* pAllocator,
                                          VkSurfaceKHR* pSurface);
#ifdef VK_USE_PLATFORM_XLIB_KHR
    VkResult CreateXlibSurfaceKHR(const VkXlibSurfaceCreateInfoKHR* pCreateInfo, const VkAllocationCallbacks* pAllocator,
                                  VkSurfaceKHR* pSurface);
#endif  // VK_USE_PLATFORM_XLIB_KHR
#ifdef VK_USE_PLATFORM_XCB_KHR
    VkResult CreateXcbSurfaceKHR(const VkXcbSurfaceCreateInfoKHR* pCreateInfo, const VkAllocationCallbacks* pAllocator,
                                 VkSurfaceKHR* pSurface);
#endif  // VK_USE_PLATFORM_XCB_KHR
#ifdef VK_USE_PLATFORM_WAYLAND_KHR
    VkResult CreateWaylandSurfaceKHR(const VkWaylandSurfaceCreateInfoKHR* pCreateInfo, const VkAllocationCallbacks* pAllocator,
                                     VkSurfaceKHR* pSurface);
#endif  // VK_USE_PLATFORM_WAYLAND_KHR
#ifdef VK_USE_PLATFORM_ANDROID_KHR
    VkResult CreateAndroidSurfaceKHR(const VkAndroidSurfaceCreateInfoKHR* pCreateInfo, const VkAllocationCallbacks* pAllocator,
                                     VkSurfaceKHR* pSurface);
#endif  // VK_USE_PLATFORM_ANDROID_KHR
#ifdef VK_USE_PLATFORM_WIN32_KHR
    VkResult CreateWin32SurfaceKHR(const VkWin32SurfaceCreateInfoKHR* pCreateInfo, const VkAllocationCallbacks* pAllocator,
                                   VkSurfaceKHR* pSurface);
#endif  // VK_USE_PLATFORM_WIN32_KHR
    VkResult EnumeratePhysicalDeviceGroupsKHR(uint32_t* pPhysicalDeviceGroupCount,
                                              VkPhysicalDeviceGroupProperties* pPhysicalDeviceGroupProperties);
    VkResult CreateDebugReportCallbackEXT(const VkDebugReportCallbackCreateInfoEXT* pCreateInfo,
                                          const VkAllocationCallbacks* pAllocator, VkDebugReportCallbackEXT* pCallback);
    void DestroyDebugReportCallbackEXT(VkDebugReportCallbackEXT callback, const VkAllocationCallbacks* pAllocator);
    void DebugReportMessageEXT(VkDebugReportFlagsEXT flags, VkDebugReportObjectTypeEXT objectType, uint64_t object, size_t location,
                               int32_t messageCode, const char* pLayerPrefix, const char* pMessage);
#ifdef VK_USE_PLATFORM_GGP
    VkResult CreateStreamDescriptorSurfaceGGP(const VkStreamDescriptorSurfaceCreateInfoGGP* pCreateInfo,
                                              const VkAllocationCallbacks* pAllocator, VkSurfaceKHR* pSurface);
#endif  // VK_USE_PLATFORM_GGP
#ifdef VK_USE_PLATFORM_VI_NN
    VkResult CreateViSurfaceNN(const VkViSurfaceCreateInfoNN* pCreateInfo, const VkAllocationCallbacks* pAllocator,
                               VkSurfaceKHR* pSurface);
#endif  // VK_USE_PLATFORM_VI_NN
#ifdef VK_USE_PLATFORM_IOS_MVK
    VkResult CreateIOSSurfaceMVK(const VkIOSSurfaceCreateInfoMVK* pCreateInfo, const VkAllocationCallbacks* pAllocator,
                                 VkSurfaceKHR* pSurface);
#endif  // VK_USE_PLATFORM_IOS_MVK
#ifdef VK_USE_PLATFORM_MACOS_MVK
    VkResult CreateMacOSSurfaceMVK(const VkMacOSSurfaceCreateInfoMVK* pCreateInfo, const VkAllocationCallbacks* pAllocator,
                                   VkSurfaceKHR* pSurface);
#endif  // VK_USE_PLATFORM_MACOS_MVK
    VkResult CreateDebugUtilsMessengerEXT(const VkDebugUtilsMessengerCreateInfoEXT* pCreateInfo,
                                          const VkAllocationCallbacks* pAllocator, VkDebugUtilsMessengerEXT* pMessenger);
    void DestroyDebugUtilsMessengerEXT(VkDebugUtilsMessengerEXT messenger, const VkAllocationCallbacks* pAllocator);
    void SubmitDebugUtilsMessageEXT(VkDebugUtilsMessageSeverityFlagBitsEXT messageSeverity,
                                    VkDebugUtilsMessageTypeFlagsEXT messageTypes,
                                    const VkDebugUtilsMessengerCallbackDataEXT* pCallbackData);
#ifdef VK_USE_PLATFORM_FUCHSIA
    VkResult CreateImagePipeSurfaceFUCHSIA(const VkImagePipeSurfaceCreateInfoFUCHSIA* pCreateInfo,
                                           const VkAllocationCallbacks* pAllocator, VkSurfaceKHR* pSurface);
#endif  // VK_USE_PLATFORM_FUCHSIA
#ifdef VK_USE_PLATFORM_METAL_EXT
    VkResult CreateMetalSurfaceEXT(const VkMetalSurfaceCreateInfoEXT* pCreateInfo, const VkAllocationCallbacks* pAllocator,
                                   VkSurfaceKHR* pSurface);
#endif  // VK_USE_PLATFORM_METAL_EXT
    VkResult CreateHeadlessSurfaceEXT(const VkHeadlessSurfaceCreateInfoEXT* pCreateInfo, const VkAllocationCallbacks* pAllocator,
                                      VkSurfaceKHR* pSurface);
#ifdef VK_USE_PLATFORM_DIRECTFB_EXT
    VkResult CreateDirectFBSurfaceEXT(const VkDirectFBSurfaceCreateInfoEXT* pCreateInfo, const VkAllocationCallbacks* pAllocator,
                                      VkSurfaceKHR* pSurface);
#endif  // VK_USE_PLATFORM_DIRECTFB_EXT
#ifdef VK_USE_PLATFORM_SCREEN_QNX
    VkResult CreateScreenSurfaceQNX(const VkScreenSurfaceCreateInfoQNX* pCreateInfo, const VkAllocationCallbacks* pAllocator,
                                    VkSurfaceKHR* pSurface);
#endif  // VK_USE_PLATFORM_SCREEN_QNX
#ifdef VK_USE_PLATFORM_OHOS
    VkResult CreateSurfaceOHOS(const VkSurfaceCreateInfoOHOS* pCreateInfo, const VkAllocationCallbacks* pAllocator,
                               VkSurfaceKHR* pSurface);
#endif  // VK_USE_PLATFORM_OHOS

    VkInstance VkHandle() const { return handle_; }
    const DispatchTable& VkDispatch() const { return dispatch_table_; }

    void ReportFault(VkFaultLevel level, VkFaultType type) { fault_handler_.ReportFault(level, type); }

  private:
    const VkInstance handle_;
    const DispatchTable dispatch_table_;
    icd::FaultHandler& fault_handler_;
};

}  // namespace vk

// NOLINTEND
