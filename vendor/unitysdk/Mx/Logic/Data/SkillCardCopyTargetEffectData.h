#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Data { class SkillCardCopyEndCondition; }

#define MX_LOGIC_DATA_SKILLCARDCOPYTARGETEFFECTDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x11F4460)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int SkillCardCopyTargetEffectData_TypeDefinitionIndex = 13632;

	class SkillCardCopyTargetEffectData : public Il2CppObject
	{
	public:
		::System::Int64 Duration; // 0x58
		::MX::Logic::Data::SkillCardCopyEndCondition* EndCondition; // 0x60
		::System::String* EndConditionArgument; // 0x68
		::System::Boolean Dispellable; // 0x70
		::System::String* ChangeSkillCardToCCToCasterLogicEffectGroupId; // 0x78
		::Il2CppArray<::System::Object*>* ApplyLogicEffectGroupIdWhenTriggered; // 0x80
		::System::Boolean DeductRedrawGaugeWhenOriginalCardInHand; // 0x88

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_SKILLCARDCOPYTARGETEFFECTDATA_.CTOR_OFFSET))(nullptr);
		}

	};
}

