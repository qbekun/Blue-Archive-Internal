#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONEVENTSCACHE_GETSERIALIZATIONEVENTSFORTYPE_OFFSET UNITYSDK_OFFSET(0x91F83F0)
#define SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONEVENTSCACHE_.CCTOR_OFFSET UNITYSDK_OFFSET(0x91F8550)

namespace System::Runtime::Serialization
{
	inline static constexpr unsigned int SerializationEventsCache_TypeDefinitionIndex = 24585;

	class SerializationEventsCache : public Il2CppObject
	{
	public:
		Il2CppObject* s_cache; // 0x0

		::System::Runtime::Serialization::SerializationEvents* GetSerializationEventsForType(::System::Type* arg)
		{
			return (return (::System::Runtime::Serialization::SerializationEvents*(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONEVENTSCACHE_GETSERIALIZATIONEVENTSFORTYPE_OFFSET))(arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONEVENTSCACHE_.CCTOR_OFFSET))(nullptr);
		}

	};
}

