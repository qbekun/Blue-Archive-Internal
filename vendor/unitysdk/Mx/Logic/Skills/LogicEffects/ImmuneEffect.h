#pragma once
#include "../../../../unitysdk.h"

namespace MX::Logic::Data { class ImmuneEffectValue; }
namespace MX::Logic::Skills { class SkillSpecification; }
namespace MX::Logic::Skills::LogicEffects { class LogicEffectHitSpecification; }
namespace FlatData { class FontType; }
namespace MX::Logic::Skills::LogicEffects { class LogicEffect; }

#define MX_LOGIC_SKILLS_LOGICEFFECTS_IMMUNEEFFECT_GET_DISPELLABLE_OFFSET UNITYSDK_OFFSET(0x141B4F0)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_IMMUNEEFFECT_.CTOR_OFFSET UNITYSDK_OFFSET(0x141B500)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_IMMUNEEFFECT_GET_FLOATERTYPE_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_IMMUNEEFFECT_HASIMMUNE_OFFSET UNITYSDK_OFFSET(0x000000)

namespace MX::Logic::Skills::LogicEffects
{
	inline static constexpr unsigned int ImmuneEffect_TypeDefinitionIndex = 14761;

	class ImmuneEffect : public Il2CppObject
	{
	public:
		::System::Boolean _Dispellable_k__BackingField; // 0xD0
		::System::Int64 DurationFrame; // 0xD8

		::System::Boolean get_Dispellable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_IMMUNEEFFECT_GET_DISPELLABLE_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::Logic::Data::ImmuneEffectValue* arg, ::MX::Logic::Skills::SkillSpecification* arg2, ::MX::Logic::Skills::LogicEffects::LogicEffectHitSpecification* arg3)
		{
			((::System::Void(*)(::MX::Logic::Data::ImmuneEffectValue*, ::MX::Logic::Skills::SkillSpecification*, ::MX::Logic::Skills::LogicEffects::LogicEffectHitSpecification*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_IMMUNEEFFECT_.CTOR_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::FlatData::FontType* get_FloaterType()
		{
			return ((::FlatData::FontType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_IMMUNEEFFECT_GET_FLOATERTYPE_OFFSET))(nullptr);
		}

		::System::Boolean HasImmune(::MX::Logic::Skills::LogicEffects::LogicEffect* arg)
		{
			return ((::System::Boolean(*)(::MX::Logic::Skills::LogicEffects::LogicEffect*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_IMMUNEEFFECT_HASIMMUNE_OFFSET))(arg, nullptr);
		}

	};
}

