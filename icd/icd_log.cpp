/*
 * Copyright (c) 2024 The Khronos Group Inc.
 * Copyright (c) 2024 RasterGrid Kft.
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#include "icd_log.h"
#include "icd_env_helper.h"

#include <stdio.h>
#include <stdarg.h>

namespace icd {

static VKAPI_ATTR VkBool32 VKAPI_CALL StderrCallback(bool fatal, VkDebugUtilsMessageSeverityFlagBitsEXT severity,
                                                     VkDebugUtilsMessageTypeFlagsEXT types, const char* msg_id, const char* msg) {
    static const std::unordered_map<VkDebugUtilsMessageSeverityFlagBitsEXT, const char*> severity_texts = {
        {VK_DEBUG_UTILS_MESSAGE_SEVERITY_VERBOSE_BIT_EXT, "VERBOSE"},
        {VK_DEBUG_UTILS_MESSAGE_SEVERITY_INFO_BIT_EXT, "INFO"},
        {VK_DEBUG_UTILS_MESSAGE_SEVERITY_WARNING_BIT_EXT, "WARNING"},
        {VK_DEBUG_UTILS_MESSAGE_SEVERITY_ERROR_BIT_EXT, "ERROR"}};

    const char* severity_text = "UNKNOWN";
    if (fatal) {
        severity_text = "FATAL";
    } else {
        auto severity_it = severity_texts.find(severity);
        if (severity_it != severity_texts.end()) {
            severity_text = severity_it->second;
        }
    }

    static const std::unordered_map<VkDebugUtilsMessageTypeFlagsEXT, const char*> type_texts = {
        {VK_DEBUG_UTILS_MESSAGE_TYPE_VALIDATION_BIT_EXT, "VALIDITY"},
        {VK_DEBUG_UTILS_MESSAGE_TYPE_PERFORMANCE_BIT_EXT, "PERF"},
    };

    const char* type_text = "";
    auto type_it = type_texts.find(types);
    if (type_it != type_texts.end()) {
        type_text = type_it->second;
    }

    fprintf(stderr, "%-9s %-9s [ %s ] %s\n", severity_text, type_text, msg_id, msg);

    return VK_FALSE;
}

void DebugUtilsMessengers::Send(VkDebugUtilsMessageSeverityFlagBitsEXT severity, VkDebugUtilsMessageTypeFlagsEXT types,
                                const VkDebugUtilsMessengerCallbackDataEXT& data) const {
    for (const auto& messenger : messengers_) {
        if (severity & messenger.messageSeverity && types & messenger.messageType) {
            messenger.pfnUserCallback(severity, types, &data, messenger.pUserData);
        }
    }
    std::unique_lock lock(messenger_objects_mutex_);
    for (const auto& messenger_it : messenger_objects_) {
        const auto& messenger = messenger_it.second;
        if (severity & messenger.messageSeverity && types & messenger.messageType) {
            messenger.pfnUserCallback(severity, types, &data, messenger.pUserData);
        }
    }
}

Logger::Logger(VkDebugUtilsMessageSeverityFlagsEXT stderr_severity, std::vector<VkDebugUtilsMessengerCreateInfoEXT>&& messengers)
    : stderr_severity_(stderr_severity),
      messengers_(std::make_shared<DebugUtilsMessengers>(std::move(messengers))),
      object_names_() {}

void Logger::Log(bool fatal, VkDebugUtilsMessageSeverityFlagBitsEXT severity, VkDebugUtilsMessageTypeFlagsEXT type,
                 const char* msg_id, const char* format, ...) const {
    char msg[512] = {0};

    va_list ap;
    va_start(ap, format);
    int ret = vsnprintf(msg, sizeof(msg), format, ap);
    if ((ret >= (int)sizeof(msg)) || ret < 0) {
        msg[sizeof(msg) - 1] = '\0';
    }
    va_end(ap);

    if (messengers_->HasMessengers()) {
        auto callback_data = vku::InitStruct<VkDebugUtilsMessengerCallbackDataEXT>();
        callback_data.pMessageIdName = msg_id;
        callback_data.pMessage = msg;
        callback_data.objectCount = static_cast<uint32_t>(object_names_.size());
        callback_data.pObjects = object_names_.data();
        messengers_->Send(severity, type, callback_data);
    }

    if ((!messengers_->HasMessengers() && (severity & stderr_severity_) != 0) || fatal) {
        StderrCallback(fatal, severity, type, msg_id, msg);
    }
}

}  // namespace icd
