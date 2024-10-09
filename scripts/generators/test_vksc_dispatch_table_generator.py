#!/usr/bin/python3 -i
#
# Copyright (c) 2024 The Khronos Group Inc.
# Copyright (c) 2024 RasterGrid Kft.
#
# SPDX-License-Identifier: Apache-2.0

import os
from generators.base_generator import BaseGenerator
from generators.generator_utils import PlatformGuardHelper

class TestVkSCDispatchTableGenerator(BaseGenerator):
    def __init__(self):
        BaseGenerator.__init__(self)

    def generate(self):
        self.write(f'''// *** THIS FILE IS GENERATED - DO NOT EDIT ***
            // See {os.path.basename(__file__)} for modifications

            /*
             * Copyright (c) 2024 The Khronos Group Inc.
             * Copyright (c) 2024 RasterGrid Kft.
             *
             * SPDX-License-Identifier: Apache-2.0
             */''')
        self.write('// NOLINTBEGIN') # Wrap for clang-tidy to ignore

        if self.filename == 'test_vksc_dispatch_table.h':
            self.generateHeader()
        else:
            self.write(f'\nFile name {self.filename} has no code to generate\n')

        self.write('// NOLINTEND') # Wrap for clang-tidy to ignore

    def generateHeader(self):
        out = []
        out.append('''
            #pragma once

            #include <vulkan/vulkan.h>

            #ifdef _WIN32
            #include <windows.h>
            #else
            #include <dlfcn.h>
            #endif

            #include <stdio.h>
            #include <stdlib.h>

            class vksc {
                inline static void *lib_handle_{nullptr};

              public:
                static void UnloadLib() {
                    if (lib_handle_) {
            #if defined(_WIN32)
                        FreeLibrary((HMODULE)lib_handle_);
            #else
                        dlclose(lib_handle_);
            #endif
                    }
                }

                static void LoadLib(const char *full_lib_name) {
            #if defined(_WIN32)
                    lib_handle_ = LoadLibraryA(full_lib_name);
            #else
                    lib_handle_ = dlopen(full_lib_name, RTLD_NOW | RTLD_LOCAL);
            #endif
                    if (!lib_handle_) {
                        printf("Failed to open Vulkan SC library '%s'\\n", full_lib_name);
                        exit(1);
                    }
            #if defined(_WIN32)
                    GetInstanceProcAddr = (PFN_vkGetInstanceProcAddr)(void (*)(void))GetProcAddress((HMODULE)lib_handle_, "vkGetInstanceProcAddr");
            #else
                    GetInstanceProcAddr = (PFN_vkGetInstanceProcAddr)dlsym(lib_handle_, "vkGetInstanceProcAddr");
            #endif
            ''')

        guard_helper = PlatformGuardHelper()

        # Load global entry points
        for command in self.vk.commands.values():
            if len(command.params) == 0 or command.params[0].type not in self.vk.handles:
                out.extend(guard_helper.add_guard(command.protect))
                out.append(f'{command.name[2:]} = (PFN_{command.name})GetInstanceProcAddr(VK_NULL_HANDLE, "{command.name}");\n')
        out.extend(guard_helper.add_guard(None))

        out.append('''}

                static void LoadInstanceEntryPoints(VkInstance instance) {
            ''')

        # Load instance and device entry points
        for command in self.vk.commands.values():
            if len(command.params) > 0 and command.params[0].type in self.vk.handles:
                out.extend(guard_helper.add_guard(command.protect))
                out.append(f'{command.name[2:]} = (PFN_{command.name})GetInstanceProcAddr(instance, "{command.name}");\n')
        out.extend(guard_helper.add_guard(None))

        out.append('}\n\n')

        for command in self.vk.commands.values():
            out.extend(guard_helper.add_guard(command.protect))
            out.append(f'inline static PFN_{command.name} {command.name[2:]}{{nullptr}};\n')
        out.extend(guard_helper.add_guard(None))

        out.append('};\n')

        self.write("".join(out))
