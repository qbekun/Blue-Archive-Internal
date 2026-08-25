#pragma once
#include "../../../../unitysdk.h"

namespace MX::Logic::Data { class SkillCardCopyEndCondition; }
namespace MX::Logic::Data { class SkillCardCopyTargetEffectValue; }
namespace MX::Logic::Skills { class SkillSpecification; }
namespace MX::Logic::Skills::LogicEffects { class LogicEffectHitSpecification; }

#define MX_LOGIC_SKILLS_LOGICEFFECTS_SKILLCARDCOPYTARGETEFFECT_GET_ENDCONDITION_OFFSET UNITYSDK_OFFSET(0x1421680)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_SKILLCARDCOPYTARGETEFFECT_.CTOR_OFFSET UNITYSDK_OFFSET(0x1421690)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_SKILLCARDCOPYTARGETEFFECT_GET_DEDUCTREDRAWGAUGEWHENORIGINALCARDINHAND_OFFSET UNITYSDK_OFFSET(0x1421740)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_SKILLCARDCOPYTARGETEFFECT_GET_DISPELLABLE_OFFSET UNITYSDK_OFFSET(0x1421750)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_SKILLCARDCOPYTARGETEFFECT_GET_CHANGESKILLCARDTOCCTOCASTERLOGICEFFECTGROUPID_OFFSET UNITYSDK_OFFSET(0x1421760)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_SKILLCARDCOPYTARGETEFFECT_GET_ENDCONDITIONARGUMENT_OFFSET UNITYSDK_OFFSET(0x1421770)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_SKILLCARDCOPYTARGETEFFECT_GET_APPLYLOGICEFFECTGROUPIDWHENTRIGGERED_OFFSET UNITYSDK_OFFSET(0x1421780)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_SKILLCARDCOPYTARGETEFFECT_GET_DURATION_OFFSET UNITYSDK_OFFSET(0x1421790)

namespace MX::Logic::Skills::LogicEffects
{
	inline static constexpr unsigned int SkillCardCopyTargetEffect_TypeDefinitionIndex = 14798;

	class SkillCardCopyTargetEffect : public Il2CppObject
	{
	public:
		::System::Int64 _Duration_k__BackingField; // 0xD0
		::MX::Logic::Data::SkillCardCopyEndCondition* _EndCondition_k__BackingField; // 0xD8
		::System::String* _EndConditionArgument_k__BackingField; // 0xE0
		::System::Boolean _Dispellable_k__BackingField; // 0xE8
		::System::String* _ChangeSkillCardToCCToCasterLogicEffectGroupId_k__BackingField; // 0xF0
		::Il2CppArray<::System::Object*>* _ApplyLogicEffectGroupIdWhenTriggered_k__BackingField; // 0xF8
		::System::Boolean _DeductRedrawGaugeWhenOriginalCardInHand_k__BackingField; // 0x100

		::MX::Logic::Data::SkillCardCopyEndCondition* get_EndCondition()
		{
			return ((::MX::Logic::Data::SkillCardCopyEndCondition*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_SKILLCARDCOPYTARGETEFFECT_GET_ENDCONDITION_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::Logic::Data::SkillCardCopyTargetEffectValue* arg, ::MX::Logic::Skills::SkillSpecification* arg2, ::MX::Logic::Skills::LogicEffects::LogicEffectHitSpecification* arg3)
		{
			((::System::Void(*)(::MX::Logic::Data::SkillCardCopyTargetEffectValue*, ::MX::Logic::Skills::SkillSpecification*, ::MX::Logic::Skills::LogicEffects::LogicEffectHitSpecification*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_SKILLCARDCOPYTARGETEFFECT_.CTOR_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Boolean get_DeductRedrawGaugeWhenOriginalCardInHand()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_SKILLCARDCOPYTARGETEFFECT_GET_DEDUCTREDRAWGAUGEWHENORIGINALCARDINHAND_OFFSET))(nullptr);
		}

		::System::Boolean get_Dispellable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_SKILLCARDCOPYTARGETEFFECT_GET_DISPELLABLE_OFFSET))(nullptr);
		}

		::System::String* get_ChangeSkillCardToCCToCasterLogicEffectGroupId()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_SKILLCARDCOPYTARGETEFFECT_GET_CHANGESKILLCARDTOCCTOCASTERLOGICEFFECTGROUPID_OFFSET))(nullptr);
		}

		::System::String* get_EndConditionArgument()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_SKILLCARDCOPYTARGETEFFECT_GET_ENDCONDITIONARGUMENT_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* get_ApplyLogicEffectGroupIdWhenTriggered()
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_SKILLCARDCOPYTARGETEFFECT_GET_APPLYLOGICEFFECTGROUPIDWHENTRIGGERED_OFFSET))(nullptr);
		}

		::System::Int64 get_Duration()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_SKILLCARDCOPYTARGETEFFECT_GET_DURATION_OFFSET))(nullptr);
		}

	};
}

