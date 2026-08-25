#pragma once
#include "../../unitysdk.h"

#define SYSTEM_TEXT_ENCODERFALLBACKEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x915CE00)
#define SYSTEM_TEXT_ENCODERFALLBACKEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x915C910)
#define SYSTEM_TEXT_ENCODERFALLBACKEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x915CBD0)
#define SYSTEM_TEXT_ENCODERFALLBACKEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x915CE50)

namespace System::Text
{
	inline static constexpr unsigned int EncoderFallbackException_TypeDefinitionIndex = 24237;

	class EncoderFallbackException : public <>c__DisplayClass0_0
	{
	public:
		::System::Char _charUnknown; // 0x98
		::System::Char _charUnknownHigh; // 0x9A
		::System::Char _charUnknownLow; // 0x9C
		::System::Int32 _index; // 0xA0

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODERFALLBACKEXCEPTION_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::String* str, ::System::Char arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::String*, ::System::Char, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODERFALLBACKEXCEPTION_.CTOR_OFFSET))(str, arg, arg, nullptr);
		}

		::System::Void .ctor(::System::String* str, ::System::Char arg, ::System::Char arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::String*, ::System::Char, ::System::Char, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODERFALLBACKEXCEPTION_.CTOR_OFFSET))(str, arg, arg, arg, nullptr);
		}

		::System::Void .ctor(::System::Runtime::Serialization::SerializationInfo* arg, ::System::Runtime::Serialization::StreamingContext* arg)
		{
			((::System::Void(*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODERFALLBACKEXCEPTION_.CTOR_OFFSET))(arg, arg, nullptr);
		}

	};
}

