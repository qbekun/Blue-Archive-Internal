#pragma once
#include "../../../../unitysdk.h"

#define SYSTEM_RUNTIME_REMOTING_CHANNELS_CADSERIALIZER_DESERIALIZEMESSAGE_OFFSET UNITYSDK_OFFSET(0x91E5150)
#define SYSTEM_RUNTIME_REMOTING_CHANNELS_CADSERIALIZER_SERIALIZEMESSAGE_OFFSET UNITYSDK_OFFSET(0x91E4A10)
#define SYSTEM_RUNTIME_REMOTING_CHANNELS_CADSERIALIZER_DESERIALIZEOBJECTSAFE_OFFSET UNITYSDK_OFFSET(0x91E5910)
#define SYSTEM_RUNTIME_REMOTING_CHANNELS_CADSERIALIZER_SERIALIZEOBJECT_OFFSET UNITYSDK_OFFSET(0x91E5A30)
#define SYSTEM_RUNTIME_REMOTING_CHANNELS_CADSERIALIZER_DESERIALIZEOBJECT_OFFSET UNITYSDK_OFFSET(0x91E59A0)

namespace System::Runtime::Remoting::Channels
{
	inline static constexpr unsigned int CADSerializer_TypeDefinitionIndex = 24494;

	class CADSerializer : public Il2CppObject
	{
	public:
		::System::Runtime::Remoting::Messaging::IMessage* DeserializeMessage(::System::IO::MemoryStream* arg, ::System::Runtime::Remoting::Messaging::IMethodCallMessage* arg)
		{
			return (return (::System::Runtime::Remoting::Messaging::IMessage*(*)(::System::IO::MemoryStream*, ::System::Runtime::Remoting::Messaging::IMethodCallMessage*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_CHANNELS_CADSERIALIZER_DESERIALIZEMESSAGE_OFFSET))(arg, arg, nullptr);
		}

		::System::IO::MemoryStream* SerializeMessage(::System::Runtime::Remoting::Messaging::IMessage* arg)
		{
			return (return (::System::IO::MemoryStream*(*)(::System::Runtime::Remoting::Messaging::IMessage*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_CHANNELS_CADSERIALIZER_SERIALIZEMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Object* DeserializeObjectSafe(::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Object*(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_CHANNELS_CADSERIALIZER_DESERIALIZEOBJECTSAFE_OFFSET))(arg, nullptr);
		}

		::System::IO::MemoryStream* SerializeObject(::System::Object* arg)
		{
			return (return (::System::IO::MemoryStream*(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_CHANNELS_CADSERIALIZER_SERIALIZEOBJECT_OFFSET))(arg, nullptr);
		}

		::System::Object* DeserializeObject(::System::IO::MemoryStream* arg)
		{
			return (return (::System::Object*(*)(::System::IO::MemoryStream*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_CHANNELS_CADSERIALIZER_DESERIALIZEOBJECT_OFFSET))(arg, nullptr);
		}

	};
}

