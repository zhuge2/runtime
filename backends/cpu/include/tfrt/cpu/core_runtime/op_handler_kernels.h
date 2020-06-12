/*
 * Copyright 2020 The TensorFlow Runtime Authors
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

//===- op_handler_kernels.h - Kernel interface to OpHandlers ----*- C++ -*-===//
//
// This file contains helpers that register CPU and Null OpHandler TFRT
// kernels.
//
//===----------------------------------------------------------------------===//

#ifndef TFRT_BACKENDS_CPU_CORE_RUNTIME_OP_HANDLER_KERNELS_H_
#define TFRT_BACKENDS_CPU_CORE_RUNTIME_OP_HANDLER_KERNELS_H_
#include "tfrt/host_context/kernel_registry.h"

namespace tfrt {
class KernelRegistry;

void RegisterOpHandlerKernels(KernelRegistry* registry);

}  // namespace tfrt

#endif  // TFRT_BACKENDS_CPU_CORE_RUNTIME_OP_HANDLER_KERNELS_H_
