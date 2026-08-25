#pragma once
#include "../../unitysdk.h"

#define SYSTEM_RUNTIME_AMBIGUOUSIMPLEMENTATIONEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x91C2890)
#define SYSTEM_RUNTIME_AMBIGUOUSIMPLEMENTATIONEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x91C2900)
#define SYSTEM_RUNTIME_AMBIGUOUSIMPLEMENTATIONEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x91C2960)

namespace System::Runtime
{
	inline static constexpr unsigned int AmbiguousImplementationException_TypeDefinitionIndex = 24425;

	class AmbiguousImplementationException : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_AMBIGUOUSIMPLEMENTATIONEXCEPTION_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_AMBIGUOUSIMPLEMENTATIONEXCEPTION_.CTOR_OFFSET))(str, nullptr);
		}

		::System::Void .ctor(::System::Runtime::Serialization::SerializationInfo* arg, ::System::Runtime::Serialization::StreamingContext* arg)
		{
			((::System::Void(*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_AMBIGUOUSIMPLEMENTATIONEXCEPTION_.CTOR_OFFSET))(arg, arg, nullptr);
		}

	};
}

