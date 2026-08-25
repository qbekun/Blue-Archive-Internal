#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Data { class SkillCardCopyEndCondition; }
namespace MX::GameData::DAO::Battle { class SkillCardCopyTargetEffectDAO; }

#define MX_LOGIC_DATA_SKILLCARDCOPYTARGETEFFECTVALUE_GET_DURATION_OFFSET UNITYSDK_OFFSET(0x123EBE0)
#define MX_LOGIC_DATA_SKILLCARDCOPYTARGETEFFECTVALUE_GET_CHANGESKILLCARDTOCCTOCASTERLOGICEFFECTGROUPID_OFFSET UNITYSDK_OFFSET(0x123EBF0)
#define MX_LOGIC_DATA_SKILLCARDCOPYTARGETEFFECTVALUE_.CTOR_OFFSET UNITYSDK_OFFSET(0x123EC00)
#define MX_LOGIC_DATA_SKILLCARDCOPYTARGETEFFECTVALUE_GET_ENDCONDITIONARGUMENT_OFFSET UNITYSDK_OFFSET(0x123ECD0)
#define MX_LOGIC_DATA_SKILLCARDCOPYTARGETEFFECTVALUE_GET_ENDCONDITION_OFFSET UNITYSDK_OFFSET(0x123ECE0)
#define MX_LOGIC_DATA_SKILLCARDCOPYTARGETEFFECTVALUE_GET_DEDUCTREDRAWGAUGEWHENORIGINALCARDINHAND_OFFSET UNITYSDK_OFFSET(0x123ECF0)
#define MX_LOGIC_DATA_SKILLCARDCOPYTARGETEFFECTVALUE_GET_DISPELLABLE_OFFSET UNITYSDK_OFFSET(0x123ED00)
#define MX_LOGIC_DATA_SKILLCARDCOPYTARGETEFFECTVALUE_GET_APPLYLOGICEFFECTGROUPIDWHENTRIGGERED_OFFSET UNITYSDK_OFFSET(0x123ED10)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int SkillCardCopyTargetEffectValue_TypeDefinitionIndex = 13923;

	class SkillCardCopyTargetEffectValue : public Il2CppObject
	{
	public:
		::System::Int64 _Duration_k__BackingField; // 0x48
		::MX::Logic::Data::SkillCardCopyEndCondition* _EndCondition_k__BackingField; // 0x50
		::System::String* _EndConditionArgument_k__BackingField; // 0x58
		::System::Boolean _Dispellable_k__BackingField; // 0x60
		::System::String* _ChangeSkillCardToCCToCasterLogicEffectGroupId_k__BackingField; // 0x68
		::Il2CppArray<::System::Object*>* _ApplyLogicEffectGroupIdWhenTriggered_k__BackingField; // 0x70
		::System::Boolean _DeductRedrawGaugeWhenOriginalCardInHand_k__BackingField; // 0x78

		::System::Int64 get_Duration()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_SKILLCARDCOPYTARGETEFFECTVALUE_GET_DURATION_OFFSET))(nullptr);
		}

		::System::String* get_ChangeSkillCardToCCToCasterLogicEffectGroupId()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_SKILLCARDCOPYTARGETEFFECTVALUE_GET_CHANGESKILLCARDTOCCTOCASTERLOGICEFFECTGROUPID_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::GameData::DAO::Battle::SkillCardCopyTargetEffectDAO* arg)
		{
			((::System::Void(*)(::MX::GameData::DAO::Battle::SkillCardCopyTargetEffectDAO*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_SKILLCARDCOPYTARGETEFFECTVALUE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::String* get_EndConditionArgument()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_SKILLCARDCOPYTARGETEFFECTVALUE_GET_ENDCONDITIONARGUMENT_OFFSET))(nullptr);
		}

		::MX::Logic::Data::SkillCardCopyEndCondition* get_EndCondition()
		{
			return ((::MX::Logic::Data::SkillCardCopyEndCondition*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_SKILLCARDCOPYTARGETEFFECTVALUE_GET_ENDCONDITION_OFFSET))(nullptr);
		}

		::System::Boolean get_DeductRedrawGaugeWhenOriginalCardInHand()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_SKILLCARDCOPYTARGETEFFECTVALUE_GET_DEDUCTREDRAWGAUGEWHENORIGINALCARDINHAND_OFFSET))(nullptr);
		}

		::System::Boolean get_Dispellable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_SKILLCARDCOPYTARGETEFFECTVALUE_GET_DISPELLABLE_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* get_ApplyLogicEffectGroupIdWhenTriggered()
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_SKILLCARDCOPYTARGETEFFECTVALUE_GET_APPLYLOGICEFFECTGROUPIDWHENTRIGGERED_OFFSET))(nullptr);
		}

	};
}

