#pragma once
#include "unitysdk.h"

#define ENCODINGCHARBUFFER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9178800)
#define ENCODINGCHARBUFFER_ADDCHAR_OFFSET UNITYSDK_OFFSET(0x91788F0)
#define ENCODINGCHARBUFFER_ADDCHAR_OFFSET UNITYSDK_OFFSET(0x91789A0)
#define ENCODINGCHARBUFFER_ADJUSTBYTES_OFFSET UNITYSDK_OFFSET(0x91789B0)
#define ENCODINGCHARBUFFER_GET_MOREDATA_OFFSET UNITYSDK_OFFSET(0x91789C0)
#define ENCODINGCHARBUFFER_GETNEXTBYTE_OFFSET UNITYSDK_OFFSET(0x91789D0)
#define ENCODINGCHARBUFFER_GET_BYTESUSED_OFFSET UNITYSDK_OFFSET(0x9178A00)
#define ENCODINGCHARBUFFER_FALLBACK_OFFSET UNITYSDK_OFFSET(0x9178A10)
#define ENCODINGCHARBUFFER_FALLBACK_OFFSET UNITYSDK_OFFSET(0x9178A80)
#define ENCODINGCHARBUFFER_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x9178BB0)

	inline static constexpr unsigned int EncodingCharBuffer_TypeDefinitionIndex = 24265;

	class EncodingCharBuffer : public Il2CppObject
	{
	public:
		::System::Object** chars; // 0x10
		::System::Object** charStart; // 0x18
		::System::Object** charEnd; // 0x20
		::System::Int32 charCountResult; // 0x28
		::System::Text::Encoding* enc; // 0x30
		::System::Text::DecoderNLS* decoder; // 0x38
		::System::Object** byteStart; // 0x40
		::System::Object** byteEnd; // 0x48
		::System::Object** bytes; // 0x50
		::System::Text::DecoderFallbackBuffer* fallbackBuffer; // 0x58

		::System::Void .ctor(::System::Text::Encoding* arg, ::System::Text::DecoderNLS* arg, ::System::Object** arg, ::System::Int32 arg, ::System::Object** arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Text::Encoding*, ::System::Text::DecoderNLS*, ::System::Object**, ::System::Int32, ::System::Object**, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + ENCODINGCHARBUFFER_.CTOR_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Boolean AddChar(::System::Char arg, ::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::System::Char, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + ENCODINGCHARBUFFER_ADDCHAR_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean AddChar(::System::Char arg)
		{
			return (return (::System::Boolean(*)(::System::Char, ::PVOID))((::PBYTE)hIl2Cpp + ENCODINGCHARBUFFER_ADDCHAR_OFFSET))(arg, nullptr);
		}

		::System::Void AdjustBytes(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + ENCODINGCHARBUFFER_ADJUSTBYTES_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_MoreData()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ENCODINGCHARBUFFER_GET_MOREDATA_OFFSET))(nullptr);
		}

		::System::Byte GetNextByte()
		{
			return (return (::System::Byte(*)(::PVOID))((::PBYTE)hIl2Cpp + ENCODINGCHARBUFFER_GETNEXTBYTE_OFFSET))(nullptr);
		}

		::System::Int32 get_BytesUsed()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ENCODINGCHARBUFFER_GET_BYTESUSED_OFFSET))(nullptr);
		}

		::System::Boolean Fallback(::System::Byte arg)
		{
			return (return (::System::Boolean(*)(::System::Byte, ::PVOID))((::PBYTE)hIl2Cpp + ENCODINGCHARBUFFER_FALLBACK_OFFSET))(arg, nullptr);
		}

		::System::Boolean Fallback(::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Boolean(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + ENCODINGCHARBUFFER_FALLBACK_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_Count()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ENCODINGCHARBUFFER_GET_COUNT_OFFSET))(nullptr);
		}

	};

