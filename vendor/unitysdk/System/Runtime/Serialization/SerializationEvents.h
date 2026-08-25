#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONEVENTS_.CTOR_OFFSET UNITYSDK_OFFSET(0x91F7CF0)
#define SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONEVENTS_GETMETHODSWITHATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x91F7E20)
#define SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONEVENTS_GET_HASONSERIALIZINGEVENTS_OFFSET UNITYSDK_OFFSET(0x91F8050)
#define SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONEVENTS_INVOKEONSERIALIZING_OFFSET UNITYSDK_OFFSET(0x91F8070)
#define SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONEVENTS_INVOKEONDESERIALIZING_OFFSET UNITYSDK_OFFSET(0x91F80F0)
#define SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONEVENTS_INVOKEONDESERIALIZED_OFFSET UNITYSDK_OFFSET(0x91F8130)
#define SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONEVENTS_ADDONSERIALIZED_OFFSET UNITYSDK_OFFSET(0x91F8170)
#define SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONEVENTS_ADDONDESERIALIZED_OFFSET UNITYSDK_OFFSET(0x91F83D0)
#define SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONEVENTS_INVOKEONDELEGATE_OFFSET UNITYSDK_OFFSET(0x91F80B0)
#define SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONEVENTS_ADDONDELEGATE_OFFSET UNITYSDK_OFFSET(0x91F8190)

namespace System::Runtime::Serialization
{
	inline static constexpr unsigned int SerializationEvents_TypeDefinitionIndex = 24583;

	class SerializationEvents : public Il2CppObject
	{
	public:
		Il2CppObject* _onSerializingMethods; // 0x10
		Il2CppObject* _onSerializedMethods; // 0x18
		Il2CppObject* _onDeserializingMethods; // 0x20
		Il2CppObject* _onDeserializedMethods; // 0x28

		::System::Void .ctor(::System::Type* arg)
		{
			((::System::Void(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONEVENTS_.CTOR_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetMethodsWithAttribute(::System::Type* arg, ::System::Type* arg)
		{
			return (return (Il2CppObject*(*)(::System::Type*, ::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONEVENTS_GETMETHODSWITHATTRIBUTE_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean get_HasOnSerializingEvents()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONEVENTS_GET_HASONSERIALIZINGEVENTS_OFFSET))(nullptr);
		}

		::System::Void InvokeOnSerializing(::System::Object* arg, ::System::Runtime::Serialization::StreamingContext* arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Runtime::Serialization::StreamingContext*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONEVENTS_INVOKEONSERIALIZING_OFFSET))(arg, arg, nullptr);
		}

		::System::Void InvokeOnDeserializing(::System::Object* arg, ::System::Runtime::Serialization::StreamingContext* arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Runtime::Serialization::StreamingContext*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONEVENTS_INVOKEONDESERIALIZING_OFFSET))(arg, arg, nullptr);
		}

		::System::Void InvokeOnDeserialized(::System::Object* arg, ::System::Runtime::Serialization::StreamingContext* arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Runtime::Serialization::StreamingContext*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONEVENTS_INVOKEONDESERIALIZED_OFFSET))(arg, arg, nullptr);
		}

		::System::Runtime::Serialization::SerializationEventHandler* AddOnSerialized(::System::Object* arg, ::System::Runtime::Serialization::SerializationEventHandler* arg)
		{
			return (return (::System::Runtime::Serialization::SerializationEventHandler*(*)(::System::Object*, ::System::Runtime::Serialization::SerializationEventHandler*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONEVENTS_ADDONSERIALIZED_OFFSET))(arg, arg, nullptr);
		}

		::System::Runtime::Serialization::SerializationEventHandler* AddOnDeserialized(::System::Object* arg, ::System::Runtime::Serialization::SerializationEventHandler* arg)
		{
			return (return (::System::Runtime::Serialization::SerializationEventHandler*(*)(::System::Object*, ::System::Runtime::Serialization::SerializationEventHandler*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONEVENTS_ADDONDESERIALIZED_OFFSET))(arg, arg, nullptr);
		}

		::System::Void InvokeOnDelegate(::System::Object* arg, ::System::Runtime::Serialization::StreamingContext* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Runtime::Serialization::StreamingContext*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONEVENTS_INVOKEONDELEGATE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Runtime::Serialization::SerializationEventHandler* AddOnDelegate(::System::Object* arg, ::System::Runtime::Serialization::SerializationEventHandler* arg, Il2CppObject* arg)
		{
			return (return (::System::Runtime::Serialization::SerializationEventHandler*(*)(::System::Object*, ::System::Runtime::Serialization::SerializationEventHandler*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONEVENTS_ADDONDELEGATE_OFFSET))(arg, arg, arg, nullptr);
		}

	};
}

