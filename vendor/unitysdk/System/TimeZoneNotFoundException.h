#pragma once
#include "../unitysdk.h"

#define SYSTEM_TIMEZONENOTFOUNDEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x937AC60)
#define SYSTEM_TIMEZONENOTFOUNDEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x937ACB0)

namespace System
{
	inline static constexpr unsigned int TimeZoneNotFoundException_TypeDefinitionIndex = 23845;

	class TimeZoneNotFoundException : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TIMEZONENOTFOUNDEXCEPTION_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Runtime::Serialization::SerializationInfo* arg, ::System::Runtime::Serialization::StreamingContext* arg)
		{
			((::System::Void(*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TIMEZONENOTFOUNDEXCEPTION_.CTOR_OFFSET))(arg, arg, nullptr);
		}

	};
}

