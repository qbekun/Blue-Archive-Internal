#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_NET_NETWORKINFORMATION_WIN32NETWORKINTERFACE2_GETIFENTRY_OFFSET UNITYSDK_OFFSET(0x9A92510)
#define SYSTEM_NET_NETWORKINFORMATION_WIN32NETWORKINTERFACE2_.CTOR_OFFSET UNITYSDK_OFFSET(0x9A920E0)
#define SYSTEM_NET_NETWORKINFORMATION_WIN32NETWORKINTERFACE2_GETIPPROPERTIES_OFFSET UNITYSDK_OFFSET(0x9A92660)
#define SYSTEM_NET_NETWORKINFORMATION_WIN32NETWORKINTERFACE2_GET_NETWORKINTERFACETYPE_OFFSET UNITYSDK_OFFSET(0x9A92670)
#define SYSTEM_NET_NETWORKINFORMATION_WIN32NETWORKINTERFACE2_GET_OPERATIONALSTATUS_OFFSET UNITYSDK_OFFSET(0x9A92680)

namespace System::Net::NetworkInformation
{
	inline static constexpr unsigned int Win32NetworkInterface2_TypeDefinitionIndex = 29858;

	class Win32NetworkInterface2 : public Il2CppObject
	{
	public:
		::System::Net::NetworkInformation::Win32_IP_ADAPTER_ADDRESSES* addr; // 0x10
		::System::Net::NetworkInformation::Win32_MIB_IFROW* mib4; // 0x118
		::System::Net::NetworkInformation::Win32_MIB_IFROW* mib6; // 0x188
		::System::Net::NetworkInformation::Win32IPv4InterfaceStatistics* ip4stats; // 0x1F8
		::System::Net::NetworkInformation::IPInterfaceProperties* ip_if_props; // 0x200

		::System::Int32 GetIfEntry(::System::Net::NetworkInformation::Win32_MIB_IFROW&* arg)
		{
			return (return (::System::Int32(*)(::System::Net::NetworkInformation::Win32_MIB_IFROW&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_WIN32NETWORKINTERFACE2_GETIFENTRY_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Net::NetworkInformation::Win32_IP_ADAPTER_ADDRESSES* arg)
		{
			((::System::Void(*)(::System::Net::NetworkInformation::Win32_IP_ADAPTER_ADDRESSES*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_WIN32NETWORKINTERFACE2_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Net::NetworkInformation::IPInterfaceProperties* GetIPProperties()
		{
			return (return (::System::Net::NetworkInformation::IPInterfaceProperties*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_WIN32NETWORKINTERFACE2_GETIPPROPERTIES_OFFSET))(nullptr);
		}

		::System::Net::NetworkInformation::NetworkInterfaceType* get_NetworkInterfaceType()
		{
			return (return (::System::Net::NetworkInformation::NetworkInterfaceType*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_WIN32NETWORKINTERFACE2_GET_NETWORKINTERFACETYPE_OFFSET))(nullptr);
		}

		::System::Net::NetworkInformation::OperationalStatus* get_OperationalStatus()
		{
			return (return (::System::Net::NetworkInformation::OperationalStatus*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_WIN32NETWORKINTERFACE2_GET_OPERATIONALSTATUS_OFFSET))(nullptr);
		}

	};
}

