#pragma once
#include "../unitysdk.h"

#define SYSTEM_OVERFLOWEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x936EAD0)
#define SYSTEM_OVERFLOWEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x936EB20)
#define SYSTEM_OVERFLOWEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x936EB40)
#define SYSTEM_OVERFLOWEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x936EB60)

namespace System
{
	inline static constexpr unsigned int OverflowException_TypeDefinitionIndex = 23815;

	class OverflowException : public <GetEnumerator>d__19
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_OVERFLOWEXCEPTION_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_OVERFLOWEXCEPTION_.CTOR_OFFSET))(str, nullptr);
		}

		::System::Void .ctor(::System::String* str, ::System::Exception* arg)
		{
			((::System::Void(*)(::System::String*, ::System::Exception*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_OVERFLOWEXCEPTION_.CTOR_OFFSET))(str, arg, nullptr);
		}

		::System::Void .ctor(::System::Runtime::Serialization::SerializationInfo* arg, ::System::Runtime::Serialization::StreamingContext* arg)
		{
			((::System::Void(*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_OVERFLOWEXCEPTION_.CTOR_OFFSET))(arg, arg, nullptr);
		}

	};
}

