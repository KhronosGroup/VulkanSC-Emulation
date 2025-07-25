/*
 * Copyright (c) 2024-2025 The Khronos Group Inc.
 * Copyright (c) 2024-2025 RasterGrid Kft.
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
    class Frame {
      public:
        Frame() : stack_(ThreadLocalStack()), start_offset_(stack_.high_watermark_), excess_allocations_() {}
        ~Frame() {
            for (auto excess_allocation : excess_allocations_) {
#ifdef _WIN32
                _aligned_free(excess_allocation);
#else
                free(excess_allocation);
#endif
            }
            stack_.high_watermark_ = start_offset_;
        }
        Frame(const Frame&) = delete;
        Frame(Frame&&) = delete;

        void* Alloc(size_t alignment, size_t size) {
            // We need to align the allocation
            const size_t aligned_alloc_offset = (stack_.high_watermark_ + alignment - 1) & ~(alignment - 1);
            if (aligned_alloc_offset + size <= kStackSize) {
                stack_.high_watermark_ = aligned_alloc_offset + size;
                return stack_.data_ + aligned_alloc_offset;
            } else {
                // Fall back to regular allocation
#ifdef _WIN32
                excess_allocations_.push_back(_aligned_malloc(size, alignment));
#else
                excess_allocations_.push_back(aligned_alloc(alignment, size));
#endif
                return excess_allocations_.back();
            }
        }

        template <typename T>
        T* Alloc(size_t count = 1) {
            return reinterpret_cast<T*>(Alloc(alignof(T), count * sizeof(T)));
        }

      private:
        ShadowStack& stack_;
        const size_t start_offset_;
        std::vector<void*> excess_allocations_;
    };

  private:
    friend class Frame;

    inline static constexpr size_t kStackAlignment = 64;
    inline static constexpr size_t kStackSize = 256 * 1024;

    ShadowStack() : data_(), high_watermark_(0) {}
    ShadowStack(const ShadowStack&) = delete;
    ShadowStack(ShadowStack&&) = delete;

    static ShadowStack& ThreadLocalStack();

    alignas(kStackAlignment) uint8_t data_[kStackSize];
    size_t high_watermark_;
};

}  // namespace icd
