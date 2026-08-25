#pragma once
#include "../unitysdk.h"

#define SYSTEM_ARGUMENTNULLEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9278370)
#define SYSTEM_ARGUMENTNULLEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x926E970)
#define SYSTEM_ARGUMENTNULLEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x92783C0)
#define SYSTEM_ARGUMENTNULLEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9278400)

namespace System
{
	inline static constexpr unsigned int ArgumentNullException_TypeDefinitionIndex = 23703;

	class ArgumentNullException : public <>c__DisplayClass0_0
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_ARGUMENTNULLEXCEPTION_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_ARGUMENTNULLEXCEPTION_.CTOR_OFFSET))(str, nullptr);
		}

		::System::Void .ctor(::System::String* str, ::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_ARGUMENTNULLEXCEPTION_.CTOR_OFFSET))(str, str, nullptr);
		}

		::System::Void .ctor(::System::Runtime::Serialization::SerializationInfo* arg, ::System::Runtime::Serialization::StreamingContext* arg)
		{
			((::System::Void(*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_ARGUMENTNULLEXCEPTION_.CTOR_OFFSET))(arg, arg, nullptr);
		}

	};
}

