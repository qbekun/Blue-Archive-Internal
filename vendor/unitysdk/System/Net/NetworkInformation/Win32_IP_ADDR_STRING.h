#pragma once
#include "../../../unitysdk.h"

namespace System::Net::NetworkInformation
{
	inline static constexpr unsigned int Win32_IP_ADDR_STRING_TypeDefinitionIndex = 29869;

	class Win32_IP_ADDR_STRING : public Il2CppObject
	{
	public:
		::System::Int32 Next; // 0x10
		::System::String* IpAddress; // 0x18
		::System::String* IpMask; // 0x20
		::System::UInt32 Context; // 0x28

	};
}

