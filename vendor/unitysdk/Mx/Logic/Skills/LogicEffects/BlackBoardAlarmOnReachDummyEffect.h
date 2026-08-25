#pragma once
#include "../../../../unitysdk.h"

namespace MX::Logic::Skills::LogicEffects { class BlackBoardAlarmOnReachEffect; }
namespace MX::Logic::Data { class DummyEffectValue; }

#define MX_LOGIC_SKILLS_LOGICEFFECTS_BLACKBOARDALARMONREACHDUMMYEFFECT_GET_ALARMONREACHEFFECT_OFFSET UNITYSDK_OFFSET(0x1408F40)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_BLACKBOARDALARMONREACHDUMMYEFFECT_.CTOR_OFFSET UNITYSDK_OFFSET(0x1408F50)

namespace MX::Logic::Skills::LogicEffects
{
	inline static constexpr unsigned int BlackBoardAlarmOnReachDummyEffect_TypeDefinitionIndex = 14694;

	class BlackBoardAlarmOnReachDummyEffect : public Il2CppObject
	{
	public:
		::MX::Logic::Skills::LogicEffects::BlackBoardAlarmOnReachEffect* _AlarmOnReachEffect_k__BackingField; // 0xE0

		::MX::Logic::Skills::LogicEffects::BlackBoardAlarmOnReachEffect* get_AlarmOnReachEffect()
		{
			return ((::MX::Logic::Skills::LogicEffects::BlackBoardAlarmOnReachEffect*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_BLACKBOARDALARMONREACHDUMMYEFFECT_GET_ALARMONREACHEFFECT_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::Logic::Skills::LogicEffects::BlackBoardAlarmOnReachEffect* arg, ::MX::Logic::Data::DummyEffectValue* arg2)
		{
			((::System::Void(*)(::MX::Logic::Skills::LogicEffects::BlackBoardAlarmOnReachEffect*, ::MX::Logic::Data::DummyEffectValue*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_BLACKBOARDALARMONREACHDUMMYEFFECT_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

	};
}

