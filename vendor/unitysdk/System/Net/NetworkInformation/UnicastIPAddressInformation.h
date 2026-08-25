#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_NET_NETWORKINFORMATION_UNICASTIPADDRESSINFORMATION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9A90AB0)

namespace System::Net::NetworkInformation
{
	inline static constexpr unsigned int UnicastIPAddressInformation_TypeDefinitionIndex = 29845;

	class UnicastIPAddressInformation : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_UNICASTIPADDRESSINFORMATION_.CTOR_OFFSET))(nullptr);
		}

	};
}

