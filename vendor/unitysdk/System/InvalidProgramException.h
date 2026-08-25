#pragma once
#include "../unitysdk.h"

#define SYSTEM_INVALIDPROGRAMEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x935A500)
#define SYSTEM_INVALIDPROGRAMEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x935A550)
#define SYSTEM_INVALIDPROGRAMEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x935A570)

namespace System
{
	inline static constexpr unsigned int InvalidProgramException_TypeDefinitionIndex = 23786;

	class InvalidProgramException : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_INVALIDPROGRAMEXCEPTION_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_INVALIDPROGRAMEXCEPTION_.CTOR_OFFSET))(str, nullptr);
		}

		::System::Void .ctor(::System::Runtime::Serialization::SerializationInfo* arg, ::System::Runtime::Serialization::StreamingContext* arg)
		{
			((::System::Void(*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_INVALIDPROGRAMEXCEPTION_.CTOR_OFFSET))(arg, arg, nullptr);
		}

	};
}

