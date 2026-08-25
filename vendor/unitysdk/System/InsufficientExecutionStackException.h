#pragma once
#include "../unitysdk.h"

#define SYSTEM_INSUFFICIENTEXECUTIONSTACKEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x93551A0)
#define SYSTEM_INSUFFICIENTEXECUTIONSTACKEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x93551F0)

namespace System
{
	inline static constexpr unsigned int InsufficientExecutionStackException_TypeDefinitionIndex = 23780;

	class InsufficientExecutionStackException : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_INSUFFICIENTEXECUTIONSTACKEXCEPTION_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Runtime::Serialization::SerializationInfo* arg, ::System::Runtime::Serialization::StreamingContext* arg)
		{
			((::System::Void(*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_INSUFFICIENTEXECUTIONSTACKEXCEPTION_.CTOR_OFFSET))(arg, arg, nullptr);
		}

	};
}

