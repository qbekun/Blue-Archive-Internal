#pragma once
#include "../../../../unitysdk.h"

#define SYSTEM_RUNTIME_REMOTING_CHANNELS_ASYNCREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0x91E55F0)

namespace System::Runtime::Remoting::Channels
{
	inline static constexpr unsigned int AsyncRequest_TypeDefinitionIndex = 24495;

	class AsyncRequest : public Il2CppObject
	{
	public:
		::System::Runtime::Remoting::Messaging::IMessageSink* ReplySink; // 0x10
		::System::Runtime::Remoting::Messaging::IMessage* MsgRequest; // 0x18

		::System::Void .ctor(::System::Runtime::Remoting::Messaging::IMessage* arg, ::System::Runtime::Remoting::Messaging::IMessageSink* arg)
		{
			((::System::Void(*)(::System::Runtime::Remoting::Messaging::IMessage*, ::System::Runtime::Remoting::Messaging::IMessageSink*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_CHANNELS_ASYNCREQUEST_.CTOR_OFFSET))(arg, arg, nullptr);
		}

	};
}

