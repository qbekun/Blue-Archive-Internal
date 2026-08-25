#pragma once
#include "../../../../unitysdk.h"

#define SYSTEM_RUNTIME_REMOTING_MESSAGING_REMOTINGSURROGATE_GETOBJECTDATA_OFFSET UNITYSDK_OFFSET(0x91F5720)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_REMOTINGSURROGATE_SETOBJECTDATA_OFFSET UNITYSDK_OFFSET(0x91F5860)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_REMOTINGSURROGATE_.CTOR_OFFSET UNITYSDK_OFFSET(0x91F58B0)

namespace System::Runtime::Remoting::Messaging
{
	inline static constexpr unsigned int RemotingSurrogate_TypeDefinitionIndex = 24558;

	class RemotingSurrogate : public Il2CppObject
	{
	public:
		::System::Void GetObjectData(::System::Object* arg, ::System::Runtime::Serialization::SerializationInfo* arg, ::System::Runtime::Serialization::StreamingContext* arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_REMOTINGSURROGATE_GETOBJECTDATA_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Object* SetObjectData(::System::Object* arg, ::System::Runtime::Serialization::SerializationInfo* arg, ::System::Runtime::Serialization::StreamingContext* arg, ::System::Runtime::Serialization::ISurrogateSelector* arg)
		{
			return (return (::System::Object*(*)(::System::Object*, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext*, ::System::Runtime::Serialization::ISurrogateSelector*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_REMOTINGSURROGATE_SETOBJECTDATA_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_REMOTINGSURROGATE_.CTOR_OFFSET))(nullptr);
		}

	};
}

