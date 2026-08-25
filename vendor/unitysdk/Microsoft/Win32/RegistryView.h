#pragma once
#include "../../unitysdk.h"

namespace Microsoft::Win32 { class RegistryView; }

namespace Microsoft::Win32
{
	inline static constexpr unsigned int RegistryView_TypeDefinitionIndex = 23645;

	class RegistryView : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::Microsoft::Win32::RegistryView* Default; // 0x0
		::Microsoft::Win32::RegistryView* Registry64; // 0x0
		::Microsoft::Win32::RegistryView* Registry32; // 0x0

	};
}

