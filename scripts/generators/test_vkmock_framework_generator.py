#!/usr/bin/python3 -i
#
# Copyright (c) 2024 The Khronos Group Inc.
# Copyright (c) 2024 RasterGrid Kft.
#
# SPDX-License-Identifier: Apache-2.0

import os
from generators.base_generator import BaseGenerator
from generators.generator_utils import PlatformGuardHelper

class TestVkMockFrameworkGenerator(BaseGenerator):
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

        if self.filename == 'test_vkmock_framework.h':
            self.generateHeader()
        elif self.filename == 'test_vkmock_framework.cpp':
            self.generateSource()
        else:
            self.write(f'\nFile name {self.filename} has no code to generate\n')

        self.write('// NOLINTEND') # Wrap for clang-tidy to ignore

    def generateHeader(self):
        out = []
        out.append('''
            #pragma once

            #include "icd_test_defs.h"

            #ifdef _WIN32
            #include <windows.h>
            #else
            #include <dlfcn.h>
            #endif

            #include <functional>
            #include <stdio.h>
            #include <stdlib.h>

            extern "C" VKAPI_ATTR PFN_vkVoidFunction VKAPI_CALL vkmockGetProcAddr(const char* pName);

            class vkmock {
                inline static void *lib_handle_{nullptr};

              public:
                static PFN_vkVoidFunction GetProcAddr(const char* pName);

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
                        printf("Failed to open vkmock ICD library '%s'\\n", full_lib_name);
                        exit(1);
                    }
            #if defined(_WIN32)
                    auto vkmockInit = (PFN_vkmockInit)(void (*)(void))GetProcAddress((HMODULE)lib_handle_, "vkmockInit");
            #else
                    auto vkmockInit = (PFN_vkmockInit)dlsym(lib_handle_, "vkmockInit");
            #endif
                    vkmockInit(vkmockGetProcAddr);
                }

                static void Reset();
            ''')

        guard_helper = PlatformGuardHelper()

        for command in self.vk.commands.values():
            out.extend(guard_helper.add_guard(command.protect))
            out.append(f'inline static std::function<{command.returnType}({", ".join([param.cDeclaration for param in command.params])})> {command.name[2:]}{{}};\n')
        out.extend(guard_helper.add_guard(None))

        out.append('''
            };
            ''')

        self.write("".join(out))

    def generateSource(self):
        out = []
        out.append('''
            #include "test_vkmock_framework.h"

            #include <string.h>

            extern "C" VKAPI_ATTR PFN_vkVoidFunction VKAPI_CALL vkmockGetProcAddr(const char* pName) {
                return vkmock::GetProcAddr(pName);
            }
            ''')

        guard_helper = PlatformGuardHelper()

        for command in self.vk.commands.values():
            out.append('\n')
            out.extend(guard_helper.add_guard(command.protect))
            out.append(f'static VKAPI_ATTR {command.returnType} VKAPI_CALL vkmock_{command.name[2:]}(\n')
            out.append(',\n'.join([param.cDeclaration for param in command.params]))
            out.append(') {\n')
            out.append(f'return vkmock::{command.name[2:]}({",".join([param.name for param in command.params])});\n')
            out.append('}\n')
        out.extend(guard_helper.add_guard(None))

        out.append('\nPFN_vkVoidFunction vkmock::GetProcAddr(const char* pName) {')

        for command in self.vk.commands.values():
            out.extend(guard_helper.add_guard(command.protect))
            out.append(f'if (strcmp(pName, "{command.name}") == 0) {{\n')
            out.append(f'    return (PFN_vkVoidFunction)vkmock_{command.name[2:]};\n')
            out.append('}\n')
        out.extend(guard_helper.add_guard(None))
        out.append('return nullptr;\n}\n')

        out.append('\nvoid vkmock::Reset() {\n')

        for command in self.vk.commands.values():
            out.extend(guard_helper.add_guard(command.protect))
            out.append(f'{command.name[2:]} = {{}};\n')
        out.extend(guard_helper.add_guard(None))
        out.append('}\n')

        self.write("".join(out))
