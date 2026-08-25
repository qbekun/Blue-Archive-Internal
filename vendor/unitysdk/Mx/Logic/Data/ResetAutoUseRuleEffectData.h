#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::BattleEntities { class SkillSlot; }

#define MX_LOGIC_DATA_RESETAUTOUSERULEEFFECTDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x11F4400)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int ResetAutoUseRuleEffectData_TypeDefinitionIndex = 13626;

	class ResetAutoUseRuleEffectData : public Il2CppObject
	{
	public:
		::System::Int32 TargetFormIndex; // 0x58
		::MX::Logic::BattleEntities::SkillSlot* TargetSkillSlot; // 0x5C
		::System::Boolean ResetIsUseSkillOk; // 0x60
		::System::Boolean ResetCurrentTriggerCount; // 0x61
		::System::Boolean ResetCondition; // 0x62

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_RESETAUTOUSERULEEFFECTDATA_.CTOR_OFFSET))(nullptr);
		}

	};
}

