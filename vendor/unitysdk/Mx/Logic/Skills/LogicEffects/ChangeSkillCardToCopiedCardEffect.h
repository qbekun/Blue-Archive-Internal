#pragma once
#include "../../../../unitysdk.h"

namespace MX::Logic::Data { class ChangeSkillCardCostBaseType; }
namespace MX::Logic::Battles { class Battle; }
namespace MX::Logic::Battles { class GroupTag; }
namespace MX::Logic::Data { class SkillCardCopyEndCondition; }
namespace MX::Logic::Data { class ChangeSkillCardToCopiedCardEffectValue; }
namespace MX::Logic::Skills { class SkillSpecification; }
namespace MX::Logic::Skills::LogicEffects { class LogicEffectHitSpecification; }
namespace MX::Logic::Battles { class DotEventArgs; }

#define MX_LOGIC_SKILLS_LOGICEFFECTS_CHANGESKILLCARDTOCOPIEDCARDEFFECT_GET_DISPELLABLE_OFFSET UNITYSDK_OFFSET(0x140B1F0)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_CHANGESKILLCARDTOCOPIEDCARDEFFECT_GET_COPIEDCARDCOSTREFER_OFFSET UNITYSDK_OFFSET(0x140B200)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_CHANGESKILLCARDTOCOPIEDCARDEFFECT_GET_COPIEDCARDCOSTMODIFYBYRATIO_OFFSET UNITYSDK_OFFSET(0x140B210)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_CHANGESKILLCARDTOCOPIEDCARDEFFECT_GET_COPIEDCARDCOSTMODIFYBYAMOUNT_OFFSET UNITYSDK_OFFSET(0x140B220)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_CHANGESKILLCARDTOCOPIEDCARDEFFECT_GET_DEDUCTREDRAWGAUGEWHENORIGINALCARDINHAND_OFFSET UNITYSDK_OFFSET(0x140B230)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_CHANGESKILLCARDTOCOPIEDCARDEFFECT_SET_DEDUCTREDRAWGAUGEWHENORIGINALCARDINHAND_OFFSET UNITYSDK_OFFSET(0x140B240)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_CHANGESKILLCARDTOCOPIEDCARDEFFECT_GET_ENDCONDITION_OFFSET UNITYSDK_OFFSET(0x140B250)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_CHANGESKILLCARDTOCOPIEDCARDEFFECT_SET_ENDCONDITION_OFFSET UNITYSDK_OFFSET(0x140B260)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_CHANGESKILLCARDTOCOPIEDCARDEFFECT_GET_ENDCONDITIONARGUMENT_OFFSET UNITYSDK_OFFSET(0x140B270)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_CHANGESKILLCARDTOCOPIEDCARDEFFECT_SET_ENDCONDITIONARGUMENT_OFFSET UNITYSDK_OFFSET(0x140B280)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_CHANGESKILLCARDTOCOPIEDCARDEFFECT_GET_APPLYLOGICEFFECTGROUPIDWHENTRIGGERED_OFFSET UNITYSDK_OFFSET(0x140B2A0)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_CHANGESKILLCARDTOCOPIEDCARDEFFECT_GET_SKILLCARDCOPYTARGETGROUPID_OFFSET UNITYSDK_OFFSET(0x140B2B0)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_CHANGESKILLCARDTOCOPIEDCARDEFFECT_.CTOR_OFFSET UNITYSDK_OFFSET(0x140B2C0)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_CHANGESKILLCARDTOCOPIEDCARDEFFECT_.CTOR_OFFSET UNITYSDK_OFFSET(0x140B2E0)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_CHANGESKILLCARDTOCOPIEDCARDEFFECT_ISVALID_OFFSET UNITYSDK_OFFSET(0x140B7A0)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_CHANGESKILLCARDTOCOPIEDCARDEFFECT_ACTIVATE_OFFSET UNITYSDK_OFFSET(0x140B7E0)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_CHANGESKILLCARDTOCOPIEDCARDEFFECT_BATTLE_DOTABILITYREMOVED_OFFSET UNITYSDK_OFFSET(0x140B8D0)

namespace MX::Logic::Skills::LogicEffects
{
	inline static constexpr unsigned int ChangeSkillCardToCopiedCardEffect_TypeDefinitionIndex = 14709;

	class ChangeSkillCardToCopiedCardEffect : public Il2CppObject
	{
	public:
		::System::Boolean _Dispellable_k__BackingField; // 0xD0
		::MX::Logic::Data::ChangeSkillCardCostBaseType* _CopiedCardCostRefer_k__BackingField; // 0xD4
		::System::Int64 _CopiedCardCostModifyByRatio_k__BackingField; // 0xD8
		::System::Int32 _CopiedCardCostModifyByAmount_k__BackingField; // 0xE0
		Il2CppObject* dotAbility; // 0xE8
		::MX::Logic::Battles::Battle* battle; // 0xF0
		::System::Int64 changeCharacterId; // 0xF8
		::MX::Logic::Battles::GroupTag* invokerGroupTag; // 0x100
		::System::Boolean _DeductRedrawGaugeWhenOriginalCardInHand_k__BackingField; // 0x104
		::MX::Logic::Data::SkillCardCopyEndCondition* _EndCondition_k__BackingField; // 0x108
		::System::String* _EndConditionArgument_k__BackingField; // 0x110
		::Il2CppArray<::System::Object*>* _ApplyLogicEffectGroupIdWhenTriggered_k__BackingField; // 0x118
		::System::String* _SkillCardCopyTargetGroupId_k__BackingField; // 0x120

		::System::Boolean get_Dispellable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_CHANGESKILLCARDTOCOPIEDCARDEFFECT_GET_DISPELLABLE_OFFSET))(nullptr);
		}

		::MX::Logic::Data::ChangeSkillCardCostBaseType* get_CopiedCardCostRefer()
		{
			return ((::MX::Logic::Data::ChangeSkillCardCostBaseType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_CHANGESKILLCARDTOCOPIEDCARDEFFECT_GET_COPIEDCARDCOSTREFER_OFFSET))(nullptr);
		}

		::System::Int64 get_CopiedCardCostModifyByRatio()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_CHANGESKILLCARDTOCOPIEDCARDEFFECT_GET_COPIEDCARDCOSTMODIFYBYRATIO_OFFSET))(nullptr);
		}

		::System::Int32 get_CopiedCardCostModifyByAmount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_CHANGESKILLCARDTOCOPIEDCARDEFFECT_GET_COPIEDCARDCOSTMODIFYBYAMOUNT_OFFSET))(nullptr);
		}

		::System::Boolean get_DeductRedrawGaugeWhenOriginalCardInHand()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_CHANGESKILLCARDTOCOPIEDCARDEFFECT_GET_DEDUCTREDRAWGAUGEWHENORIGINALCARDINHAND_OFFSET))(nullptr);
		}

		::System::Void set_DeductRedrawGaugeWhenOriginalCardInHand(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_CHANGESKILLCARDTOCOPIEDCARDEFFECT_SET_DEDUCTREDRAWGAUGEWHENORIGINALCARDINHAND_OFFSET))(arg, nullptr);
		}

		::MX::Logic::Data::SkillCardCopyEndCondition* get_EndCondition()
		{
			return ((::MX::Logic::Data::SkillCardCopyEndCondition*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_CHANGESKILLCARDTOCOPIEDCARDEFFECT_GET_ENDCONDITION_OFFSET))(nullptr);
		}

		::System::Void set_EndCondition(::MX::Logic::Data::SkillCardCopyEndCondition* arg)
		{
			((::System::Void(*)(::MX::Logic::Data::SkillCardCopyEndCondition*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_CHANGESKILLCARDTOCOPIEDCARDEFFECT_SET_ENDCONDITION_OFFSET))(arg, nullptr);
		}

		::System::String* get_EndConditionArgument()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_CHANGESKILLCARDTOCOPIEDCARDEFFECT_GET_ENDCONDITIONARGUMENT_OFFSET))(nullptr);
		}

		::System::Void set_EndConditionArgument(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_CHANGESKILLCARDTOCOPIEDCARDEFFECT_SET_ENDCONDITIONARGUMENT_OFFSET))(str, nullptr);
		}

		::Il2CppArray<::System::Object*>* get_ApplyLogicEffectGroupIdWhenTriggered()
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_CHANGESKILLCARDTOCOPIEDCARDEFFECT_GET_APPLYLOGICEFFECTGROUPIDWHENTRIGGERED_OFFSET))(nullptr);
		}

		::System::String* get_SkillCardCopyTargetGroupId()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_CHANGESKILLCARDTOCOPIEDCARDEFFECT_GET_SKILLCARDCOPYTARGETGROUPID_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::Logic::Data::ChangeSkillCardToCopiedCardEffectValue* arg, ::MX::Logic::Skills::SkillSpecification* arg2, ::MX::Logic::Skills::LogicEffects::LogicEffectHitSpecification* arg3)
		{
			((::System::Void(*)(::MX::Logic::Data::ChangeSkillCardToCopiedCardEffectValue*, ::MX::Logic::Skills::SkillSpecification*, ::MX::Logic::Skills::LogicEffects::LogicEffectHitSpecification*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_CHANGESKILLCARDTOCOPIEDCARDEFFECT_.CTOR_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void .ctor(::MX::Logic::Data::ChangeSkillCardToCopiedCardEffectValue* arg, ::MX::Logic::Skills::SkillSpecification* arg2, ::MX::Logic::Skills::LogicEffects::LogicEffectHitSpecification* arg3, ::MX::Logic::Data::SkillCardCopyEndCondition* arg4, ::System::String* str, ::Il2CppArray<::System::Object*>* arg5, ::System::String* str2, ::System::Boolean arg6)
		{
			((::System::Void(*)(::MX::Logic::Data::ChangeSkillCardToCopiedCardEffectValue*, ::MX::Logic::Skills::SkillSpecification*, ::MX::Logic::Skills::LogicEffects::LogicEffectHitSpecification*, ::MX::Logic::Data::SkillCardCopyEndCondition*, ::System::String*, ::Il2CppArray<::System::Object*>*, ::System::String*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_CHANGESKILLCARDTOCOPIEDCARDEFFECT_.CTOR_OFFSET))(arg, arg2, arg3, arg4, str, arg5, str2, arg6, nullptr);
		}

		::System::Boolean IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_CHANGESKILLCARDTOCOPIEDCARDEFFECT_ISVALID_OFFSET))(nullptr);
		}

		::System::Void Activate(::MX::Logic::Battles::Battle* arg, Il2CppObject* arg2, ::System::Int64 arg3, ::MX::Logic::Battles::GroupTag* arg4, ::System::Boolean arg5)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, Il2CppObject*, ::System::Int64, ::MX::Logic::Battles::GroupTag*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_CHANGESKILLCARDTOCOPIEDCARDEFFECT_ACTIVATE_OFFSET))(arg, arg2, arg3, arg4, arg5, nullptr);
		}

		::System::Void Battle_DotAbilityRemoved(::System::Object* arg, ::MX::Logic::Battles::DotEventArgs* arg2)
		{
			((::System::Void(*)(::System::Object*, ::MX::Logic::Battles::DotEventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_CHANGESKILLCARDTOCOPIEDCARDEFFECT_BATTLE_DOTABILITYREMOVED_OFFSET))(arg, arg2, nullptr);
		}

	};
}

