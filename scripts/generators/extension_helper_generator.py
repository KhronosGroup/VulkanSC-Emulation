#!/usr/bin/python3 -i
#
# Copyright (c) 2024-2025 The Khronos Group Inc.
# Copyright (c) 2024-2025 RasterGrid Kft.
#
# SPDX-License-Identifier: Apache-2.0

import os
from base_generator import BaseGenerator
from generators.generator_utils import PlatformGuardHelper

class ExtensionHelperGenerator(BaseGenerator):
    def __init__(self):
        BaseGenerator.__init__(self)

    def generate(self):
        self.write(f'''// *** THIS FILE IS GENERATED - DO NOT EDIT ***
            // See {os.path.basename(__file__)} for modifications

            /*
             * Copyright (c) 2024-2025 The Khronos Group Inc.
             * Copyright (c) 2024-2025 RasterGrid Kft.
             *
             * SPDX-License-Identifier: Apache-2.0
             */''')
        self.write('// NOLINTBEGIN') # Wrap for clang-tidy to ignore

        namespace = self.filename[:self.filename.find('_')]
        if self.filename == f'{namespace}_extension_helper.h':
            self.generateHeader(namespace)
        elif self.filename == f'{namespace}_extension_helper.cpp':
            self.generateSource(namespace)
        else:
            self.write(f'\nFile name {self.filename} has no code to generate\n')

        self.write('// NOLINTEND') # Wrap for clang-tidy to ignore

    def generateHeader(self, namespace):
        out = []
        out.append(f'''
            #pragma once

            #include <vulkan/vulkan.h>
            #include <unordered_map>
            #include <string>

            namespace {namespace} {{

            enum class ExtensionNumber {{''')

        guard_helper = PlatformGuardHelper()

        for i, extension in enumerate(self.vk.extensions.values()):
            out.extend(guard_helper.add_guard(extension.protect))
            out.append(f'{extension.name[3:]} = {i},\n')
        out.extend(guard_helper.add_guard(None))

        out.append(f'''unknown = {len(self.vk.extensions)}
            }};

            using ExtensionMap = std::unordered_map<ExtensionNumber, uint32_t>;

            const ExtensionMap& GetInstanceExtensionsMap();
            const ExtensionMap& GetDeviceExtensionsMap();

            ExtensionNumber GetExtensionNumber(const char* extension_name);
            const char* GetExtensionName(ExtensionNumber extension_number);
            }}  // namespace {namespace}
            ''')

        self.write("".join(out))

    def generateSource(self, namespace):
        out = []
        out.append(f'''
            #include "{namespace}_extension_helper.h"

            namespace {namespace} {{
            ''')

        guard_helper = PlatformGuardHelper()

        out.append(f'''
            const ExtensionMap& GetInstanceExtensionsMap() {{
                static const ExtensionMap ext_map = {{
            ''')
        for extension in self.vk.extensions.values():
            if extension.instance:
                out.extend(guard_helper.add_guard(extension.protect))
                out.append(f'{{ExtensionNumber::{extension.name[3:]}, {extension.nameString.replace("_EXTENSION_NAME", "_SPEC_VERSION")}}},\n')
        out.extend(guard_helper.add_guard(None))

        out.append(f'''}};
                return ext_map;
            }}

            const ExtensionMap& GetDeviceExtensionsMap() {{
                static const ExtensionMap ext_map = {{
            ''')
        for extension in self.vk.extensions.values():
            if extension.device:
                out.extend(guard_helper.add_guard(extension.protect))
                out.append(f'{{ExtensionNumber::{extension.name[3:]}, {extension.nameString.replace("_EXTENSION_NAME", "_SPEC_VERSION")}}},\n')
        out.extend(guard_helper.add_guard(None))

        out.append(f'''}};
                return ext_map;
            }}

            ExtensionNumber GetExtensionNumber(const char* extension_name) {{
                   static const std::unordered_map<std::string, ExtensionNumber> ext_map = {{
            ''')

        for extension in self.vk.extensions.values():
            out.extend(guard_helper.add_guard(extension.protect))
            out.append(f'{{"{extension.name}", ExtensionNumber::{extension.name[3:]}}},\n')
        out.extend(guard_helper.add_guard(None))
        out.append(f'''
            }};
                const auto it = ext_map.find(extension_name);
                if (it != ext_map.cend()) {{
                    return it->second;
                }} else {{
                    return ExtensionNumber::unknown;
                }}
        }}

        const char* GetExtensionName(ExtensionNumber extension_number){{
            switch (extension_number) {{
        ''')

        for extension in self.vk.extensions.values():
            out.extend(guard_helper.add_guard(extension.protect))
            out.append(f'case ExtensionNumber::{extension.name[3:]}: return "{extension.name}"; break;\n')
        out.extend(guard_helper.add_guard(None))

        out.append(f'default: return nullptr;')

        out.append(f'''
            }}
        }}

        }}  // namespace {namespace}
        ''')

        self.write("".join(out))
