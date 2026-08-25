#pragma once
#include "../../../unitysdk.h"

namespace System::Net::Sockets
{
	inline static constexpr unsigned int IPProtectionLevel_TypeDefinitionIndex = 29906;

	class IPProtectionLevel : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::System::Net::Sockets::IPProtectionLevel* Unspecified; // 0x0
		::System::Net::Sockets::IPProtectionLevel* Unrestricted; // 0x0
		::System::Net::Sockets::IPProtectionLevel* EdgeRestricted; // 0x0
		::System::Net::Sockets::IPProtectionLevel* Restricted; // 0x0

	};
}

