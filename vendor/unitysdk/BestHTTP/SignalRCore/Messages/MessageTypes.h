#pragma once
#include "../../../unitysdk.h"

namespace BestHTTP::SignalRCore::Messages { class MessageTypes; }

namespace BestHTTP::SignalRCore::Messages
{
	inline static constexpr unsigned int MessageTypes_TypeDefinitionIndex = 21468;

	class MessageTypes : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::BestHTTP::SignalRCore::Messages::MessageTypes* Handshake; // 0x0
		::BestHTTP::SignalRCore::Messages::MessageTypes* Invocation; // 0x0
		::BestHTTP::SignalRCore::Messages::MessageTypes* StreamItem; // 0x0
		::BestHTTP::SignalRCore::Messages::MessageTypes* Completion; // 0x0
		::BestHTTP::SignalRCore::Messages::MessageTypes* StreamInvocation; // 0x0
		::BestHTTP::SignalRCore::Messages::MessageTypes* CancelInvocation; // 0x0
		::BestHTTP::SignalRCore::Messages::MessageTypes* Ping; // 0x0
		::BestHTTP::SignalRCore::Messages::MessageTypes* Close; // 0x0

	};
}

