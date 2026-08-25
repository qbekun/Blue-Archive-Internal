#pragma once
#include "../../unitysdk.h"

namespace BestHTTP::SignalR { class RequestTypes; }

namespace BestHTTP::SignalR
{
	inline static constexpr unsigned int RequestTypes_TypeDefinitionIndex = 21485;

	class RequestTypes : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::BestHTTP::SignalR::RequestTypes* Negotiate; // 0x0
		::BestHTTP::SignalR::RequestTypes* Connect; // 0x0
		::BestHTTP::SignalR::RequestTypes* Start; // 0x0
		::BestHTTP::SignalR::RequestTypes* Poll; // 0x0
		::BestHTTP::SignalR::RequestTypes* Send; // 0x0
		::BestHTTP::SignalR::RequestTypes* Reconnect; // 0x0
		::BestHTTP::SignalR::RequestTypes* Abort; // 0x0
		::BestHTTP::SignalR::RequestTypes* Ping; // 0x0

	};
}

