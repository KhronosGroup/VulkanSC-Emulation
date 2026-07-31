/*
 * Copyright (c) 2024-2026 The Khronos Group Inc.
 * Copyright (c) 2024-2026 RasterGrid Kft.
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#pragma once

#include "vk_device.h"
#include "icd_log.h"
#include "icd_fault_handler.h"

#include <vulkan/vulkan.h>
#include <vulkan/utility/vk_struct_helper.hpp>
#include <algorithm>
#include <vector>
#include <mutex>
#include <atomic>
#include <memory>

namespace icd {

// Utility template to track state related to a particular object type
template <typename T, typename HandleType>
class ObjectStateTracker {
  public:
    template <typename... ARGS>
    void Add(HandleType handle, ARGS&&... args) {
        std::unique_lock lock(mutex_);
        object_map_[handle] = std::make_unique<T>(handle, std::forward<ARGS>(args)...);
    }

    T* Get(HandleType handle) {
        std::unique_lock lock(mutex_);
        auto it = object_map_.find(handle);
        if (it != object_map_.end()) {
            return it->second.get();
        } else {
            return nullptr;
        }
    }

    void Remove(HandleType handle) {
        std::unique_lock lock(mutex_);
        object_map_.erase(handle);
    }

  private:
    std::mutex mutex_{};
    std::unordered_map<HandleType, std::unique_ptr<T>> object_map_{};
};

// Placeholder handle type for unused object handles
VK_DEFINE_NON_DISPATCHABLE_HANDLE(UnusedHandleType);

// RAII object reservation template
template <typename T, typename HandleType>
class ObjectReservation {
  public:
    ObjectReservation(T& tracker, uint32_t count) : tracker_(tracker), count_(count > 0 ? tracker.ReserveInternal(count) : count) {}
    ~ObjectReservation() {
        if (count_ > 0) tracker_.CancelInternal(count_);
    }

    operator bool() const { return count_ > 0; }

    uint32_t Count() const { return count_; }

    void Commit(HandleType* handles) {
        if (count_ > 0) {
            tracker_.CommitInternal(handles, count_);
        }
        count_ = 0;
    }

  private:
    T& tracker_;
    uint32_t count_;
};

// General object limit template
template <class T, typename RESERVATION_INFO_STRUCT, size_t RESERVATION_INFO_OFFSET, typename RESERVATION_INFO_TYPE>
class GeneralObjectLimitTracker {
  public:
    GeneralObjectLimitTracker(vk::Device& device, const VkDeviceCreateInfo& create_info) : reserved_limit_(0) {
        const auto* object_reservation_info = vku::FindStructInPNextChain<RESERVATION_INFO_STRUCT>(create_info.pNext);
        while (object_reservation_info != nullptr) {
            reserved_limit_ =
                std::max(reserved_limit_, *reinterpret_cast<const RESERVATION_INFO_TYPE*>(
                                              reinterpret_cast<const char*>(object_reservation_info) + RESERVATION_INFO_OFFSET));
            object_reservation_info = vku::FindStructInPNextChain<RESERVATION_INFO_STRUCT>(object_reservation_info->pNext);
        }
    }

    RESERVATION_INFO_TYPE Limit() const { return reserved_limit_; }

  private:
    RESERVATION_INFO_TYPE reserved_limit_;
};

// General object count tracker template
template <class T, typename HANDLE, typename RESERVATION_INFO_STRUCT, size_t RESERVATION_INFO_OFFSET,
          typename RESERVATION_INFO_TYPE>
class GeneralObjectCountTracker {
  public:
    using HandleType = HANDLE;

    GeneralObjectCountTracker(vk::Device& device, const VkDeviceCreateInfo& create_info) : reserved_count_(0), allocated_count_(0) {
        const auto* object_reservation_info = vku::FindStructInPNextChain<RESERVATION_INFO_STRUCT>(create_info.pNext);
        while (object_reservation_info != nullptr) {
            reserved_count_ += *reinterpret_cast<const RESERVATION_INFO_TYPE*>(
                reinterpret_cast<const char*>(object_reservation_info) + RESERVATION_INFO_OFFSET);
            object_reservation_info = vku::FindStructInPNextChain<RESERVATION_INFO_STRUCT>(object_reservation_info->pNext);
        }
    }

    bool Free(const HandleType* handles, uint32_t count) {
        uint32_t free_count = 0;
        if (handles == nullptr) {
            // No actual handles are used so use the input
            free_count = count;
        } else {
            for (uint32_t i = 0; i < count; ++i) {
                if (handles[i] != VK_NULL_HANDLE) {
                    ++free_count;
                }
            }
        }
        return allocated_count_.fetch_sub(free_count) >= count;
    }

  private:
    uint32_t ReserveInternal(uint32_t count) {
        if (allocated_count_.fetch_add(count) + count <= reserved_count_) {
            return count;
        } else {
            // We ran out of the requested number of objects
            allocated_count_.fetch_sub(count);
            return 0;
        }
    }

    void CancelInternal(uint32_t count) {
        // Rservation was cancelled implicitly
        allocated_count_.fetch_sub(count);
    }

    void CommitInternal(HandleType* handles, uint32_t count) {
        // Nothing to do if this is a case where handles are not actually used
        if (handles == nullptr) {
            return;
        }

        // Free up capacity where handles became VK_NULL_HANDLE
        uint32_t null_handle_count = 0;
        for (uint32_t i = 0; i < count; ++i) {
            if (handles[i] == VK_NULL_HANDLE) {
                null_handle_count++;
            }
        }
        allocated_count_.fetch_sub(null_handle_count);
    }

    template <class TRACKER, typename HANDLETYPE>
    friend class ObjectReservation;

    RESERVATION_INFO_TYPE reserved_count_;
    std::atomic<RESERVATION_INFO_TYPE> allocated_count_;
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

    void CancelInternal(uint32_t count) {
        // Reservation was cancelled implicitly
        objects_mutex_.unlock();
    }

    void CommitInternal(HandleType* handles, uint32_t count) {
        // At this point we should still have enough storage because we locked the container
        if (objects_.size() + count <= objects_.capacity()) {
            for (uint32_t i = 0; i < count; ++i) {
                if (handles[i] != VK_NULL_HANDLE) {
                    objects_.push_back(handles[i]);
                }
            }
            objects_mutex_.unlock();
        }
    }

    template <class TRACKER, typename HANDLETYPE>
    friend class ObjectReservation;

    vk::Device& device_;
    std::mutex objects_mutex_;
    std::vector<HandleType> objects_;
};

// Main device object tracker class aggregating all object tracking
class DeviceObjectTracker {
  public:
    DeviceObjectTracker(vk::Device& device, icd::Logger& logger, icd::FaultHandler& fault_handler,
                        const VkDeviceCreateInfo& create_info)
        : logger_(logger),
          fault_handler_(fault_handler),
          Semaphore_tracker_(device, create_info),
          CommandBuffer_tracker_(device, create_info),
          Fence_tracker_(device, create_info),
          DeviceMemory_tracker_(device, create_info),
          Buffer_tracker_(device, create_info),
          Image_tracker_(device, create_info),
          Event_tracker_(device, create_info),
          QueryPool_tracker_(device, create_info),
          BufferView_tracker_(device, create_info),
          ImageView_tracker_(device, create_info),
          LayeredImageView_tracker_(device, create_info),
          PipelineCache_tracker_(device, create_info),
          PipelineLayout_tracker_(device, create_info),
          RenderPass_tracker_(device, create_info),
          GraphicsPipeline_tracker_(device, create_info),
          ComputePipeline_tracker_(device, create_info),
          DescriptorSetLayout_tracker_(device, create_info),
          Sampler_tracker_(device, create_info),
          DescriptorPool_tracker_(device, create_info),
          DescriptorSet_tracker_(device, create_info),
          Framebuffer_tracker_(device, create_info),
          CommandPool_tracker_(device, create_info),
          SamplerYcbcrConversion_tracker_(device, create_info),
          SwapchainKHR_tracker_(device, create_info),
          SubpassDescription_tracker_(device, create_info),
          AttachmentDescription_tracker_(device, create_info),
          DescriptorSetLayoutBinding_tracker_(device, create_info),
          DescriptorSetLayoutBindingLimit_tracker_(device, create_info),
          MaxImageViewMipLevels_tracker_(device, create_info),
          MaxImageViewArrayLayers_tracker_(device, create_info),
          MaxLayeredImageViewMipLevels_tracker_(device, create_info),
          MaxOcclusionQueriesPerPool_tracker_(device, create_info),
          MaxPipelineStatisticsQueriesPerPool_tracker_(device, create_info),
          MaxTimestampQueriesPerPool_tracker_(device, create_info),
          MaxImmutableSamplersPerDescriptorSetLayout_tracker_(device, create_info),
          MaxPerformanceQueriesPerPool_tracker_(device, create_info) {}

  private:
    icd::Logger& logger_;
    icd::FaultHandler& fault_handler_;

#define ICD_GEN_LIMIT(limit_type, reservation_struct, reservation_member)                                                          \
  private:                                                                                                                         \
    class limit_type##Tracker : public GeneralObjectLimitTracker<limit_type##Tracker, reservation_struct,                          \
                                                                 offsetof(reservation_struct, reservation_member),                 \
                                                                 decltype(reservation_struct::reservation_member)> {               \
      public:                                                                                                                      \
        limit_type##Tracker(vk::Device& device, const VkDeviceCreateInfo& create_info)                                             \
            : GeneralObjectLimitTracker<limit_type##Tracker, reservation_struct, offsetof(reservation_struct, reservation_member), \
                                        decltype(reservation_struct::reservation_member)>(device, create_info) {}                  \
    } limit_type##_tracker_;                                                                                                       \
                                                                                                                                   \
  public:                                                                                                                          \
    auto limit_type() const { return limit_type##_tracker_.Limit(); }

#define ICD_GEN_COUNT_EX(object_type, handle_type, reservation_struct, reservation_member)                               \
  private:                                                                                                               \
    class object_type##Tracker : public GeneralObjectCountTracker<object_type##Tracker, handle_type, reservation_struct, \
                                                                  offsetof(reservation_struct, reservation_member),      \
                                                                  decltype(reservation_struct::reservation_member)> {    \
      public:                                                                                                            \
        object_type##Tracker(vk::Device& device, const VkDeviceCreateInfo& create_info)                                  \
            : GeneralObjectCountTracker<object_type##Tracker, handle_type, reservation_struct,                           \
                                        offsetof(reservation_struct, reservation_member),                                \
                                        decltype(reservation_struct::reservation_member)>(device, create_info) {}        \
    } object_type##_tracker_;                                                                                            \
                                                                                                                         \
  public:                                                                                                                \
    ObjectReservation<object_type##Tracker, handle_type> Reserve##object_type(uint32_t count = 1) {                      \
        return ObjectReservation<object_type##Tracker, handle_type>(object_type##_tracker_, count);                      \
    }                                                                                                                    \
    void Free##object_type(uint32_t count, const handle_type* handles) {                                                 \
        if (!object_type##_tracker_.Free(handles, count)) {                                                              \
            fault_handler_.ReportFault(VK_FAULT_LEVEL_CRITICAL, VK_FAULT_TYPE_INVALID_API_USAGE);                        \
            logger_.Fatal("VKSC-EMU-ObjectTracker-Invalid" #object_type "Count",                                         \
                          "Object tracker encountered an attempt to free more " #object_type " objects than remaining"); \
        }                                                                                                                \
    }

#define ICD_GEN_COUNT(object_type, reservation_struct, reservation_member) \
    ICD_GEN_COUNT_EX(object_type, UnusedHandleType, reservation_struct, reservation_member)

#define ICD_GEN_OBJ(object_type, handle_type, reservation_struct, reservation_member) \
    ICD_GEN_COUNT_EX(object_type, handle_type, reservation_struct, reservation_member)

#define ICD_IMPL_DESTR(object_type, handle_type, reservation_struct, reservation_member, destructor)                           \
  private:                                                                                                                     \
    class object_type##Tracker                                                                                                 \
        : public ImplicitlyDestroyedDeviceObjectTracker<object_type##Tracker, handle_type, reservation_struct,                 \
                                                        offsetof(reservation_struct, reservation_member),                      \
                                                        decltype(reservation_struct::reservation_member)> {                    \
      public:                                                                                                                  \
        object_type##Tracker(vk::Device& device, const VkDeviceCreateInfo& create_info)                                        \
            : ImplicitlyDestroyedDeviceObjectTracker<object_type##Tracker, handle_type, reservation_struct,                    \
                                                     offsetof(reservation_struct, reservation_member),                         \
                                                     decltype(reservation_struct::reservation_member)>(device, create_info) {} \
        void DestroyObject(handle_type handle) { ParentDevice().destructor(handle, nullptr); }                                 \
    } object_type##_tracker_;                                                                                                  \
                                                                                                                               \
  public:                                                                                                                      \
    ObjectReservation<object_type##Tracker, handle_type> Reserve##object_type(uint32_t count = 1) {                            \
        return ObjectReservation<object_type##Tracker, handle_type>(object_type##_tracker_, count);                            \
    }

    // clang-format off
    //              object type                 handle type                 reservation structure                           reservation member                      destructor
    ICD_GEN_OBJ(    Semaphore,                  VkSemaphore,                VkDeviceObjectReservationCreateInfo,            semaphoreRequestCount);
    ICD_GEN_OBJ(    CommandBuffer,              VkCommandBuffer,            VkDeviceObjectReservationCreateInfo,            commandBufferRequestCount);
    ICD_GEN_OBJ(    Fence,                      VkFence,                    VkDeviceObjectReservationCreateInfo,            fenceRequestCount);
    ICD_IMPL_DESTR( DeviceMemory,               VkDeviceMemory,             VkDeviceObjectReservationCreateInfo,            deviceMemoryRequestCount,               FreeMemory);
    ICD_GEN_OBJ(    Buffer,                     VkBuffer,                   VkDeviceObjectReservationCreateInfo,            bufferRequestCount);
    ICD_GEN_OBJ(    Image,                      VkImage,                    VkDeviceObjectReservationCreateInfo,            imageRequestCount);
    ICD_GEN_OBJ(    Event,                      VkEvent,                    VkDeviceObjectReservationCreateInfo,            eventRequestCount);
    ICD_IMPL_DESTR( QueryPool,                  VkQueryPool,                VkDeviceObjectReservationCreateInfo,            queryPoolRequestCount,                  DestroyQueryPool);
    ICD_GEN_OBJ(    BufferView,                 VkBufferView,               VkDeviceObjectReservationCreateInfo,            bufferViewRequestCount);
    ICD_GEN_OBJ(    ImageView,                  VkImageView,                VkDeviceObjectReservationCreateInfo,            imageViewRequestCount);
    ICD_GEN_OBJ(    LayeredImageView,           VkImageView,                VkDeviceObjectReservationCreateInfo,            layeredImageViewRequestCount);
    ICD_GEN_OBJ(    PipelineCache,              VkPipelineCache,            VkDeviceObjectReservationCreateInfo,            pipelineCacheRequestCount);
    ICD_GEN_OBJ(    PipelineLayout,             VkPipelineLayout,           VkDeviceObjectReservationCreateInfo,            pipelineLayoutRequestCount);
    ICD_GEN_OBJ(    RenderPass,                 VkRenderPass,               VkDeviceObjectReservationCreateInfo,            renderPassRequestCount);
    ICD_GEN_OBJ(    GraphicsPipeline,           VkPipeline,                 VkDeviceObjectReservationCreateInfo,            graphicsPipelineRequestCount);
    ICD_GEN_OBJ(    ComputePipeline,            VkPipeline,                 VkDeviceObjectReservationCreateInfo,            computePipelineRequestCount);
    ICD_GEN_OBJ(    DescriptorSetLayout,        VkDescriptorSetLayout,      VkDeviceObjectReservationCreateInfo,            descriptorSetLayoutRequestCount);
    ICD_GEN_OBJ(    Sampler,                    VkSampler,                  VkDeviceObjectReservationCreateInfo,            samplerRequestCount);
    ICD_IMPL_DESTR( DescriptorPool,             VkDescriptorPool,           VkDeviceObjectReservationCreateInfo,            descriptorPoolRequestCount,             DestroyDescriptorPool);
    ICD_GEN_OBJ(    DescriptorSet,              VkDescriptorSet,            VkDeviceObjectReservationCreateInfo,            descriptorSetRequestCount);
    ICD_GEN_OBJ(    Framebuffer,                VkFramebuffer,              VkDeviceObjectReservationCreateInfo,            framebufferRequestCount);
    ICD_IMPL_DESTR( CommandPool,                VkCommandPool,              VkDeviceObjectReservationCreateInfo,            commandPoolRequestCount,                DestroyCommandPool);
    ICD_GEN_OBJ(    SamplerYcbcrConversion,     VkSamplerYcbcrConversion,   VkDeviceObjectReservationCreateInfo,            samplerYcbcrConversionRequestCount);
    ICD_IMPL_DESTR( SwapchainKHR,               VkSwapchainKHR,             VkDeviceObjectReservationCreateInfo,            swapchainRequestCount,                  DestroySwapchainKHR);
    ICD_GEN_COUNT(  SubpassDescription,                                     VkDeviceObjectReservationCreateInfo,            subpassDescriptionRequestCount);
    ICD_GEN_COUNT(  AttachmentDescription,                                  VkDeviceObjectReservationCreateInfo,            attachmentDescriptionRequestCount);
    ICD_GEN_COUNT(  DescriptorSetLayoutBinding,                             VkDeviceObjectReservationCreateInfo,            descriptorSetLayoutBindingRequestCount);
    ICD_GEN_LIMIT(  DescriptorSetLayoutBindingLimit,                        VkDeviceObjectReservationCreateInfo,            descriptorSetLayoutBindingLimit);
    ICD_GEN_LIMIT(  MaxImageViewMipLevels,                                  VkDeviceObjectReservationCreateInfo,            maxImageViewMipLevels);
    ICD_GEN_LIMIT(  MaxImageViewArrayLayers,                                VkDeviceObjectReservationCreateInfo,            maxImageViewArrayLayers);
    ICD_GEN_LIMIT(  MaxLayeredImageViewMipLevels,                           VkDeviceObjectReservationCreateInfo,            maxLayeredImageViewMipLevels);
    ICD_GEN_LIMIT(  MaxOcclusionQueriesPerPool,                             VkDeviceObjectReservationCreateInfo,            maxOcclusionQueriesPerPool);
    ICD_GEN_LIMIT(  MaxPipelineStatisticsQueriesPerPool,                    VkDeviceObjectReservationCreateInfo,            maxPipelineStatisticsQueriesPerPool);
    ICD_GEN_LIMIT(  MaxTimestampQueriesPerPool,                             VkDeviceObjectReservationCreateInfo,            maxTimestampQueriesPerPool);
    ICD_GEN_LIMIT(  MaxImmutableSamplersPerDescriptorSetLayout,             VkDeviceObjectReservationCreateInfo,            maxImmutableSamplersPerDescriptorSetLayout);
    ICD_GEN_LIMIT(  MaxPerformanceQueriesPerPool,                           VkPerformanceQueryReservationInfoKHR,           maxPerformanceQueriesPerPool);
    // clang-format on

#undef ICD_IMPL_DESTR
#undef ICD_GEN_OBJ
#undef ICD_GEN_COUNT
#undef ICD_GEN_COUNT_EX
#undef ICD_GEN_LIMIT
};

}  // namespace icd
