#pragma once
#include "../../../../unitysdk.h"

namespace MX::Logic::BattleEntities { class SkillSlot; }
namespace MX::Logic::Battles { class Battle; }
namespace MX::Logic::Data { class ResetAutoUseRuleEffectValue; }
namespace MX::Logic::Skills { class SkillSpecification; }
namespace MX::Logic::Skills::LogicEffects { class LogicEffectHitSpecification; }

#define MX_LOGIC_SKILLS_LOGICEFFECTS_RESETAUTOUSERULEEFFECT_RESETAUTOUSERULE_OFFSET UNITYSDK_OFFSET(0x141FED0)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_RESETAUTOUSERULEEFFECT_GET_RESETISUSESKILLOK_OFFSET UNITYSDK_OFFSET(0x1420050)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_RESETAUTOUSERULEEFFECT_GET_TARGETSKILLSLOT_OFFSET UNITYSDK_OFFSET(0x1420060)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_RESETAUTOUSERULEEFFECT_GET_TARGETFORMINDEX_OFFSET UNITYSDK_OFFSET(0x1420070)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_RESETAUTOUSERULEEFFECT_GET_RESETCONDITION_OFFSET UNITYSDK_OFFSET(0x1420080)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_RESETAUTOUSERULEEFFECT_GET_RESETCURRENTTRIGGERCOUNT_OFFSET UNITYSDK_OFFSET(0x1420090)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_RESETAUTOUSERULEEFFECT_.CTOR_OFFSET UNITYSDK_OFFSET(0x14200A0)

namespace MX::Logic::Skills::LogicEffects
{
	inline static constexpr unsigned int ResetAutoUseRuleEffect_TypeDefinitionIndex = 14790;

	class ResetAutoUseRuleEffect : public Il2CppObject
	{
	public:
		::System::Int32 _TargetFormIndex_k__BackingField; // 0xD0
		::MX::Logic::BattleEntities::SkillSlot* _TargetSkillSlot_k__BackingField; // 0xD4
		::System::Boolean _ResetIsUseSkillOk_k__BackingField; // 0xD8
		::System::Boolean _ResetCurrentTriggerCount_k__BackingField; // 0xD9
		::System::Boolean _ResetCondition_k__BackingField; // 0xDA

		::System::Void ResetAutoUseRule(::MX::Logic::Battles::Battle* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_RESETAUTOUSERULEEFFECT_RESETAUTOUSERULE_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_ResetIsUseSkillOk()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_RESETAUTOUSERULEEFFECT_GET_RESETISUSESKILLOK_OFFSET))(nullptr);
		}

		::MX::Logic::BattleEntities::SkillSlot* get_TargetSkillSlot()
		{
			return ((::MX::Logic::BattleEntities::SkillSlot*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_RESETAUTOUSERULEEFFECT_GET_TARGETSKILLSLOT_OFFSET))(nullptr);
		}

		::System::Int32 get_TargetFormIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_RESETAUTOUSERULEEFFECT_GET_TARGETFORMINDEX_OFFSET))(nullptr);
		}

		::System::Boolean get_ResetCondition()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_RESETAUTOUSERULEEFFECT_GET_RESETCONDITION_OFFSET))(nullptr);
		}

		::System::Boolean get_ResetCurrentTriggerCount()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_RESETAUTOUSERULEEFFECT_GET_RESETCURRENTTRIGGERCOUNT_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::Logic::Data::ResetAutoUseRuleEffectValue* arg, ::MX::Logic::Skills::SkillSpecification* arg2, ::MX::Logic::Skills::LogicEffects::LogicEffectHitSpecification* arg3)
		{
			((::System::Void(*)(::MX::Logic::Data::ResetAutoUseRuleEffectValue*, ::MX::Logic::Skills::SkillSpecification*, ::MX::Logic::Skills::LogicEffects::LogicEffectHitSpecification*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_RESETAUTOUSERULEEFFECT_.CTOR_OFFSET))(arg, arg2, arg3, nullptr);
		}

	};
}

