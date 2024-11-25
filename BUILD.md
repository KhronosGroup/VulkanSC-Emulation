# Build Instructions

## System requirements

### OS support

- Ubuntu LTS releases supported by Canonical
- Windows 10+

### Build tools

- CMake >= 3.17.2
- C++17 compatible toolchain
- Git
- Python >= 3.10
  - pyparsing
  - jsonschema

## Overview

The build interface follows the rest of the Vulkan (SC) ecosystem closely. The high-level interface, structure and defaults are all borrowed from other repositories.

### Build options

| Option                     | Platform  | Default | Description |
| -------------------------- | --------- | ------- | ----------- |
| `BUILD_ICD`                | All       | `ON`    | Build the Installable Client Driver component |
| `BUILD_PCC`                | All       | `ON`    | Build the Pipeline Cache Compiler component |
| `BUILD_TESTS`              | All       | `OFF`   | Build unit tests |
| `BUILD_WERROR`             | All       | `OFF`   | Build with compiler warnings as errors Build unit tests |
| `ENABLE_ADDRESS_SANITIZER` | All       | `OFF`   | Enable building using ASAN, LLVM Address Sanitizer |
| `UPDATE_DEPS`              | All       | `OFF`   | Define the utility target running [`update_deps.py`](scripts/update_deps.py) (see [Dependencies](#dependencies)) |
| `EMU_CODEGEN`              | All       | `OFF`   | Define the utility target running [`generate_source.py`](scripts/generate_source.py) (see [Generated source code](#generated-source-code)) |

### Invoking the build

Building follows the usual CMake workflow of: configure, build, test, install.

```
cmake -G <generator> -S <source_root> -B <binary_root> ...
cmake --build <binary_root> --config <config_name> --target <target_name>
ctest --test-dir <binary_root> --build-config <config_name> ...
cmake --install <binary_root> --prefix <install_root> --config <config_name>
```

> [!TIP]
> CMake automatically creates both `<binary_root>` and `<install_root>`, you do not need to create these in your scripts, on the command-line.

For concrete command-lines of build environment setup and a minimal build, refer to the [Getting Started Guide](./GETTING_STARTED.md).

## Features

### Generated source code

This repository contains generated source code which is not intended to be modified directly. The latest generated sources are committed to the repository but can be regerenated any time using [`generate_source.py`](scripts/generate_source.py). Adding `-D EMU_CODEGEN=ON` to the configuration command defines the `emu_codegen` utility target allowing running the script via the build system.

> [!TIP]
> The utility target does not track dependencies, therefor is always out of date. Consequently it cannot reasonably participate in the default `all`/`ALL_BUILD` targets.

### Warnings as error

This repository intends on building warning-free with most modern compiler warnings turned on. A helper CMake option `BUILD_WERROR` is provided allowing to opt-in to enforcing warning-free builds without having to know the relevant options of the compiler at hand.

Because system/language package managers may have to build on multiple different platforms and compilers, the idiom for open source projects is to _not_ enable warnings as errors by default. By defaulting to `ON` we'd cause issues for package managers since there is no standard way to disable warnings until CMake 3.24.

If you're a developer, consider adding `-D BUILD_WERROR=ON` to your workflow. Or use the `dev` preset shown below which will also enabling warnings as errors.

## Dependencies

Currently this repo has a custom process for grabbing C/C++ dependencies. This is done via [`update_deps.py`](scripts/update_deps.py). The script downloads and builds dependencies listed in [`known_good.json`](scripts/known_good.json). By specifying `-D UPDATE_DEPS=ON` when configuring CMake, these dependencies are automatically imported into the build by:

- running [`update_deps.py`](scripts/update_deps.py) during the configuration
- a helper script is included into the build notifying CMake of the location of the built dependencies.

The script and integration option intends on streamlining `building`/`installing` the _known good_ dependencies and helping CMake find the dependencies. This is done via a combination of `Python` and `CMake` scripting.

By defaulting to `OFF` the intent is to be friendly by default to system/language package managers. You can run `update_deps.py` manually but it isn't recommended for most users.

> [!NOTE]
> The dependency fetching script pre-dates modern dependency managers for C++, such as [Vcpkg](https://vcpkg.io), [Conan](https://conan.io/), etc. It has a few shortcomings, among others the inability to drive multi-config builds or to conveniently provide your own pre-built dependencies. The _consumption_ part of the build definition is agnostic to how dependencies are fetched, users may supply pre-built artifacts in any CMake-conforming way they see fit.

### How to test new dependency versions

Typically most developers alter `known_good.json` with the commit/branch they are testing.

Alternatively you can modify `CMAKE_PREFIX_PATH` as follows.

```sh
# Delete the CMakeCache.txt which will cache find_* results
rm  -rf build/
cmake -S . -B build/ ... -D CMAKE_PREFIX_PATH=~/foobar/vulkan_headers_install/ ...
```

## Building On Linux

No requirements beyond the general [build tools](#build-tools) which may be obtained via your distro's package manager. Builds are regularly tested on latest supported Ubuntu LTS.

## Building On Windows

Users of Windows will require

- Windows 10+
- Visual Studio 2019+

### Visual Studio Generator

Run CMake to generate [Visual Studio project files](https://cmake.org/cmake/help/latest/guide/user-interaction/index.html#command-line-g-option).

```bash
# NOTE: By default CMake picks the latest version of Visual Studio as the default generator.
cmake -S . -B build

# Open the Visual Studio solution
cmake --open build
```

See the [CMake documentation](https://cmake.org/cmake/help/latest/manual/cmake-generators.7.html#visual-studio-generators) for further information on Visual Studio generators.

> [!NOTE]
> Windows developers don't have to develop in Visual Studio. Visual Studio just helps streamlining the needed C++ toolchain requirements (compilers, linker, etc).

## Installed Files

For Unix operating systems:

- `<install_root>/bin` : The Vulkan SC Emulation ICD
- `<install_root>/share/vulkansc/icd.d` : Vulkan SC Emulation ICD JSON

For WIN32:

- `<install_root>/bin` : The Vulkan SC Emulation ICD and JSON
