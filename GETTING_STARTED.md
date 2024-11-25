# Getting started

The following document should be enough for most project developers to get off the ground developing Vulkan SC applications.

## Ubuntu

### Install build tools using APT

```bash
sudo apt install git cmake build-essential python3 python3-pyparsing python3-jsonschema
```

### Obtain the sources

```bash
git clone https://github.com/KhronosGroup/VulkanSC-Emulation.git
cd VulkanSC-Emulation
```

### Configure, build, test, install

```bash
cmake -S . -B build -D CMAKE_BUILD_TYPE=Release -D UPDATE_DEPS=ON
cmake --build build --parallel `nproc`
cmake --install build --prefix ~/.local
```

<details>

<summary>Building with unit tests to validate revision</summary>

```bash
# Setup env for running tests (building doesn't rely on this)
export VKSC_EMU_VKMOCK_ICD_PATH=$(pwd)/build/tests/icd/libvkmock_icd.so
export VKSC_EMU_TEST_WITH_VULKAN_LOADER=1
export VKSC_EMU_VK_DRIVER_FILES=$(pwd)/build/tests/icd/vkmock_icd.json
export VKSC_EMU_VK_LOADER_LAYERS_DISABLE=~implicit~
export VKSC_EMU_VULKANSC_LIB_PATH=$(pwd)/build/icd/libvksconvk.so

cmake -S . -B build -D CMAKE_BUILD_TYPE=Release -D UPDATE_DEPS=ON -D BUILD_TESTS=ON
cmake --build build --parallel `nproc`
ctest --test-dir build --parallel `nproc`
cmake --install build --prefix ~/.local
```

</details>

## Windows

### Install build tools using winget

```pwsh
winget install Microsoft.VisualStudio.2022.BuildTools --silent --override "--wait --quiet --add Microsoft.VisualStudio.Workload.NativeDesktop --includeRecommended"
```

> [!NOTE]
> Installing Visual Studio requries an admin priviliges.

### Obtain the sources

```pwsh
git clone https://github.com/KhronosGroup/VulkanSC-Emulation.git
sl VulkanSC-Emulation
```

### Configure, build, test, install

```pwsh
cmake -S . -B build -D CMAKE_BUILD_TYPE=Release -D UPDATE_DEPS=ON
cmake --build build --config Release --parallel $env:NUMBER_OF_PROCESSORS
cmake --install build --config Release --prefix $env:LOCALAPPDATA\Khronos\VulkanSC-Emulation
```

<details>

<summary>Building with unit tests to validate revision</summary>

```bash
# Setup env for running tests (building doesn't rely on this)
$env:VKSC_EMU_VKMOCK_ICD_PATH="$(Get-Location)\build\tests\icd\Release\vkmock_icd.dll"
$env:VKSC_EMU_TEST_WITH_VULKAN_LOADER='1'
$env:VKSC_EMU_VK_DRIVER_FILES="$(Get-Location)\build\tests\icd\Release\vkmock_icd.json"
$env:VKSC_EMU_VK_LOADER_LAYERS_DISABLE='~implicit~'
$env:VKSC_EMU_VULKANSC_LIB_PATH="$(Get-Location)\build\icd\Release\vksconvk.dll"

cmake -S . -B build -D CMAKE_BUILD_TYPE=Release -D UPDATE_DEPS=ON -D BUILD_TESTS=ON
cmake --build build --config Release --parallel $env:NUMBER_OF_PROCESSORS
ctest --test-dir build --config Release --parallel $env:NUMBER_OF_PROCESSORS
cmake --install build --config Release --prefix $env:LOCALAPPDATA\Khronos\VulkanSC-Emulation
```

</details>
