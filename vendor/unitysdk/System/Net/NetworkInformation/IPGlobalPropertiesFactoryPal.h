#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_NET_NETWORKINFORMATION_IPGLOBALPROPERTIESFACTORYPAL_CREATE_OFFSET UNITYSDK_OFFSET(0x9A906E0)

namespace System::Net::NetworkInformation
{
	inline static constexpr unsigned int IPGlobalPropertiesFactoryPal_TypeDefinitionIndex = 29849;

	class IPGlobalPropertiesFactoryPal : public Il2CppObject
	{
	public:
		::System::Net::NetworkInformation::IPGlobalProperties* Create()
		{
			return (return (::System::Net::NetworkInformation::IPGlobalProperties*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_IPGLOBALPROPERTIESFACTORYPAL_CREATE_OFFSET))(nullptr);
		}

	};
}

