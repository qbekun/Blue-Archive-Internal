#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_RUNTIME_SERIALIZATION_SAFESERIALIZATIONEVENTARGS_.CTOR_OFFSET UNITYSDK_OFFSET(0x92012B0)
#define SYSTEM_RUNTIME_SERIALIZATION_SAFESERIALIZATIONEVENTARGS_GET_SERIALIZEDSTATES_OFFSET UNITYSDK_OFFSET(0x9201370)
#define SYSTEM_RUNTIME_SERIALIZATION_SAFESERIALIZATIONEVENTARGS_.CTOR_OFFSET UNITYSDK_OFFSET(0x9201380)

namespace System::Runtime::Serialization
{
	inline static constexpr unsigned int SafeSerializationEventArgs_TypeDefinitionIndex = 24601;

	class SafeSerializationEventArgs : public Il2CppObject
	{
	public:
		::System::Runtime::Serialization::StreamingContext* m_streamingContext; // 0x10
		Il2CppObject* m_serializedStates; // 0x20

		::System::Void .ctor(::System::Runtime::Serialization::StreamingContext* arg)
		{
			((::System::Void(*)(::System::Runtime::Serialization::StreamingContext*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_SAFESERIALIZATIONEVENTARGS_.CTOR_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_SerializedStates()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_SAFESERIALIZATIONEVENTARGS_GET_SERIALIZEDSTATES_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_SAFESERIALIZATIONEVENTARGS_.CTOR_OFFSET))(nullptr);
		}

	};
}

