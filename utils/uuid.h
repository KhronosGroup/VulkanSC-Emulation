/*
 * Copyright (c) 2024-2025 The Khronos Group Inc.
 * Copyright (c) 2024-2025 RasterGrid Kft.
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#pragma once

#include <vulkan/vulkan.h>
#include <array>
#include <utility>
#include <string>
#include <random>
#include <chrono>
#include <stddef.h>
#include <string.h>
#include <assert.h>

namespace utils {

class UUID {
  public:
    enum class Mode { RFC4122, AutoIncrement };
    static inline size_t counter = 0;

    UUID() : id_() { memset(&id_[0], 0, VK_UUID_SIZE); }
    UUID(const uint8_t id[VK_UUID_SIZE]) : id_() { CopyFromArray(id); }
    UUID(const std::array<uint8_t, VK_UUID_SIZE> id) : id_() { memcpy(&id_[0], &id[0], VK_UUID_SIZE); }

    /// \brief Create UUID from pipeline cache JSON string
    ///
    /// \param mode UUID mode to use
    /// \param json_str Null-terminated string of JSON to generate UUID for (contents are hashed)
    /// \see https://datatracker.ietf.org/doc/html/rfc4122
    /// \todo When C++20 is required, use std::chrono::utc_clock. For the time being, behavior mostly
    ///       follows RFC4122, but epoch is according to STL. Should be fine, as the end goal is
    ///       uniqueness, not reproducibility between systems.
    UUID(Mode mode, const char* json_str) {
        const auto nanoseconds_since_epoch =
            mode == Mode::RFC4122
                ? std::chrono::duration_cast<std::chrono::nanoseconds>(std::chrono::system_clock::now().time_since_epoch()).count()
                : std::chrono::nanoseconds{0}.count();
        const uint8_t variant = 0b100;
        const uint8_t version = 0b10000;
        static_assert(sizeof(std::random_device::result_type) >= sizeof(uint16_t),
                      "Impl assumes std::random_device::result_type to be at least 2 bytes.");
        const uint16_t clock_sequence =
            mode == Mode::RFC4122 ? static_cast<uint16_t>(std::random_device{}()) : static_cast<uint16_t>(counter++);

        const uint32_t time_low = static_cast<uint32_t>(nanoseconds_since_epoch);
        const uint16_t time_mid = static_cast<uint16_t>(nanoseconds_since_epoch >> 32);
        const uint16_t time_hi_and_version =
            (static_cast<uint16_t>(nanoseconds_since_epoch >> sizeof(time_low + time_mid)) & 0xafff) |
            (static_cast<uint16_t>(version) << 12);
        const uint8_t clock_seq_hi_and_reserved = (static_cast<uint8_t>(clock_sequence >> 8) & 0b00011111) | (variant << 5);
        const uint8_t clock_seq_low = static_cast<uint8_t>(clock_sequence);
        const size_t node = std::hash<std::string>{}(json_str);

        std::array<const uint8_t, VK_UUID_SIZE> uuid_octets{static_cast<uint8_t>(time_low >> 24),
                                                            static_cast<uint8_t>(time_low >> 16),
                                                            static_cast<uint8_t>(time_low >> 8),
                                                            static_cast<uint8_t>(time_low),
                                                            static_cast<uint8_t>(time_mid >> 8),
                                                            static_cast<uint8_t>(time_mid),
                                                            static_cast<uint8_t>(time_hi_and_version >> 8),
                                                            static_cast<uint8_t>(time_hi_and_version),
                                                            static_cast<uint8_t>(clock_seq_hi_and_reserved),
                                                            static_cast<uint8_t>(clock_seq_low),
                                                            static_cast<uint8_t>(node >> 40),
                                                            static_cast<uint8_t>(node >> 32),
                                                            static_cast<uint8_t>(node >> 24),
                                                            static_cast<uint8_t>(node >> 16),
                                                            static_cast<uint8_t>(node >> 8),
                                                            static_cast<uint8_t>(node)};
        CopyFromArray(uuid_octets.data());
    }

    /// \brief Create UUID from string representation.
    /// \param str serialized UUID
    /// \note Feeding UUID::toString() to this CTOR should yield an identical UUID object.
    UUID(const char* str) {
        uint32_t bytes_read = 0;
        while (bytes_read < VK_UUID_SIZE && str[0] != '\0' && str[1] != '\0') {
            id_[bytes_read] = 0;
            for (uint32_t i = 0; i < 2; ++i) {
                if (*str >= '0' && *str <= '9') {
                    id_[bytes_read] |= *str - '0';
                } else if (*str >= 'a' && *str <= 'f') {
                    id_[bytes_read] |= *str - 'a' + 10;
                } else if (*str == '-' && i == 0 && (bytes_read == 4 || bytes_read == 6 || bytes_read == 8 || bytes_read == 10)) {
                    str++;
                    bytes_read--;
                    break;
                } else {
                    // Unexpected character in UUID
                    assert(false);
                    str++;
                    break;
                }
                if (i == 0) {
                    id_[bytes_read] <<= 4;
                }
                str++;
            }
            bytes_read++;
        }
    }

    bool IsValid() const { return !(*this == UUID()); }

    std::string toString() const {
        char str[37];
        snprintf(str, sizeof(str), "%02x%02x%02x%02x-%02x%02x-%02x%02x-%02x%02x-%02x%02x%02x%02x%02x%02x", id_[0], id_[1], id_[2],
                 id_[3], id_[4], id_[5], id_[6], id_[7], id_[8], id_[9], id_[10], id_[11], id_[12], id_[13], id_[14], id_[15]);
        return std::string(str);
    }

    uint8_t& operator[](size_t i) { return id_[i]; }
    const uint8_t& operator[](size_t i) const { return id_[i]; }

    void CopyToArray(uint8_t (&id)[VK_UUID_SIZE]) const { memcpy(&id[0], &id_[0], VK_UUID_SIZE); }

    bool operator==(const UUID& rhs) const { return memcmp(id_, rhs.id_, VK_UUID_SIZE) == 0; }
    bool operator!=(const UUID& rhs) const { return memcmp(id_, rhs.id_, VK_UUID_SIZE) != 0; }

  private:
    uint8_t id_[VK_UUID_SIZE];

    void CopyFromArray(const uint8_t* id) { memcpy(&id_[0], id, VK_UUID_SIZE); }
};

// Pipeline cache UUID used by the emulation stack (shared between the PCC and ICD)
static const std::array<uint8_t, VK_UUID_SIZE> EmulationPipelineCacheUUID = {0x27, 0xA8, 0x32, 0x5A, 0x71, 0x38, 0x4C, 0xA3,
                                                                             0x89, 0x15, 0x68, 0x72, 0xE8, 0x61, 0x42, 0x1A};

// Custom device ID we use to indicate that the pipeline cache is compatible with all devices
#define VK_DEVICE_ID_PORTABLE 0xD19CDA7A

}  // namespace utils

template <>
struct std::hash<utils::UUID> {
    std::size_t operator()(const utils::UUID& id) const {
        std::size_t value = 0;
        for (uint32_t i = 0; i < VK_UUID_SIZE / sizeof(uint32_t); ++i) {
            value ^= std::hash<uint32_t>{}(*reinterpret_cast<const uint32_t*>(&id[i * sizeof(uint32_t)]));
        }
        return value;
    }
};
