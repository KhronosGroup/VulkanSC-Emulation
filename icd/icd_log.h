/*
 * Copyright (c) 2024-2025 The Khronos Group Inc.
 * Copyright (c) 2024-2025 RasterGrid Kft.
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#pragma once

#include <vulkan/vulkan.h>
#include "vulkan/utility/vk_struct_helper.hpp"

#include <stdio.h>
#include <unordered_map>
#include <vector>
#include <tuple>
#include <mutex>
#include <memory>
#include <utility>

namespace icd {

class DebugUtilsMessengers {
  public:
    DebugUtilsMessengers(std::vector<VkDebugUtilsMessengerCreateInfoEXT>&& messengers = {})
        : messengers_(std::move(messengers)),
          messenger_objects_mutex_(),
          messenger_objects_(),
          has_messengers_(!messengers_.empty()) {}

    void Add(VkDebugUtilsMessengerEXT handle, const VkDebugUtilsMessengerCreateInfoEXT& create_info) {
        std::unique_lock lock(messenger_objects_mutex_);
        messenger_objects_.emplace(std::make_pair(handle, create_info));
        has_messengers_ = true;
    }

    void Remove(VkDebugUtilsMessengerEXT handle) {
        std::unique_lock lock(messenger_objects_mutex_);
        messenger_objects_.erase(handle);
        has_messengers_ = !messengers_.empty() || !messenger_objects_.empty();
    }

    void Send(VkDebugUtilsMessageSeverityFlagBitsEXT severity, VkDebugUtilsMessageTypeFlagsEXT types,
              const VkDebugUtilsMessengerCallbackDataEXT& data) const;

    bool HasMessengers() const { return has_messengers_; }

  private:
    std::vector<VkDebugUtilsMessengerCreateInfoEXT> messengers_;
    mutable std::mutex messenger_objects_mutex_;
    std::unordered_map<VkDebugUtilsMessengerEXT, VkDebugUtilsMessengerCreateInfoEXT> messenger_objects_;
    bool has_messengers_;
};

// Logs a message to to a debug utils callback if available or otherwise to stderr
class Logger {
  public:
    Logger(VkDebugUtilsMessageSeverityFlagsEXT stderr_severity, std::vector<VkDebugUtilsMessengerCreateInfoEXT>&& messengers = {});

    template <typename HANDLE>
    Logger(const Logger& logger, VkObjectType object_type, HANDLE handle)
        : stderr_severity_(logger.stderr_severity_), messengers_(logger.messengers_), object_names_(logger.object_names_) {
        auto object_name = vku::InitStruct<VkDebugUtilsObjectNameInfoEXT>();
        object_name.objectType = object_type;
        object_name.objectHandle = (uint64_t)handle;
        object_names_.push_back(object_name);
    }

    void AddDebugMessenger(VkDebugUtilsMessengerEXT handle, const VkDebugUtilsMessengerCreateInfoEXT& create_info) {
        messengers_->Add(handle, create_info);
    }

    void RemoveDebugMessenger(VkDebugUtilsMessengerEXT handle) { messengers_->Remove(handle); }

    void SubmitMessage(VkDebugUtilsMessageSeverityFlagBitsEXT severity, VkDebugUtilsMessageTypeFlagsEXT types,
                       const VkDebugUtilsMessengerCallbackDataEXT& data) const {
        messengers_->Send(severity, types, data);
    }

    template <typename... ARGS>
    void Fatal(const char* msg_id, const char* format, ARGS... args) const {
        Log(true, VK_DEBUG_UTILS_MESSAGE_SEVERITY_ERROR_BIT_EXT, VK_DEBUG_UTILS_MESSAGE_TYPE_GENERAL_BIT_EXT, msg_id, format,
            std::forward<ARGS>(args)...);
    }

    template <typename... ARGS>
    void Error(const char* msg_id, const char* format, ARGS... args) const {
        Log(false, VK_DEBUG_UTILS_MESSAGE_SEVERITY_ERROR_BIT_EXT, VK_DEBUG_UTILS_MESSAGE_TYPE_GENERAL_BIT_EXT, msg_id, format,
            std::forward<ARGS>(args)...);
    }

    template <typename... ARGS>
    void Warning(const char* msg_id, const char* format, ARGS... args) const {
        Log(false, VK_DEBUG_UTILS_MESSAGE_SEVERITY_WARNING_BIT_EXT, VK_DEBUG_UTILS_MESSAGE_TYPE_GENERAL_BIT_EXT, msg_id, format,
            std::forward<ARGS>(args)...);
    }

    template <typename... ARGS>
    void Info(const char* msg_id, const char* format, ARGS... args) const {
        Log(false, VK_DEBUG_UTILS_MESSAGE_SEVERITY_INFO_BIT_EXT, VK_DEBUG_UTILS_MESSAGE_TYPE_GENERAL_BIT_EXT, msg_id, format,
            std::forward<ARGS>(args)...);
    }

    template <typename... ARGS>
    void Debug(const char* msg_id, const char* format, ARGS... args) const {
        Log(false, VK_DEBUG_UTILS_MESSAGE_SEVERITY_VERBOSE_BIT_EXT, VK_DEBUG_UTILS_MESSAGE_TYPE_GENERAL_BIT_EXT, msg_id, format,
            std::forward<ARGS>(args)...);
    }

    template <typename... ARGS>
    void ValidationError(const char* msg_id, const char* format, ARGS... args) const {
        Log(false, VK_DEBUG_UTILS_MESSAGE_SEVERITY_ERROR_BIT_EXT, VK_DEBUG_UTILS_MESSAGE_TYPE_VALIDATION_BIT_EXT, msg_id, format,
            std::forward<ARGS>(args)...);
    }

  private:
    void Log(bool fatal, VkDebugUtilsMessageSeverityFlagBitsEXT severity, VkDebugUtilsMessageTypeFlagsEXT type, const char* msg_id,
             const char* format, ...) const;

    VkDebugUtilsMessageSeverityFlagsEXT stderr_severity_;
    std::shared_ptr<DebugUtilsMessengers> messengers_;
    std::vector<VkDebugUtilsObjectNameInfoEXT> object_names_;
};

}  // namespace icd
