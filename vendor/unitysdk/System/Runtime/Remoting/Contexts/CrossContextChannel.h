#pragma once
#include "../../../../unitysdk.h"

#define SYSTEM_RUNTIME_REMOTING_CONTEXTS_CROSSCONTEXTCHANNEL_SYNCPROCESSMESSAGE_OFFSET UNITYSDK_OFFSET(0x91DFB40)
#define SYSTEM_RUNTIME_REMOTING_CONTEXTS_CROSSCONTEXTCHANNEL_ASYNCPROCESSMESSAGE_OFFSET UNITYSDK_OFFSET(0x91E0020)
#define SYSTEM_RUNTIME_REMOTING_CONTEXTS_CROSSCONTEXTCHANNEL_.CTOR_OFFSET UNITYSDK_OFFSET(0x91E05E0)

namespace System::Runtime::Remoting::Contexts
{
	inline static constexpr unsigned int CrossContextChannel_TypeDefinitionIndex = 24478;

	class CrossContextChannel : public Il2CppObject
	{
	public:
		::System::Runtime::Remoting::Messaging::IMessage* SyncProcessMessage(::System::Runtime::Remoting::Messaging::IMessage* arg)
		{
			return (return (::System::Runtime::Remoting::Messaging::IMessage*(*)(::System::Runtime::Remoting::Messaging::IMessage*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_CONTEXTS_CROSSCONTEXTCHANNEL_SYNCPROCESSMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Runtime::Remoting::Messaging::IMessageCtrl* AsyncProcessMessage(::System::Runtime::Remoting::Messaging::IMessage* arg, ::System::Runtime::Remoting::Messaging::IMessageSink* arg)
		{
			return (return (::System::Runtime::Remoting::Messaging::IMessageCtrl*(*)(::System::Runtime::Remoting::Messaging::IMessage*, ::System::Runtime::Remoting::Messaging::IMessageSink*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_CONTEXTS_CROSSCONTEXTCHANNEL_ASYNCPROCESSMESSAGE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_CONTEXTS_CROSSCONTEXTCHANNEL_.CTOR_OFFSET))(nullptr);
		}

	};
}

