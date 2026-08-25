#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONEVENTHANDLER_.CTOR_OFFSET UNITYSDK_OFFSET(0x91F7700)
#define SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONEVENTHANDLER_INVOKE_OFFSET UNITYSDK_OFFSET(0x91F77D0)

namespace System::Runtime::Serialization
{
	inline static constexpr unsigned int SerializationEventHandler_TypeDefinitionIndex = 24577;

	class SerializationEventHandler : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONEVENTHANDLER_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Invoke(::System::Runtime::Serialization::StreamingContext* arg)
		{
			((::System::Void(*)(::System::Runtime::Serialization::StreamingContext*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONEVENTHANDLER_INVOKE_OFFSET))(arg, nullptr);
		}

	};
}

