#pragma once
#include "../../unitysdk.h"

namespace Microsoft::Win32 { class RegistryKey; }

#define MICROSOFT_WIN32_REGISTRY_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9148780)

namespace Microsoft::Win32
{
	inline static constexpr unsigned int Registry_TypeDefinitionIndex = 23639;

	class Registry : public Il2CppObject
	{
	public:
		::Microsoft::Win32::RegistryKey* CurrentUser; // 0x0
		::Microsoft::Win32::RegistryKey* LocalMachine; // 0x8
		::Microsoft::Win32::RegistryKey* ClassesRoot; // 0x10
		::Microsoft::Win32::RegistryKey* Users; // 0x18
		::Microsoft::Win32::RegistryKey* PerformanceData; // 0x20
		::Microsoft::Win32::RegistryKey* CurrentConfig; // 0x28
		::Microsoft::Win32::RegistryKey* DynData; // 0x30

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_REGISTRY_.CCTOR_OFFSET))(nullptr);
		}

	};
}

