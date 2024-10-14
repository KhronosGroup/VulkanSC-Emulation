/*
 * Copyright (c) 2024 The Khronos Group Inc.
 * Copyright (c) 2024 RasterGrid Kft.
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#include "icd_test_framework.h"

#include <string.h>
#include <string_view>

static void InitDefaultMockHandlers(IcdTest *test_case = nullptr) {
    static VkMockObject<VkInstance> mock_instance{};
    static VkMockObject<VkPhysicalDevice> mock_physical_device{};
    static VkMockObject<VkDevice> mock_device{};

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

IcdTest::~IcdTest() {
    if (device_ != VK_NULL_HANDLE) {
        vksc::DestroyDevice(device_, nullptr);
    }

    if (instance_ != VK_NULL_HANDLE) {
        vksc::DestroyInstance(instance_, nullptr);
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
    static auto result = [] {
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
        auto last_struct = vku::FindLastStructInPNextChain(pnext_chain);
        if (last_struct != nullptr) {
            last_struct->pNext =
                const_cast<VkBaseOutStructure *>(reinterpret_cast<const VkBaseOutStructure *>(&object_reservation_));
        }
    } else {
        result.pNext = &object_reservation_;
    }
    result.enabledExtensionCount = static_cast<uint32_t>(device_extensions_.size());
    result.ppEnabledExtensionNames = device_extensions_.data();

    return result;
}

VkDevice IcdTest::InitDevice(VkDeviceCreateInfo *create_info) {
    VkPhysicalDevice physdev = VK_NULL_HANDLE;
    uint32_t physdev_count = 1;
    vksc::EnumeratePhysicalDevices(instance_, &physdev_count, &physdev);
    if (physdev == VK_NULL_HANDLE) {
        GTEST_MESSAGE_AT_(__FILE__, __LINE__, "", ::testing::TestPartResult::kFatalFailure) << "Failed to find physical device";
        throw testing::AssertionException(testing::TestPartResult(testing::TestPartResult::kFatalFailure, __FILE__, __LINE__, ""));
    }

    if (create_info == nullptr) {
        static auto default_ci = GetDefaultDeviceCreateInfo();
        create_info = &default_ci;
    }

    VkResult result = vksc::CreateDevice(physdev, create_info, nullptr, &device_);
    if (result != VK_SUCCESS) {
        GTEST_MESSAGE_AT_(__FILE__, __LINE__, "", ::testing::TestPartResult::kFatalFailure)
            << "Failed to create device: " << result;
        throw testing::AssertionException(testing::TestPartResult(testing::TestPartResult::kFatalFailure, __FILE__, __LINE__, ""));
    }

    return device_;
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    Framework::InitArgs(&argc, argv);

    ::testing::AddGlobalTestEnvironment(new Framework);

    int result = RUN_ALL_TESTS();

    return result;
}
