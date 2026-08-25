#pragma once
#include "../../unitysdk.h"

namespace BestHTTP::SignalRCore { class TransportTypes; }

namespace BestHTTP::SignalRCore
{
	inline static constexpr unsigned int TransportTypes_TypeDefinitionIndex = 21419;

	class TransportTypes : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::BestHTTP::SignalRCore::TransportTypes* WebSocket; // 0x0
		::BestHTTP::SignalRCore::TransportTypes* LongPolling; // 0x0

	};
}

