#pragma once
#include "../../../../unitysdk.h"

namespace MX::Logic::Data { class ChangeGaugeUITypeEffectValue; }
namespace MX::Logic::Skills { class SkillSpecification; }
namespace MX::Logic::Skills::LogicEffects { class LogicEffectHitSpecification; }

#define MX_LOGIC_SKILLS_LOGICEFFECTS_CHANGEGAUGEUITYPEEFFECT_GET_UITYPETOCHANGE_OFFSET UNITYSDK_OFFSET(0x140B190)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_CHANGEGAUGEUITYPEEFFECT_.CTOR_OFFSET UNITYSDK_OFFSET(0x140B1B0)

namespace MX::Logic::Skills::LogicEffects
{
	inline static constexpr unsigned int ChangeGaugeUITypeEffect_TypeDefinitionIndex = 14708;

	class ChangeGaugeUITypeEffect : public Il2CppObject
	{
	public:
		::MX::Logic::Data::ChangeGaugeUITypeEffectValue* effectValue; // 0xD0

		::System::Int32 get_UITypeToChange()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_CHANGEGAUGEUITYPEEFFECT_GET_UITYPETOCHANGE_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::Logic::Data::ChangeGaugeUITypeEffectValue* arg, ::MX::Logic::Skills::SkillSpecification* arg2, ::MX::Logic::Skills::LogicEffects::LogicEffectHitSpecification* arg3)
		{
			((::System::Void(*)(::MX::Logic::Data::ChangeGaugeUITypeEffectValue*, ::MX::Logic::Skills::SkillSpecification*, ::MX::Logic::Skills::LogicEffects::LogicEffectHitSpecification*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_CHANGEGAUGEUITYPEEFFECT_.CTOR_OFFSET))(arg, arg2, arg3, nullptr);
		}

	};
}

