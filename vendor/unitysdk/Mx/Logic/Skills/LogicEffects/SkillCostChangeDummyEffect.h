#pragma once
#include "../../../../unitysdk.h"

namespace MX::Logic::Skills::LogicEffects { class SkillCostChangeEffect; }
namespace MX::Logic::Data { class DummyEffectValue; }

#define MX_LOGIC_SKILLS_LOGICEFFECTS_SKILLCOSTCHANGEDUMMYEFFECT_GET_SKILLCOSTCHANGEEFFECT_OFFSET UNITYSDK_OFFSET(0x1421A10)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_SKILLCOSTCHANGEDUMMYEFFECT_.CTOR_OFFSET UNITYSDK_OFFSET(0x1421A20)

namespace MX::Logic::Skills::LogicEffects
{
	inline static constexpr unsigned int SkillCostChangeDummyEffect_TypeDefinitionIndex = 14802;

	class SkillCostChangeDummyEffect : public Il2CppObject
	{
	public:
		::MX::Logic::Skills::LogicEffects::SkillCostChangeEffect* _SkillCostChangeEffect_k__BackingField; // 0xE0

		::MX::Logic::Skills::LogicEffects::SkillCostChangeEffect* get_SkillCostChangeEffect()
		{
			return ((::MX::Logic::Skills::LogicEffects::SkillCostChangeEffect*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_SKILLCOSTCHANGEDUMMYEFFECT_GET_SKILLCOSTCHANGEEFFECT_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::Logic::Skills::LogicEffects::SkillCostChangeEffect* arg, ::MX::Logic::Data::DummyEffectValue* arg2)
		{
			((::System::Void(*)(::MX::Logic::Skills::LogicEffects::SkillCostChangeEffect*, ::MX::Logic::Data::DummyEffectValue*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_SKILLCOSTCHANGEDUMMYEFFECT_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

	};
}

