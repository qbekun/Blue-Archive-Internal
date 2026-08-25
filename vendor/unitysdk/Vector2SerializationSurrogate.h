#pragma once
#include "unitysdk.h"

#define VECTOR2SERIALIZATIONSURROGATE_SETOBJECTDATA_OFFSET UNITYSDK_OFFSET(0x1FC6800)
#define VECTOR2SERIALIZATIONSURROGATE_GETOBJECTDATA_OFFSET UNITYSDK_OFFSET(0x1FC6990)
#define VECTOR2SERIALIZATIONSURROGATE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1FC67F0)

	inline static constexpr unsigned int Vector2SerializationSurrogate_TypeDefinitionIndex = 2968;

	class Vector2SerializationSurrogate : public Il2CppObject
	{
	public:
		::System::Object* SetObjectData(::System::Object* arg, ::System::Runtime::Serialization::SerializationInfo* arg2, ::System::Runtime::Serialization::StreamingContext* arg3, ::System::Runtime::Serialization::ISurrogateSelector* arg4)
		{
			return ((::System::Object*(*)(::System::Object*, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext*, ::System::Runtime::Serialization::ISurrogateSelector*, ::PVOID))((::PBYTE)hIl2Cpp + VECTOR2SERIALIZATIONSURROGATE_SETOBJECTDATA_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Void GetObjectData(::System::Object* arg, ::System::Runtime::Serialization::SerializationInfo* arg2, ::System::Runtime::Serialization::StreamingContext* arg3)
		{
			((::System::Void(*)(::System::Object*, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext*, ::PVOID))((::PBYTE)hIl2Cpp + VECTOR2SERIALIZATIONSURROGATE_GETOBJECTDATA_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + VECTOR2SERIALIZATIONSURROGATE_.CTOR_OFFSET))(nullptr);
		}

	};

