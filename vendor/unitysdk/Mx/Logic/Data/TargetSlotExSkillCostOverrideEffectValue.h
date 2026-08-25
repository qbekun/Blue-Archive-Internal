#pragma once
#include "../../../unitysdk.h"

namespace MX::GameData::DAO::Battle { class TargetSlotExSkillCostOverrideEffectDAO; }

#define MX_LOGIC_DATA_TARGETSLOTEXSKILLCOSTOVERRIDEEFFECTVALUE_.CTOR_OFFSET UNITYSDK_OFFSET(0x12405C0)
#define MX_LOGIC_DATA_TARGETSLOTEXSKILLCOSTOVERRIDEEFFECTVALUE_GET_EFFECTDAO_OFFSET UNITYSDK_OFFSET(0x1240650)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int TargetSlotExSkillCostOverrideEffectValue_TypeDefinitionIndex = 13934;

	class TargetSlotExSkillCostOverrideEffectValue : public Il2CppObject
	{
	public:
		::MX::GameData::DAO::Battle::TargetSlotExSkillCostOverrideEffectDAO* _EffectDAO_k__BackingField; // 0x48

		::System::Void .ctor(::MX::GameData::DAO::Battle::TargetSlotExSkillCostOverrideEffectDAO* arg)
		{
			((::System::Void(*)(::MX::GameData::DAO::Battle::TargetSlotExSkillCostOverrideEffectDAO*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_TARGETSLOTEXSKILLCOSTOVERRIDEEFFECTVALUE_.CTOR_OFFSET))(arg, nullptr);
		}

		::MX::GameData::DAO::Battle::TargetSlotExSkillCostOverrideEffectDAO* get_EffectDAO()
		{
			return ((::MX::GameData::DAO::Battle::TargetSlotExSkillCostOverrideEffectDAO*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_TARGETSLOTEXSKILLCOSTOVERRIDEEFFECTVALUE_GET_EFFECTDAO_OFFSET))(nullptr);
		}

	};
}

