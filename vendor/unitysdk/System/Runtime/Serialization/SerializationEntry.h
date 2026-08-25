#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONENTRY_.CTOR_OFFSET UNITYSDK_OFFSET(0x91F7400)
#define SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONENTRY_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x91F7450)
#define SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONENTRY_GET_NAME_OFFSET UNITYSDK_OFFSET(0x91F7460)

namespace System::Runtime::Serialization
{
	inline static constexpr unsigned int SerializationEntry_TypeDefinitionIndex = 24574;

	class SerializationEntry : public Il2CppObject
	{
	public:
		::System::String* _name; // 0x10
		::System::Object* _value; // 0x18
		::System::Type* _type; // 0x20

		::System::Void .ctor(::System::String* str, ::System::Object* arg, ::System::Type* arg)
		{
			((::System::Void(*)(::System::String*, ::System::Object*, ::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONENTRY_.CTOR_OFFSET))(str, arg, arg, nullptr);
		}

		::System::Object* get_Value()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONENTRY_GET_VALUE_OFFSET))(nullptr);
		}

		::System::String* get_Name()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONENTRY_GET_NAME_OFFSET))(nullptr);
		}

	};
}

