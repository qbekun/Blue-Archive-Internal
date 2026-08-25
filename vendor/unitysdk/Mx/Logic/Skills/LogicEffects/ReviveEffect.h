#pragma once
#include "../../../../unitysdk.h"

namespace MX::Core::Math { class BasisPoint; }
namespace MX::Logic::Data { class ReviveEffectValue; }
namespace MX::Logic::Skills { class SkillSpecification; }
namespace MX::Logic::Skills::LogicEffects { class LogicEffectHitSpecification; }

#define MX_LOGIC_SKILLS_LOGICEFFECTS_REVIVEEFFECT_.CTOR_OFFSET UNITYSDK_OFFSET(0x1420110)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_REVIVEEFFECT_GET_ISDURATIONCHANGEDBYSTAT_OFFSET UNITYSDK_OFFSET(0x1420170)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_REVIVEEFFECT_GET_HITPOINTRATE_OFFSET UNITYSDK_OFFSET(0x1420180)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_REVIVEEFFECT_GET_RESETCOOLTIME_OFFSET UNITYSDK_OFFSET(0x1420190)

namespace MX::Logic::Skills::LogicEffects
{
	inline static constexpr unsigned int ReviveEffect_TypeDefinitionIndex = 14792;

	class ReviveEffect : public Il2CppObject
	{
	public:
		::MX::Core::Math::BasisPoint* _HitPointRate_k__BackingField; // 0xD0
		::System::Boolean _ResetCoolTime_k__BackingField; // 0xD8

		::System::Void .ctor(::MX::Logic::Data::ReviveEffectValue* arg, ::MX::Logic::Skills::SkillSpecification* arg2, ::MX::Logic::Skills::LogicEffects::LogicEffectHitSpecification* arg3)
		{
			((::System::Void(*)(::MX::Logic::Data::ReviveEffectValue*, ::MX::Logic::Skills::SkillSpecification*, ::MX::Logic::Skills::LogicEffects::LogicEffectHitSpecification*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_REVIVEEFFECT_.CTOR_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Boolean get_IsDurationChangedByStat()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_REVIVEEFFECT_GET_ISDURATIONCHANGEDBYSTAT_OFFSET))(nullptr);
		}

		::MX::Core::Math::BasisPoint* get_HitPointRate()
		{
			return ((::MX::Core::Math::BasisPoint*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_REVIVEEFFECT_GET_HITPOINTRATE_OFFSET))(nullptr);
		}

		::System::Boolean get_ResetCoolTime()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_REVIVEEFFECT_GET_RESETCOOLTIME_OFFSET))(nullptr);
		}

	};
}

