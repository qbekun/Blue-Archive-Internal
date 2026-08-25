#pragma once
#include "../../../unitysdk.h"

namespace System::Net::Sockets
{
	inline static constexpr unsigned int SocketOptionLevel_TypeDefinitionIndex = 29916;

	class SocketOptionLevel : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::System::Net::Sockets::SocketOptionLevel* Socket; // 0x0
		::System::Net::Sockets::SocketOptionLevel* IP; // 0x0
		::System::Net::Sockets::SocketOptionLevel* IPv6; // 0x0
		::System::Net::Sockets::SocketOptionLevel* Tcp; // 0x0
		::System::Net::Sockets::SocketOptionLevel* Udp; // 0x0

	};
}

