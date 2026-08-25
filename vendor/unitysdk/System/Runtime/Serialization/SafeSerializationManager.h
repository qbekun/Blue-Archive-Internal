#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_RUNTIME_SERIALIZATION_SAFESERIALIZATIONMANAGER_.CTOR_OFFSET UNITYSDK_OFFSET(0x92013B0)
#define SYSTEM_RUNTIME_SERIALIZATION_SAFESERIALIZATIONMANAGER_.CTOR_OFFSET UNITYSDK_OFFSET(0x92013C0)
#define SYSTEM_RUNTIME_SERIALIZATION_SAFESERIALIZATIONMANAGER_GET_ISACTIVE_OFFSET UNITYSDK_OFFSET(0x9201930)
#define SYSTEM_RUNTIME_SERIALIZATION_SAFESERIALIZATIONMANAGER_COMPLETESERIALIZATION_OFFSET UNITYSDK_OFFSET(0x9201940)
#define SYSTEM_RUNTIME_SERIALIZATION_SAFESERIALIZATIONMANAGER_COMPLETEDESERIALIZATION_OFFSET UNITYSDK_OFFSET(0x9201CD0)
#define SYSTEM_RUNTIME_SERIALIZATION_SAFESERIALIZATIONMANAGER_SYSTEM.RUNTIME.SERIALIZATION.ISERIALIZABLE.GETOBJECTDATA_OFFSET UNITYSDK_OFFSET(0x9202070)
#define SYSTEM_RUNTIME_SERIALIZATION_SAFESERIALIZATIONMANAGER_SYSTEM.RUNTIME.SERIALIZATION.IOBJECTREFERENCE.GETREALOBJECT_OFFSET UNITYSDK_OFFSET(0x9202110)
#define SYSTEM_RUNTIME_SERIALIZATION_SAFESERIALIZATIONMANAGER_ONDESERIALIZED_OFFSET UNITYSDK_OFFSET(0x9202420)

namespace System::Runtime::Serialization
{
	inline static constexpr unsigned int SafeSerializationManager_TypeDefinitionIndex = 24603;

	class SafeSerializationManager : public Il2CppObject
	{
	public:
		Il2CppObject* m_serializedStates; // 0x10
		::System::Runtime::Serialization::SerializationInfo* m_savedSerializationInfo; // 0x18
		::System::Object* m_realObject; // 0x20
		::System::RuntimeType* m_realType; // 0x28
		Il2CppObject* SerializeObjectState; // 0x30
		::System::String* RealTypeSerializationName; // 0x0

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_SAFESERIALIZATIONMANAGER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Runtime::Serialization::SerializationInfo* arg, ::System::Runtime::Serialization::StreamingContext* arg)
		{
			((::System::Void(*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_SAFESERIALIZATIONMANAGER_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean get_IsActive()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_SAFESERIALIZATIONMANAGER_GET_ISACTIVE_OFFSET))(nullptr);
		}

		::System::Void CompleteSerialization(::System::Object* arg, ::System::Runtime::Serialization::SerializationInfo* arg, ::System::Runtime::Serialization::StreamingContext* arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_SAFESERIALIZATIONMANAGER_COMPLETESERIALIZATION_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void CompleteDeserialization(::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_SAFESERIALIZATIONMANAGER_COMPLETEDESERIALIZATION_OFFSET))(arg, nullptr);
		}

		::System::Void System.Runtime.Serialization.ISerializable.GetObjectData(::System::Runtime::Serialization::SerializationInfo* arg, ::System::Runtime::Serialization::StreamingContext* arg)
		{
			((::System::Void(*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_SAFESERIALIZATIONMANAGER_SYSTEM.RUNTIME.SERIALIZATION.ISERIALIZABLE.GETOBJECTDATA_OFFSET))(arg, arg, nullptr);
		}

		::System::Object* System.Runtime.Serialization.IObjectReference.GetRealObject(::System::Runtime::Serialization::StreamingContext* arg)
		{
			return (return (::System::Object*(*)(::System::Runtime::Serialization::StreamingContext*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_SAFESERIALIZATIONMANAGER_SYSTEM.RUNTIME.SERIALIZATION.IOBJECTREFERENCE.GETREALOBJECT_OFFSET))(arg, nullptr);
		}

		::System::Void OnDeserialized(::System::Runtime::Serialization::StreamingContext* arg)
		{
			((::System::Void(*)(::System::Runtime::Serialization::StreamingContext*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_SAFESERIALIZATIONMANAGER_ONDESERIALIZED_OFFSET))(arg, nullptr);
		}

	};
}

