#pragma once
#include "unitysdk.h"

	inline static constexpr unsigned int JOBOBJECT_BASIC_LIMIT_INFORMATION_TypeDefinitionIndex = 10173;

	class JOBOBJECT_BASIC_LIMIT_INFORMATION : public Il2CppObject
	{
	public:
		::System::Int64 PerProcessUserTimeLimit; // 0x10
		::System::Int64 PerJobUserTimeLimit; // 0x18
		::System::UInt32 LimitFlags; // 0x20
		::System::UInt32 MinimumWorkingSetSize; // 0x28
		::System::UInt32 MaximumWorkingSetSize; // 0x30
		::System::UInt32 ActiveProcessLimit; // 0x38
		::System::UInt32 Affinity; // 0x40
		::System::UInt32 PriorityClass; // 0x48
		::System::UInt32 SchedulingClass; // 0x4C

	};

