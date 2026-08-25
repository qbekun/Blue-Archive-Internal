#pragma once
#include "../unitysdk.h"

namespace FlatData { class EndCondition; }

namespace FlatData
{
	inline static constexpr unsigned int EndCondition_TypeDefinitionIndex = 9405;

	class EndCondition : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::FlatData::EndCondition* Duration; // 0x0
		::FlatData::EndCondition* ReloadCount; // 0x0
		::FlatData::EndCondition* AmmoCount; // 0x0
		::FlatData::EndCondition* AmmoHit; // 0x0
		::FlatData::EndCondition* HitCount; // 0x0
		::FlatData::EndCondition* None; // 0x0
		::FlatData::EndCondition* UseExSkillCount; // 0x0
		::FlatData::EndCondition* UseTargetSlotExSkillCount; // 0x0
		::FlatData::EndCondition* UseExSkillOverloadedCount; // 0x0

	};
}

