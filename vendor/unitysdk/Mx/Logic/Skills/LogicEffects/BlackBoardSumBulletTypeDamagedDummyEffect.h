#pragma once
#include "../../../../unitysdk.h"

namespace MX::Logic::Skills::LogicEffects { class BlackBoardSumBulletTypeDamagedEffect; }
namespace MX::Logic::Data { class DummyEffectValue; }

#define MX_LOGIC_SKILLS_LOGICEFFECTS_BLACKBOARDSUMBULLETTYPEDAMAGEDDUMMYEFFECT_.CTOR_OFFSET UNITYSDK_OFFSET(0x140AA50)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_BLACKBOARDSUMBULLETTYPEDAMAGEDDUMMYEFFECT_GET_SUMBULLETTYPEDAMAGEDEFFECT_OFFSET UNITYSDK_OFFSET(0x140AAC0)

namespace MX::Logic::Skills::LogicEffects
{
	inline static constexpr unsigned int BlackBoardSumBulletTypeDamagedDummyEffect_TypeDefinitionIndex = 14702;

	class BlackBoardSumBulletTypeDamagedDummyEffect : public Il2CppObject
	{
	public:
		::MX::Logic::Skills::LogicEffects::BlackBoardSumBulletTypeDamagedEffect* _SumBulletTypeDamagedEffect_k__BackingField; // 0xE0

		::System::Void .ctor(::MX::Logic::Skills::LogicEffects::BlackBoardSumBulletTypeDamagedEffect* arg, ::MX::Logic::Data::DummyEffectValue* arg2)
		{
			((::System::Void(*)(::MX::Logic::Skills::LogicEffects::BlackBoardSumBulletTypeDamagedEffect*, ::MX::Logic::Data::DummyEffectValue*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_BLACKBOARDSUMBULLETTYPEDAMAGEDDUMMYEFFECT_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

		::MX::Logic::Skills::LogicEffects::BlackBoardSumBulletTypeDamagedEffect* get_SumBulletTypeDamagedEffect()
		{
			return ((::MX::Logic::Skills::LogicEffects::BlackBoardSumBulletTypeDamagedEffect*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_BLACKBOARDSUMBULLETTYPEDAMAGEDDUMMYEFFECT_GET_SUMBULLETTYPEDAMAGEDEFFECT_OFFSET))(nullptr);
		}

	};
}

