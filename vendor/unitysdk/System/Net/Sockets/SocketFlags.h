#pragma once
#include "../../../unitysdk.h"

namespace System::Net::Sockets
{
	inline static constexpr unsigned int SocketFlags_TypeDefinitionIndex = 29915;

	class SocketFlags : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::System::Net::Sockets::SocketFlags* None; // 0x0
		::System::Net::Sockets::SocketFlags* OutOfBand; // 0x0
		::System::Net::Sockets::SocketFlags* Peek; // 0x0
		::System::Net::Sockets::SocketFlags* DontRoute; // 0x0
		::System::Net::Sockets::SocketFlags* MaxIOVectorLength; // 0x0
		::System::Net::Sockets::SocketFlags* Truncated; // 0x0
		::System::Net::Sockets::SocketFlags* ControlDataTruncated; // 0x0
		::System::Net::Sockets::SocketFlags* Broadcast; // 0x0
		::System::Net::Sockets::SocketFlags* Multicast; // 0x0
		::System::Net::Sockets::SocketFlags* Partial; // 0x0

	};
}

