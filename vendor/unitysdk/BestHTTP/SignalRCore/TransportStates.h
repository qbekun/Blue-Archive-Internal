#pragma once
#include "../../unitysdk.h"

namespace BestHTTP::SignalRCore { class TransportStates; }

namespace BestHTTP::SignalRCore
{
	inline static constexpr unsigned int TransportStates_TypeDefinitionIndex = 21421;

	class TransportStates : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::BestHTTP::SignalRCore::TransportStates* Initial; // 0x0
		::BestHTTP::SignalRCore::TransportStates* Connecting; // 0x0
		::BestHTTP::SignalRCore::TransportStates* Connected; // 0x0
		::BestHTTP::SignalRCore::TransportStates* Closing; // 0x0
		::BestHTTP::SignalRCore::TransportStates* Failed; // 0x0
		::BestHTTP::SignalRCore::TransportStates* Closed; // 0x0

	};
}

