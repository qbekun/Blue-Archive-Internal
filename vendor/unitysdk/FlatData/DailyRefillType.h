#pragma once
#include "../unitysdk.h"

namespace FlatData { class DailyRefillType; }

namespace FlatData
{
	inline static constexpr unsigned int DailyRefillType_TypeDefinitionIndex = 9597;

	class DailyRefillType : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::FlatData::DailyRefillType* None; // 0x0
		::FlatData::DailyRefillType* Default; // 0x0
		::FlatData::DailyRefillType* Login; // 0x0

	};
}

