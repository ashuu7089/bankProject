#include "src/objects/prototype-info-inl.h"

#include "torque-generated/class-verifiers.h"
#include "src/objects/instance-type-inl.h"

namespace v8 {
namespace internal {

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/prototype-info.tq?l=9&c=1
bool IsPrototypeInfo_NonInline(HeapObject o) {
  return o.IsPrototypeInfo();
}

#ifdef VERIFY_HEAP

template <>
void TorqueGeneratedPrototypeInfo<PrototypeInfo, Struct>::PrototypeInfoVerify(Isolate* isolate) {
  TorqueGeneratedClassVerifiers::PrototypeInfoVerify(PrototypeInfo::cast(*this), isolate);
}


#endif  // VERIFY_HEAP
} // namespace internal
} // namespace v8
