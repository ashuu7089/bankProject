#include "src/objects/allocation-site-inl.h"

#include "torque-generated/class-verifiers.h"
#include "src/objects/instance-type-inl.h"

namespace v8 {
namespace internal {

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/allocation-site.tq?l=7&c=1
bool IsAllocationMemento_NonInline(HeapObject o) {
  return o.IsAllocationMemento();
}

#ifdef VERIFY_HEAP

template <>
void TorqueGeneratedAllocationMemento<AllocationMemento, Struct>::AllocationMementoVerify(Isolate* isolate) {
  TorqueGeneratedClassVerifiers::AllocationMementoVerify(AllocationMemento::cast(*this), isolate);
}


#endif  // VERIFY_HEAP
} // namespace internal
} // namespace v8
