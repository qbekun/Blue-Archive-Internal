#pragma once
#include "../../unitysdk.h"

namespace BestHTTP::SignalR { class TransportStates; }

namespace BestHTTP::SignalR
{
	inline static constexpr unsigned int TransportStates_TypeDefinitionIndex = 21486;

	class TransportStates : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::BestHTTP::SignalR::TransportStates* Initial; // 0x0
		::BestHTTP::SignalR::TransportStates* Connecting; // 0x0
		::BestHTTP::SignalR::TransportStates* Reconnecting; // 0x0
		::BestHTTP::SignalR::TransportStates* Starting; // 0x0
		::BestHTTP::SignalR::TransportStates* Started; // 0x0
		::BestHTTP::SignalR::TransportStates* Closing; // 0x0
		::BestHTTP::SignalR::TransportStates* Closed; // 0x0

	};
}

