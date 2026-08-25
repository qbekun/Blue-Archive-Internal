#pragma once
#include "../../../unitysdk.h"

namespace System::Net::Sockets
{
	inline static constexpr unsigned int SocketType_TypeDefinitionIndex = 29919;

	class SocketType : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::System::Net::Sockets::SocketType* Stream; // 0x0
		::System::Net::Sockets::SocketType* Dgram; // 0x0
		::System::Net::Sockets::SocketType* Raw; // 0x0
		::System::Net::Sockets::SocketType* Rdm; // 0x0
		::System::Net::Sockets::SocketType* Seqpacket; // 0x0
		::System::Net::Sockets::SocketType* Unknown; // 0x0

	};
}

