#!/usr/bin/python3 -i
#
# Copyright (c) 2024 The Khronos Group Inc.
# Copyright (c) 2024 RasterGrid Kft.
#
# SPDX-License-Identifier: Apache-2.0

import sys
import os
from generators.base_generator import BaseGenerator
from generators.generator_utils import PlatformGuardHelper

class VkDispatchTableGenerator(BaseGenerator):
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

        if self.filename == 'vk_dispatch_table.h':
            self.generateHeader()
        elif self.filename == 'vk_dispatch_table.cpp':
            self.generateSource()
        else:
            self.write(f'\nFile name {self.filename} has no code to generate\n')

        self.write('// NOLINTEND') # Wrap for clang-tidy to ignore

    def generateHeader(self):
        out = []
        out.append(f'''
            #pragma once

            #include <vulkan/vulkan.h>

            namespace vk {{

            class DispatchTable {{
              public:
                DispatchTable(VkInstance instance, PFN_vkGetInstanceProcAddr get_proc_addr);

            ''')

        guard_helper = PlatformGuardHelper()

        for command in self.vk.commands.values():
            if len(command.params) > 0 and command.params[0].type in self.vk.handles:
                out.extend(guard_helper.add_guard(command.protect))
                out.append(f'const PFN_{command.name} {command.name[2:]};\n')
        out.extend(guard_helper.add_guard(None))

        out.append(f'''const PFN_vkVoidFunction terminator_;
            }};

            }}  // namespace vk
            ''')

        self.write("".
        join(out))

    def generateSource(self):
        out = []
        out.append(f'''
            #include "vk_dispatch_table.h"

            namespace vk {{

            DispatchTable::DispatchTable(VkInstance instance, PFN_vkGetInstanceProcAddr get_proc_addr) :
            ''')

        guard_helper = PlatformGuardHelper()

        for command in self.vk.commands.values():
            if len(command.params) > 0 and command.params[0].type in self.vk.handles:
                out.extend(guard_helper.add_guard(command.protect))
                out.append(f'{command.name[2:]}(reinterpret_cast<PFN_{command.name}>(get_proc_addr(instance, "{command.name}"))),\n')
        out.extend(guard_helper.add_guard(None))

        out.append(f'''terminator_(nullptr)
            {{}}

            }}  // namespace vk
            ''')

        self.write("".join(out))
