#pragma once
#include "../../../../unitysdk.h"

namespace MX::Core::Math { class BasisPoint; }
namespace MX::Logic::Data { class ChangeCurrentHpRateEffectValue; }
namespace MX::Logic::Skills { class SkillSpecification; }
namespace MX::Logic::Skills::LogicEffects { class LogicEffectHitSpecification; }

#define MX_LOGIC_SKILLS_LOGICEFFECTS_CHANGECURRENTHPRATEEFFECT_.CTOR_OFFSET UNITYSDK_OFFSET(0x140AE70)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_CHANGECURRENTHPRATEEFFECT_APPLY_OFFSET UNITYSDK_OFFSET(0x140AEB0)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_CHANGECURRENTHPRATEEFFECT_GET_HPRATECHANGE_OFFSET UNITYSDK_OFFSET(0x140AFC0)

namespace MX::Logic::Skills::LogicEffects
{
	inline static constexpr unsigned int ChangeCurrentHpRateEffect_TypeDefinitionIndex = 14706;

	class ChangeCurrentHpRateEffect : public Il2CppObject
	{
	public:
		::MX::Core::Math::BasisPoint* _HpRateChange_k__BackingField; // 0xD0

		::System::Void .ctor(::MX::Logic::Data::ChangeCurrentHpRateEffectValue* arg, ::MX::Logic::Skills::SkillSpecification* arg2, ::MX::Logic::Skills::LogicEffects::LogicEffectHitSpecification* arg3)
		{
			((::System::Void(*)(::MX::Logic::Data::ChangeCurrentHpRateEffectValue*, ::MX::Logic::Skills::SkillSpecification*, ::MX::Logic::Skills::LogicEffects::LogicEffectHitSpecification*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_CHANGECURRENTHPRATEEFFECT_.CTOR_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void Apply()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_CHANGECURRENTHPRATEEFFECT_APPLY_OFFSET))(nullptr);
		}

		::MX::Core::Math::BasisPoint* get_HpRateChange()
		{
			return ((::MX::Core::Math::BasisPoint*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_CHANGECURRENTHPRATEEFFECT_GET_HPRATECHANGE_OFFSET))(nullptr);
		}

	};
}

