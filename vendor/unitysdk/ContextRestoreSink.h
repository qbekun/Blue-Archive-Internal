#pragma once
#include "unitysdk.h"

#define CONTEXTRESTORESINK_.CTOR_OFFSET UNITYSDK_OFFSET(0x91E0580)
#define CONTEXTRESTORESINK_SYNCPROCESSMESSAGE_OFFSET UNITYSDK_OFFSET(0x91E05F0)
#define CONTEXTRESTORESINK_ASYNCPROCESSMESSAGE_OFFSET UNITYSDK_OFFSET(0x91E0900)

	inline static constexpr unsigned int ContextRestoreSink_TypeDefinitionIndex = 24477;

	class ContextRestoreSink : public Il2CppObject
	{
	public:
		::System::Runtime::Remoting::Messaging::IMessageSink* _next; // 0x10
		::System::Runtime::Remoting::Contexts::Context* _context; // 0x18
		::System::Runtime::Remoting::Messaging::IMessage* _call; // 0x20

		::System::Void .ctor(::System::Runtime::Remoting::Messaging::IMessageSink* arg, ::System::Runtime::Remoting::Contexts::Context* arg, ::System::Runtime::Remoting::Messaging::IMessage* arg)
		{
			((::System::Void(*)(::System::Runtime::Remoting::Messaging::IMessageSink*, ::System::Runtime::Remoting::Contexts::Context*, ::System::Runtime::Remoting::Messaging::IMessage*, ::PVOID))((::PBYTE)hIl2Cpp + CONTEXTRESTORESINK_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Runtime::Remoting::Messaging::IMessage* SyncProcessMessage(::System::Runtime::Remoting::Messaging::IMessage* arg)
		{
			return (return (::System::Runtime::Remoting::Messaging::IMessage*(*)(::System::Runtime::Remoting::Messaging::IMessage*, ::PVOID))((::PBYTE)hIl2Cpp + CONTEXTRESTORESINK_SYNCPROCESSMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Runtime::Remoting::Messaging::IMessageCtrl* AsyncProcessMessage(::System::Runtime::Remoting::Messaging::IMessage* arg, ::System::Runtime::Remoting::Messaging::IMessageSink* arg)
		{
			return (return (::System::Runtime::Remoting::Messaging::IMessageCtrl*(*)(::System::Runtime::Remoting::Messaging::IMessage*, ::System::Runtime::Remoting::Messaging::IMessageSink*, ::PVOID))((::PBYTE)hIl2Cpp + CONTEXTRESTORESINK_ASYNCPROCESSMESSAGE_OFFSET))(arg, arg, nullptr);
		}

	};

