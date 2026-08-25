#pragma once
#include "../../../../unitysdk.h"

#define SYSTEM_RUNTIME_REMOTING_MESSAGING_ENVOYTERMINATORSINK_SYNCPROCESSMESSAGE_OFFSET UNITYSDK_OFFSET(0x91F0410)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_ENVOYTERMINATORSINK_ASYNCPROCESSMESSAGE_OFFSET UNITYSDK_OFFSET(0x91F04D0)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_ENVOYTERMINATORSINK_.CTOR_OFFSET UNITYSDK_OFFSET(0x91F0590)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_ENVOYTERMINATORSINK_.CCTOR_OFFSET UNITYSDK_OFFSET(0x91F05A0)

namespace System::Runtime::Remoting::Messaging
{
	inline static constexpr unsigned int EnvoyTerminatorSink_TypeDefinitionIndex = 24538;

	class EnvoyTerminatorSink : public Il2CppObject
	{
	public:
		::System::Runtime::Remoting::Messaging::EnvoyTerminatorSink* Instance; // 0x0

		::System::Runtime::Remoting::Messaging::IMessage* SyncProcessMessage(::System::Runtime::Remoting::Messaging::IMessage* arg)
		{
			return (return (::System::Runtime::Remoting::Messaging::IMessage*(*)(::System::Runtime::Remoting::Messaging::IMessage*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_ENVOYTERMINATORSINK_SYNCPROCESSMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Runtime::Remoting::Messaging::IMessageCtrl* AsyncProcessMessage(::System::Runtime::Remoting::Messaging::IMessage* arg, ::System::Runtime::Remoting::Messaging::IMessageSink* arg)
		{
			return (return (::System::Runtime::Remoting::Messaging::IMessageCtrl*(*)(::System::Runtime::Remoting::Messaging::IMessage*, ::System::Runtime::Remoting::Messaging::IMessageSink*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_ENVOYTERMINATORSINK_ASYNCPROCESSMESSAGE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_ENVOYTERMINATORSINK_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_ENVOYTERMINATORSINK_.CCTOR_OFFSET))(nullptr);
		}

	};
}

