#!/usr/bin/python3 -i
#
# Copyright 2023-2025 The Khronos Group Inc.
# Copyright 2023 Valve Corporation
# Copyright 2023 LunarG, Inc.
# Copyright 2023-2025 RasterGrid Kft.
#
# SPDX-License-Identifier: Apache-2.0

from vulkan_object import (VulkanObject, Command)

class PlatformGuardHelper():
    """Used to elide platform guards together, so redundant #endif then #ifdefs are removed
    Note - be sure to call add_guard(None) when done to add a trailing #endif if needed
    """
    def __init__(self):
        self.current_guard = None

    def add_guard(self, guard, extra_newline = False):
        out = []
        if self.current_guard is not guard and self.current_guard is not None:
            out.append(f'#endif  // {self.current_guard}\n')
        if extra_newline:
            out.append('\n')
        if self.current_guard is not guard and guard is not None:
            out.append(f'#ifdef {guard}\n')
        self.current_guard = guard
        return out

class CommandHelper():
    # This method filters out core commands from Vulkan versions greater than 1.2
    # For historical reasons Vulkan 1.3+ are also enabled for Vulkan SC but we need to avoid including entry points for them
    # This is a workaround to remove those entry points for the purposes of code generation, but the proper solution would be
    # to fix the spec generation tooling and remove the vulkansc API tag for Vulkan 1.3+
    @staticmethod
    def RemoveUnsupportedCoreCommands(vk: VulkanObject):
        commandsToRemove = set()
        for command in vk.commands.values():
            if command.version is not None and command.version.name.startswith('VK_VERSION_') and command.version.name > 'VK_VERSION_1_2':
                commandsToRemove.add(command.name)
        for name in commandsToRemove:
            del vk.commands[name]
