#pragma once
#include "../../../unitysdk.h"

namespace System::Net::Sockets
{
	inline static constexpr unsigned int SocketOperation_TypeDefinitionIndex = 29926;

	class SocketOperation : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::System::Net::Sockets::SocketOperation* Accept; // 0x0
		::System::Net::Sockets::SocketOperation* Connect; // 0x0
		::System::Net::Sockets::SocketOperation* Receive; // 0x0
		::System::Net::Sockets::SocketOperation* ReceiveFrom; // 0x0
		::System::Net::Sockets::SocketOperation* Send; // 0x0
		::System::Net::Sockets::SocketOperation* SendTo; // 0x0
		::System::Net::Sockets::SocketOperation* RecvJustCallback; // 0x0
		::System::Net::Sockets::SocketOperation* SendJustCallback; // 0x0
		::System::Net::Sockets::SocketOperation* Disconnect; // 0x0
		::System::Net::Sockets::SocketOperation* AcceptReceive; // 0x0
		::System::Net::Sockets::SocketOperation* ReceiveGeneric; // 0x0
		::System::Net::Sockets::SocketOperation* SendGeneric; // 0x0

	};
}

