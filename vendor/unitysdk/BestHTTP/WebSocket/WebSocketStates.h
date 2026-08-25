#pragma once
#include "../../unitysdk.h"

namespace BestHTTP::WebSocket { class WebSocketStates; }

namespace BestHTTP::WebSocket
{
	inline static constexpr unsigned int WebSocketStates_TypeDefinitionIndex = 21323;

	class WebSocketStates : public Il2CppObject
	{
	public:
		::System::Byte value__; // 0x10
		::BestHTTP::WebSocket::WebSocketStates* Connecting; // 0x0
		::BestHTTP::WebSocket::WebSocketStates* Open; // 0x0
		::BestHTTP::WebSocket::WebSocketStates* Closing; // 0x0
		::BestHTTP::WebSocket::WebSocketStates* Closed; // 0x0
		::BestHTTP::WebSocket::WebSocketStates* Unknown; // 0x0

	};
}

