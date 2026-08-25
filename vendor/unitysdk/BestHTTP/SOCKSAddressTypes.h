#pragma once
#include "../unitysdk.h"

namespace BestHTTP { class SOCKSAddressTypes; }

namespace BestHTTP
{
	inline static constexpr unsigned int SOCKSAddressTypes_TypeDefinitionIndex = 21321;

	class SOCKSAddressTypes : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::BestHTTP::SOCKSAddressTypes* IPV4; // 0x0
		::BestHTTP::SOCKSAddressTypes* DomainName; // 0x0
		::BestHTTP::SOCKSAddressTypes* IPv6; // 0x0

	};
}

