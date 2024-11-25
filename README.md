# KhronosGroup/VulkanSC-Emulation

This project provides Vulkan SC emulation tools on top of Vulkan implementations that can assist Vulkan SC development by enabling developers to test their Vulkan SC applications on systems with only Vulkan implementations.

## Intro

The following components are available in this repository:

- [*Vulkan SC Emulation ICD*](icd/)
- [*Vulkan SC Emulation Pipeline Cache Compiler (Mock PCC)*](pcc/)

## Contact Information
* [Daniel Rakos](mailto:daniel.rakos@rastergrid.com)

## Information for Developing or Contributing:

Please see the [CONTRIBUTING.md](CONTRIBUTING.md) file in this repository for more details.

## How to Build and Run

- [BUILD.md](BUILD.md) includes directions for building all components.
- [icd/README.md](icd/README.md) includes information about the Vulkan SC Emulation ICD and its use.
- [pcc/README.md](pcc/README.md) includes information about the Vulkan SC Emulation Pipeline Cache Compiler and its use.

## Version Tagging Scheme

Updates to this repository which correspond to a new Vulkan SC specification release are tagged using the following format: `vksc<`_`version`_`>.<`_`patch`_`>` (e.g., `vksc1.0.12`).

## License
This work is released as open source under a Apache-style license from Khronos including a Khronos copyright.

See LICENSE.txt for a full list of licenses used in this repository.
