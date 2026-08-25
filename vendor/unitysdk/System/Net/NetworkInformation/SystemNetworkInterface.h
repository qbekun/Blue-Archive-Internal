#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_NET_NETWORKINFORMATION_SYSTEMNETWORKINTERFACE_GETNETWORKINTERFACES_OFFSET UNITYSDK_OFFSET(0x9A908A0)
#define SYSTEM_NET_NETWORKINFORMATION_SYSTEMNETWORKINTERFACE_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9A90EC0)

namespace System::Net::NetworkInformation
{
	inline static constexpr unsigned int SystemNetworkInterface_TypeDefinitionIndex = 29850;

	class SystemNetworkInterface : public Il2CppObject
	{
	public:
		::System::Net::NetworkInformation::NetworkInterfaceFactory* nif; // 0x0

		::Il2CppArray<::System::Object*>* GetNetworkInterfaces()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_SYSTEMNETWORKINTERFACE_GETNETWORKINTERFACES_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_SYSTEMNETWORKINTERFACE_.CCTOR_OFFSET))(nullptr);
		}

	};
}

