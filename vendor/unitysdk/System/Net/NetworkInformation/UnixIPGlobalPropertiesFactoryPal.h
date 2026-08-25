#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_NET_NETWORKINFORMATION_UNIXIPGLOBALPROPERTIESFACTORYPAL_CREATE_OFFSET UNITYSDK_OFFSET(0x9A90E60)

namespace System::Net::NetworkInformation
{
	inline static constexpr unsigned int UnixIPGlobalPropertiesFactoryPal_TypeDefinitionIndex = 29876;

	class UnixIPGlobalPropertiesFactoryPal : public Il2CppObject
	{
	public:
		::System::Net::NetworkInformation::IPGlobalProperties* Create()
		{
			return (return (::System::Net::NetworkInformation::IPGlobalProperties*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_UNIXIPGLOBALPROPERTIESFACTORYPAL_CREATE_OFFSET))(nullptr);
		}

	};
}

