#pragma once
#include "../../unitysdk.h"

#define SYSTEM_REFLECTION_STRONGNAMEKEYPAIR_.CTOR_OFFSET UNITYSDK_OFFSET(0x9251830)
#define SYSTEM_REFLECTION_STRONGNAMEKEYPAIR_SYSTEM.RUNTIME.SERIALIZATION.ISERIALIZABLE.GETOBJECTDATA_OFFSET UNITYSDK_OFFSET(0x9251A30)
#define SYSTEM_REFLECTION_STRONGNAMEKEYPAIR_SYSTEM.RUNTIME.SERIALIZATION.IDESERIALIZATIONCALLBACK.ONDESERIALIZATION_OFFSET UNITYSDK_OFFSET(0x9251B60)

namespace System::Reflection
{
	inline static constexpr unsigned int StrongNameKeyPair_TypeDefinitionIndex = 24926;

	class StrongNameKeyPair : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* _publicKey; // 0x10
		::System::String* _keyPairContainer; // 0x18
		::System::Boolean _keyPairExported; // 0x20
		::Il2CppArray<::System::Object*>* _keyPairArray; // 0x28

		::System::Void .ctor(::System::Runtime::Serialization::SerializationInfo* arg, ::System::Runtime::Serialization::StreamingContext* arg)
		{
			((::System::Void(*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_STRONGNAMEKEYPAIR_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void System.Runtime.Serialization.ISerializable.GetObjectData(::System::Runtime::Serialization::SerializationInfo* arg, ::System::Runtime::Serialization::StreamingContext* arg)
		{
			((::System::Void(*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_STRONGNAMEKEYPAIR_SYSTEM.RUNTIME.SERIALIZATION.ISERIALIZABLE.GETOBJECTDATA_OFFSET))(arg, arg, nullptr);
		}

		::System::Void System.Runtime.Serialization.IDeserializationCallback.OnDeserialization(::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_STRONGNAMEKEYPAIR_SYSTEM.RUNTIME.SERIALIZATION.IDESERIALIZATIONCALLBACK.ONDESERIALIZATION_OFFSET))(arg, nullptr);
		}

	};
}

