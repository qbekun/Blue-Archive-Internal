#pragma once
#include "../../../../unitysdk.h"

namespace MX::Logic::Data { class RemoveVisualEffectsEffectValue; }
namespace MX::Logic::Skills { class SkillSpecification; }
namespace MX::Logic::Skills::LogicEffects { class LogicEffectHitSpecification; }

#define MX_LOGIC_SKILLS_LOGICEFFECTS_REMOVEVISUALEFFECTSEFFECT_GET_TARGETEFFECTPREFABNAME_OFFSET UNITYSDK_OFFSET(0x141FE60)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_REMOVEVISUALEFFECTSEFFECT_.CTOR_OFFSET UNITYSDK_OFFSET(0x141FE70)

namespace MX::Logic::Skills::LogicEffects
{
	inline static constexpr unsigned int RemoveVisualEffectsEffect_TypeDefinitionIndex = 14789;

	class RemoveVisualEffectsEffect : public Il2CppObject
	{
	public:
		::System::String* _TargetEffectPrefabName_k__BackingField; // 0xD0

		::System::String* get_TargetEffectPrefabName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_REMOVEVISUALEFFECTSEFFECT_GET_TARGETEFFECTPREFABNAME_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::Logic::Data::RemoveVisualEffectsEffectValue* arg, ::MX::Logic::Skills::SkillSpecification* arg2, ::MX::Logic::Skills::LogicEffects::LogicEffectHitSpecification* arg3)
		{
			((::System::Void(*)(::MX::Logic::Data::RemoveVisualEffectsEffectValue*, ::MX::Logic::Skills::SkillSpecification*, ::MX::Logic::Skills::LogicEffects::LogicEffectHitSpecification*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_REMOVEVISUALEFFECTSEFFECT_.CTOR_OFFSET))(arg, arg2, arg3, nullptr);
		}

	};
}

