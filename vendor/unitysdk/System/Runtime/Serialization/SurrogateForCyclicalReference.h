#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_RUNTIME_SERIALIZATION_SURROGATEFORCYCLICALREFERENCE_GETOBJECTDATA_OFFSET UNITYSDK_OFFSET(0x91FB450)
#define SYSTEM_RUNTIME_SERIALIZATION_SURROGATEFORCYCLICALREFERENCE_SETOBJECTDATA_OFFSET UNITYSDK_OFFSET(0x91FB530)

namespace System::Runtime::Serialization
{
	inline static constexpr unsigned int SurrogateForCyclicalReference_TypeDefinitionIndex = 24590;

	class SurrogateForCyclicalReference : public Il2CppObject
	{
	public:
		::System::Runtime::Serialization::ISerializationSurrogate* innerSurrogate; // 0x10

		::System::Void GetObjectData(::System::Object* arg, ::System::Runtime::Serialization::SerializationInfo* arg, ::System::Runtime::Serialization::StreamingContext* arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_SURROGATEFORCYCLICALREFERENCE_GETOBJECTDATA_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Object* SetObjectData(::System::Object* arg, ::System::Runtime::Serialization::SerializationInfo* arg, ::System::Runtime::Serialization::StreamingContext* arg, ::System::Runtime::Serialization::ISurrogateSelector* arg)
		{
			return (return (::System::Object*(*)(::System::Object*, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext*, ::System::Runtime::Serialization::ISurrogateSelector*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_SURROGATEFORCYCLICALREFERENCE_SETOBJECTDATA_OFFSET))(arg, arg, arg, arg, nullptr);
		}

	};
}

