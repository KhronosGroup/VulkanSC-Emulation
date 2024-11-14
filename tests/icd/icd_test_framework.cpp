/*
 * Copyright (c) 2024 The Khronos Group Inc.
 * Copyright (c) 2024 RasterGrid Kft.
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#include "icd_test_framework.h"

#include <string.h>
#include <string_view>
#include <array>

// Shorthand to throw GTest exception, causing the test to fail with user-provided message stream fragment
#define FAIL_TEST_IF(pred, msg_stream)                                                                         \
    do {                                                                                                       \
        if (pred) {                                                                                            \
            GTEST_MESSAGE_AT_(__FILE__, __LINE__, "", ::testing::TestPartResult::kFatalFailure) << msg_stream; \
            throw testing::AssertionException(                                                                 \
                testing::TestPartResult(testing::TestPartResult::kFatalFailure, __FILE__, __LINE__, ""));      \
        }                                                                                                      \
    } while (0)

static void InitDefaultMockHandlers(IcdTest *test_case = nullptr) {
    static VkMockObject<VkInstance> mock_instance{};
    static VkMockObject<VkPhysicalDevice> mock_physical_device{};
    static VkMockObject<VkDevice> mock_device{};
    static VkMockObject<VkQueue> mock_queue{};
    static VkMockObject<VkCommandPool> mock_command_pool{};
    static std::vector<VkMockObject<VkCommandBuffer>> mock_command_buffers{};
    static VkMockObject<VkBuffer> mock_buffer{};
    static VkDeviceSize mock_buffer_size = 0;
    static VkMockObject<VkDeviceMemory> mock_memory{};

    vkmock::Reset();

    vkmock::GetInstanceProcAddr = [&](auto, auto pName) { return vkmock::GetProcAddr(pName); };
    vkmock::GetDeviceProcAddr = [&](auto, auto pName) { return vkmock::GetProcAddr(pName); };
    vkmock::EnumerateInstanceVersion = [&](auto pApiVersion) {
        *pApiVersion = VK_API_VERSION_1_2;
        return VK_SUCCESS;
    };
    vkmock::EnumerateInstanceExtensionProperties = [&](auto, auto pPropertyCount, auto) {
        *pPropertyCount = 0;
        return VK_SUCCESS;
    };
    vkmock::EnumerateDeviceExtensionProperties = [&](auto, auto, auto pPropertyCount, auto) {
        *pPropertyCount = 0;
        return VK_SUCCESS;
    };
    vkmock::EnumeratePhysicalDevices = [&](auto, auto pPhysicalDeviceCount, auto pPhysicalDevices) {
        if (pPhysicalDevices != nullptr) {
            if (*pPhysicalDeviceCount > 0) {
                *pPhysicalDeviceCount = 1;
                *pPhysicalDevices = mock_physical_device;
                return VK_SUCCESS;
            } else {
                return VK_INCOMPLETE;
            }
        } else {
            *pPhysicalDeviceCount = 1;
            return VK_SUCCESS;
        }
    };
    vkmock::EnumeratePhysicalDeviceGroups = [&](auto, auto pPhysicalDeviceGroupCount, auto) {
        *pPhysicalDeviceGroupCount = 0;
        return VK_SUCCESS;
    };
    vkmock::GetPhysicalDeviceProperties = [&](auto, auto pProperties) { pProperties->apiVersion = VK_API_VERSION_1_2; };
    vkmock::GetPhysicalDeviceProperties2 = [&](auto physicalDevice, auto pProperties) {
        vkmock::GetPhysicalDeviceProperties(physicalDevice, &pProperties->properties);
    };
    vkmock::GetPhysicalDeviceFeatures = [&](auto, auto pFeatures) {};
    vkmock::GetPhysicalDeviceFeatures2 = [&](auto physicalDevice, auto pFeatures) {
        vkmock::GetPhysicalDeviceFeatures(physicalDevice, &pFeatures->features);
        auto vulkan_memory_model_features =
            vku::FindStructInPNextChain<VkPhysicalDeviceVulkanMemoryModelFeatures>(pFeatures->pNext);
        if (vulkan_memory_model_features) {
            vulkan_memory_model_features->vulkanMemoryModel = VK_TRUE;
        }
    };
    vkmock::GetPhysicalDeviceQueueFamilyProperties = [&](auto, auto pQueueFamilyPropertyCount, auto pQueueFamilyProperties) {
        if (pQueueFamilyProperties == nullptr) {
            *pQueueFamilyPropertyCount = 1;
        } else {
            pQueueFamilyProperties[0] = {VK_QUEUE_TRANSFER_BIT | VK_QUEUE_COMPUTE_BIT | VK_QUEUE_GRAPHICS_BIT, 1, 0, {0, 0, 0}};
        }
    };
    vkmock::GetPhysicalDeviceQueueFamilyProperties2 = [&](auto, auto pQueueFamilyPropertyCount, auto pQueueFamilyProperties) {
        if (pQueueFamilyProperties == nullptr) {
            *pQueueFamilyPropertyCount = 1;
        } else {
            vkmock::GetPhysicalDeviceQueueFamilyProperties(mock_physical_device.handle(), pQueueFamilyPropertyCount,
                                                           &pQueueFamilyProperties->queueFamilyProperties);
        }
    };
    vkmock::GetPhysicalDeviceMemoryProperties2 = [&, mem_props = VkPhysicalDeviceMemoryProperties{}](
                                                     auto, auto pMemoryProperties) mutable {
        mem_props.memoryTypeCount = 1;
        mem_props.memoryTypes[0] = {VK_MEMORY_PROPERTY_DEVICE_LOCAL_BIT | VK_MEMORY_PROPERTY_HOST_VISIBLE_BIT |
                                        VK_MEMORY_PROPERTY_HOST_COHERENT_BIT | VK_MEMORY_PROPERTY_HOST_CACHED_BIT,
                                    0};
        mem_props.memoryHeapCount = 1;
        mem_props.memoryHeaps[0] = {1'048'576, VK_MEMORY_HEAP_DEVICE_LOCAL_BIT};
        pMemoryProperties->memoryProperties = mem_props;
    };
    vkmock::GetDeviceQueue = [&](auto, auto, auto, auto pQueue) { *pQueue = mock_queue; };
    vkmock::GetDeviceQueue2 = [&](auto, auto, auto pQueue) { *pQueue = mock_queue; };
    vkmock::GetBufferMemoryRequirements = [&](auto, auto, auto pMemoryRequirements) {
        pMemoryRequirements->size = mock_buffer_size;
        pMemoryRequirements->alignment = 4;
        pMemoryRequirements->memoryTypeBits = 1;  // Buffers all need the first (and only) mem type
    };
    vkmock::GetBufferMemoryRequirements2 = [&](auto device, auto pInfo, auto pMemoryRequirements) {
        vkmock::GetBufferMemoryRequirements(device, pInfo->buffer, &pMemoryRequirements->memoryRequirements);
    };
    vkmock::CreateBuffer = [&](auto, auto, auto, auto pBuffer) {
        *pBuffer = mock_buffer;
        return VK_SUCCESS;
    };
    vkmock::CreateCommandPool = [&](auto, const auto pCreateInfo, const auto, auto pCommandPool) {
        *pCommandPool = mock_command_pool;
        return VK_SUCCESS;
    };
    vkmock::AllocateCommandBuffers = [&](auto, auto pCreateInfo, auto pCommandBuffers) {
        mock_command_buffers.resize(pCreateInfo->commandBufferCount);
        for (size_t i = 0; i < mock_command_buffers.size(); ++i) {
            pCommandBuffers[i] = mock_command_buffers[i];
        }
        return VK_SUCCESS;
    };
    vkmock::AllocateMemory = [&, mem = VkDeviceMemory{}](auto, auto, auto, auto pMemory) {
        *pMemory = mem;
        return VK_SUCCESS;
    };
    vkmock::FreeMemory = [&](auto, auto, auto) {};
    vkmock::DestroyBuffer = [&](auto, auto, auto) {};
    vkmock::FreeCommandBuffers = [&](auto, auto, auto, auto) {};
    vkmock::BindBufferMemory2 = [&](auto, auto, auto) { return VK_SUCCESS; };
    vkmock::BeginCommandBuffer = [&](auto, auto) { return VK_SUCCESS; };
    vkmock::EndCommandBuffer = [&](auto) { return VK_SUCCESS; };
    vkmock::DestroyCommandPool = [&](auto, auto, auto) {};
    vkmock::CreateInstance = [&](auto, auto, auto pInstance) {
        *pInstance = mock_instance;
        return VK_SUCCESS;
    };
    vkmock::DestroyInstance = [&](auto, auto) {};
    vkmock::CreateDevice = [&](auto, auto, auto, auto pDevice) {
        *pDevice = mock_device;
        return VK_SUCCESS;
    };
    vkmock::DestroyDevice = [&](auto, auto) {};
}

void Framework::SetUp() {
    auto vulkan_lib_path = getenv("VKSC_EMU_VULKAN_LIB_PATH");
    auto vulkansc_lib_path = getenv("VKSC_EMU_VULKANSC_LIB_PATH");
    auto vkmock_icd_path = getenv("VKSC_EMU_VKMOCK_ICD_PATH");

    // Load and initialize mock ICD
    if (vkmock_icd_path != nullptr) {
        vkmock::LoadLib(vkmock_icd_path);
        InitDefaultMockHandlers();
    } else {
        printf("ERROR: VKSC_EMU_VKMOCK_ICD_PATH should be set to the path of vkmock_icd.\n");
        exit(1);
    }

    if (!with_vulkan_loader_ && (vulkan_lib_path == nullptr || strcmp(vulkan_lib_path, vkmock_icd_path) != 0)) {
        printf("ERROR: VKSC_EMU_VULKAN_LIB_PATH should be set to the path of vkmock_icd if not using the Vulkan loader.\n");
        exit(1);
    }

    // Load Vulkan SC API
    if (with_vulkansc_loader_) {
#if defined(_WIN32)
        vksc::LoadLib("vulkansc-1.dll");
#elif defined(__APPLE__)
        vksc::LoadLib("libvulkansc.dylib");
#else
        vksc::LoadLib("libvulkansc.so");
#endif
    } else {
        if (vulkansc_lib_path == nullptr) {
            printf("ERROR: VKSC_EMU_VULKANSC_LIB_PATH should be set to the path of vksconv if not using the Vulkan SC loader.\n");
            exit(1);
        }
        vksc::LoadLib(vulkansc_lib_path);
    }
}

void Framework::TearDown() {
    vksc::UnloadLib();
    vkmock::UnloadLib();
}

static bool GetCLIFlag(int *argc, char *argv[], const char *flag, bool remove = true) {
    for (int i = 0; i < *argc; ++i) {
        if (strcmp(argv[i], flag) == 0) {
            if (remove) {
                *argc -= 1;
                for (int j = i; j < *argc; ++j) {
                    argv[j] = argv[j + 1];
                }
            }
            return true;
        }
    }
    return false;
}

static bool GetEnvironmentFlag(const char *name) {
    auto value = getenv(name);
    return !(value == nullptr || strcmp(value, "false") == 0 || strcmp(value, "FALSE") == 0 || strcmp(value, "0") == 0 ||
             strcmp(value, "") == 0);
}

void Framework::InitArgs(int *argc, char *argv[]) {
    if (GetCLIFlag(argc, argv, "--help") || GetCLIFlag(argc, argv, "-h")) {
        printf("\nOther options:\n");
        printf(
            "\t--with-vulkan-loader\n"
            "\t\tRun with Vulkan loader in the stack. If not set, vkmock will be loaded directly.\n");
        printf(
            "\t--with-vulkansc-loader\n"
            "\t\tRun with Vulkan SC loader in the stack. If not set, vksconvk will be loaded directly.\n");
        exit(0);
    }
    if (GetCLIFlag(argc, argv, "--with-vulkan-loader") || GetEnvironmentFlag("VKSC_EMU_TEST_WITH_VULKAN_LOADER")) {
        with_vulkan_loader_ = true;
    }
    if (GetCLIFlag(argc, argv, "--with-vulkansc-loader") || GetEnvironmentFlag("VKSC_EMU_TEST_WITH_VULKANSC_LOADER")) {
        with_vulkansc_loader_ = true;
    }

    if (*argc > 1) {
        printf("\nUnrecognized option: %s\n", argv[1]);
        printf("\nUse --help or -h for option list.\n");
        exit(0);
    }
}

IcdTest::IcdTest() {
    // Always re-init default mock handlers at the beginning of each test
    InitDefaultMockHandlers(this);

    // Initialize default object reservation info
    static auto vksc10_features = vku::InitStruct<VkPhysicalDeviceVulkanSC10Features>();
    object_reservation_ = vku::InitStruct<VkDeviceObjectReservationCreateInfo>(&vksc10_features);

    // Use some reasonable upper bounds for object request counts
    object_reservation_.semaphoreRequestCount = 65536;
    object_reservation_.commandBufferRequestCount = 4096;
    object_reservation_.fenceRequestCount = 65536;
    object_reservation_.deviceMemoryRequestCount = 1024;
    object_reservation_.bufferRequestCount = 512;
    object_reservation_.imageRequestCount = 256;
    object_reservation_.eventRequestCount = 4096;
    object_reservation_.queryPoolRequestCount = 256;
    object_reservation_.bufferViewRequestCount = 1024;
    object_reservation_.imageViewRequestCount = 1024;
    object_reservation_.layeredImageViewRequestCount = 1024;
    object_reservation_.pipelineCacheRequestCount = 64;
    object_reservation_.pipelineLayoutRequestCount = 64;
    object_reservation_.renderPassRequestCount = 64;
    object_reservation_.graphicsPipelineRequestCount = 64;
    object_reservation_.computePipelineRequestCount = 64;
    object_reservation_.descriptorSetLayoutRequestCount = 256;
    object_reservation_.samplerRequestCount = 256;
    object_reservation_.descriptorPoolRequestCount = 64;
    object_reservation_.descriptorSetRequestCount = 1024;
    object_reservation_.framebufferRequestCount = 64;
    object_reservation_.commandPoolRequestCount = 64;
    object_reservation_.samplerYcbcrConversionRequestCount = 64;
    object_reservation_.surfaceRequestCount = 0;
    object_reservation_.swapchainRequestCount = 64;
    object_reservation_.displayModeRequestCount = 0;
    object_reservation_.subpassDescriptionRequestCount = 64;
    object_reservation_.attachmentDescriptionRequestCount = 256;
    object_reservation_.descriptorSetLayoutBindingRequestCount = 1024;

    object_reservation_.descriptorSetLayoutBindingLimit = 1024;
    object_reservation_.maxImageViewMipLevels = 13;
    object_reservation_.maxImageViewArrayLayers = 256;
    object_reservation_.maxLayeredImageViewMipLevels = 13;
    object_reservation_.maxOcclusionQueriesPerPool = 256;
    object_reservation_.maxPipelineStatisticsQueriesPerPool = 256;
    object_reservation_.maxTimestampQueriesPerPool = 256;
    object_reservation_.maxImmutableSamplersPerDescriptorSetLayout = 256;
}

uint32_t IcdTest::GetMaxQueryFaultCount() {
    auto physical_device = GetPhysicalDevice();
    auto vksc_physical_device_props = vku::InitStruct<VkPhysicalDeviceVulkanSC10Properties>();
    auto physical_device_props = vku::InitStruct<VkPhysicalDeviceProperties2>(&vksc_physical_device_props);
    vksc::GetPhysicalDeviceProperties2(physical_device, &physical_device_props);

    return vksc_physical_device_props.maxQueryFaultCount;
}

VkCommandPool IcdTest::CreateCommandPool(VkDeviceSize reserved_size, uint32_t max_command_buffers) {
    auto command_pool_reservation_info = vku::InitStruct<VkCommandPoolMemoryReservationCreateInfo>();
    command_pool_reservation_info.commandPoolMaxCommandBuffers = max_command_buffers;
    command_pool_reservation_info.commandPoolReservedSize = reserved_size;
    auto command_pool_info = vku::InitStruct<VkCommandPoolCreateInfo>(&command_pool_reservation_info);
    VkCommandPool command_pool;
    FAIL_TEST_IF(vksc::CreateCommandPool(device_, &command_pool_info, nullptr, &command_pool) != VK_SUCCESS,
                 "Failed to create command pool.");

    return command_pool;
}

std::vector<VkCommandBuffer> IcdTest::CreateCommandBuffers(VkCommandPool command_pool, uint32_t count, VkCommandBufferLevel level) {
    auto command_buffer_info = vku::InitStruct<VkCommandBufferAllocateInfo>();
    command_buffer_info.commandPool = command_pool;
    command_buffer_info.level = level;
    command_buffer_info.commandBufferCount = count;
    std::vector<VkCommandBuffer> command_buffers(count);
    FAIL_TEST_IF(vksc::AllocateCommandBuffers(device_, &command_buffer_info, command_buffers.data()) != VK_SUCCESS,
                 "Failed to create command buffers.");

    return command_buffers;
}

VkBuffer IcdTest::GetBuffer(VkDeviceSize size, VkBufferUsageFlags usage) {
    auto buf_info = vku::InitStruct<VkBufferCreateInfo>();
    buf_info.flags = 0;
    buf_info.size = size;
    buf_info.usage = usage;
    buf_info.sharingMode = VK_SHARING_MODE_EXCLUSIVE;
    VkBuffer buffer;
    FAIL_TEST_IF(vksc::CreateBuffer(device_, &buf_info, NULL, &buffer) != VK_SUCCESS, "Failed to create buffer.");
    buffer_size_ = size;

    return buffer;
}

VkDeviceMemory IcdTest::AllocateMemory(VkBuffer buffer, VkDeviceSize size, VkMemoryPropertyFlags mem_flags) {
    auto mem_reqs = vku::InitStruct<VkMemoryRequirements2>();
    auto buf_reqs = vku::InitStruct<VkBufferMemoryRequirementsInfo2>();
    buf_reqs.buffer = buffer;
    vksc::GetBufferMemoryRequirements2(device_, &buf_reqs, &mem_reqs);

    auto phys_dev_mem_props = vku::InitStruct<VkPhysicalDeviceMemoryProperties2>();
    vksc::GetPhysicalDeviceMemoryProperties2(GetPhysicalDevice(), &phys_dev_mem_props);

    uint32_t mem_type_index = UINT32_MAX;
    for (uint32_t i = 0; i < phys_dev_mem_props.memoryProperties.memoryTypeCount; ++i) {
        VkMemoryType type = phys_dev_mem_props.memoryProperties.memoryTypes[i];
        VkMemoryHeap heap = phys_dev_mem_props.memoryProperties.memoryHeaps[type.heapIndex];
        if ((type.propertyFlags & mem_flags) == mem_flags && mem_reqs.memoryRequirements.memoryTypeBits & (1 << i) &&
            heap.size >= mem_reqs.memoryRequirements.size) {
            mem_type_index = i;
            break;
        }
    }

    auto alloc_info = vku::InitStruct<VkMemoryAllocateInfo>();
    alloc_info.allocationSize = mem_reqs.memoryRequirements.size;
    alloc_info.memoryTypeIndex = mem_type_index;
    VkDeviceMemory mem;
    FAIL_TEST_IF(vksc::AllocateMemory(device_, &alloc_info, NULL, &mem) != VK_SUCCESS, "Failed to allocate memory.");

    return mem;
}

void IcdTest::BindMemory(VkDeviceMemory memory, VkBuffer buffer) {
    auto buf_mem_bind_info = vku::InitStruct<VkBindBufferMemoryInfo>();
    buf_mem_bind_info.buffer = buffer;
    buf_mem_bind_info.memory = memory;
    buf_mem_bind_info.memoryOffset = 0;

    FAIL_TEST_IF(vksc::BindBufferMemory2(device_, 1, &buf_mem_bind_info) != VK_SUCCESS, "Failed to bind memory to buffer.");
}

VkBuffer IcdTest::CreateBufferWithBoundMemory(VkDeviceSize size, VkBufferUsageFlags usage, VkMemoryPropertyFlags mem_flags) {
    auto buffer = GetBuffer(size, usage);
    auto memory = AllocateMemory(buffer, size, mem_flags);
    BindMemory(memory, buffer);

    return buffer;
}

IcdTest::~IcdTest() {
    DestroyDevice();
    DestroyInstance();
}

void IcdTest::DestroyDevice() {
    if (device_ != VK_NULL_HANDLE) {
        vksc::DestroyDevice(device_, nullptr);
        device_ = VK_NULL_HANDLE;
    }
}

void IcdTest::DestroyInstance() {
    if (instance_ != VK_NULL_HANDLE) {
        vksc::DestroyInstance(instance_, nullptr);
        instance_ = VK_NULL_HANDLE;
    }
}

void IcdTest::EnableInstanceExtension(const char *extension_name) { instance_extensions_.push_back(extension_name); }

const VkInstanceCreateInfo IcdTest::GetDefaultInstanceCreateInfo(void *pnext_chain) const {
    static auto result = [] {
        static auto create_info = vku::InitStruct<VkInstanceCreateInfo>();
        create_info.pApplicationInfo = [] {
            static auto app_info = vku::InitStruct<VkApplicationInfo>();
            app_info.pApplicationName = "Vulkan SC Emulation ICD Test";
            app_info.applicationVersion = 1;
            app_info.apiVersion = VKSC_API_VERSION_1_0;
            return &app_info;
        }();
        return create_info;
    }();

    result.pNext = pnext_chain;
    result.enabledExtensionCount = static_cast<uint32_t>(instance_extensions_.size());
    result.ppEnabledExtensionNames = instance_extensions_.data();

    return result;
}

VkInstance IcdTest::InitInstance(VkInstanceCreateInfo *create_info) {
    if (create_info == nullptr) {
        static auto default_ci = GetDefaultInstanceCreateInfo();
        create_info = &default_ci;
    }
    VkResult result = vksc::CreateInstance(create_info, nullptr, &instance_);
    if (result != VK_SUCCESS) {
        GTEST_MESSAGE_AT_(__FILE__, __LINE__, "", ::testing::TestPartResult::kFatalFailure)
            << "Failed to create instance: " << result;
        throw testing::AssertionException(testing::TestPartResult(testing::TestPartResult::kFatalFailure, __FILE__, __LINE__, ""));
    }

    vksc::LoadInstanceEntryPoints(instance_);

    return instance_;
}

void IcdTest::EnableDeviceExtension(const char *extension_name) { device_extensions_.push_back(extension_name); }

const VkDeviceCreateInfo IcdTest::GetDefaultDeviceCreateInfo(void *pnext_chain) const {
    auto result = [] {
        static auto create_info = vku::InitStruct<VkDeviceCreateInfo>();
        create_info.queueCreateInfoCount = 1;
        create_info.pQueueCreateInfos = [] {
            static float queue_priority = 1.f;
            static auto queue_info = vku::InitStruct<VkDeviceQueueCreateInfo>();
            queue_info.queueCount = 1;
            queue_info.pQueuePriorities = &queue_priority;
            return &queue_info;
        }();
        return create_info;
    }();

    if (pnext_chain) {
        result.pNext = pnext_chain;

        // Check if we already chained the default object reservation info to this pNext chain
        auto obj_res_info = vku::FindStructInPNextChain<VkDeviceObjectReservationCreateInfo>(result.pNext);
        bool already_on_chain = false;
        while (obj_res_info != nullptr) {
            if (obj_res_info == &object_reservation_) {
                already_on_chain = true;
                break;
            }
            obj_res_info = vku::FindStructInPNextChain<VkDeviceObjectReservationCreateInfo>(obj_res_info->pNext);
        }

        if (!already_on_chain) {
            auto last_struct = vku::FindLastStructInPNextChain(pnext_chain);
            if (last_struct != nullptr) {
                last_struct->pNext =
                    const_cast<VkBaseOutStructure *>(reinterpret_cast<const VkBaseOutStructure *>(&object_reservation_));
            }
        }
    } else {
        result.pNext = &object_reservation_;
    }
    result.enabledExtensionCount = static_cast<uint32_t>(device_extensions_.size());
    result.ppEnabledExtensionNames = device_extensions_.data();

    return result;
}

VkPhysicalDevice IcdTest::GetPhysicalDevice() {
    if (instance_ == VK_NULL_HANDLE) {
        InitInstance();
    }

    if (physical_device_ == VK_NULL_HANDLE) {
        uint32_t phys_device_count = 1;
        vksc::EnumeratePhysicalDevices(instance_, &phys_device_count, &physical_device_);
        if (physical_device_ == VK_NULL_HANDLE) {
            GTEST_MESSAGE_AT_(__FILE__, __LINE__, "", ::testing::TestPartResult::kFatalFailure) << "Failed to find physical device";
            throw testing::AssertionException(
                testing::TestPartResult(testing::TestPartResult::kFatalFailure, __FILE__, __LINE__, ""));
        }
    }

    return physical_device_;
}

VkDevice IcdTest::InitDevice(VkDeviceCreateInfo *create_info) {
    if (instance_ == VK_NULL_HANDLE) {
        InitInstance();
    }

    if (create_info == nullptr) {
        static auto default_ci = GetDefaultDeviceCreateInfo();
        create_info = &default_ci;
    }

    VkResult result = vksc::CreateDevice(GetPhysicalDevice(), create_info, nullptr, &device_);
    if (result != VK_SUCCESS) {
        GTEST_MESSAGE_AT_(__FILE__, __LINE__, "", ::testing::TestPartResult::kFatalFailure)
            << "Failed to create device: " << result;
        throw testing::AssertionException(testing::TestPartResult(testing::TestPartResult::kFatalFailure, __FILE__, __LINE__, ""));
    }

    vksc::GetDeviceQueue(device_, 0, 0, &queue_);

    return device_;
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    Framework::InitArgs(&argc, argv);

    ::testing::AddGlobalTestEnvironment(new Framework);

    int result = RUN_ALL_TESTS();

    return result;
}
