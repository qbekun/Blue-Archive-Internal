#pragma once
#include "../../../unitysdk.h"

namespace BestHTTP::SocketIO3::Transports { class TransportStates; }

namespace BestHTTP::SocketIO3::Transports
{
	inline static constexpr unsigned int TransportStates_TypeDefinitionIndex = 21404;

	class TransportStates : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::BestHTTP::SocketIO3::Transports::TransportStates* Connecting; // 0x0
		::BestHTTP::SocketIO3::Transports::TransportStates* Opening; // 0x0
		::BestHTTP::SocketIO3::Transports::TransportStates* Open; // 0x0
		::BestHTTP::SocketIO3::Transports::TransportStates* Closed; // 0x0
		::BestHTTP::SocketIO3::Transports::TransportStates* Paused; // 0x0

	};
}

