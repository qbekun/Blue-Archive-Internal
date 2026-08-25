#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Skills { class TargetSideId; }
namespace MX::Logic::Data { class GaugeChargeConditionType; }

#define MX_LOGIC_DATA_EXSKILLCARDREDRAWGAUGEEFFECTDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x11F40F0)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int ExSkillCardRedrawGaugeEffectData_TypeDefinitionIndex = 13590;

	class ExSkillCardRedrawGaugeEffectData : public Il2CppObject
	{
	public:
		::MX::Logic::Skills::TargetSideId* TargetSide; // 0x58
		::MX::Logic::Data::GaugeChargeConditionType* GaugeChargeCondition; // 0x5C
		::System::String* ConditionParameter; // 0x60
		::System::Int64 TryCount; // 0x68
		::System::Int64 ChargeValue; // 0x70
		::System::Int64 InitialGaugeValue; // 0x78
		::System::Int64 MaxGaugeValue; // 0x80
		::System::Int64 InitialRedrawStackCount; // 0x88
		::System::Int64 MaxRedrawStackCount; // 0x90
		::System::Int64 MaxRedrawTriggerCount; // 0x98
		::System::Boolean IsShowUI; // 0xA0
		::System::String* ApplyLogicEffectGroupIdGetStack; // 0xA8
		::System::Boolean IsNPC; // 0xB0
		::Il2CppArray<::System::Object*>* TacticEntityType; // 0xB8
		::Il2CppArray<::System::Object*>* TargetExSkillSlot; // 0xC0

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_EXSKILLCARDREDRAWGAUGEEFFECTDATA_.CTOR_OFFSET))(nullptr);
		}

	};
}

