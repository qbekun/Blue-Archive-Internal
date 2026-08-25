#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_RUNTIME_SERIALIZATION_ISERIALIZATIONSURROGATE_GETOBJECTDATA_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_RUNTIME_SERIALIZATION_ISERIALIZATIONSURROGATE_SETOBJECTDATA_OFFSET UNITYSDK_OFFSET(0x000000)

namespace System::Runtime::Serialization
{
	inline static constexpr unsigned int ISerializationSurrogate_TypeDefinitionIndex = 24579;

	class ISerializationSurrogate : public Il2CppObject
	{
	public:
		::System::Void GetObjectData(::System::Object* arg, ::System::Runtime::Serialization::SerializationInfo* arg, ::System::Runtime::Serialization::StreamingContext* arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_ISERIALIZATIONSURROGATE_GETOBJECTDATA_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Object* SetObjectData(::System::Object* arg, ::System::Runtime::Serialization::SerializationInfo* arg, ::System::Runtime::Serialization::StreamingContext* arg, ::System::Runtime::Serialization::ISurrogateSelector* arg)
		{
			return (return (::System::Object*(*)(::System::Object*, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext*, ::System::Runtime::Serialization::ISurrogateSelector*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_ISERIALIZATIONSURROGATE_SETOBJECTDATA_OFFSET))(arg, arg, arg, arg, nullptr);
		}

	};
}

