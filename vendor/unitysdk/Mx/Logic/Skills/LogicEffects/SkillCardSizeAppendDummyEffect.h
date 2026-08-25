#pragma once
#include "../../../../unitysdk.h"

namespace MX::Logic::Skills::LogicEffects { class SkillCardSizeAppendEffect; }
namespace MX::Logic::Data { class DummyEffectValue; }

#define MX_LOGIC_SKILLS_LOGICEFFECTS_SKILLCARDSIZEAPPENDDUMMYEFFECT_.CTOR_OFFSET UNITYSDK_OFFSET(0x14218C0)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_SKILLCARDSIZEAPPENDDUMMYEFFECT_GET_SKILLCARDSIZEAPPENDEFFECT_OFFSET UNITYSDK_OFFSET(0x1421920)

namespace MX::Logic::Skills::LogicEffects
{
	inline static constexpr unsigned int SkillCardSizeAppendDummyEffect_TypeDefinitionIndex = 14800;

	class SkillCardSizeAppendDummyEffect : public Il2CppObject
	{
	public:
		::MX::Logic::Skills::LogicEffects::SkillCardSizeAppendEffect* _SkillCardSizeAppendEffect_k__BackingField; // 0xE0

		::System::Void .ctor(::MX::Logic::Skills::LogicEffects::SkillCardSizeAppendEffect* arg, ::MX::Logic::Data::DummyEffectValue* arg2)
		{
			((::System::Void(*)(::MX::Logic::Skills::LogicEffects::SkillCardSizeAppendEffect*, ::MX::Logic::Data::DummyEffectValue*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_SKILLCARDSIZEAPPENDDUMMYEFFECT_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

		::MX::Logic::Skills::LogicEffects::SkillCardSizeAppendEffect* get_SkillCardSizeAppendEffect()
		{
			return ((::MX::Logic::Skills::LogicEffects::SkillCardSizeAppendEffect*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_SKILLCARDSIZEAPPENDDUMMYEFFECT_GET_SKILLCARDSIZEAPPENDEFFECT_OFFSET))(nullptr);
		}

	};
}

