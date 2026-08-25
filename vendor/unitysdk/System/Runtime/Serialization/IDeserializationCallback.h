#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_RUNTIME_SERIALIZATION_IDESERIALIZATIONCALLBACK_ONDESERIALIZATION_OFFSET UNITYSDK_OFFSET(0x000000)

namespace System::Runtime::Serialization
{
	inline static constexpr unsigned int IDeserializationCallback_TypeDefinitionIndex = 24569;

	class IDeserializationCallback : public Il2CppObject
	{
	public:
		::System::Void OnDeserialization(::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_IDESERIALIZATIONCALLBACK_ONDESERIALIZATION_OFFSET))(arg, nullptr);
		}

	};
}

