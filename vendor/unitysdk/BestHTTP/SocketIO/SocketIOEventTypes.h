#pragma once
#include "../../unitysdk.h"

namespace BestHTTP::SocketIO { class SocketIOEventTypes; }

namespace BestHTTP::SocketIO
{
	inline static constexpr unsigned int SocketIOEventTypes_TypeDefinitionIndex = 21343;

	class SocketIOEventTypes : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::BestHTTP::SocketIO::SocketIOEventTypes* Unknown; // 0x0
		::BestHTTP::SocketIO::SocketIOEventTypes* Connect; // 0x0
		::BestHTTP::SocketIO::SocketIOEventTypes* Disconnect; // 0x0
		::BestHTTP::SocketIO::SocketIOEventTypes* Event; // 0x0
		::BestHTTP::SocketIO::SocketIOEventTypes* Ack; // 0x0
		::BestHTTP::SocketIO::SocketIOEventTypes* Error; // 0x0
		::BestHTTP::SocketIO::SocketIOEventTypes* BinaryEvent; // 0x0
		::BestHTTP::SocketIO::SocketIOEventTypes* BinaryAck; // 0x0

	};
}

