#!/usr/bin/python3 -i
#
# Copyright (c) 2024 The Khronos Group Inc.
# Copyright (c) 2024 RasterGrid Kft.
#
# SPDX-License-Identifier: Apache-2.0

import os
from base_generator import BaseGenerator
from generators.generator_utils import PlatformGuardHelper

class PNextChainHelperGenerator(BaseGenerator):
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

        namespace = self.filename[:self.filename.find('_')]
        if self.filename == f'{namespace}_pnext_chain_helper.h':
            self.generateHeader(namespace)
        else:
            self.write(f'\nFile name {self.filename} has no code to generate\n')

        self.write('// NOLINTEND') # Wrap for clang-tidy to ignore

    def generateHeader(self, namespace):
        out = []
        out.append(f'''
            #pragma once

            #include <vulkan/vulkan.h>
            #include <tuple>

            namespace {namespace} {{

            template <typename BASE>
            inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize(VkStructureType type) {{
                return {{0, 0}};
            }}
            ''');

        guard_helper = PlatformGuardHelper()
        for struct in self.vk.structs.values():
            if struct.extendedBy is None:
                continue

            out.extend(guard_helper.add_guard(struct.protect))

            out.append(f'''
                template <>
                inline std::pair<size_t, size_t> GetPNextChainStructAlignmentAndSize<{struct.name}>(VkStructureType type) {{
                    switch (type) {{
                ''')

            nested_guard_helper = PlatformGuardHelper()
            for extension_struct_name in struct.extendedBy:
                extension_struct = self.vk.structs[extension_struct_name]
                out.extend(nested_guard_helper.add_guard(extension_struct.protect))
                out.append(f'''case {extension_struct.sType}:
                            return {{alignof({extension_struct_name}), sizeof({extension_struct_name})}};
                    ''')
            out.extend(nested_guard_helper.add_guard(None))

            out.append(f'''
                        default:
                            // Unknown structure
                            return {{0, 0}};
                    }}
                }}
                ''')
        out.extend(guard_helper.add_guard(None))

        out.append(f'''
            }}  // namespace {namespace}
            ''')

        self.write("".join(out))
