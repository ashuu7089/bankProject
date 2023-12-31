class Context::BodyDescriptor final : public SuffixRangeBodyDescriptor<8> {
 public:
  static inline int SizeOf(Map map, HeapObject raw_object) {
    return Context::unchecked_cast(raw_object).AllocatedSize();
  }

};
class FixedArray::BodyDescriptor final : public SuffixRangeBodyDescriptor<8> {
 public:
  static inline int SizeOf(Map map, HeapObject raw_object) {
    return FixedArray::unchecked_cast(raw_object).AllocatedSize();
  }

};
class WeakFixedArray::BodyDescriptor final : public SuffixRangeWeakBodyDescriptor<8> {
 public:
  static inline int SizeOf(Map map, HeapObject raw_object) {
    return WeakFixedArray::unchecked_cast(raw_object).AllocatedSize();
  }

};
class SloppyArgumentsElements::BodyDescriptor final : public SuffixRangeBodyDescriptor<8> {
 public:
  static inline int SizeOf(Map map, HeapObject raw_object) {
    return SloppyArgumentsElements::unchecked_cast(raw_object).AllocatedSize();
  }

};
class ScopeInfo::BodyDescriptor final : public SuffixRangeBodyDescriptor<8> {
 public:
  static inline int SizeOf(Map map, HeapObject raw_object) {
    return ScopeInfo::unchecked_cast(raw_object).AllocatedSize();
  }

};
class DescriptorArray::BodyDescriptor final : public SuffixRangeWeakBodyDescriptor<16> {
 public:
  static inline int SizeOf(Map map, HeapObject raw_object) {
    return DescriptorArray::unchecked_cast(raw_object).AllocatedSize();
  }

};
class StrongDescriptorArray::BodyDescriptor final : public SuffixRangeWeakBodyDescriptor<16> {
 public:
  static inline int SizeOf(Map map, HeapObject raw_object) {
    return StrongDescriptorArray::unchecked_cast(raw_object).AllocatedSize();
  }

};
class FeedbackVector::BodyDescriptor final : public SuffixRangeWeakBodyDescriptor<24> {
 public:
  static inline int SizeOf(Map map, HeapObject raw_object) {
    return FeedbackVector::unchecked_cast(raw_object).AllocatedSize();
  }

};
class WeakArrayList::BodyDescriptor final : public SuffixRangeWeakBodyDescriptor<8> {
 public:
  static inline int SizeOf(Map map, HeapObject raw_object) {
    return WeakArrayList::unchecked_cast(raw_object).AllocatedSize();
  }

};
class MegaDomHandler::BodyDescriptor final : public SuffixRangeWeakBodyDescriptor<8> {
 public:
  static inline int SizeOf(Map map, HeapObject raw_object) {
    return 24;
  }

};
class SharedFunctionInfo::BodyDescriptor final : public BodyDescriptorBase {
 public:
  static bool IsValidSlot(Map map, HeapObject obj, int offset) {
      bool valid_slots[] = {1,1,1,1,1,0,0,};
      return valid_slots[static_cast<unsigned int>(offset)/kTaggedSize];
  }

  template <typename ObjectVisitor>
  static inline void IterateBody(Map map, HeapObject obj, int object_size, ObjectVisitor* v) {
    IterateCustomWeakPointer(obj, 8, v);
    IteratePointers(obj, 16, 40, v);
  }

  static inline int SizeOf(Map map, HeapObject raw_object) {
    return 56;
  }

};
class UncompiledDataWithoutPreparseData::BodyDescriptor final : public FixedRangeBodyDescriptor<8, 16> {
 public:
  static inline int SizeOf(Map map, HeapObject raw_object) {
    return 24;
  }

};
class UncompiledDataWithPreparseData::BodyDescriptor final : public BodyDescriptorBase {
 public:
  static bool IsValidSlot(Map map, HeapObject obj, int offset) {
      bool valid_slots[] = {1,1,0,1,};
      return valid_slots[static_cast<unsigned int>(offset)/kTaggedSize];
  }

  template <typename ObjectVisitor>
  static inline void IterateBody(Map map, HeapObject obj, int object_size, ObjectVisitor* v) {
    IteratePointer(obj, 8, v);
    IteratePointer(obj, 24, v);
  }

  static inline int SizeOf(Map map, HeapObject raw_object) {
    return 32;
  }

};
class UncompiledDataWithoutPreparseDataWithJob::BodyDescriptor final : public FixedRangeBodyDescriptor<8, 16> {
 public:
  static inline int SizeOf(Map map, HeapObject raw_object) {
    return 32;
  }

};
class UncompiledDataWithPreparseDataAndJob::BodyDescriptor final : public BodyDescriptorBase {
 public:
  static bool IsValidSlot(Map map, HeapObject obj, int offset) {
      bool valid_slots[] = {1,1,0,1,0,};
      return valid_slots[static_cast<unsigned int>(offset)/kTaggedSize];
  }

  template <typename ObjectVisitor>
  static inline void IterateBody(Map map, HeapObject obj, int object_size, ObjectVisitor* v) {
    IteratePointer(obj, 8, v);
    IteratePointer(obj, 24, v);
  }

  static inline int SizeOf(Map map, HeapObject raw_object) {
    return 40;
  }

};
class OnHeapBasicBlockProfilerData::BodyDescriptor final : public SuffixRangeBodyDescriptor<8> {
 public:
  static inline int SizeOf(Map map, HeapObject raw_object) {
    return 64;
  }

};
class ConsString::BodyDescriptor final : public SuffixRangeBodyDescriptor<16> {
 public:
  static inline int SizeOf(Map map, HeapObject raw_object) {
    return 32;
  }

};
class SeqOneByteString::BodyDescriptor final : public DataOnlyBodyDescriptor {
 public:
  static inline int SizeOf(Map map, HeapObject raw_object) {
    return SeqOneByteString::unchecked_cast(raw_object).AllocatedSize();
  }

};
class SeqTwoByteString::BodyDescriptor final : public DataOnlyBodyDescriptor {
 public:
  static inline int SizeOf(Map map, HeapObject raw_object) {
    return SeqTwoByteString::unchecked_cast(raw_object).AllocatedSize();
  }

};
class SlicedString::BodyDescriptor final : public SuffixRangeBodyDescriptor<16> {
 public:
  static inline int SizeOf(Map map, HeapObject raw_object) {
    return 32;
  }

};
class ThinString::BodyDescriptor final : public SuffixRangeBodyDescriptor<16> {
 public:
  static inline int SizeOf(Map map, HeapObject raw_object) {
    return 24;
  }

};
class TurbofanBitsetType::BodyDescriptor final : public DataOnlyBodyDescriptor {
 public:
  static inline int SizeOf(Map map, HeapObject raw_object) {
    return 16;
  }

};
class TurbofanUnionType::BodyDescriptor final : public SuffixRangeBodyDescriptor<8> {
 public:
  static inline int SizeOf(Map map, HeapObject raw_object) {
    return 24;
  }

};
class TurbofanRangeType::BodyDescriptor final : public DataOnlyBodyDescriptor {
 public:
  static inline int SizeOf(Map map, HeapObject raw_object) {
    return 24;
  }

};
class TurbofanHeapConstantType::BodyDescriptor final : public SuffixRangeBodyDescriptor<8> {
 public:
  static inline int SizeOf(Map map, HeapObject raw_object) {
    return 16;
  }

};
class TurbofanOtherNumberConstantType::BodyDescriptor final : public DataOnlyBodyDescriptor {
 public:
  static inline int SizeOf(Map map, HeapObject raw_object) {
    return 16;
  }

};
class InternalClass::BodyDescriptor final : public SuffixRangeBodyDescriptor<8> {
 public:
  static inline int SizeOf(Map map, HeapObject raw_object) {
    return 24;
  }

};
class SmiPair::BodyDescriptor final : public SuffixRangeBodyDescriptor<8> {
 public:
  static inline int SizeOf(Map map, HeapObject raw_object) {
    return 24;
  }

};
class SmiBox::BodyDescriptor final : public SuffixRangeBodyDescriptor<8> {
 public:
  static inline int SizeOf(Map map, HeapObject raw_object) {
    return 24;
  }

};
class ExportedSubClassBase::BodyDescriptor final : public SuffixRangeBodyDescriptor<8> {
 public:
  static inline int SizeOf(Map map, HeapObject raw_object) {
    return 24;
  }

};
class ExportedSubClass::BodyDescriptor final : public BodyDescriptorBase {
 public:
  static bool IsValidSlot(Map map, HeapObject obj, int offset) {
      bool valid_slots[] = {1,1,1,0,1,};
      return valid_slots[static_cast<unsigned int>(offset)/kTaggedSize];
  }

  template <typename ObjectVisitor>
  static inline void IterateBody(Map map, HeapObject obj, int object_size, ObjectVisitor* v) {
    IteratePointers(obj, 8, 24, v);
    IteratePointer(obj, 32, v);
  }

  static inline int SizeOf(Map map, HeapObject raw_object) {
    return 40;
  }

};
class AbstractInternalClassSubclass1::BodyDescriptor final : public DataOnlyBodyDescriptor {
 public:
  static inline int SizeOf(Map map, HeapObject raw_object) {
    return 8;
  }

};
class AbstractInternalClassSubclass2::BodyDescriptor final : public DataOnlyBodyDescriptor {
 public:
  static inline int SizeOf(Map map, HeapObject raw_object) {
    return 8;
  }

};
class InternalClassWithSmiElements::BodyDescriptor final : public SuffixRangeBodyDescriptor<8> {
 public:
  static inline int SizeOf(Map map, HeapObject raw_object) {
    return InternalClassWithSmiElements::unchecked_cast(raw_object).AllocatedSize();
  }

};
class InternalClassWithStructElements::BodyDescriptor final : public SuffixRangeBodyDescriptor<16> {
 public:
  static inline int SizeOf(Map map, HeapObject raw_object) {
    return InternalClassWithStructElements::unchecked_cast(raw_object).AllocatedSize();
  }

};
class ExportedSubClass2::BodyDescriptor final : public BodyDescriptorBase {
 public:
  static bool IsValidSlot(Map map, HeapObject obj, int offset) {
      bool valid_slots[] = {1,1,1,0,1,};
      return valid_slots[static_cast<unsigned int>(offset)/kTaggedSize];
  }

  template <typename ObjectVisitor>
  static inline void IterateBody(Map map, HeapObject obj, int object_size, ObjectVisitor* v) {
    IteratePointers(obj, 8, 24, v);
    IteratePointer(obj, 32, v);
  }

  static inline int SizeOf(Map map, HeapObject raw_object) {
    return 40;
  }

};
class SortState::BodyDescriptor final : public SuffixRangeBodyDescriptor<8> {
 public:
  static inline int SizeOf(Map map, HeapObject raw_object) {
    return 136;
  }

};
class WasmStringViewIter::BodyDescriptor final : public FixedRangeBodyDescriptor<8, 16> {
 public:
  static inline int SizeOf(Map map, HeapObject raw_object) {
    return 20;
  }

};
