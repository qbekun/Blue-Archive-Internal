#pragma once
#include "../unitysdk.h"

#define SYSTEM_ACCESSVIOLATIONEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x92764D0)
#define SYSTEM_ACCESSVIOLATIONEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9276520)

namespace System
{
	inline static constexpr unsigned int AccessViolationException_TypeDefinitionIndex = 23678;

	class AccessViolationException : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_ACCESSVIOLATIONEXCEPTION_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Runtime::Serialization::SerializationInfo* arg, ::System::Runtime::Serialization::StreamingContext* arg)
		{
			((::System::Void(*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_ACCESSVIOLATIONEXCEPTION_.CTOR_OFFSET))(arg, arg, nullptr);
		}

	};
}

