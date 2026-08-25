#pragma once
#include "../unitysdk.h"

#define SYSTEM_ARRAYTYPEMISMATCHEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9278890)
#define SYSTEM_ARRAYTYPEMISMATCHEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x92788E0)

namespace System
{
	inline static constexpr unsigned int ArrayTypeMismatchException_TypeDefinitionIndex = 23708;

	class ArrayTypeMismatchException : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_ARRAYTYPEMISMATCHEXCEPTION_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Runtime::Serialization::SerializationInfo* arg, ::System::Runtime::Serialization::StreamingContext* arg)
		{
			((::System::Void(*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_ARRAYTYPEMISMATCHEXCEPTION_.CTOR_OFFSET))(arg, arg, nullptr);
		}

	};
}

