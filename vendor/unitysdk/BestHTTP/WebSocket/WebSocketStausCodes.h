#pragma once
#include "../../unitysdk.h"

namespace BestHTTP::WebSocket { class WebSocketStausCodes; }

namespace BestHTTP::WebSocket
{
	inline static constexpr unsigned int WebSocketStausCodes_TypeDefinitionIndex = 21332;

	class WebSocketStausCodes : public Il2CppObject
	{
	public:
		::System::UInt16 value__; // 0x10
		::BestHTTP::WebSocket::WebSocketStausCodes* NormalClosure; // 0x0
		::BestHTTP::WebSocket::WebSocketStausCodes* GoingAway; // 0x0
		::BestHTTP::WebSocket::WebSocketStausCodes* ProtocolError; // 0x0
		::BestHTTP::WebSocket::WebSocketStausCodes* WrongDataType; // 0x0
		::BestHTTP::WebSocket::WebSocketStausCodes* Reserved; // 0x0
		::BestHTTP::WebSocket::WebSocketStausCodes* NoStatusCode; // 0x0
		::BestHTTP::WebSocket::WebSocketStausCodes* ClosedAbnormally; // 0x0
		::BestHTTP::WebSocket::WebSocketStausCodes* DataError; // 0x0
		::BestHTTP::WebSocket::WebSocketStausCodes* PolicyError; // 0x0
		::BestHTTP::WebSocket::WebSocketStausCodes* TooBigMessage; // 0x0
		::BestHTTP::WebSocket::WebSocketStausCodes* ExtensionExpected; // 0x0
		::BestHTTP::WebSocket::WebSocketStausCodes* WrongRequest; // 0x0
		::BestHTTP::WebSocket::WebSocketStausCodes* TLSHandshakeError; // 0x0

	};
}

