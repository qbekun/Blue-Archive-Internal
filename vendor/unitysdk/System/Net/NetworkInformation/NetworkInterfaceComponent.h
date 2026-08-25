#pragma once
#include "../../../unitysdk.h"

namespace System::Net::NetworkInformation
{
	inline static constexpr unsigned int NetworkInterfaceComponent_TypeDefinitionIndex = 29841;

	class NetworkInterfaceComponent : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::System::Net::NetworkInformation::NetworkInterfaceComponent* IPv4; // 0x0
		::System::Net::NetworkInformation::NetworkInterfaceComponent* IPv6; // 0x0

	};
}

