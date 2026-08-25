#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_NET_NETWORKINFORMATION_NETWORKINTERFACEFACTORY_GETALLNETWORKINTERFACES_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_NET_NETWORKINFORMATION_NETWORKINTERFACEFACTORY_CREATE_OFFSET UNITYSDK_OFFSET(0x9A90F70)
#define SYSTEM_NET_NETWORKINFORMATION_NETWORKINTERFACEFACTORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x9A91030)

namespace System::Net::NetworkInformation
{
	inline static constexpr unsigned int NetworkInterfaceFactory_TypeDefinitionIndex = 29851;

	class NetworkInterfaceFactory : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* GetAllNetworkInterfaces()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_NETWORKINTERFACEFACTORY_GETALLNETWORKINTERFACES_OFFSET))(nullptr);
		}

		::System::Net::NetworkInformation::NetworkInterfaceFactory* Create()
		{
			return (return (::System::Net::NetworkInformation::NetworkInterfaceFactory*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_NETWORKINTERFACEFACTORY_CREATE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_NETWORKINTERFACEFACTORY_.CTOR_OFFSET))(nullptr);
		}

	};
}

