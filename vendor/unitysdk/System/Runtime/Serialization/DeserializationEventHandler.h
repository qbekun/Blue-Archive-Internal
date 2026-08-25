#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_RUNTIME_SERIALIZATION_DESERIALIZATIONEVENTHANDLER_.CTOR_OFFSET UNITYSDK_OFFSET(0x91F75E0)
#define SYSTEM_RUNTIME_SERIALIZATION_DESERIALIZATIONEVENTHANDLER_INVOKE_OFFSET UNITYSDK_OFFSET(0x91F76F0)

namespace System::Runtime::Serialization
{
	inline static constexpr unsigned int DeserializationEventHandler_TypeDefinitionIndex = 24576;

	class DeserializationEventHandler : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_DESERIALIZATIONEVENTHANDLER_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Invoke(::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_DESERIALIZATIONEVENTHANDLER_INVOKE_OFFSET))(arg, nullptr);
		}

	};
}

