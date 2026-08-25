#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_NET_NETWORKINFORMATION_IPINTERFACEPROPERTIES_GET_UNICASTADDRESSES_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_NET_NETWORKINFORMATION_IPINTERFACEPROPERTIES_.CTOR_OFFSET UNITYSDK_OFFSET(0x9A90790)

namespace System::Net::NetworkInformation
{
	inline static constexpr unsigned int IPInterfaceProperties_TypeDefinitionIndex = 29837;

	class IPInterfaceProperties : public Il2CppObject
	{
	public:
		::System::Net::NetworkInformation::UnicastIPAddressInformationCollection* get_UnicastAddresses()
		{
			return (return (::System::Net::NetworkInformation::UnicastIPAddressInformationCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_IPINTERFACEPROPERTIES_GET_UNICASTADDRESSES_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_IPINTERFACEPROPERTIES_.CTOR_OFFSET))(nullptr);
		}

	};
}

