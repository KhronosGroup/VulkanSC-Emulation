#!/usr/bin/python3 -i
#
# Copyright (c) 2024 The Khronos Group Inc.
# Copyright (c) 2024 RasterGrid Kft.
#
# SPDX-License-Identifier: Apache-2.0

import os
import re
from generators.base_generator import BaseGenerator
from generators.generator_utils import PlatformGuardHelper

class CommandBufferMemoryTrackerGenerator(BaseGenerator):
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

        if self.filename == 'vksc_command_buffer_memory_tracker.h':
            self.generateHeader()
        elif self.filename == 'vksc_command_buffer_memory_tracker.cpp':
            self.generateSource()
        else:
            self.write(f'\nFile name {self.filename} has no code to generate\n')

        self.write('// NOLINTEND') # Wrap for clang-tidy to ignore

    def cmdCost(self, name):
        cost_dict = {
            'SetViewport': '8 + viewportCount * 4',
            'SetViewportWithCount': '8 + viewportCount * 4',
            'SetScissor': '8 + scissorCount * 4',
            'SetScissorWithCount': '8 + scissorCount * 4',
            'BindDescriptorSets': '8 + (descriptorSetCount + dynamicOffsetCount) * 4',
            'BindVertexBuffers': '8 + bindingCount * 16',
            'BindVertexBuffers2': '8 + bindingCount * 24',
            'UpdateBuffer': '16 + dataSize'
        }

        if name in cost_dict:
            return cost_dict[name]
        else:
            return 32

    manual_commands = [
        "vkCmdRefreshObjectsKHR"
    ]

    def generateHeader(self):
        out = []
        out.append('''
            #pragma once

            #include "vksc_command_pool.h"
            #include "vksc_dispatchable.h"
            #include "vk_command_buffer.h"
            #include "icd_log.h"

            namespace vksc {

            class Device;

            /// @brief Shortcircuits the callchain when memory allocation goes over reservation
            class CommandBufferMemoryTracker : public vk::CommandBuffer {
              public:
                using NEXT = vk::CommandBuffer;

                CommandBufferMemoryTracker(VkCommandBuffer command_buffer, CommandPool& command_pool);

                icd::Logger& Log() { return logger_; }
                VkDeviceSize GetAllocatedSize() const { return allocated_size_; }

                VkResult BeginCommandBuffer(const VkCommandBufferBeginInfo* pBeginInfo);
                VkResult ResetCommandBuffer(VkCommandBufferResetFlags flags);\n\n''')

        for command in self.vk.commands.values():
            if re.match('vkCmd', command.name) and not command.name in self.manual_commands:
                if command.alias:
                    continue

                params_decl = []
                for param in command.params[1:]:
                    params_decl.append(param.cDeclaration)

                out.append(f'{command.returnType} {command.name[2:]}({", ".join(params_decl)});\n')

        out.append('''
          protected:
            VkResult GetStatus() const { return status_; }
            void SetStatus(VkResult status) { status_ = status; }

            CommandPool& command_pool_;

          private:
            void Reset();
            VkResult Allocate(VkDeviceSize size);

            VkDeviceSize allocated_size_;
            VkResult status_;

            icd::Logger logger_;
        };

        }  // namespace vksc
        ''')

        self.write("".join(out))

    def generateSource(self):
        out = []
        out.append('''
            #include "vksc_command_buffer_memory_tracker.h"
            #include "vksc_device.h"

            namespace vksc {

            CommandBufferMemoryTracker::CommandBufferMemoryTracker(VkCommandBuffer command_buffer, CommandPool& command_pool)
                : vk::CommandBuffer(command_buffer, command_pool.GetDevice().VkDispatch(), command_pool.GetDevice().GetFaultHandler()),
                  command_pool_(command_pool),
                  allocated_size_(0),
                  status_(VK_SUCCESS),
                  logger_(command_pool_.GetDevice().Log(), VK_OBJECT_TYPE_COMMAND_BUFFER, command_buffer) {}

            VkResult CommandBufferMemoryTracker::BeginCommandBuffer(const VkCommandBufferBeginInfo* pBeginInfo) {
                Reset();
                if (GetStatus() != VK_SUCCESS) {
                    return GetStatus();
                } else {
                    return NEXT::BeginCommandBuffer(pBeginInfo);
                }
            }

            VkResult CommandBufferMemoryTracker::ResetCommandBuffer(VkCommandBufferResetFlags flags) {
                Reset();
                if (GetStatus() != VK_SUCCESS) {
                    return GetStatus();
                } else {
                    return NEXT::ResetCommandBuffer(flags);
                }
            }''')

        for command in self.vk.commands.values():
            if re.match('vkCmd', command.name) and not command.name in self.manual_commands:
                if command.alias:
                    continue

                params_decl = []
                params_pass = []
                for param in command.params[1:]:
                    params_decl.append(param.cDeclaration)
                    params_pass.append(param.name)

                out.append(f'{command.returnType} CommandBufferMemoryTracker::{command.name[2:]}({", ".join(params_decl)}) {{')
                out.append(f'if (status_ != VK_SUCCESS) {{')
                out.append(f'return;}}\n')
                out.append(f'VkResult res = Allocate({self.cmdCost(command.name[5:])});\n')
                out.append(f'if (res == VK_SUCCESS) {{')
                out.append(f'NEXT::{command.name[2:]}({", ".join(params_pass)}); }}')
                out.append('}\n\n')

        out.append('''
            void CommandBufferMemoryTracker::Reset() {
                SetStatus(VK_SUCCESS);
                VkResult res = command_pool_.FreeMemory(GetAllocatedSize());
                if (res != VK_SUCCESS) {
                    SetStatus(res);
                    command_pool_.GetDevice().ReportFault(VK_FAULT_LEVEL_CRITICAL, VK_FAULT_TYPE_IMPLEMENTATION);
                    Log().Error("VKSC-EMU-CommandBuffer-ResetError",
                        "Failed to release command buffer resources to pool (%p).", &command_pool_);
                }
                allocated_size_ = 0;
            }

            VkResult CommandBufferMemoryTracker::Allocate(VkDeviceSize size) {
                if (GetStatus() != VK_SUCCESS) {
                    return GetStatus();
                }

                auto new_size = allocated_size_ + size;
                if (new_size > command_pool_.GetDevice().GetPhysicalDevice().GetMaxCommandBufferSize()) {
                    SetStatus(VK_ERROR_OUT_OF_DEVICE_MEMORY);
                    command_pool_.GetDevice().ReportFault(VK_FAULT_LEVEL_RECOVERABLE, VK_FAULT_TYPE_COMMAND_BUFFER_FULL);
                    Log().Error("VKSC-EMU-CommandBuffer-AllocateError",
                        "Allocation of size (%zu) to pool (%p) is more than the physical device limit of (%zu).", size, command_pool_.GetDevice().GetPhysicalDevice().GetMaxCommandBufferSize(), &command_pool_);
                    return GetStatus();
                }

                VkResult res = command_pool_.AllocateMemory(size);
                if (res != VK_SUCCESS) {
                    SetStatus(res);
                    command_pool_.GetDevice().ReportFault(VK_FAULT_LEVEL_RECOVERABLE, VK_FAULT_TYPE_COMMAND_BUFFER_FULL);
                    return GetStatus();
                }

                allocated_size_ = new_size;
                return VK_SUCCESS;
            }

        } // namespace vksc
        ''')
        self.write("".join(out))
