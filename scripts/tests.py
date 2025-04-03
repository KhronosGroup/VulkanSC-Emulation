#!/usr/bin/env python3
# Copyright (c) 2023-2025 The Khronos Group Inc.
# Copyright (c) 2020-2024 Valve Corporation
# Copyright (c) 2020-2024 LunarG, Inc.
# Copyright (c) 2023-2025 RasterGrid Kft.

# SPDX-License-Identifier: Apache-2.0

import subprocess
import sys
import os
import argparse
import common_ci

# Where all artifacts will ultimately be placed under
CI_BUILD_DIR = common_ci.RepoRelative('build-ci')
# Where all dependencies will be installed under
CI_EXTERNAL_DIR = os.path.join(CI_BUILD_DIR, 'external')
# Where all repos will install to
CI_INSTALL_DIR = os.path.join(CI_BUILD_DIR, 'install')
# Where EMU ICD gets built
CI_EMU_ICD_BUILD_DIR = os.path.join(CI_BUILD_DIR, 'emu')

#
# Prepare the VKSC Emulation for testing
def BuildVKSCEmu(config, cmake_args, build_tests):
    print("Log CMake version")
    cmake_ver_cmd = 'cmake --version'
    common_ci.RunShellCmd(cmake_ver_cmd)

    SRC_DIR = common_ci.PROJECT_SRC_DIR
    BUILD_DIR = CI_EMU_ICD_BUILD_DIR

    print("Configure VKSC EMU")
    cmake_cmd = f'cmake -S {SRC_DIR} -B {BUILD_DIR}'
    cmake_cmd += f' -D CMAKE_BUILD_TYPE={config}'
    cmake_cmd += f' -D BUILD_TESTS={build_tests}'
    cmake_cmd += f' -D UPDATE_DEPS=ON -D UPDATE_DEPS_DIR={CI_EXTERNAL_DIR}'
    cmake_cmd += ' -D BUILD_WERROR=ON'

    if cmake_args:
         cmake_cmd += f' {cmake_args}'

    common_ci.RunShellCmd(cmake_cmd)

    print("Build VKSC EMU")
    build_cmd = f'cmake --build {BUILD_DIR}'
    common_ci.RunShellCmd(build_cmd)

    print("Install VKSC EMU")
    install_cmd = f'cmake --install {BUILD_DIR} --prefix {CI_INSTALL_DIR}'
    common_ci.RunShellCmd(install_cmd)

#
# Prepare VK Loader for executing VKSC Emulation Tests
def BuildLoader():
    SRC_DIR = os.path.join(CI_EXTERNAL_DIR, 'Vulkan-Loader')
    BUILD_DIR = os.path.join(SRC_DIR, 'build', 'vk')
    EXTERNAL_DIR = os.path.join(SRC_DIR, 'external', 'vk')

    if not os.path.exists(SRC_DIR):
        print("Unable to find Vulkan-Loader")
        sys.exit(1)

    print("Run CMake for Loader")
    cmake_cmd = f'cmake -S {SRC_DIR} -B {BUILD_DIR}'
    cmake_cmd += ' -D VULKANSC=OFF'
    cmake_cmd += f' -D UPDATE_DEPS=ON -D UPDATE_DEPS_DIR={EXTERNAL_DIR}'
    cmake_cmd += ' -D CMAKE_BUILD_TYPE=Release'

    # GitHub actions runs our test as admin on Windows
    if common_ci.IsGHA() and common_ci.IsWindows():
        cmake_cmd += ' -D LOADER_USE_UNSAFE_FILE_SEARCH=ON'

    common_ci.RunShellCmd(cmake_cmd)

    print("Build Loader")
    build_cmd = f'cmake --build {BUILD_DIR}'
    common_ci.RunShellCmd(build_cmd)

    print("Install Loader")
    install_cmd = f'cmake --install {BUILD_DIR} --prefix {CI_INSTALL_DIR}'
    common_ci.RunShellCmd(install_cmd)

#
# Prepare VKSC Loader for executing VKSC Emulation Tests
def BuildSCLoader():
    SRC_DIR = os.path.join(CI_EXTERNAL_DIR, 'Vulkan-Loader')
    BUILD_DIR = os.path.join(SRC_DIR, 'build', 'vksc')
    EXTERNAL_DIR = os.path.join(SRC_DIR, 'external', 'vksc')

    if not os.path.exists(SRC_DIR):
        print("Unable to find Vulkan-Loader")
        sys.exit(1)

    print("Run CMake for SC Loader")
    cmake_cmd = f'cmake -S {SRC_DIR} -B {BUILD_DIR}'
    cmake_cmd += f' -D UPDATE_DEPS=ON -D UPDATE_DEPS_DIR={EXTERNAL_DIR}'
    cmake_cmd += ' -D CMAKE_BUILD_TYPE=Release'

    # GitHub actions runs our test as admin on Windows
    if common_ci.IsGHA() and common_ci.IsWindows():
        cmake_cmd += ' -D LOADER_USE_UNSAFE_FILE_SEARCH=ON'

    common_ci.RunShellCmd(cmake_cmd)

    print("Build SC Loader")
    build_cmd = f'cmake --build {BUILD_DIR}'
    common_ci.RunShellCmd(build_cmd)

    print("Install SC Loader")
    install_cmd = f'cmake --install {BUILD_DIR} --prefix {CI_INSTALL_DIR}'
    common_ci.RunShellCmd(install_cmd)

#
# Module Entrypoint
def Build(args):

    # Since this script uses Ninja to build Windows users need to be in a developer command prompt.
    if common_ci.IsWindows():
        # This environment variable is arbitrary. I just picked one set by the developer command prompt.
        if "VSCMD_ARG_TGT_ARCH" not in os.environ:
            print("This script must be invoked in a developer command prompt!")
            sys.exit(1)

    try:
        BuildVKSCEmu(config = args.configuration, cmake_args = args.cmake, build_tests = "ON")
        BuildLoader()
        BuildSCLoader() # Clear external folder, VKSC has different Vulkan-Headers clone

    except subprocess.CalledProcessError as proc_error:
        print('Command "%s" failed with return code %s' % (' '.join(proc_error.cmd), proc_error.returncode))
        sys.exit(proc_error.returncode)
    except Exception as unknown_error:
        print('An unknown error occured: %s' % unknown_error)
        sys.exit(1)

    sys.exit(0)

#
# Run the VKSC Emulation ICD Tests
def RunVKSCEmuICDTests(args):
    print("Run VKSC EMU ICD Tests using Mock ICD")

    test_env = dict(os.environ)

    # Because we installed everything to CI_INSTALL_DIR all the libraries/json files are in pre-determined locations
    # defined by GNUInstallDirs. This makes setting VK_LAYER_PATH and other environment variables trivial/robust.
    if common_ci.IsWindows():
        mock_icd_path = 'bin\\vkmock_icd.dll'
        mock_driver_file = 'bin\\vkmock_icd.json'
        emu_icd_path = 'bin\\vksconvk.dll'
        emu_driver_file = 'bin\\vksconvk.json'
        common_ci.PrependToSystemLibLoaderPath(test_env, os.path.join(CI_INSTALL_DIR, 'bin'))
    else:
        mock_icd_path = 'lib/libvkmock_icd.so'
        mock_driver_file = 'share/vulkan/icd.d/vkmock_icd.json'
        emu_icd_path = 'lib/libvksconvk.so'
        emu_driver_file = 'share/vulkansc/icd.d/vksconvk.json'
        common_ci.PrependToSystemLibLoaderPath(test_env, os.path.join(CI_INSTALL_DIR, 'lib'))

    test_env['VKSC_EMU_VKMOCK_ICD_PATH'] = os.path.join(CI_INSTALL_DIR, mock_icd_path)
    if (not args.vkloader) and (not args.vkscloader): # Test No Loader
        test_env['VKSC_EMU_VULKAN_LIB_PATH'] = os.path.join(CI_INSTALL_DIR, mock_icd_path)
        test_env['VKSC_EMU_VULKANSC_LIB_PATH'] = os.path.join(CI_INSTALL_DIR, emu_icd_path)
    elif (args.vkloader) and (not args.vkscloader): # Test VK Loader
        test_env['VKSC_EMU_VULKANSC_LIB_PATH'] = os.path.join(CI_INSTALL_DIR, emu_icd_path)
        test_env['VKSC_EMU_TEST_WITH_VULKAN_LOADER'] = '1'
        test_env['VKSC_EMU_VK_DRIVER_FILES'] = os.path.join(CI_INSTALL_DIR, mock_driver_file)
        test_env['VKSC_EMU_VK_LOADER_LAYERS_DISABLE'] = '~implicit~'
    elif (not args.vkloader) and (args.vkscloader): # Test VKSC Loader
        test_env['VKSC_EMU_VULKAN_LIB_PATH'] = os.path.join(CI_INSTALL_DIR, mock_icd_path)
        test_env['VKSC_EMU_TEST_WITH_VULKANSC_LOADER'] = '1'
        test_env['VK_DRIVER_FILES'] = os.path.join(CI_INSTALL_DIR, emu_driver_file)
        test_env['VK_LOADER_LAYERS_DISABLE'] = '~implicit~'
    else: # Test Both Loader
        test_env['VKSC_EMU_TEST_WITH_VULKAN_LOADER'] = '1'
        test_env['VKSC_EMU_VK_DRIVER_FILES'] = os.path.join(CI_INSTALL_DIR, mock_driver_file)
        test_env['VKSC_EMU_VK_LOADER_LAYERS_DISABLE'] = '~implicit~'
        test_env['VKSC_EMU_TEST_WITH_VULKANSC_LOADER'] = '1'
        test_env['VK_DRIVER_FILES'] = os.path.join(CI_INSTALL_DIR, emu_driver_file)
        test_env['VK_LOADER_LAYERS_DISABLE'] = '~implicit~'

    # This enables better stack traces from tools like leak sanitizer by using the loader feature which prevents unloading of libraries at shutdown.
    test_env['VK_LOADER_DISABLE_DYNAMIC_LIBRARY_UNLOADING'] = '1'

    # Useful for debugging
    # test_env['VK_LOADER_DEBUG'] = 'error,warn,info'
    # test_env['VK_LAYER_TESTS_PRINT_DRIVER'] = '1'

    test_cmd = os.path.join(CI_INSTALL_DIR, 'bin', 'test_vksconvk')

    common_ci.RunShellCmd(test_cmd, env=test_env)

    print("Re-Running multithreaded tests with VK_LAYER_FINE_GRAINED_LOCKING disabled")
    test_env['VK_LAYER_FINE_GRAINED_LOCKING'] = '0'
    common_ci.RunShellCmd(test_cmd + ' --gtest_filter=*Thread*', env=test_env)

#
# Run the VKSC Emulation PCC Tests
def RunVKSCEmuPCCTests():
    print("Run VKSC EMU PCC Tests")

    common_ci.RunShellCmd(f'ctest --test-dir {CI_EMU_ICD_BUILD_DIR} --label-regex PCC --parallel {os.cpu_count()}')

def Test(args):
    try:
        if args.test_icd:
            RunVKSCEmuICDTests(args)
        elif args.test_pcc:
            RunVKSCEmuPCCTests()

    except subprocess.CalledProcessError as proc_error:
        print('Command "%s" failed with return code %s' % (' '.join(proc_error.cmd), proc_error.returncode))
        sys.exit(proc_error.returncode)
    except Exception as unknown_error:
        print('An unknown error occured: %s', unknown_error)
        sys.exit(1)

    sys.exit(0)

if __name__ == '__main__':
    configs = ['Release', 'Debug']
    default_config = configs[0]

    parser = argparse.ArgumentParser()
    parser.add_argument(
        '-c', '--config', dest='configuration',
        metavar='CONFIG', action='store',
        choices=configs, default=default_config,
        help='Build target configuration. Can be one of: {0}'.format(
            ', '.join(configs)))
    parser.add_argument(
        '--cmake', dest='cmake',
        metavar='CMAKE', type=str,
        default='', help='Additional args to pass to cmake')
    parser.add_argument(
        '--build', dest='build',
        action='store_true', help='Build the project')
    parser.add_argument(
        '--test-icd', dest='test_icd',
        action='store_true', help='Tests the Emulation ICD')
    parser.add_argument(
        '--test-pcc', dest='test_pcc',
        action='store_true', help='Tests the Pipeline Cache Compiler')
    parser.add_argument(
        '--vkloader', dest='vkloader',
        action='store_true', help='Test using the Vulkan ICD Loader')
    parser.add_argument(
        '--vkscloader', dest='vkscloader',
        action='store_true', help='Test using the Vulkan SC ICD Loader')

    args = parser.parse_args()

    if (args.build):
        Build(args)
    if (args.test_icd or args.test_pcc):
        Test(args)
