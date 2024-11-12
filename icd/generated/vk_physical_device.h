// *** THIS FILE IS GENERATED - DO NOT EDIT ***
// See vk_dispatchable_generator.py for modifications

/*
 * Copyright (c) 2024 The Khronos Group Inc.
 * Copyright (c) 2024 RasterGrid Kft.
 *
 * SPDX-License-Identifier: Apache-2.0
 */
// NOLINTBEGIN

#pragma once

#include "vk_dispatch_table.h"
#include "icd_fault_handler.h"

namespace vk {

class PhysicalDevice {
  public:
    PhysicalDevice(VkPhysicalDevice handle, const DispatchTable& dispatch_table, icd::FaultHandler& fault_handler)
        : handle_(handle), dispatch_table_(dispatch_table), fault_handler_(fault_handler) {}
    void GetPhysicalDeviceFeatures(VkPhysicalDeviceFeatures* pFeatures);
    void GetPhysicalDeviceFormatProperties(VkFormat format, VkFormatProperties* pFormatProperties);
    VkResult GetPhysicalDeviceImageFormatProperties(VkFormat format, VkImageType type, VkImageTiling tiling,
                                                    VkImageUsageFlags usage, VkImageCreateFlags flags,
                                                    VkImageFormatProperties* pImageFormatProperties);
    void GetPhysicalDeviceProperties(VkPhysicalDeviceProperties* pProperties);
    void GetPhysicalDeviceQueueFamilyProperties(uint32_t* pQueueFamilyPropertyCount,
                                                VkQueueFamilyProperties* pQueueFamilyProperties);
    void GetPhysicalDeviceMemoryProperties(VkPhysicalDeviceMemoryProperties* pMemoryProperties);
    VkResult CreateDevice(const VkDeviceCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkDevice* pDevice);
    VkResult EnumerateDeviceExtensionProperties(const char* pLayerName, uint32_t* pPropertyCount,
                                                VkExtensionProperties* pProperties);
    VkResult EnumerateDeviceLayerProperties(uint32_t* pPropertyCount, VkLayerProperties* pProperties);
    void GetPhysicalDeviceSparseImageFormatProperties(VkFormat format, VkImageType type, VkSampleCountFlagBits samples,
                                                      VkImageUsageFlags usage, VkImageTiling tiling, uint32_t* pPropertyCount,
                                                      VkSparseImageFormatProperties* pProperties);
    void GetPhysicalDeviceFeatures2(VkPhysicalDeviceFeatures2* pFeatures);
    void GetPhysicalDeviceProperties2(VkPhysicalDeviceProperties2* pProperties);
    void GetPhysicalDeviceFormatProperties2(VkFormat format, VkFormatProperties2* pFormatProperties);
    VkResult GetPhysicalDeviceImageFormatProperties2(const VkPhysicalDeviceImageFormatInfo2* pImageFormatInfo,
                                                     VkImageFormatProperties2* pImageFormatProperties);
    void GetPhysicalDeviceQueueFamilyProperties2(uint32_t* pQueueFamilyPropertyCount,
                                                 VkQueueFamilyProperties2* pQueueFamilyProperties);
    void GetPhysicalDeviceMemoryProperties2(VkPhysicalDeviceMemoryProperties2* pMemoryProperties);
    void GetPhysicalDeviceSparseImageFormatProperties2(const VkPhysicalDeviceSparseImageFormatInfo2* pFormatInfo,
                                                       uint32_t* pPropertyCount, VkSparseImageFormatProperties2* pProperties);
    void GetPhysicalDeviceExternalBufferProperties(const VkPhysicalDeviceExternalBufferInfo* pExternalBufferInfo,
                                                   VkExternalBufferProperties* pExternalBufferProperties);
    void GetPhysicalDeviceExternalFenceProperties(const VkPhysicalDeviceExternalFenceInfo* pExternalFenceInfo,
                                                  VkExternalFenceProperties* pExternalFenceProperties);
    void GetPhysicalDeviceExternalSemaphoreProperties(const VkPhysicalDeviceExternalSemaphoreInfo* pExternalSemaphoreInfo,
                                                      VkExternalSemaphoreProperties* pExternalSemaphoreProperties);
    VkResult GetPhysicalDeviceToolProperties(uint32_t* pToolCount, VkPhysicalDeviceToolProperties* pToolProperties);
    VkResult GetPhysicalDeviceSurfaceSupportKHR(uint32_t queueFamilyIndex, VkSurfaceKHR surface, VkBool32* pSupported);
    VkResult GetPhysicalDeviceSurfaceCapabilitiesKHR(VkSurfaceKHR surface, VkSurfaceCapabilitiesKHR* pSurfaceCapabilities);
    VkResult GetPhysicalDeviceSurfaceFormatsKHR(VkSurfaceKHR surface, uint32_t* pSurfaceFormatCount,
                                                VkSurfaceFormatKHR* pSurfaceFormats);
    VkResult GetPhysicalDeviceSurfacePresentModesKHR(VkSurfaceKHR surface, uint32_t* pPresentModeCount,
                                                     VkPresentModeKHR* pPresentModes);
    VkResult GetPhysicalDevicePresentRectanglesKHR(VkSurfaceKHR surface, uint32_t* pRectCount, VkRect2D* pRects);
    VkResult GetPhysicalDeviceDisplayPropertiesKHR(uint32_t* pPropertyCount, VkDisplayPropertiesKHR* pProperties);
    VkResult GetPhysicalDeviceDisplayPlanePropertiesKHR(uint32_t* pPropertyCount, VkDisplayPlanePropertiesKHR* pProperties);
    VkResult GetDisplayPlaneSupportedDisplaysKHR(uint32_t planeIndex, uint32_t* pDisplayCount, VkDisplayKHR* pDisplays);
    VkResult GetDisplayModePropertiesKHR(VkDisplayKHR display, uint32_t* pPropertyCount, VkDisplayModePropertiesKHR* pProperties);
    VkResult CreateDisplayModeKHR(VkDisplayKHR display, const VkDisplayModeCreateInfoKHR* pCreateInfo,
                                  const VkAllocationCallbacks* pAllocator, VkDisplayModeKHR* pMode);
    VkResult GetDisplayPlaneCapabilitiesKHR(VkDisplayModeKHR mode, uint32_t planeIndex,
                                            VkDisplayPlaneCapabilitiesKHR* pCapabilities);
#ifdef VK_USE_PLATFORM_XLIB_KHR
    VkBool32 GetPhysicalDeviceXlibPresentationSupportKHR(uint32_t queueFamilyIndex, Display* dpy, VisualID visualID);
#endif  // VK_USE_PLATFORM_XLIB_KHR
#ifdef VK_USE_PLATFORM_XCB_KHR
    VkBool32 GetPhysicalDeviceXcbPresentationSupportKHR(uint32_t queueFamilyIndex, xcb_connection_t* connection,
                                                        xcb_visualid_t visual_id);
#endif  // VK_USE_PLATFORM_XCB_KHR
#ifdef VK_USE_PLATFORM_WAYLAND_KHR
    VkBool32 GetPhysicalDeviceWaylandPresentationSupportKHR(uint32_t queueFamilyIndex, struct wl_display* display);
#endif  // VK_USE_PLATFORM_WAYLAND_KHR
#ifdef VK_USE_PLATFORM_WIN32_KHR
    VkBool32 GetPhysicalDeviceWin32PresentationSupportKHR(uint32_t queueFamilyIndex);
#endif  // VK_USE_PLATFORM_WIN32_KHR
    VkResult GetPhysicalDeviceVideoCapabilitiesKHR(const VkVideoProfileInfoKHR* pVideoProfile,
                                                   VkVideoCapabilitiesKHR* pCapabilities);
    VkResult GetPhysicalDeviceVideoFormatPropertiesKHR(const VkPhysicalDeviceVideoFormatInfoKHR* pVideoFormatInfo,
                                                       uint32_t* pVideoFormatPropertyCount,
                                                       VkVideoFormatPropertiesKHR* pVideoFormatProperties);
    VkResult EnumeratePhysicalDeviceQueueFamilyPerformanceQueryCountersKHR(
        uint32_t queueFamilyIndex, uint32_t* pCounterCount, VkPerformanceCounterKHR* pCounters,
        VkPerformanceCounterDescriptionKHR* pCounterDescriptions);
    void GetPhysicalDeviceQueueFamilyPerformanceQueryPassesKHR(
        const VkQueryPoolPerformanceCreateInfoKHR* pPerformanceQueryCreateInfo, uint32_t* pNumPasses);
    VkResult GetPhysicalDeviceSurfaceCapabilities2KHR(const VkPhysicalDeviceSurfaceInfo2KHR* pSurfaceInfo,
                                                      VkSurfaceCapabilities2KHR* pSurfaceCapabilities);
    VkResult GetPhysicalDeviceSurfaceFormats2KHR(const VkPhysicalDeviceSurfaceInfo2KHR* pSurfaceInfo, uint32_t* pSurfaceFormatCount,
                                                 VkSurfaceFormat2KHR* pSurfaceFormats);
    VkResult GetPhysicalDeviceDisplayProperties2KHR(uint32_t* pPropertyCount, VkDisplayProperties2KHR* pProperties);
    VkResult GetPhysicalDeviceDisplayPlaneProperties2KHR(uint32_t* pPropertyCount, VkDisplayPlaneProperties2KHR* pProperties);
    VkResult GetDisplayModeProperties2KHR(VkDisplayKHR display, uint32_t* pPropertyCount, VkDisplayModeProperties2KHR* pProperties);
    VkResult GetDisplayPlaneCapabilities2KHR(const VkDisplayPlaneInfo2KHR* pDisplayPlaneInfo,
                                             VkDisplayPlaneCapabilities2KHR* pCapabilities);
    VkResult GetPhysicalDeviceFragmentShadingRatesKHR(uint32_t* pFragmentShadingRateCount,
                                                      VkPhysicalDeviceFragmentShadingRateKHR* pFragmentShadingRates);
    VkResult GetPhysicalDeviceVideoEncodeQualityLevelPropertiesKHR(
        const VkPhysicalDeviceVideoEncodeQualityLevelInfoKHR* pQualityLevelInfo,
        VkVideoEncodeQualityLevelPropertiesKHR* pQualityLevelProperties);
    VkResult GetPhysicalDeviceCooperativeMatrixPropertiesKHR(uint32_t* pPropertyCount,
                                                             VkCooperativeMatrixPropertiesKHR* pProperties);
    VkResult GetPhysicalDeviceCalibrateableTimeDomainsKHR(uint32_t* pTimeDomainCount, VkTimeDomainKHR* pTimeDomains);
    VkResult GetPhysicalDeviceExternalImageFormatPropertiesNV(VkFormat format, VkImageType type, VkImageTiling tiling,
                                                              VkImageUsageFlags usage, VkImageCreateFlags flags,
                                                              VkExternalMemoryHandleTypeFlagsNV externalHandleType,
                                                              VkExternalImageFormatPropertiesNV* pExternalImageFormatProperties);
    VkResult ReleaseDisplayEXT(VkDisplayKHR display);
#ifdef VK_USE_PLATFORM_XLIB_XRANDR_EXT
    VkResult AcquireXlibDisplayEXT(Display* dpy, VkDisplayKHR display);
    VkResult GetRandROutputDisplayEXT(Display* dpy, RROutput rrOutput, VkDisplayKHR* pDisplay);
#endif  // VK_USE_PLATFORM_XLIB_XRANDR_EXT
    VkResult GetPhysicalDeviceSurfaceCapabilities2EXT(VkSurfaceKHR surface, VkSurfaceCapabilities2EXT* pSurfaceCapabilities);
    void GetPhysicalDeviceMultisamplePropertiesEXT(VkSampleCountFlagBits samples,
                                                   VkMultisamplePropertiesEXT* pMultisampleProperties);
    VkResult GetPhysicalDeviceCooperativeMatrixPropertiesNV(uint32_t* pPropertyCount, VkCooperativeMatrixPropertiesNV* pProperties);
    VkResult GetPhysicalDeviceSupportedFramebufferMixedSamplesCombinationsNV(uint32_t* pCombinationCount,
                                                                             VkFramebufferMixedSamplesCombinationNV* pCombinations);
#ifdef VK_USE_PLATFORM_WIN32_KHR
    VkResult GetPhysicalDeviceSurfacePresentModes2EXT(const VkPhysicalDeviceSurfaceInfo2KHR* pSurfaceInfo,
                                                      uint32_t* pPresentModeCount, VkPresentModeKHR* pPresentModes);
#endif  // VK_USE_PLATFORM_WIN32_KHR
    VkResult AcquireDrmDisplayEXT(int32_t drmFd, VkDisplayKHR display);
    VkResult GetDrmDisplayEXT(int32_t drmFd, uint32_t connectorId, VkDisplayKHR* display);
#ifdef VK_USE_PLATFORM_WIN32_KHR
    VkResult AcquireWinrtDisplayNV(VkDisplayKHR display);
    VkResult GetWinrtDisplayNV(uint32_t deviceRelativeId, VkDisplayKHR* pDisplay);
#endif  // VK_USE_PLATFORM_WIN32_KHR
#ifdef VK_USE_PLATFORM_DIRECTFB_EXT
    VkBool32 GetPhysicalDeviceDirectFBPresentationSupportEXT(uint32_t queueFamilyIndex, IDirectFB* dfb);
#endif  // VK_USE_PLATFORM_DIRECTFB_EXT
#ifdef VK_USE_PLATFORM_SCREEN_QNX
    VkBool32 GetPhysicalDeviceScreenPresentationSupportQNX(uint32_t queueFamilyIndex, struct _screen_window* window);
#endif  // VK_USE_PLATFORM_SCREEN_QNX
    VkResult GetPhysicalDeviceOpticalFlowImageFormatsNV(const VkOpticalFlowImageFormatInfoNV* pOpticalFlowImageFormatInfo,
                                                        uint32_t* pFormatCount,
                                                        VkOpticalFlowImageFormatPropertiesNV* pImageFormatProperties);

    VkPhysicalDevice VkHandle() const { return handle_; }
    const DispatchTable& VkDispatch() const { return dispatch_table_; }

    void ReportFault(VkFaultLevel level, VkFaultType type) { fault_handler_.ReportFault(level, type); }

  private:
    const VkPhysicalDevice handle_;
    const DispatchTable& dispatch_table_;
    icd::FaultHandler& fault_handler_;
};

}  // namespace vk

// NOLINTEND
