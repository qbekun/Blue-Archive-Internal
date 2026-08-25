#pragma once
#include "../unitysdk.h"

#define SYSTEM_INVALIDTIMEZONEEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x935A590)
#define SYSTEM_INVALIDTIMEZONEEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x935A5E0)
#define SYSTEM_INVALIDTIMEZONEEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x935A640)

namespace System
{
	inline static constexpr unsigned int InvalidTimeZoneException_TypeDefinitionIndex = 23787;

	class InvalidTimeZoneException : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_INVALIDTIMEZONEEXCEPTION_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_INVALIDTIMEZONEEXCEPTION_.CTOR_OFFSET))(str, nullptr);
		}

		::System::Void .ctor(::System::Runtime::Serialization::SerializationInfo* arg, ::System::Runtime::Serialization::StreamingContext* arg)
		{
			((::System::Void(*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_INVALIDTIMEZONEEXCEPTION_.CTOR_OFFSET))(arg, arg, nullptr);
		}

	};
}

