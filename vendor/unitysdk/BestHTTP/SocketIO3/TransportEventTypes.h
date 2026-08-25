#pragma once
#include "../../unitysdk.h"

namespace BestHTTP::SocketIO3 { class TransportEventTypes; }

namespace BestHTTP::SocketIO3
{
	inline static constexpr unsigned int TransportEventTypes_TypeDefinitionIndex = 21371;

	class TransportEventTypes : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::BestHTTP::SocketIO3::TransportEventTypes* Unknown; // 0x0
		::BestHTTP::SocketIO3::TransportEventTypes* Open; // 0x0
		::BestHTTP::SocketIO3::TransportEventTypes* Close; // 0x0
		::BestHTTP::SocketIO3::TransportEventTypes* Ping; // 0x0
		::BestHTTP::SocketIO3::TransportEventTypes* Pong; // 0x0
		::BestHTTP::SocketIO3::TransportEventTypes* Message; // 0x0
		::BestHTTP::SocketIO3::TransportEventTypes* Upgrade; // 0x0
		::BestHTTP::SocketIO3::TransportEventTypes* Noop; // 0x0

	};
}

