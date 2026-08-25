#pragma once
#include "../../unitysdk.h"

namespace BestHTTP::SocketIO3 { class SocketIOEventTypes; }

namespace BestHTTP::SocketIO3
{
	inline static constexpr unsigned int SocketIOEventTypes_TypeDefinitionIndex = 21372;

	class SocketIOEventTypes : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::BestHTTP::SocketIO3::SocketIOEventTypes* Unknown; // 0x0
		::BestHTTP::SocketIO3::SocketIOEventTypes* Connect; // 0x0
		::BestHTTP::SocketIO3::SocketIOEventTypes* Disconnect; // 0x0
		::BestHTTP::SocketIO3::SocketIOEventTypes* Event; // 0x0
		::BestHTTP::SocketIO3::SocketIOEventTypes* Ack; // 0x0
		::BestHTTP::SocketIO3::SocketIOEventTypes* Error; // 0x0
		::BestHTTP::SocketIO3::SocketIOEventTypes* BinaryEvent; // 0x0
		::BestHTTP::SocketIO3::SocketIOEventTypes* BinaryAck; // 0x0

	};
}

