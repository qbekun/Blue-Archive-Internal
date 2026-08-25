#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::BattleEntities { class LogicEffectEndCondition; }

#define MX_LOGIC_DATA_FORMCONVERSIONEFFECTDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x11F4150)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int FormConversionEffectData_TypeDefinitionIndex = 13596;

	class FormConversionEffectData : public Il2CppObject
	{
	public:
		::MX::Logic::BattleEntities::LogicEffectEndCondition* FormConversionEndCondition; // 0x58
		::System::Int32 EndConditionArgument; // 0x5C
		::System::Int32 FormIndex; // 0x60
		::System::Int32 NormalAttackIndex; // 0x64
		::System::Int32 PublicSkillIndex; // 0x68
		::System::Boolean Dispellable; // 0x6C
		::System::Boolean ReleaseFormConversionRequired; // 0x6D
		::System::Int32 ReleaseFormConversionDuration; // 0x70
		::System::Boolean DisableUseSkill; // 0x74
		::System::Boolean ExSkillCardRedrawInHand; // 0x75
		::System::Boolean AffectUIGaugeType; // 0x76
		::System::Boolean UseImmediateFormReleaseOnDispel; // 0x77

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_FORMCONVERSIONEFFECTDATA_.CTOR_OFFSET))(nullptr);
		}

	};
}

