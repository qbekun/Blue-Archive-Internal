#pragma once
#include "../../unitysdk.h"

namespace BestHTTP::SocketIO { class TransportEventTypes; }

namespace BestHTTP::SocketIO
{
	inline static constexpr unsigned int TransportEventTypes_TypeDefinitionIndex = 21342;

	class TransportEventTypes : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::BestHTTP::SocketIO::TransportEventTypes* Unknown; // 0x0
		::BestHTTP::SocketIO::TransportEventTypes* Open; // 0x0
		::BestHTTP::SocketIO::TransportEventTypes* Close; // 0x0
		::BestHTTP::SocketIO::TransportEventTypes* Ping; // 0x0
		::BestHTTP::SocketIO::TransportEventTypes* Pong; // 0x0
		::BestHTTP::SocketIO::TransportEventTypes* Message; // 0x0
		::BestHTTP::SocketIO::TransportEventTypes* Upgrade; // 0x0
		::BestHTTP::SocketIO::TransportEventTypes* Noop; // 0x0

	};
}

