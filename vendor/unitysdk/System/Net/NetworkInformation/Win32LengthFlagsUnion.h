#pragma once
#include "../../../unitysdk.h"

namespace System::Net::NetworkInformation
{
	inline static constexpr unsigned int Win32LengthFlagsUnion_TypeDefinitionIndex = 29870;

	class Win32LengthFlagsUnion : public Il2CppObject
	{
	public:
		::System::UInt32 Length; // 0x10
		::System::UInt32 Flags; // 0x14

	};
}

