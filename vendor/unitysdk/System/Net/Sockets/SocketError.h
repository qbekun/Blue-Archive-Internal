#pragma once
#include "../../../unitysdk.h"

namespace System::Net::Sockets
{
	inline static constexpr unsigned int SocketError_TypeDefinitionIndex = 29914;

	class SocketError : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::System::Net::Sockets::SocketError* Success; // 0x0
		::System::Net::Sockets::SocketError* SocketError; // 0x0
		::System::Net::Sockets::SocketError* Interrupted; // 0x0
		::System::Net::Sockets::SocketError* AccessDenied; // 0x0
		::System::Net::Sockets::SocketError* Fault; // 0x0
		::System::Net::Sockets::SocketError* InvalidArgument; // 0x0
		::System::Net::Sockets::SocketError* TooManyOpenSockets; // 0x0
		::System::Net::Sockets::SocketError* WouldBlock; // 0x0
		::System::Net::Sockets::SocketError* InProgress; // 0x0
		::System::Net::Sockets::SocketError* AlreadyInProgress; // 0x0
		::System::Net::Sockets::SocketError* NotSocket; // 0x0
		::System::Net::Sockets::SocketError* DestinationAddressRequired; // 0x0
		::System::Net::Sockets::SocketError* MessageSize; // 0x0
		::System::Net::Sockets::SocketError* ProtocolType; // 0x0
		::System::Net::Sockets::SocketError* ProtocolOption; // 0x0
		::System::Net::Sockets::SocketError* ProtocolNotSupported; // 0x0
		::System::Net::Sockets::SocketError* SocketNotSupported; // 0x0
		::System::Net::Sockets::SocketError* OperationNotSupported; // 0x0
		::System::Net::Sockets::SocketError* ProtocolFamilyNotSupported; // 0x0
		::System::Net::Sockets::SocketError* AddressFamilyNotSupported; // 0x0
		::System::Net::Sockets::SocketError* AddressAlreadyInUse; // 0x0
		::System::Net::Sockets::SocketError* AddressNotAvailable; // 0x0
		::System::Net::Sockets::SocketError* NetworkDown; // 0x0
		::System::Net::Sockets::SocketError* NetworkUnreachable; // 0x0
		::System::Net::Sockets::SocketError* NetworkReset; // 0x0
		::System::Net::Sockets::SocketError* ConnectionAborted; // 0x0
		::System::Net::Sockets::SocketError* ConnectionReset; // 0x0
		::System::Net::Sockets::SocketError* NoBufferSpaceAvailable; // 0x0
		::System::Net::Sockets::SocketError* IsConnected; // 0x0
		::System::Net::Sockets::SocketError* NotConnected; // 0x0
		::System::Net::Sockets::SocketError* Shutdown; // 0x0
		::System::Net::Sockets::SocketError* TimedOut; // 0x0
		::System::Net::Sockets::SocketError* ConnectionRefused; // 0x0
		::System::Net::Sockets::SocketError* HostDown; // 0x0
		::System::Net::Sockets::SocketError* HostUnreachable; // 0x0
		::System::Net::Sockets::SocketError* ProcessLimit; // 0x0
		::System::Net::Sockets::SocketError* SystemNotReady; // 0x0
		::System::Net::Sockets::SocketError* VersionNotSupported; // 0x0
		::System::Net::Sockets::SocketError* NotInitialized; // 0x0
		::System::Net::Sockets::SocketError* Disconnecting; // 0x0
		::System::Net::Sockets::SocketError* TypeNotFound; // 0x0
		::System::Net::Sockets::SocketError* HostNotFound; // 0x0
		::System::Net::Sockets::SocketError* TryAgain; // 0x0
		::System::Net::Sockets::SocketError* NoRecovery; // 0x0
		::System::Net::Sockets::SocketError* NoData; // 0x0
		::System::Net::Sockets::SocketError* IOPending; // 0x0
		::System::Net::Sockets::SocketError* OperationAborted; // 0x0

	};
}

