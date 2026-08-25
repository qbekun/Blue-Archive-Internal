#pragma once
#include "../../unitysdk.h"

#define SYSTEM_TEXT_DECODERFALLBACKEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x91599C0)
#define SYSTEM_TEXT_DECODERFALLBACKEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9159980)
#define SYSTEM_TEXT_DECODERFALLBACKEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9159A10)

namespace System::Text
{
	inline static constexpr unsigned int DecoderFallbackException_TypeDefinitionIndex = 24226;

	class DecoderFallbackException : public <>c__DisplayClass0_0
	{
	public:
		::Il2CppArray<::System::Object*>* _bytesUnknown; // 0x98
		::System::Int32 _index; // 0xA0

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_DECODERFALLBACKEXCEPTION_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::String* str, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::String*, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_DECODERFALLBACKEXCEPTION_.CTOR_OFFSET))(str, arg, arg, nullptr);
		}

		::System::Void .ctor(::System::Runtime::Serialization::SerializationInfo* arg, ::System::Runtime::Serialization::StreamingContext* arg)
		{
			((::System::Void(*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_DECODERFALLBACKEXCEPTION_.CTOR_OFFSET))(arg, arg, nullptr);
		}

	};
}

