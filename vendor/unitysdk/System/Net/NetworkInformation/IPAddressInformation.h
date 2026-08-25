#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_NET_NETWORKINFORMATION_IPADDRESSINFORMATION_GET_ADDRESS_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_NET_NETWORKINFORMATION_IPADDRESSINFORMATION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9A90680)

namespace System::Net::NetworkInformation
{
	inline static constexpr unsigned int IPAddressInformation_TypeDefinitionIndex = 29835;

	class IPAddressInformation : public Il2CppObject
	{
	public:
		::System::Net::IPAddress* get_Address()
		{
			return (return (::System::Net::IPAddress*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_IPADDRESSINFORMATION_GET_ADDRESS_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_IPADDRESSINFORMATION_.CTOR_OFFSET))(nullptr);
		}

	};
}

