#pragma once
#include "../../unitysdk.h"

namespace Microsoft::Win32 { class RegistryValueOptions; }

namespace Microsoft::Win32
{
	inline static constexpr unsigned int RegistryValueOptions_TypeDefinitionIndex = 23644;

	class RegistryValueOptions : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::Microsoft::Win32::RegistryValueOptions* None; // 0x0
		::Microsoft::Win32::RegistryValueOptions* DoNotExpandEnvironmentNames; // 0x0

	};
}

