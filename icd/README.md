# Vulkan SC Emulation ICD

This directory contains the Vulkan SC Emulation ICD that enables running Vulkan SC applications on top of a Vulkan implementation.

## Introduction

The Vulkan SC Emulation ICD is focused on enabling developers to create and test Vulkan SC applications on any platform with a Vulkan driver.

## Using the Vulkan SC Emulation ICD

To enable using the Vulkan SC Emulation ICD, make sure to install it to any of the locations the Vulkan SC Loader uses to search for available ICDs or set the `VK_ICD_FILENAMES`, `VK_DRIVER_FILES`, or `VK_ADD_DRIVER_FILES` to point to the JSON manifest of the Vulkan SC Emulation ICD (`vksconvk.json`).

## Loader environment variable handling

Both the Vulkan SC Loader and the Vulkan Loader use the same set of environment variable names for their configuration. As using the Vulkan SC Emulation ICD means that both the Vulkan SC and Vulkan Loader are part of the system (as the emulation ICD loads the Vulkan API per usual), the default environment variable names will only be applied for the Vulkan SC driver. If the user needs to configure any of the environment variables to be used by the Vulkan Loader instead of the Vulkan SC Loader (e.g. for development purposes), then the user should set an environment variable with the `VKSC_EMU_` prefix instead (e.g. `VKSC_EMU_VK_LAYER_PATH`).

## Configuration environment variables

The behavior of the Vulkan SC Emulation ICD can be controlled with the following environment variables:

  * `VKSC_EMULATION_DEBUG` works similarly to the loader environment variable `VK_LOADER_DEBUG` and enables different levels of debug output to be generated to `stderr` and/or to API debug callbacks.
  * `VKSC_EMULATION_RECYCLE_PIPELINE_MEMORY` controls whether the ICD reports support for the `recyclePipelineMemory` Vulkan SC 1.0 device property. If set to `0`, then the ICD will report `recyclePipelineMemory` as `VK_FALSE`, otherwise (by default) as `VK_TRUE`.
