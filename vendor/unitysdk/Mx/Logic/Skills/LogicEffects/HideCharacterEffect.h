#pragma once
#include "../../../../unitysdk.h"

namespace MX::Logic::Data { class DummyEffectValue; }
namespace MX::Logic::Skills { class SkillSpecification; }
namespace MX::Logic::Skills::LogicEffects { class LogicEffectHitSpecification; }

#define MX_LOGIC_SKILLS_LOGICEFFECTS_HIDECHARACTEREFFECT_.CTOR_OFFSET UNITYSDK_OFFSET(0x141B200)

namespace MX::Logic::Skills::LogicEffects
{
	inline static constexpr unsigned int HideCharacterEffect_TypeDefinitionIndex = 14758;

	class HideCharacterEffect : public Il2CppObject
	{
	public:
		::System::Void .ctor(::MX::Logic::Data::DummyEffectValue* arg, ::MX::Logic::Skills::SkillSpecification* arg2, ::MX::Logic::Skills::LogicEffects::LogicEffectHitSpecification* arg3)
		{
			((::System::Void(*)(::MX::Logic::Data::DummyEffectValue*, ::MX::Logic::Skills::SkillSpecification*, ::MX::Logic::Skills::LogicEffects::LogicEffectHitSpecification*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_HIDECHARACTEREFFECT_.CTOR_OFFSET))(arg, arg2, arg3, nullptr);
		}

	};
}

