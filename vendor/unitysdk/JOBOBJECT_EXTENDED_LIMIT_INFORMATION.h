#pragma once
#include "unitysdk.h"

class JOBOBJECT_BASIC_LIMIT_INFORMATION;
class IO_COUNTERS;

	inline static constexpr unsigned int JOBOBJECT_EXTENDED_LIMIT_INFORMATION_TypeDefinitionIndex = 10174;

	class JOBOBJECT_EXTENDED_LIMIT_INFORMATION : public Il2CppObject
	{
	public:
		JOBOBJECT_BASIC_LIMIT_INFORMATION* BasicLimitInformation; // 0x10
		IO_COUNTERS* IoInfo; // 0x50
		::System::UInt32 ProcessMemoryLimit; // 0x80
		::System::UInt32 JobMemoryLimit; // 0x88
		::System::UInt32 PeakProcessMemoryUsed; // 0x90
		::System::UInt32 PeakJobMemoryUsed; // 0x98

	};

