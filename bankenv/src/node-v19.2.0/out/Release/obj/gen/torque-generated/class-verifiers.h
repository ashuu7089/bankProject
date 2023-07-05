#ifndef V8_GEN_TORQUE_GENERATED_CLASS_VERIFIERS_H_
#define V8_GEN_TORQUE_GENERATED_CLASS_VERIFIERS_H_

#ifdef VERIFY_HEAP
#include "src/base/macros.h"

namespace v8 {
namespace internal {
class Isolate;
class Context;
class JSReceiver;
class PrimitiveHeapObject;
class Name;
class Symbol;
class String;
class HeapNumber;
class FixedArrayBase;
class FixedArray;
class JSObject;
class WeakFixedArray;
class Foreign;
class JSProxy;
class JSFunctionOrBoundFunctionOrWrappedFunction;
class JSWrappedFunction;
class JSBoundFunction;
class JSFunction;
class JSObjectWithEmbedderSlots;
class JSCustomElementsObject;
class JSSpecialObject;
class WasmInternalFunction;
class WeakCell;
class Map;
class JSPromise;
class Struct;
class PromiseCapability;
class JSArrayBufferView;
class JSTypedArray;
class DataHandler;
class AllocationMemento;
class CallHandlerInfo;
class InterceptorInfo;
class AccessCheckInfo;
class AccessorInfo;
class JSArgumentsObject;
class SloppyArgumentsElements;
class AliasedArgumentsEntry;
class CallSiteInfo;
class Cell;
class BytecodeArray;
class ScopeInfo;
class FixedDoubleArray;
class RegExpMatchInfo;
class BreakPoint;
class BreakPointInfo;
class DebugInfo;
class CoverageInfo;
class StackFrameInfo;
class ErrorStackData;
class PromiseOnStack;
class EnumCache;
class ClassPositions;
class AccessorPair;
class DescriptorArray;
class StrongDescriptorArray;
class EmbedderDataArray;
class FeedbackCell;
class FeedbackVector;
class ByteArray;
class ArrayList;
class TemplateList;
class WeakArrayList;
class FreeSpace;
class JSArrayBuffer;
class JSDataView;
class JSArrayIterator;
class JSArray;
class JSSynchronizationPrimitive;
class JSAtomicsMutex;
class JSAtomicsCondition;
class JSCollectionIterator;
class JSCollection;
class JSSet;
class JSMap;
class JSWeakCollection;
class JSWeakSet;
class JSWeakMap;
class JSGeneratorObject;
class JSAsyncFunctionObject;
class JSAsyncGeneratorObject;
class AsyncGeneratorRequest;
class JSExternalObject;
class JSGlobalProxy;
class JSGlobalObject;
class JSPrimitiveWrapper;
class JSMessageObject;
class JSDate;
class JSAsyncFromSyncIterator;
class JSStringIterator;
class JSRawJson;
class JSRegExpStringIterator;
class JSRegExp;
class JSShadowRealm;
class JSSharedArray;
class JSSharedStruct;
class JSTemporalCalendar;
class JSTemporalDuration;
class JSTemporalInstant;
class JSTemporalPlainDateTime;
class JSTemporalPlainDate;
class JSTemporalPlainMonthDay;
class JSTemporalPlainTime;
class JSTemporalPlainYearMonth;
class JSTemporalTimeZone;
class JSTemporalZonedDateTime;
class JSFinalizationRegistry;
class JSWeakRef;
class ArrayBoilerplateDescription;
class RegExpBoilerplateDescription;
class MegaDomHandler;
class Microtask;
class CallbackTask;
class CallableTask;
class Module;
class JSModuleNamespace;
class ScriptOrModule;
class PromiseReaction;
class PromiseReactionJobTask;
class PromiseFulfillReactionJobTask;
class PromiseRejectReactionJobTask;
class PromiseResolveThenableJobTask;
class PropertyArray;
class PropertyCell;
class PropertyDescriptorObject;
class PrototypeInfo;
class Script;
class PreparseData;
class InterpreterData;
class SharedFunctionInfo;
class UncompiledData;
class UncompiledDataWithoutPreparseData;
class UncompiledDataWithPreparseData;
class UncompiledDataWithoutPreparseDataWithJob;
class UncompiledDataWithPreparseDataAndJob;
class OnHeapBasicBlockProfilerData;
class SourceTextModule;
class ModuleRequest;
class SourceTextModuleInfoEntry;
class ConsString;
class ExternalString;
class ExternalOneByteString;
class ExternalTwoByteString;
class InternalizedString;
class SeqString;
class SeqOneByteString;
class SeqTwoByteString;
class SlicedString;
class ThinString;
class Tuple2;
class SyntheticModule;
class CachedTemplateObject;
class TemplateObjectDescription;
class TemplateInfo;
class FunctionTemplateRareData;
class FunctionTemplateInfo;
class ObjectTemplateInfo;
class TurbofanType;
class TurbofanBitsetType;
class TurbofanUnionType;
class TurbofanRangeType;
class TurbofanHeapConstantType;
class TurbofanOtherNumberConstantType;
class InternalClass;
class SmiPair;
class SmiBox;
class ExportedSubClassBase;
class ExportedSubClass;
class AbstractInternalClass;
class AbstractInternalClassSubclass1;
class AbstractInternalClassSubclass2;
class InternalClassWithSmiElements;
class InternalClassWithStructElements;
class ExportedSubClass2;
class SortState;
class JSV8BreakIterator;
class JSCollator;
class JSDateTimeFormat;
class JSDisplayNames;
class JSDurationFormat;
class JSListFormat;
class JSLocale;
class JSNumberFormat;
class JSPluralRules;
class JSRelativeTimeFormat;
class JSSegmentIterator;
class JSSegmenter;
class JSSegments;
class WasmApiFunctionRef;
class WasmFunctionData;
class WasmExportedFunctionData;
class WasmJSFunctionData;
class WasmCapiFunctionData;
class WasmResumeData;
class WasmIndirectFunctionTable;
class WasmContinuationObject;
class WasmSuspenderObject;
class WasmExceptionTag;
class WasmModuleObject;
class WasmTableObject;
class WasmMemoryObject;
class WasmGlobalObject;
class WasmTagObject;
class AsmWasmData;
class WasmTypeInfo;
class WasmObject;
class WasmStruct;
class WasmArray;
class WasmStringViewIter;
class V8_EXPORT_PRIVATE TorqueGeneratedClassVerifiers{
 public:
  static void ContextVerify(Context o, Isolate* isolate);
  static void JSReceiverVerify(JSReceiver o, Isolate* isolate);
  static void PrimitiveHeapObjectVerify(PrimitiveHeapObject o, Isolate* isolate);
  static void NameVerify(Name o, Isolate* isolate);
  static void SymbolVerify(Symbol o, Isolate* isolate);
  static void StringVerify(String o, Isolate* isolate);
  static void HeapNumberVerify(HeapNumber o, Isolate* isolate);
  static void FixedArrayBaseVerify(FixedArrayBase o, Isolate* isolate);
  static void FixedArrayVerify(FixedArray o, Isolate* isolate);
  static void JSObjectVerify(JSObject o, Isolate* isolate);
  static void WeakFixedArrayVerify(WeakFixedArray o, Isolate* isolate);
  static void ForeignVerify(Foreign o, Isolate* isolate);
  static void JSProxyVerify(JSProxy o, Isolate* isolate);
  static void JSFunctionOrBoundFunctionOrWrappedFunctionVerify(JSFunctionOrBoundFunctionOrWrappedFunction o, Isolate* isolate);
  static void JSWrappedFunctionVerify(JSWrappedFunction o, Isolate* isolate);
  static void JSBoundFunctionVerify(JSBoundFunction o, Isolate* isolate);
  static void JSFunctionVerify(JSFunction o, Isolate* isolate);
  static void JSObjectWithEmbedderSlotsVerify(JSObjectWithEmbedderSlots o, Isolate* isolate);
  static void JSCustomElementsObjectVerify(JSCustomElementsObject o, Isolate* isolate);
  static void JSSpecialObjectVerify(JSSpecialObject o, Isolate* isolate);
  static void WasmInternalFunctionVerify(WasmInternalFunction o, Isolate* isolate);
  static void WeakCellVerify(WeakCell o, Isolate* isolate);
  static void MapVerify(Map o, Isolate* isolate);
  static void JSPromiseVerify(JSPromise o, Isolate* isolate);
  static void StructVerify(Struct o, Isolate* isolate);
  static void PromiseCapabilityVerify(PromiseCapability o, Isolate* isolate);
  static void JSArrayBufferViewVerify(JSArrayBufferView o, Isolate* isolate);
  static void JSTypedArrayVerify(JSTypedArray o, Isolate* isolate);
  static void DataHandlerVerify(DataHandler o, Isolate* isolate);
  static void AllocationMementoVerify(AllocationMemento o, Isolate* isolate);
  static void CallHandlerInfoVerify(CallHandlerInfo o, Isolate* isolate);
  static void InterceptorInfoVerify(InterceptorInfo o, Isolate* isolate);
  static void AccessCheckInfoVerify(AccessCheckInfo o, Isolate* isolate);
  static void AccessorInfoVerify(AccessorInfo o, Isolate* isolate);
  static void JSArgumentsObjectVerify(JSArgumentsObject o, Isolate* isolate);
  static void SloppyArgumentsElementsVerify(SloppyArgumentsElements o, Isolate* isolate);
  static void AliasedArgumentsEntryVerify(AliasedArgumentsEntry o, Isolate* isolate);
  static void CallSiteInfoVerify(CallSiteInfo o, Isolate* isolate);
  static void CellVerify(Cell o, Isolate* isolate);
  static void BytecodeArrayVerify(BytecodeArray o, Isolate* isolate);
  static void ScopeInfoVerify(ScopeInfo o, Isolate* isolate);
  static void FixedDoubleArrayVerify(FixedDoubleArray o, Isolate* isolate);
  static void RegExpMatchInfoVerify(RegExpMatchInfo o, Isolate* isolate);
  static void BreakPointVerify(BreakPoint o, Isolate* isolate);
  static void BreakPointInfoVerify(BreakPointInfo o, Isolate* isolate);
  static void DebugInfoVerify(DebugInfo o, Isolate* isolate);
  static void CoverageInfoVerify(CoverageInfo o, Isolate* isolate);
  static void StackFrameInfoVerify(StackFrameInfo o, Isolate* isolate);
  static void ErrorStackDataVerify(ErrorStackData o, Isolate* isolate);
  static void PromiseOnStackVerify(PromiseOnStack o, Isolate* isolate);
  static void EnumCacheVerify(EnumCache o, Isolate* isolate);
  static void ClassPositionsVerify(ClassPositions o, Isolate* isolate);
  static void AccessorPairVerify(AccessorPair o, Isolate* isolate);
  static void DescriptorArrayVerify(DescriptorArray o, Isolate* isolate);
  static void StrongDescriptorArrayVerify(StrongDescriptorArray o, Isolate* isolate);
  static void EmbedderDataArrayVerify(EmbedderDataArray o, Isolate* isolate);
  static void FeedbackCellVerify(FeedbackCell o, Isolate* isolate);
  static void FeedbackVectorVerify(FeedbackVector o, Isolate* isolate);
  static void ByteArrayVerify(ByteArray o, Isolate* isolate);
  static void ArrayListVerify(ArrayList o, Isolate* isolate);
  static void TemplateListVerify(TemplateList o, Isolate* isolate);
  static void WeakArrayListVerify(WeakArrayList o, Isolate* isolate);
  static void FreeSpaceVerify(FreeSpace o, Isolate* isolate);
  static void JSArrayBufferVerify(JSArrayBuffer o, Isolate* isolate);
  static void JSDataViewVerify(JSDataView o, Isolate* isolate);
  static void JSArrayIteratorVerify(JSArrayIterator o, Isolate* isolate);
  static void JSArrayVerify(JSArray o, Isolate* isolate);
  static void JSSynchronizationPrimitiveVerify(JSSynchronizationPrimitive o, Isolate* isolate);
  static void JSAtomicsMutexVerify(JSAtomicsMutex o, Isolate* isolate);
  static void JSAtomicsConditionVerify(JSAtomicsCondition o, Isolate* isolate);
  static void JSCollectionIteratorVerify(JSCollectionIterator o, Isolate* isolate);
  static void JSCollectionVerify(JSCollection o, Isolate* isolate);
  static void JSSetVerify(JSSet o, Isolate* isolate);
  static void JSMapVerify(JSMap o, Isolate* isolate);
  static void JSWeakCollectionVerify(JSWeakCollection o, Isolate* isolate);
  static void JSWeakSetVerify(JSWeakSet o, Isolate* isolate);
  static void JSWeakMapVerify(JSWeakMap o, Isolate* isolate);
  static void JSGeneratorObjectVerify(JSGeneratorObject o, Isolate* isolate);
  static void JSAsyncFunctionObjectVerify(JSAsyncFunctionObject o, Isolate* isolate);
  static void JSAsyncGeneratorObjectVerify(JSAsyncGeneratorObject o, Isolate* isolate);
  static void AsyncGeneratorRequestVerify(AsyncGeneratorRequest o, Isolate* isolate);
  static void JSExternalObjectVerify(JSExternalObject o, Isolate* isolate);
  static void JSGlobalProxyVerify(JSGlobalProxy o, Isolate* isolate);
  static void JSGlobalObjectVerify(JSGlobalObject o, Isolate* isolate);
  static void JSPrimitiveWrapperVerify(JSPrimitiveWrapper o, Isolate* isolate);
  static void JSMessageObjectVerify(JSMessageObject o, Isolate* isolate);
  static void JSDateVerify(JSDate o, Isolate* isolate);
  static void JSAsyncFromSyncIteratorVerify(JSAsyncFromSyncIterator o, Isolate* isolate);
  static void JSStringIteratorVerify(JSStringIterator o, Isolate* isolate);
  static void JSRawJsonVerify(JSRawJson o, Isolate* isolate);
  static void JSRegExpStringIteratorVerify(JSRegExpStringIterator o, Isolate* isolate);
  static void JSRegExpVerify(JSRegExp o, Isolate* isolate);
  static void JSShadowRealmVerify(JSShadowRealm o, Isolate* isolate);
  static void JSSharedArrayVerify(JSSharedArray o, Isolate* isolate);
  static void JSSharedStructVerify(JSSharedStruct o, Isolate* isolate);
  static void JSTemporalCalendarVerify(JSTemporalCalendar o, Isolate* isolate);
  static void JSTemporalDurationVerify(JSTemporalDuration o, Isolate* isolate);
  static void JSTemporalInstantVerify(JSTemporalInstant o, Isolate* isolate);
  static void JSTemporalPlainDateTimeVerify(JSTemporalPlainDateTime o, Isolate* isolate);
  static void JSTemporalPlainDateVerify(JSTemporalPlainDate o, Isolate* isolate);
  static void JSTemporalPlainMonthDayVerify(JSTemporalPlainMonthDay o, Isolate* isolate);
  static void JSTemporalPlainTimeVerify(JSTemporalPlainTime o, Isolate* isolate);
  static void JSTemporalPlainYearMonthVerify(JSTemporalPlainYearMonth o, Isolate* isolate);
  static void JSTemporalTimeZoneVerify(JSTemporalTimeZone o, Isolate* isolate);
  static void JSTemporalZonedDateTimeVerify(JSTemporalZonedDateTime o, Isolate* isolate);
  static void JSFinalizationRegistryVerify(JSFinalizationRegistry o, Isolate* isolate);
  static void JSWeakRefVerify(JSWeakRef o, Isolate* isolate);
  static void ArrayBoilerplateDescriptionVerify(ArrayBoilerplateDescription o, Isolate* isolate);
  static void RegExpBoilerplateDescriptionVerify(RegExpBoilerplateDescription o, Isolate* isolate);
  static void MegaDomHandlerVerify(MegaDomHandler o, Isolate* isolate);
  static void MicrotaskVerify(Microtask o, Isolate* isolate);
  static void CallbackTaskVerify(CallbackTask o, Isolate* isolate);
  static void CallableTaskVerify(CallableTask o, Isolate* isolate);
  static void ModuleVerify(Module o, Isolate* isolate);
  static void JSModuleNamespaceVerify(JSModuleNamespace o, Isolate* isolate);
  static void ScriptOrModuleVerify(ScriptOrModule o, Isolate* isolate);
  static void PromiseReactionVerify(PromiseReaction o, Isolate* isolate);
  static void PromiseReactionJobTaskVerify(PromiseReactionJobTask o, Isolate* isolate);
  static void PromiseFulfillReactionJobTaskVerify(PromiseFulfillReactionJobTask o, Isolate* isolate);
  static void PromiseRejectReactionJobTaskVerify(PromiseRejectReactionJobTask o, Isolate* isolate);
  static void PromiseResolveThenableJobTaskVerify(PromiseResolveThenableJobTask o, Isolate* isolate);
  static void PropertyArrayVerify(PropertyArray o, Isolate* isolate);
  static void PropertyCellVerify(PropertyCell o, Isolate* isolate);
  static void PropertyDescriptorObjectVerify(PropertyDescriptorObject o, Isolate* isolate);
  static void PrototypeInfoVerify(PrototypeInfo o, Isolate* isolate);
  static void ScriptVerify(Script o, Isolate* isolate);
  static void PreparseDataVerify(PreparseData o, Isolate* isolate);
  static void InterpreterDataVerify(InterpreterData o, Isolate* isolate);
  static void SharedFunctionInfoVerify(SharedFunctionInfo o, Isolate* isolate);
  static void UncompiledDataVerify(UncompiledData o, Isolate* isolate);
  static void UncompiledDataWithoutPreparseDataVerify(UncompiledDataWithoutPreparseData o, Isolate* isolate);
  static void UncompiledDataWithPreparseDataVerify(UncompiledDataWithPreparseData o, Isolate* isolate);
  static void UncompiledDataWithoutPreparseDataWithJobVerify(UncompiledDataWithoutPreparseDataWithJob o, Isolate* isolate);
  static void UncompiledDataWithPreparseDataAndJobVerify(UncompiledDataWithPreparseDataAndJob o, Isolate* isolate);
  static void OnHeapBasicBlockProfilerDataVerify(OnHeapBasicBlockProfilerData o, Isolate* isolate);
  static void SourceTextModuleVerify(SourceTextModule o, Isolate* isolate);
  static void ModuleRequestVerify(ModuleRequest o, Isolate* isolate);
  static void SourceTextModuleInfoEntryVerify(SourceTextModuleInfoEntry o, Isolate* isolate);
  static void ConsStringVerify(ConsString o, Isolate* isolate);
  static void ExternalStringVerify(ExternalString o, Isolate* isolate);
  static void ExternalOneByteStringVerify(ExternalOneByteString o, Isolate* isolate);
  static void ExternalTwoByteStringVerify(ExternalTwoByteString o, Isolate* isolate);
  static void InternalizedStringVerify(InternalizedString o, Isolate* isolate);
  static void SeqStringVerify(SeqString o, Isolate* isolate);
  static void SeqOneByteStringVerify(SeqOneByteString o, Isolate* isolate);
  static void SeqTwoByteStringVerify(SeqTwoByteString o, Isolate* isolate);
  static void SlicedStringVerify(SlicedString o, Isolate* isolate);
  static void ThinStringVerify(ThinString o, Isolate* isolate);
  static void Tuple2Verify(Tuple2 o, Isolate* isolate);
  static void SyntheticModuleVerify(SyntheticModule o, Isolate* isolate);
  static void CachedTemplateObjectVerify(CachedTemplateObject o, Isolate* isolate);
  static void TemplateObjectDescriptionVerify(TemplateObjectDescription o, Isolate* isolate);
  static void TemplateInfoVerify(TemplateInfo o, Isolate* isolate);
  static void FunctionTemplateRareDataVerify(FunctionTemplateRareData o, Isolate* isolate);
  static void FunctionTemplateInfoVerify(FunctionTemplateInfo o, Isolate* isolate);
  static void ObjectTemplateInfoVerify(ObjectTemplateInfo o, Isolate* isolate);
  static void TurbofanTypeVerify(TurbofanType o, Isolate* isolate);
  static void TurbofanBitsetTypeVerify(TurbofanBitsetType o, Isolate* isolate);
  static void TurbofanUnionTypeVerify(TurbofanUnionType o, Isolate* isolate);
  static void TurbofanRangeTypeVerify(TurbofanRangeType o, Isolate* isolate);
  static void TurbofanHeapConstantTypeVerify(TurbofanHeapConstantType o, Isolate* isolate);
  static void TurbofanOtherNumberConstantTypeVerify(TurbofanOtherNumberConstantType o, Isolate* isolate);
  static void InternalClassVerify(InternalClass o, Isolate* isolate);
  static void SmiPairVerify(SmiPair o, Isolate* isolate);
  static void SmiBoxVerify(SmiBox o, Isolate* isolate);
  static void ExportedSubClassBaseVerify(ExportedSubClassBase o, Isolate* isolate);
  static void ExportedSubClassVerify(ExportedSubClass o, Isolate* isolate);
  static void AbstractInternalClassVerify(AbstractInternalClass o, Isolate* isolate);
  static void AbstractInternalClassSubclass1Verify(AbstractInternalClassSubclass1 o, Isolate* isolate);
  static void AbstractInternalClassSubclass2Verify(AbstractInternalClassSubclass2 o, Isolate* isolate);
  static void InternalClassWithSmiElementsVerify(InternalClassWithSmiElements o, Isolate* isolate);
  static void InternalClassWithStructElementsVerify(InternalClassWithStructElements o, Isolate* isolate);
  static void ExportedSubClass2Verify(ExportedSubClass2 o, Isolate* isolate);
  static void SortStateVerify(SortState o, Isolate* isolate);
  static void JSV8BreakIteratorVerify(JSV8BreakIterator o, Isolate* isolate);
  static void JSCollatorVerify(JSCollator o, Isolate* isolate);
  static void JSDateTimeFormatVerify(JSDateTimeFormat o, Isolate* isolate);
  static void JSDisplayNamesVerify(JSDisplayNames o, Isolate* isolate);
  static void JSDurationFormatVerify(JSDurationFormat o, Isolate* isolate);
  static void JSListFormatVerify(JSListFormat o, Isolate* isolate);
  static void JSLocaleVerify(JSLocale o, Isolate* isolate);
  static void JSNumberFormatVerify(JSNumberFormat o, Isolate* isolate);
  static void JSPluralRulesVerify(JSPluralRules o, Isolate* isolate);
  static void JSRelativeTimeFormatVerify(JSRelativeTimeFormat o, Isolate* isolate);
  static void JSSegmentIteratorVerify(JSSegmentIterator o, Isolate* isolate);
  static void JSSegmenterVerify(JSSegmenter o, Isolate* isolate);
  static void JSSegmentsVerify(JSSegments o, Isolate* isolate);
  static void WasmApiFunctionRefVerify(WasmApiFunctionRef o, Isolate* isolate);
  static void WasmFunctionDataVerify(WasmFunctionData o, Isolate* isolate);
  static void WasmExportedFunctionDataVerify(WasmExportedFunctionData o, Isolate* isolate);
  static void WasmJSFunctionDataVerify(WasmJSFunctionData o, Isolate* isolate);
  static void WasmCapiFunctionDataVerify(WasmCapiFunctionData o, Isolate* isolate);
  static void WasmResumeDataVerify(WasmResumeData o, Isolate* isolate);
  static void WasmIndirectFunctionTableVerify(WasmIndirectFunctionTable o, Isolate* isolate);
  static void WasmContinuationObjectVerify(WasmContinuationObject o, Isolate* isolate);
  static void WasmSuspenderObjectVerify(WasmSuspenderObject o, Isolate* isolate);
  static void WasmExceptionTagVerify(WasmExceptionTag o, Isolate* isolate);
  static void WasmModuleObjectVerify(WasmModuleObject o, Isolate* isolate);
  static void WasmTableObjectVerify(WasmTableObject o, Isolate* isolate);
  static void WasmMemoryObjectVerify(WasmMemoryObject o, Isolate* isolate);
  static void WasmGlobalObjectVerify(WasmGlobalObject o, Isolate* isolate);
  static void WasmTagObjectVerify(WasmTagObject o, Isolate* isolate);
  static void AsmWasmDataVerify(AsmWasmData o, Isolate* isolate);
  static void WasmTypeInfoVerify(WasmTypeInfo o, Isolate* isolate);
  static void WasmObjectVerify(WasmObject o, Isolate* isolate);
  static void WasmStructVerify(WasmStruct o, Isolate* isolate);
  static void WasmArrayVerify(WasmArray o, Isolate* isolate);
  static void WasmStringViewIterVerify(WasmStringViewIter o, Isolate* isolate);
};
}  // namespace internal
}  // namespace v8
#endif  // VERIFY_HEAP
#endif  // V8_GEN_TORQUE_GENERATED_CLASS_VERIFIERS_H_
