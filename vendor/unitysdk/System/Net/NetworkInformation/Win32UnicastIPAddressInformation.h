#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_NET_NETWORKINFORMATION_WIN32UNICASTIPADDRESSINFORMATION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9A918F0)
#define SYSTEM_NET_NETWORKINFORMATION_WIN32UNICASTIPADDRESSINFORMATION_GET_ADDRESS_OFFSET UNITYSDK_OFFSET(0x9A92BF0)
#define SYSTEM_NET_NETWORKINFORMATION_WIN32UNICASTIPADDRESSINFORMATION_PREFIXLENGTHTOSUBNETMASK_OFFSET UNITYSDK_OFFSET(0x9A92B20)

namespace System::Net::NetworkInformation
{
	inline static constexpr unsigned int Win32UnicastIPAddressInformation_TypeDefinitionIndex = 29874;

	class Win32UnicastIPAddressInformation : public Il2CppObject
	{
	public:
		::System::Net::NetworkInformation::Win32_IP_ADAPTER_UNICAST_ADDRESS* info; // 0x10
		::System::Net::IPAddress* ipv4Mask; // 0x50

		::System::Void .ctor(::System::Net::NetworkInformation::Win32_IP_ADAPTER_UNICAST_ADDRESS* arg)
		{
			((::System::Void(*)(::System::Net::NetworkInformation::Win32_IP_ADAPTER_UNICAST_ADDRESS*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_WIN32UNICASTIPADDRESSINFORMATION_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Net::IPAddress* get_Address()
		{
			return (return (::System::Net::IPAddress*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_WIN32UNICASTIPADDRESSINFORMATION_GET_ADDRESS_OFFSET))(nullptr);
		}

		::System::Net::IPAddress* PrefixLengthToSubnetMask(::System::Byte arg, ::System::Net::Sockets::AddressFamily* arg)
		{
			return (return (::System::Net::IPAddress*(*)(::System::Byte, ::System::Net::Sockets::AddressFamily*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_WIN32UNICASTIPADDRESSINFORMATION_PREFIXLENGTHTOSUBNETMASK_OFFSET))(arg, arg, nullptr);
		}

	};
}

