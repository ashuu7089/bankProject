#include "src/ast/ast.h"
#include "src/builtins/builtins-array-gen.h"
#include "src/builtins/builtins-bigint-gen.h"
#include "src/builtins/builtins-collections-gen.h"
#include "src/builtins/builtins-constructor-gen.h"
#include "src/builtins/builtins-data-view-gen.h"
#include "src/builtins/builtins-iterator-gen.h"
#include "src/builtins/builtins-promise-gen.h"
#include "src/builtins/builtins-promise.h"
#include "src/builtins/builtins-proxy-gen.h"
#include "src/builtins/builtins-regexp-gen.h"
#include "src/builtins/builtins-string-gen.h"
#include "src/builtins/builtins-typed-array-gen.h"
#include "src/builtins/builtins-utils-gen.h"
#include "src/builtins/builtins-wasm-gen.h"
#include "src/builtins/builtins.h"
#include "src/codegen/code-factory.h"
#include "src/debug/debug-wasm-objects.h"
#include "src/heap/factory-inl.h"
#include "src/ic/binary-op-assembler.h"
#include "src/ic/handler-configuration-inl.h"
#include "src/objects/arguments.h"
#include "src/objects/bigint.h"
#include "src/objects/call-site-info.h"
#include "src/objects/elements-kind.h"
#include "src/objects/free-space.h"
#include "src/objects/intl-objects.h"
#include "src/objects/js-atomics-synchronization.h"
#include "src/objects/js-break-iterator.h"
#include "src/objects/js-collator.h"
#include "src/objects/js-date-time-format.h"
#include "src/objects/js-display-names.h"
#include "src/objects/js-duration-format.h"
#include "src/objects/js-function.h"
#include "src/objects/js-generator.h"
#include "src/objects/js-list-format.h"
#include "src/objects/js-locale.h"
#include "src/objects/js-number-format.h"
#include "src/objects/js-objects.h"
#include "src/objects/js-plural-rules.h"
#include "src/objects/js-promise.h"
#include "src/objects/js-raw-json.h"
#include "src/objects/js-regexp-string-iterator.h"
#include "src/objects/js-relative-time-format.h"
#include "src/objects/js-segment-iterator.h"
#include "src/objects/js-segmenter.h"
#include "src/objects/js-segments.h"
#include "src/objects/js-shadow-realm.h"
#include "src/objects/js-shared-array.h"
#include "src/objects/js-struct.h"
#include "src/objects/js-temporal-objects.h"
#include "src/objects/js-weak-refs.h"
#include "src/objects/objects.h"
#include "src/objects/ordered-hash-table.h"
#include "src/objects/property-array.h"
#include "src/objects/property-descriptor-object.h"
#include "src/objects/source-text-module.h"
#include "src/objects/swiss-hash-table-helpers.h"
#include "src/objects/swiss-name-dictionary.h"
#include "src/objects/synthetic-module.h"
#include "src/objects/template-objects.h"
#include "src/objects/torque-defined-classes.h"
#include "src/objects/turbofan-types.h"
#include "src/torque/runtime-support.h"
// Required Builtins:
#include "torque-generated/src/builtins/builtins-bigint-tq-csa.h"
#include "torque-generated/src/builtins/array-findindex-tq-csa.h"
#include "torque-generated/src/builtins/base-tq-csa.h"
#include "torque-generated/src/builtins/builtins-bigint-tq-csa.h"
#include "torque-generated/src/builtins/cast-tq-csa.h"
#include "torque-generated/src/builtins/convert-tq-csa.h"
#include "torque-generated/src/objects/bigint-tq-csa.h"

namespace v8 {
namespace internal {

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/builtins-bigint.tq?l=9&c=1
TNode<Uint32T> kPositiveSign_0(compiler::CodeAssemblerState* state_) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

    ca_.Bind(&block0);
  TNode<Uint32T> tmp0;
    tmp0 = FromConstexpr_uint32_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
  return TNode<Uint32T>{tmp0};}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/builtins-bigint.tq?l=10&c=1
TNode<Uint32T> kNegativeSign_0(compiler::CodeAssemblerState* state_) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

    ca_.Bind(&block0);
  TNode<Uint32T> tmp0;
    tmp0 = FromConstexpr_uint32_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x1ull));
  return TNode<Uint32T>{tmp0};}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/builtins-bigint.tq?l=39&c=1
TNode<BoolT> IsCanonicalized_0(compiler::CodeAssemblerState* state_, TNode<BigInt> p_bigint) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<IntPtrT> tmp0;
  TNode<IntPtrT> tmp1;
  TNode<BoolT> tmp2;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = BigIntBuiltinsAssembler(state_).ReadBigIntLength(TNode<BigInt>{p_bigint});
    tmp1 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp2 = CodeStubAssembler(state_).WordEqual(TNode<IntPtrT>{tmp0}, TNode<IntPtrT>{tmp1});
    ca_.Branch(tmp2, &block2, std::vector<compiler::Node*>{}, &block3, std::vector<compiler::Node*>{});
  }

  TNode<Uint32T> tmp3;
  TNode<Uint32T> tmp4;
  TNode<BoolT> tmp5;
  if (block2.is_used()) {
    ca_.Bind(&block2);
    tmp3 = BigIntBuiltinsAssembler(state_).ReadBigIntSign(TNode<BigInt>{p_bigint});
    tmp4 = kPositiveSign_0(state_);
    tmp5 = CodeStubAssembler(state_).Word32Equal(TNode<Uint32T>{tmp3}, TNode<Uint32T>{tmp4});
    ca_.Goto(&block1, tmp5);
  }

  TNode<IntPtrT> tmp6;
  TNode<IntPtrT> tmp7;
  TNode<UintPtrT> tmp8;
  TNode<UintPtrT> tmp9;
  TNode<BoolT> tmp10;
  if (block3.is_used()) {
    ca_.Bind(&block3);
    tmp6 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x1ull));
    tmp7 = CodeStubAssembler(state_).IntPtrSub(TNode<IntPtrT>{tmp0}, TNode<IntPtrT>{tmp6});
    tmp8 = CodeStubAssembler(state_).LoadBigIntDigit(TNode<BigInt>{p_bigint}, TNode<IntPtrT>{tmp7});
    tmp9 = FromConstexpr_uintptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp10 = CodeStubAssembler(state_).WordNotEqual(TNode<UintPtrT>{tmp8}, TNode<UintPtrT>{tmp9});
    ca_.Goto(&block1, tmp10);
  }

  TNode<BoolT> phi_bb1_1;
  if (block1.is_used()) {
    ca_.Bind(&block1, &phi_bb1_1);
    ca_.Goto(&block4);
  }

    ca_.Bind(&block4);
  return TNode<BoolT>{phi_bb1_1};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/builtins-bigint.tq?l=49&c=1
TNode<Uint32T> InvertSign_0(compiler::CodeAssemblerState* state_, TNode<Uint32T> p_sign) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Uint32T> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<Uint32T> tmp0;
  TNode<BoolT> tmp1;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = kPositiveSign_0(state_);
    tmp1 = CodeStubAssembler(state_).Word32Equal(TNode<Uint32T>{p_sign}, TNode<Uint32T>{tmp0});
    ca_.Branch(tmp1, &block2, std::vector<compiler::Node*>{}, &block3, std::vector<compiler::Node*>{});
  }

  TNode<Uint32T> tmp2;
  if (block2.is_used()) {
    ca_.Bind(&block2);
    tmp2 = kNegativeSign_0(state_);
    ca_.Goto(&block4, tmp2);
  }

  TNode<Uint32T> tmp3;
  if (block3.is_used()) {
    ca_.Bind(&block3);
    tmp3 = kPositiveSign_0(state_);
    ca_.Goto(&block4, tmp3);
  }

  TNode<Uint32T> phi_bb4_1;
  if (block4.is_used()) {
    ca_.Bind(&block4, &phi_bb4_1);
    ca_.Goto(&block6);
  }

    ca_.Bind(&block6);
  return TNode<Uint32T>{phi_bb4_1};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/builtins-bigint.tq?l=53&c=1
TNode<BigInt> AllocateEmptyBigIntNoThrow_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Uint32T> p_sign, TNode<IntPtrT> p_length, compiler::CodeAssemblerLabel* label_BigIntTooBig) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<IntPtrT> tmp0;
  TNode<BoolT> tmp1;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = FromConstexpr_intptr_constexpr_intptr_0(state_, BigInt::kMaxLength);
    tmp1 = CodeStubAssembler(state_).IntPtrGreaterThan(TNode<IntPtrT>{p_length}, TNode<IntPtrT>{tmp0});
    ca_.Branch(tmp1, &block3, std::vector<compiler::Node*>{}, &block4, std::vector<compiler::Node*>{});
  }

  if (block3.is_used()) {
    ca_.Bind(&block3);
    ca_.Goto(label_BigIntTooBig);
  }

  TNode<BigInt> tmp2;
  if (block4.is_used()) {
    ca_.Bind(&block4);
    tmp2 = CodeStubAssembler(state_).AllocateBigInt(TNode<IntPtrT>{p_length});
    BigIntBuiltinsAssembler(state_).WriteBigIntSignAndLength(TNode<BigInt>{tmp2}, TNode<Uint32T>{p_sign}, TNode<IntPtrT>{p_length});
    ca_.Goto(&block5);
  }

    ca_.Bind(&block5);
  return TNode<BigInt>{tmp2};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/builtins-bigint.tq?l=64&c=1
TNode<BigInt> AllocateEmptyBigInt_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Uint32T> p_sign, TNode<IntPtrT> p_length) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<BigInt> tmp0;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    compiler::CodeAssemblerLabel label1(&ca_);
    tmp0 = AllocateEmptyBigIntNoThrow_0(state_, TNode<Context>{p_context}, TNode<Uint32T>{p_sign}, TNode<IntPtrT>{p_length}, &label1);
    ca_.Goto(&block4);
    if (label1.is_used()) {
      ca_.Bind(&label1);
      ca_.Goto(&block5);
    }
  }

  if (block5.is_used()) {
    ca_.Bind(&block5);
    CodeStubAssembler(state_).ThrowRangeError(TNode<Context>{p_context}, MessageTemplate::kBigIntTooBig);
  }

  if (block4.is_used()) {
    ca_.Bind(&block4);
    ca_.Goto(&block6);
  }

    ca_.Bind(&block6);
  return TNode<BigInt>{tmp0};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/builtins-bigint.tq?l=73&c=1
TNode<Int32T> MutableBigIntAbsoluteCompare_0(compiler::CodeAssemblerState* state_, TNode<BigInt> p_x, TNode<BigInt> p_y) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<Int32T> tmp0;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = BigIntBuiltinsAssembler(state_).CppAbsoluteCompare(TNode<BigInt>{p_x}, TNode<BigInt>{p_y});
    ca_.Goto(&block2);
  }

    ca_.Bind(&block2);
  return TNode<Int32T>{tmp0};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/builtins-bigint.tq?l=77&c=1
TNode<BigInt> MutableBigIntAbsoluteSub_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<BigInt> p_x, TNode<BigInt> p_y, TNode<Uint32T> p_resultSign) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block12(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block14(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block15(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BigInt> block16(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block13(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BigInt> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BigInt> block18(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<IntPtrT> tmp0;
  TNode<IntPtrT> tmp1;
  TNode<Uint32T> tmp2;
  TNode<IntPtrT> tmp3;
  TNode<BoolT> tmp4;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = BigIntBuiltinsAssembler(state_).ReadBigIntLength(TNode<BigInt>{p_x});
    tmp1 = BigIntBuiltinsAssembler(state_).ReadBigIntLength(TNode<BigInt>{p_y});
    tmp2 = BigIntBuiltinsAssembler(state_).ReadBigIntSign(TNode<BigInt>{p_x});
    tmp3 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp4 = CodeStubAssembler(state_).WordEqual(TNode<IntPtrT>{tmp0}, TNode<IntPtrT>{tmp3});
    ca_.Branch(tmp4, &block6, std::vector<compiler::Node*>{}, &block7, std::vector<compiler::Node*>{});
  }

  if (block6.is_used()) {
    ca_.Bind(&block6);
    ca_.Goto(&block1, p_x);
  }

  TNode<IntPtrT> tmp5;
  TNode<BoolT> tmp6;
  if (block7.is_used()) {
    ca_.Bind(&block7);
    tmp5 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp6 = CodeStubAssembler(state_).WordEqual(TNode<IntPtrT>{tmp1}, TNode<IntPtrT>{tmp5});
    ca_.Branch(tmp6, &block12, std::vector<compiler::Node*>{}, &block13, std::vector<compiler::Node*>{});
  }

  TNode<BoolT> tmp7;
  if (block12.is_used()) {
    ca_.Bind(&block12);
    tmp7 = CodeStubAssembler(state_).Word32Equal(TNode<Uint32T>{p_resultSign}, TNode<Uint32T>{tmp2});
    ca_.Branch(tmp7, &block14, std::vector<compiler::Node*>{}, &block15, std::vector<compiler::Node*>{});
  }

  if (block14.is_used()) {
    ca_.Bind(&block14);
    ca_.Goto(&block16, p_x);
  }

  TNode<BigInt> tmp8;
  if (block15.is_used()) {
    ca_.Bind(&block15);
    tmp8 = ca_.CallStub<BigInt>(Builtins::CallableFor(ca_.isolate(), Builtin::kBigIntUnaryMinus), p_context, p_x);
    ca_.Goto(&block16, tmp8);
  }

  TNode<BigInt> phi_bb16_7;
  if (block16.is_used()) {
    ca_.Bind(&block16, &phi_bb16_7);
    ca_.Goto(&block1, phi_bb16_7);
  }

  TNode<BigInt> tmp9;
  TNode<BigInt> tmp10;
  if (block13.is_used()) {
    ca_.Bind(&block13);
    tmp9 = AllocateEmptyBigInt_0(state_, TNode<Context>{p_context}, TNode<Uint32T>{p_resultSign}, TNode<IntPtrT>{tmp0});
    BigIntBuiltinsAssembler(state_).CppAbsoluteSubAndCanonicalize(TNode<BigInt>{tmp9}, TNode<BigInt>{p_x}, TNode<BigInt>{p_y});
    tmp10 = Convert_BigInt_MutableBigInt_0(state_, TNode<BigInt>{tmp9});
    ca_.Goto(&block1, tmp10);
  }

  TNode<BigInt> phi_bb1_4;
  if (block1.is_used()) {
    ca_.Bind(&block1, &phi_bb1_4);
    ca_.Goto(&block18, phi_bb1_4);
  }

  TNode<BigInt> phi_bb18_4;
    ca_.Bind(&block18, &phi_bb18_4);
  return TNode<BigInt>{phi_bb18_4};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/builtins-bigint.tq?l=98&c=1
TNode<BigInt> MutableBigIntAbsoluteAdd_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<BigInt> p_xBigint, TNode<BigInt> p_yBigint, TNode<Uint32T> p_resultSign, compiler::CodeAssemblerLabel* label_BigIntTooBig) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, BigInt, BigInt> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block11(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block13(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block14(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BigInt> block15(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block12(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block18(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block17(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BigInt> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BigInt> block19(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<IntPtrT> tmp0;
  TNode<IntPtrT> tmp1;
  TNode<BoolT> tmp2;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = BigIntBuiltinsAssembler(state_).ReadBigIntLength(TNode<BigInt>{p_xBigint});
    tmp1 = BigIntBuiltinsAssembler(state_).ReadBigIntLength(TNode<BigInt>{p_yBigint});
    tmp2 = CodeStubAssembler(state_).IntPtrLessThan(TNode<IntPtrT>{tmp0}, TNode<IntPtrT>{tmp1});
    ca_.Branch(tmp2, &block3, std::vector<compiler::Node*>{}, &block4, std::vector<compiler::Node*>{tmp0, tmp1, p_xBigint, p_yBigint});
  }

  if (block3.is_used()) {
    ca_.Bind(&block3);
    ca_.Goto(&block4, tmp1, tmp0, p_yBigint, p_xBigint);
  }

  TNode<IntPtrT> phi_bb4_4;
  TNode<IntPtrT> phi_bb4_5;
  TNode<BigInt> phi_bb4_6;
  TNode<BigInt> phi_bb4_7;
  TNode<IntPtrT> tmp3;
  TNode<BoolT> tmp4;
  if (block4.is_used()) {
    ca_.Bind(&block4, &phi_bb4_4, &phi_bb4_5, &phi_bb4_6, &phi_bb4_7);
    tmp3 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp4 = CodeStubAssembler(state_).WordEqual(TNode<IntPtrT>{phi_bb4_4}, TNode<IntPtrT>{tmp3});
    ca_.Branch(tmp4, &block5, std::vector<compiler::Node*>{}, &block6, std::vector<compiler::Node*>{});
  }

  if (block5.is_used()) {
    ca_.Bind(&block5);
    ca_.Goto(&block2, phi_bb4_6);
  }

  TNode<IntPtrT> tmp5;
  TNode<BoolT> tmp6;
  if (block6.is_used()) {
    ca_.Bind(&block6);
    tmp5 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp6 = CodeStubAssembler(state_).WordEqual(TNode<IntPtrT>{phi_bb4_5}, TNode<IntPtrT>{tmp5});
    ca_.Branch(tmp6, &block11, std::vector<compiler::Node*>{}, &block12, std::vector<compiler::Node*>{});
  }

  TNode<Uint32T> tmp7;
  TNode<BoolT> tmp8;
  if (block11.is_used()) {
    ca_.Bind(&block11);
    tmp7 = BigIntBuiltinsAssembler(state_).ReadBigIntSign(TNode<BigInt>{phi_bb4_6});
    tmp8 = CodeStubAssembler(state_).Word32Equal(TNode<Uint32T>{p_resultSign}, TNode<Uint32T>{tmp7});
    ca_.Branch(tmp8, &block13, std::vector<compiler::Node*>{}, &block14, std::vector<compiler::Node*>{});
  }

  if (block13.is_used()) {
    ca_.Bind(&block13);
    ca_.Goto(&block15, phi_bb4_6);
  }

  TNode<BigInt> tmp9;
  if (block14.is_used()) {
    ca_.Bind(&block14);
    tmp9 = ca_.CallStub<BigInt>(Builtins::CallableFor(ca_.isolate(), Builtin::kBigIntUnaryMinus), p_context, phi_bb4_6);
    ca_.Goto(&block15, tmp9);
  }

  TNode<BigInt> phi_bb15_8;
  if (block15.is_used()) {
    ca_.Bind(&block15, &phi_bb15_8);
    ca_.Goto(&block2, phi_bb15_8);
  }

  TNode<IntPtrT> tmp10;
  TNode<IntPtrT> tmp11;
  TNode<BigInt> tmp12;
  if (block12.is_used()) {
    ca_.Bind(&block12);
    tmp10 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x1ull));
    tmp11 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{phi_bb4_4}, TNode<IntPtrT>{tmp10});
    compiler::CodeAssemblerLabel label13(&ca_);
    tmp12 = AllocateEmptyBigIntNoThrow_0(state_, TNode<Context>{p_context}, TNode<Uint32T>{p_resultSign}, TNode<IntPtrT>{tmp11}, &label13);
    ca_.Goto(&block17);
    if (label13.is_used()) {
      ca_.Bind(&label13);
      ca_.Goto(&block18);
    }
  }

  if (block18.is_used()) {
    ca_.Bind(&block18);
    ca_.Goto(label_BigIntTooBig);
  }

  TNode<BigInt> tmp14;
  if (block17.is_used()) {
    ca_.Bind(&block17);
    BigIntBuiltinsAssembler(state_).CppAbsoluteAddAndCanonicalize(TNode<BigInt>{tmp12}, TNode<BigInt>{phi_bb4_6}, TNode<BigInt>{phi_bb4_7});
    tmp14 = Convert_BigInt_MutableBigInt_0(state_, TNode<BigInt>{tmp12});
    ca_.Goto(&block2, tmp14);
  }

  TNode<BigInt> phi_bb2_4;
  if (block2.is_used()) {
    ca_.Bind(&block2, &phi_bb2_4);
    ca_.Goto(&block19, phi_bb2_4);
  }

  TNode<BigInt> phi_bb19_4;
    ca_.Bind(&block19, &phi_bb19_4);
  return TNode<BigInt>{phi_bb19_4};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/builtins-bigint.tq?l=133&c=1
TNode<BigInt> BigIntAddImpl_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<BigInt> p_x, TNode<BigInt> p_y, compiler::CodeAssemblerLabel* label_BigIntTooBig) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BigInt> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<Uint32T> tmp0;
  TNode<Uint32T> tmp1;
  TNode<BoolT> tmp2;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = BigIntBuiltinsAssembler(state_).ReadBigIntSign(TNode<BigInt>{p_x});
    tmp1 = BigIntBuiltinsAssembler(state_).ReadBigIntSign(TNode<BigInt>{p_y});
    tmp2 = CodeStubAssembler(state_).Word32Equal(TNode<Uint32T>{tmp0}, TNode<Uint32T>{tmp1});
    ca_.Branch(tmp2, &block3, std::vector<compiler::Node*>{}, &block4, std::vector<compiler::Node*>{});
  }

  TNode<BigInt> tmp3;
  if (block3.is_used()) {
    ca_.Bind(&block3);
    compiler::CodeAssemblerLabel label4(&ca_);
    tmp3 = MutableBigIntAbsoluteAdd_0(state_, TNode<Context>{p_context}, TNode<BigInt>{p_x}, TNode<BigInt>{p_y}, TNode<Uint32T>{tmp0}, &label4);
    ca_.Goto(&block5);
    if (label4.is_used()) {
      ca_.Bind(&label4);
      ca_.Goto(&block6);
    }
  }

  if (block6.is_used()) {
    ca_.Bind(&block6);
    ca_.Goto(label_BigIntTooBig);
  }

  if (block5.is_used()) {
    ca_.Bind(&block5);
    ca_.Goto(&block2, tmp3);
  }

  TNode<Int32T> tmp5;
  TNode<Int32T> tmp6;
  TNode<BoolT> tmp7;
  if (block4.is_used()) {
    ca_.Bind(&block4);
    tmp5 = MutableBigIntAbsoluteCompare_0(state_, TNode<BigInt>{p_x}, TNode<BigInt>{p_y});
    tmp6 = FromConstexpr_int32_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp7 = CodeStubAssembler(state_).Int32GreaterThanOrEqual(TNode<Int32T>{tmp5}, TNode<Int32T>{tmp6});
    ca_.Branch(tmp7, &block7, std::vector<compiler::Node*>{}, &block8, std::vector<compiler::Node*>{});
  }

  TNode<BigInt> tmp8;
  if (block7.is_used()) {
    ca_.Bind(&block7);
    tmp8 = MutableBigIntAbsoluteSub_0(state_, TNode<Context>{p_context}, TNode<BigInt>{p_x}, TNode<BigInt>{p_y}, TNode<Uint32T>{tmp0});
    ca_.Goto(&block2, tmp8);
  }

  TNode<Uint32T> tmp9;
  TNode<BigInt> tmp10;
  if (block8.is_used()) {
    ca_.Bind(&block8);
    tmp9 = InvertSign_0(state_, TNode<Uint32T>{tmp0});
    tmp10 = MutableBigIntAbsoluteSub_0(state_, TNode<Context>{p_context}, TNode<BigInt>{p_y}, TNode<BigInt>{p_x}, TNode<Uint32T>{tmp9});
    ca_.Goto(&block2, tmp10);
  }

  TNode<BigInt> phi_bb2_3;
  if (block2.is_used()) {
    ca_.Bind(&block2, &phi_bb2_3);
    ca_.Goto(&block9);
  }

    ca_.Bind(&block9);
  return TNode<BigInt>{phi_bb2_3};
}

TF_BUILTIN(BigIntAddNoThrow, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Context> parameter0 = UncheckedParameter<Context>(Descriptor::kContext);
  USE(parameter0);
  TNode<BigInt> parameter1 = UncheckedParameter<BigInt>(Descriptor::kX);
  USE(parameter1);
  TNode<BigInt> parameter2 = UncheckedParameter<BigInt>(Descriptor::kY);
  USE(parameter2);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<BigInt> tmp0;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    compiler::CodeAssemblerLabel label1(&ca_);
    tmp0 = BigIntAddImpl_0(state_, TNode<Context>{parameter0}, TNode<BigInt>{parameter1}, TNode<BigInt>{parameter2}, &label1);
    ca_.Goto(&block3);
    if (label1.is_used()) {
      ca_.Bind(&label1);
      ca_.Goto(&block4);
    }
  }

  TNode<Smi> tmp2;
  if (block4.is_used()) {
    ca_.Bind(&block4);
    tmp2 = Convert_Smi_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    CodeStubAssembler(state_).Return(tmp2);
  }

  if (block3.is_used()) {
    ca_.Bind(&block3);
    CodeStubAssembler(state_).Return(tmp0);
  }
}

TF_BUILTIN(BigIntAdd, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Context> parameter0 = UncheckedParameter<Context>(Descriptor::kContext);
  USE(parameter0);
  TNode<Numeric> parameter1 = UncheckedParameter<Numeric>(Descriptor::kXNum);
  USE(parameter1);
  TNode<Numeric> parameter2 = UncheckedParameter<Numeric>(Descriptor::kYNum);
  USE(parameter2);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<BigInt> tmp0;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    compiler::CodeAssemblerLabel label1(&ca_);
    tmp0 = Cast_BigInt_1(state_, TNode<Context>{parameter0}, TNode<Object>{parameter1}, &label1);
    ca_.Goto(&block5);
    if (label1.is_used()) {
      ca_.Bind(&label1);
      ca_.Goto(&block6);
    }
  }

  if (block6.is_used()) {
    ca_.Bind(&block6);
    ca_.Goto(&block4);
  }

  TNode<BigInt> tmp2;
  if (block5.is_used()) {
    ca_.Bind(&block5);
    compiler::CodeAssemblerLabel label3(&ca_);
    tmp2 = Cast_BigInt_1(state_, TNode<Context>{parameter0}, TNode<Object>{parameter2}, &label3);
    ca_.Goto(&block7);
    if (label3.is_used()) {
      ca_.Bind(&label3);
      ca_.Goto(&block8);
    }
  }

  if (block8.is_used()) {
    ca_.Bind(&block8);
    ca_.Goto(&block4);
  }

  TNode<BigInt> tmp4;
  if (block7.is_used()) {
    ca_.Bind(&block7);
    compiler::CodeAssemblerLabel label5(&ca_);
    tmp4 = BigIntAddImpl_0(state_, TNode<Context>{parameter0}, TNode<BigInt>{tmp0}, TNode<BigInt>{tmp2}, &label5);
    ca_.Goto(&block9);
    if (label5.is_used()) {
      ca_.Bind(&label5);
      ca_.Goto(&block10);
    }
  }

  if (block10.is_used()) {
    ca_.Bind(&block10);
    CodeStubAssembler(state_).ThrowRangeError(TNode<Context>{parameter0}, MessageTemplate::kBigIntTooBig);
  }

  if (block9.is_used()) {
    ca_.Bind(&block9);
    CodeStubAssembler(state_).Return(tmp4);
  }

  if (block4.is_used()) {
    ca_.Bind(&block4);
    CodeStubAssembler(state_).ThrowTypeError(TNode<Context>{parameter0}, MessageTemplate::kBigIntMixedTypes);
  }
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/builtins-bigint.tq?l=175&c=1
TNode<BigInt> BigIntSubtractImpl_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<BigInt> p_x, TNode<BigInt> p_y, compiler::CodeAssemblerLabel* label_BigIntTooBig) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BigInt> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<Uint32T> tmp0;
  TNode<Uint32T> tmp1;
  TNode<BoolT> tmp2;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = BigIntBuiltinsAssembler(state_).ReadBigIntSign(TNode<BigInt>{p_x});
    tmp1 = BigIntBuiltinsAssembler(state_).ReadBigIntSign(TNode<BigInt>{p_y});
    tmp2 = CodeStubAssembler(state_).Word32NotEqual(TNode<Uint32T>{tmp0}, TNode<Uint32T>{tmp1});
    ca_.Branch(tmp2, &block3, std::vector<compiler::Node*>{}, &block4, std::vector<compiler::Node*>{});
  }

  TNode<BigInt> tmp3;
  if (block3.is_used()) {
    ca_.Bind(&block3);
    compiler::CodeAssemblerLabel label4(&ca_);
    tmp3 = MutableBigIntAbsoluteAdd_0(state_, TNode<Context>{p_context}, TNode<BigInt>{p_x}, TNode<BigInt>{p_y}, TNode<Uint32T>{tmp0}, &label4);
    ca_.Goto(&block5);
    if (label4.is_used()) {
      ca_.Bind(&label4);
      ca_.Goto(&block6);
    }
  }

  if (block6.is_used()) {
    ca_.Bind(&block6);
    ca_.Goto(label_BigIntTooBig);
  }

  if (block5.is_used()) {
    ca_.Bind(&block5);
    ca_.Goto(&block2, tmp3);
  }

  TNode<Int32T> tmp5;
  TNode<Int32T> tmp6;
  TNode<BoolT> tmp7;
  if (block4.is_used()) {
    ca_.Bind(&block4);
    tmp5 = MutableBigIntAbsoluteCompare_0(state_, TNode<BigInt>{p_x}, TNode<BigInt>{p_y});
    tmp6 = FromConstexpr_int32_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp7 = CodeStubAssembler(state_).Int32GreaterThanOrEqual(TNode<Int32T>{tmp5}, TNode<Int32T>{tmp6});
    ca_.Branch(tmp7, &block7, std::vector<compiler::Node*>{}, &block8, std::vector<compiler::Node*>{});
  }

  TNode<BigInt> tmp8;
  if (block7.is_used()) {
    ca_.Bind(&block7);
    tmp8 = MutableBigIntAbsoluteSub_0(state_, TNode<Context>{p_context}, TNode<BigInt>{p_x}, TNode<BigInt>{p_y}, TNode<Uint32T>{tmp0});
    ca_.Goto(&block2, tmp8);
  }

  TNode<Uint32T> tmp9;
  TNode<BigInt> tmp10;
  if (block8.is_used()) {
    ca_.Bind(&block8);
    tmp9 = InvertSign_0(state_, TNode<Uint32T>{tmp0});
    tmp10 = MutableBigIntAbsoluteSub_0(state_, TNode<Context>{p_context}, TNode<BigInt>{p_y}, TNode<BigInt>{p_x}, TNode<Uint32T>{tmp9});
    ca_.Goto(&block2, tmp10);
  }

  TNode<BigInt> phi_bb2_3;
  if (block2.is_used()) {
    ca_.Bind(&block2, &phi_bb2_3);
    ca_.Goto(&block9);
  }

    ca_.Bind(&block9);
  return TNode<BigInt>{phi_bb2_3};
}

TF_BUILTIN(BigIntSubtractNoThrow, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Context> parameter0 = UncheckedParameter<Context>(Descriptor::kContext);
  USE(parameter0);
  TNode<BigInt> parameter1 = UncheckedParameter<BigInt>(Descriptor::kX);
  USE(parameter1);
  TNode<BigInt> parameter2 = UncheckedParameter<BigInt>(Descriptor::kY);
  USE(parameter2);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<BigInt> tmp0;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    compiler::CodeAssemblerLabel label1(&ca_);
    tmp0 = BigIntSubtractImpl_0(state_, TNode<Context>{parameter0}, TNode<BigInt>{parameter1}, TNode<BigInt>{parameter2}, &label1);
    ca_.Goto(&block3);
    if (label1.is_used()) {
      ca_.Bind(&label1);
      ca_.Goto(&block4);
    }
  }

  TNode<Smi> tmp2;
  if (block4.is_used()) {
    ca_.Bind(&block4);
    tmp2 = Convert_Smi_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    CodeStubAssembler(state_).Return(tmp2);
  }

  if (block3.is_used()) {
    ca_.Bind(&block3);
    CodeStubAssembler(state_).Return(tmp0);
  }
}

TF_BUILTIN(BigIntSubtract, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Context> parameter0 = UncheckedParameter<Context>(Descriptor::kContext);
  USE(parameter0);
  TNode<Numeric> parameter1 = UncheckedParameter<Numeric>(Descriptor::kXNum);
  USE(parameter1);
  TNode<Numeric> parameter2 = UncheckedParameter<Numeric>(Descriptor::kYNum);
  USE(parameter2);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<BigInt> tmp0;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    compiler::CodeAssemblerLabel label1(&ca_);
    tmp0 = Cast_BigInt_1(state_, TNode<Context>{parameter0}, TNode<Object>{parameter1}, &label1);
    ca_.Goto(&block5);
    if (label1.is_used()) {
      ca_.Bind(&label1);
      ca_.Goto(&block6);
    }
  }

  if (block6.is_used()) {
    ca_.Bind(&block6);
    ca_.Goto(&block4);
  }

  TNode<BigInt> tmp2;
  if (block5.is_used()) {
    ca_.Bind(&block5);
    compiler::CodeAssemblerLabel label3(&ca_);
    tmp2 = Cast_BigInt_1(state_, TNode<Context>{parameter0}, TNode<Object>{parameter2}, &label3);
    ca_.Goto(&block7);
    if (label3.is_used()) {
      ca_.Bind(&label3);
      ca_.Goto(&block8);
    }
  }

  if (block8.is_used()) {
    ca_.Bind(&block8);
    ca_.Goto(&block4);
  }

  TNode<BigInt> tmp4;
  if (block7.is_used()) {
    ca_.Bind(&block7);
    compiler::CodeAssemblerLabel label5(&ca_);
    tmp4 = BigIntSubtractImpl_0(state_, TNode<Context>{parameter0}, TNode<BigInt>{tmp0}, TNode<BigInt>{tmp2}, &label5);
    ca_.Goto(&block9);
    if (label5.is_used()) {
      ca_.Bind(&label5);
      ca_.Goto(&block10);
    }
  }

  if (block10.is_used()) {
    ca_.Bind(&block10);
    CodeStubAssembler(state_).ThrowRangeError(TNode<Context>{parameter0}, MessageTemplate::kBigIntTooBig);
  }

  if (block9.is_used()) {
    ca_.Bind(&block9);
    CodeStubAssembler(state_).Return(tmp4);
  }

  if (block4.is_used()) {
    ca_.Bind(&block4);
    CodeStubAssembler(state_).ThrowTypeError(TNode<Context>{parameter0}, MessageTemplate::kBigIntMixedTypes);
  }
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/builtins-bigint.tq?l=217&c=1
TNode<BigInt> BigIntMultiplyImpl_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<BigInt> p_x, TNode<BigInt> p_y, compiler::CodeAssemblerLabel* label_BigIntTooBig, compiler::CodeAssemblerLabel* label_TerminationRequested) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Uint32T> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block13(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block12(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block14(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block15(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BigInt> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BigInt> block16(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<IntPtrT> tmp0;
  TNode<IntPtrT> tmp1;
  TNode<IntPtrT> tmp2;
  TNode<BoolT> tmp3;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = BigIntBuiltinsAssembler(state_).ReadBigIntLength(TNode<BigInt>{p_x});
    tmp1 = BigIntBuiltinsAssembler(state_).ReadBigIntLength(TNode<BigInt>{p_y});
    tmp2 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp3 = CodeStubAssembler(state_).WordEqual(TNode<IntPtrT>{tmp0}, TNode<IntPtrT>{tmp2});
    ca_.Branch(tmp3, &block4, std::vector<compiler::Node*>{}, &block5, std::vector<compiler::Node*>{});
  }

  if (block4.is_used()) {
    ca_.Bind(&block4);
    ca_.Goto(&block3, p_x);
  }

  TNode<IntPtrT> tmp4;
  TNode<BoolT> tmp5;
  if (block5.is_used()) {
    ca_.Bind(&block5);
    tmp4 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp5 = CodeStubAssembler(state_).WordEqual(TNode<IntPtrT>{tmp1}, TNode<IntPtrT>{tmp4});
    ca_.Branch(tmp5, &block6, std::vector<compiler::Node*>{}, &block7, std::vector<compiler::Node*>{});
  }

  if (block6.is_used()) {
    ca_.Bind(&block6);
    ca_.Goto(&block3, p_y);
  }

  TNode<Uint32T> tmp6;
  TNode<Uint32T> tmp7;
  TNode<BoolT> tmp8;
  if (block7.is_used()) {
    ca_.Bind(&block7);
    tmp6 = BigIntBuiltinsAssembler(state_).ReadBigIntSign(TNode<BigInt>{p_x});
    tmp7 = BigIntBuiltinsAssembler(state_).ReadBigIntSign(TNode<BigInt>{p_y});
    tmp8 = CodeStubAssembler(state_).Word32NotEqual(TNode<Uint32T>{tmp6}, TNode<Uint32T>{tmp7});
    ca_.Branch(tmp8, &block8, std::vector<compiler::Node*>{}, &block9, std::vector<compiler::Node*>{});
  }

  TNode<Uint32T> tmp9;
  if (block8.is_used()) {
    ca_.Bind(&block8);
    tmp9 = kNegativeSign_0(state_);
    ca_.Goto(&block10, tmp9);
  }

  TNode<Uint32T> tmp10;
  if (block9.is_used()) {
    ca_.Bind(&block9);
    tmp10 = kPositiveSign_0(state_);
    ca_.Goto(&block10, tmp10);
  }

  TNode<Uint32T> phi_bb10_7;
  TNode<IntPtrT> tmp11;
  TNode<BigInt> tmp12;
  if (block10.is_used()) {
    ca_.Bind(&block10, &phi_bb10_7);
    tmp11 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp0}, TNode<IntPtrT>{tmp1});
    compiler::CodeAssemblerLabel label13(&ca_);
    tmp12 = AllocateEmptyBigIntNoThrow_0(state_, TNode<Context>{p_context}, TNode<Uint32T>{phi_bb10_7}, TNode<IntPtrT>{tmp11}, &label13);
    ca_.Goto(&block12);
    if (label13.is_used()) {
      ca_.Bind(&label13);
      ca_.Goto(&block13);
    }
  }

  if (block13.is_used()) {
    ca_.Bind(&block13);
    ca_.Goto(label_BigIntTooBig);
  }

  TNode<Int32T> tmp14;
  TNode<Int32T> tmp15;
  TNode<BoolT> tmp16;
  if (block12.is_used()) {
    ca_.Bind(&block12);
    tmp14 = BigIntBuiltinsAssembler(state_).CppAbsoluteMulAndCanonicalize(TNode<BigInt>{tmp12}, TNode<BigInt>{p_x}, TNode<BigInt>{p_y});
    tmp15 = FromConstexpr_int32_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x1ull));
    tmp16 = CodeStubAssembler(state_).Word32Equal(TNode<Int32T>{tmp14}, TNode<Int32T>{tmp15});
    ca_.Branch(tmp16, &block14, std::vector<compiler::Node*>{}, &block15, std::vector<compiler::Node*>{});
  }

  if (block14.is_used()) {
    ca_.Bind(&block14);
    ca_.Goto(label_TerminationRequested);
  }

  TNode<BigInt> tmp17;
  if (block15.is_used()) {
    ca_.Bind(&block15);
    tmp17 = Convert_BigInt_MutableBigInt_0(state_, TNode<BigInt>{tmp12});
    ca_.Goto(&block3, tmp17);
  }

  TNode<BigInt> phi_bb3_3;
  if (block3.is_used()) {
    ca_.Bind(&block3, &phi_bb3_3);
    ca_.Goto(&block16, phi_bb3_3);
  }

  TNode<BigInt> phi_bb16_3;
    ca_.Bind(&block16, &phi_bb16_3);
  return TNode<BigInt>{phi_bb16_3};
}

TF_BUILTIN(BigIntMultiplyNoThrow, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Context> parameter0 = UncheckedParameter<Context>(Descriptor::kContext);
  USE(parameter0);
  TNode<BigInt> parameter1 = UncheckedParameter<BigInt>(Descriptor::kX);
  USE(parameter1);
  TNode<BigInt> parameter2 = UncheckedParameter<BigInt>(Descriptor::kY);
  USE(parameter2);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<BigInt> tmp0;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    compiler::CodeAssemblerLabel label1(&ca_);
    compiler::CodeAssemblerLabel label2(&ca_);
    tmp0 = BigIntMultiplyImpl_0(state_, TNode<Context>{parameter0}, TNode<BigInt>{parameter1}, TNode<BigInt>{parameter2}, &label1, &label2);
    ca_.Goto(&block5);
    if (label1.is_used()) {
      ca_.Bind(&label1);
      ca_.Goto(&block6);
    }
    if (label2.is_used()) {
      ca_.Bind(&label2);
      ca_.Goto(&block7);
    }
  }

  TNode<Smi> tmp3;
  if (block6.is_used()) {
    ca_.Bind(&block6);
    tmp3 = Convert_Smi_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    CodeStubAssembler(state_).Return(tmp3);
  }

  TNode<Smi> tmp4;
  if (block7.is_used()) {
    ca_.Bind(&block7);
    tmp4 = Convert_Smi_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x1ull));
    CodeStubAssembler(state_).Return(tmp4);
  }

  if (block5.is_used()) {
    ca_.Bind(&block5);
    CodeStubAssembler(state_).Return(tmp0);
  }
}

TF_BUILTIN(BigIntMultiply, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Context> parameter0 = UncheckedParameter<Context>(Descriptor::kContext);
  USE(parameter0);
  TNode<Numeric> parameter1 = UncheckedParameter<Numeric>(Descriptor::kXNum);
  USE(parameter1);
  TNode<Numeric> parameter2 = UncheckedParameter<Numeric>(Descriptor::kYNum);
  USE(parameter2);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block12(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block13(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block11(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<BigInt> tmp0;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    compiler::CodeAssemblerLabel label1(&ca_);
    tmp0 = Cast_BigInt_1(state_, TNode<Context>{parameter0}, TNode<Object>{parameter1}, &label1);
    ca_.Goto(&block7);
    if (label1.is_used()) {
      ca_.Bind(&label1);
      ca_.Goto(&block8);
    }
  }

  if (block8.is_used()) {
    ca_.Bind(&block8);
    ca_.Goto(&block6);
  }

  TNode<BigInt> tmp2;
  if (block7.is_used()) {
    ca_.Bind(&block7);
    compiler::CodeAssemblerLabel label3(&ca_);
    tmp2 = Cast_BigInt_1(state_, TNode<Context>{parameter0}, TNode<Object>{parameter2}, &label3);
    ca_.Goto(&block9);
    if (label3.is_used()) {
      ca_.Bind(&label3);
      ca_.Goto(&block10);
    }
  }

  if (block10.is_used()) {
    ca_.Bind(&block10);
    ca_.Goto(&block6);
  }

  TNode<BigInt> tmp4;
  if (block9.is_used()) {
    ca_.Bind(&block9);
    compiler::CodeAssemblerLabel label5(&ca_);
    compiler::CodeAssemblerLabel label6(&ca_);
    tmp4 = BigIntMultiplyImpl_0(state_, TNode<Context>{parameter0}, TNode<BigInt>{tmp0}, TNode<BigInt>{tmp2}, &label5, &label6);
    ca_.Goto(&block11);
    if (label5.is_used()) {
      ca_.Bind(&label5);
      ca_.Goto(&block12);
    }
    if (label6.is_used()) {
      ca_.Bind(&label6);
      ca_.Goto(&block13);
    }
  }

  if (block12.is_used()) {
    ca_.Bind(&block12);
    CodeStubAssembler(state_).ThrowRangeError(TNode<Context>{parameter0}, MessageTemplate::kBigIntTooBig);
  }

  if (block13.is_used()) {
    ca_.Bind(&block13);
    CodeStubAssembler(state_).TerminateExecution(TNode<Context>{parameter0});
  }

  if (block11.is_used()) {
    ca_.Bind(&block11);
    CodeStubAssembler(state_).Return(tmp4);
  }

  if (block6.is_used()) {
    ca_.Bind(&block6);
    CodeStubAssembler(state_).ThrowTypeError(TNode<Context>{parameter0}, MessageTemplate::kBigIntMixedTypes);
  }
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/builtins-bigint.tq?l=277&c=1
TNode<BigInt> BigIntDivideImpl_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<BigInt> p_x, TNode<BigInt> p_y, compiler::CodeAssemblerLabel* label_BigIntDivZero, compiler::CodeAssemblerLabel* label_TerminationRequested) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Uint32T> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block14(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block15(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT> block16(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block12(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block17(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block18(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BigInt> block19(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block13(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block21(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT> block22(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block26(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block25(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block27(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block28(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BigInt> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BigInt> block29(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<IntPtrT> tmp0;
  TNode<IntPtrT> tmp1;
  TNode<IntPtrT> tmp2;
  TNode<BoolT> tmp3;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = BigIntBuiltinsAssembler(state_).ReadBigIntLength(TNode<BigInt>{p_x});
    tmp1 = BigIntBuiltinsAssembler(state_).ReadBigIntLength(TNode<BigInt>{p_y});
    tmp2 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp3 = CodeStubAssembler(state_).WordEqual(TNode<IntPtrT>{tmp1}, TNode<IntPtrT>{tmp2});
    ca_.Branch(tmp3, &block4, std::vector<compiler::Node*>{}, &block5, std::vector<compiler::Node*>{});
  }

  if (block4.is_used()) {
    ca_.Bind(&block4);
    ca_.Goto(label_BigIntDivZero);
  }

  TNode<Int32T> tmp4;
  TNode<Int32T> tmp5;
  TNode<BoolT> tmp6;
  if (block5.is_used()) {
    ca_.Bind(&block5);
    tmp4 = MutableBigIntAbsoluteCompare_0(state_, TNode<BigInt>{p_x}, TNode<BigInt>{p_y});
    tmp5 = FromConstexpr_int32_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp6 = CodeStubAssembler(state_).Int32LessThan(TNode<Int32T>{tmp4}, TNode<Int32T>{tmp5});
    ca_.Branch(tmp6, &block6, std::vector<compiler::Node*>{}, &block7, std::vector<compiler::Node*>{});
  }

  TNode<Uint32T> tmp7;
  TNode<IntPtrT> tmp8;
  TNode<BigInt> tmp9;
  TNode<BigInt> tmp10;
  if (block6.is_used()) {
    ca_.Bind(&block6);
    tmp7 = kPositiveSign_0(state_);
    tmp8 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp9 = AllocateEmptyBigInt_0(state_, TNode<Context>{p_context}, TNode<Uint32T>{tmp7}, TNode<IntPtrT>{tmp8});
    tmp10 = Convert_BigInt_MutableBigInt_0(state_, TNode<BigInt>{tmp9});
    ca_.Goto(&block3, tmp10);
  }

  TNode<Uint32T> tmp11;
  TNode<Uint32T> tmp12;
  TNode<BoolT> tmp13;
  if (block7.is_used()) {
    ca_.Bind(&block7);
    tmp11 = BigIntBuiltinsAssembler(state_).ReadBigIntSign(TNode<BigInt>{p_x});
    tmp12 = BigIntBuiltinsAssembler(state_).ReadBigIntSign(TNode<BigInt>{p_y});
    tmp13 = CodeStubAssembler(state_).Word32NotEqual(TNode<Uint32T>{tmp11}, TNode<Uint32T>{tmp12});
    ca_.Branch(tmp13, &block8, std::vector<compiler::Node*>{}, &block9, std::vector<compiler::Node*>{});
  }

  TNode<Uint32T> tmp14;
  if (block8.is_used()) {
    ca_.Bind(&block8);
    tmp14 = kNegativeSign_0(state_);
    ca_.Goto(&block10, tmp14);
  }

  TNode<Uint32T> tmp15;
  if (block9.is_used()) {
    ca_.Bind(&block9);
    tmp15 = kPositiveSign_0(state_);
    ca_.Goto(&block10, tmp15);
  }

  TNode<Uint32T> phi_bb10_7;
  TNode<IntPtrT> tmp16;
  TNode<BoolT> tmp17;
  if (block10.is_used()) {
    ca_.Bind(&block10, &phi_bb10_7);
    tmp16 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x1ull));
    tmp17 = CodeStubAssembler(state_).WordEqual(TNode<IntPtrT>{tmp1}, TNode<IntPtrT>{tmp16});
    ca_.Branch(tmp17, &block14, std::vector<compiler::Node*>{}, &block15, std::vector<compiler::Node*>{});
  }

  TNode<IntPtrT> tmp18;
  TNode<UintPtrT> tmp19;
  TNode<UintPtrT> tmp20;
  TNode<BoolT> tmp21;
  if (block14.is_used()) {
    ca_.Bind(&block14);
    tmp18 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp19 = CodeStubAssembler(state_).LoadBigIntDigit(TNode<BigInt>{p_y}, TNode<IntPtrT>{tmp18});
    tmp20 = FromConstexpr_uintptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x1ull));
    tmp21 = CodeStubAssembler(state_).WordEqual(TNode<UintPtrT>{tmp19}, TNode<UintPtrT>{tmp20});
    ca_.Goto(&block16, tmp21);
  }

  TNode<BoolT> tmp22;
  if (block15.is_used()) {
    ca_.Bind(&block15);
    tmp22 = FromConstexpr_bool_constexpr_bool_0(state_, false);
    ca_.Goto(&block16, tmp22);
  }

  TNode<BoolT> phi_bb16_9;
  if (block16.is_used()) {
    ca_.Bind(&block16, &phi_bb16_9);
    ca_.Branch(phi_bb16_9, &block12, std::vector<compiler::Node*>{}, &block13, std::vector<compiler::Node*>{});
  }

  TNode<BoolT> tmp23;
  if (block12.is_used()) {
    ca_.Bind(&block12);
    tmp23 = CodeStubAssembler(state_).Word32Equal(TNode<Uint32T>{phi_bb10_7}, TNode<Uint32T>{tmp11});
    ca_.Branch(tmp23, &block17, std::vector<compiler::Node*>{}, &block18, std::vector<compiler::Node*>{});
  }

  if (block17.is_used()) {
    ca_.Bind(&block17);
    ca_.Goto(&block19, p_x);
  }

  TNode<BigInt> tmp24;
  if (block18.is_used()) {
    ca_.Bind(&block18);
    tmp24 = ca_.CallStub<BigInt>(Builtins::CallableFor(ca_.isolate(), Builtin::kBigIntUnaryMinus), p_context, p_x);
    ca_.Goto(&block19, tmp24);
  }

  TNode<BigInt> phi_bb19_8;
  if (block19.is_used()) {
    ca_.Bind(&block19, &phi_bb19_8);
    ca_.Goto(&block3, phi_bb19_8);
  }

  TNode<IntPtrT> tmp25;
  TNode<IntPtrT> tmp26;
  TNode<IntPtrT> tmp27;
  TNode<IntPtrT> tmp28;
  TNode<BoolT> tmp29;
  if (block13.is_used()) {
    ca_.Bind(&block13);
    tmp25 = CodeStubAssembler(state_).IntPtrSub(TNode<IntPtrT>{tmp0}, TNode<IntPtrT>{tmp1});
    tmp26 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x1ull));
    tmp27 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp25}, TNode<IntPtrT>{tmp26});
    tmp28 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0xaull));
    tmp29 = CodeStubAssembler(state_).IntPtrGreaterThan(TNode<IntPtrT>{tmp1}, TNode<IntPtrT>{tmp28});
    ca_.Branch(tmp29, &block21, std::vector<compiler::Node*>{}, &block22, std::vector<compiler::Node*>{tmp27});
  }

  TNode<IntPtrT> tmp30;
  TNode<IntPtrT> tmp31;
  if (block21.is_used()) {
    ca_.Bind(&block21);
    tmp30 = FromConstexpr_intptr_constexpr_int31_0(state_, 1);
    tmp31 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp27}, TNode<IntPtrT>{tmp30});
    ca_.Goto(&block22, tmp31);
  }

  TNode<IntPtrT> phi_bb22_8;
  TNode<BigInt> tmp32;
  if (block22.is_used()) {
    ca_.Bind(&block22, &phi_bb22_8);
    compiler::CodeAssemblerLabel label33(&ca_);
    tmp32 = AllocateEmptyBigIntNoThrow_0(state_, TNode<Context>{p_context}, TNode<Uint32T>{phi_bb10_7}, TNode<IntPtrT>{phi_bb22_8}, &label33);
    ca_.Goto(&block25);
    if (label33.is_used()) {
      ca_.Bind(&label33);
      ca_.Goto(&block26);
    }
  }

  if (block26.is_used()) {
    ca_.Bind(&block26);
    CodeStubAssembler(state_).Unreachable();
  }

  TNode<Int32T> tmp34;
  TNode<Int32T> tmp35;
  TNode<BoolT> tmp36;
  if (block25.is_used()) {
    ca_.Bind(&block25);
    tmp34 = BigIntBuiltinsAssembler(state_).CppAbsoluteDivAndCanonicalize(TNode<BigInt>{tmp32}, TNode<BigInt>{p_x}, TNode<BigInt>{p_y});
    tmp35 = FromConstexpr_int32_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x1ull));
    tmp36 = CodeStubAssembler(state_).Word32Equal(TNode<Int32T>{tmp34}, TNode<Int32T>{tmp35});
    ca_.Branch(tmp36, &block27, std::vector<compiler::Node*>{}, &block28, std::vector<compiler::Node*>{});
  }

  if (block27.is_used()) {
    ca_.Bind(&block27);
    ca_.Goto(label_TerminationRequested);
  }

  TNode<BigInt> tmp37;
  if (block28.is_used()) {
    ca_.Bind(&block28);
    tmp37 = Convert_BigInt_MutableBigInt_0(state_, TNode<BigInt>{tmp32});
    ca_.Goto(&block3, tmp37);
  }

  TNode<BigInt> phi_bb3_3;
  if (block3.is_used()) {
    ca_.Bind(&block3, &phi_bb3_3);
    ca_.Goto(&block29, phi_bb3_3);
  }

  TNode<BigInt> phi_bb29_3;
    ca_.Bind(&block29, &phi_bb29_3);
  return TNode<BigInt>{phi_bb29_3};
}

TF_BUILTIN(BigIntDivideNoThrow, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Context> parameter0 = UncheckedParameter<Context>(Descriptor::kContext);
  USE(parameter0);
  TNode<BigInt> parameter1 = UncheckedParameter<BigInt>(Descriptor::kX);
  USE(parameter1);
  TNode<BigInt> parameter2 = UncheckedParameter<BigInt>(Descriptor::kY);
  USE(parameter2);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<BigInt> tmp0;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    compiler::CodeAssemblerLabel label1(&ca_);
    compiler::CodeAssemblerLabel label2(&ca_);
    tmp0 = BigIntDivideImpl_0(state_, TNode<Context>{parameter0}, TNode<BigInt>{parameter1}, TNode<BigInt>{parameter2}, &label1, &label2);
    ca_.Goto(&block5);
    if (label1.is_used()) {
      ca_.Bind(&label1);
      ca_.Goto(&block6);
    }
    if (label2.is_used()) {
      ca_.Bind(&label2);
      ca_.Goto(&block7);
    }
  }

  TNode<Smi> tmp3;
  if (block6.is_used()) {
    ca_.Bind(&block6);
    tmp3 = Convert_Smi_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    CodeStubAssembler(state_).Return(tmp3);
  }

  TNode<Smi> tmp4;
  if (block7.is_used()) {
    ca_.Bind(&block7);
    tmp4 = Convert_Smi_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x1ull));
    CodeStubAssembler(state_).Return(tmp4);
  }

  if (block5.is_used()) {
    ca_.Bind(&block5);
    CodeStubAssembler(state_).Return(tmp0);
  }
}

TF_BUILTIN(BigIntDivide, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Context> parameter0 = UncheckedParameter<Context>(Descriptor::kContext);
  USE(parameter0);
  TNode<Numeric> parameter1 = UncheckedParameter<Numeric>(Descriptor::kXNum);
  USE(parameter1);
  TNode<Numeric> parameter2 = UncheckedParameter<Numeric>(Descriptor::kYNum);
  USE(parameter2);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block12(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block13(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block11(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<BigInt> tmp0;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    compiler::CodeAssemblerLabel label1(&ca_);
    tmp0 = Cast_BigInt_1(state_, TNode<Context>{parameter0}, TNode<Object>{parameter1}, &label1);
    ca_.Goto(&block7);
    if (label1.is_used()) {
      ca_.Bind(&label1);
      ca_.Goto(&block8);
    }
  }

  if (block8.is_used()) {
    ca_.Bind(&block8);
    ca_.Goto(&block6);
  }

  TNode<BigInt> tmp2;
  if (block7.is_used()) {
    ca_.Bind(&block7);
    compiler::CodeAssemblerLabel label3(&ca_);
    tmp2 = Cast_BigInt_1(state_, TNode<Context>{parameter0}, TNode<Object>{parameter2}, &label3);
    ca_.Goto(&block9);
    if (label3.is_used()) {
      ca_.Bind(&label3);
      ca_.Goto(&block10);
    }
  }

  if (block10.is_used()) {
    ca_.Bind(&block10);
    ca_.Goto(&block6);
  }

  TNode<BigInt> tmp4;
  if (block9.is_used()) {
    ca_.Bind(&block9);
    compiler::CodeAssemblerLabel label5(&ca_);
    compiler::CodeAssemblerLabel label6(&ca_);
    tmp4 = BigIntDivideImpl_0(state_, TNode<Context>{parameter0}, TNode<BigInt>{tmp0}, TNode<BigInt>{tmp2}, &label5, &label6);
    ca_.Goto(&block11);
    if (label5.is_used()) {
      ca_.Bind(&label5);
      ca_.Goto(&block12);
    }
    if (label6.is_used()) {
      ca_.Bind(&label6);
      ca_.Goto(&block13);
    }
  }

  if (block12.is_used()) {
    ca_.Bind(&block12);
    CodeStubAssembler(state_).ThrowRangeError(TNode<Context>{parameter0}, MessageTemplate::kBigIntDivZero);
  }

  if (block13.is_used()) {
    ca_.Bind(&block13);
    CodeStubAssembler(state_).TerminateExecution(TNode<Context>{parameter0});
  }

  if (block11.is_used()) {
    ca_.Bind(&block11);
    CodeStubAssembler(state_).Return(tmp4);
  }

  if (block6.is_used()) {
    ca_.Bind(&block6);
    CodeStubAssembler(state_).ThrowTypeError(TNode<Context>{parameter0}, MessageTemplate::kBigIntMixedTypes);
  }
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/builtins-bigint.tq?l=344&c=1
TNode<BigInt> BigIntBitwiseAndImpl_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<BigInt> p_x, TNode<BigInt> p_y, compiler::CodeAssemblerLabel* label_BigIntTooBig) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT> block11(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block13(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block14(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT> block15(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block20(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block19(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block23(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block24(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT> block25(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block21(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block27(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block28(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT> block29(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block32(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block31(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block22(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block35(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block36(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT> block37(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block33(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block42(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block41(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block34(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block46(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block45(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BigInt> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BigInt> block47(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<IntPtrT> tmp0;
  TNode<IntPtrT> tmp1;
  TNode<IntPtrT> tmp2;
  TNode<BoolT> tmp3;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = BigIntBuiltinsAssembler(state_).ReadBigIntLength(TNode<BigInt>{p_x});
    tmp1 = BigIntBuiltinsAssembler(state_).ReadBigIntLength(TNode<BigInt>{p_y});
    tmp2 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp3 = CodeStubAssembler(state_).WordEqual(TNode<IntPtrT>{tmp0}, TNode<IntPtrT>{tmp2});
    ca_.Branch(tmp3, &block3, std::vector<compiler::Node*>{}, &block4, std::vector<compiler::Node*>{});
  }

  if (block3.is_used()) {
    ca_.Bind(&block3);
    ca_.Goto(&block2, p_x);
  }

  TNode<IntPtrT> tmp4;
  TNode<BoolT> tmp5;
  if (block4.is_used()) {
    ca_.Bind(&block4);
    tmp4 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp5 = CodeStubAssembler(state_).WordEqual(TNode<IntPtrT>{tmp1}, TNode<IntPtrT>{tmp4});
    ca_.Branch(tmp5, &block5, std::vector<compiler::Node*>{}, &block6, std::vector<compiler::Node*>{});
  }

  if (block5.is_used()) {
    ca_.Bind(&block5);
    ca_.Goto(&block2, p_y);
  }

  TNode<Uint32T> tmp6;
  TNode<Uint32T> tmp7;
  TNode<Uint32T> tmp8;
  TNode<BoolT> tmp9;
  if (block6.is_used()) {
    ca_.Bind(&block6);
    tmp6 = BigIntBuiltinsAssembler(state_).ReadBigIntSign(TNode<BigInt>{p_x});
    tmp7 = BigIntBuiltinsAssembler(state_).ReadBigIntSign(TNode<BigInt>{p_y});
    tmp8 = kPositiveSign_0(state_);
    tmp9 = CodeStubAssembler(state_).Word32Equal(TNode<Uint32T>{tmp6}, TNode<Uint32T>{tmp8});
    ca_.Branch(tmp9, &block9, std::vector<compiler::Node*>{}, &block10, std::vector<compiler::Node*>{});
  }

  TNode<Uint32T> tmp10;
  TNode<BoolT> tmp11;
  if (block9.is_used()) {
    ca_.Bind(&block9);
    tmp10 = kPositiveSign_0(state_);
    tmp11 = CodeStubAssembler(state_).Word32Equal(TNode<Uint32T>{tmp7}, TNode<Uint32T>{tmp10});
    ca_.Goto(&block11, tmp11);
  }

  TNode<BoolT> tmp12;
  if (block10.is_used()) {
    ca_.Bind(&block10);
    tmp12 = FromConstexpr_bool_constexpr_bool_0(state_, false);
    ca_.Goto(&block11, tmp12);
  }

  TNode<BoolT> phi_bb11_8;
  if (block11.is_used()) {
    ca_.Bind(&block11, &phi_bb11_8);
    ca_.Branch(phi_bb11_8, &block7, std::vector<compiler::Node*>{}, &block8, std::vector<compiler::Node*>{});
  }

  TNode<BoolT> tmp13;
  if (block7.is_used()) {
    ca_.Bind(&block7);
    tmp13 = CodeStubAssembler(state_).IntPtrLessThan(TNode<IntPtrT>{tmp0}, TNode<IntPtrT>{tmp1});
    ca_.Branch(tmp13, &block13, std::vector<compiler::Node*>{}, &block14, std::vector<compiler::Node*>{});
  }

  if (block13.is_used()) {
    ca_.Bind(&block13);
    ca_.Goto(&block15, tmp0);
  }

  if (block14.is_used()) {
    ca_.Bind(&block14);
    ca_.Goto(&block15, tmp1);
  }

  TNode<IntPtrT> phi_bb15_7;
  TNode<Uint32T> tmp14;
  TNode<BigInt> tmp15;
  if (block15.is_used()) {
    ca_.Bind(&block15, &phi_bb15_7);
    tmp14 = kPositiveSign_0(state_);
    compiler::CodeAssemblerLabel label16(&ca_);
    tmp15 = AllocateEmptyBigIntNoThrow_0(state_, TNode<Context>{p_context}, TNode<Uint32T>{tmp14}, TNode<IntPtrT>{phi_bb15_7}, &label16);
    ca_.Goto(&block19);
    if (label16.is_used()) {
      ca_.Bind(&label16);
      ca_.Goto(&block20);
    }
  }

  if (block20.is_used()) {
    ca_.Bind(&block20);
    CodeStubAssembler(state_).Unreachable();
  }

  TNode<BigInt> tmp17;
  if (block19.is_used()) {
    ca_.Bind(&block19);
    BigIntBuiltinsAssembler(state_).CppBitwiseAndPosPosAndCanonicalize(TNode<BigInt>{tmp15}, TNode<BigInt>{p_x}, TNode<BigInt>{p_y});
    tmp17 = Convert_BigInt_MutableBigInt_0(state_, TNode<BigInt>{tmp15});
    ca_.Goto(&block2, tmp17);
  }

  TNode<Uint32T> tmp18;
  TNode<BoolT> tmp19;
  if (block8.is_used()) {
    ca_.Bind(&block8);
    tmp18 = kNegativeSign_0(state_);
    tmp19 = CodeStubAssembler(state_).Word32Equal(TNode<Uint32T>{tmp6}, TNode<Uint32T>{tmp18});
    ca_.Branch(tmp19, &block23, std::vector<compiler::Node*>{}, &block24, std::vector<compiler::Node*>{});
  }

  TNode<Uint32T> tmp20;
  TNode<BoolT> tmp21;
  if (block23.is_used()) {
    ca_.Bind(&block23);
    tmp20 = kNegativeSign_0(state_);
    tmp21 = CodeStubAssembler(state_).Word32Equal(TNode<Uint32T>{tmp7}, TNode<Uint32T>{tmp20});
    ca_.Goto(&block25, tmp21);
  }

  TNode<BoolT> tmp22;
  if (block24.is_used()) {
    ca_.Bind(&block24);
    tmp22 = FromConstexpr_bool_constexpr_bool_0(state_, false);
    ca_.Goto(&block25, tmp22);
  }

  TNode<BoolT> phi_bb25_8;
  if (block25.is_used()) {
    ca_.Bind(&block25, &phi_bb25_8);
    ca_.Branch(phi_bb25_8, &block21, std::vector<compiler::Node*>{}, &block22, std::vector<compiler::Node*>{});
  }

  TNode<BoolT> tmp23;
  if (block21.is_used()) {
    ca_.Bind(&block21);
    tmp23 = CodeStubAssembler(state_).IntPtrGreaterThan(TNode<IntPtrT>{tmp0}, TNode<IntPtrT>{tmp1});
    ca_.Branch(tmp23, &block27, std::vector<compiler::Node*>{}, &block28, std::vector<compiler::Node*>{});
  }

  if (block27.is_used()) {
    ca_.Bind(&block27);
    ca_.Goto(&block29, tmp0);
  }

  if (block28.is_used()) {
    ca_.Bind(&block28);
    ca_.Goto(&block29, tmp1);
  }

  TNode<IntPtrT> phi_bb29_7;
  TNode<IntPtrT> tmp24;
  TNode<IntPtrT> tmp25;
  TNode<Uint32T> tmp26;
  TNode<BigInt> tmp27;
  if (block29.is_used()) {
    ca_.Bind(&block29, &phi_bb29_7);
    tmp24 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x1ull));
    tmp25 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{phi_bb29_7}, TNode<IntPtrT>{tmp24});
    tmp26 = kNegativeSign_0(state_);
    compiler::CodeAssemblerLabel label28(&ca_);
    tmp27 = AllocateEmptyBigIntNoThrow_0(state_, TNode<Context>{p_context}, TNode<Uint32T>{tmp26}, TNode<IntPtrT>{tmp25}, &label28);
    ca_.Goto(&block31);
    if (label28.is_used()) {
      ca_.Bind(&label28);
      ca_.Goto(&block32);
    }
  }

  if (block32.is_used()) {
    ca_.Bind(&block32);
    ca_.Goto(label_BigIntTooBig);
  }

  TNode<BigInt> tmp29;
  if (block31.is_used()) {
    ca_.Bind(&block31);
    BigIntBuiltinsAssembler(state_).CppBitwiseAndNegNegAndCanonicalize(TNode<BigInt>{tmp27}, TNode<BigInt>{p_x}, TNode<BigInt>{p_y});
    tmp29 = Convert_BigInt_MutableBigInt_0(state_, TNode<BigInt>{tmp27});
    ca_.Goto(&block2, tmp29);
  }

  TNode<Uint32T> tmp30;
  TNode<BoolT> tmp31;
  if (block22.is_used()) {
    ca_.Bind(&block22);
    tmp30 = kPositiveSign_0(state_);
    tmp31 = CodeStubAssembler(state_).Word32Equal(TNode<Uint32T>{tmp6}, TNode<Uint32T>{tmp30});
    ca_.Branch(tmp31, &block35, std::vector<compiler::Node*>{}, &block36, std::vector<compiler::Node*>{});
  }

  TNode<Uint32T> tmp32;
  TNode<BoolT> tmp33;
  if (block35.is_used()) {
    ca_.Bind(&block35);
    tmp32 = kNegativeSign_0(state_);
    tmp33 = CodeStubAssembler(state_).Word32Equal(TNode<Uint32T>{tmp7}, TNode<Uint32T>{tmp32});
    ca_.Goto(&block37, tmp33);
  }

  TNode<BoolT> tmp34;
  if (block36.is_used()) {
    ca_.Bind(&block36);
    tmp34 = FromConstexpr_bool_constexpr_bool_0(state_, false);
    ca_.Goto(&block37, tmp34);
  }

  TNode<BoolT> phi_bb37_8;
  if (block37.is_used()) {
    ca_.Bind(&block37, &phi_bb37_8);
    ca_.Branch(phi_bb37_8, &block33, std::vector<compiler::Node*>{}, &block34, std::vector<compiler::Node*>{});
  }

  TNode<Uint32T> tmp35;
  TNode<BigInt> tmp36;
  if (block33.is_used()) {
    ca_.Bind(&block33);
    tmp35 = kPositiveSign_0(state_);
    compiler::CodeAssemblerLabel label37(&ca_);
    tmp36 = AllocateEmptyBigIntNoThrow_0(state_, TNode<Context>{p_context}, TNode<Uint32T>{tmp35}, TNode<IntPtrT>{tmp0}, &label37);
    ca_.Goto(&block41);
    if (label37.is_used()) {
      ca_.Bind(&label37);
      ca_.Goto(&block42);
    }
  }

  if (block42.is_used()) {
    ca_.Bind(&block42);
    CodeStubAssembler(state_).Unreachable();
  }

  TNode<BigInt> tmp38;
  if (block41.is_used()) {
    ca_.Bind(&block41);
    BigIntBuiltinsAssembler(state_).CppBitwiseAndPosNegAndCanonicalize(TNode<BigInt>{tmp36}, TNode<BigInt>{p_x}, TNode<BigInt>{p_y});
    tmp38 = Convert_BigInt_MutableBigInt_0(state_, TNode<BigInt>{tmp36});
    ca_.Goto(&block2, tmp38);
  }

  TNode<Uint32T> tmp39;
  TNode<BigInt> tmp40;
  if (block34.is_used()) {
    ca_.Bind(&block34);
    tmp39 = kPositiveSign_0(state_);
    compiler::CodeAssemblerLabel label41(&ca_);
    tmp40 = AllocateEmptyBigIntNoThrow_0(state_, TNode<Context>{p_context}, TNode<Uint32T>{tmp39}, TNode<IntPtrT>{tmp1}, &label41);
    ca_.Goto(&block45);
    if (label41.is_used()) {
      ca_.Bind(&label41);
      ca_.Goto(&block46);
    }
  }

  if (block46.is_used()) {
    ca_.Bind(&block46);
    CodeStubAssembler(state_).Unreachable();
  }

  TNode<BigInt> tmp42;
  if (block45.is_used()) {
    ca_.Bind(&block45);
    BigIntBuiltinsAssembler(state_).CppBitwiseAndPosNegAndCanonicalize(TNode<BigInt>{tmp40}, TNode<BigInt>{p_y}, TNode<BigInt>{p_x});
    tmp42 = Convert_BigInt_MutableBigInt_0(state_, TNode<BigInt>{tmp40});
    ca_.Goto(&block2, tmp42);
  }

  TNode<BigInt> phi_bb2_3;
  if (block2.is_used()) {
    ca_.Bind(&block2, &phi_bb2_3);
    ca_.Goto(&block47, phi_bb2_3);
  }

  TNode<BigInt> phi_bb47_3;
    ca_.Bind(&block47, &phi_bb47_3);
  return TNode<BigInt>{phi_bb47_3};
}

TF_BUILTIN(BigIntBitwiseAndNoThrow, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Context> parameter0 = UncheckedParameter<Context>(Descriptor::kContext);
  USE(parameter0);
  TNode<BigInt> parameter1 = UncheckedParameter<BigInt>(Descriptor::kX);
  USE(parameter1);
  TNode<BigInt> parameter2 = UncheckedParameter<BigInt>(Descriptor::kY);
  USE(parameter2);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<BigInt> tmp0;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    compiler::CodeAssemblerLabel label1(&ca_);
    tmp0 = BigIntBitwiseAndImpl_0(state_, TNode<Context>{parameter0}, TNode<BigInt>{parameter1}, TNode<BigInt>{parameter2}, &label1);
    ca_.Goto(&block3);
    if (label1.is_used()) {
      ca_.Bind(&label1);
      ca_.Goto(&block4);
    }
  }

  TNode<Smi> tmp2;
  if (block4.is_used()) {
    ca_.Bind(&block4);
    tmp2 = Convert_Smi_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    CodeStubAssembler(state_).Return(tmp2);
  }

  if (block3.is_used()) {
    ca_.Bind(&block3);
    CodeStubAssembler(state_).Return(tmp0);
  }
}

TF_BUILTIN(BigIntBitwiseAnd, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Context> parameter0 = UncheckedParameter<Context>(Descriptor::kContext);
  USE(parameter0);
  TNode<Numeric> parameter1 = UncheckedParameter<Numeric>(Descriptor::kXNum);
  USE(parameter1);
  TNode<Numeric> parameter2 = UncheckedParameter<Numeric>(Descriptor::kYNum);
  USE(parameter2);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<BigInt> tmp0;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    compiler::CodeAssemblerLabel label1(&ca_);
    tmp0 = Cast_BigInt_1(state_, TNode<Context>{parameter0}, TNode<Object>{parameter1}, &label1);
    ca_.Goto(&block5);
    if (label1.is_used()) {
      ca_.Bind(&label1);
      ca_.Goto(&block6);
    }
  }

  if (block6.is_used()) {
    ca_.Bind(&block6);
    ca_.Goto(&block4);
  }

  TNode<BigInt> tmp2;
  if (block5.is_used()) {
    ca_.Bind(&block5);
    compiler::CodeAssemblerLabel label3(&ca_);
    tmp2 = Cast_BigInt_1(state_, TNode<Context>{parameter0}, TNode<Object>{parameter2}, &label3);
    ca_.Goto(&block7);
    if (label3.is_used()) {
      ca_.Bind(&label3);
      ca_.Goto(&block8);
    }
  }

  if (block8.is_used()) {
    ca_.Bind(&block8);
    ca_.Goto(&block4);
  }

  TNode<BigInt> tmp4;
  if (block7.is_used()) {
    ca_.Bind(&block7);
    compiler::CodeAssemblerLabel label5(&ca_);
    tmp4 = BigIntBitwiseAndImpl_0(state_, TNode<Context>{parameter0}, TNode<BigInt>{tmp0}, TNode<BigInt>{tmp2}, &label5);
    ca_.Goto(&block9);
    if (label5.is_used()) {
      ca_.Bind(&label5);
      ca_.Goto(&block10);
    }
  }

  if (block10.is_used()) {
    ca_.Bind(&block10);
    CodeStubAssembler(state_).ThrowRangeError(TNode<Context>{parameter0}, MessageTemplate::kBigIntTooBig);
  }

  if (block9.is_used()) {
    ca_.Bind(&block9);
    CodeStubAssembler(state_).Return(tmp4);
  }

  if (block4.is_used()) {
    ca_.Bind(&block4);
    CodeStubAssembler(state_).ThrowTypeError(TNode<Context>{parameter0}, MessageTemplate::kBigIntMixedTypes);
  }
}

TF_BUILTIN(BigIntUnaryMinus, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Context> parameter0 = UncheckedParameter<Context>(Descriptor::kContext);
  USE(parameter0);
  TNode<BigInt> parameter1 = UncheckedParameter<BigInt>(Descriptor::kBigint);
  USE(parameter1);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<IntPtrT> tmp0;
  TNode<IntPtrT> tmp1;
  TNode<BoolT> tmp2;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = BigIntBuiltinsAssembler(state_).ReadBigIntLength(TNode<BigInt>{parameter1});
    tmp1 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp2 = CodeStubAssembler(state_).WordEqual(TNode<IntPtrT>{tmp0}, TNode<IntPtrT>{tmp1});
    ca_.Branch(tmp2, &block1, std::vector<compiler::Node*>{}, &block2, std::vector<compiler::Node*>{});
  }

  if (block1.is_used()) {
    ca_.Bind(&block1);
    CodeStubAssembler(state_).Return(parameter1);
  }

  TNode<Uint32T> tmp3;
  TNode<Uint32T> tmp4;
  TNode<BigInt> tmp5;
  TNode<IntPtrT> tmp6;
  if (block2.is_used()) {
    ca_.Bind(&block2);
    tmp3 = BigIntBuiltinsAssembler(state_).ReadBigIntSign(TNode<BigInt>{parameter1});
    tmp4 = InvertSign_0(state_, TNode<Uint32T>{tmp3});
    tmp5 = AllocateEmptyBigInt_0(state_, TNode<Context>{parameter0}, TNode<Uint32T>{tmp4}, TNode<IntPtrT>{tmp0});
    tmp6 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    ca_.Goto(&block5, tmp6);
  }

  TNode<IntPtrT> phi_bb5_4;
  TNode<BoolT> tmp7;
  if (block5.is_used()) {
    ca_.Bind(&block5, &phi_bb5_4);
    tmp7 = CodeStubAssembler(state_).IntPtrLessThan(TNode<IntPtrT>{phi_bb5_4}, TNode<IntPtrT>{tmp0});
    ca_.Branch(tmp7, &block3, std::vector<compiler::Node*>{phi_bb5_4}, &block4, std::vector<compiler::Node*>{phi_bb5_4});
  }

  TNode<IntPtrT> phi_bb3_4;
  TNode<UintPtrT> tmp8;
  TNode<IntPtrT> tmp9;
  TNode<IntPtrT> tmp10;
  if (block3.is_used()) {
    ca_.Bind(&block3, &phi_bb3_4);
    tmp8 = CodeStubAssembler(state_).LoadBigIntDigit(TNode<BigInt>{parameter1}, TNode<IntPtrT>{phi_bb3_4});
    CodeStubAssembler(state_).StoreBigIntDigit(TNode<BigInt>{tmp5}, TNode<IntPtrT>{phi_bb3_4}, TNode<UintPtrT>{tmp8});
    tmp9 = FromConstexpr_intptr_constexpr_int31_0(state_, 1);
    tmp10 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{phi_bb3_4}, TNode<IntPtrT>{tmp9});
    ca_.Goto(&block5, tmp10);
  }

  TNode<IntPtrT> phi_bb4_4;
  TNode<BigInt> tmp11;
  if (block4.is_used()) {
    ca_.Bind(&block4, &phi_bb4_4);
    tmp11 = Convert_BigInt_MutableBigInt_0(state_, TNode<BigInt>{tmp5});
    CodeStubAssembler(state_).Return(tmp11);
  }
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/builtins-bigint.tq?l=164&c=15
TNode<BigInt> Cast_BigInt_1(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Object> p_o, compiler::CodeAssemblerLabel* label_CastError) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<HeapObject> tmp0;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    compiler::CodeAssemblerLabel label1(&ca_);
    tmp0 = CodeStubAssembler(state_).TaggedToHeapObject(TNode<Object>{p_o}, &label1);
    ca_.Goto(&block3);
    if (label1.is_used()) {
      ca_.Bind(&label1);
      ca_.Goto(&block4);
    }
  }

  if (block4.is_used()) {
    ca_.Bind(&block4);
    ca_.Goto(&block1);
  }

  TNode<BigInt> tmp2;
  if (block3.is_used()) {
    ca_.Bind(&block3);
    compiler::CodeAssemblerLabel label3(&ca_);
    tmp2 = Cast_BigInt_0(state_, TNode<HeapObject>{tmp0}, &label3);
    ca_.Goto(&block5);
    if (label3.is_used()) {
      ca_.Bind(&label3);
      ca_.Goto(&block6);
    }
  }

  if (block6.is_used()) {
    ca_.Bind(&block6);
    ca_.Goto(&block1);
  }

  if (block5.is_used()) {
    ca_.Bind(&block5);
    ca_.Goto(&block7);
  }

  if (block1.is_used()) {
    ca_.Bind(&block1);
    ca_.Goto(label_CastError);
  }

    ca_.Bind(&block7);
  return TNode<BigInt>{tmp2};
}

} // namespace internal
} // namespace v8
