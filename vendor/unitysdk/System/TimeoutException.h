#pragma once
#include "../unitysdk.h"

#define SYSTEM_TIMEOUTEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x937AD20)
#define SYSTEM_TIMEOUTEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x937ADC0)
#define SYSTEM_TIMEOUTEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x937AE20)

namespace System
{
	inline static constexpr unsigned int TimeoutException_TypeDefinitionIndex = 23846;

	class TimeoutException : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TIMEOUTEXCEPTION_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TIMEOUTEXCEPTION_.CTOR_OFFSET))(str, nullptr);
		}

		::System::Void .ctor(::System::Runtime::Serialization::SerializationInfo* arg, ::System::Runtime::Serialization::StreamingContext* arg)
		{
			((::System::Void(*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TIMEOUTEXCEPTION_.CTOR_OFFSET))(arg, arg, nullptr);
		}

	};
}

