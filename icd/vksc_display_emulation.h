/*
 * Copyright (c) 2024-2025 The Khronos Group Inc.
 * Copyright (c) 2024-2025 RasterGrid Kft.
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#pragma once

#include "vk_extension_helper.h"
#include "vksc_extension_helper.h"
#include "icd_log.h"

#include <vulkan/vulkan.h>

#include <mutex>
#include <thread>
#include <string>
#include <memory>
#include <vector>
#include <unordered_map>

namespace vksc {

class Global;
class Display;
class DisplayMode;
class Instance;
class PhysicalDevice;

struct PlatformSurface {
#if defined(VK_USE_PLATFORM_WIN32_KHR)
    HINSTANCE win_inst{NULL};
    HWND window{NULL};
#elif defined(VK_USE_PLATFORM_XCB_KHR)
    xcb_connection_t* connection{nullptr};
    xcb_screen_t* screen{nullptr};
    xcb_window_t window{};
#endif
    std::thread message_handler{};
};

using Displays = std::vector<std::unique_ptr<Display>>;
using DisplayModes = std::vector<std::unique_ptr<DisplayMode>>;

struct DisplayConfig {
    std::string name;
    VkExtent2D dimensions;
    VkExtent2D resolution;
    VkOffset2D offset;
    std::vector<VkExtent2D> modes;
};

class GlobalDisplayManager {
  public:
    GlobalDisplayManager(const icd::Logger& log);

    const vk::ExtensionMap& GetTargetPlatformExtensions() const;
    void InitEmulatedExtensions(const Global& icd);
    const ExtensionMap& GetEmulatedExtensions() const { return emulated_extensions_; }
    bool IsEmulatedExtension(ExtensionNumber ext) const { return emulated_extensions_.find(ext) != emulated_extensions_.end(); }

    uint32_t GetDisplayCount() const { return static_cast<uint32_t>(display_config_.size()); }
    const std::vector<DisplayConfig>& GetDisplayConfig() const { return display_config_; }

  private:
    std::vector<DisplayConfig> InitDisplayConfig(const icd::Logger& log);
    std::string InitDisplayName(uint32_t index) const;

    ExtensionMap emulated_extensions_{};
    std::vector<DisplayConfig> display_config_{};
};

class InstanceDisplayManager {
  public:
    InstanceDisplayManager();

    void RegisterEmulatedDisplay(VkDisplayKHR handle, Display* display) {
        std::unique_lock lock(display_mutex_);
        display_map_.insert({handle, display});
    }

    Display* GetEmulatedDisplayFromHandle(VkDisplayKHR handle) const {
        std::unique_lock lock(display_mutex_);
        auto it = display_map_.find(handle);
        if (it != display_map_.end()) {
            return it->second;
        }
        return nullptr;
    }

    void RegisterEmulatedDisplayMode(VkDisplayModeKHR handle, DisplayMode* display_mode) {
        std::unique_lock lock(display_mode_mutex_);
        display_mode_map_.insert({handle, display_mode});
    }

    DisplayMode* GetEmulatedDisplayModeFromHandle(VkDisplayModeKHR handle) const {
        std::unique_lock lock(display_mode_mutex_);
        auto it = display_mode_map_.find(handle);
        if (it != display_mode_map_.end()) {
            return it->second;
        }
        return nullptr;
    }

    void RegisterEmulatedDisplaySurface(VkSurfaceKHR handle, Display* display) {
        std::unique_lock lock(display_surface_mutex_);
        display_surface_map_.insert({handle, display});
    }

    void UnregisterEmulatedDisplaySurface(VkSurfaceKHR handle) {
        std::unique_lock lock(display_surface_mutex_);
        display_surface_map_.erase(handle);
    }

    Display* GetEmulatedDisplayFromSurfaceHandle(VkSurfaceKHR handle) const {
        std::unique_lock lock(display_surface_mutex_);
        auto it = display_surface_map_.find(handle);
        if (it != display_surface_map_.end()) {
            return it->second;
        }
        return nullptr;
    }

  private:
    mutable std::mutex display_mutex_{};
    std::unordered_map<VkDisplayKHR, Display*> display_map_{};

    mutable std::mutex display_mode_mutex_{};
    std::unordered_map<VkDisplayModeKHR, DisplayMode*> display_mode_map_{};

    mutable std::mutex display_surface_mutex_{};
    std::unordered_map<VkSurfaceKHR, Display*> display_surface_map_{};
};

class DeviceDisplayManager {
  public:
    DeviceDisplayManager(InstanceDisplayManager& instance_display_manager, const PhysicalDevice& physical_device);

    const Displays& GetDisplays() const { return displays_; }

    Display* GetEmulatedDisplayFromHandle(VkDisplayKHR handle) const {
        return instance_display_manager_.GetEmulatedDisplayFromHandle(handle);
    }

    DisplayMode* GetEmulatedDisplayModeFromHandle(VkDisplayModeKHR handle) const {
        return instance_display_manager_.GetEmulatedDisplayModeFromHandle(handle);
    }

    DisplayMode* CreateDisplayMode(Display& display, const VkDisplayModeParametersKHR& parameters);

  private:
    InstanceDisplayManager& instance_display_manager_;
    Displays displays_{};

    mutable std::mutex custom_display_modes_mutex_{};
    DisplayModes custom_display_modes_{};
};

class Display {
  public:
    Display(const PhysicalDevice& physical_device, uint32_t index);
    ~Display() { DestroySurface(); }

    VkDisplayKHR VkSCHandle() const { return (VkDisplayKHR)this; }

    const PhysicalDevice& GetPhysicalDevice() const { return physical_device_; }
    const VkDisplayPropertiesKHR& GetProperties() const { return properties_; }
    const DisplayModes& GetPredefinedModes() const { return predefined_modes_; }
    const DisplayConfig& GetConfig() const { return display_config_; }

    VkResult CreateSurface(Instance& instance, DisplayMode& display_mode, const VkDisplaySurfaceCreateInfoKHR& create_info,
                           VkSurfaceKHR& surface);
    void DestroySurface();

  private:
    VkDisplayPropertiesKHR InitDisplayProperties() const;
    DisplayModes InitPredefinedDisplayModes();

    const PhysicalDevice& physical_device_;
    const DisplayConfig& display_config_;
    const std::string name_;
    const VkDisplayPropertiesKHR properties_;
    const DisplayModes predefined_modes_;
    std::unique_ptr<PlatformSurface> surface_{};
};

class DisplayMode {
  public:
    DisplayMode(Display& display, const VkDisplayModeParametersKHR& parameters);

    VkDisplayModeKHR VkSCHandle() const { return (VkDisplayModeKHR)this; }

    const PhysicalDevice& GetPhysicalDevice() const { return display_.GetPhysicalDevice(); }
    Display& GetDisplay() const { return display_; }

    const VkDisplayModeParametersKHR& GetParameters() const { return parameters_; }

    VkDisplayPlaneCapabilitiesKHR GetDisplayPlaneCapabilities(uint32_t plane_index) const;

  private:
    Display& display_;
    const VkDisplayModeParametersKHR parameters_;
};

}  // namespace vksc
