#pragma once
#include "../../../unitysdk.h"

namespace FlatData { class EndCondition; }

#define MX_LOGIC_DATA_TARGETSLOTEXSKILLCOSTOVERRIDEEFFECTDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x11F4510)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int TargetSlotExSkillCostOverrideEffectData_TypeDefinitionIndex = 13643;

	class TargetSlotExSkillCostOverrideEffectData : public Il2CppObject
	{
	public:
		::System::Boolean Dispellable; // 0x58
		::Il2CppArray<::System::Object*>* TargetExSkillSlot; // 0x60
		::System::Int32 BaseAmount; // 0x68
		::FlatData::EndCondition* EndCondition; // 0x6C
		::System::String* EndConditionArgumentFirst; // 0x70
		::System::String* EndConditionArgumentSecond; // 0x78

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_TARGETSLOTEXSKILLCOSTOVERRIDEEFFECTDATA_.CTOR_OFFSET))(nullptr);
		}

	};
}

