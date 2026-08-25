#pragma once
#include "../../../unitysdk.h"

namespace System::Runtime::InteropServices
{
	inline static constexpr unsigned int Architecture_TypeDefinitionIndex = 24683;

	class Architecture : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::System::Runtime::InteropServices::Architecture* X86; // 0x0
		::System::Runtime::InteropServices::Architecture* X64; // 0x0
		::System::Runtime::InteropServices::Architecture* Arm; // 0x0
		::System::Runtime::InteropServices::Architecture* Arm64; // 0x0

	};
}

