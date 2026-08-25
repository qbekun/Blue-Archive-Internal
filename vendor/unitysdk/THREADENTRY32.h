#pragma once
#include "unitysdk.h"

	inline static constexpr unsigned int THREADENTRY32_TypeDefinitionIndex = 25405;

	class THREADENTRY32 : public Il2CppObject
	{
	public:
		::System::UInt32 dwSize; // 0x10
		::System::UInt32 cntUsage; // 0x14
		::System::UInt32 th32ThreadID; // 0x18
		::System::UInt32 th32OwnerProcessID; // 0x1C
		::System::Int32 tpBasePri; // 0x20
		::System::Int32 tpDeltaPri; // 0x24
		::System::UInt32 dwFlags; // 0x28

	};

