#pragma once
#include "../unitysdk.h"

#define SYSTEM_MULTICASTNOTSUPPORTEDEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x935DFF0)
#define SYSTEM_MULTICASTNOTSUPPORTEDEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x935E040)
#define SYSTEM_MULTICASTNOTSUPPORTEDEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x935E060)

namespace System
{
	inline static constexpr unsigned int MulticastNotSupportedException_TypeDefinitionIndex = 23802;

	class MulticastNotSupportedException : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_MULTICASTNOTSUPPORTEDEXCEPTION_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_MULTICASTNOTSUPPORTEDEXCEPTION_.CTOR_OFFSET))(str, nullptr);
		}

		::System::Void .ctor(::System::Runtime::Serialization::SerializationInfo* arg, ::System::Runtime::Serialization::StreamingContext* arg)
		{
			((::System::Void(*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_MULTICASTNOTSUPPORTEDEXCEPTION_.CTOR_OFFSET))(arg, arg, nullptr);
		}

	};
}

