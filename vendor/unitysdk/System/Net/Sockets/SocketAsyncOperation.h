#pragma once
#include "../../../unitysdk.h"

namespace System::Net::Sockets
{
	inline static constexpr unsigned int SocketAsyncOperation_TypeDefinitionIndex = 29912;

	class SocketAsyncOperation : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::System::Net::Sockets::SocketAsyncOperation* None; // 0x0
		::System::Net::Sockets::SocketAsyncOperation* Accept; // 0x0
		::System::Net::Sockets::SocketAsyncOperation* Connect; // 0x0
		::System::Net::Sockets::SocketAsyncOperation* Disconnect; // 0x0
		::System::Net::Sockets::SocketAsyncOperation* Receive; // 0x0
		::System::Net::Sockets::SocketAsyncOperation* ReceiveFrom; // 0x0
		::System::Net::Sockets::SocketAsyncOperation* ReceiveMessageFrom; // 0x0
		::System::Net::Sockets::SocketAsyncOperation* Send; // 0x0
		::System::Net::Sockets::SocketAsyncOperation* SendPackets; // 0x0
		::System::Net::Sockets::SocketAsyncOperation* SendTo; // 0x0

	};
}

