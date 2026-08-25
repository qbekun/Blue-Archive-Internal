#pragma once
#include "../unitysdk.h"

#define SYSTEM_URIFORMATEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9AD2BA0)
#define SYSTEM_URIFORMATEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9AD04F0)
#define SYSTEM_URIFORMATEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9AD2BB0)
#define SYSTEM_URIFORMATEXCEPTION_SYSTEM.RUNTIME.SERIALIZATION.ISERIALIZABLE.GETOBJECTDATA_OFFSET UNITYSDK_OFFSET(0x9AD2BD0)

namespace System
{
	inline static constexpr unsigned int UriFormatException_TypeDefinitionIndex = 29176;

	class UriFormatException : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_URIFORMATEXCEPTION_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_URIFORMATEXCEPTION_.CTOR_OFFSET))(str, nullptr);
		}

		::System::Void .ctor(::System::Runtime::Serialization::SerializationInfo* arg, ::System::Runtime::Serialization::StreamingContext* arg)
		{
			((::System::Void(*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_URIFORMATEXCEPTION_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void System.Runtime.Serialization.ISerializable.GetObjectData(::System::Runtime::Serialization::SerializationInfo* arg, ::System::Runtime::Serialization::StreamingContext* arg)
		{
			((::System::Void(*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_URIFORMATEXCEPTION_SYSTEM.RUNTIME.SERIALIZATION.ISERIALIZABLE.GETOBJECTDATA_OFFSET))(arg, arg, nullptr);
		}

	};
}

