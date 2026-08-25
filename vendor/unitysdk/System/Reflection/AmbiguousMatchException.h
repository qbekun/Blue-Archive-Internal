#pragma once
#include "../../unitysdk.h"

#define SYSTEM_REFLECTION_AMBIGUOUSMATCHEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9239720)
#define SYSTEM_REFLECTION_AMBIGUOUSMATCHEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9239770)
#define SYSTEM_REFLECTION_AMBIGUOUSMATCHEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9239790)

namespace System::Reflection
{
	inline static constexpr unsigned int AmbiguousMatchException_TypeDefinitionIndex = 24827;

	class AmbiguousMatchException : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_AMBIGUOUSMATCHEXCEPTION_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_AMBIGUOUSMATCHEXCEPTION_.CTOR_OFFSET))(str, nullptr);
		}

		::System::Void .ctor(::System::Runtime::Serialization::SerializationInfo* arg, ::System::Runtime::Serialization::StreamingContext* arg)
		{
			((::System::Void(*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_AMBIGUOUSMATCHEXCEPTION_.CTOR_OFFSET))(arg, arg, nullptr);
		}

	};
}

