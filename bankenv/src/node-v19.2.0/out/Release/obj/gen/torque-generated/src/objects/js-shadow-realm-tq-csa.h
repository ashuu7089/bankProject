#ifndef V8_GEN_TORQUE_GENERATED_SRC_OBJECTS_JS_SHADOW_REALM_TQ_CSA_H_
#define V8_GEN_TORQUE_GENERATED_SRC_OBJECTS_JS_SHADOW_REALM_TQ_CSA_H_

#include "src/builtins/torque-csa-header-includes.h"

namespace v8 {
namespace internal {

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-shadow-realm.tq?l=5&c=1
TNode<JSShadowRealm> Cast_JSShadowRealm_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_obj, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-shadow-realm.tq?l=6&c=3
TNode<NativeContext> LoadJSShadowRealmNativeContext_0(compiler::CodeAssemblerState* state_, TNode<JSShadowRealm> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-shadow-realm.tq?l=6&c=3
void StoreJSShadowRealmNativeContext_0(compiler::CodeAssemblerState* state_, TNode<JSShadowRealm> p_o, TNode<NativeContext> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-shadow-realm.tq?l=5&c=1
TNode<JSShadowRealm> DownCastForTorqueClass_JSShadowRealm_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_o, compiler::CodeAssemblerLabel* label_CastError);

} // namespace internal
} // namespace v8

#endif // V8_GEN_TORQUE_GENERATED_SRC_OBJECTS_JS_SHADOW_REALM_TQ_CSA_H_
