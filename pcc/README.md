# Vulkan SC Emulation Pipeline Cache Compiler (Mock PCC)

This directory contains the Vulkan SC Emulation Pipeline Cache Compiler (Mock PCC) that enables compiling Vulkan SC pipeline caches compatible with the Vulkan SC Emulation ICD.

## Introduction

The Mock PCC accompanies the Vulkan SC Emulation ICD to provide a full Vulkan SC implementation stack to create and test Vulkan SC applications on any platform with a Vulkan driver.

## Using the Mock PCC

The Mock PCC is a command line utility that takes a set of pipeline JSON files and SPIR-V binary files to build Vulkan SC pipeline caches compatible with the Vulkan SC Emulation ICD.

It supports all the standard command line arguments that are also expected by the Vulkan SC Conformance Test Suite (CTS).

Currently it generates device-independent pipeline caches without no target device compilation and the resulting Vulkan SC pipeline cache will only contain so called "debug information" (i.e. it only embeds the pipeline JSON and shader SPIR-V data). This is sufficient for the Vulkan SC Emulation ICD to build these pipelines on the underlying Vulkan implementation.

As part of the compilation process, the Mock PCC will validate the SPIR-V binaries both before and after applying any specialization constant information present in the encompassing pipeline JSON, and the resulting pipeline cache will contain the already specialized version of the shader SPIR-V.
