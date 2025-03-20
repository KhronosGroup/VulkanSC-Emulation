#!/usr/bin/python3 -i
#
# Copyright (c) 2024 The Khronos Group Inc.
# Copyright (c) 2024 RasterGrid Kft.
#
# SPDX-License-Identifier: Apache-2.0

import os
from base_generator import BaseGenerator
from generators.generator_utils import PlatformGuardHelper

class OutputStructSanitizerGenerator(BaseGenerator):
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

        # Collect all structures that are direct outputs from any command
        self.direct_output_structs : dict[str, vulkan_object.Struct] = {}
        for command in self.vk.commands.values():
            for param in command.params:
                if not param.const and param.pointer and param.type in self.vk.structs:
                    self.direct_output_structs[param.type] = self.vk.structs[param.type]

        # Now collect all structures that are direct or indirect outputs from any command
        self.all_output_structs : dict[str, vulkan_object.Struct] = self.direct_output_structs.copy()
        self.ext_output_structs : dict[str, dict[str, vulkan_object.Struct]] = {}
        for struct in self.vk.structs.values():
            if struct.extends:
                for extends in struct.extends:
                    if extends in self.direct_output_structs:
                        self.all_output_structs[struct.name] = struct
                        if not extends in self.ext_output_structs:
                            self.ext_output_structs[extends] = {}
                        self.ext_output_structs[extends][struct.name] = struct

        # Include also any nested structures
        nested_structs = []
        for struct in self.all_output_structs.values():
            for member in struct.members:
                if member.type in self.vk.structs:
                    nested_structs.append(member.type)
        for nested_struct in nested_structs:
            self.all_output_structs[nested_struct] = self.vk.structs[nested_struct]

        # Then collect all bitmask types that are contained within these as we will have to filter out
        # any flags that are supported in Vulkan but not in Vulkan SC
        self.bitmasks : dict[str, vulkan_object.Bitmask] = {}
        self.flags : dict[str, vulkan_object.Bitmask] = {}
        for output_struct_name in self.all_output_structs:
            struct = self.vk.structs[output_struct_name]
            for member in struct.members:
                flag_name = member.type.replace('Flags', 'FlagBits')
                bitmask = None
                if member.type in self.vk.bitmasks and self.vk.bitmasks[member.type].name not in self.bitmasks:
                    bitmask = self.vk.bitmasks[member.type]
                elif flag_name in self.vk.bitmasks and self.vk.bitmasks[flag_name].name not in self.bitmasks:
                    bitmask = self.vk.bitmasks[flag_name]
                if bitmask:
                    self.bitmasks[bitmask.name] = bitmask
                    self.flags[bitmask.flagName] = bitmask

        if self.filename == f'vksc_output_struct_sanitizer.h':
            self.generateHeader()
        elif self.filename == f'vksc_output_struct_sanitizer.cpp':
            self.generateSource()
        else:
            self.write(f'\nFile name {self.filename} has no code to generate\n')

        self.write('// NOLINTEND') # Wrap for clang-tidy to ignore

    def generateHeader(self):
        out = []
        out.append(f'''
            #pragma once

            #include <vulkan/vulkan.h>
            #include <unordered_map>
            #include <string>

            namespace vksc {{

            template <typename T>
            void ConvertOutStructChainToVulkanSC(T* chain) {{}}

            template <typename T>
            void ConvertOutStructToVulkanSC(T* p) {{}}
            ''')

        guard_helper = PlatformGuardHelper()

        # Generate max bitmasks supported by Vulkan SC
        out.append('// clang-format off\n')
        for bitmask in self.bitmasks.values():
            out.extend(guard_helper.add_guard(bitmask.protect))
            out.append(f'const {bitmask.flagName} All{bitmask.name} = {"|".join([flag.name for flag in bitmask.flags])};\n')
        out.extend(guard_helper.add_guard(None))
        out.append('// clang-format on\n')

        # Generate individual struct sanitizers
        for struct in self.all_output_structs.values():
            out.extend(guard_helper.add_guard(struct.protect))
            out.append(f'template <> void ConvertOutStructToVulkanSC<{struct.name}>({struct.name}* p);\n')
        out.extend(guard_helper.add_guard(None))

        # Generate struct chain sanitizers
        for struct in self.direct_output_structs.values():
            out.extend(guard_helper.add_guard(struct.protect))
            out.append(f'template <> void ConvertOutStructChainToVulkanSC<{struct.name}>({struct.name}* p);\n')
        out.extend(guard_helper.add_guard(None))

        out.append(f'''
            }}  // namespace vksc
            ''')

        self.write("".join(out))

    def generateSource(self):
        out = []
        out.append(f'''
            #include "vksc_output_struct_sanitizer.h"

            namespace vksc {{

            ''')

        guard_helper = PlatformGuardHelper()

        # Generate individual struct sanitizers
        for struct in self.all_output_structs.values():
            out.extend(guard_helper.add_guard(struct.protect))
            out.append(f'''
                template <>
                void ConvertOutStructToVulkanSC<{struct.name}>({struct.name}* p) {{
                ''')
            for member in struct.members:
                # Clear any flags that are not supported in Vulkan SC
                if member.type in self.flags:
                    out.append(f'p->{member.name} = p->{member.name} & All{self.flags[member.type].name};\n')
                # Sanitize any nested structures
                if member.type in self.all_output_structs:
                    assert(not member.const)
                    if member.length:
                        # Array case
                        out.append(f'''
                            for (uint32_t i = 0; i < p->{member.length}; ++i) {{
                                ConvertOutStructToVulkanSC<{member.type}>(&p->{member.name}[i]);
                            }}
                            ''')
                    else:
                        if member.pointer:
                            # Pointer case
                            out.append(f'ConvertOutStructToVulkanSC<{member.type}>(p->{member.name});')
                        else:
                            # Embedded case
                            out.append(f'ConvertOutStructToVulkanSC<{member.type}>(&p->{member.name});')
            out.append('}\n')
        out.extend(guard_helper.add_guard(None))

        # Generate struct chain sanitizers
        for struct in self.direct_output_structs.values():
            # Only deal with extensible structures here
            if not struct.sType:
                continue

            out.extend(guard_helper.add_guard(struct.protect))
            out.append(f'''
                template <>
                void ConvertOutStructChainToVulkanSC<{struct.name}>({struct.name}* chain) {{
                    VkBaseOutStructure* base = reinterpret_cast<VkBaseOutStructure*>(chain);
                    while (base != nullptr) {{
                        switch (base->sType) {{
                ''')

            ext_structs = list(self.ext_output_structs[struct.name].values()) if struct.name in self.ext_output_structs else []
            case_guard_helper = PlatformGuardHelper()
            for ext_struct in [struct] + ext_structs:
                out.extend(case_guard_helper.add_guard(ext_struct.protect))
                out.append(f'''
                    case {ext_struct.sType}:
                        ConvertOutStructToVulkanSC(reinterpret_cast<{ext_struct.name}*>(base));
                        break;
                    ''')
            out.extend(case_guard_helper.add_guard(None))

            out.append(f'''
                            default: break;
                        }}
                        base = base->pNext;
                    }}
                }}
                ''')
        out.extend(guard_helper.add_guard(None))

        out.append(f'''
            }}  // namespace vksc
            ''')

        self.write("".join(out))
