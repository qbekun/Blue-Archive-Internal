#pragma once
#include "../unitysdk.h"

#define FLATBUFFERS_BYTEBUFFER_GET_LENGTH_OFFSET UNITYSDK_OFFSET(0x28A02F0)
#define FLATBUFFERS_BYTEBUFFER_.CTOR_OFFSET UNITYSDK_OFFSET(0x28A0310)
#define FLATBUFFERS_BYTEBUFFER_.CTOR_OFFSET UNITYSDK_OFFSET(0x28A0320)
#define FLATBUFFERS_BYTEBUFFER_GET_POSITION_OFFSET UNITYSDK_OFFSET(0x28A0420)
#define FLATBUFFERS_BYTEBUFFER_SET_POSITION_OFFSET UNITYSDK_OFFSET(0x28A0430)
#define FLATBUFFERS_BYTEBUFFER_GROWFRONT_OFFSET UNITYSDK_OFFSET(0x28A0440)
#define FLATBUFFERS_BYTEBUFFER_TOARRAY_OFFSET UNITYSDK_OFFSET(0x28A0550)
#define FLATBUFFERS_BYTEBUFFER_TOFULLARRAY_OFFSET UNITYSDK_OFFSET(0x28A05C0)
#define FLATBUFFERS_BYTEBUFFER_TOARRAYSEGMENT_OFFSET UNITYSDK_OFFSET(0x28A0640)
#define FLATBUFFERS_BYTEBUFFER_WRITELITTLEENDIAN_OFFSET UNITYSDK_OFFSET(0x28A06A0)
#define FLATBUFFERS_BYTEBUFFER_READLITTLEENDIAN_OFFSET UNITYSDK_OFFSET(0x28A07D0)
#define FLATBUFFERS_BYTEBUFFER_ASSERTOFFSETANDLENGTH_OFFSET UNITYSDK_OFFSET(0x28A09A0)
#define FLATBUFFERS_BYTEBUFFER_PUTSBYTE_OFFSET UNITYSDK_OFFSET(0x28A0A10)
#define FLATBUFFERS_BYTEBUFFER_PUTBYTE_OFFSET UNITYSDK_OFFSET(0x28A0A90)
#define FLATBUFFERS_BYTEBUFFER_PUTBYTE_OFFSET UNITYSDK_OFFSET(0x28A0B10)
#define FLATBUFFERS_BYTEBUFFER_PUTSHORT_OFFSET UNITYSDK_OFFSET(0x28A0BB0)
#define FLATBUFFERS_BYTEBUFFER_PUTINT_OFFSET UNITYSDK_OFFSET(0x28A0C30)
#define FLATBUFFERS_BYTEBUFFER_PUTUINT_OFFSET UNITYSDK_OFFSET(0x28A0CB0)
#define FLATBUFFERS_BYTEBUFFER_PUTLONG_OFFSET UNITYSDK_OFFSET(0x28A0D30)
#define FLATBUFFERS_BYTEBUFFER_PUTFLOAT_OFFSET UNITYSDK_OFFSET(0x28A0DB0)
#define FLATBUFFERS_BYTEBUFFER_GETSBYTE_OFFSET UNITYSDK_OFFSET(0x28A0E90)
#define FLATBUFFERS_BYTEBUFFER_GET_OFFSET UNITYSDK_OFFSET(0x28A0F10)
#define FLATBUFFERS_BYTEBUFFER_GETSTRINGUTF8_OFFSET UNITYSDK_OFFSET(0x28A0F90)
#define FLATBUFFERS_BYTEBUFFER_GETSHORT_OFFSET UNITYSDK_OFFSET(0x28A0FE0)
#define FLATBUFFERS_BYTEBUFFER_GETINT_OFFSET UNITYSDK_OFFSET(0x28A0FF0)
#define FLATBUFFERS_BYTEBUFFER_GETUINT_OFFSET UNITYSDK_OFFSET(0x28A1000)
#define FLATBUFFERS_BYTEBUFFER_GETLONG_OFFSET UNITYSDK_OFFSET(0x28A1010)
#define FLATBUFFERS_BYTEBUFFER_GETFLOAT_OFFSET UNITYSDK_OFFSET(0x28A1020)

namespace FlatBuffers
{
	inline static constexpr unsigned int ByteBuffer_TypeDefinitionIndex = 38036;

	class ByteBuffer : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* _buffer; // 0x10
		::System::Int32 _pos; // 0x18
		::Il2CppArray<::System::Object*>* floathelper; // 0x20
		::Il2CppArray<::System::Object*>* inthelper; // 0x28
		::Il2CppArray<::System::Object*>* doublehelper; // 0x30
		::Il2CppArray<::System::Object*>* ulonghelper; // 0x38

		::System::Int32 get_Length()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATBUFFERS_BYTEBUFFER_GET_LENGTH_OFFSET))(nullptr);
		}

		::System::Void .ctor(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + FLATBUFFERS_BYTEBUFFER_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATBUFFERS_BYTEBUFFER_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 get_Position()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATBUFFERS_BYTEBUFFER_GET_POSITION_OFFSET))(nullptr);
		}

		::System::Void set_Position(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATBUFFERS_BYTEBUFFER_SET_POSITION_OFFSET))(arg, nullptr);
		}

		::System::Void GrowFront(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATBUFFERS_BYTEBUFFER_GROWFRONT_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* ToArray(::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATBUFFERS_BYTEBUFFER_TOARRAY_OFFSET))(arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* ToFullArray()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATBUFFERS_BYTEBUFFER_TOFULLARRAY_OFFSET))(nullptr);
		}

		Il2CppObject* ToArraySegment(::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (Il2CppObject*(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATBUFFERS_BYTEBUFFER_TOARRAYSEGMENT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void WriteLittleEndian(::System::Int32 arg, ::System::Int32 arg, ::System::UInt64 arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::System::UInt64, ::PVOID))((::PBYTE)hIl2Cpp + FLATBUFFERS_BYTEBUFFER_WRITELITTLEENDIAN_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::UInt64 ReadLittleEndian(::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::UInt64(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATBUFFERS_BYTEBUFFER_READLITTLEENDIAN_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AssertOffsetAndLength(::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATBUFFERS_BYTEBUFFER_ASSERTOFFSETANDLENGTH_OFFSET))(arg, arg, nullptr);
		}

		::System::Void PutSbyte(::System::Int32 arg, ::System::SByte arg)
		{
			((::System::Void(*)(::System::Int32, ::System::SByte, ::PVOID))((::PBYTE)hIl2Cpp + FLATBUFFERS_BYTEBUFFER_PUTSBYTE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void PutByte(::System::Int32 arg, ::System::Byte arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Byte, ::PVOID))((::PBYTE)hIl2Cpp + FLATBUFFERS_BYTEBUFFER_PUTBYTE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void PutByte(::System::Int32 arg, ::System::Byte arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Byte, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATBUFFERS_BYTEBUFFER_PUTBYTE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void PutShort(::System::Int32 arg, ::System::Int16 arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int16, ::PVOID))((::PBYTE)hIl2Cpp + FLATBUFFERS_BYTEBUFFER_PUTSHORT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void PutInt(::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATBUFFERS_BYTEBUFFER_PUTINT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void PutUint(::System::Int32 arg, ::System::UInt32 arg)
		{
			((::System::Void(*)(::System::Int32, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + FLATBUFFERS_BYTEBUFFER_PUTUINT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void PutLong(::System::Int32 arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + FLATBUFFERS_BYTEBUFFER_PUTLONG_OFFSET))(arg, arg, nullptr);
		}

		::System::Void PutFloat(::System::Int32 arg, ::System::Single arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + FLATBUFFERS_BYTEBUFFER_PUTFLOAT_OFFSET))(arg, arg, nullptr);
		}

		::System::SByte GetSbyte(::System::Int32 arg)
		{
			return (return (::System::SByte(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATBUFFERS_BYTEBUFFER_GETSBYTE_OFFSET))(arg, nullptr);
		}

		::System::Byte Get(::System::Int32 arg)
		{
			return (return (::System::Byte(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATBUFFERS_BYTEBUFFER_GET_OFFSET))(arg, nullptr);
		}

		::System::String* GetStringUTF8(::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::String*(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATBUFFERS_BYTEBUFFER_GETSTRINGUTF8_OFFSET))(arg, arg, nullptr);
		}

		::System::Int16 GetShort(::System::Int32 arg)
		{
			return (return (::System::Int16(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATBUFFERS_BYTEBUFFER_GETSHORT_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetInt(::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATBUFFERS_BYTEBUFFER_GETINT_OFFSET))(arg, nullptr);
		}

		::System::UInt32 GetUint(::System::Int32 arg)
		{
			return (return (::System::UInt32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATBUFFERS_BYTEBUFFER_GETUINT_OFFSET))(arg, nullptr);
		}

		::System::Int64 GetLong(::System::Int32 arg)
		{
			return (return (::System::Int64(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATBUFFERS_BYTEBUFFER_GETLONG_OFFSET))(arg, nullptr);
		}

		::System::Single GetFloat(::System::Int32 arg)
		{
			return (return (::System::Single(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATBUFFERS_BYTEBUFFER_GETFLOAT_OFFSET))(arg, nullptr);
		}

	};
}

