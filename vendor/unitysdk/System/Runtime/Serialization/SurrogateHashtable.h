#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_RUNTIME_SERIALIZATION_SURROGATEHASHTABLE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9204100)
#define SYSTEM_RUNTIME_SERIALIZATION_SURROGATEHASHTABLE_KEYEQUALS_OFFSET UNITYSDK_OFFSET(0x9204520)

namespace System::Runtime::Serialization
{
	inline static constexpr unsigned int SurrogateHashtable_TypeDefinitionIndex = 24615;

	class SurrogateHashtable : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_SURROGATEHASHTABLE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Boolean KeyEquals(::System::Object* arg, ::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_SURROGATEHASHTABLE_KEYEQUALS_OFFSET))(arg, arg, nullptr);
		}

	};
}

