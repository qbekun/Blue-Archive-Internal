#pragma once
#include "../../../unitysdk.h"

namespace System::Net::Sockets
{
	inline static constexpr unsigned int SocketShutdown_TypeDefinitionIndex = 29918;

	class SocketShutdown : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::System::Net::Sockets::SocketShutdown* Receive; // 0x0
		::System::Net::Sockets::SocketShutdown* Send; // 0x0
		::System::Net::Sockets::SocketShutdown* Both; // 0x0

	};
}

