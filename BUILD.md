# Build Instructions

- [Build Instructions](#build-instructions)
  - [Requirements](#requirements)
    - [Generated source code](#generated-source-code)
    - [Build Options](#build-options)
  - [Building Overview](#building-overview)
    - [Warnings as errors off by default!](#warnings-as-errors-off-by-default)
  - [Dependencies](#dependencies)
    - [How to test new dependency versions](#how-to-test-new-dependency-versions)
  - [Building On Linux](#building-on-linux)
    - [Linux Build Requirements](#linux-build-requirements)
    - [WSI Support Build Options](#wsi-support-build-options)
  - [Building On Windows](#building-on-windows)
    - [Windows Development Environment Requirements](#windows-development-environment-requirements)
    - [Visual Studio Generator](#visual-studio-generator)
  - [CMake Installed Files](#cmake-installed-files)
    - [Software Installation](#software-installation)

## Requirements

1. CMake >= 3.17.2
1. C++17 compatible toolchain
1. Git
1. Python >= 3.10
1. Python packages: pyparsing jsonschema

### Generated source code

This repository contains generated source code which is not intended to be modified directly.

A helper CMake target `emu_codegen` is also provided to simplify the invocation of `scripts/generate_source.py` from the build directory:

```bash
cmake -S . -B build -D EMU_CODEGEN=ON
cmake --build build --target emu_codegen
```

NOTE: `EMU_CODEGEN` is `OFF` by default.

### Build Options

When generating build files through CMake, several options can be specified to
customize the build.
The following is a table of all on/off options currently supported by this repository:

| Option                          | Platform      | Default | Description |
| ------------------------------- | ------------- | ------- | ----------- |
| BUILD_ICD                       | All           | `ON`    | Controls whether the Vulkan SC Emulation ICD is built. |
| BUILD_PCC                       | All           | `ON`    | Controls whether the Vulkan SC Pipeline Cache Compiler is built. |
| ENABLE_ADDRESS_SANITIZER        | All           | `OFF`   | Enables Address Sanitizer. |
| BUILD_WERROR                    | All           | `OFF`   | Treat compiler warnings as errors. |
| BUILD_TESTS                     | All           | `OFF`   | Controls whether or not the tests are built. |
| BUILD_WSI_XCB_SUPPORT           | Linux         | `OFF`   | Build with the XCB entry points enabled. |
| BUILD_WSI_XLIB_SUPPORT          | Linux         | `OFF`   | Build the loader with the Xlib entry points enabled. |
| BUILD_WSI_WAYLAND_SUPPORT       | Linux         | `OFF`   | Build the loader with the Wayland entry points enabled. |
| BUILD_WSI_DIRECTFB_SUPPORT      | Linux         | `OFF`   | Build the loader with the DirectFB entry points enabled. |
| BUILD_WSI_SCREEN_QNX_SUPPORT    | QNX           | `OFF`   | Build the loader with the QNX Screen entry points enabled. |
| BUILD_WSI_SCI_SUPPORT           | Linux, QNX    | `OFF`   | Build the loader with the SCI entry points enabled. |

## Building Overview

The following will be enough for most people, for more detailed instructions, see below.

```bash
git clone https://github.com/KhronosGroup/VulkanSC-Emulation.git
cd VulkanSC-Emulation

cmake -S . -B build -D UPDATE_DEPS=ON -D BUILD_WERROR=ON -D BUILD_TESTS=ON -D CMAKE_BUILD_TYPE=Debug
cmake --build build --config Debug
```

### Warnings as errors off by default!

By default `BUILD_WERROR` is `OFF`. The idiom for open source projects is to NOT enable warnings as errors.

System/language package managers have to build on multiple different platforms and compilers.

By defaulting to `ON` we cause issues for package managers since there is no standard way to disable warnings until CMake 3.24

Add `-D BUILD_WERROR=ON` to your workflow. Or use the `dev` preset shown below which will also enabling warnings as errors.

## Dependencies

Currently this repo has a custom process for grabbing C/C++ dependencies.

By specifying `-D UPDATE_DEPS=ON` when configuring CMake we grab dependencies listed in [known_good.json](scripts/known_good.json).

All we are doing is streamlining `building`/`installing` the `known good` dependencies and helping CMake `find` the dependencies.

This is done via a combination of `Python` and `CMake` scripting.

Misc Useful Information:

- By default `UPDATE_DEPS` is `OFF`. The intent is to be friendly by default to system/language package managers.
- You can run `update_deps.py` manually but it isn't recommended for most users.

### How to test new dependency versions

Typically most developers alter `known_good.json` with the commit/branch they are testing.

Alternatively you can modify `CMAKE_PREFIX_PATH` as follows.

```sh
# Delete the CMakeCache.txt which will cache find_* results
rm -rf build/
cmake -S . -B build/ ... -D CMAKE_PREFIX_PATH=~/foobar/vulkan_headers_install/ ...
```

## Building On Linux

### Linux Build Requirements

This repository is regularly built and tested on the two most recent Ubuntu LTS versions.

```bash
sudo apt-get install git build-essential python3 python3-pip cmake

# Linux WSI system libraries
sudo apt-get install libwayland-dev xorg-dev

# Python packages
pip3 install pyparsing jsonschema
```

### WSI Support Build Options

By default, the repository components are built with no support for the
WSI display servers (Xcb, Xlib, and Wayland) available on Linux as Vulkan SC
does not support any APIs to interface these and therefore the corresponding
APIs are not loaded from the underlying Vulkan implementation. However,
support for individual display servers can be enabled by setting the
appropriate CMake option of the form `BUILD_WSI_xxx_SUPPORT` to `ON`.


## Building On Windows

### Windows Development Environment Requirements

- Windows 10+
- Visual Studio

Note: Anything less than `Visual Studio 2019` is not guaranteed to compile/work.

### Visual Studio Generator

Run CMake to generate [Visual Studio project files](https://cmake.org/cmake/help/latest/guide/user-interaction/index.html#command-line-g-option).

```bash
# NOTE: By default CMake picks the latest version of Visual Studio as the default generator.
cmake -S . -B build

# Open the Visual Studio solution
cmake --open build
```

See the [CMake documentation](https://cmake.org/cmake/help/latest/manual/cmake-generators.7.html#visual-studio-generators) for further information on Visual Studio generators.

NOTE: Windows developers don't have to develop in Visual Studio. Visual Studio just helps streamlining the needed C++ toolchain requirements (compilers, linker, etc).


## CMake Installed Files

The installation depends on the target platform.

- *install_dir*`/bin` : The Vulkan SC Pipeline Cache Compiler (`pcconvk`)

For Unix operating systems:

- *install_dir*`/lib` : The Vulkan SC Emulation ICD (`libvksconvk`)
- *install_dir*`/share/vulkansc/icd.d` : Vulkan SC Emulation ICD JSON (`vksconvk.json`)

For WIN32:

- *install_dir*`/bin` : The Vulkan SC Emulation ICD and JSON (`vksconvk.dll` and `vksconvk.json`)

### Software Installation

After you have built your project you can install using CMake's install functionality.

CMake Docs:
- [Software Installation Guide](https://cmake.org/cmake/help/latest/guide/user-interaction/index.html#software-installation)
- [CLI for installing a project](https://cmake.org/cmake/help/latest/manual/cmake.1.html#install-a-project)

```sh
# EX: Installs Release artifacts into `build/install` directory.
# NOTE: --config is only needed for multi-config generators (Visual Studio, Xcode, etc)
cmake --install build/ --config Release --prefix build/install
```
