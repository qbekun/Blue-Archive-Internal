#pragma once
#include "../../unitysdk.h"

namespace BestHTTP::SignalRCore { class ConnectionStates; }

namespace BestHTTP::SignalRCore
{
	inline static constexpr unsigned int ConnectionStates_TypeDefinitionIndex = 21422;

	class ConnectionStates : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::BestHTTP::SignalRCore::ConnectionStates* Initial; // 0x0
		::BestHTTP::SignalRCore::ConnectionStates* Authenticating; // 0x0
		::BestHTTP::SignalRCore::ConnectionStates* Negotiating; // 0x0
		::BestHTTP::SignalRCore::ConnectionStates* Redirected; // 0x0
		::BestHTTP::SignalRCore::ConnectionStates* Reconnecting; // 0x0
		::BestHTTP::SignalRCore::ConnectionStates* Connected; // 0x0
		::BestHTTP::SignalRCore::ConnectionStates* CloseInitiated; // 0x0
		::BestHTTP::SignalRCore::ConnectionStates* Closed; // 0x0

	};
}

