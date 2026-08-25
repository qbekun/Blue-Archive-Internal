#pragma once
#include "../unitysdk.h"

#define SYSTEM_NULLREFERENCEEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x935E1B0)
#define SYSTEM_NULLREFERENCEEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x935E200)
#define SYSTEM_NULLREFERENCEEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x935E220)

namespace System
{
	inline static constexpr unsigned int NullReferenceException_TypeDefinitionIndex = 23806;

	class NullReferenceException : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NULLREFERENCEEXCEPTION_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NULLREFERENCEEXCEPTION_.CTOR_OFFSET))(str, nullptr);
		}

		::System::Void .ctor(::System::Runtime::Serialization::SerializationInfo* arg, ::System::Runtime::Serialization::StreamingContext* arg)
		{
			((::System::Void(*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NULLREFERENCEEXCEPTION_.CTOR_OFFSET))(arg, arg, nullptr);
		}

	};
}

