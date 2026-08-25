#pragma once
#include "unitysdk.h"

#define VECTOR3SERIALIZATIONSURROGATE_GETOBJECTDATA_OFFSET UNITYSDK_OFFSET(0x1FC6A50)
#define VECTOR3SERIALIZATIONSURROGATE_SETOBJECTDATA_OFFSET UNITYSDK_OFFSET(0x1FC6B40)
#define VECTOR3SERIALIZATIONSURROGATE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1FC67E0)

	inline static constexpr unsigned int Vector3SerializationSurrogate_TypeDefinitionIndex = 2969;

	class Vector3SerializationSurrogate : public Il2CppObject
	{
	public:
		::System::Void GetObjectData(::System::Object* arg, ::System::Runtime::Serialization::SerializationInfo* arg2, ::System::Runtime::Serialization::StreamingContext* arg3)
		{
			((::System::Void(*)(::System::Object*, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext*, ::PVOID))((::PBYTE)hIl2Cpp + VECTOR3SERIALIZATIONSURROGATE_GETOBJECTDATA_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Object* SetObjectData(::System::Object* arg, ::System::Runtime::Serialization::SerializationInfo* arg2, ::System::Runtime::Serialization::StreamingContext* arg3, ::System::Runtime::Serialization::ISurrogateSelector* arg4)
		{
			return ((::System::Object*(*)(::System::Object*, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext*, ::System::Runtime::Serialization::ISurrogateSelector*, ::PVOID))((::PBYTE)hIl2Cpp + VECTOR3SERIALIZATIONSURROGATE_SETOBJECTDATA_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + VECTOR3SERIALIZATIONSURROGATE_.CTOR_OFFSET))(nullptr);
		}

	};

