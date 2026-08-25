#pragma once
#include "../../../../unitysdk.h"

namespace MX::Logic::Skills::LogicEffects { class StartStatusLevelIndicatorEffect; }
namespace MX::Logic::Data { class DummyEffectValue; }

#define MX_LOGIC_SKILLS_LOGICEFFECTS_STARTSTATUSLEVELINDICATORDUMMYEFFECT_.CTOR_OFFSET UNITYSDK_OFFSET(0x1421DE0)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_STARTSTATUSLEVELINDICATORDUMMYEFFECT_GET_STARTSTATUSLEVELINDICATOREFFECT_OFFSET UNITYSDK_OFFSET(0x1421E40)

namespace MX::Logic::Skills::LogicEffects
{
	inline static constexpr unsigned int StartStatusLevelIndicatorDummyEffect_TypeDefinitionIndex = 14805;

	class StartStatusLevelIndicatorDummyEffect : public Il2CppObject
	{
	public:
		::MX::Logic::Skills::LogicEffects::StartStatusLevelIndicatorEffect* _StartStatusLevelIndicatorEffect_k__BackingField; // 0xE0

		::System::Void .ctor(::MX::Logic::Skills::LogicEffects::StartStatusLevelIndicatorEffect* arg, ::MX::Logic::Data::DummyEffectValue* arg2)
		{
			((::System::Void(*)(::MX::Logic::Skills::LogicEffects::StartStatusLevelIndicatorEffect*, ::MX::Logic::Data::DummyEffectValue*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_STARTSTATUSLEVELINDICATORDUMMYEFFECT_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

		::MX::Logic::Skills::LogicEffects::StartStatusLevelIndicatorEffect* get_StartStatusLevelIndicatorEffect()
		{
			return ((::MX::Logic::Skills::LogicEffects::StartStatusLevelIndicatorEffect*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_STARTSTATUSLEVELINDICATORDUMMYEFFECT_GET_STARTSTATUSLEVELINDICATOREFFECT_OFFSET))(nullptr);
		}

	};
}

