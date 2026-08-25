#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_NET_NETWORKINFORMATION_WIN32IPGLOBALPROPERTIESFACTORYPAL_CREATE_OFFSET UNITYSDK_OFFSET(0x9A90E70)

namespace System::Net::NetworkInformation
{
	inline static constexpr unsigned int Win32IPGlobalPropertiesFactoryPal_TypeDefinitionIndex = 29854;

	class Win32IPGlobalPropertiesFactoryPal : public Il2CppObject
	{
	public:
		::System::Net::NetworkInformation::IPGlobalProperties* Create()
		{
			return (return (::System::Net::NetworkInformation::IPGlobalProperties*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_WIN32IPGLOBALPROPERTIESFACTORYPAL_CREATE_OFFSET))(nullptr);
		}

	};
}

