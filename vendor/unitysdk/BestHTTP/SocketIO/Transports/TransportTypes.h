#pragma once
#include "../../../unitysdk.h"

namespace BestHTTP::SocketIO::Transports { class TransportTypes; }

namespace BestHTTP::SocketIO::Transports
{
	inline static constexpr unsigned int TransportTypes_TypeDefinitionIndex = 21357;

	class TransportTypes : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::BestHTTP::SocketIO::Transports::TransportTypes* Polling; // 0x0
		::BestHTTP::SocketIO::Transports::TransportTypes* WebSocket; // 0x0

	};
}

