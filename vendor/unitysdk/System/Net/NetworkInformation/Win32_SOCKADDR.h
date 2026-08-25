#pragma once
#include "../../../unitysdk.h"

namespace System::Net::NetworkInformation
{
	inline static constexpr unsigned int Win32_SOCKADDR_TypeDefinitionIndex = 29872;

	class Win32_SOCKADDR : public Il2CppObject
	{
	public:
		::System::UInt16 AddressFamily; // 0x10
		::Il2CppArray<::System::Object*>* AddressData; // 0x18

	};
}

