#pragma once
#include "../../../../unitysdk.h"

namespace MX::Logic::BattleEntities { class HeroStatus; }
namespace MX::Logic::Data { class StatusRemoveEffectValue; }
namespace MX::Logic::Skills { class SkillSpecification; }
namespace MX::Logic::Skills::LogicEffects { class LogicEffectHitSpecification; }

#define MX_LOGIC_SKILLS_LOGICEFFECTS_STATUSREMOVEEFFECT_GET_TARGETSTATUS_OFFSET UNITYSDK_OFFSET(0x1423510)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_STATUSREMOVEEFFECT_GET_ISDURATIONCHANGEDBYSTAT_OFFSET UNITYSDK_OFFSET(0x1423520)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_STATUSREMOVEEFFECT_.CTOR_OFFSET UNITYSDK_OFFSET(0x1423530)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_STATUSREMOVEEFFECT_SET_TARGETSTATUS_OFFSET UNITYSDK_OFFSET(0x1423570)

namespace MX::Logic::Skills::LogicEffects
{
	inline static constexpr unsigned int StatusRemoveEffect_TypeDefinitionIndex = 14810;

	class StatusRemoveEffect : public Il2CppObject
	{
	public:
		::MX::Logic::BattleEntities::HeroStatus* _TargetStatus_k__BackingField; // 0xD0

		::MX::Logic::BattleEntities::HeroStatus* get_TargetStatus()
		{
			return ((::MX::Logic::BattleEntities::HeroStatus*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_STATUSREMOVEEFFECT_GET_TARGETSTATUS_OFFSET))(nullptr);
		}

		::System::Boolean get_IsDurationChangedByStat()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_STATUSREMOVEEFFECT_GET_ISDURATIONCHANGEDBYSTAT_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::Logic::Data::StatusRemoveEffectValue* arg, ::MX::Logic::Skills::SkillSpecification* arg2, ::MX::Logic::Skills::LogicEffects::LogicEffectHitSpecification* arg3)
		{
			((::System::Void(*)(::MX::Logic::Data::StatusRemoveEffectValue*, ::MX::Logic::Skills::SkillSpecification*, ::MX::Logic::Skills::LogicEffects::LogicEffectHitSpecification*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_STATUSREMOVEEFFECT_.CTOR_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void set_TargetStatus(::MX::Logic::BattleEntities::HeroStatus* arg)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::HeroStatus*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_STATUSREMOVEEFFECT_SET_TARGETSTATUS_OFFSET))(arg, nullptr);
		}

	};
}

