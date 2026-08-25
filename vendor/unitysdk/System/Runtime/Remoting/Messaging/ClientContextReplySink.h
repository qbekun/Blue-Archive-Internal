#pragma once
#include "../../../../unitysdk.h"

#define SYSTEM_RUNTIME_REMOTING_MESSAGING_CLIENTCONTEXTREPLYSINK_.CTOR_OFFSET UNITYSDK_OFFSET(0x91EDA90)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_CLIENTCONTEXTREPLYSINK_SYNCPROCESSMESSAGE_OFFSET UNITYSDK_OFFSET(0x91EDAE0)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_CLIENTCONTEXTREPLYSINK_ASYNCPROCESSMESSAGE_OFFSET UNITYSDK_OFFSET(0x91EDC10)

namespace System::Runtime::Remoting::Messaging
{
	inline static constexpr unsigned int ClientContextReplySink_TypeDefinitionIndex = 24534;

	class ClientContextReplySink : public Il2CppObject
	{
	public:
		::System::Runtime::Remoting::Messaging::IMessageSink* _replySink; // 0x10
		::System::Runtime::Remoting::Contexts::Context* _context; // 0x18

		::System::Void .ctor(::System::Runtime::Remoting::Contexts::Context* arg, ::System::Runtime::Remoting::Messaging::IMessageSink* arg)
		{
			((::System::Void(*)(::System::Runtime::Remoting::Contexts::Context*, ::System::Runtime::Remoting::Messaging::IMessageSink*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_CLIENTCONTEXTREPLYSINK_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Runtime::Remoting::Messaging::IMessage* SyncProcessMessage(::System::Runtime::Remoting::Messaging::IMessage* arg)
		{
			return (return (::System::Runtime::Remoting::Messaging::IMessage*(*)(::System::Runtime::Remoting::Messaging::IMessage*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_CLIENTCONTEXTREPLYSINK_SYNCPROCESSMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Runtime::Remoting::Messaging::IMessageCtrl* AsyncProcessMessage(::System::Runtime::Remoting::Messaging::IMessage* arg, ::System::Runtime::Remoting::Messaging::IMessageSink* arg)
		{
			return (return (::System::Runtime::Remoting::Messaging::IMessageCtrl*(*)(::System::Runtime::Remoting::Messaging::IMessage*, ::System::Runtime::Remoting::Messaging::IMessageSink*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_CLIENTCONTEXTREPLYSINK_ASYNCPROCESSMESSAGE_OFFSET))(arg, arg, nullptr);
		}

	};
}

