#pragma once
#include "../../unitysdk.h"

namespace BestHTTP::SignalR { class ConnectionStates; }

namespace BestHTTP::SignalR
{
	inline static constexpr unsigned int ConnectionStates_TypeDefinitionIndex = 21484;

	class ConnectionStates : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::BestHTTP::SignalR::ConnectionStates* Initial; // 0x0
		::BestHTTP::SignalR::ConnectionStates* Authenticating; // 0x0
		::BestHTTP::SignalR::ConnectionStates* Negotiating; // 0x0
		::BestHTTP::SignalR::ConnectionStates* Connecting; // 0x0
		::BestHTTP::SignalR::ConnectionStates* Connected; // 0x0
		::BestHTTP::SignalR::ConnectionStates* Reconnecting; // 0x0
		::BestHTTP::SignalR::ConnectionStates* Closed; // 0x0

	};
}

