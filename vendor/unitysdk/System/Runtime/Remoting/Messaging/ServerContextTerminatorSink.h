#pragma once
#include "../../../../unitysdk.h"

#define SYSTEM_RUNTIME_REMOTING_MESSAGING_SERVERCONTEXTTERMINATORSINK_SYNCPROCESSMESSAGE_OFFSET UNITYSDK_OFFSET(0x91F61F0)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_SERVERCONTEXTTERMINATORSINK_ASYNCPROCESSMESSAGE_OFFSET UNITYSDK_OFFSET(0x91F6300)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_SERVERCONTEXTTERMINATORSINK_.CTOR_OFFSET UNITYSDK_OFFSET(0x91DE430)

namespace System::Runtime::Remoting::Messaging
{
	inline static constexpr unsigned int ServerContextTerminatorSink_TypeDefinitionIndex = 24562;

	class ServerContextTerminatorSink : public Il2CppObject
	{
	public:
		::System::Runtime::Remoting::Messaging::IMessage* SyncProcessMessage(::System::Runtime::Remoting::Messaging::IMessage* arg)
		{
			return (return (::System::Runtime::Remoting::Messaging::IMessage*(*)(::System::Runtime::Remoting::Messaging::IMessage*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_SERVERCONTEXTTERMINATORSINK_SYNCPROCESSMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Runtime::Remoting::Messaging::IMessageCtrl* AsyncProcessMessage(::System::Runtime::Remoting::Messaging::IMessage* arg, ::System::Runtime::Remoting::Messaging::IMessageSink* arg)
		{
			return (return (::System::Runtime::Remoting::Messaging::IMessageCtrl*(*)(::System::Runtime::Remoting::Messaging::IMessage*, ::System::Runtime::Remoting::Messaging::IMessageSink*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_SERVERCONTEXTTERMINATORSINK_ASYNCPROCESSMESSAGE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_SERVERCONTEXTTERMINATORSINK_.CTOR_OFFSET))(nullptr);
		}

	};
}

