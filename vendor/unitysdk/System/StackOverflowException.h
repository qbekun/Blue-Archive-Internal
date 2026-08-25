#pragma once
#include "../unitysdk.h"

#define SYSTEM_STACKOVERFLOWEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9377B50)
#define SYSTEM_STACKOVERFLOWEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9377BF0)
#define SYSTEM_STACKOVERFLOWEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9377C50)

namespace System
{
	inline static constexpr unsigned int StackOverflowException_TypeDefinitionIndex = 23832;

	class StackOverflowException : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_STACKOVERFLOWEXCEPTION_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_STACKOVERFLOWEXCEPTION_.CTOR_OFFSET))(str, nullptr);
		}

		::System::Void .ctor(::System::Runtime::Serialization::SerializationInfo* arg, ::System::Runtime::Serialization::StreamingContext* arg)
		{
			((::System::Void(*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_STACKOVERFLOWEXCEPTION_.CTOR_OFFSET))(arg, arg, nullptr);
		}

	};
}

