#pragma once
#include "../unitysdk.h"

#define SYSTEM_ARITHMETICEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x92787E0)
#define SYSTEM_ARITHMETICEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9278830)
#define SYSTEM_ARITHMETICEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9278850)
#define SYSTEM_ARITHMETICEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9278870)

namespace System
{
	inline static constexpr unsigned int ArithmeticException_TypeDefinitionIndex = 23705;

	class ArithmeticException : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_ARITHMETICEXCEPTION_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_ARITHMETICEXCEPTION_.CTOR_OFFSET))(str, nullptr);
		}

		::System::Void .ctor(::System::String* str, ::System::Exception* arg)
		{
			((::System::Void(*)(::System::String*, ::System::Exception*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_ARITHMETICEXCEPTION_.CTOR_OFFSET))(str, arg, nullptr);
		}

		::System::Void .ctor(::System::Runtime::Serialization::SerializationInfo* arg, ::System::Runtime::Serialization::StreamingContext* arg)
		{
			((::System::Void(*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_ARITHMETICEXCEPTION_.CTOR_OFFSET))(arg, arg, nullptr);
		}

	};
}

