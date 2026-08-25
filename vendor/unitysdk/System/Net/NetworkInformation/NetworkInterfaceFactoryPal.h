#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_NET_NETWORKINFORMATION_NETWORKINTERFACEFACTORYPAL_CREATE_OFFSET UNITYSDK_OFFSET(0x9A90FD0)

namespace System::Net::NetworkInformation
{
	inline static constexpr unsigned int NetworkInterfaceFactoryPal_TypeDefinitionIndex = 29852;

	class NetworkInterfaceFactoryPal : public Il2CppObject
	{
	public:
		::System::Net::NetworkInformation::NetworkInterfaceFactory* Create()
		{
			return (return (::System::Net::NetworkInformation::NetworkInterfaceFactory*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_NETWORKINTERFACEFACTORYPAL_CREATE_OFFSET))(nullptr);
		}

	};
}

