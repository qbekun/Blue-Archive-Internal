#pragma once
#include "../../../unitysdk.h"

namespace BestHTTP::SocketIO3::Transports { class TransportTypes; }

namespace BestHTTP::SocketIO3::Transports
{
	inline static constexpr unsigned int TransportTypes_TypeDefinitionIndex = 21403;

	class TransportTypes : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::BestHTTP::SocketIO3::Transports::TransportTypes* Polling; // 0x0
		::BestHTTP::SocketIO3::Transports::TransportTypes* WebSocket; // 0x0

	};
}

