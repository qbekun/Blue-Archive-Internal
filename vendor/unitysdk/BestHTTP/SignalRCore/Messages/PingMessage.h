#pragma once
#include "../../../unitysdk.h"

namespace BestHTTP::SignalRCore::Messages { class MessageTypes; }

#define BESTHTTP_SIGNALRCORE_MESSAGES_PINGMESSAGE_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x6550A0)

namespace BestHTTP::SignalRCore::Messages
{
	inline static constexpr unsigned int PingMessage_TypeDefinitionIndex = 21465;

	class PingMessage : public Il2CppObject
	{
	public:
		::BestHTTP::SignalRCore::Messages::MessageTypes* get_type()
		{
			return (return (::BestHTTP::SignalRCore::Messages::MessageTypes*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALRCORE_MESSAGES_PINGMESSAGE_GET_TYPE_OFFSET))(nullptr);
		}

	};
}

