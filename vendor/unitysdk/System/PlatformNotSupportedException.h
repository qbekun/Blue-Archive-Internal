#pragma once
#include "../unitysdk.h"

#define SYSTEM_PLATFORMNOTSUPPORTEDEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9370A40)
#define SYSTEM_PLATFORMNOTSUPPORTEDEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9370A90)
#define SYSTEM_PLATFORMNOTSUPPORTEDEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9370AB0)

namespace System
{
	inline static constexpr unsigned int PlatformNotSupportedException_TypeDefinitionIndex = 23819;

	class PlatformNotSupportedException : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_PLATFORMNOTSUPPORTEDEXCEPTION_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_PLATFORMNOTSUPPORTEDEXCEPTION_.CTOR_OFFSET))(str, nullptr);
		}

		::System::Void .ctor(::System::Runtime::Serialization::SerializationInfo* arg, ::System::Runtime::Serialization::StreamingContext* arg)
		{
			((::System::Void(*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_PLATFORMNOTSUPPORTEDEXCEPTION_.CTOR_OFFSET))(arg, arg, nullptr);
		}

	};
}

