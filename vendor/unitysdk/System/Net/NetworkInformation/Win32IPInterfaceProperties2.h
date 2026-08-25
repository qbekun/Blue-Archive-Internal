#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_NET_NETWORKINFORMATION_WIN32IPINTERFACEPROPERTIES2_.CTOR_OFFSET UNITYSDK_OFFSET(0x9A914E0)
#define SYSTEM_NET_NETWORKINFORMATION_WIN32IPINTERFACEPROPERTIES2_GET_UNICASTADDRESSES_OFFSET UNITYSDK_OFFSET(0x9A915E0)
#define SYSTEM_NET_NETWORKINFORMATION_WIN32IPINTERFACEPROPERTIES2_WIN32FROMUNICAST_OFFSET UNITYSDK_OFFSET(0x9A916B0)

namespace System::Net::NetworkInformation
{
	inline static constexpr unsigned int Win32IPInterfaceProperties2_TypeDefinitionIndex = 29855;

	class Win32IPInterfaceProperties2 : public Il2CppObject
	{
	public:
		::System::Net::NetworkInformation::Win32_IP_ADAPTER_ADDRESSES* addr; // 0x10
		::System::Net::NetworkInformation::Win32_MIB_IFROW* mib4; // 0x118
		::System::Net::NetworkInformation::Win32_MIB_IFROW* mib6; // 0x188

		::System::Void .ctor(::System::Net::NetworkInformation::Win32_IP_ADAPTER_ADDRESSES* arg, ::System::Net::NetworkInformation::Win32_MIB_IFROW* arg, ::System::Net::NetworkInformation::Win32_MIB_IFROW* arg)
		{
			((::System::Void(*)(::System::Net::NetworkInformation::Win32_IP_ADAPTER_ADDRESSES*, ::System::Net::NetworkInformation::Win32_MIB_IFROW*, ::System::Net::NetworkInformation::Win32_MIB_IFROW*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_WIN32IPINTERFACEPROPERTIES2_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Net::NetworkInformation::UnicastIPAddressInformationCollection* get_UnicastAddresses()
		{
			return (return (::System::Net::NetworkInformation::UnicastIPAddressInformationCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_WIN32IPINTERFACEPROPERTIES2_GET_UNICASTADDRESSES_OFFSET))(nullptr);
		}

		::System::Net::NetworkInformation::UnicastIPAddressInformationCollection* Win32FromUnicast(::System::Int32 arg)
		{
			return (return (::System::Net::NetworkInformation::UnicastIPAddressInformationCollection*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_WIN32IPINTERFACEPROPERTIES2_WIN32FROMUNICAST_OFFSET))(arg, nullptr);
		}

	};
}

