#pragma once
#include "unitysdk.h"

#define ENCODINGBYTEBUFFER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9178BC0)
#define ENCODINGBYTEBUFFER_ADDBYTE_OFFSET UNITYSDK_OFFSET(0x9178E40)
#define ENCODINGBYTEBUFFER_ADDBYTE_OFFSET UNITYSDK_OFFSET(0x9178F40)
#define ENCODINGBYTEBUFFER_ADDBYTE_OFFSET UNITYSDK_OFFSET(0x9178F80)
#define ENCODINGBYTEBUFFER_ADDBYTE_OFFSET UNITYSDK_OFFSET(0x9179000)
#define ENCODINGBYTEBUFFER_MOVEPREVIOUS_OFFSET UNITYSDK_OFFSET(0x9178E80)
#define ENCODINGBYTEBUFFER_GET_MOREDATA_OFFSET UNITYSDK_OFFSET(0x9179090)
#define ENCODINGBYTEBUFFER_GETNEXTCHAR_OFFSET UNITYSDK_OFFSET(0x91790E0)
#define ENCODINGBYTEBUFFER_GET_CHARSUSED_OFFSET UNITYSDK_OFFSET(0x9179130)
#define ENCODINGBYTEBUFFER_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x9179150)

	inline static constexpr unsigned int EncodingByteBuffer_TypeDefinitionIndex = 24266;

	class EncodingByteBuffer : public Il2CppObject
	{
	public:
		::System::Object** bytes; // 0x10
		::System::Object** byteStart; // 0x18
		::System::Object** byteEnd; // 0x20
		::System::Object** chars; // 0x28
		::System::Object** charStart; // 0x30
		::System::Object** charEnd; // 0x38
		::System::Int32 byteCountResult; // 0x40
		::System::Text::Encoding* enc; // 0x48
		::System::Text::EncoderNLS* encoder; // 0x50
		::System::Text::EncoderFallbackBuffer* fallbackBuffer; // 0x58

		::System::Void .ctor(::System::Text::Encoding* arg, ::System::Text::EncoderNLS* arg, ::System::Object** arg, ::System::Int32 arg, ::System::Object** arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Text::Encoding*, ::System::Text::EncoderNLS*, ::System::Object**, ::System::Int32, ::System::Object**, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + ENCODINGBYTEBUFFER_.CTOR_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Boolean AddByte(::System::Byte arg, ::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::System::Byte, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + ENCODINGBYTEBUFFER_ADDBYTE_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean AddByte(::System::Byte arg)
		{
			return (return (::System::Boolean(*)(::System::Byte, ::PVOID))((::PBYTE)hIl2Cpp + ENCODINGBYTEBUFFER_ADDBYTE_OFFSET))(arg, nullptr);
		}

		::System::Boolean AddByte(::System::Byte arg, ::System::Byte arg)
		{
			return (return (::System::Boolean(*)(::System::Byte, ::System::Byte, ::PVOID))((::PBYTE)hIl2Cpp + ENCODINGBYTEBUFFER_ADDBYTE_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean AddByte(::System::Byte arg, ::System::Byte arg, ::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::System::Byte, ::System::Byte, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + ENCODINGBYTEBUFFER_ADDBYTE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void MovePrevious(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + ENCODINGBYTEBUFFER_MOVEPREVIOUS_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_MoreData()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ENCODINGBYTEBUFFER_GET_MOREDATA_OFFSET))(nullptr);
		}

		::System::Char GetNextChar()
		{
			return (return (::System::Char(*)(::PVOID))((::PBYTE)hIl2Cpp + ENCODINGBYTEBUFFER_GETNEXTCHAR_OFFSET))(nullptr);
		}

		::System::Int32 get_CharsUsed()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ENCODINGBYTEBUFFER_GET_CHARSUSED_OFFSET))(nullptr);
		}

		::System::Int32 get_Count()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ENCODINGBYTEBUFFER_GET_COUNT_OFFSET))(nullptr);
		}

	};

