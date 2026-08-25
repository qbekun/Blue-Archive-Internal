#pragma once
#include "../unitysdk.h"

#define SYSTEM_MEMBERACCESSEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x935CB20)
#define SYSTEM_MEMBERACCESSEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x935CB70)
#define SYSTEM_MEMBERACCESSEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x935CB90)

namespace System
{
	inline static constexpr unsigned int MemberAccessException_TypeDefinitionIndex = 23795;

	class MemberAccessException : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_MEMBERACCESSEXCEPTION_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_MEMBERACCESSEXCEPTION_.CTOR_OFFSET))(str, nullptr);
		}

		::System::Void .ctor(::System::Runtime::Serialization::SerializationInfo* arg, ::System::Runtime::Serialization::StreamingContext* arg)
		{
			((::System::Void(*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_MEMBERACCESSEXCEPTION_.CTOR_OFFSET))(arg, arg, nullptr);
		}

	};
}

