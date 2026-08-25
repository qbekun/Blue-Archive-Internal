#pragma once
#include "../../unitysdk.h"

namespace Microsoft::Win32 { class RegistryKeyPermissionCheck; }

namespace Microsoft::Win32
{
	inline static constexpr unsigned int RegistryKeyPermissionCheck_TypeDefinitionIndex = 23643;

	class RegistryKeyPermissionCheck : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::Microsoft::Win32::RegistryKeyPermissionCheck* Default; // 0x0
		::Microsoft::Win32::RegistryKeyPermissionCheck* ReadSubTree; // 0x0
		::Microsoft::Win32::RegistryKeyPermissionCheck* ReadWriteSubTree; // 0x0

	};
}

