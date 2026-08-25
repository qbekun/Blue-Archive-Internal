#pragma once
#include "../unitysdk.h"

namespace MemoryPack { class MemoryPackReaderOptionalState; }
namespace MemoryPack { class MemoryPackSerializerOptions; }
namespace MemoryPack { class IMemoryPackFormatter; }

#define MEMORYPACK_MEMORYPACKREADER_GET_CONSUMED_OFFSET UNITYSDK_OFFSET(0x905D550)
#define MEMORYPACK_MEMORYPACKREADER_GET_REMAINING_OFFSET UNITYSDK_OFFSET(0x905D560)
#define MEMORYPACK_MEMORYPACKREADER_GET_OPTIONALSTATE_OFFSET UNITYSDK_OFFSET(0x905D570)
#define MEMORYPACK_MEMORYPACKREADER_GET_OPTIONS_OFFSET UNITYSDK_OFFSET(0x905D580)
#define MEMORYPACK_MEMORYPACKREADER_.CTOR_OFFSET UNITYSDK_OFFSET(0x905D5A0)
#define MEMORYPACK_MEMORYPACKREADER_.CTOR_OFFSET UNITYSDK_OFFSET(0x905D6F0)
#define MEMORYPACK_MEMORYPACKREADER_GETSPANREFERENCE_OFFSET UNITYSDK_OFFSET(0x905D790)
#define MEMORYPACK_MEMORYPACKREADER_GETNEXTSPAN_OFFSET UNITYSDK_OFFSET(0x905D800)
#define MEMORYPACK_MEMORYPACKREADER_ADVANCE_OFFSET UNITYSDK_OFFSET(0x905DED0)
#define MEMORYPACK_MEMORYPACKREADER_TRYADVANCESEQUENCE_OFFSET UNITYSDK_OFFSET(0x905DF90)
#define MEMORYPACK_MEMORYPACKREADER_GETREMAININGSOURCE_OFFSET UNITYSDK_OFFSET(0x905E160)
#define MEMORYPACK_MEMORYPACKREADER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x905E3C0)
#define MEMORYPACK_MEMORYPACKREADER_GETFORMATTER_OFFSET UNITYSDK_OFFSET(0x905E560)
#define MEMORYPACK_MEMORYPACKREADER_GETFORMATTER_OFFSET UNITYSDK_OFFSET(0x000000)
#define MEMORYPACK_MEMORYPACKREADER_TRYREADOBJECTHEADER_OFFSET UNITYSDK_OFFSET(0x905EB10)
#define MEMORYPACK_MEMORYPACKREADER_TRYREADUNIONHEADER_OFFSET UNITYSDK_OFFSET(0x905EC20)
#define MEMORYPACK_MEMORYPACKREADER_TRYREADCOLLECTIONHEADER_OFFSET UNITYSDK_OFFSET(0x905ED90)
#define MEMORYPACK_MEMORYPACKREADER_PEEKISNULL_OFFSET UNITYSDK_OFFSET(0x905EFD0)
#define MEMORYPACK_MEMORYPACKREADER_TRYPEEKOBJECTHEADER_OFFSET UNITYSDK_OFFSET(0x905F040)
#define MEMORYPACK_MEMORYPACKREADER_TRYPEEKUNIONHEADER_OFFSET UNITYSDK_OFFSET(0x905F0B0)
#define MEMORYPACK_MEMORYPACKREADER_TRYPEEKCOLLECTIONHEADER_OFFSET UNITYSDK_OFFSET(0x905F190)
#define MEMORYPACK_MEMORYPACKREADER_DANGEROUSTRYREADCOLLECTIONHEADER_OFFSET UNITYSDK_OFFSET(0x905F290)
#define MEMORYPACK_MEMORYPACKREADER_READSTRING_OFFSET UNITYSDK_OFFSET(0x905F3A0)
#define MEMORYPACK_MEMORYPACKREADER_READUTF16_OFFSET UNITYSDK_OFFSET(0x905F960)
#define MEMORYPACK_MEMORYPACKREADER_READUTF8_OFFSET UNITYSDK_OFFSET(0x905F6F0)
#define MEMORYPACK_MEMORYPACKREADER_READUNMANAGED_OFFSET UNITYSDK_OFFSET(0x000000)
#define MEMORYPACK_MEMORYPACKREADER_READPACKABLE_OFFSET UNITYSDK_OFFSET(0x000000)
#define MEMORYPACK_MEMORYPACKREADER_READPACKABLE_OFFSET UNITYSDK_OFFSET(0x000000)
#define MEMORYPACK_MEMORYPACKREADER_READVALUE_OFFSET UNITYSDK_OFFSET(0x000000)
#define MEMORYPACK_MEMORYPACKREADER_READVALUE_OFFSET UNITYSDK_OFFSET(0x000000)
#define MEMORYPACK_MEMORYPACKREADER_READVALUE_OFFSET UNITYSDK_OFFSET(0x905FAE0)
#define MEMORYPACK_MEMORYPACKREADER_READVALUE_OFFSET UNITYSDK_OFFSET(0x9060140)
#define MEMORYPACK_MEMORYPACKREADER_READVALUEWITHFORMATTER_OFFSET UNITYSDK_OFFSET(0x000000)
#define MEMORYPACK_MEMORYPACKREADER_READVALUEWITHFORMATTER_OFFSET UNITYSDK_OFFSET(0x000000)
#define MEMORYPACK_MEMORYPACKREADER_READARRAY_OFFSET UNITYSDK_OFFSET(0x000000)
#define MEMORYPACK_MEMORYPACKREADER_READARRAY_OFFSET UNITYSDK_OFFSET(0x000000)
#define MEMORYPACK_MEMORYPACKREADER_READSPAN_OFFSET UNITYSDK_OFFSET(0x000000)
#define MEMORYPACK_MEMORYPACKREADER_READPACKABLEARRAY_OFFSET UNITYSDK_OFFSET(0x000000)
#define MEMORYPACK_MEMORYPACKREADER_READPACKABLEARRAY_OFFSET UNITYSDK_OFFSET(0x000000)
#define MEMORYPACK_MEMORYPACKREADER_READPACKABLESPAN_OFFSET UNITYSDK_OFFSET(0x000000)
#define MEMORYPACK_MEMORYPACKREADER_READUNMANAGEDARRAY_OFFSET UNITYSDK_OFFSET(0x000000)
#define MEMORYPACK_MEMORYPACKREADER_READUNMANAGEDARRAY_OFFSET UNITYSDK_OFFSET(0x000000)
#define MEMORYPACK_MEMORYPACKREADER_READUNMANAGEDSPAN_OFFSET UNITYSDK_OFFSET(0x000000)
#define MEMORYPACK_MEMORYPACKREADER_DANGEROUSREADUNMANAGEDARRAY_OFFSET UNITYSDK_OFFSET(0x000000)
#define MEMORYPACK_MEMORYPACKREADER_DANGEROUSREADUNMANAGEDARRAY_OFFSET UNITYSDK_OFFSET(0x000000)
#define MEMORYPACK_MEMORYPACKREADER_DANGEROUSREADUNMANAGEDSPAN_OFFSET UNITYSDK_OFFSET(0x000000)
#define MEMORYPACK_MEMORYPACKREADER_READSPANWITHOUTREADLENGTHHEADER_OFFSET UNITYSDK_OFFSET(0x000000)
#define MEMORYPACK_MEMORYPACKREADER_READPACKABLESPANWITHOUTREADLENGTHHEADER_OFFSET UNITYSDK_OFFSET(0x000000)
#define MEMORYPACK_MEMORYPACKREADER_DANGEROUSREADUNMANAGEDSPANVIEW_OFFSET UNITYSDK_OFFSET(0x000000)
#define MEMORYPACK_MEMORYPACKREADER_READUNMANAGED_OFFSET UNITYSDK_OFFSET(0x000000)
#define MEMORYPACK_MEMORYPACKREADER_READUNMANAGED_OFFSET UNITYSDK_OFFSET(0x000000)
#define MEMORYPACK_MEMORYPACKREADER_READUNMANAGED_OFFSET UNITYSDK_OFFSET(0x000000)
#define MEMORYPACK_MEMORYPACKREADER_READUNMANAGED_OFFSET UNITYSDK_OFFSET(0x000000)
#define MEMORYPACK_MEMORYPACKREADER_READUNMANAGED_OFFSET UNITYSDK_OFFSET(0x000000)
#define MEMORYPACK_MEMORYPACKREADER_READUNMANAGED_OFFSET UNITYSDK_OFFSET(0x000000)
#define MEMORYPACK_MEMORYPACKREADER_READUNMANAGED_OFFSET UNITYSDK_OFFSET(0x000000)
#define MEMORYPACK_MEMORYPACKREADER_READUNMANAGED_OFFSET UNITYSDK_OFFSET(0x000000)
#define MEMORYPACK_MEMORYPACKREADER_READUNMANAGED_OFFSET UNITYSDK_OFFSET(0x000000)
#define MEMORYPACK_MEMORYPACKREADER_READUNMANAGED_OFFSET UNITYSDK_OFFSET(0x000000)
#define MEMORYPACK_MEMORYPACKREADER_READUNMANAGED_OFFSET UNITYSDK_OFFSET(0x000000)
#define MEMORYPACK_MEMORYPACKREADER_READUNMANAGED_OFFSET UNITYSDK_OFFSET(0x000000)
#define MEMORYPACK_MEMORYPACKREADER_READUNMANAGED_OFFSET UNITYSDK_OFFSET(0x000000)
#define MEMORYPACK_MEMORYPACKREADER_READUNMANAGED_OFFSET UNITYSDK_OFFSET(0x000000)
#define MEMORYPACK_MEMORYPACKREADER_READUNMANAGED_OFFSET UNITYSDK_OFFSET(0x000000)
#define MEMORYPACK_MEMORYPACKREADER_DANGEROUSREADUNMANAGED_OFFSET UNITYSDK_OFFSET(0x000000)
#define MEMORYPACK_MEMORYPACKREADER_DANGEROUSREADUNMANAGED_OFFSET UNITYSDK_OFFSET(0x000000)
#define MEMORYPACK_MEMORYPACKREADER_DANGEROUSREADUNMANAGED_OFFSET UNITYSDK_OFFSET(0x000000)
#define MEMORYPACK_MEMORYPACKREADER_DANGEROUSREADUNMANAGED_OFFSET UNITYSDK_OFFSET(0x000000)
#define MEMORYPACK_MEMORYPACKREADER_DANGEROUSREADUNMANAGED_OFFSET UNITYSDK_OFFSET(0x000000)
#define MEMORYPACK_MEMORYPACKREADER_DANGEROUSREADUNMANAGED_OFFSET UNITYSDK_OFFSET(0x000000)
#define MEMORYPACK_MEMORYPACKREADER_DANGEROUSREADUNMANAGED_OFFSET UNITYSDK_OFFSET(0x000000)
#define MEMORYPACK_MEMORYPACKREADER_DANGEROUSREADUNMANAGED_OFFSET UNITYSDK_OFFSET(0x000000)
#define MEMORYPACK_MEMORYPACKREADER_DANGEROUSREADUNMANAGED_OFFSET UNITYSDK_OFFSET(0x000000)
#define MEMORYPACK_MEMORYPACKREADER_DANGEROUSREADUNMANAGED_OFFSET UNITYSDK_OFFSET(0x000000)
#define MEMORYPACK_MEMORYPACKREADER_DANGEROUSREADUNMANAGED_OFFSET UNITYSDK_OFFSET(0x000000)
#define MEMORYPACK_MEMORYPACKREADER_DANGEROUSREADUNMANAGED_OFFSET UNITYSDK_OFFSET(0x000000)
#define MEMORYPACK_MEMORYPACKREADER_DANGEROUSREADUNMANAGED_OFFSET UNITYSDK_OFFSET(0x000000)
#define MEMORYPACK_MEMORYPACKREADER_DANGEROUSREADUNMANAGED_OFFSET UNITYSDK_OFFSET(0x000000)
#define MEMORYPACK_MEMORYPACKREADER_DANGEROUSREADUNMANAGED_OFFSET UNITYSDK_OFFSET(0x000000)
#define MEMORYPACK_MEMORYPACKREADER_READVARINTBYTE_OFFSET UNITYSDK_OFFSET(0x90607C0)
#define MEMORYPACK_MEMORYPACKREADER_READVARINTSBYTE_OFFSET UNITYSDK_OFFSET(0x9060950)
#define MEMORYPACK_MEMORYPACKREADER_READVARINTUINT16_OFFSET UNITYSDK_OFFSET(0x9060B10)
#define MEMORYPACK_MEMORYPACKREADER_READVARINTINT16_OFFSET UNITYSDK_OFFSET(0x9060CC0)
#define MEMORYPACK_MEMORYPACKREADER_READVARINTUINT32_OFFSET UNITYSDK_OFFSET(0x9060E70)
#define MEMORYPACK_MEMORYPACKREADER_READVARINTINT32_OFFSET UNITYSDK_OFFSET(0x9061020)
#define MEMORYPACK_MEMORYPACKREADER_READVARINTUINT64_OFFSET UNITYSDK_OFFSET(0x90611C0)
#define MEMORYPACK_MEMORYPACKREADER_READVARINTINT64_OFFSET UNITYSDK_OFFSET(0x9061360)

namespace MemoryPack
{
	inline static constexpr unsigned int MemoryPackReader_TypeDefinitionIndex = 35424;

	class MemoryPackReader : public Il2CppObject
	{
	public:
		Il2CppObject* bufferSource; // 0x10
		::System::Int64 totalLength; // 0x28
		Il2CppObject* bufferReference; // 0x30
		::System::Int32 bufferLength; // 0x40
		::Il2CppArray<::System::Object*>* rentBuffer; // 0x48
		::System::Int32 advancedCount; // 0x50
		::System::Int32 consumed; // 0x54
		::MemoryPack::MemoryPackReaderOptionalState* optionalState; // 0x58

		::System::Int32 get_Consumed()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_MEMORYPACKREADER_GET_CONSUMED_OFFSET))(nullptr);
		}

		::System::Int64 get_Remaining()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_MEMORYPACKREADER_GET_REMAINING_OFFSET))(nullptr);
		}

		::MemoryPack::MemoryPackReaderOptionalState* get_OptionalState()
		{
			return (return (::MemoryPack::MemoryPackReaderOptionalState*(*)(::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_MEMORYPACKREADER_GET_OPTIONALSTATE_OFFSET))(nullptr);
		}

		::MemoryPack::MemoryPackSerializerOptions* get_Options()
		{
			return (return (::MemoryPack::MemoryPackSerializerOptions*(*)(::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_MEMORYPACKREADER_GET_OPTIONS_OFFSET))(nullptr);
		}

		::System::Void .ctor(Il2CppObject&* arg, ::MemoryPack::MemoryPackReaderOptionalState* arg)
		{
			((::System::Void(*)(Il2CppObject&*, ::MemoryPack::MemoryPackReaderOptionalState*, ::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_MEMORYPACKREADER_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor(Il2CppObject* arg, ::MemoryPack::MemoryPackReaderOptionalState* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::MemoryPack::MemoryPackReaderOptionalState*, ::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_MEMORYPACKREADER_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		uint8_t&* GetSpanReference(::System::Int32 arg)
		{
			return (return (uint8_t&*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_MEMORYPACKREADER_GETSPANREFERENCE_OFFSET))(arg, nullptr);
		}

		uint8_t&* GetNextSpan(::System::Int32 arg)
		{
			return (return (uint8_t&*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_MEMORYPACKREADER_GETNEXTSPAN_OFFSET))(arg, nullptr);
		}

		::System::Void Advance(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_MEMORYPACKREADER_ADVANCE_OFFSET))(arg, nullptr);
		}

		::System::Boolean TryAdvanceSequence(::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_MEMORYPACKREADER_TRYADVANCESEQUENCE_OFFSET))(arg, nullptr);
		}

		::System::Void GetRemainingSource(Il2CppObject&* arg, Il2CppObject&* arg)
		{
			((::System::Void(*)(Il2CppObject&*, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_MEMORYPACKREADER_GETREMAININGSOURCE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_MEMORYPACKREADER_DISPOSE_OFFSET))(nullptr);
		}

		::MemoryPack::IMemoryPackFormatter* GetFormatter(::System::Type* arg)
		{
			return (return (::MemoryPack::IMemoryPackFormatter*(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_MEMORYPACKREADER_GETFORMATTER_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetFormatter()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_MEMORYPACKREADER_GETFORMATTER_OFFSET))(nullptr);
		}

		::System::Boolean TryReadObjectHeader(uint8_t&* arg)
		{
			return (return (::System::Boolean(*)(uint8_t&*, ::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_MEMORYPACKREADER_TRYREADOBJECTHEADER_OFFSET))(arg, nullptr);
		}

		::System::Boolean TryReadUnionHeader(uint16_t&* arg)
		{
			return (return (::System::Boolean(*)(uint16_t&*, ::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_MEMORYPACKREADER_TRYREADUNIONHEADER_OFFSET))(arg, nullptr);
		}

		::System::Boolean TryReadCollectionHeader(int32_t&* arg)
		{
			return (return (::System::Boolean(*)(int32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_MEMORYPACKREADER_TRYREADCOLLECTIONHEADER_OFFSET))(arg, nullptr);
		}

		::System::Boolean PeekIsNull()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_MEMORYPACKREADER_PEEKISNULL_OFFSET))(nullptr);
		}

		::System::Boolean TryPeekObjectHeader(uint8_t&* arg)
		{
			return (return (::System::Boolean(*)(uint8_t&*, ::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_MEMORYPACKREADER_TRYPEEKOBJECTHEADER_OFFSET))(arg, nullptr);
		}

		::System::Boolean TryPeekUnionHeader(uint16_t&* arg)
		{
			return (return (::System::Boolean(*)(uint16_t&*, ::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_MEMORYPACKREADER_TRYPEEKUNIONHEADER_OFFSET))(arg, nullptr);
		}

		::System::Boolean TryPeekCollectionHeader(int32_t&* arg)
		{
			return (return (::System::Boolean(*)(int32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_MEMORYPACKREADER_TRYPEEKCOLLECTIONHEADER_OFFSET))(arg, nullptr);
		}

		::System::Boolean DangerousTryReadCollectionHeader(int32_t&* arg)
		{
			return (return (::System::Boolean(*)(int32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_MEMORYPACKREADER_DANGEROUSTRYREADCOLLECTIONHEADER_OFFSET))(arg, nullptr);
		}

		::System::String* ReadString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_MEMORYPACKREADER_READSTRING_OFFSET))(nullptr);
		}

		::System::String* ReadUtf16(::System::Int32 arg)
		{
			return (return (::System::String*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_MEMORYPACKREADER_READUTF16_OFFSET))(arg, nullptr);
		}

		::System::String* ReadUtf8(::System::Int32 arg)
		{
			return (return (::System::String*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_MEMORYPACKREADER_READUTF8_OFFSET))(arg, nullptr);
		}

		Il2CppObject* ReadUnmanaged()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_MEMORYPACKREADER_READUNMANAGED_OFFSET))(nullptr);
		}

		::System::Void ReadPackable(Il2CppObject&* arg)
		{
			((::System::Void(*)(Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_MEMORYPACKREADER_READPACKABLE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* ReadPackable()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_MEMORYPACKREADER_READPACKABLE_OFFSET))(nullptr);
		}

		::System::Void ReadValue(Il2CppObject&* arg)
		{
			((::System::Void(*)(Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_MEMORYPACKREADER_READVALUE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* ReadValue()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_MEMORYPACKREADER_READVALUE_OFFSET))(nullptr);
		}

		::System::Void ReadValue(::System::Type* arg, ::System::Object&* arg)
		{
			((::System::Void(*)(::System::Type*, ::System::Object&*, ::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_MEMORYPACKREADER_READVALUE_OFFSET))(arg, arg, nullptr);
		}

		::System::Object* ReadValue(::System::Type* arg)
		{
			return (return (::System::Object*(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_MEMORYPACKREADER_READVALUE_OFFSET))(arg, nullptr);
		}

		::System::Void ReadValueWithFormatter(Il2CppObject* arg, Il2CppObject&* arg)
		{
			((::System::Void(*)(Il2CppObject*, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_MEMORYPACKREADER_READVALUEWITHFORMATTER_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* ReadValueWithFormatter(Il2CppObject* arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_MEMORYPACKREADER_READVALUEWITHFORMATTER_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* ReadArray()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_MEMORYPACKREADER_READARRAY_OFFSET))(nullptr);
		}

		::System::Void ReadArray(::System::Object[]&* arg)
		{
			((::System::Void(*)(::System::Object[]&*, ::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_MEMORYPACKREADER_READARRAY_OFFSET))(arg, nullptr);
		}

		::System::Void ReadSpan(Il2CppObject&* arg)
		{
			((::System::Void(*)(Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_MEMORYPACKREADER_READSPAN_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* ReadPackableArray()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_MEMORYPACKREADER_READPACKABLEARRAY_OFFSET))(nullptr);
		}

		::System::Void ReadPackableArray(::System::Object[]&* arg)
		{
			((::System::Void(*)(::System::Object[]&*, ::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_MEMORYPACKREADER_READPACKABLEARRAY_OFFSET))(arg, nullptr);
		}

		::System::Void ReadPackableSpan(Il2CppObject&* arg)
		{
			((::System::Void(*)(Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_MEMORYPACKREADER_READPACKABLESPAN_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* ReadUnmanagedArray()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_MEMORYPACKREADER_READUNMANAGEDARRAY_OFFSET))(nullptr);
		}

		::System::Void ReadUnmanagedArray(::System::Object[]&* arg)
		{
			((::System::Void(*)(::System::Object[]&*, ::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_MEMORYPACKREADER_READUNMANAGEDARRAY_OFFSET))(arg, nullptr);
		}

		::System::Void ReadUnmanagedSpan(Il2CppObject&* arg)
		{
			((::System::Void(*)(Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_MEMORYPACKREADER_READUNMANAGEDSPAN_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* DangerousReadUnmanagedArray()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_MEMORYPACKREADER_DANGEROUSREADUNMANAGEDARRAY_OFFSET))(nullptr);
		}

		::System::Void DangerousReadUnmanagedArray(::System::Object[]&* arg)
		{
			((::System::Void(*)(::System::Object[]&*, ::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_MEMORYPACKREADER_DANGEROUSREADUNMANAGEDARRAY_OFFSET))(arg, nullptr);
		}

		::System::Void DangerousReadUnmanagedSpan(Il2CppObject&* arg)
		{
			((::System::Void(*)(Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_MEMORYPACKREADER_DANGEROUSREADUNMANAGEDSPAN_OFFSET))(arg, nullptr);
		}

		::System::Void ReadSpanWithoutReadLengthHeader(::System::Int32 arg, Il2CppObject&* arg)
		{
			((::System::Void(*)(::System::Int32, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_MEMORYPACKREADER_READSPANWITHOUTREADLENGTHHEADER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void ReadPackableSpanWithoutReadLengthHeader(::System::Int32 arg, Il2CppObject&* arg)
		{
			((::System::Void(*)(::System::Int32, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_MEMORYPACKREADER_READPACKABLESPANWITHOUTREADLENGTHHEADER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void DangerousReadUnmanagedSpanView(bool&* arg, Il2CppObject&* arg)
		{
			((::System::Void(*)(bool&*, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_MEMORYPACKREADER_DANGEROUSREADUNMANAGEDSPANVIEW_OFFSET))(arg, arg, nullptr);
		}

		::System::Void ReadUnmanaged(Il2CppObject&* arg)
		{
			((::System::Void(*)(Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_MEMORYPACKREADER_READUNMANAGED_OFFSET))(arg, nullptr);
		}

		::System::Void ReadUnmanaged(Il2CppObject&* arg, Il2CppObject&* arg)
		{
			((::System::Void(*)(Il2CppObject&*, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_MEMORYPACKREADER_READUNMANAGED_OFFSET))(arg, arg, nullptr);
		}

		::System::Void ReadUnmanaged(Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg)
		{
			((::System::Void(*)(Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_MEMORYPACKREADER_READUNMANAGED_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void ReadUnmanaged(Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg)
		{
			((::System::Void(*)(Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_MEMORYPACKREADER_READUNMANAGED_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void ReadUnmanaged(Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg)
		{
			((::System::Void(*)(Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_MEMORYPACKREADER_READUNMANAGED_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void ReadUnmanaged(Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg)
		{
			((::System::Void(*)(Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_MEMORYPACKREADER_READUNMANAGED_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void ReadUnmanaged(Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg)
		{
			((::System::Void(*)(Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_MEMORYPACKREADER_READUNMANAGED_OFFSET))(arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void ReadUnmanaged(Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg)
		{
			((::System::Void(*)(Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_MEMORYPACKREADER_READUNMANAGED_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void ReadUnmanaged(Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg)
		{
			((::System::Void(*)(Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_MEMORYPACKREADER_READUNMANAGED_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void ReadUnmanaged(Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg)
		{
			((::System::Void(*)(Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_MEMORYPACKREADER_READUNMANAGED_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void ReadUnmanaged(Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg)
		{
			((::System::Void(*)(Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_MEMORYPACKREADER_READUNMANAGED_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void ReadUnmanaged(Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg)
		{
			((::System::Void(*)(Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_MEMORYPACKREADER_READUNMANAGED_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void ReadUnmanaged(Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg)
		{
			((::System::Void(*)(Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_MEMORYPACKREADER_READUNMANAGED_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void ReadUnmanaged(Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg)
		{
			((::System::Void(*)(Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_MEMORYPACKREADER_READUNMANAGED_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void ReadUnmanaged(Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg)
		{
			((::System::Void(*)(Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_MEMORYPACKREADER_READUNMANAGED_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void DangerousReadUnmanaged(Il2CppObject&* arg)
		{
			((::System::Void(*)(Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_MEMORYPACKREADER_DANGEROUSREADUNMANAGED_OFFSET))(arg, nullptr);
		}

		::System::Void DangerousReadUnmanaged(Il2CppObject&* arg, Il2CppObject&* arg)
		{
			((::System::Void(*)(Il2CppObject&*, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_MEMORYPACKREADER_DANGEROUSREADUNMANAGED_OFFSET))(arg, arg, nullptr);
		}

		::System::Void DangerousReadUnmanaged(Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg)
		{
			((::System::Void(*)(Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_MEMORYPACKREADER_DANGEROUSREADUNMANAGED_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void DangerousReadUnmanaged(Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg)
		{
			((::System::Void(*)(Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_MEMORYPACKREADER_DANGEROUSREADUNMANAGED_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void DangerousReadUnmanaged(Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg)
		{
			((::System::Void(*)(Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_MEMORYPACKREADER_DANGEROUSREADUNMANAGED_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void DangerousReadUnmanaged(Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg)
		{
			((::System::Void(*)(Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_MEMORYPACKREADER_DANGEROUSREADUNMANAGED_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void DangerousReadUnmanaged(Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg)
		{
			((::System::Void(*)(Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_MEMORYPACKREADER_DANGEROUSREADUNMANAGED_OFFSET))(arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void DangerousReadUnmanaged(Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg)
		{
			((::System::Void(*)(Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_MEMORYPACKREADER_DANGEROUSREADUNMANAGED_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void DangerousReadUnmanaged(Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg)
		{
			((::System::Void(*)(Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_MEMORYPACKREADER_DANGEROUSREADUNMANAGED_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void DangerousReadUnmanaged(Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg)
		{
			((::System::Void(*)(Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_MEMORYPACKREADER_DANGEROUSREADUNMANAGED_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void DangerousReadUnmanaged(Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg)
		{
			((::System::Void(*)(Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_MEMORYPACKREADER_DANGEROUSREADUNMANAGED_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void DangerousReadUnmanaged(Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg)
		{
			((::System::Void(*)(Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_MEMORYPACKREADER_DANGEROUSREADUNMANAGED_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void DangerousReadUnmanaged(Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg)
		{
			((::System::Void(*)(Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_MEMORYPACKREADER_DANGEROUSREADUNMANAGED_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void DangerousReadUnmanaged(Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg)
		{
			((::System::Void(*)(Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_MEMORYPACKREADER_DANGEROUSREADUNMANAGED_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void DangerousReadUnmanaged(Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg)
		{
			((::System::Void(*)(Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_MEMORYPACKREADER_DANGEROUSREADUNMANAGED_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Byte ReadVarIntByte()
		{
			return (return (::System::Byte(*)(::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_MEMORYPACKREADER_READVARINTBYTE_OFFSET))(nullptr);
		}

		::System::SByte ReadVarIntSByte()
		{
			return (return (::System::SByte(*)(::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_MEMORYPACKREADER_READVARINTSBYTE_OFFSET))(nullptr);
		}

		::System::UInt16 ReadVarIntUInt16()
		{
			return (return (::System::UInt16(*)(::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_MEMORYPACKREADER_READVARINTUINT16_OFFSET))(nullptr);
		}

		::System::Int16 ReadVarIntInt16()
		{
			return (return (::System::Int16(*)(::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_MEMORYPACKREADER_READVARINTINT16_OFFSET))(nullptr);
		}

		::System::UInt32 ReadVarIntUInt32()
		{
			return (return (::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_MEMORYPACKREADER_READVARINTUINT32_OFFSET))(nullptr);
		}

		::System::Int32 ReadVarIntInt32()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_MEMORYPACKREADER_READVARINTINT32_OFFSET))(nullptr);
		}

		::System::UInt64 ReadVarIntUInt64()
		{
			return (return (::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_MEMORYPACKREADER_READVARINTUINT64_OFFSET))(nullptr);
		}

		::System::Int64 ReadVarIntInt64()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_MEMORYPACKREADER_READVARINTINT64_OFFSET))(nullptr);
		}

	};
}

