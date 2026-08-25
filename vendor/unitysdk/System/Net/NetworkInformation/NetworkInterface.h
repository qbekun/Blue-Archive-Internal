#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_NET_NETWORKINFORMATION_NETWORKINTERFACE_GETALLNETWORKINTERFACES_OFFSET UNITYSDK_OFFSET(0x9A90840)
#define SYSTEM_NET_NETWORKINFORMATION_NETWORKINTERFACE_GETIPPROPERTIES_OFFSET UNITYSDK_OFFSET(0x9A909B0)
#define SYSTEM_NET_NETWORKINFORMATION_NETWORKINTERFACE_GET_OPERATIONALSTATUS_OFFSET UNITYSDK_OFFSET(0x9A90A00)
#define SYSTEM_NET_NETWORKINFORMATION_NETWORKINTERFACE_GET_NETWORKINTERFACETYPE_OFFSET UNITYSDK_OFFSET(0x9A90A50)
#define SYSTEM_NET_NETWORKINFORMATION_NETWORKINTERFACE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9A90AA0)

namespace System::Net::NetworkInformation
{
	inline static constexpr unsigned int NetworkInterface_TypeDefinitionIndex = 29840;

	class NetworkInterface : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* GetAllNetworkInterfaces()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_NETWORKINTERFACE_GETALLNETWORKINTERFACES_OFFSET))(nullptr);
		}

		::System::Net::NetworkInformation::IPInterfaceProperties* GetIPProperties()
		{
			return (return (::System::Net::NetworkInformation::IPInterfaceProperties*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_NETWORKINTERFACE_GETIPPROPERTIES_OFFSET))(nullptr);
		}

		::System::Net::NetworkInformation::OperationalStatus* get_OperationalStatus()
		{
			return (return (::System::Net::NetworkInformation::OperationalStatus*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_NETWORKINTERFACE_GET_OPERATIONALSTATUS_OFFSET))(nullptr);
		}

		::System::Net::NetworkInformation::NetworkInterfaceType* get_NetworkInterfaceType()
		{
			return (return (::System::Net::NetworkInformation::NetworkInterfaceType*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_NETWORKINTERFACE_GET_NETWORKINTERFACETYPE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_NETWORKINTERFACE_.CTOR_OFFSET))(nullptr);
		}

	};
}

