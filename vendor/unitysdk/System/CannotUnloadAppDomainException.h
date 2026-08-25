#pragma once
#include "../unitysdk.h"

#define SYSTEM_CANNOTUNLOADAPPDOMAINEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x93873E0)
#define SYSTEM_CANNOTUNLOADAPPDOMAINEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9387480)
#define SYSTEM_CANNOTUNLOADAPPDOMAINEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x93874E0)

namespace System
{
	inline static constexpr unsigned int CannotUnloadAppDomainException_TypeDefinitionIndex = 23894;

	class CannotUnloadAppDomainException : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CANNOTUNLOADAPPDOMAINEXCEPTION_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CANNOTUNLOADAPPDOMAINEXCEPTION_.CTOR_OFFSET))(str, nullptr);
		}

		::System::Void .ctor(::System::Runtime::Serialization::SerializationInfo* arg, ::System::Runtime::Serialization::StreamingContext* arg)
		{
			((::System::Void(*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CANNOTUNLOADAPPDOMAINEXCEPTION_.CTOR_OFFSET))(arg, arg, nullptr);
		}

	};
}

