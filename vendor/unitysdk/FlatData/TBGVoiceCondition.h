#pragma once
#include "../unitysdk.h"

namespace FlatData { class TBGVoiceCondition; }

namespace FlatData
{
	inline static constexpr unsigned int TBGVoiceCondition_TypeDefinitionIndex = 9572;

	class TBGVoiceCondition : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::FlatData::TBGVoiceCondition* None; // 0x0
		::FlatData::TBGVoiceCondition* DiceResultSuccess; // 0x0
		::FlatData::TBGVoiceCondition* DiceResultFailBattle; // 0x0
		::FlatData::TBGVoiceCondition* DiceResultFailRandom; // 0x0
		::FlatData::TBGVoiceCondition* EnemyDie; // 0x0
		::FlatData::TBGVoiceCondition* TreasureBoxNormal; // 0x0
		::FlatData::TBGVoiceCondition* TreasureBoxSpecial; // 0x0
		::FlatData::TBGVoiceCondition* FacilityResult; // 0x0

	};
}

