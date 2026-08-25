#pragma once
#include "../unitysdk.h"

#define SYSTEM_INVALIDCASTEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x935A3C0)
#define SYSTEM_INVALIDCASTEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x93578A0)
#define SYSTEM_INVALIDCASTEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x935A410)
#define SYSTEM_INVALIDCASTEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x935A430)

namespace System
{
	inline static constexpr unsigned int InvalidCastException_TypeDefinitionIndex = 23784;

	class InvalidCastException : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_INVALIDCASTEXCEPTION_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_INVALIDCASTEXCEPTION_.CTOR_OFFSET))(str, nullptr);
		}

		::System::Void .ctor(::System::String* str, ::System::Exception* arg)
		{
			((::System::Void(*)(::System::String*, ::System::Exception*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_INVALIDCASTEXCEPTION_.CTOR_OFFSET))(str, arg, nullptr);
		}

		::System::Void .ctor(::System::Runtime::Serialization::SerializationInfo* arg, ::System::Runtime::Serialization::StreamingContext* arg)
		{
			((::System::Void(*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_INVALIDCASTEXCEPTION_.CTOR_OFFSET))(arg, arg, nullptr);
		}

	};
}

