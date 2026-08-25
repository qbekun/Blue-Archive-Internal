#pragma once
#include "../../unitysdk.h"

#define SYSTEM_REFLECTION_TARGETPARAMETERCOUNTEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9241E00)
#define SYSTEM_REFLECTION_TARGETPARAMETERCOUNTEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9241E50)
#define SYSTEM_REFLECTION_TARGETPARAMETERCOUNTEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9241E70)

namespace System::Reflection
{
	inline static constexpr unsigned int TargetParameterCountException_TypeDefinitionIndex = 24889;

	class TargetParameterCountException : public ::System::Net::Http::Headers::TryParseDelegate`1
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_TARGETPARAMETERCOUNTEXCEPTION_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_TARGETPARAMETERCOUNTEXCEPTION_.CTOR_OFFSET))(str, nullptr);
		}

		::System::Void .ctor(::System::Runtime::Serialization::SerializationInfo* arg, ::System::Runtime::Serialization::StreamingContext* arg)
		{
			((::System::Void(*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_TARGETPARAMETERCOUNTEXCEPTION_.CTOR_OFFSET))(arg, arg, nullptr);
		}

	};
}

