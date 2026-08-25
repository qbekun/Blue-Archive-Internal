#pragma once
#include "../../unitysdk.h"

#define SYSTEM_REFLECTION_TARGETINVOCATIONEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9241D70)
#define SYSTEM_REFLECTION_TARGETINVOCATIONEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9241DC0)
#define SYSTEM_REFLECTION_TARGETINVOCATIONEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9241DE0)

namespace System::Reflection
{
	inline static constexpr unsigned int TargetInvocationException_TypeDefinitionIndex = 24888;

	class TargetInvocationException : public ::System::Net::Http::Headers::TryParseDelegate`1
	{
	public:
		::System::Void .ctor(::System::Exception* arg)
		{
			((::System::Void(*)(::System::Exception*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_TARGETINVOCATIONEXCEPTION_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::String* str, ::System::Exception* arg)
		{
			((::System::Void(*)(::System::String*, ::System::Exception*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_TARGETINVOCATIONEXCEPTION_.CTOR_OFFSET))(str, arg, nullptr);
		}

		::System::Void .ctor(::System::Runtime::Serialization::SerializationInfo* arg, ::System::Runtime::Serialization::StreamingContext* arg)
		{
			((::System::Void(*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_TARGETINVOCATIONEXCEPTION_.CTOR_OFFSET))(arg, arg, nullptr);
		}

	};
}

