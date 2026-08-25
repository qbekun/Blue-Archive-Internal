#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_NET_NETWORKINFORMATION_IPV4INTERFACESTATISTICS_.CTOR_OFFSET UNITYSDK_OFFSET(0x9A907A0)

namespace System::Net::NetworkInformation
{
	inline static constexpr unsigned int IPv4InterfaceStatistics_TypeDefinitionIndex = 29838;

	class IPv4InterfaceStatistics : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_IPV4INTERFACESTATISTICS_.CTOR_OFFSET))(nullptr);
		}

	};
}

