#pragma once
#include "../../unitysdk.h"

namespace BestHTTP::SocketIO { class SocketIOErrors; }

namespace BestHTTP::SocketIO
{
	inline static constexpr unsigned int SocketIOErrors_TypeDefinitionIndex = 21344;

	class SocketIOErrors : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::BestHTTP::SocketIO::SocketIOErrors* UnknownTransport; // 0x0
		::BestHTTP::SocketIO::SocketIOErrors* UnknownSid; // 0x0
		::BestHTTP::SocketIO::SocketIOErrors* BadHandshakeMethod; // 0x0
		::BestHTTP::SocketIO::SocketIOErrors* BadRequest; // 0x0
		::BestHTTP::SocketIO::SocketIOErrors* Forbidden; // 0x0
		::BestHTTP::SocketIO::SocketIOErrors* Internal; // 0x0
		::BestHTTP::SocketIO::SocketIOErrors* User; // 0x0
		::BestHTTP::SocketIO::SocketIOErrors* Custom; // 0x0

	};
}

