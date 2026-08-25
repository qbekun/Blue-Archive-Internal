#pragma once
#include "../../../unitysdk.h"

namespace BestHTTP::SocketIO::Transports { class TransportStates; }

namespace BestHTTP::SocketIO::Transports
{
	inline static constexpr unsigned int TransportStates_TypeDefinitionIndex = 21358;

	class TransportStates : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::BestHTTP::SocketIO::Transports::TransportStates* Connecting; // 0x0
		::BestHTTP::SocketIO::Transports::TransportStates* Opening; // 0x0
		::BestHTTP::SocketIO::Transports::TransportStates* Open; // 0x0
		::BestHTTP::SocketIO::Transports::TransportStates* Closed; // 0x0
		::BestHTTP::SocketIO::Transports::TransportStates* Paused; // 0x0

	};
}

