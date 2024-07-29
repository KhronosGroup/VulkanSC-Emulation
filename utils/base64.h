/*
 * Copyright (c) 2024 The Khronos Group Inc.
 * Copyright (c) 2024 RasterGrid Kft.
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#pragma once

#include <stdint.h>
#include <vector>
#include <array>
#include <string_view>
#include <optional>

namespace utils {

inline std::optional<std::vector<uint8_t>> decode_base64(const std::string_view& str) {
    static const std::string base64_alphabet = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/";
    auto init_base64_lookup_table = [&] {
        std::array<uint8_t, UINT8_MAX + 1> lookup_table{};
        for (size_t i = 0; i <= UINT8_MAX; ++i) {
            lookup_table[i] = UINT8_MAX;
        }
        for (size_t i = 0; i < base64_alphabet.size(); ++i) {
            lookup_table[base64_alphabet[i]] = static_cast<uint8_t>(i);
        }
        return lookup_table;
    };
    static const std::array<uint8_t, UINT8_MAX + 1> base64_lookup_table = init_base64_lookup_table();

    constexpr uint32_t bits_in_base64 = 6;
    constexpr uint32_t bits_in_byte = 8;

    std::vector<uint8_t> result{};
    result.reserve((str.size() * bits_in_base64 + bits_in_byte - 1) / bits_in_byte);
    uint32_t current_word = 0;
    uint32_t current_bits = 0;
    for (auto ch : str) {
        if (ch == '=') {
            // End of data padding
            break;
        } else if (base64_lookup_table[ch] == UINT8_MAX) {
            // Invalid character
            return std::optional<std::vector<uint8_t>>();
        }
        current_word = (current_word << bits_in_base64) + base64_lookup_table[ch];
        current_bits += bits_in_base64;
        if (current_bits >= bits_in_byte) {
            result.push_back(static_cast<uint8_t>((current_word >> (current_bits - bits_in_byte)) & ((1 << bits_in_byte) - 1)));
            current_bits -= bits_in_byte;
        }
    }
    return result;
}

}  // namespace utils
