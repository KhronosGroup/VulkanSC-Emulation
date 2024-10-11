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
    static VkMockObject<VkInstance> kPlaceholderInstance{};
    static VkMockObject<VkPhysicalDevice> kPlaceholderPhysicalDevice{};
    static VkMockObject<VkDevice> kPlaceholderDevice{};

    vkmock::Reset();

    vkmock::GetInstanceProcAddr = [&](auto instance, auto pName) { return vkmock::GetProcAddr(pName); };
    vkmock::GetDeviceProcAddr = [&](auto device, auto pName) { return vkmock::GetProcAddr(pName); };
    vkmock::EnumerateInstanceVersion = [&](auto pApiVersion) {
        *pApiVersion = VK_API_VERSION_1_2;
        return VK_SUCCESS;
    };
    vkmock::EnumerateInstanceExtensionProperties = [&](auto pLayerName, auto pPropertyCount, auto pProperties) {
        *pPropertyCount = 0;
        return VK_SUCCESS;
    };
    vkmock::EnumerateDeviceExtensionProperties = [&](auto physicalDevice, auto pLayerName, auto pPropertyCount, auto pProperties) {
        *pPropertyCount = 0;
        return VK_SUCCESS;
    };
    vkmock::EnumeratePhysicalDevices = [&](auto instance, auto pPhysicalDeviceCount, auto pPhysicalDevices) {
        if (pPhysicalDevices != nullptr) {
            if (*pPhysicalDeviceCount > 0) {
                *pPhysicalDeviceCount = 1;
                *pPhysicalDevices = kPlaceholderPhysicalDevice;
                return VK_SUCCESS;
            } else {
                return VK_INCOMPLETE;
            }
        } else {
            *pPhysicalDeviceCount = 1;
            return VK_SUCCESS;
        }
    };
    vkmock::EnumeratePhysicalDeviceGroups = [&](auto instance, auto pPhysicalDeviceGroupCount,
                                                auto pPhysicalDeviceGroupProperties) {
        *pPhysicalDeviceGroupCount = 0;
        return VK_SUCCESS;
    };
    vkmock::GetPhysicalDeviceProperties = [&](auto physicalDevice, auto pProperties) {
        pProperties->apiVersion = VK_API_VERSION_1_2;
    };
    vkmock::GetPhysicalDeviceProperties2 = [&](auto physicalDevice, auto pProperties) {
        vkmock::GetPhysicalDeviceProperties(physicalDevice, &pProperties->properties);
    };
    vkmock::GetPhysicalDeviceFeatures = [&](auto physicalDevice, auto pFeatures) {};
    vkmock::GetPhysicalDeviceFeatures2 = [&](auto physicalDevice, auto pFeatures) {
        vkmock::GetPhysicalDeviceFeatures(physicalDevice, &pFeatures->features);
        auto vulkan_memory_model_features =
            vku::FindStructInPNextChain<VkPhysicalDeviceVulkanMemoryModelFeatures>(pFeatures->pNext);
        if (vulkan_memory_model_features) {
            vulkan_memory_model_features->vulkanMemoryModel = VK_TRUE;
        }
    };
    vkmock::CreateInstance = [&](auto pCreateInfo, auto pAllocator, auto pInstance) {
        *pInstance = kPlaceholderInstance;
        return VK_SUCCESS;
    };
    vkmock::DestroyInstance = [&](auto instance, auto pAllocator) {};
    vkmock::CreateDevice = [&](auto physicalDevice, auto pCreateInfo, auto pAllocator, auto pDevice) {
        *pDevice = kPlaceholderDevice;
        return VK_SUCCESS;
    };
    vkmock::DestroyDevice = [&](auto device, auto pAllocator) {};
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
    object_reservation_ = vku::InitStruct<VkDeviceObjectReservationCreateInfo>();

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

VkInstance IcdTest::InitInstance(const VkInstanceCreateInfo *pCreateInfo) {
    auto app_info = vku::InitStruct<VkApplicationInfo>();
    auto create_info = vku::InitStruct<VkInstanceCreateInfo>();
    if (pCreateInfo == nullptr) {
        app_info.pApplicationName = "Vulkan SC Emulation ICD Test";
        app_info.applicationVersion = 1;
        app_info.apiVersion = VKSC_API_VERSION_1_0;

        create_info.pApplicationInfo = &app_info;

        pCreateInfo = &create_info;
    }

    VkResult result = vksc::CreateInstance(pCreateInfo, nullptr, &instance_);
    if (result != VK_SUCCESS) {
        GTEST_MESSAGE_AT_(__FILE__, __LINE__, "", ::testing::TestPartResult::kFatalFailure) << "Failed to create instance";
        throw testing::AssertionException(testing::TestPartResult(testing::TestPartResult::kFatalFailure, __FILE__, __LINE__, ""));
    }

    vksc::LoadInstanceEntryPoints(instance_);

    return instance_;
}

VkDevice IcdTest::InitDevice(const VkDeviceCreateInfo *pCreateInfo) {
    VkPhysicalDevice phys_dev = VK_NULL_HANDLE;
    uint32_t phys_dev_count = 1;
    vksc::EnumeratePhysicalDevices(instance_, &phys_dev_count, &phys_dev);
    if (phys_dev == VK_NULL_HANDLE) {
        GTEST_MESSAGE_AT_(__FILE__, __LINE__, "", ::testing::TestPartResult::kFatalFailure) << "Failed to find physical device";
        throw testing::AssertionException(testing::TestPartResult(testing::TestPartResult::kFatalFailure, __FILE__, __LINE__, ""));
    }

    auto vksc10_features = vku::InitStruct<VkPhysicalDeviceVulkanSC10Features>(&object_reservation_);

    float queue_priority = 1.f;
    auto queue_info = vku::InitStruct<VkDeviceQueueCreateInfo>();
    auto create_info = vku::InitStruct<VkDeviceCreateInfo>(&vksc10_features);
    if (pCreateInfo == nullptr) {
        queue_info.queueCount = 1;
        queue_info.pQueuePriorities = &queue_priority;

        create_info.queueCreateInfoCount = 1;
        create_info.pQueueCreateInfos = &queue_info;

        pCreateInfo = &create_info;
    }

    VkResult result = vksc::CreateDevice(phys_dev, pCreateInfo, nullptr, &device_);
    if (result != VK_SUCCESS) {
        GTEST_MESSAGE_AT_(__FILE__, __LINE__, "", ::testing::TestPartResult::kFatalFailure) << "Failed to create device";
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
