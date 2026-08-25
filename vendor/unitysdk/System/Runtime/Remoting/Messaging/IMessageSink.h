#pragma once
#include "../../../../unitysdk.h"

#define SYSTEM_RUNTIME_REMOTING_MESSAGING_IMESSAGESINK_SYNCPROCESSMESSAGE_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_IMESSAGESINK_ASYNCPROCESSMESSAGE_OFFSET UNITYSDK_OFFSET(0x000000)

namespace System::Runtime::Remoting::Messaging
{
	inline static constexpr unsigned int IMessageSink_TypeDefinitionIndex = 24545;

	class IMessageSink : public Il2CppObject
	{
	public:
		::System::Runtime::Remoting::Messaging::IMessage* SyncProcessMessage(::System::Runtime::Remoting::Messaging::IMessage* arg)
		{
			return (return (::System::Runtime::Remoting::Messaging::IMessage*(*)(::System::Runtime::Remoting::Messaging::IMessage*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_IMESSAGESINK_SYNCPROCESSMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Runtime::Remoting::Messaging::IMessageCtrl* AsyncProcessMessage(::System::Runtime::Remoting::Messaging::IMessage* arg, ::System::Runtime::Remoting::Messaging::IMessageSink* arg)
		{
			return (return (::System::Runtime::Remoting::Messaging::IMessageCtrl*(*)(::System::Runtime::Remoting::Messaging::IMessage*, ::System::Runtime::Remoting::Messaging::IMessageSink*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_IMESSAGESINK_ASYNCPROCESSMESSAGE_OFFSET))(arg, arg, nullptr);
		}

	};
}

