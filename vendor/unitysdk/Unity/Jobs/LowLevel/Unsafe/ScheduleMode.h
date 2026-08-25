#pragma once
#include "../../../../unitysdk.h"

namespace Unity::Jobs::LowLevel::Unsafe { class ScheduleMode; }

namespace Unity::Jobs::LowLevel::Unsafe
{
	inline static constexpr unsigned int ScheduleMode_TypeDefinitionIndex = 30880;

	class ScheduleMode : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::Unity::Jobs::LowLevel::Unsafe::ScheduleMode* Run; // 0x0
		::Unity::Jobs::LowLevel::Unsafe::ScheduleMode* Batched; // 0x0
		::Unity::Jobs::LowLevel::Unsafe::ScheduleMode* Parallel; // 0x0
		::Unity::Jobs::LowLevel::Unsafe::ScheduleMode* Single; // 0x0

	};
}

