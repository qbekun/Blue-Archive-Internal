#pragma once
#include "../../../unitysdk.h"

namespace BestHTTP::SignalRCore::Messages { class MessageTypes; }

#define BESTHTTP_SIGNALRCORE_MESSAGES_CLOSEMESSAGE_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x6550B0)

namespace BestHTTP::SignalRCore::Messages
{
	inline static constexpr unsigned int CloseMessage_TypeDefinitionIndex = 21466;

	class CloseMessage : public Il2CppObject
	{
	public:
		::BestHTTP::SignalRCore::Messages::MessageTypes* get_type()
		{
			return (return (::BestHTTP::SignalRCore::Messages::MessageTypes*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALRCORE_MESSAGES_CLOSEMESSAGE_GET_TYPE_OFFSET))(nullptr);
		}

	};
}

