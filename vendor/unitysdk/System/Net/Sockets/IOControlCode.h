#pragma once
#include "../../../unitysdk.h"

namespace System::Net::Sockets
{
	inline static constexpr unsigned int IOControlCode_TypeDefinitionIndex = 29904;

	class IOControlCode : public Il2CppObject
	{
	public:
		::System::Int64 value__; // 0x10
		::System::Net::Sockets::IOControlCode* AsyncIO; // 0x0
		::System::Net::Sockets::IOControlCode* NonBlockingIO; // 0x0
		::System::Net::Sockets::IOControlCode* DataToRead; // 0x0
		::System::Net::Sockets::IOControlCode* OobDataRead; // 0x0
		::System::Net::Sockets::IOControlCode* AssociateHandle; // 0x0
		::System::Net::Sockets::IOControlCode* EnableCircularQueuing; // 0x0
		::System::Net::Sockets::IOControlCode* Flush; // 0x0
		::System::Net::Sockets::IOControlCode* GetBroadcastAddress; // 0x0
		::System::Net::Sockets::IOControlCode* GetExtensionFunctionPointer; // 0x0
		::System::Net::Sockets::IOControlCode* GetQos; // 0x0
		::System::Net::Sockets::IOControlCode* GetGroupQos; // 0x0
		::System::Net::Sockets::IOControlCode* MultipointLoopback; // 0x0
		::System::Net::Sockets::IOControlCode* MulticastScope; // 0x0
		::System::Net::Sockets::IOControlCode* SetQos; // 0x0
		::System::Net::Sockets::IOControlCode* SetGroupQos; // 0x0
		::System::Net::Sockets::IOControlCode* TranslateHandle; // 0x0
		::System::Net::Sockets::IOControlCode* RoutingInterfaceQuery; // 0x0
		::System::Net::Sockets::IOControlCode* RoutingInterfaceChange; // 0x0
		::System::Net::Sockets::IOControlCode* AddressListQuery; // 0x0
		::System::Net::Sockets::IOControlCode* AddressListChange; // 0x0
		::System::Net::Sockets::IOControlCode* QueryTargetPnpHandle; // 0x0
		::System::Net::Sockets::IOControlCode* NamespaceChange; // 0x0
		::System::Net::Sockets::IOControlCode* AddressListSort; // 0x0
		::System::Net::Sockets::IOControlCode* ReceiveAll; // 0x0
		::System::Net::Sockets::IOControlCode* ReceiveAllMulticast; // 0x0
		::System::Net::Sockets::IOControlCode* ReceiveAllIgmpMulticast; // 0x0
		::System::Net::Sockets::IOControlCode* KeepAliveValues; // 0x0
		::System::Net::Sockets::IOControlCode* AbsorbRouterAlert; // 0x0
		::System::Net::Sockets::IOControlCode* UnicastInterface; // 0x0
		::System::Net::Sockets::IOControlCode* LimitBroadcasts; // 0x0
		::System::Net::Sockets::IOControlCode* BindToInterface; // 0x0
		::System::Net::Sockets::IOControlCode* MulticastInterface; // 0x0
		::System::Net::Sockets::IOControlCode* AddMulticastGroupOnInterface; // 0x0
		::System::Net::Sockets::IOControlCode* DeleteMulticastGroupFromInterface; // 0x0

	};
}

