#pragma once
#include "../../../../unitysdk.h"

namespace MX::Logic::Data { class ImmuneGeneralEffectValue; }
namespace FlatData { class FontType; }
namespace MX::Logic::Skills::LogicEffects { class LogicEffect; }
namespace MX::Logic::Skills { class SkillSpecification; }
namespace MX::Logic::Skills::LogicEffects { class LogicEffectHitSpecification; }

#define MX_LOGIC_SKILLS_LOGICEFFECTS_IMMUNEGENERALEFFECT_GET_FLOATERTYPE_OFFSET UNITYSDK_OFFSET(0x141B9A0)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_IMMUNEGENERALEFFECT_HASIMMUNE_OFFSET UNITYSDK_OFFSET(0x141B9C0)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_IMMUNEGENERALEFFECT_.CTOR_OFFSET UNITYSDK_OFFSET(0x141BAF0)

namespace MX::Logic::Skills::LogicEffects
{
	inline static constexpr unsigned int ImmuneGeneralEffect_TypeDefinitionIndex = 14764;

	class ImmuneGeneralEffect : public Il2CppObject
	{
	public:
		::MX::Logic::Data::ImmuneGeneralEffectValue* immuneGeneralEffectValue; // 0xE0

		::FlatData::FontType* get_FloaterType()
		{
			return ((::FlatData::FontType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_IMMUNEGENERALEFFECT_GET_FLOATERTYPE_OFFSET))(nullptr);
		}

		::System::Boolean HasImmune(::MX::Logic::Skills::LogicEffects::LogicEffect* arg)
		{
			return ((::System::Boolean(*)(::MX::Logic::Skills::LogicEffects::LogicEffect*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_IMMUNEGENERALEFFECT_HASIMMUNE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::MX::Logic::Data::ImmuneGeneralEffectValue* arg, ::MX::Logic::Skills::SkillSpecification* arg2, ::MX::Logic::Skills::LogicEffects::LogicEffectHitSpecification* arg3)
		{
			((::System::Void(*)(::MX::Logic::Data::ImmuneGeneralEffectValue*, ::MX::Logic::Skills::SkillSpecification*, ::MX::Logic::Skills::LogicEffects::LogicEffectHitSpecification*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_IMMUNEGENERALEFFECT_.CTOR_OFFSET))(arg, arg2, arg3, nullptr);
		}

	};
}

