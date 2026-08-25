#pragma once
#include "../../../../unitysdk.h"

#define SYSTEM_RUNTIME_REMOTING_MESSAGING_CLIENTCONTEXTTERMINATORSINK_.CTOR_OFFSET UNITYSDK_OFFSET(0x91DE440)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_CLIENTCONTEXTTERMINATORSINK_SYNCPROCESSMESSAGE_OFFSET UNITYSDK_OFFSET(0x91ED4F0)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_CLIENTCONTEXTTERMINATORSINK_ASYNCPROCESSMESSAGE_OFFSET UNITYSDK_OFFSET(0x91ED750)

namespace System::Runtime::Remoting::Messaging
{
	inline static constexpr unsigned int ClientContextTerminatorSink_TypeDefinitionIndex = 24533;

	class ClientContextTerminatorSink : public Il2CppObject
	{
	public:
		::System::Runtime::Remoting::Contexts::Context* _context; // 0x10

		::System::Void .ctor(::System::Runtime::Remoting::Contexts::Context* arg)
		{
			((::System::Void(*)(::System::Runtime::Remoting::Contexts::Context*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_CLIENTCONTEXTTERMINATORSINK_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Runtime::Remoting::Messaging::IMessage* SyncProcessMessage(::System::Runtime::Remoting::Messaging::IMessage* arg)
		{
			return (return (::System::Runtime::Remoting::Messaging::IMessage*(*)(::System::Runtime::Remoting::Messaging::IMessage*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_CLIENTCONTEXTTERMINATORSINK_SYNCPROCESSMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Runtime::Remoting::Messaging::IMessageCtrl* AsyncProcessMessage(::System::Runtime::Remoting::Messaging::IMessage* arg, ::System::Runtime::Remoting::Messaging::IMessageSink* arg)
		{
			return (return (::System::Runtime::Remoting::Messaging::IMessageCtrl*(*)(::System::Runtime::Remoting::Messaging::IMessage*, ::System::Runtime::Remoting::Messaging::IMessageSink*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_CLIENTCONTEXTTERMINATORSINK_ASYNCPROCESSMESSAGE_OFFSET))(arg, arg, nullptr);
		}

	};
}

