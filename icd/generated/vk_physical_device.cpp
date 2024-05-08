// *** THIS FILE IS GENERATED - DO NOT EDIT ***
// See vk_dispatchable_generator.py for modifications

/*
 * Copyright (c) 2024 The Khronos Group Inc.
 * Copyright (c) 2024 RasterGrid Kft.
 *
 * SPDX-License-Identifier: Apache-2.0
 */
// NOLINTBEGIN

#include "vk_physical_device.h"

namespace vk {

void PhysicalDevice::GetPhysicalDeviceFeatures(VkPhysicalDeviceFeatures* pFeatures) {
    return dispatch_table_.GetPhysicalDeviceFeatures(handle_, pFeatures);
}

void PhysicalDevice::GetPhysicalDeviceFormatProperties(VkFormat format, VkFormatProperties* pFormatProperties) {
    return dispatch_table_.GetPhysicalDeviceFormatProperties(handle_, format, pFormatProperties);
}

VkResult PhysicalDevice::GetPhysicalDeviceImageFormatProperties(VkFormat format, VkImageType type, VkImageTiling tiling,
                                                                VkImageUsageFlags usage, VkImageCreateFlags flags,
                                                                VkImageFormatProperties* pImageFormatProperties) {
    return dispatch_table_.GetPhysicalDeviceImageFormatProperties(handle_, format, type, tiling, usage, flags,
                                                                  pImageFormatProperties);
}

void PhysicalDevice::GetPhysicalDeviceProperties(VkPhysicalDeviceProperties* pProperties) {
    return dispatch_table_.GetPhysicalDeviceProperties(handle_, pProperties);
}

void PhysicalDevice::GetPhysicalDeviceQueueFamilyProperties(uint32_t* pQueueFamilyPropertyCount,
                                                            VkQueueFamilyProperties* pQueueFamilyProperties) {
    return dispatch_table_.GetPhysicalDeviceQueueFamilyProperties(handle_, pQueueFamilyPropertyCount, pQueueFamilyProperties);
}

void PhysicalDevice::GetPhysicalDeviceMemoryProperties(VkPhysicalDeviceMemoryProperties* pMemoryProperties) {
    return dispatch_table_.GetPhysicalDeviceMemoryProperties(handle_, pMemoryProperties);
}

VkResult PhysicalDevice::CreateDevice(const VkDeviceCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator,
                                      VkDevice* pDevice) {
    return dispatch_table_.CreateDevice(handle_, pCreateInfo, pAllocator, pDevice);
}

VkResult PhysicalDevice::EnumerateDeviceExtensionProperties(const char* pLayerName, uint32_t* pPropertyCount,
                                                            VkExtensionProperties* pProperties) {
    return dispatch_table_.EnumerateDeviceExtensionProperties(handle_, pLayerName, pPropertyCount, pProperties);
}

VkResult PhysicalDevice::EnumerateDeviceLayerProperties(uint32_t* pPropertyCount, VkLayerProperties* pProperties) {
    return dispatch_table_.EnumerateDeviceLayerProperties(handle_, pPropertyCount, pProperties);
}

void PhysicalDevice::GetPhysicalDeviceSparseImageFormatProperties(VkFormat format, VkImageType type, VkSampleCountFlagBits samples,
                                                                  VkImageUsageFlags usage, VkImageTiling tiling,
                                                                  uint32_t* pPropertyCount,
                                                                  VkSparseImageFormatProperties* pProperties) {
    return dispatch_table_.GetPhysicalDeviceSparseImageFormatProperties(handle_, format, type, samples, usage, tiling,
                                                                        pPropertyCount, pProperties);
}

void PhysicalDevice::GetPhysicalDeviceFeatures2(VkPhysicalDeviceFeatures2* pFeatures) {
    return dispatch_table_.GetPhysicalDeviceFeatures2(handle_, pFeatures);
}

void PhysicalDevice::GetPhysicalDeviceProperties2(VkPhysicalDeviceProperties2* pProperties) {
    return dispatch_table_.GetPhysicalDeviceProperties2(handle_, pProperties);
}

void PhysicalDevice::GetPhysicalDeviceFormatProperties2(VkFormat format, VkFormatProperties2* pFormatProperties) {
    return dispatch_table_.GetPhysicalDeviceFormatProperties2(handle_, format, pFormatProperties);
}

VkResult PhysicalDevice::GetPhysicalDeviceImageFormatProperties2(const VkPhysicalDeviceImageFormatInfo2* pImageFormatInfo,
                                                                 VkImageFormatProperties2* pImageFormatProperties) {
    return dispatch_table_.GetPhysicalDeviceImageFormatProperties2(handle_, pImageFormatInfo, pImageFormatProperties);
}

void PhysicalDevice::GetPhysicalDeviceQueueFamilyProperties2(uint32_t* pQueueFamilyPropertyCount,
                                                             VkQueueFamilyProperties2* pQueueFamilyProperties) {
    return dispatch_table_.GetPhysicalDeviceQueueFamilyProperties2(handle_, pQueueFamilyPropertyCount, pQueueFamilyProperties);
}

void PhysicalDevice::GetPhysicalDeviceMemoryProperties2(VkPhysicalDeviceMemoryProperties2* pMemoryProperties) {
    return dispatch_table_.GetPhysicalDeviceMemoryProperties2(handle_, pMemoryProperties);
}

void PhysicalDevice::GetPhysicalDeviceSparseImageFormatProperties2(const VkPhysicalDeviceSparseImageFormatInfo2* pFormatInfo,
                                                                   uint32_t* pPropertyCount,
                                                                   VkSparseImageFormatProperties2* pProperties) {
    return dispatch_table_.GetPhysicalDeviceSparseImageFormatProperties2(handle_, pFormatInfo, pPropertyCount, pProperties);
}

void PhysicalDevice::GetPhysicalDeviceExternalBufferProperties(const VkPhysicalDeviceExternalBufferInfo* pExternalBufferInfo,
                                                               VkExternalBufferProperties* pExternalBufferProperties) {
    return dispatch_table_.GetPhysicalDeviceExternalBufferProperties(handle_, pExternalBufferInfo, pExternalBufferProperties);
}

void PhysicalDevice::GetPhysicalDeviceExternalFenceProperties(const VkPhysicalDeviceExternalFenceInfo* pExternalFenceInfo,
                                                              VkExternalFenceProperties* pExternalFenceProperties) {
    return dispatch_table_.GetPhysicalDeviceExternalFenceProperties(handle_, pExternalFenceInfo, pExternalFenceProperties);
}

void PhysicalDevice::GetPhysicalDeviceExternalSemaphoreProperties(
    const VkPhysicalDeviceExternalSemaphoreInfo* pExternalSemaphoreInfo,
    VkExternalSemaphoreProperties* pExternalSemaphoreProperties) {
    return dispatch_table_.GetPhysicalDeviceExternalSemaphoreProperties(handle_, pExternalSemaphoreInfo,
                                                                        pExternalSemaphoreProperties);
}

VkResult PhysicalDevice::GetPhysicalDeviceToolProperties(uint32_t* pToolCount, VkPhysicalDeviceToolProperties* pToolProperties) {
    return dispatch_table_.GetPhysicalDeviceToolProperties(handle_, pToolCount, pToolProperties);
}

VkResult PhysicalDevice::GetPhysicalDeviceSurfaceSupportKHR(uint32_t queueFamilyIndex, VkSurfaceKHR surface, VkBool32* pSupported) {
    return dispatch_table_.GetPhysicalDeviceSurfaceSupportKHR(handle_, queueFamilyIndex, surface, pSupported);
}

VkResult PhysicalDevice::GetPhysicalDeviceSurfaceCapabilitiesKHR(VkSurfaceKHR surface,
                                                                 VkSurfaceCapabilitiesKHR* pSurfaceCapabilities) {
    return dispatch_table_.GetPhysicalDeviceSurfaceCapabilitiesKHR(handle_, surface, pSurfaceCapabilities);
}

VkResult PhysicalDevice::GetPhysicalDeviceSurfaceFormatsKHR(VkSurfaceKHR surface, uint32_t* pSurfaceFormatCount,
                                                            VkSurfaceFormatKHR* pSurfaceFormats) {
    return dispatch_table_.GetPhysicalDeviceSurfaceFormatsKHR(handle_, surface, pSurfaceFormatCount, pSurfaceFormats);
}

VkResult PhysicalDevice::GetPhysicalDeviceSurfacePresentModesKHR(VkSurfaceKHR surface, uint32_t* pPresentModeCount,
                                                                 VkPresentModeKHR* pPresentModes) {
    return dispatch_table_.GetPhysicalDeviceSurfacePresentModesKHR(handle_, surface, pPresentModeCount, pPresentModes);
}

VkResult PhysicalDevice::GetPhysicalDevicePresentRectanglesKHR(VkSurfaceKHR surface, uint32_t* pRectCount, VkRect2D* pRects) {
    return dispatch_table_.GetPhysicalDevicePresentRectanglesKHR(handle_, surface, pRectCount, pRects);
}

VkResult PhysicalDevice::GetPhysicalDeviceDisplayPropertiesKHR(uint32_t* pPropertyCount, VkDisplayPropertiesKHR* pProperties) {
    return dispatch_table_.GetPhysicalDeviceDisplayPropertiesKHR(handle_, pPropertyCount, pProperties);
}

VkResult PhysicalDevice::GetPhysicalDeviceDisplayPlanePropertiesKHR(uint32_t* pPropertyCount,
                                                                    VkDisplayPlanePropertiesKHR* pProperties) {
    return dispatch_table_.GetPhysicalDeviceDisplayPlanePropertiesKHR(handle_, pPropertyCount, pProperties);
}

VkResult PhysicalDevice::GetDisplayPlaneSupportedDisplaysKHR(uint32_t planeIndex, uint32_t* pDisplayCount,
                                                             VkDisplayKHR* pDisplays) {
    return dispatch_table_.GetDisplayPlaneSupportedDisplaysKHR(handle_, planeIndex, pDisplayCount, pDisplays);
}

VkResult PhysicalDevice::GetDisplayModePropertiesKHR(VkDisplayKHR display, uint32_t* pPropertyCount,
                                                     VkDisplayModePropertiesKHR* pProperties) {
    return dispatch_table_.GetDisplayModePropertiesKHR(handle_, display, pPropertyCount, pProperties);
}

VkResult PhysicalDevice::CreateDisplayModeKHR(VkDisplayKHR display, const VkDisplayModeCreateInfoKHR* pCreateInfo,
                                              const VkAllocationCallbacks* pAllocator, VkDisplayModeKHR* pMode) {
    return dispatch_table_.CreateDisplayModeKHR(handle_, display, pCreateInfo, pAllocator, pMode);
}

VkResult PhysicalDevice::GetDisplayPlaneCapabilitiesKHR(VkDisplayModeKHR mode, uint32_t planeIndex,
                                                        VkDisplayPlaneCapabilitiesKHR* pCapabilities) {
    return dispatch_table_.GetDisplayPlaneCapabilitiesKHR(handle_, mode, planeIndex, pCapabilities);
}

#ifdef VK_USE_PLATFORM_XLIB_KHR

VkBool32 PhysicalDevice::GetPhysicalDeviceXlibPresentationSupportKHR(uint32_t queueFamilyIndex, Display* dpy, VisualID visualID) {
    return dispatch_table_.GetPhysicalDeviceXlibPresentationSupportKHR(handle_, queueFamilyIndex, dpy, visualID);
}

#endif  // VK_USE_PLATFORM_XLIB_KHR

#ifdef VK_USE_PLATFORM_XCB_KHR

VkBool32 PhysicalDevice::GetPhysicalDeviceXcbPresentationSupportKHR(uint32_t queueFamilyIndex, xcb_connection_t* connection,
                                                                    xcb_visualid_t visual_id) {
    return dispatch_table_.GetPhysicalDeviceXcbPresentationSupportKHR(handle_, queueFamilyIndex, connection, visual_id);
}

#endif  // VK_USE_PLATFORM_XCB_KHR

#ifdef VK_USE_PLATFORM_WAYLAND_KHR

VkBool32 PhysicalDevice::GetPhysicalDeviceWaylandPresentationSupportKHR(uint32_t queueFamilyIndex, struct wl_display* display) {
    return dispatch_table_.GetPhysicalDeviceWaylandPresentationSupportKHR(handle_, queueFamilyIndex, display);
}

#endif  // VK_USE_PLATFORM_WAYLAND_KHR

#ifdef VK_USE_PLATFORM_WIN32_KHR

VkBool32 PhysicalDevice::GetPhysicalDeviceWin32PresentationSupportKHR(uint32_t queueFamilyIndex) {
    return dispatch_table_.GetPhysicalDeviceWin32PresentationSupportKHR(handle_, queueFamilyIndex);
}

#endif  // VK_USE_PLATFORM_WIN32_KHR

VkResult PhysicalDevice::GetPhysicalDeviceVideoCapabilitiesKHR(const VkVideoProfileInfoKHR* pVideoProfile,
                                                               VkVideoCapabilitiesKHR* pCapabilities) {
    return dispatch_table_.GetPhysicalDeviceVideoCapabilitiesKHR(handle_, pVideoProfile, pCapabilities);
}

VkResult PhysicalDevice::GetPhysicalDeviceVideoFormatPropertiesKHR(const VkPhysicalDeviceVideoFormatInfoKHR* pVideoFormatInfo,
                                                                   uint32_t* pVideoFormatPropertyCount,
                                                                   VkVideoFormatPropertiesKHR* pVideoFormatProperties) {
    return dispatch_table_.GetPhysicalDeviceVideoFormatPropertiesKHR(handle_, pVideoFormatInfo, pVideoFormatPropertyCount,
                                                                     pVideoFormatProperties);
}

VkResult PhysicalDevice::EnumeratePhysicalDeviceQueueFamilyPerformanceQueryCountersKHR(
    uint32_t queueFamilyIndex, uint32_t* pCounterCount, VkPerformanceCounterKHR* pCounters,
    VkPerformanceCounterDescriptionKHR* pCounterDescriptions) {
    return dispatch_table_.EnumeratePhysicalDeviceQueueFamilyPerformanceQueryCountersKHR(handle_, queueFamilyIndex, pCounterCount,
                                                                                         pCounters, pCounterDescriptions);
}

void PhysicalDevice::GetPhysicalDeviceQueueFamilyPerformanceQueryPassesKHR(
    const VkQueryPoolPerformanceCreateInfoKHR* pPerformanceQueryCreateInfo, uint32_t* pNumPasses) {
    return dispatch_table_.GetPhysicalDeviceQueueFamilyPerformanceQueryPassesKHR(handle_, pPerformanceQueryCreateInfo, pNumPasses);
}

VkResult PhysicalDevice::GetPhysicalDeviceSurfaceCapabilities2KHR(const VkPhysicalDeviceSurfaceInfo2KHR* pSurfaceInfo,
                                                                  VkSurfaceCapabilities2KHR* pSurfaceCapabilities) {
    return dispatch_table_.GetPhysicalDeviceSurfaceCapabilities2KHR(handle_, pSurfaceInfo, pSurfaceCapabilities);
}

VkResult PhysicalDevice::GetPhysicalDeviceSurfaceFormats2KHR(const VkPhysicalDeviceSurfaceInfo2KHR* pSurfaceInfo,
                                                             uint32_t* pSurfaceFormatCount, VkSurfaceFormat2KHR* pSurfaceFormats) {
    return dispatch_table_.GetPhysicalDeviceSurfaceFormats2KHR(handle_, pSurfaceInfo, pSurfaceFormatCount, pSurfaceFormats);
}

VkResult PhysicalDevice::GetPhysicalDeviceDisplayProperties2KHR(uint32_t* pPropertyCount, VkDisplayProperties2KHR* pProperties) {
    return dispatch_table_.GetPhysicalDeviceDisplayProperties2KHR(handle_, pPropertyCount, pProperties);
}

VkResult PhysicalDevice::GetPhysicalDeviceDisplayPlaneProperties2KHR(uint32_t* pPropertyCount,
                                                                     VkDisplayPlaneProperties2KHR* pProperties) {
    return dispatch_table_.GetPhysicalDeviceDisplayPlaneProperties2KHR(handle_, pPropertyCount, pProperties);
}

VkResult PhysicalDevice::GetDisplayModeProperties2KHR(VkDisplayKHR display, uint32_t* pPropertyCount,
                                                      VkDisplayModeProperties2KHR* pProperties) {
    return dispatch_table_.GetDisplayModeProperties2KHR(handle_, display, pPropertyCount, pProperties);
}

VkResult PhysicalDevice::GetDisplayPlaneCapabilities2KHR(const VkDisplayPlaneInfo2KHR* pDisplayPlaneInfo,
                                                         VkDisplayPlaneCapabilities2KHR* pCapabilities) {
    return dispatch_table_.GetDisplayPlaneCapabilities2KHR(handle_, pDisplayPlaneInfo, pCapabilities);
}

VkResult PhysicalDevice::GetPhysicalDeviceFragmentShadingRatesKHR(uint32_t* pFragmentShadingRateCount,
                                                                  VkPhysicalDeviceFragmentShadingRateKHR* pFragmentShadingRates) {
    return dispatch_table_.GetPhysicalDeviceFragmentShadingRatesKHR(handle_, pFragmentShadingRateCount, pFragmentShadingRates);
}

VkResult PhysicalDevice::GetPhysicalDeviceVideoEncodeQualityLevelPropertiesKHR(
    const VkPhysicalDeviceVideoEncodeQualityLevelInfoKHR* pQualityLevelInfo,
    VkVideoEncodeQualityLevelPropertiesKHR* pQualityLevelProperties) {
    return dispatch_table_.GetPhysicalDeviceVideoEncodeQualityLevelPropertiesKHR(handle_, pQualityLevelInfo,
                                                                                 pQualityLevelProperties);
}

VkResult PhysicalDevice::GetPhysicalDeviceCooperativeMatrixPropertiesKHR(uint32_t* pPropertyCount,
                                                                         VkCooperativeMatrixPropertiesKHR* pProperties) {
    return dispatch_table_.GetPhysicalDeviceCooperativeMatrixPropertiesKHR(handle_, pPropertyCount, pProperties);
}

VkResult PhysicalDevice::GetPhysicalDeviceCalibrateableTimeDomainsKHR(uint32_t* pTimeDomainCount, VkTimeDomainKHR* pTimeDomains) {
    return dispatch_table_.GetPhysicalDeviceCalibrateableTimeDomainsKHR(handle_, pTimeDomainCount, pTimeDomains);
}

VkResult PhysicalDevice::GetPhysicalDeviceExternalImageFormatPropertiesNV(
    VkFormat format, VkImageType type, VkImageTiling tiling, VkImageUsageFlags usage, VkImageCreateFlags flags,
    VkExternalMemoryHandleTypeFlagsNV externalHandleType, VkExternalImageFormatPropertiesNV* pExternalImageFormatProperties) {
    return dispatch_table_.GetPhysicalDeviceExternalImageFormatPropertiesNV(handle_, format, type, tiling, usage, flags,
                                                                            externalHandleType, pExternalImageFormatProperties);
}

VkResult PhysicalDevice::ReleaseDisplayEXT(VkDisplayKHR display) { return dispatch_table_.ReleaseDisplayEXT(handle_, display); }

#ifdef VK_USE_PLATFORM_XLIB_XRANDR_EXT

VkResult PhysicalDevice::AcquireXlibDisplayEXT(Display* dpy, VkDisplayKHR display) {
    return dispatch_table_.AcquireXlibDisplayEXT(handle_, dpy, display);
}

VkResult PhysicalDevice::GetRandROutputDisplayEXT(Display* dpy, RROutput rrOutput, VkDisplayKHR* pDisplay) {
    return dispatch_table_.GetRandROutputDisplayEXT(handle_, dpy, rrOutput, pDisplay);
}

#endif  // VK_USE_PLATFORM_XLIB_XRANDR_EXT

VkResult PhysicalDevice::GetPhysicalDeviceSurfaceCapabilities2EXT(VkSurfaceKHR surface,
                                                                  VkSurfaceCapabilities2EXT* pSurfaceCapabilities) {
    return dispatch_table_.GetPhysicalDeviceSurfaceCapabilities2EXT(handle_, surface, pSurfaceCapabilities);
}

void PhysicalDevice::GetPhysicalDeviceMultisamplePropertiesEXT(VkSampleCountFlagBits samples,
                                                               VkMultisamplePropertiesEXT* pMultisampleProperties) {
    return dispatch_table_.GetPhysicalDeviceMultisamplePropertiesEXT(handle_, samples, pMultisampleProperties);
}

VkResult PhysicalDevice::GetPhysicalDeviceCooperativeMatrixPropertiesNV(uint32_t* pPropertyCount,
                                                                        VkCooperativeMatrixPropertiesNV* pProperties) {
    return dispatch_table_.GetPhysicalDeviceCooperativeMatrixPropertiesNV(handle_, pPropertyCount, pProperties);
}

VkResult PhysicalDevice::GetPhysicalDeviceSupportedFramebufferMixedSamplesCombinationsNV(
    uint32_t* pCombinationCount, VkFramebufferMixedSamplesCombinationNV* pCombinations) {
    return dispatch_table_.GetPhysicalDeviceSupportedFramebufferMixedSamplesCombinationsNV(handle_, pCombinationCount,
                                                                                           pCombinations);
}

#ifdef VK_USE_PLATFORM_WIN32_KHR

VkResult PhysicalDevice::GetPhysicalDeviceSurfacePresentModes2EXT(const VkPhysicalDeviceSurfaceInfo2KHR* pSurfaceInfo,
                                                                  uint32_t* pPresentModeCount, VkPresentModeKHR* pPresentModes) {
    return dispatch_table_.GetPhysicalDeviceSurfacePresentModes2EXT(handle_, pSurfaceInfo, pPresentModeCount, pPresentModes);
}

#endif  // VK_USE_PLATFORM_WIN32_KHR

VkResult PhysicalDevice::AcquireDrmDisplayEXT(int32_t drmFd, VkDisplayKHR display) {
    return dispatch_table_.AcquireDrmDisplayEXT(handle_, drmFd, display);
}

VkResult PhysicalDevice::GetDrmDisplayEXT(int32_t drmFd, uint32_t connectorId, VkDisplayKHR* display) {
    return dispatch_table_.GetDrmDisplayEXT(handle_, drmFd, connectorId, display);
}

#ifdef VK_USE_PLATFORM_WIN32_KHR

VkResult PhysicalDevice::AcquireWinrtDisplayNV(VkDisplayKHR display) {
    return dispatch_table_.AcquireWinrtDisplayNV(handle_, display);
}

VkResult PhysicalDevice::GetWinrtDisplayNV(uint32_t deviceRelativeId, VkDisplayKHR* pDisplay) {
    return dispatch_table_.GetWinrtDisplayNV(handle_, deviceRelativeId, pDisplay);
}

#endif  // VK_USE_PLATFORM_WIN32_KHR

#ifdef VK_USE_PLATFORM_DIRECTFB_EXT

VkBool32 PhysicalDevice::GetPhysicalDeviceDirectFBPresentationSupportEXT(uint32_t queueFamilyIndex, IDirectFB* dfb) {
    return dispatch_table_.GetPhysicalDeviceDirectFBPresentationSupportEXT(handle_, queueFamilyIndex, dfb);
}

#endif  // VK_USE_PLATFORM_DIRECTFB_EXT

#ifdef VK_USE_PLATFORM_SCREEN_QNX

VkBool32 PhysicalDevice::GetPhysicalDeviceScreenPresentationSupportQNX(uint32_t queueFamilyIndex, struct _screen_window* window) {
    return dispatch_table_.GetPhysicalDeviceScreenPresentationSupportQNX(handle_, queueFamilyIndex, window);
}

#endif  // VK_USE_PLATFORM_SCREEN_QNX

VkResult PhysicalDevice::GetPhysicalDeviceOpticalFlowImageFormatsNV(
    const VkOpticalFlowImageFormatInfoNV* pOpticalFlowImageFormatInfo, uint32_t* pFormatCount,
    VkOpticalFlowImageFormatPropertiesNV* pImageFormatProperties) {
    return dispatch_table_.GetPhysicalDeviceOpticalFlowImageFormatsNV(handle_, pOpticalFlowImageFormatInfo, pFormatCount,
                                                                      pImageFormatProperties);
}

}  // namespace vk

// NOLINTEND
