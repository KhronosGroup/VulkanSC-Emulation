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
#include "vksc_output_struct_sanitizer.h"

namespace vk {

void PhysicalDevice::GetPhysicalDeviceFeatures(VkPhysicalDeviceFeatures* pFeatures) {
    dispatch_table_.GetPhysicalDeviceFeatures(handle_, pFeatures);
    if (pFeatures != nullptr) {
        vksc::ConvertOutStructToVulkanSC<VkPhysicalDeviceFeatures>(pFeatures);
    }
}
void PhysicalDevice::GetPhysicalDeviceFormatProperties(VkFormat format, VkFormatProperties* pFormatProperties) {
    dispatch_table_.GetPhysicalDeviceFormatProperties(handle_, format, pFormatProperties);
    if (pFormatProperties != nullptr) {
        vksc::ConvertOutStructToVulkanSC<VkFormatProperties>(pFormatProperties);
    }
}
VkResult PhysicalDevice::GetPhysicalDeviceImageFormatProperties(VkFormat format, VkImageType type, VkImageTiling tiling,
                                                                VkImageUsageFlags usage, VkImageCreateFlags flags,
                                                                VkImageFormatProperties* pImageFormatProperties) {
    VkResult result =
        dispatch_table_.GetPhysicalDeviceImageFormatProperties(handle_, format, type, tiling, usage, flags, pImageFormatProperties);
    if (pImageFormatProperties != nullptr) {
        vksc::ConvertOutStructToVulkanSC<VkImageFormatProperties>(pImageFormatProperties);
    }
    return result;
}
void PhysicalDevice::GetPhysicalDeviceProperties(VkPhysicalDeviceProperties* pProperties) {
    dispatch_table_.GetPhysicalDeviceProperties(handle_, pProperties);
    if (pProperties != nullptr) {
        vksc::ConvertOutStructToVulkanSC<VkPhysicalDeviceProperties>(pProperties);
    }
}
void PhysicalDevice::GetPhysicalDeviceQueueFamilyProperties(uint32_t* pQueueFamilyPropertyCount,
                                                            VkQueueFamilyProperties* pQueueFamilyProperties) {
    dispatch_table_.GetPhysicalDeviceQueueFamilyProperties(handle_, pQueueFamilyPropertyCount, pQueueFamilyProperties);
    if (pQueueFamilyProperties != nullptr) {
        for (uint32_t i = 0; i < *pQueueFamilyPropertyCount; ++i)
            vksc::ConvertOutStructToVulkanSC<VkQueueFamilyProperties>(&pQueueFamilyProperties[i]);
    }
}
void PhysicalDevice::GetPhysicalDeviceMemoryProperties(VkPhysicalDeviceMemoryProperties* pMemoryProperties) {
    dispatch_table_.GetPhysicalDeviceMemoryProperties(handle_, pMemoryProperties);
    if (pMemoryProperties != nullptr) {
        vksc::ConvertOutStructToVulkanSC<VkPhysicalDeviceMemoryProperties>(pMemoryProperties);
    }
}
VkResult PhysicalDevice::CreateDevice(const VkDeviceCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator,
                                      VkDevice* pDevice) {
    return dispatch_table_.CreateDevice(handle_, pCreateInfo, pAllocator, pDevice);
}
VkResult PhysicalDevice::EnumerateDeviceExtensionProperties(const char* pLayerName, uint32_t* pPropertyCount,
                                                            VkExtensionProperties* pProperties) {
    VkResult result = dispatch_table_.EnumerateDeviceExtensionProperties(handle_, pLayerName, pPropertyCount, pProperties);
    if (pProperties != nullptr) {
        for (uint32_t i = 0; i < *pPropertyCount; ++i) vksc::ConvertOutStructToVulkanSC<VkExtensionProperties>(&pProperties[i]);
    }
    return result;
}
VkResult PhysicalDevice::EnumerateDeviceLayerProperties(uint32_t* pPropertyCount, VkLayerProperties* pProperties) {
    VkResult result = dispatch_table_.EnumerateDeviceLayerProperties(handle_, pPropertyCount, pProperties);
    if (pProperties != nullptr) {
        for (uint32_t i = 0; i < *pPropertyCount; ++i) vksc::ConvertOutStructToVulkanSC<VkLayerProperties>(&pProperties[i]);
    }
    return result;
}
void PhysicalDevice::GetPhysicalDeviceSparseImageFormatProperties(VkFormat format, VkImageType type, VkSampleCountFlagBits samples,
                                                                  VkImageUsageFlags usage, VkImageTiling tiling,
                                                                  uint32_t* pPropertyCount,
                                                                  VkSparseImageFormatProperties* pProperties) {
    dispatch_table_.GetPhysicalDeviceSparseImageFormatProperties(handle_, format, type, samples, usage, tiling, pPropertyCount,
                                                                 pProperties);
    if (pProperties != nullptr) {
        for (uint32_t i = 0; i < *pPropertyCount; ++i)
            vksc::ConvertOutStructToVulkanSC<VkSparseImageFormatProperties>(&pProperties[i]);
    }
}
void PhysicalDevice::GetPhysicalDeviceFeatures2(VkPhysicalDeviceFeatures2* pFeatures) {
    dispatch_table_.GetPhysicalDeviceFeatures2(handle_, pFeatures);
    if (pFeatures != nullptr) {
        vksc::ConvertOutStructChainToVulkanSC<VkPhysicalDeviceFeatures2>(pFeatures);
    }
}
void PhysicalDevice::GetPhysicalDeviceProperties2(VkPhysicalDeviceProperties2* pProperties) {
    dispatch_table_.GetPhysicalDeviceProperties2(handle_, pProperties);
    if (pProperties != nullptr) {
        vksc::ConvertOutStructChainToVulkanSC<VkPhysicalDeviceProperties2>(pProperties);
    }
}
void PhysicalDevice::GetPhysicalDeviceFormatProperties2(VkFormat format, VkFormatProperties2* pFormatProperties) {
    dispatch_table_.GetPhysicalDeviceFormatProperties2(handle_, format, pFormatProperties);
    if (pFormatProperties != nullptr) {
        vksc::ConvertOutStructChainToVulkanSC<VkFormatProperties2>(pFormatProperties);
    }
}
VkResult PhysicalDevice::GetPhysicalDeviceImageFormatProperties2(const VkPhysicalDeviceImageFormatInfo2* pImageFormatInfo,
                                                                 VkImageFormatProperties2* pImageFormatProperties) {
    VkResult result = dispatch_table_.GetPhysicalDeviceImageFormatProperties2(handle_, pImageFormatInfo, pImageFormatProperties);
    if (pImageFormatProperties != nullptr) {
        vksc::ConvertOutStructChainToVulkanSC<VkImageFormatProperties2>(pImageFormatProperties);
    }
    return result;
}
void PhysicalDevice::GetPhysicalDeviceQueueFamilyProperties2(uint32_t* pQueueFamilyPropertyCount,
                                                             VkQueueFamilyProperties2* pQueueFamilyProperties) {
    dispatch_table_.GetPhysicalDeviceQueueFamilyProperties2(handle_, pQueueFamilyPropertyCount, pQueueFamilyProperties);
    if (pQueueFamilyProperties != nullptr) {
        for (uint32_t i = 0; i < *pQueueFamilyPropertyCount; ++i)
            vksc::ConvertOutStructChainToVulkanSC<VkQueueFamilyProperties2>(&pQueueFamilyProperties[i]);
    }
}
void PhysicalDevice::GetPhysicalDeviceMemoryProperties2(VkPhysicalDeviceMemoryProperties2* pMemoryProperties) {
    dispatch_table_.GetPhysicalDeviceMemoryProperties2(handle_, pMemoryProperties);
    if (pMemoryProperties != nullptr) {
        vksc::ConvertOutStructChainToVulkanSC<VkPhysicalDeviceMemoryProperties2>(pMemoryProperties);
    }
}
void PhysicalDevice::GetPhysicalDeviceSparseImageFormatProperties2(const VkPhysicalDeviceSparseImageFormatInfo2* pFormatInfo,
                                                                   uint32_t* pPropertyCount,
                                                                   VkSparseImageFormatProperties2* pProperties) {
    dispatch_table_.GetPhysicalDeviceSparseImageFormatProperties2(handle_, pFormatInfo, pPropertyCount, pProperties);
    if (pProperties != nullptr) {
        for (uint32_t i = 0; i < *pPropertyCount; ++i)
            vksc::ConvertOutStructChainToVulkanSC<VkSparseImageFormatProperties2>(&pProperties[i]);
    }
}
void PhysicalDevice::GetPhysicalDeviceExternalBufferProperties(const VkPhysicalDeviceExternalBufferInfo* pExternalBufferInfo,
                                                               VkExternalBufferProperties* pExternalBufferProperties) {
    dispatch_table_.GetPhysicalDeviceExternalBufferProperties(handle_, pExternalBufferInfo, pExternalBufferProperties);
    if (pExternalBufferProperties != nullptr) {
        vksc::ConvertOutStructChainToVulkanSC<VkExternalBufferProperties>(pExternalBufferProperties);
    }
}
void PhysicalDevice::GetPhysicalDeviceExternalFenceProperties(const VkPhysicalDeviceExternalFenceInfo* pExternalFenceInfo,
                                                              VkExternalFenceProperties* pExternalFenceProperties) {
    dispatch_table_.GetPhysicalDeviceExternalFenceProperties(handle_, pExternalFenceInfo, pExternalFenceProperties);
    if (pExternalFenceProperties != nullptr) {
        vksc::ConvertOutStructChainToVulkanSC<VkExternalFenceProperties>(pExternalFenceProperties);
    }
}
void PhysicalDevice::GetPhysicalDeviceExternalSemaphoreProperties(
    const VkPhysicalDeviceExternalSemaphoreInfo* pExternalSemaphoreInfo,
    VkExternalSemaphoreProperties* pExternalSemaphoreProperties) {
    dispatch_table_.GetPhysicalDeviceExternalSemaphoreProperties(handle_, pExternalSemaphoreInfo, pExternalSemaphoreProperties);
    if (pExternalSemaphoreProperties != nullptr) {
        vksc::ConvertOutStructChainToVulkanSC<VkExternalSemaphoreProperties>(pExternalSemaphoreProperties);
    }
}
VkResult PhysicalDevice::GetPhysicalDeviceToolProperties(uint32_t* pToolCount, VkPhysicalDeviceToolProperties* pToolProperties) {
    VkResult result = dispatch_table_.GetPhysicalDeviceToolProperties(handle_, pToolCount, pToolProperties);
    if (pToolProperties != nullptr) {
        for (uint32_t i = 0; i < *pToolCount; ++i)
            vksc::ConvertOutStructChainToVulkanSC<VkPhysicalDeviceToolProperties>(&pToolProperties[i]);
    }
    return result;
}
VkResult PhysicalDevice::GetPhysicalDeviceSurfaceSupportKHR(uint32_t queueFamilyIndex, VkSurfaceKHR surface, VkBool32* pSupported) {
    return dispatch_table_.GetPhysicalDeviceSurfaceSupportKHR(handle_, queueFamilyIndex, surface, pSupported);
}
VkResult PhysicalDevice::GetPhysicalDeviceSurfaceCapabilitiesKHR(VkSurfaceKHR surface,
                                                                 VkSurfaceCapabilitiesKHR* pSurfaceCapabilities) {
    VkResult result = dispatch_table_.GetPhysicalDeviceSurfaceCapabilitiesKHR(handle_, surface, pSurfaceCapabilities);
    if (pSurfaceCapabilities != nullptr) {
        vksc::ConvertOutStructToVulkanSC<VkSurfaceCapabilitiesKHR>(pSurfaceCapabilities);
    }
    return result;
}
VkResult PhysicalDevice::GetPhysicalDeviceSurfaceFormatsKHR(VkSurfaceKHR surface, uint32_t* pSurfaceFormatCount,
                                                            VkSurfaceFormatKHR* pSurfaceFormats) {
    VkResult result = dispatch_table_.GetPhysicalDeviceSurfaceFormatsKHR(handle_, surface, pSurfaceFormatCount, pSurfaceFormats);
    if (pSurfaceFormats != nullptr) {
        for (uint32_t i = 0; i < *pSurfaceFormatCount; ++i)
            vksc::ConvertOutStructToVulkanSC<VkSurfaceFormatKHR>(&pSurfaceFormats[i]);
    }
    return result;
}
VkResult PhysicalDevice::GetPhysicalDeviceSurfacePresentModesKHR(VkSurfaceKHR surface, uint32_t* pPresentModeCount,
                                                                 VkPresentModeKHR* pPresentModes) {
    return dispatch_table_.GetPhysicalDeviceSurfacePresentModesKHR(handle_, surface, pPresentModeCount, pPresentModes);
}
VkResult PhysicalDevice::GetPhysicalDevicePresentRectanglesKHR(VkSurfaceKHR surface, uint32_t* pRectCount, VkRect2D* pRects) {
    VkResult result = dispatch_table_.GetPhysicalDevicePresentRectanglesKHR(handle_, surface, pRectCount, pRects);
    if (pRects != nullptr) {
        for (uint32_t i = 0; i < *pRectCount; ++i) vksc::ConvertOutStructToVulkanSC<VkRect2D>(&pRects[i]);
    }
    return result;
}
VkResult PhysicalDevice::GetPhysicalDeviceDisplayPropertiesKHR(uint32_t* pPropertyCount, VkDisplayPropertiesKHR* pProperties) {
    VkResult result = dispatch_table_.GetPhysicalDeviceDisplayPropertiesKHR(handle_, pPropertyCount, pProperties);
    if (pProperties != nullptr) {
        for (uint32_t i = 0; i < *pPropertyCount; ++i) vksc::ConvertOutStructToVulkanSC<VkDisplayPropertiesKHR>(&pProperties[i]);
    }
    return result;
}
VkResult PhysicalDevice::GetPhysicalDeviceDisplayPlanePropertiesKHR(uint32_t* pPropertyCount,
                                                                    VkDisplayPlanePropertiesKHR* pProperties) {
    VkResult result = dispatch_table_.GetPhysicalDeviceDisplayPlanePropertiesKHR(handle_, pPropertyCount, pProperties);
    if (pProperties != nullptr) {
        for (uint32_t i = 0; i < *pPropertyCount; ++i)
            vksc::ConvertOutStructToVulkanSC<VkDisplayPlanePropertiesKHR>(&pProperties[i]);
    }
    return result;
}
VkResult PhysicalDevice::GetDisplayPlaneSupportedDisplaysKHR(uint32_t planeIndex, uint32_t* pDisplayCount,
                                                             VkDisplayKHR* pDisplays) {
    return dispatch_table_.GetDisplayPlaneSupportedDisplaysKHR(handle_, planeIndex, pDisplayCount, pDisplays);
}
VkResult PhysicalDevice::GetDisplayModePropertiesKHR(VkDisplayKHR display, uint32_t* pPropertyCount,
                                                     VkDisplayModePropertiesKHR* pProperties) {
    VkResult result = dispatch_table_.GetDisplayModePropertiesKHR(handle_, display, pPropertyCount, pProperties);
    if (pProperties != nullptr) {
        for (uint32_t i = 0; i < *pPropertyCount; ++i)
            vksc::ConvertOutStructToVulkanSC<VkDisplayModePropertiesKHR>(&pProperties[i]);
    }
    return result;
}
VkResult PhysicalDevice::CreateDisplayModeKHR(VkDisplayKHR display, const VkDisplayModeCreateInfoKHR* pCreateInfo,
                                              const VkAllocationCallbacks* pAllocator, VkDisplayModeKHR* pMode) {
    return dispatch_table_.CreateDisplayModeKHR(handle_, display, pCreateInfo, pAllocator, pMode);
}
VkResult PhysicalDevice::GetDisplayPlaneCapabilitiesKHR(VkDisplayModeKHR mode, uint32_t planeIndex,
                                                        VkDisplayPlaneCapabilitiesKHR* pCapabilities) {
    VkResult result = dispatch_table_.GetDisplayPlaneCapabilitiesKHR(handle_, mode, planeIndex, pCapabilities);
    if (pCapabilities != nullptr) {
        vksc::ConvertOutStructToVulkanSC<VkDisplayPlaneCapabilitiesKHR>(pCapabilities);
    }
    return result;
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
    VkResult result = dispatch_table_.GetPhysicalDeviceVideoCapabilitiesKHR(handle_, pVideoProfile, pCapabilities);
    if (pCapabilities != nullptr) {
        vksc::ConvertOutStructChainToVulkanSC<VkVideoCapabilitiesKHR>(pCapabilities);
    }
    return result;
}
VkResult PhysicalDevice::GetPhysicalDeviceVideoFormatPropertiesKHR(const VkPhysicalDeviceVideoFormatInfoKHR* pVideoFormatInfo,
                                                                   uint32_t* pVideoFormatPropertyCount,
                                                                   VkVideoFormatPropertiesKHR* pVideoFormatProperties) {
    VkResult result = dispatch_table_.GetPhysicalDeviceVideoFormatPropertiesKHR(handle_, pVideoFormatInfo,
                                                                                pVideoFormatPropertyCount, pVideoFormatProperties);
    if (pVideoFormatProperties != nullptr) {
        for (uint32_t i = 0; i < *pVideoFormatPropertyCount; ++i)
            vksc::ConvertOutStructChainToVulkanSC<VkVideoFormatPropertiesKHR>(&pVideoFormatProperties[i]);
    }
    return result;
}
VkResult PhysicalDevice::EnumeratePhysicalDeviceQueueFamilyPerformanceQueryCountersKHR(
    uint32_t queueFamilyIndex, uint32_t* pCounterCount, VkPerformanceCounterKHR* pCounters,
    VkPerformanceCounterDescriptionKHR* pCounterDescriptions) {
    VkResult result = dispatch_table_.EnumeratePhysicalDeviceQueueFamilyPerformanceQueryCountersKHR(
        handle_, queueFamilyIndex, pCounterCount, pCounters, pCounterDescriptions);
    if (pCounters != nullptr) {
        for (uint32_t i = 0; i < *pCounterCount; ++i) vksc::ConvertOutStructChainToVulkanSC<VkPerformanceCounterKHR>(&pCounters[i]);
    }
    if (pCounterDescriptions != nullptr) {
        for (uint32_t i = 0; i < *pCounterCount; ++i)
            vksc::ConvertOutStructChainToVulkanSC<VkPerformanceCounterDescriptionKHR>(&pCounterDescriptions[i]);
    }
    return result;
}
void PhysicalDevice::GetPhysicalDeviceQueueFamilyPerformanceQueryPassesKHR(
    const VkQueryPoolPerformanceCreateInfoKHR* pPerformanceQueryCreateInfo, uint32_t* pNumPasses) {
    dispatch_table_.GetPhysicalDeviceQueueFamilyPerformanceQueryPassesKHR(handle_, pPerformanceQueryCreateInfo, pNumPasses);
}
VkResult PhysicalDevice::GetPhysicalDeviceSurfaceCapabilities2KHR(const VkPhysicalDeviceSurfaceInfo2KHR* pSurfaceInfo,
                                                                  VkSurfaceCapabilities2KHR* pSurfaceCapabilities) {
    VkResult result = dispatch_table_.GetPhysicalDeviceSurfaceCapabilities2KHR(handle_, pSurfaceInfo, pSurfaceCapabilities);
    if (pSurfaceCapabilities != nullptr) {
        vksc::ConvertOutStructChainToVulkanSC<VkSurfaceCapabilities2KHR>(pSurfaceCapabilities);
    }
    return result;
}
VkResult PhysicalDevice::GetPhysicalDeviceSurfaceFormats2KHR(const VkPhysicalDeviceSurfaceInfo2KHR* pSurfaceInfo,
                                                             uint32_t* pSurfaceFormatCount, VkSurfaceFormat2KHR* pSurfaceFormats) {
    VkResult result =
        dispatch_table_.GetPhysicalDeviceSurfaceFormats2KHR(handle_, pSurfaceInfo, pSurfaceFormatCount, pSurfaceFormats);
    if (pSurfaceFormats != nullptr) {
        for (uint32_t i = 0; i < *pSurfaceFormatCount; ++i)
            vksc::ConvertOutStructChainToVulkanSC<VkSurfaceFormat2KHR>(&pSurfaceFormats[i]);
    }
    return result;
}
VkResult PhysicalDevice::GetPhysicalDeviceDisplayProperties2KHR(uint32_t* pPropertyCount, VkDisplayProperties2KHR* pProperties) {
    VkResult result = dispatch_table_.GetPhysicalDeviceDisplayProperties2KHR(handle_, pPropertyCount, pProperties);
    if (pProperties != nullptr) {
        for (uint32_t i = 0; i < *pPropertyCount; ++i)
            vksc::ConvertOutStructChainToVulkanSC<VkDisplayProperties2KHR>(&pProperties[i]);
    }
    return result;
}
VkResult PhysicalDevice::GetPhysicalDeviceDisplayPlaneProperties2KHR(uint32_t* pPropertyCount,
                                                                     VkDisplayPlaneProperties2KHR* pProperties) {
    VkResult result = dispatch_table_.GetPhysicalDeviceDisplayPlaneProperties2KHR(handle_, pPropertyCount, pProperties);
    if (pProperties != nullptr) {
        for (uint32_t i = 0; i < *pPropertyCount; ++i)
            vksc::ConvertOutStructChainToVulkanSC<VkDisplayPlaneProperties2KHR>(&pProperties[i]);
    }
    return result;
}
VkResult PhysicalDevice::GetDisplayModeProperties2KHR(VkDisplayKHR display, uint32_t* pPropertyCount,
                                                      VkDisplayModeProperties2KHR* pProperties) {
    VkResult result = dispatch_table_.GetDisplayModeProperties2KHR(handle_, display, pPropertyCount, pProperties);
    if (pProperties != nullptr) {
        for (uint32_t i = 0; i < *pPropertyCount; ++i)
            vksc::ConvertOutStructChainToVulkanSC<VkDisplayModeProperties2KHR>(&pProperties[i]);
    }
    return result;
}
VkResult PhysicalDevice::GetDisplayPlaneCapabilities2KHR(const VkDisplayPlaneInfo2KHR* pDisplayPlaneInfo,
                                                         VkDisplayPlaneCapabilities2KHR* pCapabilities) {
    VkResult result = dispatch_table_.GetDisplayPlaneCapabilities2KHR(handle_, pDisplayPlaneInfo, pCapabilities);
    if (pCapabilities != nullptr) {
        vksc::ConvertOutStructChainToVulkanSC<VkDisplayPlaneCapabilities2KHR>(pCapabilities);
    }
    return result;
}
VkResult PhysicalDevice::GetPhysicalDeviceFragmentShadingRatesKHR(uint32_t* pFragmentShadingRateCount,
                                                                  VkPhysicalDeviceFragmentShadingRateKHR* pFragmentShadingRates) {
    VkResult result =
        dispatch_table_.GetPhysicalDeviceFragmentShadingRatesKHR(handle_, pFragmentShadingRateCount, pFragmentShadingRates);
    if (pFragmentShadingRates != nullptr) {
        for (uint32_t i = 0; i < *pFragmentShadingRateCount; ++i)
            vksc::ConvertOutStructChainToVulkanSC<VkPhysicalDeviceFragmentShadingRateKHR>(&pFragmentShadingRates[i]);
    }
    return result;
}
VkResult PhysicalDevice::GetPhysicalDeviceVideoEncodeQualityLevelPropertiesKHR(
    const VkPhysicalDeviceVideoEncodeQualityLevelInfoKHR* pQualityLevelInfo,
    VkVideoEncodeQualityLevelPropertiesKHR* pQualityLevelProperties) {
    VkResult result =
        dispatch_table_.GetPhysicalDeviceVideoEncodeQualityLevelPropertiesKHR(handle_, pQualityLevelInfo, pQualityLevelProperties);
    if (pQualityLevelProperties != nullptr) {
        vksc::ConvertOutStructChainToVulkanSC<VkVideoEncodeQualityLevelPropertiesKHR>(pQualityLevelProperties);
    }
    return result;
}
VkResult PhysicalDevice::GetPhysicalDeviceCooperativeMatrixPropertiesKHR(uint32_t* pPropertyCount,
                                                                         VkCooperativeMatrixPropertiesKHR* pProperties) {
    VkResult result = dispatch_table_.GetPhysicalDeviceCooperativeMatrixPropertiesKHR(handle_, pPropertyCount, pProperties);
    if (pProperties != nullptr) {
        for (uint32_t i = 0; i < *pPropertyCount; ++i)
            vksc::ConvertOutStructChainToVulkanSC<VkCooperativeMatrixPropertiesKHR>(&pProperties[i]);
    }
    return result;
}
VkResult PhysicalDevice::GetPhysicalDeviceCalibrateableTimeDomainsKHR(uint32_t* pTimeDomainCount, VkTimeDomainKHR* pTimeDomains) {
    return dispatch_table_.GetPhysicalDeviceCalibrateableTimeDomainsKHR(handle_, pTimeDomainCount, pTimeDomains);
}
VkResult PhysicalDevice::GetPhysicalDeviceExternalImageFormatPropertiesNV(
    VkFormat format, VkImageType type, VkImageTiling tiling, VkImageUsageFlags usage, VkImageCreateFlags flags,
    VkExternalMemoryHandleTypeFlagsNV externalHandleType, VkExternalImageFormatPropertiesNV* pExternalImageFormatProperties) {
    VkResult result = dispatch_table_.GetPhysicalDeviceExternalImageFormatPropertiesNV(
        handle_, format, type, tiling, usage, flags, externalHandleType, pExternalImageFormatProperties);
    if (pExternalImageFormatProperties != nullptr) {
        vksc::ConvertOutStructToVulkanSC<VkExternalImageFormatPropertiesNV>(pExternalImageFormatProperties);
    }
    return result;
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
    VkResult result = dispatch_table_.GetPhysicalDeviceSurfaceCapabilities2EXT(handle_, surface, pSurfaceCapabilities);
    if (pSurfaceCapabilities != nullptr) {
        vksc::ConvertOutStructChainToVulkanSC<VkSurfaceCapabilities2EXT>(pSurfaceCapabilities);
    }
    return result;
}
void PhysicalDevice::GetPhysicalDeviceMultisamplePropertiesEXT(VkSampleCountFlagBits samples,
                                                               VkMultisamplePropertiesEXT* pMultisampleProperties) {
    dispatch_table_.GetPhysicalDeviceMultisamplePropertiesEXT(handle_, samples, pMultisampleProperties);
    if (pMultisampleProperties != nullptr) {
        vksc::ConvertOutStructChainToVulkanSC<VkMultisamplePropertiesEXT>(pMultisampleProperties);
    }
}
VkResult PhysicalDevice::GetPhysicalDeviceCooperativeMatrixPropertiesNV(uint32_t* pPropertyCount,
                                                                        VkCooperativeMatrixPropertiesNV* pProperties) {
    VkResult result = dispatch_table_.GetPhysicalDeviceCooperativeMatrixPropertiesNV(handle_, pPropertyCount, pProperties);
    if (pProperties != nullptr) {
        for (uint32_t i = 0; i < *pPropertyCount; ++i)
            vksc::ConvertOutStructChainToVulkanSC<VkCooperativeMatrixPropertiesNV>(&pProperties[i]);
    }
    return result;
}
VkResult PhysicalDevice::GetPhysicalDeviceSupportedFramebufferMixedSamplesCombinationsNV(
    uint32_t* pCombinationCount, VkFramebufferMixedSamplesCombinationNV* pCombinations) {
    VkResult result =
        dispatch_table_.GetPhysicalDeviceSupportedFramebufferMixedSamplesCombinationsNV(handle_, pCombinationCount, pCombinations);
    if (pCombinations != nullptr) {
        for (uint32_t i = 0; i < *pCombinationCount; ++i)
            vksc::ConvertOutStructChainToVulkanSC<VkFramebufferMixedSamplesCombinationNV>(&pCombinations[i]);
    }
    return result;
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
    VkResult result = dispatch_table_.GetPhysicalDeviceOpticalFlowImageFormatsNV(handle_, pOpticalFlowImageFormatInfo, pFormatCount,
                                                                                 pImageFormatProperties);
    if (pImageFormatProperties != nullptr) {
        for (uint32_t i = 0; i < *pFormatCount; ++i)
            vksc::ConvertOutStructChainToVulkanSC<VkOpticalFlowImageFormatPropertiesNV>(&pImageFormatProperties[i]);
    }
    return result;
}

}  // namespace vk

// NOLINTEND
