/*
 * Copyright (c) 2024 The Khronos Group Inc.
 * Copyright (c) 2024 RasterGrid Kft.
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#pragma once

#include <stdlib.h>
#include <stdint.h>
#include <vector>
#include <algorithm>

namespace icd {

class ShadowStack {
  public:
    inline static const size_t kStackAlignment = 64;
    inline static const size_t kDefaultSize = 65536;

    class Frame {
      public:
        Frame(ShadowStack& stack) : stack_(stack), start_offset_(stack.high_watermark_), excess_allocations_() {}
        ~Frame() {
            for (auto excess_allocation : excess_allocations_) {
                free(excess_allocation);
            }
            stack_.high_watermark_ = start_offset_;
        }
        Frame(const Frame&) = delete;
        Frame(Frame&&) = delete;

        template <typename T>
        T* Alloc(size_t count = 1) {
            // We need to align the allocation
            const size_t aligned_alloc_offset = (stack_.high_watermark_ + alignof(T) - 1) & ~(alignof(T) - 1);
            if (aligned_alloc_offset + count * sizeof(T) <= stack_.capacity_) {
                stack_.high_watermark_ = aligned_alloc_offset + count * sizeof(T);
                return reinterpret_cast<T*>(stack_.ptr_ + aligned_alloc_offset);
            } else {
                // Fall back to regular allocation
                excess_allocations_.push_back(aligned_alloc(alignof(T), count * sizeof(T)));
                return reinterpret_cast<T*>(excess_allocations_.back());
            }
        }

      private:
        ShadowStack& stack_;
        const size_t start_offset_;
        std::vector<void*> excess_allocations_;
    };

    ShadowStack(size_t size = kDefaultSize)
        : ptr_(reinterpret_cast<uint8_t*>(aligned_alloc(kStackAlignment, size))), capacity_(size), high_watermark_(0) {}

    ~ShadowStack() { free(ptr_); }

  private:
    friend class Frame;

    uint8_t* const ptr_;
    const size_t capacity_;
    size_t high_watermark_;
};

}  // namespace icd
