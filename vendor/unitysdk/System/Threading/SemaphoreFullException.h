#pragma once
#include "../../unitysdk.h"

#define SYSTEM_THREADING_SEMAPHOREFULLEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x93D7780)
#define SYSTEM_THREADING_SEMAPHOREFULLEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x93D77C0)

namespace System::Threading
{
	inline static constexpr unsigned int SemaphoreFullException_TypeDefinitionIndex = 24042;

	class SemaphoreFullException : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_SEMAPHOREFULLEXCEPTION_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Runtime::Serialization::SerializationInfo* arg, ::System::Runtime::Serialization::StreamingContext* arg)
		{
			((::System::Void(*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_SEMAPHOREFULLEXCEPTION_.CTOR_OFFSET))(arg, arg, nullptr);
		}

	};
}

