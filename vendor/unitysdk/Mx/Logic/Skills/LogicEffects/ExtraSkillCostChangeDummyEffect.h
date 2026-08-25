#pragma once
#include "../../../../unitysdk.h"

namespace MX::Logic::Skills::LogicEffects { class ExtraSkillCostChangeEffect; }
namespace MX::Logic::Data { class DummyEffectValue; }

#define MX_LOGIC_SKILLS_LOGICEFFECTS_EXTRASKILLCOSTCHANGEDUMMYEFFECT_GET_SKILLCOSTCHANGEEFFECT_OFFSET UNITYSDK_OFFSET(0x1416820)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_EXTRASKILLCOSTCHANGEDUMMYEFFECT_.CTOR_OFFSET UNITYSDK_OFFSET(0x1416830)

namespace MX::Logic::Skills::LogicEffects
{
	inline static constexpr unsigned int ExtraSkillCostChangeDummyEffect_TypeDefinitionIndex = 14742;

	class ExtraSkillCostChangeDummyEffect : public Il2CppObject
	{
	public:
		::MX::Logic::Skills::LogicEffects::ExtraSkillCostChangeEffect* _SkillCostChangeEffect_k__BackingField; // 0xE0

		::MX::Logic::Skills::LogicEffects::ExtraSkillCostChangeEffect* get_SkillCostChangeEffect()
		{
			return ((::MX::Logic::Skills::LogicEffects::ExtraSkillCostChangeEffect*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_EXTRASKILLCOSTCHANGEDUMMYEFFECT_GET_SKILLCOSTCHANGEEFFECT_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::Logic::Skills::LogicEffects::ExtraSkillCostChangeEffect* arg, ::MX::Logic::Data::DummyEffectValue* arg2)
		{
			((::System::Void(*)(::MX::Logic::Skills::LogicEffects::ExtraSkillCostChangeEffect*, ::MX::Logic::Data::DummyEffectValue*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_EXTRASKILLCOSTCHANGEDUMMYEFFECT_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

	};
}

