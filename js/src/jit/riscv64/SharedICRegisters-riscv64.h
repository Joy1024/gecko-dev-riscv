/* -*- Mode: C++; tab-width: 8; indent-tabs-mode: nil; c-basic-offset: 2 -*-
 * vim: set ts=8 sts=2 et sw=2 tw=80:
 * This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#ifndef jit_riscv64_SharedICRegisters_riscv64_h
#define jit_riscv64_SharedICRegisters_riscv64_h

#include "jit/Registers.h"
#include "jit/RegisterSets.h"
#include "jit/riscv64/MacroAssembler-riscv64.h"

namespace js {
namespace jit {

// ValueOperands R0, R1, and R2.
// R0 == JSReturnReg, and R2 uses registers not preserved across calls. R1 value
// should be preserved across calls.
static constexpr ValueOperand R0(a2);
static constexpr ValueOperand R1(s1);
static constexpr ValueOperand R2(a0);


// ICTailCallReg and ICStubReg
// These use registers that are not preserved across calls.
static constexpr Register ICTailCallReg = ra;
static constexpr Register ICStubReg = t0;

// FloatReg0 must be equal to ReturnFloatReg.
static constexpr FloatRegister FloatReg0 = fa0;
static constexpr FloatRegister FloatReg1 = fa1;
static constexpr FloatRegister FloatReg2 = fa2;
static constexpr FloatRegister FloatReg3 = fa3;

}  // namespace jit
}  // namespace js

#endif /* jit_riscv64_SharedICRegisters_riscv64_h */
