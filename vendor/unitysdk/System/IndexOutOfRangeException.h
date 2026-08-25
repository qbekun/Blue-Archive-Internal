#pragma once
#include "../unitysdk.h"

#define SYSTEM_INDEXOUTOFRANGEEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9355110)
#define SYSTEM_INDEXOUTOFRANGEEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9355160)
#define SYSTEM_INDEXOUTOFRANGEEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9355180)

namespace System
{
	inline static constexpr unsigned int IndexOutOfRangeException_TypeDefinitionIndex = 23779;

	class IndexOutOfRangeException : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_INDEXOUTOFRANGEEXCEPTION_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_INDEXOUTOFRANGEEXCEPTION_.CTOR_OFFSET))(str, nullptr);
		}

		::System::Void .ctor(::System::Runtime::Serialization::SerializationInfo* arg, ::System::Runtime::Serialization::StreamingContext* arg)
		{
			((::System::Void(*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_INDEXOUTOFRANGEEXCEPTION_.CTOR_OFFSET))(arg, arg, nullptr);
		}

	};
}

