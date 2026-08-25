#pragma once
#include "../unitysdk.h"

namespace FlatData { class AttendanceType; }

namespace FlatData
{
	inline static constexpr unsigned int AttendanceType_TypeDefinitionIndex = 9540;

	class AttendanceType : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::FlatData::AttendanceType* Basic; // 0x0
		::FlatData::AttendanceType* Event; // 0x0
		::FlatData::AttendanceType* Newbie; // 0x0
		::FlatData::AttendanceType* EventCountDown; // 0x0
		::FlatData::AttendanceType* Event20Days; // 0x0

	};
}

