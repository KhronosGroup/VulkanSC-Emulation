/*
 * Copyright (c) 2024 The Khronos Group Inc.
 * Copyright (c) 2024 RasterGrid Kft.
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#pragma once

#include <vulkan/vk_icd.h>

#include <unordered_map>
#include <utility>
#include <memory>

namespace vksc {

template <typename OBJ, typename HANDLE>
class Dispatchable {
  public:
    template <typename... ARGS>
    static HANDLE Create(ARGS&&... args) {
        auto obj = new OBJ(std::forward<ARGS>(args)...);
        if (obj != nullptr) {
            return obj->VkSCHandle();
        } else {
            return VK_NULL_HANDLE;
        }
    }

    template <typename... ARGS>
    static std::unique_ptr<OBJ> CreateUnique(ARGS&&... args) {
        return std::make_unique<OBJ>(std::forward<ARGS>(args)...);
    }

    static OBJ* FromHandle(HANDLE handle) {
        return static_cast<OBJ*>(
            reinterpret_cast<Dispatchable*>(reinterpret_cast<char*>(handle) - offsetof(Dispatchable, loader_data_)));
    }

    HANDLE VkSCHandle() { return reinterpret_cast<HANDLE>(&static_cast<Dispatchable*>(this)->loader_data_); }

    void Destroy() { delete static_cast<OBJ*>(this); }

  protected:
    Dispatchable() { loader_data_.loaderMagic = ICD_LOADER_MAGIC; }

  private:
    VK_LOADER_DATA loader_data_;
};

template <typename OBJ, typename HANDLE>
class DispatchableChildren {
  public:
    template <typename... ARGS>
    OBJ* GetOrAddChild(HANDLE vk_handle, ARGS&&... args) {
        auto it = children_.find(vk_handle);
        if (it == children_.end()) {
            it = children_.emplace(vk_handle, OBJ::CreateUnique(vk_handle, std::forward<ARGS>(args)...)).first;
        }
        return it->second.get();
    }

  private:
    std::unordered_map<HANDLE, std::unique_ptr<OBJ>> children_{};
};

}  // namespace vksc
