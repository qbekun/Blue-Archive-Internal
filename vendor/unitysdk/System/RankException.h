#pragma once
#include "../unitysdk.h"

#define SYSTEM_RANKEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x93717E0)
#define SYSTEM_RANKEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9371880)
#define SYSTEM_RANKEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x93718E0)

namespace System
{
	inline static constexpr unsigned int RankException_TypeDefinitionIndex = 23821;

	class RankException : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RANKEXCEPTION_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RANKEXCEPTION_.CTOR_OFFSET))(str, nullptr);
		}

		::System::Void .ctor(::System::Runtime::Serialization::SerializationInfo* arg, ::System::Runtime::Serialization::StreamingContext* arg)
		{
			((::System::Void(*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RANKEXCEPTION_.CTOR_OFFSET))(arg, arg, nullptr);
		}

	};
}

