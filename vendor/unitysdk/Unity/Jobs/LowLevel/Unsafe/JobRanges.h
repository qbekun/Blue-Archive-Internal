#pragma once
#include "../../../../unitysdk.h"

namespace Unity::Jobs::LowLevel::Unsafe
{
	inline static constexpr unsigned int JobRanges_TypeDefinitionIndex = 30879;

	class JobRanges : public Il2CppObject
	{
	public:
		::System::Int32 BatchSize; // 0x10
		::System::Int32 NumJobs; // 0x14
		::System::Int32 TotalIterationCount; // 0x18
		::System::Int32 NumPhases; // 0x1C
		::System::Int32 StartEndIndex; // 0x20
		::System::Int32 PhaseData; // 0x28

	};
}

