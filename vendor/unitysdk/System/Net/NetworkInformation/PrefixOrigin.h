#pragma once
#include "../../../unitysdk.h"

namespace System::Net::NetworkInformation
{
	inline static constexpr unsigned int PrefixOrigin_TypeDefinitionIndex = 29843;

	class PrefixOrigin : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::System::Net::NetworkInformation::PrefixOrigin* Other; // 0x0
		::System::Net::NetworkInformation::PrefixOrigin* Manual; // 0x0
		::System::Net::NetworkInformation::PrefixOrigin* WellKnown; // 0x0
		::System::Net::NetworkInformation::PrefixOrigin* Dhcp; // 0x0
		::System::Net::NetworkInformation::PrefixOrigin* RouterAdvertisement; // 0x0

	};
}

