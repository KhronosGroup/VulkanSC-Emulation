#!/usr/bin/python3 -i
#
# Copyright (c) 2024 The Khronos Group Inc.
# Copyright (c) 2024 RasterGrid Kft.
#
# SPDX-License-Identifier: Apache-2.0

import os
from generators import vulkan_object
from generators.base_generator import BaseGenerator
from generators.generator_utils import PlatformGuardHelper

class VkDispatchableGenerator(BaseGenerator):
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

        if self.filename.startswith('vk_') and (self.filename.endswith('.h') or self.filename.endswith('.cpp')):
            handle_type_snake_case = self.filename[3:self.filename.find('.')]
            handle_type = 'Vk' + handle_type_snake_case.replace("_", " ").title().replace(" ", "")
            if handle_type in self.vk.handles and self.vk.handles[handle_type].dispatchable:
                if self.filename.endswith('.h'):
                    self.generateHeader(handle_type)
                else:
                    self.generateSource(handle_type)
            else:
                self.write(f'\nFile name {self.filename} and derived handle type {handle_type}' +
                    ' does not correspond to a known dispatchable handle type\n')
        else:
            self.write(f'\nFile name {self.filename} has no code to generate\n')

        self.write('// NOLINTEND') # Wrap for clang-tidy to ignore

    def generateHeader(self, handle_type: str):
        if handle_type == 'VkInstance':
            # The instance owns the dispatch table
            dispatch_table_param = 'DispatchTable&& dispatch_table'
            dispatch_table_init = 'dispatch_table_(std::move(dispatch_table))'
            dispatch_table_member = 'const DispatchTable dispatch_table_'
        else:
            # Other objects only hold a reference to it
            dispatch_table_param = 'const DispatchTable& dispatch_table'
            dispatch_table_init = 'dispatch_table_(dispatch_table)'
            dispatch_table_member = 'const DispatchTable& dispatch_table_'

        out = []
        out.append(f'''
            #pragma once

            #include "vk_dispatch_table.h"
            #include "icd_fault_handler.h"
            {"#include <utility>" if handle_type == 'VkInstance' else ""}

            namespace vk {{

            class {handle_type[2:]} {{
              public:
                {handle_type[2:]}({handle_type} handle, {dispatch_table_param}, icd::FaultHandler& fault_handler)
                    : handle_(handle), {dispatch_table_init}, fault_handler_(fault_handler) {{}}
            ''')

        guard_helper = PlatformGuardHelper()

        for command in self.vk.commands.values():
            if len(command.params) > 0 and command.params[0].type == handle_type:
                # Do not generate methods for alias commands
                if command.alias:
                    continue

                out.extend(guard_helper.add_guard(command.protect))
                params = []
                for param in command.params[1:]:
                    params.append(param.cDeclaration)
                out.append(f'{command.returnType} {command.name[2:]}({", ".join(params)});\n')
        out.extend(guard_helper.add_guard(None))

        out.append(f'''
                {handle_type} VkHandle() const {{ return handle_; }}
                const DispatchTable& VkDispatch() const {{ return dispatch_table_; }}

                void ReportFault(VkFaultLevel level, VkFaultType type) {{ fault_handler_.ReportFault(level, type); }}

              private:
                const {handle_type} handle_;
                {dispatch_table_member};
                icd::FaultHandler& fault_handler_;
            }};

            }}  // namespace vk
            ''')

        self.write("".join(out))

    def generateSource(self, handle_type: str):
        out = []
        out.append(f'''
            #include "{self.filename.replace('.cpp', '.h')}"
            #include "vksc_output_struct_sanitizer.h"

            namespace vk {{

            ''')

        guard_helper = PlatformGuardHelper()

        for command in self.vk.commands.values():
            if len(command.params) > 0 and command.params[0].type == handle_type:
                # Do not generate methods for alias commands
                if command.alias:
                    continue

                out.extend(guard_helper.add_guard(command.protect))
                params_decl = []
                params_pass = [ 'handle_' ]
                for param in command.params[1:]:
                    params_decl.append(param.cDeclaration)
                    params_pass.append(param.name)

                out.append(f'{command.returnType} {handle_type[2:]}::{command.name[2:]}({", ".join(params_decl)}) {{\n')

                # Determine if command has any output structure parameters
                output_structure_params : list[vulkan_object.Param] = []
                for param in command.params:
                    if not param.const and param.pointer and param.type in self.vk.structs:
                        output_structure_params.append(param)

                can_return_device_lost = (command.errorCodes is not None and 'VK_ERROR_DEVICE_LOST' in command.errorCodes)
                # Additional processing of the outputs is necessary if:
                # * the command has output structures that we have to sanitize, or
                # * the command can return VK_ERROR_DEVICE_LOST which should generate a fault
                capture_result = (len(output_structure_params) > 0 or can_return_device_lost)

                if command.returnType != 'void':
                    if capture_result:
                        out.append(f'{command.returnType} result = ')
                    else:
                        out.append('return ')

                out.append(f'dispatch_table_.{command.name[2:]}({", ".join(params_pass)});\n')

                # Handle VK_ERROR_DEVICE_LOST by generating a fault
                if can_return_device_lost:
                    out.append('if (result == VK_ERROR_DEVICE_LOST) {\n')
                    out.append('    fault_handler_.ReportFault(VK_FAULT_LEVEL_CRITICAL, VK_FAULT_TYPE_PHYSICAL_DEVICE);\n')
                    out.append('}\n')

                # Sanitize output structure parameters if needed
                if len(output_structure_params) > 0:
                    for param in output_structure_params:
                        out.append(f'if ({param.name} != nullptr) {{\n')
                        struct = self.vk.structs[param.type]
                        arg = param.name
                        if param.length:
                            for p in command.params:
                                if p.name == param.length:
                                    length = f'*{param.length}' if p.pointer else param.length
                                    out.append(f'for (uint32_t i = 0; i < {length}; ++i)\n')
                                    arg = f'&{param.name}[i]'
                        if struct.sType:
                            out.append(f'vksc::ConvertOutStructChainToVulkanSC<{param.type}>({arg});\n')
                        else:
                            out.append(f'vksc::ConvertOutStructToVulkanSC<{param.type}>({arg});\n')
                        out.append('}\n')

                if command.returnType != 'void' and capture_result:
                    out.append('return result;\n')

                out.append('}\n')
        out.extend(guard_helper.add_guard(None))

        out.append(f'''

            }}  // namespace vk
            ''')

        self.write("".join(out))
