#pragma once
#include "../../../../unitysdk.h"

#define SYSTEM_RUNTIME_REMOTING_MESSAGING_SERVEROBJECTTERMINATORSINK_.CTOR_OFFSET UNITYSDK_OFFSET(0x91DE6E0)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_SERVEROBJECTTERMINATORSINK_SYNCPROCESSMESSAGE_OFFSET UNITYSDK_OFFSET(0x91F63C0)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_SERVEROBJECTTERMINATORSINK_ASYNCPROCESSMESSAGE_OFFSET UNITYSDK_OFFSET(0x91F6530)

namespace System::Runtime::Remoting::Messaging
{
	inline static constexpr unsigned int ServerObjectTerminatorSink_TypeDefinitionIndex = 24563;

	class ServerObjectTerminatorSink : public Il2CppObject
	{
	public:
		::System::Runtime::Remoting::Messaging::IMessageSink* _nextSink; // 0x10

		::System::Void .ctor(::System::Runtime::Remoting::Messaging::IMessageSink* arg)
		{
			((::System::Void(*)(::System::Runtime::Remoting::Messaging::IMessageSink*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_SERVEROBJECTTERMINATORSINK_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Runtime::Remoting::Messaging::IMessage* SyncProcessMessage(::System::Runtime::Remoting::Messaging::IMessage* arg)
		{
			return (return (::System::Runtime::Remoting::Messaging::IMessage*(*)(::System::Runtime::Remoting::Messaging::IMessage*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_SERVEROBJECTTERMINATORSINK_SYNCPROCESSMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Runtime::Remoting::Messaging::IMessageCtrl* AsyncProcessMessage(::System::Runtime::Remoting::Messaging::IMessage* arg, ::System::Runtime::Remoting::Messaging::IMessageSink* arg)
		{
			return (return (::System::Runtime::Remoting::Messaging::IMessageCtrl*(*)(::System::Runtime::Remoting::Messaging::IMessage*, ::System::Runtime::Remoting::Messaging::IMessageSink*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_SERVEROBJECTTERMINATORSINK_ASYNCPROCESSMESSAGE_OFFSET))(arg, arg, nullptr);
		}

	};
}

