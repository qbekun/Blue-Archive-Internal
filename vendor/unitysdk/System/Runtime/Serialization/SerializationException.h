#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x91F72D0)
#define SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x91F7340)
#define SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x91F7360)
#define SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x91F7380)
#define SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONEXCEPTION_.CCTOR_OFFSET UNITYSDK_OFFSET(0x91F73A0)

namespace System::Runtime::Serialization
{
	inline static constexpr unsigned int SerializationException_TypeDefinitionIndex = 24573;

	class SerializationException : public Il2CppObject
	{
	public:
		::System::String* s_nullMessage; // 0x0

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONEXCEPTION_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONEXCEPTION_.CTOR_OFFSET))(str, nullptr);
		}

		::System::Void .ctor(::System::String* str, ::System::Exception* arg)
		{
			((::System::Void(*)(::System::String*, ::System::Exception*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONEXCEPTION_.CTOR_OFFSET))(str, arg, nullptr);
		}

		::System::Void .ctor(::System::Runtime::Serialization::SerializationInfo* arg, ::System::Runtime::Serialization::StreamingContext* arg)
		{
			((::System::Void(*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONEXCEPTION_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONEXCEPTION_.CCTOR_OFFSET))(nullptr);
		}

	};
}

