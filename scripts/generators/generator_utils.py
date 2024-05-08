#!/usr/bin/python3 -i
#
# Copyright 2023 The Khronos Group Inc.
# Copyright 2023 Valve Corporation
# Copyright 2023 LunarG, Inc.
# Copyright 2023 RasterGrid Kft.
#
# SPDX-License-Identifier: Apache-2.0

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
