#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_RUNTIME_SERIALIZATION_ISAFESERIALIZATIONDATA_COMPLETEDESERIALIZATION_OFFSET UNITYSDK_OFFSET(0x000000)

namespace System::Runtime::Serialization
{
	inline static constexpr unsigned int ISafeSerializationData_TypeDefinitionIndex = 24602;

	class ISafeSerializationData : public Il2CppObject
	{
	public:
		::System::Void CompleteDeserialization(::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_ISAFESERIALIZATIONDATA_COMPLETEDESERIALIZATION_OFFSET))(arg, nullptr);
		}

	};
}

