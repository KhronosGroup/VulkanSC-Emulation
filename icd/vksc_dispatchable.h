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
#include <mutex>

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

    template <typename DESTROY_FN, typename... ARGS>
    void Destroy(DESTROY_FN destroy_fn, HANDLE handle, ARGS&&... args) {
        delete static_cast<OBJ*>(this);
        destroy_fn(handle, std::forward<ARGS>(args)...);
    }

    void Free() { delete static_cast<OBJ*>(this); }

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
        std::unique_lock lock(mutex_);
        auto it = children_.find(vk_handle);
        if (it == children_.end()) {
            auto obj = OBJ::CreateUnique(vk_handle, std::forward<ARGS>(args)...);
            if (obj != nullptr && obj->IsValid()) {
                it = children_.emplace(vk_handle, std::move(obj)).first;
            } else {
                return nullptr;
            }
        }
        return it->second.get();
    }

  private:
    std::mutex mutex_{};
    std::unordered_map<HANDLE, std::unique_ptr<OBJ>> children_{};
};

}  // namespace vksc
