#pragma once
#include "../../../../unitysdk.h"

namespace MX::GameData::DAO::Battle { class TargetSlotExSkillCostOverrideEffectDAO; }
namespace MX::Logic::Data { class TargetSlotExSkillCostOverrideEffectValue; }
namespace MX::Logic::Skills { class SkillSpecification; }
namespace MX::Logic::Skills::LogicEffects { class LogicEffectHitSpecification; }
namespace MX::Logic::Battles { class Battle; }
namespace MX::Logic::BattleEntities { class SkillSlot; }

#define MX_LOGIC_SKILLS_LOGICEFFECTS_TARGETSLOTEXSKILLCOSTOVERRIDEEFFECT_GET_EFFECTDATA_OFFSET UNITYSDK_OFFSET(0x1423580)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_TARGETSLOTEXSKILLCOSTOVERRIDEEFFECT_.CTOR_OFFSET UNITYSDK_OFFSET(0x1423590)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_TARGETSLOTEXSKILLCOSTOVERRIDEEFFECT_GETOVERRIDDENCOSTAMOUNT_OFFSET UNITYSDK_OFFSET(0x14235E0)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_TARGETSLOTEXSKILLCOSTOVERRIDEEFFECT_SET_EFFECTDATA_OFFSET UNITYSDK_OFFSET(0x14235F0)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_TARGETSLOTEXSKILLCOSTOVERRIDEEFFECT_ACTIVATE_OFFSET UNITYSDK_OFFSET(0x1423610)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_TARGETSLOTEXSKILLCOSTOVERRIDEEFFECT_ISSLOTMATCHED_OFFSET UNITYSDK_OFFSET(0x1423640)

namespace MX::Logic::Skills::LogicEffects
{
	inline static constexpr unsigned int TargetSlotExSkillCostOverrideEffect_TypeDefinitionIndex = 14811;

	class TargetSlotExSkillCostOverrideEffect : public Il2CppObject
	{
	public:
		::System::Int32 overrideCost; // 0xD0
		::MX::GameData::DAO::Battle::TargetSlotExSkillCostOverrideEffectDAO* _EffectData_k__BackingField; // 0xD8

		::MX::GameData::DAO::Battle::TargetSlotExSkillCostOverrideEffectDAO* get_EffectData()
		{
			return ((::MX::GameData::DAO::Battle::TargetSlotExSkillCostOverrideEffectDAO*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_TARGETSLOTEXSKILLCOSTOVERRIDEEFFECT_GET_EFFECTDATA_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::Logic::Data::TargetSlotExSkillCostOverrideEffectValue* arg, ::MX::Logic::Skills::SkillSpecification* arg2, ::MX::Logic::Skills::LogicEffects::LogicEffectHitSpecification* arg3)
		{
			((::System::Void(*)(::MX::Logic::Data::TargetSlotExSkillCostOverrideEffectValue*, ::MX::Logic::Skills::SkillSpecification*, ::MX::Logic::Skills::LogicEffects::LogicEffectHitSpecification*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_TARGETSLOTEXSKILLCOSTOVERRIDEEFFECT_.CTOR_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Int32 GetOverriddenCostAmount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_TARGETSLOTEXSKILLCOSTOVERRIDEEFFECT_GETOVERRIDDENCOSTAMOUNT_OFFSET))(nullptr);
		}

		::System::Void set_EffectData(::MX::GameData::DAO::Battle::TargetSlotExSkillCostOverrideEffectDAO* arg)
		{
			((::System::Void(*)(::MX::GameData::DAO::Battle::TargetSlotExSkillCostOverrideEffectDAO*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_TARGETSLOTEXSKILLCOSTOVERRIDEEFFECT_SET_EFFECTDATA_OFFSET))(arg, nullptr);
		}

		::System::Void Activate(::MX::Logic::Battles::Battle* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_TARGETSLOTEXSKILLCOSTOVERRIDEEFFECT_ACTIVATE_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsSlotMatched(::MX::Logic::BattleEntities::SkillSlot* arg)
		{
			return ((::System::Boolean(*)(::MX::Logic::BattleEntities::SkillSlot*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_TARGETSLOTEXSKILLCOSTOVERRIDEEFFECT_ISSLOTMATCHED_OFFSET))(arg, nullptr);
		}

	};
}

