/*
 * Copyright (c) 2024 The Khronos Group Inc.
 * Copyright (c) 2024 RasterGrid Kft.
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#pragma once

#include "vk_device.h"

#include <vulkan/vulkan.h>
#include <vulkan/utility/vk_struct_helper.hpp>
#include <vector>
#include <mutex>

namespace icd {

// RAII object reservation template
template <typename T>
class ObjectReservation {
  public:
    using HandleType = typename T::HandleType;
    ObjectReservation(T& tracker, uint32_t count) : tracker_(tracker), count_(tracker.ReserveInternal(count)) {}
    ~ObjectReservation() {
        if (count_ > 0) tracker_.CancelInternal();
    }
    operator bool() const { return count_ > 0; }
    void Commit(HandleType* handles) {
        tracker_.CommitInternal(handles, count_);
        count_ = 0;
    }

  private:
    T& tracker_;
    uint32_t count_;
};

// Implicitly destroyed object tracker template
template <class T, typename HANDLE, typename RESERVATION_INFO_STRUCT, size_t RESERVATION_INFO_OFFSET,
          typename RESERVATION_INFO_TYPE>
class ImplicitlyDestroyedDeviceObjectTracker {
  public:
    using HandleType = HANDLE;

    ImplicitlyDestroyedDeviceObjectTracker(vk::Device& device, const VkDeviceCreateInfo& create_info)
        : device_(device), objects_mutex_(), objects_() {
        RESERVATION_INFO_TYPE total_reserved = 0;
        const auto* object_reservation_info = vku::FindStructInPNextChain<RESERVATION_INFO_STRUCT>(create_info.pNext);
        while (object_reservation_info != nullptr) {
            total_reserved += *reinterpret_cast<const RESERVATION_INFO_TYPE*>(
                reinterpret_cast<const char*>(object_reservation_info) + RESERVATION_INFO_OFFSET);
            object_reservation_info =
                vku::FindStructInPNextChain<VkDeviceObjectReservationCreateInfo>(object_reservation_info->pNext);
        }
        objects_.reserve(total_reserved);
    }

    ~ImplicitlyDestroyedDeviceObjectTracker() {
        for (auto obj : objects_) {
            static_cast<T*>(this)->DestroyObject(obj);
        }
    }

  protected:
    vk::Device& ParentDevice() const { return device_; }

  private:
    uint32_t ReserveInternal(uint32_t count) {
        objects_mutex_.lock();
        if (objects_.size() + count <= objects_.capacity()) {
            return count;
        } else {
            // We ran out of the requested number of objects, unlock immediately
            objects_mutex_.unlock();
            return 0;
        }
    }

    void CancelInternal() {
        // Reservation was cancelled implicitly
        objects_mutex_.unlock();
    }

    void CommitInternal(HandleType* handles, uint32_t count) {
        // At this point we should still have enough storage because we locked the container
        if (objects_.size() + count <= objects_.capacity()) {
            for (uint32_t i = 0; i < count; ++i) {
                objects_.push_back(handles[i]);
            }
            objects_mutex_.unlock();
        }
    }

    template <class TRACKER>
    friend class ObjectReservation;

    vk::Device& device_;
    std::mutex objects_mutex_;
    std::vector<HandleType> objects_;
};

// Main device object tracker class aggregating all object tracking
class DeviceObjectTracker {
  public:
    DeviceObjectTracker(vk::Device& device, const VkDeviceCreateInfo& create_info)
        : DeviceMemory_tracker_(device, create_info),
          CommandPool_tracker_(device, create_info),
          DescriptorPool_tracker_(device, create_info),
          QueryPool_tracker_(device, create_info),
          SwapchainKHR_tracker_(device, create_info) {}

#define ICD_IMPL_DESTR(object_type, reservation_struct, reservation_member, destructor)                                        \
  private:                                                                                                                     \
    class object_type##Tracker                                                                                                 \
        : public ImplicitlyDestroyedDeviceObjectTracker<object_type##Tracker, Vk##object_type, reservation_struct,             \
                                                        offsetof(reservation_struct, reservation_member),                      \
                                                        decltype(reservation_struct::reservation_member)> {                    \
      public:                                                                                                                  \
        object_type##Tracker(vk::Device& device, const VkDeviceCreateInfo& create_info)                                        \
            : ImplicitlyDestroyedDeviceObjectTracker<object_type##Tracker, Vk##object_type, reservation_struct,                \
                                                     offsetof(reservation_struct, reservation_member),                         \
                                                     decltype(reservation_struct::reservation_member)>(device, create_info) {} \
        void DestroyObject(Vk##object_type handle) { ParentDevice().destructor(handle, nullptr); }                             \
    } object_type##_tracker_;                                                                                                  \
                                                                                                                               \
  public:                                                                                                                      \
    ObjectReservation<object_type##Tracker> Reserve##object_type(uint32_t count = 1) {                                         \
        return ObjectReservation<object_type##Tracker>(object_type##_tracker_, count);                                         \
    }

    // clang-format off
    // Implicitly destroyed handles that do not have destructors in Vulkan SC
    //              handle type     reservation structure                   reservation member              destructor
    ICD_IMPL_DESTR( DeviceMemory,   VkDeviceObjectReservationCreateInfo,    deviceMemoryRequestCount,       FreeMemory);
    ICD_IMPL_DESTR( CommandPool,    VkDeviceObjectReservationCreateInfo,    commandPoolRequestCount,        DestroyCommandPool);
    ICD_IMPL_DESTR( DescriptorPool, VkDeviceObjectReservationCreateInfo,    descriptorPoolRequestCount,     DestroyDescriptorPool);
    ICD_IMPL_DESTR( QueryPool,      VkDeviceObjectReservationCreateInfo,    queryPoolRequestCount,          DestroyQueryPool);
    ICD_IMPL_DESTR( SwapchainKHR,   VkDeviceObjectReservationCreateInfo,    swapchainRequestCount,          DestroySwapchainKHR);
    // clang-format on

#undef ICD_IMPL_DESTR
};

}  // namespace icd
