class MegaDomHandler;
// Alias for HeapObject::IsMegaDomHandler() that avoids inlining.
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/megadom-handler.tq?l=5&c=1
V8_EXPORT_PRIVATE bool IsMegaDomHandler_NonInline(HeapObject o);

// Definition https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/megadom-handler.tq?l=5&c=1
template <class D, class P>
class TorqueGeneratedMegaDomHandler : public P {
  static_assert(
      std::is_same<MegaDomHandler, D>::value,
      "Use this class as direct base for MegaDomHandler.");
  static_assert(
      std::is_same<HeapObject, P>::value,
      "Pass in HeapObject as second template parameter for TorqueGeneratedMegaDomHandler.");

 public: 
  using Super = P;
  using TorqueGeneratedClass = TorqueGeneratedMegaDomHandler<D,P>;

  // Torque type: MaybeObject
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/megadom-handler.tq?l=7&c=3
  inline MaybeObject accessor() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/megadom-handler.tq?l=7&c=3
  inline MaybeObject accessor(PtrComprCageBase cage_base) const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/megadom-handler.tq?l=7&c=3
  inline void set_accessor(MaybeObject value, WriteBarrierMode mode = UPDATE_WRITE_BARRIER);

  // Torque type: MaybeObject
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/megadom-handler.tq?l=8&c=3
  inline MaybeObject context() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/megadom-handler.tq?l=8&c=3
  inline MaybeObject context(PtrComprCageBase cage_base) const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/megadom-handler.tq?l=8&c=3
  inline void set_context(MaybeObject value, WriteBarrierMode mode = UPDATE_WRITE_BARRIER);

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/megadom-handler.tq?l=5&c=1
  V8_INLINE static D cast(Object object);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/megadom-handler.tq?l=5&c=1
  V8_INLINE static D unchecked_cast(Object object) {
    return base::bit_cast<D>(object);
  }

  DECL_PRINTER(MegaDomHandler)

#ifdef VERIFY_HEAP
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/megadom-handler.tq?l=5&c=1
  V8_EXPORT_PRIVATE void MegaDomHandlerVerify(Isolate* isolate);
#endif  // VERIFY_HEAP

  static constexpr int kStartOfWeakFieldsOffset = P::kHeaderSize;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/megadom-handler.tq?l=7&c=3
  static constexpr int kAccessorOffset = P::kHeaderSize;
  static constexpr int kAccessorOffsetEnd = kAccessorOffset + kTaggedSize - 1;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/megadom-handler.tq?l=8&c=3
  static constexpr int kContextOffset = kAccessorOffsetEnd + 1;
  static constexpr int kContextOffsetEnd = kContextOffset + kTaggedSize - 1;
  static constexpr int kEndOfWeakFieldsOffset = kContextOffsetEnd + 1;
  static constexpr int kStartOfStrongFieldsOffset = kContextOffsetEnd + 1;
  static constexpr int kEndOfStrongFieldsOffset = kContextOffsetEnd + 1;
  static constexpr int kHeaderSize = kContextOffsetEnd + 1;
  static constexpr int kSize = kContextOffsetEnd + 1;

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/megadom-handler.tq?l=5&c=1
  V8_INLINE static constexpr int32_t SizeFor() {
    DCHECK(kHeaderSize == kSize && kHeaderSize == 24);
    int32_t size = kHeaderSize;
    return size;
  }

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/megadom-handler.tq?l=5&c=1
  V8_INLINE int32_t AllocatedSize() const {
    return SizeFor();
  }

  friend class Factory;

  template <class DAlias = D>
  constexpr TorqueGeneratedMegaDomHandler() : P() {
    static_assert(
        std::is_base_of<TorqueGeneratedMegaDomHandler, DAlias>::value,
        "class TorqueGeneratedMegaDomHandler should be used as direct base for MegaDomHandler.");
  }

 protected:
  inline explicit TorqueGeneratedMegaDomHandler(Address ptr);
  // Special-purpose constructor for subclasses that have fast paths where
  // their ptr() is a Smi.
  inline explicit TorqueGeneratedMegaDomHandler(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi);
};

