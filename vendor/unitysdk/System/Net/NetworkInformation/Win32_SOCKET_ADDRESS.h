#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_NET_NETWORKINFORMATION_WIN32_SOCKET_ADDRESS_GETIPADDRESS_OFFSET UNITYSDK_OFFSET(0x9A929A0)

namespace System::Net::NetworkInformation
{
	inline static constexpr unsigned int Win32_SOCKET_ADDRESS_TypeDefinitionIndex = 29873;

	class Win32_SOCKET_ADDRESS : public Il2CppObject
	{
	public:
		::System::Int32 Sockaddr; // 0x10
		::System::Int32 SockaddrLength; // 0x18

		::System::Net::IPAddress* GetIPAddress()
		{
			return (return (::System::Net::IPAddress*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_WIN32_SOCKET_ADDRESS_GETIPADDRESS_OFFSET))(nullptr);
		}

	};
}

