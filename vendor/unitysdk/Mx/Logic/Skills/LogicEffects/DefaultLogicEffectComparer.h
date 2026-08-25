#pragma once
#include "../../../../unitysdk.h"

namespace MX::Logic::Skills::LogicEffects { class LogicEffect; }

#define MX_LOGIC_SKILLS_LOGICEFFECTS_DEFAULTLOGICEFFECTCOMPARER_COMPARE_OFFSET UNITYSDK_OFFSET(0x141BD70)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_DEFAULTLOGICEFFECTCOMPARER_.CTOR_OFFSET UNITYSDK_OFFSET(0x141BE00)

namespace MX::Logic::Skills::LogicEffects
{
	inline static constexpr unsigned int DefaultLogicEffectComparer_TypeDefinitionIndex = 14768;

	class DefaultLogicEffectComparer : public ::UnityEngine::Timeline::TLSkillActionTrack
	{
	public:
		::System::Int32 Compare(::MX::Logic::Skills::LogicEffects::LogicEffect* arg, ::MX::Logic::Skills::LogicEffects::LogicEffect* arg2)
		{
			return ((::System::Int32(*)(::MX::Logic::Skills::LogicEffects::LogicEffect*, ::MX::Logic::Skills::LogicEffects::LogicEffect*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_DEFAULTLOGICEFFECTCOMPARER_COMPARE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_DEFAULTLOGICEFFECTCOMPARER_.CTOR_OFFSET))(nullptr);
		}

	};
}

