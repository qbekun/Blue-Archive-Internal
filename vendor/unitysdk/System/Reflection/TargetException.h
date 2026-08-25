#pragma once
#include "../../unitysdk.h"

#define SYSTEM_REFLECTION_TARGETEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9241CE0)
#define SYSTEM_REFLECTION_TARGETEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9241D10)
#define SYSTEM_REFLECTION_TARGETEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9241D30)
#define SYSTEM_REFLECTION_TARGETEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9241D50)

namespace System::Reflection
{
	inline static constexpr unsigned int TargetException_TypeDefinitionIndex = 24887;

	class TargetException : public ::System::Net::Http::Headers::TryParseDelegate`1
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_TARGETEXCEPTION_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_TARGETEXCEPTION_.CTOR_OFFSET))(str, nullptr);
		}

		::System::Void .ctor(::System::String* str, ::System::Exception* arg)
		{
			((::System::Void(*)(::System::String*, ::System::Exception*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_TARGETEXCEPTION_.CTOR_OFFSET))(str, arg, nullptr);
		}

		::System::Void .ctor(::System::Runtime::Serialization::SerializationInfo* arg, ::System::Runtime::Serialization::StreamingContext* arg)
		{
			((::System::Void(*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_TARGETEXCEPTION_.CTOR_OFFSET))(arg, arg, nullptr);
		}

	};
}

