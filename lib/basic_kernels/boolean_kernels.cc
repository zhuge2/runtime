// Copyright 2020 The TensorFlow Runtime Authors
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//      http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

//===- boolean_kernels.cc -------------------------------------------------===//
//
// This file implements host executor kernels for boolean types.
//
//===----------------------------------------------------------------------===//

#include "tfrt/basic_kernels/basic_kernels.h"
#include "tfrt/host_context/kernel_utils.h"

namespace tfrt {
namespace {

//===----------------------------------------------------------------------===//
// hex boolean constant kernels
//===----------------------------------------------------------------------===//

// In TFRT, bool attributes are 1-byte. But sizeof(bool) is not necessarily one
// byte.
bool HexConstantI1(Attribute<int8_t> arg) { return arg.get() != 0; }

//===----------------------------------------------------------------------===//
// hex boolean and kernels
//===----------------------------------------------------------------------===//
bool HexAnd(bool arg0, bool arg1) { return arg0 && arg1; }

}  // namespace

//===----------------------------------------------------------------------===//
// Registration
//===----------------------------------------------------------------------===//

void RegisterBooleanKernels(KernelRegistry* registry) {
  registry->AddKernel("hex.constant.i1", TFRT_KERNEL(HexConstantI1));

  registry->AddKernel("hex.and.i1", TFRT_KERNEL(HexAnd));
}

}  // namespace tfrt
