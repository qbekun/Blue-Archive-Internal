#pragma once
#include "../unitysdk.h"

namespace FlatData { class AttendanceResetType; }

namespace FlatData
{
	inline static constexpr unsigned int AttendanceResetType_TypeDefinitionIndex = 9542;

	class AttendanceResetType : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::FlatData::AttendanceResetType* User; // 0x0
		::FlatData::AttendanceResetType* Server; // 0x0

	};
}

