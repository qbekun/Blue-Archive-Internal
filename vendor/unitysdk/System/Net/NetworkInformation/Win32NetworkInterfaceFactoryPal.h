#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_NET_NETWORKINFORMATION_WIN32NETWORKINTERFACEFACTORYPAL_CREATE_OFFSET UNITYSDK_OFFSET(0x9A91050)

namespace System::Net::NetworkInformation
{
	inline static constexpr unsigned int Win32NetworkInterfaceFactoryPal_TypeDefinitionIndex = 29859;

	class Win32NetworkInterfaceFactoryPal : public Il2CppObject
	{
	public:
		::System::Net::NetworkInformation::NetworkInterfaceFactory* Create()
		{
			return (return (::System::Net::NetworkInformation::NetworkInterfaceFactory*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_WIN32NETWORKINTERFACEFACTORYPAL_CREATE_OFFSET))(nullptr);
		}

	};
}

