#pragma once
#include "../../unitysdk.h"

#define SYSTEM_NET_SYSTEMNETWORKCREDENTIAL_.CTOR_OFFSET UNITYSDK_OFFSET(0x9BA68A0)
#define SYSTEM_NET_SYSTEMNETWORKCREDENTIAL_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9BA68F0)

namespace System::Net
{
	inline static constexpr unsigned int SystemNetworkCredential_TypeDefinitionIndex = 29674;

	class SystemNetworkCredential : public Il2CppObject
	{
	public:
		::System::Net::SystemNetworkCredential* defaultCredential; // 0x0

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SYSTEMNETWORKCREDENTIAL_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SYSTEMNETWORKCREDENTIAL_.CCTOR_OFFSET))(nullptr);
		}

	};
}

