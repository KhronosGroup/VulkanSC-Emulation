#!/usr/bin/python3 -i
#
# Copyright (c) 2024 The Khronos Group Inc.
# Copyright (c) 2024 RasterGrid Kft.
#
# SPDX-License-Identifier: Apache-2.0

import os
from generators.base_generator import BaseGenerator
from generators.generator_utils import PlatformGuardHelper

class EntryPointGenerator(BaseGenerator):
    def __init__(self):
        BaseGenerator.__init__(self)

    def generate(self):
        out = []
        out.append(f'''// *** THIS FILE IS GENERATED - DO NOT EDIT ***
            // See {os.path.basename(__file__)} for modifications

            /*
             * Copyright (c) 2024 The Khronos Group Inc.
             * Copyright (c) 2024 RasterGrid Kft.
             *
             * SPDX-License-Identifier: Apache-2.0
             */''')
        out.append('// NOLINTBEGIN') # Wrap for clang-tidy to ignore
        out.append('''
            #include <vulkan/vulkan.h>

            #include "vksc_command_buffer.h"
            #include "vksc_device.h"
            #include "vksc_instance.h"
            #include "vksc_physical_device.h"
            #include "vksc_queue.h"
            ''')

        custom_entry_points = {
            'vkGetInstanceProcAddr'
        }

        guard_helper = PlatformGuardHelper()

        for command in self.vk.commands.values():
            if command.name in custom_entry_points:
                continue
            if len(command.params) > 0 and command.params[0].type in self.vk.handles:
                handle_type = command.params[0].type
                out.extend(guard_helper.add_guard(command.protect))
                out.append(command.cPrototype.replace(";", "{"))
                params = []
                for param in command.params[1:]:
                    params.append(param.name)

                if command.alias:
                    method = command.alias[2:]
                else:
                    method = command.name[2:]

                out.append(f'return vksc::{handle_type[2:]}::FromHandle({command.params[0].name})->{method}({", ".join(params)});')
                out.append('}\n\n')
        out.extend(guard_helper.add_guard(None))

        out.append('// NOLINTEND') # Wrap for clang-tidy to ignore
        self.write("".join(out))
