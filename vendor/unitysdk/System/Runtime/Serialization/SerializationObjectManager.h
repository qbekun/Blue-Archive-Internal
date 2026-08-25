#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONOBJECTMANAGER_.CTOR_OFFSET UNITYSDK_OFFSET(0x91F86D0)
#define SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONOBJECTMANAGER_REGISTEROBJECT_OFFSET UNITYSDK_OFFSET(0x91F8770)
#define SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONOBJECTMANAGER_RAISEONSERIALIZEDEVENT_OFFSET UNITYSDK_OFFSET(0x91F8920)
#define SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONOBJECTMANAGER_ADDONSERIALIZED_OFFSET UNITYSDK_OFFSET(0x91F8890)

namespace System::Runtime::Serialization
{
	inline static constexpr unsigned int SerializationObjectManager_TypeDefinitionIndex = 24586;

	class SerializationObjectManager : public Il2CppObject
	{
	public:
		Il2CppObject* _objectSeenTable; // 0x10
		::System::Runtime::Serialization::StreamingContext* _context; // 0x18
		::System::Runtime::Serialization::SerializationEventHandler* _onSerializedHandler; // 0x28

		::System::Void .ctor(::System::Runtime::Serialization::StreamingContext* arg)
		{
			((::System::Void(*)(::System::Runtime::Serialization::StreamingContext*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONOBJECTMANAGER_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void RegisterObject(::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONOBJECTMANAGER_REGISTEROBJECT_OFFSET))(arg, nullptr);
		}

		::System::Void RaiseOnSerializedEvent()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONOBJECTMANAGER_RAISEONSERIALIZEDEVENT_OFFSET))(nullptr);
		}

		::System::Void AddOnSerialized(::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONOBJECTMANAGER_ADDONSERIALIZED_OFFSET))(arg, nullptr);
		}

	};
}

