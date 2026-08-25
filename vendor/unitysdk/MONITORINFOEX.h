#pragma once
#include "unitysdk.h"

class RECT;

	inline static constexpr unsigned int MONITORINFOEX_TypeDefinitionIndex = 10167;

	class MONITORINFOEX : public Il2CppObject
	{
	public:
		::System::UInt32 cbSize; // 0x10
		RECT* rcMonitor; // 0x14
		RECT* rcWork; // 0x24
		::System::UInt32 dwFlags; // 0x34
		::System::String* szDevice; // 0x38

	};

