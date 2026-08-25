#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_NET_NETWORKINFORMATION_WIN32IPV4INTERFACESTATISTICS_.CTOR_OFFSET UNITYSDK_OFFSET(0x9A91990)

namespace System::Net::NetworkInformation
{
	inline static constexpr unsigned int Win32IPv4InterfaceStatistics_TypeDefinitionIndex = 29856;

	class Win32IPv4InterfaceStatistics : public Il2CppObject
	{
	public:
		::System::Net::NetworkInformation::Win32_MIB_IFROW* info; // 0x10

		::System::Void .ctor(::System::Net::NetworkInformation::Win32_MIB_IFROW* arg)
		{
			((::System::Void(*)(::System::Net::NetworkInformation::Win32_MIB_IFROW*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_WIN32IPV4INTERFACESTATISTICS_.CTOR_OFFSET))(arg, nullptr);
		}

	};
}

