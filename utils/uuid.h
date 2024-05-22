/*
 * Copyright (c) 2024 The Khronos Group Inc.
 * Copyright (c) 2024 RasterGrid Kft.
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#pragma once

#include <vulkan/vulkan.h>
#include <array>
#include <string>
#include <string.h>

namespace utils {

class UUID {
  public:
    UUID() : id_() { memset(&id_[0], 0, VK_UUID_SIZE); }
    UUID(const uint8_t id[VK_UUID_SIZE]) : id_() { memcpy(&id_[0], &id[0], VK_UUID_SIZE); }
    UUID(const std::array<uint8_t, VK_UUID_SIZE> id) : id_() { memcpy(&id_[0], &id[0], VK_UUID_SIZE); }

    bool IsValid() const { return !(*this == UUID()); }

    std::string toString() const {
        char str[37];
        snprintf(str, sizeof(str), "%02x%02x%02x%02x-%02x%02x-%02x%02x-%02x%02x-%02x%02x%02x%02x%02x%02x", id_[0], id_[1], id_[2],
                 id_[3], id_[4], id_[5], id_[6], id_[7], id_[8], id_[9], id_[10], id_[11], id_[12], id_[13], id_[14], id_[15]);
        return std::string(str);
    }

    void CopyToArray(uint8_t (&id)[VK_UUID_SIZE]) { memcpy(&id[0], &id_[0], VK_UUID_SIZE); }

    bool operator==(const UUID& rhs) const { return memcmp(id_, rhs.id_, VK_UUID_SIZE) == 0; }

  private:
    uint8_t id_[VK_UUID_SIZE];
};

// Pipeline cache UUID used by the emulation stack (shared between the PCC and ICD)
static const std::array<uint8_t, VK_UUID_SIZE> EmulationPipelineCacheUUID = {0x27, 0xA8, 0x32, 0x5A, 0x71, 0x38, 0x4C, 0xA3,
                                                                             0x89, 0x15, 0x68, 0x72, 0xE8, 0x61, 0x42, 0x1A};

// TODO: Remove these once we've added the official IDs to the registry
#define VK_VENDOR_ID_KHRONOS ((VkVendorId)0x10000)
#define VK_DRIVER_ID_VULKAN_SC_EMULATION_ON_VULKAN ((VkDriverId)27)

}  // namespace utils
