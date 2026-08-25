#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_NET_NETWORKINFORMATION_IPGLOBALPROPERTIES_GETIPGLOBALPROPERTIES_OFFSET UNITYSDK_OFFSET(0x9A90690)
#define SYSTEM_NET_NETWORKINFORMATION_IPGLOBALPROPERTIES_INTERNALGETIPGLOBALPROPERTIES_OFFSET UNITYSDK_OFFSET(0x9A90730)
#define SYSTEM_NET_NETWORKINFORMATION_IPGLOBALPROPERTIES_GET_DOMAINNAME_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_NET_NETWORKINFORMATION_IPGLOBALPROPERTIES_.CTOR_OFFSET UNITYSDK_OFFSET(0x9A90780)

namespace System::Net::NetworkInformation
{
	inline static constexpr unsigned int IPGlobalProperties_TypeDefinitionIndex = 29836;

	class IPGlobalProperties : public Il2CppObject
	{
	public:
		::System::Net::NetworkInformation::IPGlobalProperties* GetIPGlobalProperties()
		{
			return (return (::System::Net::NetworkInformation::IPGlobalProperties*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_IPGLOBALPROPERTIES_GETIPGLOBALPROPERTIES_OFFSET))(nullptr);
		}

		::System::Net::NetworkInformation::IPGlobalProperties* InternalGetIPGlobalProperties()
		{
			return (return (::System::Net::NetworkInformation::IPGlobalProperties*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_IPGLOBALPROPERTIES_INTERNALGETIPGLOBALPROPERTIES_OFFSET))(nullptr);
		}

		::System::String* get_DomainName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_IPGLOBALPROPERTIES_GET_DOMAINNAME_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_IPGLOBALPROPERTIES_.CTOR_OFFSET))(nullptr);
		}

	};
}

