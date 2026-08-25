#pragma once
#include "../../unitysdk.h"

namespace BestHTTP::SignalR { class TransportTypes; }

namespace BestHTTP::SignalR
{
	inline static constexpr unsigned int TransportTypes_TypeDefinitionIndex = 21482;

	class TransportTypes : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::BestHTTP::SignalR::TransportTypes* WebSocket; // 0x0
		::BestHTTP::SignalR::TransportTypes* ServerSentEvents; // 0x0
		::BestHTTP::SignalR::TransportTypes* LongPoll; // 0x0

	};
}

