#pragma once
#include "../unitysdk.h"

#define SYSTEM_UNAUTHORIZEDACCESSEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9382FA0)
#define SYSTEM_UNAUTHORIZEDACCESSEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9383040)
#define SYSTEM_UNAUTHORIZEDACCESSEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x93830A0)

namespace System
{
	inline static constexpr unsigned int UnauthorizedAccessException_TypeDefinitionIndex = 23864;

	class UnauthorizedAccessException : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_UNAUTHORIZEDACCESSEXCEPTION_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_UNAUTHORIZEDACCESSEXCEPTION_.CTOR_OFFSET))(str, nullptr);
		}

		::System::Void .ctor(::System::Runtime::Serialization::SerializationInfo* arg, ::System::Runtime::Serialization::StreamingContext* arg)
		{
			((::System::Void(*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_UNAUTHORIZEDACCESSEXCEPTION_.CTOR_OFFSET))(arg, arg, nullptr);
		}

	};
}

