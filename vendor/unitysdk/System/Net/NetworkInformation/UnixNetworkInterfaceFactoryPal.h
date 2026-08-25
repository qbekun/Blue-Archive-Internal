#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_NET_NETWORKINFORMATION_UNIXNETWORKINTERFACEFACTORYPAL_CREATE_OFFSET UNITYSDK_OFFSET(0x9A91040)

namespace System::Net::NetworkInformation
{
	inline static constexpr unsigned int UnixNetworkInterfaceFactoryPal_TypeDefinitionIndex = 29875;

	class UnixNetworkInterfaceFactoryPal : public Il2CppObject
	{
	public:
		::System::Net::NetworkInformation::NetworkInterfaceFactory* Create()
		{
			return (return (::System::Net::NetworkInformation::NetworkInterfaceFactory*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_UNIXNETWORKINTERFACEFACTORYPAL_CREATE_OFFSET))(nullptr);
		}

	};
}

