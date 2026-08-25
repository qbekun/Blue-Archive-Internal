#pragma once
#include "../../../../unitysdk.h"

#define SYSTEM_RUNTIME_REMOTING_CHANNELS_ICHANNELSENDER_CREATEMESSAGESINK_OFFSET UNITYSDK_OFFSET(0x000000)

namespace System::Runtime::Remoting::Channels
{
	inline static constexpr unsigned int IChannelSender_TypeDefinitionIndex = 24499;

	class IChannelSender : public Il2CppObject
	{
	public:
		::System::Runtime::Remoting::Messaging::IMessageSink* CreateMessageSink(::System::String* str, ::System::Object* arg, ::System::String&* arg)
		{
			return (return (::System::Runtime::Remoting::Messaging::IMessageSink*(*)(::System::String*, ::System::Object*, ::System::String&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_CHANNELS_ICHANNELSENDER_CREATEMESSAGESINK_OFFSET))(str, arg, arg, nullptr);
		}

	};
}

