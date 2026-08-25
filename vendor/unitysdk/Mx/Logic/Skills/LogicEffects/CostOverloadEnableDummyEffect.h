#pragma once
#include "../../../../unitysdk.h"

namespace MX::Logic::Skills::LogicEffects { class CostOverloadEnableEffect; }
namespace MX::Logic::Data { class DummyEffectValue; }

#define MX_LOGIC_SKILLS_LOGICEFFECTS_COSTOVERLOADENABLEDUMMYEFFECT_GET_COSTOVERLOADENABLEEFFECT_OFFSET UNITYSDK_OFFSET(0x140C910)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_COSTOVERLOADENABLEDUMMYEFFECT_.CTOR_OFFSET UNITYSDK_OFFSET(0x140C920)

namespace MX::Logic::Skills::LogicEffects
{
	inline static constexpr unsigned int CostOverloadEnableDummyEffect_TypeDefinitionIndex = 14720;

	class CostOverloadEnableDummyEffect : public Il2CppObject
	{
	public:
		::MX::Logic::Skills::LogicEffects::CostOverloadEnableEffect* _CostOverloadEnableEffect_k__BackingField; // 0xE0

		::MX::Logic::Skills::LogicEffects::CostOverloadEnableEffect* get_CostOverloadEnableEffect()
		{
			return ((::MX::Logic::Skills::LogicEffects::CostOverloadEnableEffect*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_COSTOVERLOADENABLEDUMMYEFFECT_GET_COSTOVERLOADENABLEEFFECT_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::Logic::Skills::LogicEffects::CostOverloadEnableEffect* arg, ::MX::Logic::Data::DummyEffectValue* arg2)
		{
			((::System::Void(*)(::MX::Logic::Skills::LogicEffects::CostOverloadEnableEffect*, ::MX::Logic::Data::DummyEffectValue*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_COSTOVERLOADENABLEDUMMYEFFECT_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

	};
}

