/*
 * Copyright (c) 2024 The Khronos Group Inc.
 * Copyright (c) 2024 RasterGrid Kft.
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#pragma once

#include <vulkan/utility/vk_struct_helper.hpp>
#include "vksc_pnext_chain_helper.h"
#include "icd_shadow_stack.h"

#include <memory.h>

namespace icd {

template <typename BASE>
class ModifiablePNextChain {
  public:
    ModifiablePNextChain(ShadowStack::Frame& stack_frame, const BASE& base)
        : stack_frame_(stack_frame), next_(base.pNext), last_copied_(nullptr) {}
    ModifiablePNextChain(const ModifiablePNextChain&) = delete;
    ModifiablePNextChain(ModifiablePNextChain&&) = delete;

    template <typename T>
    T* GetNextStruct(const void* next, VkBaseInStructure** prev = nullptr) {
        auto found = vku::FindStructInPNextChain<T>(next);
        if (found != nullptr) {
            bool need_copy = false;
            const VkBaseInStructure* current = reinterpret_cast<const VkBaseInStructure*>(next_);
            VkStructureType desired_sType = vku::GetSType<T>();
            while (current) {
                // Start copying after we passed the last struct in the chain we previously copied to the shadow stack frame
                if (!need_copy && (last_copied_ == nullptr || current == last_copied_->pNext)) {
                    need_copy = true;
                }

                if (need_copy) {
                    auto alignment_and_size = vksc::GetPNextChainStructAlignmentAndSize<BASE>(current->sType);
                    if (alignment_and_size.first != 0) {
                        auto copy_dst = stack_frame_.Alloc(alignment_and_size.first, alignment_and_size.second);
                        memcpy(copy_dst, current, alignment_and_size.second);

                        if (last_copied_ == nullptr) {
                            // If this is the first structure, update our base pointer
                            next_ = copy_dst;
                        } else {
                            // Otherwise update the chaining
                            last_copied_->pNext = reinterpret_cast<const VkBaseInStructure*>(copy_dst);
                        }

                        // Update the last copied pointer
                        last_copied_ = reinterpret_cast<VkBaseInStructure*>(copy_dst);
                        current = last_copied_;

                        if (desired_sType == current->sType) {
                            return reinterpret_cast<T*>(const_cast<VkBaseInStructure*>(current));
                        }

                        if (prev != nullptr) {
                            *prev = const_cast<VkBaseInStructure*>(current);
                        }
                    } else {
                        // Ignore unknown structures (effectively removes them from the pNext chain)
                        current = current->pNext;
                        continue;
                    }
                }

                if (desired_sType == current->sType) {
                    return reinterpret_cast<T*>(const_cast<VkBaseInStructure*>(current));
                }

                if (prev != nullptr) {
                    *prev = const_cast<VkBaseInStructure*>(current);
                }

                current = current->pNext;
            }
        }
        return nullptr;
    }

    template <typename T>
    T* GetStruct() {
        return GetNextStruct<T>(next_);
    }

    const void* GetModifiedPNext() { return next_; }

    template <typename T>
    ModifiablePNextChain& RemoveStructFromChain() {
        return RemoveStructsFromChainInternal<T>(false);
    }

    template <typename T>
    ModifiablePNextChain& RemoveAllStructsFromChain() {
        return RemoveStructsFromChainInternal<T>(true);
    }

  private:
    template <typename T>
    ModifiablePNextChain& RemoveStructsFromChainInternal(bool all) {
        auto next = next_;
        auto found = vku::FindStructInPNextChain<T>(next);
        while (found) {
            VkBaseInStructure* prev = nullptr;
            auto next_found = GetNextStruct<T>(next, &prev);
            if (prev == nullptr) {
                // First one is filtered, update our base pointer
                next_ = next_found->pNext;
            } else {
                // Otherwise unchain
                prev->pNext = reinterpret_cast<const VkBaseInStructure*>(next_found->pNext);
            }

            if (!all) {
                break;
            }

            found = vku::FindStructInPNextChain<T>(next_found->pNext);
            next = next_found;
        }
        return *this;
    }

    ShadowStack::Frame& stack_frame_;
    const void* next_;

    // Tracks the last structure in the pNext chain that has been already copied to the shadow stack frame
    VkBaseInStructure* last_copied_;
};

}  // namespace icd
