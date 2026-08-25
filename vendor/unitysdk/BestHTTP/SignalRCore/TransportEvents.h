#pragma once
#include "../../unitysdk.h"

namespace BestHTTP::SignalRCore { class TransportEvents; }

namespace BestHTTP::SignalRCore
{
	inline static constexpr unsigned int TransportEvents_TypeDefinitionIndex = 21423;

	class TransportEvents : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::BestHTTP::SignalRCore::TransportEvents* SelectedToConnect; // 0x0
		::BestHTTP::SignalRCore::TransportEvents* FailedToConnect; // 0x0
		::BestHTTP::SignalRCore::TransportEvents* Connected; // 0x0
		::BestHTTP::SignalRCore::TransportEvents* Closed; // 0x0
		::BestHTTP::SignalRCore::TransportEvents* ClosedWithError; // 0x0

	};
}

