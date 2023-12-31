class JSArrayBufferView;
class JSTypedArray;
class JSArrayBuffer;
class JSDataView;
// Alias for HeapObject::IsJSArrayBufferView() that avoids inlining.
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array-buffer.tq?l=62&c=1
V8_EXPORT_PRIVATE bool IsJSArrayBufferView_NonInline(HeapObject o);

// Definition https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array-buffer.tq?l=62&c=1
template <class D, class P>
class TorqueGeneratedJSArrayBufferView : public P {
  static_assert(
      std::is_same<JSArrayBufferView, D>::value,
      "Use this class as direct base for JSArrayBufferView.");
  static_assert(
      std::is_same<JSObjectWithEmbedderSlots, P>::value,
      "Pass in JSObjectWithEmbedderSlots as second template parameter for TorqueGeneratedJSArrayBufferView.");

 public: 
  using Super = P;
  using TorqueGeneratedClass = TorqueGeneratedJSArrayBufferView<D,P>;

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array-buffer.tq?l=64&c=3
  inline JSArrayBuffer buffer() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array-buffer.tq?l=64&c=3
  inline JSArrayBuffer buffer(PtrComprCageBase cage_base) const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array-buffer.tq?l=64&c=3
  inline void set_buffer(JSArrayBuffer value, WriteBarrierMode mode = UPDATE_WRITE_BARRIER);

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array-buffer.tq?l=66&c=3
  inline uintptr_t raw_byte_offset() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array-buffer.tq?l=66&c=3
  inline void set_raw_byte_offset(uintptr_t value);

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array-buffer.tq?l=68&c=3
  inline uintptr_t raw_byte_length() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array-buffer.tq?l=68&c=3
  inline void set_raw_byte_length(uintptr_t value);

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array-buffer.tq?l=69&c=3
  inline uint32_t bit_field() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array-buffer.tq?l=69&c=3
  inline void set_bit_field(uint32_t value);

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array-buffer.tq?l=71&c=28
  inline uint32_t optional_padding() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array-buffer.tq?l=71&c=28
  inline void set_optional_padding(uint32_t value);

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array-buffer.tq?l=62&c=1
  V8_INLINE static D cast(Object object);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array-buffer.tq?l=62&c=1
  V8_INLINE static D unchecked_cast(Object object) {
    return base::bit_cast<D>(object);
  }

#ifdef VERIFY_HEAP
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array-buffer.tq?l=62&c=1
  V8_EXPORT_PRIVATE void JSArrayBufferViewVerify(Isolate* isolate);
#endif  // VERIFY_HEAP

  static constexpr int kStartOfStrongFieldsOffset = P::kHeaderSize;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array-buffer.tq?l=64&c=3
  static constexpr int kBufferOffset = P::kHeaderSize;
  static constexpr int kBufferOffsetEnd = kBufferOffset + kTaggedSize - 1;
  static constexpr int kEndOfStrongFieldsOffset = kBufferOffsetEnd + 1;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array-buffer.tq?l=66&c=3
  static constexpr int kRawByteOffsetOffset = kBufferOffsetEnd + 1;
  static constexpr int kRawByteOffsetOffsetEnd = kRawByteOffsetOffset + kIntptrSize - 1;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array-buffer.tq?l=68&c=3
  static constexpr int kRawByteLengthOffset = kRawByteOffsetOffsetEnd + 1;
  static constexpr int kRawByteLengthOffsetEnd = kRawByteLengthOffset + kIntptrSize - 1;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array-buffer.tq?l=69&c=3
  static constexpr int kBitFieldOffset = kRawByteLengthOffsetEnd + 1;
  static constexpr int kBitFieldOffsetEnd = kBitFieldOffset + kInt32Size - 1;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array-buffer.tq?l=71&c=28
  static constexpr int kOptionalPaddingOffset = kBitFieldOffsetEnd + 1;
  static constexpr int kOptionalPaddingOffsetEnd = kOptionalPaddingOffset + kInt32Size - 1;
  static constexpr int kStartOfWeakFieldsOffset = kOptionalPaddingOffsetEnd + 1;
  static constexpr int kEndOfWeakFieldsOffset = kOptionalPaddingOffsetEnd + 1;
  static constexpr int kHeaderSize = kOptionalPaddingOffsetEnd + 1;

  friend class Factory;

  template <class DAlias = D>
  constexpr TorqueGeneratedJSArrayBufferView() : P() {
    static_assert(
        std::is_base_of<TorqueGeneratedJSArrayBufferView, DAlias>::value,
        "class TorqueGeneratedJSArrayBufferView should be used as direct base for JSArrayBufferView.");
  }

 protected:
  inline explicit TorqueGeneratedJSArrayBufferView(Address ptr);
  // Special-purpose constructor for subclasses that have fast paths where
  // their ptr() is a Smi.
  inline explicit TorqueGeneratedJSArrayBufferView(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi);
};

// Alias for HeapObject::IsJSTypedArray() that avoids inlining.
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array-buffer.tq?l=108&c=1
V8_EXPORT_PRIVATE bool IsJSTypedArray_NonInline(HeapObject o);

// Definition https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array-buffer.tq?l=108&c=1
template <class D, class P>
class TorqueGeneratedJSTypedArray : public P {
  static_assert(
      std::is_same<JSTypedArray, D>::value,
      "Use this class as direct base for JSTypedArray.");
  static_assert(
      std::is_same<JSArrayBufferView, P>::value,
      "Pass in JSArrayBufferView as second template parameter for TorqueGeneratedJSTypedArray.");

 public: 
  using Super = P;
  using TorqueGeneratedClass = TorqueGeneratedJSTypedArray<D,P>;

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array-buffer.tq?l=110&c=3
  inline uintptr_t raw_length() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array-buffer.tq?l=110&c=3
  inline void set_raw_length(uintptr_t value);

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array-buffer.tq?l=112&c=3
  inline Address external_pointer() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array-buffer.tq?l=112&c=3
  inline void set_external_pointer(Address value);

  // Torque type: (Smi | class ByteArray)
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array-buffer.tq?l=113&c=3
  inline Object base_pointer() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array-buffer.tq?l=113&c=3
  inline Object base_pointer(PtrComprCageBase cage_base) const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array-buffer.tq?l=113&c=3
  inline void set_base_pointer(Object value, WriteBarrierMode mode = UPDATE_WRITE_BARRIER);

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array-buffer.tq?l=108&c=1
  V8_INLINE static D cast(Object object);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array-buffer.tq?l=108&c=1
  V8_INLINE static D unchecked_cast(Object object) {
    return base::bit_cast<D>(object);
  }

  DECL_PRINTER(JSTypedArray)

#ifdef VERIFY_HEAP
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array-buffer.tq?l=108&c=1
  V8_EXPORT_PRIVATE void JSTypedArrayVerify(Isolate* isolate);
#endif  // VERIFY_HEAP

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array-buffer.tq?l=110&c=3
  static constexpr int kRawLengthOffset = P::kHeaderSize;
  static constexpr int kRawLengthOffsetEnd = kRawLengthOffset + kIntptrSize - 1;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array-buffer.tq?l=112&c=3
  static constexpr int kExternalPointerOffset = kRawLengthOffsetEnd + 1;
  static constexpr int kExternalPointerOffsetEnd = kExternalPointerOffset + kSystemPointerSize - 1;
  static constexpr int kStartOfStrongFieldsOffset = kExternalPointerOffsetEnd + 1;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array-buffer.tq?l=113&c=3
  static constexpr int kBasePointerOffset = kExternalPointerOffsetEnd + 1;
  static constexpr int kBasePointerOffsetEnd = kBasePointerOffset + kTaggedSize - 1;
  static constexpr int kEndOfStrongFieldsOffset = kBasePointerOffsetEnd + 1;
  static constexpr int kStartOfWeakFieldsOffset = kBasePointerOffsetEnd + 1;
  static constexpr int kEndOfWeakFieldsOffset = kBasePointerOffsetEnd + 1;
  static constexpr int kHeaderSize = kBasePointerOffsetEnd + 1;

  friend class Factory;

  template <class DAlias = D>
  constexpr TorqueGeneratedJSTypedArray() : P() {
    static_assert(
        std::is_base_of<TorqueGeneratedJSTypedArray, DAlias>::value,
        "class TorqueGeneratedJSTypedArray should be used as direct base for JSTypedArray.");
  }

 protected:
  inline explicit TorqueGeneratedJSTypedArray(Address ptr);
  // Special-purpose constructor for subclasses that have fast paths where
  // their ptr() is a Smi.
  inline explicit TorqueGeneratedJSTypedArray(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi);
};

// Alias for HeapObject::IsJSArrayBuffer() that avoids inlining.
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array-buffer.tq?l=14&c=1
V8_EXPORT_PRIVATE bool IsJSArrayBuffer_NonInline(HeapObject o);

// Definition https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array-buffer.tq?l=14&c=1
template <class D, class P>
class TorqueGeneratedJSArrayBuffer : public P {
  static_assert(
      std::is_same<JSArrayBuffer, D>::value,
      "Use this class as direct base for JSArrayBuffer.");
  static_assert(
      std::is_same<JSObjectWithEmbedderSlots, P>::value,
      "Pass in JSObjectWithEmbedderSlots as second template parameter for TorqueGeneratedJSArrayBuffer.");

 public: 
  using Super = P;
  using TorqueGeneratedClass = TorqueGeneratedJSArrayBuffer<D,P>;

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array-buffer.tq?l=16&c=3
  inline uintptr_t raw_byte_length() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array-buffer.tq?l=16&c=3
  inline void set_raw_byte_length(uintptr_t value);

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array-buffer.tq?l=18&c=3
  inline uintptr_t raw_max_byte_length() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array-buffer.tq?l=18&c=3
  inline void set_raw_max_byte_length(uintptr_t value);

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array-buffer.tq?l=20&c=3
  inline Address backing_store() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array-buffer.tq?l=20&c=3
  inline void set_backing_store(Address value);

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array-buffer.tq?l=21&c=3
  inline Address extension() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array-buffer.tq?l=21&c=3
  inline void set_extension(Address value);

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array-buffer.tq?l=22&c=3
  inline uint32_t bit_field() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array-buffer.tq?l=22&c=3
  inline void set_bit_field(uint32_t value);

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array-buffer.tq?l=24&c=28
  inline uint32_t optional_padding() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array-buffer.tq?l=24&c=28
  inline void set_optional_padding(uint32_t value);

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array-buffer.tq?l=14&c=1
  V8_INLINE static D cast(Object object);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array-buffer.tq?l=14&c=1
  V8_INLINE static D unchecked_cast(Object object) {
    return base::bit_cast<D>(object);
  }

  DECL_PRINTER(JSArrayBuffer)

#ifdef VERIFY_HEAP
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array-buffer.tq?l=14&c=1
  V8_EXPORT_PRIVATE void JSArrayBufferVerify(Isolate* isolate);
#endif  // VERIFY_HEAP

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array-buffer.tq?l=16&c=3
  static constexpr int kRawByteLengthOffset = P::kHeaderSize;
  static constexpr int kRawByteLengthOffsetEnd = kRawByteLengthOffset + kIntptrSize - 1;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array-buffer.tq?l=18&c=3
  static constexpr int kRawMaxByteLengthOffset = kRawByteLengthOffsetEnd + 1;
  static constexpr int kRawMaxByteLengthOffsetEnd = kRawMaxByteLengthOffset + kIntptrSize - 1;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array-buffer.tq?l=20&c=3
  static constexpr int kBackingStoreOffset = kRawMaxByteLengthOffsetEnd + 1;
  static constexpr int kBackingStoreOffsetEnd = kBackingStoreOffset + kSystemPointerSize - 1;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array-buffer.tq?l=21&c=3
  static constexpr int kExtensionOffset = kBackingStoreOffsetEnd + 1;
  static constexpr int kExtensionOffsetEnd = kExtensionOffset + kSystemPointerSize - 1;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array-buffer.tq?l=22&c=3
  static constexpr int kBitFieldOffset = kExtensionOffsetEnd + 1;
  static constexpr int kBitFieldOffsetEnd = kBitFieldOffset + kInt32Size - 1;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array-buffer.tq?l=24&c=28
  static constexpr int kOptionalPaddingOffset = kBitFieldOffsetEnd + 1;
  static constexpr int kOptionalPaddingOffsetEnd = kOptionalPaddingOffset + kInt32Size - 1;
  static constexpr int kStartOfWeakFieldsOffset = kOptionalPaddingOffsetEnd + 1;
  static constexpr int kEndOfWeakFieldsOffset = kOptionalPaddingOffsetEnd + 1;
  static constexpr int kStartOfStrongFieldsOffset = kOptionalPaddingOffsetEnd + 1;
  static constexpr int kEndOfStrongFieldsOffset = kOptionalPaddingOffsetEnd + 1;
  static constexpr int kHeaderSize = kOptionalPaddingOffsetEnd + 1;

  friend class Factory;

  template <class DAlias = D>
  constexpr TorqueGeneratedJSArrayBuffer() : P() {
    static_assert(
        std::is_base_of<TorqueGeneratedJSArrayBuffer, DAlias>::value,
        "class TorqueGeneratedJSArrayBuffer should be used as direct base for JSArrayBuffer.");
  }

 protected:
  inline explicit TorqueGeneratedJSArrayBuffer(Address ptr);
  // Special-purpose constructor for subclasses that have fast paths where
  // their ptr() is a Smi.
  inline explicit TorqueGeneratedJSArrayBuffer(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi);
};

// Alias for HeapObject::IsJSDataView() that avoids inlining.
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array-buffer.tq?l=126&c=1
V8_EXPORT_PRIVATE bool IsJSDataView_NonInline(HeapObject o);

// Definition https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array-buffer.tq?l=126&c=1
template <class D, class P>
class TorqueGeneratedJSDataView : public P {
  static_assert(
      std::is_same<JSDataView, D>::value,
      "Use this class as direct base for JSDataView.");
  static_assert(
      std::is_same<JSArrayBufferView, P>::value,
      "Pass in JSArrayBufferView as second template parameter for TorqueGeneratedJSDataView.");

 public: 
  using Super = P;
  using TorqueGeneratedClass = TorqueGeneratedJSDataView<D,P>;

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array-buffer.tq?l=128&c=3
  inline Address data_pointer() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array-buffer.tq?l=128&c=3
  inline void set_data_pointer(Address value);

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array-buffer.tq?l=126&c=1
  V8_INLINE static D cast(Object object);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array-buffer.tq?l=126&c=1
  V8_INLINE static D unchecked_cast(Object object) {
    return base::bit_cast<D>(object);
  }

  DECL_PRINTER(JSDataView)

#ifdef VERIFY_HEAP
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array-buffer.tq?l=126&c=1
  V8_EXPORT_PRIVATE void JSDataViewVerify(Isolate* isolate);
#endif  // VERIFY_HEAP

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array-buffer.tq?l=128&c=3
  static constexpr int kDataPointerOffset = P::kHeaderSize;
  static constexpr int kDataPointerOffsetEnd = kDataPointerOffset + kSystemPointerSize - 1;
  static constexpr int kStartOfWeakFieldsOffset = kDataPointerOffsetEnd + 1;
  static constexpr int kEndOfWeakFieldsOffset = kDataPointerOffsetEnd + 1;
  static constexpr int kStartOfStrongFieldsOffset = kDataPointerOffsetEnd + 1;
  static constexpr int kEndOfStrongFieldsOffset = kDataPointerOffsetEnd + 1;
  static constexpr int kHeaderSize = kDataPointerOffsetEnd + 1;

  friend class Factory;

  template <class DAlias = D>
  constexpr TorqueGeneratedJSDataView() : P() {
    static_assert(
        std::is_base_of<TorqueGeneratedJSDataView, DAlias>::value,
        "class TorqueGeneratedJSDataView should be used as direct base for JSDataView.");
  }

 protected:
  inline explicit TorqueGeneratedJSDataView(Address ptr);
  // Special-purpose constructor for subclasses that have fast paths where
  // their ptr() is a Smi.
  inline explicit TorqueGeneratedJSDataView(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi);
};

