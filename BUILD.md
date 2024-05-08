# Build Instructions

1. [Requirements](#requirements)
1. [Building Overview](#building-overview)
1. [Generated source code](#generated-source-code)
1. [Dependencies](#dependencies)
1. [Linux Build](#building-on-linux)
1. [Windows Build](#building-on-windows)
1. [MacOS build](#building-on-macos)
1. [Installed Files](#installed-files)

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
rm  -rf build/
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

By default, the repository components are built with support for the
Vulkan-defined WSI display servers: Xcb, Xlib, and Wayland. It is recommended
to build the repository components with support for these display servers to
maximize their usability across Linux platforms. If it is necessary to build
these modules without support for one of the display servers, the appropriate
CMake option of the form `BUILD_WSI_xxx_SUPPORT` can be set to `OFF`.

### Linux 32-bit support

Usage of this repository's contents in 32-bit Linux environments is not
officially supported. However, since this repository is supported on 32-bit
Windows, these modules should generally work on 32-bit Linux.

Here are some notes for building 32-bit targets on a 64-bit Ubuntu "reference"
platform:

```bash
# 32-bit libs
# your PKG_CONFIG configuration may be different, depending on your distribution
sudo apt-get install gcc-multilib g++-multilib libx11-dev:i386
```

Set up your environment for building 32-bit targets:

```bash
export ASFLAGS=--32
export CFLAGS=-m32
export CXXFLAGS=-m32
export PKG_CONFIG_LIBDIR=/usr/lib/i386-linux-gnu
```

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

## Building on MacOS

### MacOS Development Environment Requirements

- Xcode

NOTE: MacOS developers don't have to develop in Xcode. Xcode just helps streamlining the needed C++ toolchain requirements (compilers, linker, etc). Similar to Visual Studio on Windows.

### Xcode Generator

To create and open an Xcode project:

```bash
# Create the Xcode project
cmake -S . -B build -G Xcode

# Open the Xcode project
cmake --open build
```

See the [CMake documentation](https://cmake.org/cmake/help/latest/generator/Xcode.html) for further information on the Xcode generator.

### Installed Files

- *install_dir*`/bin` : The `vulkaninfo`, `vkcube` and `vkcubepp` executables

For Unix operating systems:

- *install_dir*`/bin` : The Vulkan SC Emulation ICD
- *install_dir*`/share/vulkansc/icd.d` : Vulkan SC Emulation ICD JSON

For WIN32:

- *install_dir*`/bin` : The Vulkan SC Emulation ICD and JSON
