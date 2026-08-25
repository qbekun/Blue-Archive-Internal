#pragma once
#include "../unitysdk.h"

#define SYSTEM_NOTSUPPORTEDEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x935E120)
#define SYSTEM_NOTSUPPORTEDEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9355030)
#define SYSTEM_NOTSUPPORTEDEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x935E170)
#define SYSTEM_NOTSUPPORTEDEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x935E190)

namespace System
{
	inline static constexpr unsigned int NotSupportedException_TypeDefinitionIndex = 23805;

	class NotSupportedException : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NOTSUPPORTEDEXCEPTION_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NOTSUPPORTEDEXCEPTION_.CTOR_OFFSET))(str, nullptr);
		}

		::System::Void .ctor(::System::String* str, ::System::Exception* arg)
		{
			((::System::Void(*)(::System::String*, ::System::Exception*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NOTSUPPORTEDEXCEPTION_.CTOR_OFFSET))(str, arg, nullptr);
		}

		::System::Void .ctor(::System::Runtime::Serialization::SerializationInfo* arg, ::System::Runtime::Serialization::StreamingContext* arg)
		{
			((::System::Void(*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NOTSUPPORTEDEXCEPTION_.CTOR_OFFSET))(arg, arg, nullptr);
		}

	};
}

