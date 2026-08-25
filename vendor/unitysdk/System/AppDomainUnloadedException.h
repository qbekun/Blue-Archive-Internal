#pragma once
#include "../unitysdk.h"

#define SYSTEM_APPDOMAINUNLOADEDEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x93872D0)
#define SYSTEM_APPDOMAINUNLOADEDEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9387370)

namespace System
{
	inline static constexpr unsigned int AppDomainUnloadedException_TypeDefinitionIndex = 23893;

	class AppDomainUnloadedException : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_APPDOMAINUNLOADEDEXCEPTION_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Runtime::Serialization::SerializationInfo* arg, ::System::Runtime::Serialization::StreamingContext* arg)
		{
			((::System::Void(*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_APPDOMAINUNLOADEDEXCEPTION_.CTOR_OFFSET))(arg, arg, nullptr);
		}

	};
}

