/*
 * Copyright (c) 2024 The Khronos Group Inc.
 * Copyright (c) 2024 RasterGrid Kft.
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#include "vksc_display_emulation.h"
#include "vksc_global.h"
#include "vksc_instance.h"
#include "vksc_physical_device.h"

#include <json/json.h>

#include <sstream>
#include <fstream>
#include <tuple>

namespace vksc {

GlobalDisplayManager::GlobalDisplayManager(const icd::Logger& log) : display_config_(InitDisplayConfig(log)) {}

std::vector<DisplayConfig> GlobalDisplayManager::InitDisplayConfig(const icd::Logger& log) {
    std::vector<DisplayConfig> display_config;

    bool use_default_config = true;

    const char* config_file = ICD.Environment().GetEmulatedDisplayConfig();
    if (config_file != nullptr) {
        use_default_config = false;

        std::ifstream file(config_file);
        if (file.is_open()) {
            bool parse_error = false;
            std::string errors;
            Json::CharReaderBuilder builder;
            Json::Value root = Json::nullValue;

            if (!Json::parseFromStream(builder, file, &root, &errors)) {
                parse_error = true;
            }

            if (!parse_error && !root.isArray()) {
                errors = "Root element of JSON file is not an array";
                parse_error = true;
            }

            for (uint32_t i = 0; i < root.size(); ++i) {
                DisplayConfig display_info{};

                const Json::Value& name = root[i].get("name", Json::nullValue);
                if (name == Json::nullValue) {
                    // Use default name
                    display_info.name = InitDisplayName(i);
                } else if (!name.isString()) {
                    errors = "Failed to parse display name";
                    parse_error = true;
                    break;
                } else {
                    display_info.name = name.asString();
                }

                const Json::Value& resolution = root[i].get("resolution", Json::nullValue);
                if (resolution == Json::nullValue || !resolution.isArray() || resolution.size() != 2 || !resolution[0].isUInt() ||
                    !resolution[1].isUInt()) {
                    errors = "Failed to parse display resolution";
                    parse_error = true;
                    break;
                } else {
                    display_info.resolution = {resolution[0].asUInt(), resolution[1].asUInt()};
                }

                const Json::Value& dimensions = root[i].get("dimensions", Json::nullValue);
                if (dimensions == Json::nullValue) {
                    // Use default dimensions derived from resolution
                    display_info.dimensions = {display_info.resolution.width / 2, display_info.resolution.height / 2};
                } else if (!dimensions.isArray() || dimensions.size() != 2 || !dimensions[0].isUInt() || !dimensions[1].isUInt()) {
                    errors = "Failed to parse display dimensions";
                    parse_error = true;
                    break;
                } else {
                    display_info.dimensions = {dimensions[0].asUInt(), dimensions[1].asUInt()};
                }

                const Json::Value& offset = root[i].get("offset", Json::nullValue);
                if (offset == Json::nullValue) {
                    // Use default offset
                    display_info.offset = {static_cast<int32_t>(100 + i * 50), static_cast<int32_t>(100 + i * 50)};
                } else if (!offset.isArray() || offset.size() != 2 || !offset[0].isInt() || !offset[1].isInt()) {
                    errors = "Failed to parse display offset";
                    parse_error = true;
                    break;
                } else {
                    display_info.offset = {offset[0].asInt(), offset[1].asInt()};
                }

                Json::Value modes = root[i].get("modes", Json::nullValue);
                if (modes == Json::nullValue) {
                    // Use default mode equaling the resolution
                    display_info.modes.push_back(display_info.resolution);
                } else if (!modes.isArray() || modes.size() == 0) {
                    errors = "Failed to parse display modes";
                    parse_error = true;
                    break;
                } else {
                    for (uint32_t mode_idx = 0; mode_idx < modes.size(); ++mode_idx) {
                        Json::Value mode = modes[mode_idx];
                        if (!mode.isArray() || mode.size() != 2 || !mode[0].isUInt() || !mode[1].isUInt()) {
                            errors = "Failed to parse display mode";
                            parse_error = true;
                            break;
                        } else {
                            display_info.modes.push_back({mode[0].asUInt(), mode[1].asUInt()});
                        }
                    }
                }

                if (parse_error) {
                    break;
                }

                display_config.push_back(display_info);
            }

            if (parse_error) {
                log.Error("VKSC-EMU-Display-ConfigFileParse", "Failed to parse emulated display config file \"%s\": %s",
                          config_file, errors.c_str());
                use_default_config = true;
            }
        } else {
            log.Error("VKSC-EMU-Display-ConfigFileOpen", "Cannot open emulated display config file \"%s\"", config_file);
            use_default_config = true;
        }
    }

    if (use_default_config) {
        for (uint32_t i = 0; i < ICD.Environment().GetEmulatedDisplayCount(); ++i) {
            DisplayConfig display_info{};
            display_info.name = InitDisplayName(i);
            display_info.dimensions = {480, 270};
            display_info.resolution = {960, 540};
            display_info.offset = {static_cast<int32_t>(100 + i * 50), static_cast<int32_t>(100 + i * 50)};
            display_info.modes.push_back(display_info.resolution);
            display_config.push_back(display_info);
        }
    }

    return display_config;
}

std::string GlobalDisplayManager::InitDisplayName(uint32_t index) const {
    std::stringstream ss;
    ss << "Vulkan SC Emulation Display #" << (index + 1);
    return ss.str();
}

const vk::ExtensionMap& GlobalDisplayManager::GetTargetPlatformExtensions() const {
    static const vk::ExtensionMap s_platform_extensions = {
#if defined(VK_USE_PLATFORM_WIN32_KHR)
        {vk::ExtensionNumber::KHR_win32_surface, VK_KHR_WIN32_SURFACE_SPEC_VERSION}
#elif defined(VK_USE_PLATFORM_XCB_KHR)
        {vk::ExtensionNumber::KHR_xcb_surface, VK_KHR_XCB_SURFACE_SPEC_VERSION}
#endif
    };
    return s_platform_extensions;
}

void GlobalDisplayManager::InitEmulatedExtensions(const Global& icd) {
    bool supported_wsi = (GetTargetPlatformExtensions().size() > 0);
    for (const auto platform_extension : GetTargetPlatformExtensions()) {
        supported_wsi = supported_wsi && icd.IsInstanceExtensionSupported(platform_extension.first);
    }
    if (supported_wsi && GetDisplayCount() > 0) {
        emulated_extensions_.insert({ExtensionNumber::KHR_display, VK_KHR_DISPLAY_SPEC_VERSION});
        emulated_extensions_.insert({ExtensionNumber::KHR_get_display_properties2, VK_KHR_GET_DISPLAY_PROPERTIES_2_SPEC_VERSION});
    }
}

InstanceDisplayManager::InstanceDisplayManager() {}

DeviceDisplayManager::DeviceDisplayManager(InstanceDisplayManager& instance_display_manager, const PhysicalDevice& physical_device)
    : instance_display_manager_(instance_display_manager) {
    displays_.reserve(ICD.GetDisplayManager().GetDisplayCount());
    for (uint32_t index = 0; index < ICD.GetDisplayManager().GetDisplayCount(); ++index) {
        auto& display = displays_.emplace_back(std::make_unique<Display>(physical_device, index));
        if (display != nullptr) {
            instance_display_manager_.RegisterEmulatedDisplay(display->VkSCHandle(), display.get());
            for (const auto& display_mode : display->GetPredefinedModes()) {
                instance_display_manager_.RegisterEmulatedDisplayMode(display_mode->VkSCHandle(), display_mode.get());
            }
        }
    }
}

DisplayMode* DeviceDisplayManager::CreateDisplayMode(Display& display, const VkDisplayModeParametersKHR& parameters) {
    std::unique_lock lock(custom_display_modes_mutex_);
    auto& display_mode = custom_display_modes_.emplace_back(std::make_unique<DisplayMode>(display, parameters));
    if (display_mode != nullptr) {
        instance_display_manager_.RegisterEmulatedDisplayMode(display_mode->VkSCHandle(), display_mode.get());
    }
    return display_mode.get();
}

Display::Display(const PhysicalDevice& physical_device, uint32_t index)
    : physical_device_(physical_device),
      display_config_(ICD.GetDisplayManager().GetDisplayConfig()[index]),
      name_(display_config_.name),
      properties_(InitDisplayProperties()),
      predefined_modes_(InitPredefinedDisplayModes()) {}

VkResult Display::CreateSurface(Instance& instance, DisplayMode& display_mode, const VkDisplaySurfaceCreateInfoKHR& create_info,
                                VkSurfaceKHR& surface) {
    if (surface_ != nullptr) {
        instance.Log().Error("VKSC-EMU-Display-Busy", "There is already a surface created against display (%p)", VkSCHandle());
        return VK_ERROR_OUT_OF_DEVICE_MEMORY;
    }

    VkResult result = VK_SUCCESS;

    surface_ = std::make_unique<PlatformSurface>();
    if (surface_ == nullptr) {
        result = VK_ERROR_OUT_OF_HOST_MEMORY;
    }

    [[maybe_unused]] const auto window_size = display_mode.GetParameters().visibleRegion;
    [[maybe_unused]] const auto window_location = display_mode.GetDisplay().GetConfig().offset;

#if defined(VK_USE_PLATFORM_WIN32_KHR)
    // On Windows, event loops are thread-local, so window creation must happen on the thread polling for messages.
    //
    // NOTE: we capture Display::CreateSurface args and local variables by-ref which is dicy, but the mutex makes
    //       sure none of them go out of scope while they may be accessed. The event loop (on success) will outlive
    //       them, but by then we don't touch any of those variables, just the messages and the this ptr.
    std::mutex init_mutex;
    bool init_done = false;
    std::condition_variable init_cv;
    surface_->message_handler = std::thread([&, this] {
        auto signal_init_done = [&]() {
            std::unique_lock lock(init_mutex);
            init_done = true;
            lock.unlock();
            init_cv.notify_one();
        };
        // Register window class
        bool win_class_registered = false;
        if (result == VK_SUCCESS) {
            surface_->win_inst = GetModuleHandle(NULL);

            WNDCLASSEX win_class{};
            win_class.cbSize = sizeof(WNDCLASSEX);
            win_class.style = CS_HREDRAW | CS_VREDRAW;
            win_class.lpfnWndProc = DefWindowProc;
            win_class.hInstance = surface_->win_inst;
            win_class.hIcon = LoadIcon(NULL, IDI_APPLICATION);
            win_class.hCursor = LoadCursor(NULL, IDC_ARROW);
            win_class.hbrBackground = (HBRUSH)GetStockObject(BLACK_BRUSH);
            win_class.lpszMenuName = NULL;
            win_class.lpszClassName = name_.c_str();
            win_class.hIconSm = LoadIcon(NULL, IDI_WINLOGO);

            if (RegisterClassEx(&win_class)) {
                win_class_registered = true;
            } else {
                instance.Log().Error("VKSC-EMU-Display-RegisterClassEx", "Failed to register emulated display window class");
                result = VK_ERROR_OUT_OF_DEVICE_MEMORY;
            }
        }

        // Create window
        bool win_created = false;
        if (result == VK_SUCCESS) {
            DWORD style = WS_OVERLAPPED | WS_CAPTION | WS_SYSMENU;
            RECT wr = {0, 0, (LONG)window_size.width, (LONG)window_size.height};
            AdjustWindowRect(&wr, style, FALSE);
            surface_->window = CreateWindowEx(0, name_.c_str(), name_.c_str(), style, window_location.x, window_location.y,
                                              wr.right - wr.left, wr.bottom - wr.top, NULL, NULL, surface_->win_inst, NULL);
            if (surface_->window) {
                ShowWindow(surface_->window, SW_SHOWDEFAULT);
                win_created = true;
            } else {
                instance.Log().Error("VKSC-EMU-Display-CreateWindowEx", "Failed to create emulated display window");
                result = VK_ERROR_OUT_OF_DEVICE_MEMORY;
            }
        }

        // Create surface
        if (result == VK_SUCCESS) {
            auto create_info = vku::InitStruct<VkWin32SurfaceCreateInfoKHR>();
            create_info.hinstance = surface_->win_inst;
            create_info.hwnd = surface_->window;

            result = instance.CreateWin32SurfaceKHR(&create_info, NULL, &surface);
            if (result != VK_SUCCESS) {
                instance.Log().Error("VKSC-EMU-Display-CreateWin32SurfaceKHR", "Failed to create emulated display surface");
                result = VK_ERROR_OUT_OF_DEVICE_MEMORY;
            }
        }

        if (result == VK_SUCCESS) {
            signal_init_done();
            // Event loop
            [this]() {  // make sure that code after signal uses only this object via IILE
                MSG msg{};
                BOOL result{};
                while (result = GetMessage(&msg, surface_->window, 0, 0) != 0) {
                    if (result == -1 || msg.message == WM_QUIT) {
                        break;
                    }
                    TranslateMessage(&msg);
                    DispatchMessage(&msg);
                }
                DestroyWindow(surface_->window);
                UnregisterClass(name_.c_str(), surface_->win_inst);
            }();
        } else {
            if (win_class_registered) {
                UnregisterClass(name_.c_str(), surface_->win_inst);
            }
            if (win_created) {
                DestroyWindow(surface_->window);
            }
            signal_init_done();
        }
    });

    // Wait for init to complete
    std::unique_lock lock(init_mutex);
    init_cv.wait(lock, [&] { return init_done; });
#elif defined(VK_USE_PLATFORM_XCB_KHR)
    // Connect to XCB
    int screen = 0;
    bool connection_established = false;
    if (result == VK_SUCCESS) {
        surface_->connection = xcb_connect(NULL, &screen);
        if (!xcb_connection_has_error(surface_->connection)) {
            connection_established = true;
        } else {
            instance.Log().Error("VKSC-EMU-Display-XcbConnect", "Failed to connect to XCB");
            result = VK_ERROR_OUT_OF_DEVICE_MEMORY;
        }
    }

    // Create window
    if (result == VK_SUCCESS) {
        const xcb_setup_t* setup = xcb_get_setup(surface_->connection);
        xcb_screen_iterator_t iter = xcb_setup_roots_iterator(setup);
        while (screen-- > 0) {
            xcb_screen_next(&iter);
        }
        surface_->screen = iter.data;

        surface_->window = xcb_generate_id(surface_->connection);

        const uint32_t value_mask = XCB_CW_BACK_PIXEL;
        const uint32_t value_list[] = {surface_->screen->black_pixel};

        xcb_create_window(surface_->connection, XCB_COPY_FROM_PARENT, surface_->window, surface_->screen->root, 0, 0,
                          window_size.width, window_size.height, 0, XCB_WINDOW_CLASS_INPUT_OUTPUT, surface_->screen->root_visual,
                          value_mask, value_list);

        // Set window title
        xcb_change_property(surface_->connection, XCB_PROP_MODE_REPLACE, surface_->window, XCB_ATOM_WM_NAME, XCB_ATOM_STRING, 8,
                            name_.length(), name_.c_str());

        // Make window non-resizable
        uint32_t hints[] = {
            0x30, 0, 0, 0, 0, window_size.width, window_size.height, window_size.width, window_size.height, 0, 0, 0, 0,
            0,    0, 0, 0, 0};
        xcb_change_property(surface_->connection, XCB_PROP_MODE_REPLACE, surface_->window, XCB_ATOM_WM_NORMAL_HINTS,
                            XCB_ATOM_WM_SIZE_HINTS, 32, sizeof(hints) / sizeof(uint32_t), &hints);

        xcb_map_window(surface_->connection, surface_->window);

        // Change location
        xcb_configure_window(surface_->connection, surface_->window, XCB_CONFIG_WINDOW_X | XCB_CONFIG_WINDOW_Y, &window_location);
    }

    // Create surface
    if (result == VK_SUCCESS) {
        auto create_info = vku::InitStruct<VkXcbSurfaceCreateInfoKHR>();
        create_info.connection = surface_->connection;
        create_info.window = surface_->window;

        result = instance.CreateXcbSurfaceKHR(&create_info, NULL, &surface);
        if (result != VK_SUCCESS) {
            instance.Log().Error("VKSC-EMU-Display-CreateXcbSurfaceKHR", "Failed to create emulated display surface");
            result = VK_ERROR_OUT_OF_DEVICE_MEMORY;
        }
    }

    // Create message handler thread
    if (result == VK_SUCCESS) {
        surface_->message_handler = std::thread([this] {
            bool quit = false;
            while (!quit) {
                xcb_generic_event_t* event = nullptr;
                event = xcb_wait_for_event(surface_->connection);
                if (event != nullptr) {
                    if (event->response_type == XCB_CLIENT_MESSAGE) {
                        quit = false;
                        break;
                    }
                    free(event);
                }
            }
        });
    }

    if (result != VK_SUCCESS && connection_established) {
        xcb_destroy_window(surface_->connection, surface_->window);
        xcb_disconnect(surface_->connection);
    }
#endif

    if (result != VK_SUCCESS) {
        surface_ = nullptr;
    }

    return result;
}

void Display::DestroySurface() {
    if (surface_ == nullptr) {
        return;
    }

#if defined(VK_USE_PLATFORM_WIN32_KHR)
    // Send even to unblock and exit message handler thread
    PostMessage(surface_->window, WM_QUIT, 0, 0);
    surface_->message_handler.join();
#elif defined(VK_USE_PLATFORM_XCB_KHR)
    // Send even to unblock and exit message handler thread
    xcb_client_message_event_t event;
    event.response_type = XCB_CLIENT_MESSAGE;
    event.format = 32;
    event.type = 877;
    event.window = surface_->window;
    xcb_send_event(surface_->connection, false, surface_->window,
                   XCB_EVENT_MASK_SUBSTRUCTURE_REDIRECT | XCB_EVENT_MASK_SUBSTRUCTURE_NOTIFY, (const char*)&event);
    surface_->message_handler.join();

    xcb_destroy_window(surface_->connection, surface_->window);
    xcb_disconnect(surface_->connection);
#endif

    surface_ = nullptr;
}

VkDisplayPropertiesKHR Display::InitDisplayProperties() const {
    VkDisplayPropertiesKHR props{};
    props.display = VkSCHandle();
    props.displayName = name_.c_str();
    props.physicalDimensions = GetConfig().dimensions;
    props.physicalResolution = GetConfig().resolution;
    props.supportedTransforms = VK_SURFACE_TRANSFORM_IDENTITY_BIT_KHR;
    props.planeReorderPossible = VK_FALSE;
    props.persistentContent = VK_FALSE;

    return props;
}

DisplayModes Display::InitPredefinedDisplayModes() {
    // We use 60Hz for the refresh rate or whatever reasonable value we can retrieve from the window system
    uint32_t refresh_rate = 60000;
#if defined(VK_USE_PLATFORM_WIN32_KHR)
    {
        DEVMODE dm;
        dm.dmSize = sizeof(DEVMODE);
        EnumDisplaySettings(NULL, ENUM_CURRENT_SETTINGS, &dm);
        refresh_rate = dm.dmDisplayFrequency * 1000;
    }
#endif

    DisplayModes display_modes{};
    for (const auto& mode : GetConfig().modes) {
        VkDisplayModeParametersKHR parameters;
        parameters.visibleRegion = mode;
        parameters.refreshRate = refresh_rate;
        display_modes.emplace_back(std::make_unique<DisplayMode>(*this, parameters));
    }

    return display_modes;
}

DisplayMode::DisplayMode(Display& display, const VkDisplayModeParametersKHR& parameters)
    : display_(display), parameters_(parameters) {}

VkDisplayPlaneCapabilitiesKHR DisplayMode::GetDisplayPlaneCapabilities(uint32_t plane_index) const {
    std::ignore = plane_index;
    VkDisplayPlaneCapabilitiesKHR caps{};
    caps.supportedAlpha = VK_DISPLAY_PLANE_ALPHA_OPAQUE_BIT_KHR;
    caps.minSrcPosition = {0, 0};
    caps.maxSrcPosition = {0, 0};
    caps.minSrcExtent = GetParameters().visibleRegion;
    caps.maxSrcExtent = GetParameters().visibleRegion;
    caps.minDstPosition = {0, 0};
    caps.maxDstPosition = {0, 0};
    caps.minDstExtent = GetParameters().visibleRegion;
    caps.maxDstExtent = GetParameters().visibleRegion;
    return caps;
}

}  // namespace vksc
