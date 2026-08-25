#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_RUNTIME_REMOTING_REMOTINGEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x91CD280)
#define SYSTEM_RUNTIME_REMOTING_REMOTINGEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x91C2CC0)
#define SYSTEM_RUNTIME_REMOTING_REMOTINGEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x91CD290)
#define SYSTEM_RUNTIME_REMOTING_REMOTINGEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x91CA2D0)

namespace System::Runtime::Remoting
{
	inline static constexpr unsigned int RemotingException_TypeDefinitionIndex = 24444;

	class RemotingException : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_REMOTINGEXCEPTION_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_REMOTINGEXCEPTION_.CTOR_OFFSET))(str, nullptr);
		}

		::System::Void .ctor(::System::Runtime::Serialization::SerializationInfo* arg, ::System::Runtime::Serialization::StreamingContext* arg)
		{
			((::System::Void(*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_REMOTINGEXCEPTION_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor(::System::String* str, ::System::Exception* arg)
		{
			((::System::Void(*)(::System::String*, ::System::Exception*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_REMOTINGEXCEPTION_.CTOR_OFFSET))(str, arg, nullptr);
		}

	};
}

