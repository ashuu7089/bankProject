#ifndef V8_GEN_TORQUE_GENERATED_SRC_OBJECTS_PROPERTY_ARRAY_TQ_CSA_H_
#define V8_GEN_TORQUE_GENERATED_SRC_OBJECTS_PROPERTY_ARRAY_TQ_CSA_H_

#include "src/builtins/torque-csa-header-includes.h"

namespace v8 {
namespace internal {

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/property-array.tq?l=5&c=1
TNode<PropertyArray> Cast_PropertyArray_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_obj, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/property-array.tq?l=6&c=3
TNode<Smi> LoadPropertyArrayLengthAndHash_0(compiler::CodeAssemblerState* state_, TNode<PropertyArray> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/property-array.tq?l=6&c=3
void StorePropertyArrayLengthAndHash_0(compiler::CodeAssemblerState* state_, TNode<PropertyArray> p_o, TNode<Smi> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/property-array.tq?l=5&c=1
TNode<PropertyArray> DownCastForTorqueClass_PropertyArray_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_o, compiler::CodeAssemblerLabel* label_CastError);

} // namespace internal
} // namespace v8

#endif // V8_GEN_TORQUE_GENERATED_SRC_OBJECTS_PROPERTY_ARRAY_TQ_CSA_H_
