#pragma once
#include "../../../../unitysdk.h"

namespace MX::Logic::Skills::LogicEffects { class BlackBoardMultiAlarmEffect; }
namespace MX::Logic::Data { class DummyEffectValue; }

#define MX_LOGIC_SKILLS_LOGICEFFECTS_BLACKBOARDMULTIALARMDUMMYEFFECT_GET_ALARMONREACHEFFECT_OFFSET UNITYSDK_OFFSET(0x1409FB0)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_BLACKBOARDMULTIALARMDUMMYEFFECT_.CTOR_OFFSET UNITYSDK_OFFSET(0x1409FC0)

namespace MX::Logic::Skills::LogicEffects
{
	inline static constexpr unsigned int BlackBoardMultiAlarmDummyEffect_TypeDefinitionIndex = 14698;

	class BlackBoardMultiAlarmDummyEffect : public Il2CppObject
	{
	public:
		::MX::Logic::Skills::LogicEffects::BlackBoardMultiAlarmEffect* _AlarmOnReachEffect_k__BackingField; // 0xE0

		::MX::Logic::Skills::LogicEffects::BlackBoardMultiAlarmEffect* get_AlarmOnReachEffect()
		{
			return ((::MX::Logic::Skills::LogicEffects::BlackBoardMultiAlarmEffect*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_BLACKBOARDMULTIALARMDUMMYEFFECT_GET_ALARMONREACHEFFECT_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::Logic::Skills::LogicEffects::BlackBoardMultiAlarmEffect* arg, ::MX::Logic::Data::DummyEffectValue* arg2)
		{
			((::System::Void(*)(::MX::Logic::Skills::LogicEffects::BlackBoardMultiAlarmEffect*, ::MX::Logic::Data::DummyEffectValue*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_BLACKBOARDMULTIALARMDUMMYEFFECT_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

	};
}

