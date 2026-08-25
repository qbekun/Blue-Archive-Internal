#pragma once
#include "../unitysdk.h"

#define SYSTEM_METHODACCESSEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x935DD40)
#define SYSTEM_METHODACCESSEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x935DD90)
#define SYSTEM_METHODACCESSEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x935DDB0)

namespace System
{
	inline static constexpr unsigned int MethodAccessException_TypeDefinitionIndex = 23799;

	class MethodAccessException : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_METHODACCESSEXCEPTION_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_METHODACCESSEXCEPTION_.CTOR_OFFSET))(str, nullptr);
		}

		::System::Void .ctor(::System::Runtime::Serialization::SerializationInfo* arg, ::System::Runtime::Serialization::StreamingContext* arg)
		{
			((::System::Void(*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_METHODACCESSEXCEPTION_.CTOR_OFFSET))(arg, arg, nullptr);
		}

	};
}

