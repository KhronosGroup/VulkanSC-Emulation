/*
 * Copyright (c) 2024-2025 The Khronos Group Inc.
 * Copyright (c) 2024-2025 RasterGrid Kft.
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#include "icd_test_framework.h"

#include <string.h>
#include <algorithm>

class DisplayEmulationTest : public IcdTest {
  public:
    DisplayEmulationTest() : IcdTest() {}

    void InitInstance() {
        static const char* enabled_extensions[] = {VK_KHR_DISPLAY_EXTENSION_NAME, VK_KHR_GET_DISPLAY_PROPERTIES_2_EXTENSION_NAME};
        auto create_info = GetDefaultInstanceCreateInfo();
        create_info.enabledExtensionCount = sizeof(enabled_extensions) / sizeof(enabled_extensions[0]);
        create_info.ppEnabledExtensionNames = enabled_extensions;
        IcdTest::InitInstance(&create_info);
    }
};

TEST_F(DisplayEmulationTest, ReportedExtensions) {
    uint32_t instance_ext_count = 0;
    EXPECT_EQ(vksc::EnumerateInstanceExtensionProperties(nullptr, &instance_ext_count, nullptr), VK_SUCCESS);
    EXPECT_GE(instance_ext_count, 2);

    std::vector<VkExtensionProperties> instance_ext_props(instance_ext_count);
    EXPECT_EQ(vksc::EnumerateInstanceExtensionProperties(nullptr, &instance_ext_count, instance_ext_props.data()), VK_SUCCESS);
    uint32_t khr_display_count = 0;
    uint32_t khr_get_display_properties2_count = 0;
    for (uint32_t i = 0; i < instance_ext_count; ++i) {
        if (strcmp(instance_ext_props[i].extensionName, VK_KHR_DISPLAY_EXTENSION_NAME) == 0) {
            khr_display_count++;
        } else if (strcmp(instance_ext_props[i].extensionName, VK_KHR_GET_DISPLAY_PROPERTIES_2_EXTENSION_NAME) == 0) {
            khr_get_display_properties2_count++;
        }
    }
    EXPECT_EQ(khr_display_count, 1);
    EXPECT_EQ(khr_get_display_properties2_count, 1);
}

TEST_F(DisplayEmulationTest, EnabledExtensions) {
    uint32_t khr_display_count = 0;
    uint32_t khr_get_display_properties2_count = 0;
#if defined(VK_USE_PLATFORM_WIN32_KHR)
    uint32_t khr_win32_surface = 0;
#elif defined(VK_USE_PLATFORM_XCB_KHR)
    uint32_t khr_xcb_surface = 0;
#endif

    vkmock::CreateInstance = [&](auto pCreateInfo, auto, auto pInstance) {
        for (uint32_t i = 0; i < pCreateInfo->enabledExtensionCount; ++i) {
            if (strcmp(pCreateInfo->ppEnabledExtensionNames[i], VK_KHR_DISPLAY_EXTENSION_NAME) == 0) {
                khr_display_count++;
            } else if (strcmp(pCreateInfo->ppEnabledExtensionNames[i], VK_KHR_GET_DISPLAY_PROPERTIES_2_EXTENSION_NAME) == 0) {
                khr_get_display_properties2_count++;
#if defined(VK_USE_PLATFORM_WIN32_KHR)
            } else if (strcmp(pCreateInfo->ppEnabledExtensionNames[i], VK_KHR_WIN32_SURFACE_EXTENSION_NAME) == 0) {
                khr_win32_surface++;
#elif defined(VK_USE_PLATFORM_XCB_KHR)
            } else if (strcmp(pCreateInfo->ppEnabledExtensionNames[i], VK_KHR_XCB_SURFACE_EXTENSION_NAME) == 0) {
                khr_xcb_surface++;
#endif
            }
        }

        static VkMockObject<VkInstance> mock_instance{};
        *pInstance = mock_instance;
        return VK_SUCCESS;
    };

    InitInstance();

    EXPECT_EQ(khr_display_count, 1);
    EXPECT_EQ(khr_get_display_properties2_count, 1);
#if defined(VK_USE_PLATFORM_WIN32_KHR)
    EXPECT_EQ(khr_win32_surface, 1);
#elif defined(VK_USE_PLATFORM_XCB_KHR)
    EXPECT_EQ(khr_xcb_surface, 1);
#endif
}

TEST_F(DisplayEmulationTest, GetDisplayProperties) {
    static VkMockObject<VkDisplayKHR> vkmock_displays[2] = {};
    static const std::vector<VkDisplayPropertiesKHR> vkmock_display_props = {
        VkDisplayPropertiesKHR{vkmock_displays[0].handle(), "Vulkan Mock Display #1"},
        VkDisplayPropertiesKHR{vkmock_displays[1].handle(), "Vulkan Mock Display #2"},
    };

    vkmock::GetPhysicalDeviceDisplayPropertiesKHR = [&](auto, auto pPropertyCount, auto pProperties) {
        VkResult result = VK_SUCCESS;
        if (pProperties == nullptr) {
            *pPropertyCount = static_cast<uint32_t>(vkmock_display_props.size());
        } else {
            if (*pPropertyCount < vkmock_display_props.size()) {
                result = VK_INCOMPLETE;
            }
            *pPropertyCount = std::min(*pPropertyCount, static_cast<uint32_t>(vkmock_display_props.size()));
            for (uint32_t i = 0; i < *pPropertyCount; ++i) {
                pProperties[i] = vkmock_display_props[i];
            }
        }
        return result;
    };

    vkmock::GetPhysicalDeviceDisplayProperties2KHR = [&](auto, auto pPropertyCount, auto pProperties) {
        VkResult result = VK_SUCCESS;
        if (pProperties == nullptr) {
            *pPropertyCount = static_cast<uint32_t>(vkmock_display_props.size());
        } else {
            if (*pPropertyCount < vkmock_display_props.size()) {
                result = VK_INCOMPLETE;
            }
            *pPropertyCount = std::min(*pPropertyCount, static_cast<uint32_t>(vkmock_display_props.size()));
            for (uint32_t i = 0; i < *pPropertyCount; ++i) {
                pProperties[i].displayProperties = vkmock_display_props[i];
            }
        }
        return result;
    };

    InitInstance();
    auto physdev = GetPhysicalDevice();

    // Should get back 4 emulated and 2 mock displays
    const uint32_t expected_display_count = 6;
    const char* expected_display_names[expected_display_count] = {
        "Vulkan SC Emulation Display #1", "Vulkan SC Emulation Display #2", "Vulkan SC Emulation Display #3",
        "Vulkan SC Emulation Display #4", "Vulkan Mock Display #1",         "Vulkan Mock Display #2"};

    uint32_t count = 0;
    EXPECT_EQ(vksc::GetPhysicalDeviceDisplayPropertiesKHR(physdev, &count, nullptr), VK_SUCCESS);
    EXPECT_EQ(count, expected_display_count);

    std::vector<VkDisplayPropertiesKHR> display_props{};
    for (uint32_t retrieved_count = 1; retrieved_count < 8; ++retrieved_count) {
        count = retrieved_count;
        display_props.resize(retrieved_count);
        VkResult expected_result = (retrieved_count >= expected_display_count) ? VK_SUCCESS : VK_INCOMPLETE;

        EXPECT_EQ(vksc::GetPhysicalDeviceDisplayPropertiesKHR(physdev, &count, display_props.data()), expected_result);
        EXPECT_EQ(count, std::min(count, expected_display_count));
        for (uint32_t i = 0; i < std::min(count, expected_display_count); ++i) {
            EXPECT_STREQ(display_props[i].displayName, expected_display_names[i]);
        }
    }

    EXPECT_EQ(vksc::GetPhysicalDeviceDisplayProperties2KHR(physdev, &count, nullptr), VK_SUCCESS);
    EXPECT_EQ(count, expected_display_count);

    std::vector<VkDisplayProperties2KHR> display_props2{};
    for (uint32_t retrieved_count = 1; retrieved_count < 8; ++retrieved_count) {
        count = retrieved_count;
        display_props2.resize(retrieved_count, vku::InitStruct<VkDisplayProperties2KHR>());
        VkResult expected_result = (retrieved_count >= expected_display_count) ? VK_SUCCESS : VK_INCOMPLETE;

        EXPECT_EQ(vksc::GetPhysicalDeviceDisplayProperties2KHR(physdev, &count, display_props2.data()), expected_result);
        EXPECT_EQ(count, std::min(count, expected_display_count));
        for (uint32_t i = 0; i < std::min(count, expected_display_count); ++i) {
            EXPECT_STREQ(display_props2[i].displayProperties.displayName, expected_display_names[i]);
        }
    }
}

TEST_F(DisplayEmulationTest, GetDisplayPlaneProperties) {
    std::vector<VkDisplayPlanePropertiesKHR> vkmock_display_plane_props{};

    vkmock::GetPhysicalDeviceDisplayPlanePropertiesKHR = [&](auto, auto pPropertyCount, auto pProperties) {
        VkResult result = VK_SUCCESS;
        if (pProperties == nullptr) {
            *pPropertyCount = static_cast<uint32_t>(vkmock_display_plane_props.size());
        } else {
            if (*pPropertyCount < vkmock_display_plane_props.size()) {
                result = VK_INCOMPLETE;
            }
            *pPropertyCount = std::min(*pPropertyCount, static_cast<uint32_t>(vkmock_display_plane_props.size()));
            for (uint32_t i = 0; i < *pPropertyCount; ++i) {
                pProperties[i] = vkmock_display_plane_props[i];
            }
        }
        return result;
    };

    vkmock::GetPhysicalDeviceDisplayPlaneProperties2KHR = [&](auto, auto pPropertyCount, auto pProperties) {
        VkResult result = VK_SUCCESS;
        if (pProperties == nullptr) {
            *pPropertyCount = static_cast<uint32_t>(vkmock_display_plane_props.size());
        } else {
            if (*pPropertyCount < vkmock_display_plane_props.size()) {
                result = VK_INCOMPLETE;
            }
            *pPropertyCount = std::min(*pPropertyCount, static_cast<uint32_t>(vkmock_display_plane_props.size()));
            for (uint32_t i = 0; i < *pPropertyCount; ++i) {
                pProperties[i].displayPlaneProperties = vkmock_display_plane_props[i];
            }
        }
        return result;
    };

    InitInstance();
    auto physdev = GetPhysicalDevice();

    const uint32_t emulated_display_count = 4;

    // Should get back a display plane per emulated display even if the underlying Vulkan implementation does not support any
    uint32_t count = 0;
    EXPECT_EQ(vksc::GetPhysicalDeviceDisplayPlanePropertiesKHR(physdev, &count, nullptr), VK_SUCCESS);
    EXPECT_EQ(count, emulated_display_count);

    std::vector<VkDisplayPlanePropertiesKHR> display_plane_props(count);
    EXPECT_EQ(vksc::GetPhysicalDeviceDisplayPlanePropertiesKHR(physdev, &count, display_plane_props.data()), VK_SUCCESS);
    EXPECT_EQ(count, emulated_display_count);
    for (uint32_t i = 0; i < count; ++i) {
        EXPECT_NE(display_plane_props[i].currentDisplay, VK_NULL_HANDLE);
        EXPECT_EQ(display_plane_props[i].currentStackIndex, 0);
    }

    EXPECT_EQ(vksc::GetPhysicalDeviceDisplayPlaneProperties2KHR(physdev, &count, nullptr), VK_SUCCESS);
    EXPECT_EQ(count, emulated_display_count);

    std::vector<VkDisplayPlaneProperties2KHR> display_plane_props2(count);
    EXPECT_EQ(vksc::GetPhysicalDeviceDisplayPlaneProperties2KHR(physdev, &count, display_plane_props2.data()), VK_SUCCESS);
    EXPECT_EQ(count, emulated_display_count);
    for (uint32_t i = 0; i < count; ++i) {
        EXPECT_NE(display_plane_props2[i].displayPlaneProperties.currentDisplay, VK_NULL_HANDLE);
        EXPECT_EQ(display_plane_props2[i].displayPlaneProperties.currentStackIndex, 0);
    }

    // Should get back the Vulkan and emulated display planes otherwise
    for (uint32_t extra_dp_count = 1; extra_dp_count <= 4; ++extra_dp_count) {
        vkmock_display_plane_props.push_back({VK_NULL_HANDLE, extra_dp_count - 1});

        uint32_t dp_count = 0;
        EXPECT_EQ(vksc::GetPhysicalDeviceDisplayPlanePropertiesKHR(physdev, &dp_count, nullptr), VK_SUCCESS);
        EXPECT_EQ(dp_count, extra_dp_count + emulated_display_count);

        display_plane_props.resize(dp_count);
        EXPECT_EQ(vksc::GetPhysicalDeviceDisplayPlanePropertiesKHR(physdev, &dp_count, display_plane_props.data()), VK_SUCCESS);
        EXPECT_EQ(dp_count, extra_dp_count + emulated_display_count);
        for (uint32_t i = 0; i < dp_count; ++i) {
            if (i < emulated_display_count) {
                EXPECT_NE(display_plane_props[i].currentDisplay, VK_NULL_HANDLE);
                EXPECT_EQ(display_plane_props[i].currentStackIndex, 0);
            } else {
                EXPECT_EQ(display_plane_props[i].currentDisplay, VK_NULL_HANDLE);
                EXPECT_EQ(display_plane_props[i].currentStackIndex, i - emulated_display_count);
            }
        }

        EXPECT_EQ(vksc::GetPhysicalDeviceDisplayPlaneProperties2KHR(physdev, &dp_count, nullptr), VK_SUCCESS);
        EXPECT_EQ(dp_count, extra_dp_count + emulated_display_count);

        display_plane_props2.resize(dp_count);
        EXPECT_EQ(vksc::GetPhysicalDeviceDisplayPlaneProperties2KHR(physdev, &dp_count, display_plane_props2.data()), VK_SUCCESS);
        EXPECT_EQ(dp_count, extra_dp_count + emulated_display_count);
        for (uint32_t i = 0; i < dp_count; ++i) {
            if (i < emulated_display_count) {
                EXPECT_NE(display_plane_props2[i].displayPlaneProperties.currentDisplay, VK_NULL_HANDLE);
                EXPECT_EQ(display_plane_props2[i].displayPlaneProperties.currentStackIndex, 0);
            } else {
                EXPECT_EQ(display_plane_props2[i].displayPlaneProperties.currentDisplay, VK_NULL_HANDLE);
                EXPECT_EQ(display_plane_props2[i].displayPlaneProperties.currentStackIndex, i - emulated_display_count);
            }
        }
    }
}

TEST_F(DisplayEmulationTest, GetDisplayPlaneSupportedDisplays) {
    static std::vector<VkMockObject<VkDisplayKHR>> vkmock_displays(4);

    vkmock::GetDisplayPlaneSupportedDisplaysKHR = [&](auto, auto planeIndex, auto pDisplayCount, auto pDisplays) {
        VkResult result = VK_SUCCESS;
        // We will report support for the first N+1 displays for display plane index N
        uint32_t compatible_displays = std::min(static_cast<uint32_t>(vkmock_displays.size()), planeIndex + 1);
        if (pDisplays == nullptr) {
            *pDisplayCount = compatible_displays;
        } else {
            if (*pDisplayCount < compatible_displays) {
                result = VK_INCOMPLETE;
            }
            *pDisplayCount = std::min(*pDisplayCount, compatible_displays);
            for (uint32_t i = 0; i < *pDisplayCount; ++i) {
                pDisplays[i] = vkmock_displays[i].handle();
            }
        }
        return result;
    };

    InitInstance();
    auto physdev = GetPhysicalDevice();

    const uint32_t emulated_display_count = 4;

    // The emulated display planes only support the corresponding emulated display
    // The first plane should support 4 emulation displays and 1 native display
    uint32_t count = 0;
    for (uint32_t i = 0; i < emulated_display_count; ++i) {
        EXPECT_EQ(vksc::GetDisplayPlaneSupportedDisplaysKHR(physdev, i, &count, nullptr), VK_SUCCESS);
        EXPECT_EQ(count, 1);

        VkDisplayKHR display;
        EXPECT_EQ(vksc::GetDisplayPlaneSupportedDisplaysKHR(physdev, i, &count, &display), VK_SUCCESS);
        EXPECT_EQ(count, 1);
    }

    // The other planes simply support the corresponding first N+1 native displays
    std::vector<VkDisplayKHR> displays{};
    for (size_t plane_index = 0; plane_index < vkmock_displays.size() - 1; ++plane_index) {
        uint32_t display_counts = 0;
        EXPECT_EQ(
            vksc::GetDisplayPlaneSupportedDisplaysKHR(physdev, plane_index + emulated_display_count, &display_counts, nullptr),
            VK_SUCCESS);
        EXPECT_EQ(display_counts, plane_index + 1);

        displays.resize(display_counts);
        EXPECT_EQ(vksc::GetDisplayPlaneSupportedDisplaysKHR(physdev, plane_index + emulated_display_count, &display_counts,
                                                            displays.data()),
                  VK_SUCCESS);
        EXPECT_EQ(display_counts, plane_index + 1);
        for (size_t i = 0; i <= std::min(plane_index, vkmock_displays.size()); ++i) {
            EXPECT_EQ(displays[i], vkmock_displays[i].handle());
        }
    }
}

TEST_F(DisplayEmulationTest, GetDisplayModeProperties) {
    static VkMockObject<VkDisplayKHR> vkmock_display{};
    static const VkDisplayPropertiesKHR vkmock_display_props = {vkmock_display.handle(), "Vulkan Mock Display"};
    static VkMockObject<VkDisplayModeKHR> vkmock_display_modes[2] = {};
    static const std::vector<VkDisplayModePropertiesKHR> vkmock_display_mode_props = {
        VkDisplayModePropertiesKHR{vkmock_display_modes[0].handle(), {{1600, 1200}, 75000}},
        VkDisplayModePropertiesKHR{vkmock_display_modes[0].handle(), {{1280, 1024}, 100000}},
    };

    vkmock::GetPhysicalDeviceDisplayPropertiesKHR = [&](auto, auto pPropertyCount, auto pProperties) {
        VkResult result = VK_SUCCESS;
        if (pProperties == nullptr) {
            *pPropertyCount = 1;
        } else {
            if (*pPropertyCount == 0) {
                result = VK_INCOMPLETE;
            } else {
                *pProperties = vkmock_display_props;
                *pPropertyCount = 1;
            }
        }
        return result;
    };

    vkmock::GetDisplayModePropertiesKHR = [&](auto, auto, auto pPropertyCount, auto pProperties) {
        VkResult result = VK_SUCCESS;
        if (pProperties == nullptr) {
            *pPropertyCount = static_cast<uint32_t>(vkmock_display_mode_props.size());
        } else {
            if (*pPropertyCount < vkmock_display_mode_props.size()) {
                result = VK_INCOMPLETE;
            }
            *pPropertyCount = std::min(*pPropertyCount, static_cast<uint32_t>(vkmock_display_mode_props.size()));
            for (uint32_t i = 0; i < *pPropertyCount; ++i) {
                pProperties[i] = vkmock_display_mode_props[i];
            }
        }
        return result;
    };

    vkmock::GetDisplayModeProperties2KHR = [&](auto, auto, auto pPropertyCount, auto pProperties) {
        VkResult result = VK_SUCCESS;
        if (pProperties == nullptr) {
            *pPropertyCount = static_cast<uint32_t>(vkmock_display_mode_props.size());
        } else {
            if (*pPropertyCount < vkmock_display_mode_props.size()) {
                result = VK_INCOMPLETE;
            }
            *pPropertyCount = std::min(*pPropertyCount, static_cast<uint32_t>(vkmock_display_mode_props.size()));
            for (uint32_t i = 0; i < *pPropertyCount; ++i) {
                pProperties[i].displayModeProperties = vkmock_display_mode_props[i];
            }
        }
        return result;
    };

    InitInstance();
    auto physdev = GetPhysicalDevice();

    const uint32_t emulated_display_count = 4;
    uint32_t display_count = emulated_display_count + 1;
    VkDisplayPropertiesKHR display_props[5] = {};
    EXPECT_EQ(vksc::GetPhysicalDeviceDisplayPropertiesKHR(physdev, &display_count, display_props), VK_SUCCESS);
    EXPECT_EQ(display_count, emulated_display_count + 1);

    std::vector<VkDisplayModePropertiesKHR> props{};
    for (uint32_t i = 0; i < display_count; ++i) {
        uint32_t count = 0;
        EXPECT_EQ(vksc::GetDisplayModePropertiesKHR(physdev, display_props[i].display, &count, nullptr), VK_SUCCESS);
        if (i < emulated_display_count) {
            EXPECT_EQ(count, 1);
        } else {
            EXPECT_EQ(count, 2);
        }

        props.resize(count);
        EXPECT_EQ(vksc::GetDisplayModePropertiesKHR(physdev, display_props[i].display, &count, props.data()), VK_SUCCESS);
        if (i < emulated_display_count) {
            EXPECT_EQ(count, 1);
        } else {
            EXPECT_EQ(count, 2);
            EXPECT_EQ(props[0].parameters.refreshRate, 75000);
            EXPECT_EQ(props[1].parameters.refreshRate, 100000);
        }
    }

    std::vector<VkDisplayModeProperties2KHR> props2{};
    for (uint32_t i = 0; i < display_count; ++i) {
        uint32_t count = 0;
        EXPECT_EQ(vksc::GetDisplayModeProperties2KHR(physdev, display_props[i].display, &count, nullptr), VK_SUCCESS);
        if (i < emulated_display_count) {
            EXPECT_EQ(count, 1);
        } else {
            EXPECT_EQ(count, 2);
        }

        props2.resize(count);
        EXPECT_EQ(vksc::GetDisplayModeProperties2KHR(physdev, display_props[i].display, &count, props2.data()), VK_SUCCESS);
        if (i < emulated_display_count) {
            EXPECT_EQ(count, 1);
        } else {
            EXPECT_EQ(count, 2);
            EXPECT_EQ(props2[0].displayModeProperties.parameters.refreshRate, 75000);
            EXPECT_EQ(props2[1].displayModeProperties.parameters.refreshRate, 100000);
        }
    }
}

TEST_F(DisplayEmulationTest, CreateDisplayMode) {
    static VkMockObject<VkDisplayKHR> vkmock_display{};
    static const VkDisplayPropertiesKHR vkmock_display_props = {vkmock_display.handle(), "Vulkan Mock Display"};
    static VkMockObject<VkDisplayModeKHR> vkmock_display_mode{};

    vkmock::GetPhysicalDeviceDisplayPropertiesKHR = [&](auto, auto pPropertyCount, auto pProperties) {
        VkResult result = VK_SUCCESS;
        if (pProperties == nullptr) {
            *pPropertyCount = 1;
        } else {
            if (*pPropertyCount == 0) {
                result = VK_INCOMPLETE;
            } else {
                *pProperties = vkmock_display_props;
                *pPropertyCount = 1;
            }
        }
        return result;
    };

    vkmock::CreateDisplayModeKHR = [&](auto, auto display, auto, auto, auto pMode) {
        EXPECT_EQ(display, vkmock_display.handle());
        *pMode = vkmock_display_mode.handle();
        return VK_SUCCESS;
    };

    InitInstance();
    auto physdev = GetPhysicalDevice();

    const uint32_t emulated_display_count = 4;
    uint32_t display_count = emulated_display_count + 1;
    VkDisplayPropertiesKHR display_props[5] = {};
    EXPECT_EQ(vksc::GetPhysicalDeviceDisplayPropertiesKHR(physdev, &display_count, display_props), VK_SUCCESS);
    EXPECT_EQ(display_count, emulated_display_count + 1);

    std::vector<VkDisplayModePropertiesKHR> props{};
    for (uint32_t i = 0; i < display_count; ++i) {
        auto create_info = vku::InitStruct<VkDisplayModeCreateInfoKHR>();
        VkDisplayModeKHR mode = VK_NULL_HANDLE;
        EXPECT_EQ(vksc::CreateDisplayModeKHR(physdev, display_props[i].display, &create_info, nullptr, &mode), VK_SUCCESS);
        EXPECT_NE(mode, VK_NULL_HANDLE);
        if (i >= emulated_display_count) {
            EXPECT_EQ(mode, vkmock_display_mode.handle());
        }
    }
}

TEST_F(DisplayEmulationTest, GetDisplayPlaneCapabilities) {
    static VkMockObject<VkDisplayKHR> vkmock_display{};
    static const VkDisplayPropertiesKHR vkmock_display_props = {vkmock_display.handle(), "Vulkan Mock Display"};
    static VkMockObject<VkDisplayModeKHR> vkmock_display_mode{};
    static const VkDisplayModePropertiesKHR vkmock_display_mode_props = {vkmock_display_mode.handle(), {{1600, 1200}, 75000}};
    static const VkDisplayPlaneCapabilitiesKHR vkmock_display_plane_caps = {VK_DISPLAY_PLANE_ALPHA_GLOBAL_BIT_KHR,
                                                                            {0, 0},
                                                                            {639, 479},
                                                                            {160, 120},
                                                                            {640, 480},
                                                                            {0, 0},
                                                                            {639, 479},
                                                                            {160, 120},
                                                                            {640, 480}};

    vkmock::GetPhysicalDeviceDisplayPropertiesKHR = [&](auto, auto pPropertyCount, auto pProperties) {
        if (pProperties != nullptr) {
            *pProperties = vkmock_display_props;
        }
        *pPropertyCount = 1;
        return VK_SUCCESS;
    };

    vkmock::GetDisplayModePropertiesKHR = [&](auto, auto, auto pPropertyCount, auto pProperties) {
        if (pProperties != nullptr) {
            *pProperties = vkmock_display_mode_props;
        }
        *pPropertyCount = 1;
        return VK_SUCCESS;
    };

    vkmock::GetDisplayPlaneCapabilitiesKHR = [&](auto, auto mode, auto, auto pCapabilities) {
        EXPECT_EQ(mode, vkmock_display_mode.handle());
        *pCapabilities = vkmock_display_plane_caps;
        return VK_SUCCESS;
    };

    vkmock::GetDisplayPlaneCapabilities2KHR = [&](auto, auto pDisplayPlaneInfo, auto pCapabilities) {
        EXPECT_EQ(pDisplayPlaneInfo->mode, vkmock_display_mode.handle());
        pCapabilities->capabilities = vkmock_display_plane_caps;
        return VK_SUCCESS;
    };

    vkmock::CreateDisplayModeKHR = [&](auto, auto display, auto, auto, auto pMode) {
        EXPECT_EQ(display, vkmock_display.handle());
        *pMode = vkmock_display_mode.handle();
        return VK_SUCCESS;
    };

    InitInstance();
    auto physdev = GetPhysicalDevice();

    const uint32_t emulated_display_count = 4;

    uint32_t display_count = emulated_display_count + 1;
    VkDisplayPropertiesKHR display_props[5] = {};
    EXPECT_EQ(vksc::GetPhysicalDeviceDisplayPropertiesKHR(physdev, &display_count, display_props), VK_SUCCESS);
    EXPECT_EQ(display_count, emulated_display_count + 1);

    std::vector<VkDisplayModePropertiesKHR> props{};
    for (uint32_t display_idx = 0; display_idx < display_count; ++display_idx) {
        uint32_t count = 0;
        EXPECT_EQ(vksc::GetDisplayModePropertiesKHR(physdev, display_props[display_idx].display, &count, nullptr), VK_SUCCESS);
        std::vector<VkDisplayModePropertiesKHR> mode_props(count);
        EXPECT_EQ(vksc::GetDisplayModePropertiesKHR(physdev, display_props[display_idx].display, &count, mode_props.data()),
                  VK_SUCCESS);
        if (display_idx >= emulated_display_count) {
            EXPECT_EQ(count, 1);
            EXPECT_EQ(mode_props[0].displayMode, vkmock_display_mode.handle());
        }

        auto create_info = vku::InitStruct<VkDisplayModeCreateInfoKHR>();
        VkDisplayModeKHR mode = VK_NULL_HANDLE;
        EXPECT_EQ(vksc::CreateDisplayModeKHR(physdev, display_props[display_idx].display, &create_info, nullptr, &mode),
                  VK_SUCCESS);

        std::vector<VkDisplayModeKHR> all_modes{};
        for (uint32_t i = 0; i < count; ++i) {
            all_modes.push_back(mode_props[i].displayMode);
        }
        all_modes.push_back(mode);

        for (const auto display_mode : all_modes) {
            VkDisplayPlaneCapabilitiesKHR caps;
            EXPECT_EQ(vksc::GetDisplayPlaneCapabilitiesKHR(physdev, display_mode, display_idx, &caps), VK_SUCCESS);
            if (display_idx < emulated_display_count) {
                EXPECT_EQ(caps.supportedAlpha, VK_DISPLAY_PLANE_ALPHA_OPAQUE_BIT_KHR);
            } else {
                EXPECT_EQ(caps.supportedAlpha, VK_DISPLAY_PLANE_ALPHA_GLOBAL_BIT_KHR);
            }

            auto info = vku::InitStruct<VkDisplayPlaneInfo2KHR>();
            info.mode = display_mode;
            info.planeIndex = display_idx;
            auto caps2 = vku::InitStruct<VkDisplayPlaneCapabilities2KHR>();
            EXPECT_EQ(vksc::GetDisplayPlaneCapabilities2KHR(physdev, &info, &caps2), VK_SUCCESS);
            if (display_idx < emulated_display_count) {
                EXPECT_EQ(caps2.capabilities.supportedAlpha, VK_DISPLAY_PLANE_ALPHA_OPAQUE_BIT_KHR);
            } else {
                EXPECT_EQ(caps2.capabilities.supportedAlpha, VK_DISPLAY_PLANE_ALPHA_GLOBAL_BIT_KHR);
            }
        }
    }
}
