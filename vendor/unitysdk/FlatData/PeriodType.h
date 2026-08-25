#pragma once
#include "../unitysdk.h"

namespace FlatData { class PeriodType; }

namespace FlatData
{
	inline static constexpr unsigned int PeriodType_TypeDefinitionIndex = 9520;

	class PeriodType : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::FlatData::PeriodType* None; // 0x0
		::FlatData::PeriodType* Daily; // 0x0
		::FlatData::PeriodType* Weekly; // 0x0
		::FlatData::PeriodType* Monthly; // 0x0

	};
}

