#pragma once
#include "../unitysdk.h"

namespace MemoryPack { class MemoryPackWriterOptionalState; }
namespace MemoryPack { class MemoryPackSerializerOptions; }
namespace MemoryPack { class IMemoryPackFormatter; }

#define MEMORYPACK_MEMORYPACKWRITER_WRITEVARINT_OFFSET UNITYSDK_OFFSET(0x9061B80)
#define MEMORYPACK_MEMORYPACKWRITER_WRITEVARINT_OFFSET UNITYSDK_OFFSET(0x9061C00)
#define MEMORYPACK_MEMORYPACKWRITER_WRITEVARINT_OFFSET UNITYSDK_OFFSET(0x9061C80)
#define MEMORYPACK_MEMORYPACKWRITER_WRITEVARINT_OFFSET UNITYSDK_OFFSET(0x9061D10)
#define MEMORYPACK_MEMORYPACKWRITER_WRITEVARINT_OFFSET UNITYSDK_OFFSET(0x9061DE0)
#define MEMORYPACK_MEMORYPACKWRITER_WRITEVARINT_OFFSET UNITYSDK_OFFSET(0x9061EA0)
#define MEMORYPACK_MEMORYPACKWRITER_WRITEVARINT_OFFSET UNITYSDK_OFFSET(0x9061FB0)
#define MEMORYPACK_MEMORYPACKWRITER_WRITEVARINT_OFFSET UNITYSDK_OFFSET(0x90620A0)
#define MEMORYPACK_MEMORYPACKWRITER_GET_WRITTENCOUNT_OFFSET UNITYSDK_OFFSET(0x9062200)
#define MEMORYPACK_MEMORYPACKWRITER_GET_BUFFERLENGTH_OFFSET UNITYSDK_OFFSET(0x9062210)
#define MEMORYPACK_MEMORYPACKWRITER_GET_OPTIONALSTATE_OFFSET UNITYSDK_OFFSET(0x9062220)
#define MEMORYPACK_MEMORYPACKWRITER_GET_OPTIONS_OFFSET UNITYSDK_OFFSET(0x9062230)
#define MEMORYPACK_MEMORYPACKWRITER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9062250)
#define MEMORYPACK_MEMORYPACKWRITER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9062290)
#define MEMORYPACK_MEMORYPACKWRITER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9062360)
#define MEMORYPACK_MEMORYPACKWRITER_GETSPANREFERENCE_OFFSET UNITYSDK_OFFSET(0x90623E0)
#define MEMORYPACK_MEMORYPACKWRITER_REQUESTNEWBUFFER_OFFSET UNITYSDK_OFFSET(0x9062440)
#define MEMORYPACK_MEMORYPACKWRITER_ADVANCE_OFFSET UNITYSDK_OFFSET(0x9062590)
#define MEMORYPACK_MEMORYPACKWRITER_FLUSH_OFFSET UNITYSDK_OFFSET(0x9062670)
#define MEMORYPACK_MEMORYPACKWRITER_GETFORMATTER_OFFSET UNITYSDK_OFFSET(0x9062740)
#define MEMORYPACK_MEMORYPACKWRITER_GETFORMATTER_OFFSET UNITYSDK_OFFSET(0x000000)
#define MEMORYPACK_MEMORYPACKWRITER_GETSTRINGWRITELENGTH_OFFSET UNITYSDK_OFFSET(0x9062CF0)
#define MEMORYPACK_MEMORYPACKWRITER_GETUNMANAGEARRAYWRITELENGTH_OFFSET UNITYSDK_OFFSET(0x000000)
#define MEMORYPACK_MEMORYPACKWRITER_WRITEOBJECTHEADER_OFFSET UNITYSDK_OFFSET(0x9062DA0)
#define MEMORYPACK_MEMORYPACKWRITER_WRITENULLOBJECTHEADER_OFFSET UNITYSDK_OFFSET(0x9062FF0)
#define MEMORYPACK_MEMORYPACKWRITER_WRITEOBJECTREFERENCEID_OFFSET UNITYSDK_OFFSET(0x9063120)
#define MEMORYPACK_MEMORYPACKWRITER_WRITEUNIONHEADER_OFFSET UNITYSDK_OFFSET(0x9063260)
#define MEMORYPACK_MEMORYPACKWRITER_WRITENULLUNIONHEADER_OFFSET UNITYSDK_OFFSET(0x9063460)
#define MEMORYPACK_MEMORYPACKWRITER_WRITECOLLECTIONHEADER_OFFSET UNITYSDK_OFFSET(0x9063590)
#define MEMORYPACK_MEMORYPACKWRITER_WRITENULLCOLLECTIONHEADER_OFFSET UNITYSDK_OFFSET(0x90636C0)
#define MEMORYPACK_MEMORYPACKWRITER_WRITESTRING_OFFSET UNITYSDK_OFFSET(0x90637F0)
#define MEMORYPACK_MEMORYPACKWRITER_WRITEUTF16_OFFSET UNITYSDK_OFFSET(0x9063F10)
#define MEMORYPACK_MEMORYPACKWRITER_WRITEUTF16_OFFSET UNITYSDK_OFFSET(0x9064320)
#define MEMORYPACK_MEMORYPACKWRITER_WRITEUTF8_OFFSET UNITYSDK_OFFSET(0x90646A0)
#define MEMORYPACK_MEMORYPACKWRITER_WRITEUTF8_OFFSET UNITYSDK_OFFSET(0x9064A10)
#define MEMORYPACK_MEMORYPACKWRITER_WRITEPACKABLE_OFFSET UNITYSDK_OFFSET(0x000000)
#define MEMORYPACK_MEMORYPACKWRITER_WRITEVALUE_OFFSET UNITYSDK_OFFSET(0x000000)
#define MEMORYPACK_MEMORYPACKWRITER_WRITEVALUE_OFFSET UNITYSDK_OFFSET(0x9064C80)
#define MEMORYPACK_MEMORYPACKWRITER_WRITEVALUEWITHFORMATTER_OFFSET UNITYSDK_OFFSET(0x000000)
#define MEMORYPACK_MEMORYPACKWRITER_WRITEARRAY_OFFSET UNITYSDK_OFFSET(0x000000)
#define MEMORYPACK_MEMORYPACKWRITER_WRITESPAN_OFFSET UNITYSDK_OFFSET(0x000000)
#define MEMORYPACK_MEMORYPACKWRITER_WRITESPAN_OFFSET UNITYSDK_OFFSET(0x000000)
#define MEMORYPACK_MEMORYPACKWRITER_WRITEPACKABLEARRAY_OFFSET UNITYSDK_OFFSET(0x000000)
#define MEMORYPACK_MEMORYPACKWRITER_WRITEPACKABLESPAN_OFFSET UNITYSDK_OFFSET(0x000000)
#define MEMORYPACK_MEMORYPACKWRITER_WRITEPACKABLESPAN_OFFSET UNITYSDK_OFFSET(0x000000)
#define MEMORYPACK_MEMORYPACKWRITER_WRITEUNMANAGEDARRAY_OFFSET UNITYSDK_OFFSET(0x000000)
#define MEMORYPACK_MEMORYPACKWRITER_WRITEUNMANAGEDSPAN_OFFSET UNITYSDK_OFFSET(0x000000)
#define MEMORYPACK_MEMORYPACKWRITER_WRITEUNMANAGEDSPAN_OFFSET UNITYSDK_OFFSET(0x000000)
#define MEMORYPACK_MEMORYPACKWRITER_DANGEROUSWRITEUNMANAGEDARRAY_OFFSET UNITYSDK_OFFSET(0x000000)
#define MEMORYPACK_MEMORYPACKWRITER_DANGEROUSWRITEUNMANAGEDSPAN_OFFSET UNITYSDK_OFFSET(0x000000)
#define MEMORYPACK_MEMORYPACKWRITER_DANGEROUSWRITEUNMANAGEDSPAN_OFFSET UNITYSDK_OFFSET(0x000000)
#define MEMORYPACK_MEMORYPACKWRITER_WRITESPANWITHOUTLENGTHHEADER_OFFSET UNITYSDK_OFFSET(0x000000)
#define MEMORYPACK_MEMORYPACKWRITER_WRITEUNMANAGED_OFFSET UNITYSDK_OFFSET(0x000000)
#define MEMORYPACK_MEMORYPACKWRITER_WRITEUNMANAGEDWITHOBJECTHEADER_OFFSET UNITYSDK_OFFSET(0x000000)
#define MEMORYPACK_MEMORYPACKWRITER_WRITEUNMANAGED_OFFSET UNITYSDK_OFFSET(0x000000)
#define MEMORYPACK_MEMORYPACKWRITER_WRITEUNMANAGEDWITHOBJECTHEADER_OFFSET UNITYSDK_OFFSET(0x000000)
#define MEMORYPACK_MEMORYPACKWRITER_WRITEUNMANAGED_OFFSET UNITYSDK_OFFSET(0x000000)
#define MEMORYPACK_MEMORYPACKWRITER_WRITEUNMANAGEDWITHOBJECTHEADER_OFFSET UNITYSDK_OFFSET(0x000000)
#define MEMORYPACK_MEMORYPACKWRITER_WRITEUNMANAGED_OFFSET UNITYSDK_OFFSET(0x000000)
#define MEMORYPACK_MEMORYPACKWRITER_WRITEUNMANAGEDWITHOBJECTHEADER_OFFSET UNITYSDK_OFFSET(0x000000)
#define MEMORYPACK_MEMORYPACKWRITER_WRITEUNMANAGED_OFFSET UNITYSDK_OFFSET(0x000000)
#define MEMORYPACK_MEMORYPACKWRITER_WRITEUNMANAGEDWITHOBJECTHEADER_OFFSET UNITYSDK_OFFSET(0x000000)
#define MEMORYPACK_MEMORYPACKWRITER_WRITEUNMANAGED_OFFSET UNITYSDK_OFFSET(0x000000)
#define MEMORYPACK_MEMORYPACKWRITER_WRITEUNMANAGEDWITHOBJECTHEADER_OFFSET UNITYSDK_OFFSET(0x000000)
#define MEMORYPACK_MEMORYPACKWRITER_WRITEUNMANAGED_OFFSET UNITYSDK_OFFSET(0x000000)
#define MEMORYPACK_MEMORYPACKWRITER_WRITEUNMANAGEDWITHOBJECTHEADER_OFFSET UNITYSDK_OFFSET(0x000000)
#define MEMORYPACK_MEMORYPACKWRITER_WRITEUNMANAGED_OFFSET UNITYSDK_OFFSET(0x000000)
#define MEMORYPACK_MEMORYPACKWRITER_WRITEUNMANAGEDWITHOBJECTHEADER_OFFSET UNITYSDK_OFFSET(0x000000)
#define MEMORYPACK_MEMORYPACKWRITER_WRITEUNMANAGED_OFFSET UNITYSDK_OFFSET(0x000000)
#define MEMORYPACK_MEMORYPACKWRITER_WRITEUNMANAGEDWITHOBJECTHEADER_OFFSET UNITYSDK_OFFSET(0x000000)
#define MEMORYPACK_MEMORYPACKWRITER_WRITEUNMANAGED_OFFSET UNITYSDK_OFFSET(0x000000)
#define MEMORYPACK_MEMORYPACKWRITER_WRITEUNMANAGEDWITHOBJECTHEADER_OFFSET UNITYSDK_OFFSET(0x000000)
#define MEMORYPACK_MEMORYPACKWRITER_WRITEUNMANAGED_OFFSET UNITYSDK_OFFSET(0x000000)
#define MEMORYPACK_MEMORYPACKWRITER_WRITEUNMANAGEDWITHOBJECTHEADER_OFFSET UNITYSDK_OFFSET(0x000000)
#define MEMORYPACK_MEMORYPACKWRITER_WRITEUNMANAGED_OFFSET UNITYSDK_OFFSET(0x000000)
#define MEMORYPACK_MEMORYPACKWRITER_WRITEUNMANAGEDWITHOBJECTHEADER_OFFSET UNITYSDK_OFFSET(0x000000)
#define MEMORYPACK_MEMORYPACKWRITER_WRITEUNMANAGED_OFFSET UNITYSDK_OFFSET(0x000000)
#define MEMORYPACK_MEMORYPACKWRITER_WRITEUNMANAGEDWITHOBJECTHEADER_OFFSET UNITYSDK_OFFSET(0x000000)
#define MEMORYPACK_MEMORYPACKWRITER_WRITEUNMANAGED_OFFSET UNITYSDK_OFFSET(0x000000)
#define MEMORYPACK_MEMORYPACKWRITER_WRITEUNMANAGEDWITHOBJECTHEADER_OFFSET UNITYSDK_OFFSET(0x000000)
#define MEMORYPACK_MEMORYPACKWRITER_WRITEUNMANAGED_OFFSET UNITYSDK_OFFSET(0x000000)
#define MEMORYPACK_MEMORYPACKWRITER_WRITEUNMANAGEDWITHOBJECTHEADER_OFFSET UNITYSDK_OFFSET(0x000000)
#define MEMORYPACK_MEMORYPACKWRITER_DANGEROUSWRITEUNMANAGED_OFFSET UNITYSDK_OFFSET(0x000000)
#define MEMORYPACK_MEMORYPACKWRITER_DANGEROUSWRITEUNMANAGEDWITHOBJECTHEADER_OFFSET UNITYSDK_OFFSET(0x000000)
#define MEMORYPACK_MEMORYPACKWRITER_DANGEROUSWRITEUNMANAGED_OFFSET UNITYSDK_OFFSET(0x000000)
#define MEMORYPACK_MEMORYPACKWRITER_DANGEROUSWRITEUNMANAGEDWITHOBJECTHEADER_OFFSET UNITYSDK_OFFSET(0x000000)
#define MEMORYPACK_MEMORYPACKWRITER_DANGEROUSWRITEUNMANAGED_OFFSET UNITYSDK_OFFSET(0x000000)
#define MEMORYPACK_MEMORYPACKWRITER_DANGEROUSWRITEUNMANAGEDWITHOBJECTHEADER_OFFSET UNITYSDK_OFFSET(0x000000)
#define MEMORYPACK_MEMORYPACKWRITER_DANGEROUSWRITEUNMANAGED_OFFSET UNITYSDK_OFFSET(0x000000)
#define MEMORYPACK_MEMORYPACKWRITER_DANGEROUSWRITEUNMANAGEDWITHOBJECTHEADER_OFFSET UNITYSDK_OFFSET(0x000000)
#define MEMORYPACK_MEMORYPACKWRITER_DANGEROUSWRITEUNMANAGED_OFFSET UNITYSDK_OFFSET(0x000000)
#define MEMORYPACK_MEMORYPACKWRITER_DANGEROUSWRITEUNMANAGEDWITHOBJECTHEADER_OFFSET UNITYSDK_OFFSET(0x000000)
#define MEMORYPACK_MEMORYPACKWRITER_DANGEROUSWRITEUNMANAGED_OFFSET UNITYSDK_OFFSET(0x000000)
#define MEMORYPACK_MEMORYPACKWRITER_DANGEROUSWRITEUNMANAGEDWITHOBJECTHEADER_OFFSET UNITYSDK_OFFSET(0x000000)
#define MEMORYPACK_MEMORYPACKWRITER_DANGEROUSWRITEUNMANAGED_OFFSET UNITYSDK_OFFSET(0x000000)
#define MEMORYPACK_MEMORYPACKWRITER_DANGEROUSWRITEUNMANAGEDWITHOBJECTHEADER_OFFSET UNITYSDK_OFFSET(0x000000)
#define MEMORYPACK_MEMORYPACKWRITER_DANGEROUSWRITEUNMANAGED_OFFSET UNITYSDK_OFFSET(0x000000)
#define MEMORYPACK_MEMORYPACKWRITER_DANGEROUSWRITEUNMANAGEDWITHOBJECTHEADER_OFFSET UNITYSDK_OFFSET(0x000000)
#define MEMORYPACK_MEMORYPACKWRITER_DANGEROUSWRITEUNMANAGED_OFFSET UNITYSDK_OFFSET(0x000000)
#define MEMORYPACK_MEMORYPACKWRITER_DANGEROUSWRITEUNMANAGEDWITHOBJECTHEADER_OFFSET UNITYSDK_OFFSET(0x000000)
#define MEMORYPACK_MEMORYPACKWRITER_DANGEROUSWRITEUNMANAGED_OFFSET UNITYSDK_OFFSET(0x000000)
#define MEMORYPACK_MEMORYPACKWRITER_DANGEROUSWRITEUNMANAGEDWITHOBJECTHEADER_OFFSET UNITYSDK_OFFSET(0x000000)
#define MEMORYPACK_MEMORYPACKWRITER_DANGEROUSWRITEUNMANAGED_OFFSET UNITYSDK_OFFSET(0x000000)
#define MEMORYPACK_MEMORYPACKWRITER_DANGEROUSWRITEUNMANAGEDWITHOBJECTHEADER_OFFSET UNITYSDK_OFFSET(0x000000)
#define MEMORYPACK_MEMORYPACKWRITER_DANGEROUSWRITEUNMANAGED_OFFSET UNITYSDK_OFFSET(0x000000)
#define MEMORYPACK_MEMORYPACKWRITER_DANGEROUSWRITEUNMANAGEDWITHOBJECTHEADER_OFFSET UNITYSDK_OFFSET(0x000000)
#define MEMORYPACK_MEMORYPACKWRITER_DANGEROUSWRITEUNMANAGED_OFFSET UNITYSDK_OFFSET(0x000000)
#define MEMORYPACK_MEMORYPACKWRITER_DANGEROUSWRITEUNMANAGEDWITHOBJECTHEADER_OFFSET UNITYSDK_OFFSET(0x000000)
#define MEMORYPACK_MEMORYPACKWRITER_DANGEROUSWRITEUNMANAGED_OFFSET UNITYSDK_OFFSET(0x000000)
#define MEMORYPACK_MEMORYPACKWRITER_DANGEROUSWRITEUNMANAGEDWITHOBJECTHEADER_OFFSET UNITYSDK_OFFSET(0x000000)
#define MEMORYPACK_MEMORYPACKWRITER_DANGEROUSWRITEUNMANAGED_OFFSET UNITYSDK_OFFSET(0x000000)
#define MEMORYPACK_MEMORYPACKWRITER_DANGEROUSWRITEUNMANAGEDWITHOBJECTHEADER_OFFSET UNITYSDK_OFFSET(0x000000)

namespace MemoryPack
{
	inline static constexpr unsigned int MemoryPackWriter_TypeDefinitionIndex = 35428;

	class MemoryPackWriter : public Il2CppObject
	{
	public:
		::System::Int32 DepthLimit; // 0x0
		Il2CppObject* bufferWriter; // 0x10
		Il2CppObject* bufferReference; // 0x18
		::System::Int32 bufferLength; // 0x28
		::System::Int32 advancedCount; // 0x2C
		::System::Int32 depth; // 0x30
		::System::Int32 writtenCount; // 0x34
		::System::Boolean serializeStringAsUtf8; // 0x38
		::MemoryPack::MemoryPackWriterOptionalState* optionalState; // 0x40

		::System::Void WriteVarInt(::System::Byte arg)
		{
			((::System::Void(*)(::System::Byte, ::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_MEMORYPACKWRITER_WRITEVARINT_OFFSET))(arg, nullptr);
		}

		::System::Void WriteVarInt(::System::SByte arg)
		{
			((::System::Void(*)(::System::SByte, ::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_MEMORYPACKWRITER_WRITEVARINT_OFFSET))(arg, nullptr);
		}

		::System::Void WriteVarInt(::System::UInt16 arg)
		{
			((::System::Void(*)(::System::UInt16, ::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_MEMORYPACKWRITER_WRITEVARINT_OFFSET))(arg, nullptr);
		}

		::System::Void WriteVarInt(::System::Int16 arg)
		{
			((::System::Void(*)(::System::Int16, ::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_MEMORYPACKWRITER_WRITEVARINT_OFFSET))(arg, nullptr);
		}

		::System::Void WriteVarInt(::System::UInt32 arg)
		{
			((::System::Void(*)(::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_MEMORYPACKWRITER_WRITEVARINT_OFFSET))(arg, nullptr);
		}

		::System::Void WriteVarInt(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_MEMORYPACKWRITER_WRITEVARINT_OFFSET))(arg, nullptr);
		}

		::System::Void WriteVarInt(::System::UInt64 arg)
		{
			((::System::Void(*)(::System::UInt64, ::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_MEMORYPACKWRITER_WRITEVARINT_OFFSET))(arg, nullptr);
		}

		::System::Void WriteVarInt(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_MEMORYPACKWRITER_WRITEVARINT_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_WrittenCount()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_MEMORYPACKWRITER_GET_WRITTENCOUNT_OFFSET))(nullptr);
		}

		::System::Int32 get_BufferLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_MEMORYPACKWRITER_GET_BUFFERLENGTH_OFFSET))(nullptr);
		}

		::MemoryPack::MemoryPackWriterOptionalState* get_OptionalState()
		{
			return (return (::MemoryPack::MemoryPackWriterOptionalState*(*)(::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_MEMORYPACKWRITER_GET_OPTIONALSTATE_OFFSET))(nullptr);
		}

		::MemoryPack::MemoryPackSerializerOptions* get_Options()
		{
			return (return (::MemoryPack::MemoryPackSerializerOptions*(*)(::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_MEMORYPACKWRITER_GET_OPTIONS_OFFSET))(nullptr);
		}

		::System::Void .ctor(Il2CppObject&* arg, ::MemoryPack::MemoryPackWriterOptionalState* arg)
		{
			((::System::Void(*)(Il2CppObject&*, ::MemoryPack::MemoryPackWriterOptionalState*, ::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_MEMORYPACKWRITER_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor(Il2CppObject&* arg, ::Il2CppArray<::System::Object*>* arg, ::MemoryPack::MemoryPackWriterOptionalState* arg)
		{
			((::System::Void(*)(Il2CppObject&*, ::Il2CppArray<::System::Object*>*, ::MemoryPack::MemoryPackWriterOptionalState*, ::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_MEMORYPACKWRITER_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void .ctor(Il2CppObject&* arg, Il2CppObject* arg, ::MemoryPack::MemoryPackWriterOptionalState* arg)
		{
			((::System::Void(*)(Il2CppObject&*, Il2CppObject*, ::MemoryPack::MemoryPackWriterOptionalState*, ::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_MEMORYPACKWRITER_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		uint8_t&* GetSpanReference(::System::Int32 arg)
		{
			return (return (uint8_t&*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_MEMORYPACKWRITER_GETSPANREFERENCE_OFFSET))(arg, nullptr);
		}

		::System::Void RequestNewBuffer(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_MEMORYPACKWRITER_REQUESTNEWBUFFER_OFFSET))(arg, nullptr);
		}

		::System::Void Advance(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_MEMORYPACKWRITER_ADVANCE_OFFSET))(arg, nullptr);
		}

		::System::Void Flush()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_MEMORYPACKWRITER_FLUSH_OFFSET))(nullptr);
		}

		::MemoryPack::IMemoryPackFormatter* GetFormatter(::System::Type* arg)
		{
			return (return (::MemoryPack::IMemoryPackFormatter*(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_MEMORYPACKWRITER_GETFORMATTER_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetFormatter()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_MEMORYPACKWRITER_GETFORMATTER_OFFSET))(nullptr);
		}

		::System::Int32 GetStringWriteLength(::System::String* str)
		{
			return (return (::System::Int32(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_MEMORYPACKWRITER_GETSTRINGWRITELENGTH_OFFSET))(str, nullptr);
		}

		::System::Int32 GetUnmanageArrayWriteLength(::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Int32(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_MEMORYPACKWRITER_GETUNMANAGEARRAYWRITELENGTH_OFFSET))(arg, nullptr);
		}

		::System::Void WriteObjectHeader(::System::Byte arg)
		{
			((::System::Void(*)(::System::Byte, ::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_MEMORYPACKWRITER_WRITEOBJECTHEADER_OFFSET))(arg, nullptr);
		}

		::System::Void WriteNullObjectHeader()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_MEMORYPACKWRITER_WRITENULLOBJECTHEADER_OFFSET))(nullptr);
		}

		::System::Void WriteObjectReferenceId(::System::UInt32 arg)
		{
			((::System::Void(*)(::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_MEMORYPACKWRITER_WRITEOBJECTREFERENCEID_OFFSET))(arg, nullptr);
		}

		::System::Void WriteUnionHeader(::System::UInt16 arg)
		{
			((::System::Void(*)(::System::UInt16, ::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_MEMORYPACKWRITER_WRITEUNIONHEADER_OFFSET))(arg, nullptr);
		}

		::System::Void WriteNullUnionHeader()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_MEMORYPACKWRITER_WRITENULLUNIONHEADER_OFFSET))(nullptr);
		}

		::System::Void WriteCollectionHeader(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_MEMORYPACKWRITER_WRITECOLLECTIONHEADER_OFFSET))(arg, nullptr);
		}

		::System::Void WriteNullCollectionHeader()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_MEMORYPACKWRITER_WRITENULLCOLLECTIONHEADER_OFFSET))(nullptr);
		}

		::System::Void WriteString(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_MEMORYPACKWRITER_WRITESTRING_OFFSET))(str, nullptr);
		}

		::System::Void WriteUtf16(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_MEMORYPACKWRITER_WRITEUTF16_OFFSET))(str, nullptr);
		}

		::System::Void WriteUtf16(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_MEMORYPACKWRITER_WRITEUTF16_OFFSET))(arg, nullptr);
		}

		::System::Void WriteUtf8(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_MEMORYPACKWRITER_WRITEUTF8_OFFSET))(str, nullptr);
		}

		::System::Void WriteUtf8(Il2CppObject* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(Il2CppObject*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_MEMORYPACKWRITER_WRITEUTF8_OFFSET))(arg, arg, nullptr);
		}

		::System::Void WritePackable(Il2CppObject&* arg)
		{
			((::System::Void(*)(Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_MEMORYPACKWRITER_WRITEPACKABLE_OFFSET))(arg, nullptr);
		}

		::System::Void WriteValue(Il2CppObject&* arg)
		{
			((::System::Void(*)(Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_MEMORYPACKWRITER_WRITEVALUE_OFFSET))(arg, nullptr);
		}

		::System::Void WriteValue(::System::Type* arg, ::System::Object* arg)
		{
			((::System::Void(*)(::System::Type*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_MEMORYPACKWRITER_WRITEVALUE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void WriteValueWithFormatter(Il2CppObject* arg, Il2CppObject&* arg)
		{
			((::System::Void(*)(Il2CppObject*, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_MEMORYPACKWRITER_WRITEVALUEWITHFORMATTER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void WriteArray(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_MEMORYPACKWRITER_WRITEARRAY_OFFSET))(arg, nullptr);
		}

		::System::Void WriteSpan(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_MEMORYPACKWRITER_WRITESPAN_OFFSET))(arg, nullptr);
		}

		::System::Void WriteSpan(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_MEMORYPACKWRITER_WRITESPAN_OFFSET))(arg, nullptr);
		}

		::System::Void WritePackableArray(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_MEMORYPACKWRITER_WRITEPACKABLEARRAY_OFFSET))(arg, nullptr);
		}

		::System::Void WritePackableSpan(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_MEMORYPACKWRITER_WRITEPACKABLESPAN_OFFSET))(arg, nullptr);
		}

		::System::Void WritePackableSpan(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_MEMORYPACKWRITER_WRITEPACKABLESPAN_OFFSET))(arg, nullptr);
		}

		::System::Void WriteUnmanagedArray(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_MEMORYPACKWRITER_WRITEUNMANAGEDARRAY_OFFSET))(arg, nullptr);
		}

		::System::Void WriteUnmanagedSpan(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_MEMORYPACKWRITER_WRITEUNMANAGEDSPAN_OFFSET))(arg, nullptr);
		}

		::System::Void WriteUnmanagedSpan(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_MEMORYPACKWRITER_WRITEUNMANAGEDSPAN_OFFSET))(arg, nullptr);
		}

		::System::Void DangerousWriteUnmanagedArray(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_MEMORYPACKWRITER_DANGEROUSWRITEUNMANAGEDARRAY_OFFSET))(arg, nullptr);
		}

		::System::Void DangerousWriteUnmanagedSpan(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_MEMORYPACKWRITER_DANGEROUSWRITEUNMANAGEDSPAN_OFFSET))(arg, nullptr);
		}

		::System::Void DangerousWriteUnmanagedSpan(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_MEMORYPACKWRITER_DANGEROUSWRITEUNMANAGEDSPAN_OFFSET))(arg, nullptr);
		}

		::System::Void WriteSpanWithoutLengthHeader(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_MEMORYPACKWRITER_WRITESPANWITHOUTLENGTHHEADER_OFFSET))(arg, nullptr);
		}

		::System::Void WriteUnmanaged(Il2CppObject&* arg)
		{
			((::System::Void(*)(Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_MEMORYPACKWRITER_WRITEUNMANAGED_OFFSET))(arg, nullptr);
		}

		::System::Void WriteUnmanagedWithObjectHeader(::System::Byte arg, Il2CppObject&* arg)
		{
			((::System::Void(*)(::System::Byte, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_MEMORYPACKWRITER_WRITEUNMANAGEDWITHOBJECTHEADER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void WriteUnmanaged(Il2CppObject&* arg, Il2CppObject&* arg)
		{
			((::System::Void(*)(Il2CppObject&*, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_MEMORYPACKWRITER_WRITEUNMANAGED_OFFSET))(arg, arg, nullptr);
		}

		::System::Void WriteUnmanagedWithObjectHeader(::System::Byte arg, Il2CppObject&* arg, Il2CppObject&* arg)
		{
			((::System::Void(*)(::System::Byte, Il2CppObject&*, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_MEMORYPACKWRITER_WRITEUNMANAGEDWITHOBJECTHEADER_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void WriteUnmanaged(Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg)
		{
			((::System::Void(*)(Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_MEMORYPACKWRITER_WRITEUNMANAGED_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void WriteUnmanagedWithObjectHeader(::System::Byte arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg)
		{
			((::System::Void(*)(::System::Byte, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_MEMORYPACKWRITER_WRITEUNMANAGEDWITHOBJECTHEADER_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void WriteUnmanaged(Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg)
		{
			((::System::Void(*)(Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_MEMORYPACKWRITER_WRITEUNMANAGED_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void WriteUnmanagedWithObjectHeader(::System::Byte arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg)
		{
			((::System::Void(*)(::System::Byte, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_MEMORYPACKWRITER_WRITEUNMANAGEDWITHOBJECTHEADER_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void WriteUnmanaged(Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg)
		{
			((::System::Void(*)(Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_MEMORYPACKWRITER_WRITEUNMANAGED_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void WriteUnmanagedWithObjectHeader(::System::Byte arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg)
		{
			((::System::Void(*)(::System::Byte, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_MEMORYPACKWRITER_WRITEUNMANAGEDWITHOBJECTHEADER_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void WriteUnmanaged(Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg)
		{
			((::System::Void(*)(Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_MEMORYPACKWRITER_WRITEUNMANAGED_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void WriteUnmanagedWithObjectHeader(::System::Byte arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg)
		{
			((::System::Void(*)(::System::Byte, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_MEMORYPACKWRITER_WRITEUNMANAGEDWITHOBJECTHEADER_OFFSET))(arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void WriteUnmanaged(Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg)
		{
			((::System::Void(*)(Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_MEMORYPACKWRITER_WRITEUNMANAGED_OFFSET))(arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void WriteUnmanagedWithObjectHeader(::System::Byte arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg)
		{
			((::System::Void(*)(::System::Byte, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_MEMORYPACKWRITER_WRITEUNMANAGEDWITHOBJECTHEADER_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void WriteUnmanaged(Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg)
		{
			((::System::Void(*)(Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_MEMORYPACKWRITER_WRITEUNMANAGED_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void WriteUnmanagedWithObjectHeader(::System::Byte arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg)
		{
			((::System::Void(*)(::System::Byte, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_MEMORYPACKWRITER_WRITEUNMANAGEDWITHOBJECTHEADER_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void WriteUnmanaged(Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg)
		{
			((::System::Void(*)(Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_MEMORYPACKWRITER_WRITEUNMANAGED_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void WriteUnmanagedWithObjectHeader(::System::Byte arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg)
		{
			((::System::Void(*)(::System::Byte, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_MEMORYPACKWRITER_WRITEUNMANAGEDWITHOBJECTHEADER_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void WriteUnmanaged(Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg)
		{
			((::System::Void(*)(Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_MEMORYPACKWRITER_WRITEUNMANAGED_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void WriteUnmanagedWithObjectHeader(::System::Byte arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg)
		{
			((::System::Void(*)(::System::Byte, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_MEMORYPACKWRITER_WRITEUNMANAGEDWITHOBJECTHEADER_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void WriteUnmanaged(Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg)
		{
			((::System::Void(*)(Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_MEMORYPACKWRITER_WRITEUNMANAGED_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void WriteUnmanagedWithObjectHeader(::System::Byte arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg)
		{
			((::System::Void(*)(::System::Byte, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_MEMORYPACKWRITER_WRITEUNMANAGEDWITHOBJECTHEADER_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void WriteUnmanaged(Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg)
		{
			((::System::Void(*)(Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_MEMORYPACKWRITER_WRITEUNMANAGED_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void WriteUnmanagedWithObjectHeader(::System::Byte arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg)
		{
			((::System::Void(*)(::System::Byte, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_MEMORYPACKWRITER_WRITEUNMANAGEDWITHOBJECTHEADER_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void WriteUnmanaged(Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg)
		{
			((::System::Void(*)(Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_MEMORYPACKWRITER_WRITEUNMANAGED_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void WriteUnmanagedWithObjectHeader(::System::Byte arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg)
		{
			((::System::Void(*)(::System::Byte, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_MEMORYPACKWRITER_WRITEUNMANAGEDWITHOBJECTHEADER_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void WriteUnmanaged(Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg)
		{
			((::System::Void(*)(Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_MEMORYPACKWRITER_WRITEUNMANAGED_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void WriteUnmanagedWithObjectHeader(::System::Byte arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg)
		{
			((::System::Void(*)(::System::Byte, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_MEMORYPACKWRITER_WRITEUNMANAGEDWITHOBJECTHEADER_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void WriteUnmanaged(Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg)
		{
			((::System::Void(*)(Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_MEMORYPACKWRITER_WRITEUNMANAGED_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void WriteUnmanagedWithObjectHeader(::System::Byte arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg)
		{
			((::System::Void(*)(::System::Byte, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_MEMORYPACKWRITER_WRITEUNMANAGEDWITHOBJECTHEADER_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void DangerousWriteUnmanaged(Il2CppObject&* arg)
		{
			((::System::Void(*)(Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_MEMORYPACKWRITER_DANGEROUSWRITEUNMANAGED_OFFSET))(arg, nullptr);
		}

		::System::Void DangerousWriteUnmanagedWithObjectHeader(::System::Byte arg, Il2CppObject&* arg)
		{
			((::System::Void(*)(::System::Byte, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_MEMORYPACKWRITER_DANGEROUSWRITEUNMANAGEDWITHOBJECTHEADER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void DangerousWriteUnmanaged(Il2CppObject&* arg, Il2CppObject&* arg)
		{
			((::System::Void(*)(Il2CppObject&*, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_MEMORYPACKWRITER_DANGEROUSWRITEUNMANAGED_OFFSET))(arg, arg, nullptr);
		}

		::System::Void DangerousWriteUnmanagedWithObjectHeader(::System::Byte arg, Il2CppObject&* arg, Il2CppObject&* arg)
		{
			((::System::Void(*)(::System::Byte, Il2CppObject&*, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_MEMORYPACKWRITER_DANGEROUSWRITEUNMANAGEDWITHOBJECTHEADER_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void DangerousWriteUnmanaged(Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg)
		{
			((::System::Void(*)(Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_MEMORYPACKWRITER_DANGEROUSWRITEUNMANAGED_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void DangerousWriteUnmanagedWithObjectHeader(::System::Byte arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg)
		{
			((::System::Void(*)(::System::Byte, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_MEMORYPACKWRITER_DANGEROUSWRITEUNMANAGEDWITHOBJECTHEADER_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void DangerousWriteUnmanaged(Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg)
		{
			((::System::Void(*)(Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_MEMORYPACKWRITER_DANGEROUSWRITEUNMANAGED_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void DangerousWriteUnmanagedWithObjectHeader(::System::Byte arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg)
		{
			((::System::Void(*)(::System::Byte, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_MEMORYPACKWRITER_DANGEROUSWRITEUNMANAGEDWITHOBJECTHEADER_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void DangerousWriteUnmanaged(Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg)
		{
			((::System::Void(*)(Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_MEMORYPACKWRITER_DANGEROUSWRITEUNMANAGED_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void DangerousWriteUnmanagedWithObjectHeader(::System::Byte arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg)
		{
			((::System::Void(*)(::System::Byte, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_MEMORYPACKWRITER_DANGEROUSWRITEUNMANAGEDWITHOBJECTHEADER_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void DangerousWriteUnmanaged(Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg)
		{
			((::System::Void(*)(Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_MEMORYPACKWRITER_DANGEROUSWRITEUNMANAGED_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void DangerousWriteUnmanagedWithObjectHeader(::System::Byte arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg)
		{
			((::System::Void(*)(::System::Byte, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_MEMORYPACKWRITER_DANGEROUSWRITEUNMANAGEDWITHOBJECTHEADER_OFFSET))(arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void DangerousWriteUnmanaged(Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg)
		{
			((::System::Void(*)(Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_MEMORYPACKWRITER_DANGEROUSWRITEUNMANAGED_OFFSET))(arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void DangerousWriteUnmanagedWithObjectHeader(::System::Byte arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg)
		{
			((::System::Void(*)(::System::Byte, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_MEMORYPACKWRITER_DANGEROUSWRITEUNMANAGEDWITHOBJECTHEADER_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void DangerousWriteUnmanaged(Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg)
		{
			((::System::Void(*)(Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_MEMORYPACKWRITER_DANGEROUSWRITEUNMANAGED_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void DangerousWriteUnmanagedWithObjectHeader(::System::Byte arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg)
		{
			((::System::Void(*)(::System::Byte, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_MEMORYPACKWRITER_DANGEROUSWRITEUNMANAGEDWITHOBJECTHEADER_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void DangerousWriteUnmanaged(Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg)
		{
			((::System::Void(*)(Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_MEMORYPACKWRITER_DANGEROUSWRITEUNMANAGED_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void DangerousWriteUnmanagedWithObjectHeader(::System::Byte arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg)
		{
			((::System::Void(*)(::System::Byte, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_MEMORYPACKWRITER_DANGEROUSWRITEUNMANAGEDWITHOBJECTHEADER_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void DangerousWriteUnmanaged(Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg)
		{
			((::System::Void(*)(Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_MEMORYPACKWRITER_DANGEROUSWRITEUNMANAGED_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void DangerousWriteUnmanagedWithObjectHeader(::System::Byte arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg)
		{
			((::System::Void(*)(::System::Byte, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_MEMORYPACKWRITER_DANGEROUSWRITEUNMANAGEDWITHOBJECTHEADER_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void DangerousWriteUnmanaged(Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg)
		{
			((::System::Void(*)(Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_MEMORYPACKWRITER_DANGEROUSWRITEUNMANAGED_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void DangerousWriteUnmanagedWithObjectHeader(::System::Byte arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg)
		{
			((::System::Void(*)(::System::Byte, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_MEMORYPACKWRITER_DANGEROUSWRITEUNMANAGEDWITHOBJECTHEADER_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void DangerousWriteUnmanaged(Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg)
		{
			((::System::Void(*)(Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_MEMORYPACKWRITER_DANGEROUSWRITEUNMANAGED_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void DangerousWriteUnmanagedWithObjectHeader(::System::Byte arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg)
		{
			((::System::Void(*)(::System::Byte, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_MEMORYPACKWRITER_DANGEROUSWRITEUNMANAGEDWITHOBJECTHEADER_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void DangerousWriteUnmanaged(Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg)
		{
			((::System::Void(*)(Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_MEMORYPACKWRITER_DANGEROUSWRITEUNMANAGED_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void DangerousWriteUnmanagedWithObjectHeader(::System::Byte arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg)
		{
			((::System::Void(*)(::System::Byte, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_MEMORYPACKWRITER_DANGEROUSWRITEUNMANAGEDWITHOBJECTHEADER_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void DangerousWriteUnmanaged(Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg)
		{
			((::System::Void(*)(Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_MEMORYPACKWRITER_DANGEROUSWRITEUNMANAGED_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void DangerousWriteUnmanagedWithObjectHeader(::System::Byte arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg)
		{
			((::System::Void(*)(::System::Byte, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_MEMORYPACKWRITER_DANGEROUSWRITEUNMANAGEDWITHOBJECTHEADER_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void DangerousWriteUnmanaged(Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg)
		{
			((::System::Void(*)(Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_MEMORYPACKWRITER_DANGEROUSWRITEUNMANAGED_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void DangerousWriteUnmanagedWithObjectHeader(::System::Byte arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg)
		{
			((::System::Void(*)(::System::Byte, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_MEMORYPACKWRITER_DANGEROUSWRITEUNMANAGEDWITHOBJECTHEADER_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

	};
}

