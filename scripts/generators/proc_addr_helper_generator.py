#!/usr/bin/python3 -i
#
# Copyright (c) 2024 The Khronos Group Inc.
# Copyright (c) 2024 RasterGrid Kft.
#
# SPDX-License-Identifier: Apache-2.0

import os
from generators.base_generator import BaseGenerator
from generators.generator_utils import PlatformGuardHelper
from generators.vulkan_object import Command

class ProcAddrHelperGenerator(BaseGenerator):
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

        if self.filename == 'vksc_proc_addr_helper.h':
            self.generateHeader()
        elif self.filename == 'vksc_proc_addr_helper.cpp':
            self.generateSource()
        else:
            self.write(f'\nFile name {self.filename} has no code to generate\n')

        self.write('// NOLINTEND') # Wrap for clang-tidy to ignore

    def getCommands(self) -> dict[str,list[Command]]:
        commands = {
            'Global': [],
            'Instance': [],
            'PhysicalDevice': [],
            'Device': []
        }

        for command in self.vk.commands.values():
            if command.instance:
                if command.params[0].type == 'VkInstance':
                    commands['Instance'].append(command)
                elif command.params[0].type == 'VkPhysicalDevice':
                    commands['PhysicalDevice'].append(command)
                else:
                    commands['Global'].append(command)
            else:
                commands['Device'].append(command)

        return commands

    def generateHeader(self):
        out = []
        out.append('''
            #pragma once

            #include <vulkan/vulkan.h>
            #include <unordered_map>
            #include <string>
            #include <vector>

            #include "vksc_extension_helper.h"

            namespace vksc {
            ''')

        guard_helper = PlatformGuardHelper()

        out.append('''
            struct ProcAddrInfo {
                PFN_vkVoidFunction pfn;
                std::vector<ExtensionNumber> enabled_by;
            }; 

                   ''')

        commands = self.getCommands()
        for command_type in commands.keys():
            out.append(f'const std::unordered_map<std::string, ProcAddrInfo>& Get{command_type}ProcAddrMap();\n')

        out.append('}  // namespace vksc')

        self.write("".join(out))

    def generateSource(self):
        out = []
        out.append('''
            #include "vksc_proc_addr_helper.h"
            #include "vksc_extension_helper.h"

            namespace vksc {
            ''')

        guard_helper = PlatformGuardHelper()

        commands = self.getCommands()
        for command_type in commands.keys():
            out.append(f'''
                const std::unordered_map<std::string, ProcAddrInfo>& Get{command_type}ProcAddrMap() {{
                    static const std::unordered_map<std::string, ProcAddrInfo> proc_addr_map = {{
                ''')

            for command in commands[command_type]:
                out.extend(guard_helper.add_guard(command.protect))
                if command.extensions:
                    extension_list = ", ".join([f'GetExtensionNumber("{ext.name}")' for ext in command.extensions])
                    proc_addr_ext_info = f'{{{extension_list}}}'
                else:
                    proc_addr_ext_info = "{}"
                out.append(f'{{"{command.name}", {{(PFN_vkVoidFunction){command.name}, {proc_addr_ext_info}}}}},\n')
            out.extend(guard_helper.add_guard(None))

            out.append('''};
                    return proc_addr_map;
                }
                ''')

        out.append('}  // namespace vksc')

        self.write("".join(out))
