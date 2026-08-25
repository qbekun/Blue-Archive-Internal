#pragma once
#include "../../unitysdk.h"

namespace Microsoft::Win32 { class RegistryHive; }

namespace Microsoft::Win32
{
	inline static constexpr unsigned int RegistryHive_TypeDefinitionIndex = 23640;

	class RegistryHive : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::Microsoft::Win32::RegistryHive* ClassesRoot; // 0x0
		::Microsoft::Win32::RegistryHive* CurrentUser; // 0x0
		::Microsoft::Win32::RegistryHive* LocalMachine; // 0x0
		::Microsoft::Win32::RegistryHive* Users; // 0x0
		::Microsoft::Win32::RegistryHive* PerformanceData; // 0x0
		::Microsoft::Win32::RegistryHive* CurrentConfig; // 0x0
		::Microsoft::Win32::RegistryHive* DynData; // 0x0

	};
}

