#pragma once
#include "../unitysdk.h"

namespace FlatData { class AttendanceCountRule; }

namespace FlatData
{
	inline static constexpr unsigned int AttendanceCountRule_TypeDefinitionIndex = 9541;

	class AttendanceCountRule : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::FlatData::AttendanceCountRule* Accumulation; // 0x0
		::FlatData::AttendanceCountRule* Date; // 0x0

	};
}

