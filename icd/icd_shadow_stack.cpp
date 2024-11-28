/*
 * Copyright (c) 2024 The Khronos Group Inc.
 * Copyright (c) 2024 RasterGrid Kft.
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#include "icd_shadow_stack.h"

#include <vector>
#include <memory>
#include <mutex>

namespace icd {

// We have to jump through hoops here for lifetime management because compilers do not handle
// thread_local variables in shared libraries correctly if they have non-trivial constructors
// which could cause crashes on shared library unload
static std::mutex thread_local_shadow_stacks_mutex;
static std::vector<std::unique_ptr<ShadowStack>> thread_local_shadow_stacks;

thread_local ShadowStack* thread_local_shadow_stack_ptr{nullptr};

ShadowStack& ShadowStack::ThreadLocalStack() {
    if (thread_local_shadow_stack_ptr == nullptr) {
        std::unique_lock lock(thread_local_shadow_stacks_mutex);
        thread_local_shadow_stacks.push_back(std::unique_ptr<ShadowStack>(new ShadowStack()));
        thread_local_shadow_stack_ptr = thread_local_shadow_stacks.back().get();
    }
    return *thread_local_shadow_stack_ptr;
}

}  // namespace icd
