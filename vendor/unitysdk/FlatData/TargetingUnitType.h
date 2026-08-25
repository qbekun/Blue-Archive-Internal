#pragma once
#include "../unitysdk.h"

namespace FlatData { class TargetingUnitType; }

namespace FlatData
{
	inline static constexpr unsigned int TargetingUnitType_TypeDefinitionIndex = 9365;

	class TargetingUnitType : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::FlatData::TargetingUnitType* None; // 0x0
		::FlatData::TargetingUnitType* Near; // 0x0
		::FlatData::TargetingUnitType* Far; // 0x0
		::FlatData::TargetingUnitType* MinHp; // 0x0
		::FlatData::TargetingUnitType* MaxHp; // 0x0
		::FlatData::TargetingUnitType* Random; // 0x0

	};
}

