#pragma once
#include "../../../unitysdk.h"

namespace System::Net::NetworkInformation
{
	inline static constexpr unsigned int Win32_IP_ADAPTER_ADDRESSES_TypeDefinitionIndex = 29867;

	class Win32_IP_ADAPTER_ADDRESSES : public Il2CppObject
	{
	public:
		::System::Net::NetworkInformation::AlignmentUnion* Alignment; // 0x10
		::System::Int32 Next; // 0x18
		::System::String* AdapterName; // 0x20
		::System::Int32 FirstUnicastAddress; // 0x28
		::System::Int32 FirstAnycastAddress; // 0x30
		::System::Int32 FirstMulticastAddress; // 0x38
		::System::Int32 FirstDnsServerAddress; // 0x40
		::System::String* DnsSuffix; // 0x48
		::System::String* Description; // 0x50
		::System::String* FriendlyName; // 0x58
		::Il2CppArray<::System::Object*>* PhysicalAddress; // 0x60
		::System::UInt32 PhysicalAddressLength; // 0x68
		::System::UInt32 Flags; // 0x6C
		::System::UInt32 Mtu; // 0x70
		::System::Net::NetworkInformation::NetworkInterfaceType* IfType; // 0x74
		::System::Net::NetworkInformation::OperationalStatus* OperStatus; // 0x78
		::System::Int32 Ipv6IfIndex; // 0x7C
		::Il2CppArray<::System::Object*>* ZoneIndices; // 0x80
		::System::Int32 FirstPrefix; // 0x88
		::System::UInt64 TransmitLinkSpeed; // 0x90
		::System::UInt64 ReceiveLinkSpeed; // 0x98
		::System::Int32 FirstWinsServerAddress; // 0xA0
		::System::Int32 FirstGatewayAddress; // 0xA8
		::System::UInt32 Ipv4Metric; // 0xB0
		::System::UInt32 Ipv6Metric; // 0xB4
		::System::UInt64 Luid; // 0xB8
		::System::Net::NetworkInformation::Win32_SOCKET_ADDRESS* Dhcpv4Server; // 0xC0
		::System::UInt32 CompartmentId; // 0xD0
		::System::UInt64 NetworkGuid; // 0xD8
		::System::Int32 ConnectionType; // 0xE0
		::System::Int32 TunnelType; // 0xE4
		::System::Net::NetworkInformation::Win32_SOCKET_ADDRESS* Dhcpv6Server; // 0xE8
		::Il2CppArray<::System::Object*>* Dhcpv6ClientDuid; // 0xF8
		::System::UInt64 Dhcpv6ClientDuidLength; // 0x100
		::System::UInt64 Dhcpv6Iaid; // 0x108
		::System::Int32 FirstDnsSuffix; // 0x110

	};
}

