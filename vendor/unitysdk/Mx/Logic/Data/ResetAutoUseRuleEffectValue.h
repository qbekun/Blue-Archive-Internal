#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::BattleEntities { class SkillSlot; }
namespace MX::GameData::DAO::Battle { class ResetAutoUseRuleEffectDAO; }

#define MX_LOGIC_DATA_RESETAUTOUSERULEEFFECTVALUE_GET_TARGETFORMINDEX_OFFSET UNITYSDK_OFFSET(0x123DE70)
#define MX_LOGIC_DATA_RESETAUTOUSERULEEFFECTVALUE_GET_RESETCONDITION_OFFSET UNITYSDK_OFFSET(0x123DE80)
#define MX_LOGIC_DATA_RESETAUTOUSERULEEFFECTVALUE_.CTOR_OFFSET UNITYSDK_OFFSET(0x123DE90)
#define MX_LOGIC_DATA_RESETAUTOUSERULEEFFECTVALUE_GET_RESETISUSESKILLOK_OFFSET UNITYSDK_OFFSET(0x123DF30)
#define MX_LOGIC_DATA_RESETAUTOUSERULEEFFECTVALUE_GET_RESETCURRENTTRIGGERCOUNT_OFFSET UNITYSDK_OFFSET(0x123DF40)
#define MX_LOGIC_DATA_RESETAUTOUSERULEEFFECTVALUE_GET_TARGETSKILLSLOT_OFFSET UNITYSDK_OFFSET(0x123DF50)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int ResetAutoUseRuleEffectValue_TypeDefinitionIndex = 13917;

	class ResetAutoUseRuleEffectValue : public Il2CppObject
	{
	public:
		::System::Int32 _TargetFormIndex_k__BackingField; // 0x48
		::MX::Logic::BattleEntities::SkillSlot* _TargetSkillSlot_k__BackingField; // 0x4C
		::System::Boolean _ResetIsUseSkillOk_k__BackingField; // 0x50
		::System::Boolean _ResetCurrentTriggerCount_k__BackingField; // 0x51
		::System::Boolean _ResetCondition_k__BackingField; // 0x52

		::System::Int32 get_TargetFormIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_RESETAUTOUSERULEEFFECTVALUE_GET_TARGETFORMINDEX_OFFSET))(nullptr);
		}

		::System::Boolean get_ResetCondition()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_RESETAUTOUSERULEEFFECTVALUE_GET_RESETCONDITION_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::GameData::DAO::Battle::ResetAutoUseRuleEffectDAO* arg)
		{
			((::System::Void(*)(::MX::GameData::DAO::Battle::ResetAutoUseRuleEffectDAO*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_RESETAUTOUSERULEEFFECTVALUE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_ResetIsUseSkillOk()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_RESETAUTOUSERULEEFFECTVALUE_GET_RESETISUSESKILLOK_OFFSET))(nullptr);
		}

		::System::Boolean get_ResetCurrentTriggerCount()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_RESETAUTOUSERULEEFFECTVALUE_GET_RESETCURRENTTRIGGERCOUNT_OFFSET))(nullptr);
		}

		::MX::Logic::BattleEntities::SkillSlot* get_TargetSkillSlot()
		{
			return ((::MX::Logic::BattleEntities::SkillSlot*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_RESETAUTOUSERULEEFFECTVALUE_GET_TARGETSKILLSLOT_OFFSET))(nullptr);
		}

	};
}

