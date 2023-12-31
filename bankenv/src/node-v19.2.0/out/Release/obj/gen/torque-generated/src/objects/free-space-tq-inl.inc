// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/free-space.tq?l=6&c=3
template<class D, class P>
int TorqueGeneratedFreeSpace<D, P>::size() const {
  int value;
  value = TaggedField<Smi>::load(*this, kSizeOffset).value();
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/free-space.tq?l=6&c=3
template<class D, class P>
void TorqueGeneratedFreeSpace<D, P>::set_size(int value) {
  WRITE_FIELD(*this, kSizeOffset, Smi::FromInt(value));
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/free-space.tq?l=7&c=3
template<class D, class P>
MaybeObject TorqueGeneratedFreeSpace<D, P>::next() const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedFreeSpace::next(cage_base);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/free-space.tq?l=7&c=3
template<class D, class P>
MaybeObject TorqueGeneratedFreeSpace<D, P>::next(PtrComprCageBase cage_base) const {
  MaybeObject value;
  value = TaggedField<MaybeObject>::load(cage_base, *this, kNextOffset);
  DCHECK(value.IsCleared() || (!value.IsWeak() && value.GetHeapObjectOrSmi().IsUninitialized()) || (!value.IsWeak() && value.GetHeapObjectOrSmi().IsFreeSpace()));
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/free-space.tq?l=7&c=3
template<class D, class P>
void TorqueGeneratedFreeSpace<D, P>::set_next(MaybeObject value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsCleared() || (!value.IsWeak() && value.GetHeapObjectOrSmi().IsUninitialized()) || (!value.IsWeak() && value.GetHeapObjectOrSmi().IsFreeSpace()));
  RELAXED_WRITE_WEAK_FIELD(*this, kNextOffset, value);
  CONDITIONAL_WEAK_WRITE_BARRIER(*this, kNextOffset, value, mode);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/free-space.tq?l=5&c=1
template<class D, class P>
D TorqueGeneratedFreeSpace<D, P>::cast(Object object) {
    return D(object.ptr());
}

template<class D, class P>
inline TorqueGeneratedFreeSpace<D, P>::TorqueGeneratedFreeSpace(Address ptr)
    : P(ptr) {
  SLOW_DCHECK(IsFreeSpace_NonInline(*this));
}
template<class D, class P>
inline TorqueGeneratedFreeSpace<D, P>::TorqueGeneratedFreeSpace(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi)
    : P(ptr, allow_smi) {
  SLOW_DCHECK((allow_smi == HeapObject::AllowInlineSmiStorage::kAllowBeingASmi && this->IsSmi()) || IsFreeSpace_NonInline(*this));
}
