#pragma once
#include "../../../unitysdk.h"

namespace System::Net::NetworkInformation
{
	inline static constexpr unsigned int Win32_FIXED_INFO_Marshal_TypeDefinitionIndex = 29865;

	class Win32_FIXED_INFO_Marshal : public Il2CppObject
	{
	public:
		<HostName>e__FixedBuffer* HostName; // 0x10
		<DomainName>e__FixedBuffer* DomainName; // 0x94
		::System::Int32 CurrentDnsServer; // 0x118
		::System::Net::NetworkInformation::Win32_IP_ADDR_STRING* DnsServerList; // 0x120
		::System::Net::NetworkInformation::NetBiosNodeType* NodeType; // 0x140
		<ScopeId>e__FixedBuffer* ScopeId; // 0x144
		::System::UInt32 EnableRouting; // 0x248
		::System::UInt32 EnableProxy; // 0x24C
		::System::UInt32 EnableDns; // 0x250

	};
}

