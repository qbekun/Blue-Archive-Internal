#pragma once
#include "../../../../unitysdk.h"

namespace MX::Logic::Skills::LogicEffects { class LogicEffect; }

#define MX_LOGIC_SKILLS_LOGICEFFECTS_DATALOGICEFFECTCOMPARER_.CTOR_OFFSET UNITYSDK_OFFSET(0x141BE40)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_DATALOGICEFFECTCOMPARER_COMPARE_OFFSET UNITYSDK_OFFSET(0x141BE80)

namespace MX::Logic::Skills::LogicEffects
{
	inline static constexpr unsigned int DataLogicEffectComparer_TypeDefinitionIndex = 14769;

	class DataLogicEffectComparer : public ::UnityEngine::Timeline::TLSkillActionTrack
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_DATALOGICEFFECTCOMPARER_.CTOR_OFFSET))(nullptr);
		}

		::System::Int32 Compare(::MX::Logic::Skills::LogicEffects::LogicEffect* arg, ::MX::Logic::Skills::LogicEffects::LogicEffect* arg2)
		{
			return ((::System::Int32(*)(::MX::Logic::Skills::LogicEffects::LogicEffect*, ::MX::Logic::Skills::LogicEffects::LogicEffect*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_DATALOGICEFFECTCOMPARER_COMPARE_OFFSET))(arg, arg2, nullptr);
		}

	};
}

