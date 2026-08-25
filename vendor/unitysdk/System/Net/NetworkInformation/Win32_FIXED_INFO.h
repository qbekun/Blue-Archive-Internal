#pragma once
#include "../../../unitysdk.h"

namespace System::Net::NetworkInformation
{
	inline static constexpr unsigned int Win32_FIXED_INFO_TypeDefinitionIndex = 29861;

	class Win32_FIXED_INFO : public Il2CppObject
	{
	public:
		::System::String* HostName; // 0x10
		::System::String* DomainName; // 0x18
		::System::Int32 CurrentDnsServer; // 0x20
		::System::Net::NetworkInformation::Win32_IP_ADDR_STRING* DnsServerList; // 0x28
		::System::Net::NetworkInformation::NetBiosNodeType* NodeType; // 0x48
		::System::String* ScopeId; // 0x50
		::System::UInt32 EnableRouting; // 0x58
		::System::UInt32 EnableProxy; // 0x5C
		::System::UInt32 EnableDns; // 0x60

	};
}

