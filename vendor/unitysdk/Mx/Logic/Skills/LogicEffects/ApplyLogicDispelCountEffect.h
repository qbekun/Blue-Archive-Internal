#pragma once
#include "../../../../unitysdk.h"

namespace MX::Logic::Data { class DispelActionType; }
namespace FlatData { class EndCondition; }
namespace MX::Logic::Battles { class Battle; }
namespace MX::Logic::BattleEntities { class BattleEntity; }
namespace MX::Logic::Data { class ApplyLogicDispelCountEffectValue; }
namespace MX::Logic::Skills { class SkillSpecification; }
namespace MX::Logic::Skills::LogicEffects { class LogicEffectHitSpecification; }
namespace MX::Logic::Battles { class LogicEffectExpiredEventArgs; }

#define MX_LOGIC_SKILLS_LOGICEFFECTS_APPLYLOGICDISPELCOUNTEFFECT_.CTOR_OFFSET UNITYSDK_OFFSET(0x1407E80)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_APPLYLOGICDISPELCOUNTEFFECT_SET_CURRENTAPPLYLOGICEFFECTVALUEINDEX_OFFSET UNITYSDK_OFFSET(0x1407F40)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_APPLYLOGICDISPELCOUNTEFFECT_GET_DISPELCOUNTCONDITION_OFFSET UNITYSDK_OFFSET(0x1407F50)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_APPLYLOGICDISPELCOUNTEFFECT_GET_DISPELLABLE_OFFSET UNITYSDK_OFFSET(0x1407F60)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_APPLYLOGICDISPELCOUNTEFFECT_LOGICEFFECTPROCESSOR_LOGICEFFECTEXPIRED_OFFSET UNITYSDK_OFFSET(0x1407F70)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_APPLYLOGICDISPELCOUNTEFFECT_ACTIVATE_OFFSET UNITYSDK_OFFSET(0x1408210)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_APPLYLOGICDISPELCOUNTEFFECT_GET_ISALLCATEGORY_OFFSET UNITYSDK_OFFSET(0x1408350)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_APPLYLOGICDISPELCOUNTEFFECT_GET_ENDCONDITIONARGUMENT_OFFSET UNITYSDK_OFFSET(0x1408360)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_APPLYLOGICDISPELCOUNTEFFECT_GET_IGNORELOGICEFFECTGROUPID_OFFSET UNITYSDK_OFFSET(0x1408370)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_APPLYLOGICDISPELCOUNTEFFECT_GET_COUNTTARGETCATEGORY_OFFSET UNITYSDK_OFFSET(0x1408380)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_APPLYLOGICDISPELCOUNTEFFECT_GET_ENDCONDITION_OFFSET UNITYSDK_OFFSET(0x1408390)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_APPLYLOGICDISPELCOUNTEFFECT_GET_DISPELACTIONTYPE_OFFSET UNITYSDK_OFFSET(0x14083A0)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_APPLYLOGICDISPELCOUNTEFFECT_ABILITY_ONEXPIRED_OFFSET UNITYSDK_OFFSET(0x14083B0)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_APPLYLOGICDISPELCOUNTEFFECT_GET_CURRENTDISPELCOUNT_OFFSET UNITYSDK_OFFSET(0x14084A0)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_APPLYLOGICDISPELCOUNTEFFECT_SET_CURRENTDISPELCOUNT_OFFSET UNITYSDK_OFFSET(0x14084B0)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_APPLYLOGICDISPELCOUNTEFFECT_GET_APPLYLOGICEFFECTVALUELIST_OFFSET UNITYSDK_OFFSET(0x14084C0)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_APPLYLOGICDISPELCOUNTEFFECT_GET_CURRENTAPPLYLOGICEFFECTVALUEINDEX_OFFSET UNITYSDK_OFFSET(0x14084D0)

namespace MX::Logic::Skills::LogicEffects
{
	inline static constexpr unsigned int ApplyLogicDispelCountEffect_TypeDefinitionIndex = 14691;

	class ApplyLogicDispelCountEffect : public Il2CppObject
	{
	public:
		::MX::Logic::Data::DispelActionType* _DispelActionType_k__BackingField; // 0xD0
		::System::Int32 _DispelCountCondition_k__BackingField; // 0xD4
		::System::Int32 _CurrentDispelCount_k__BackingField; // 0xD8
		Il2CppObject* _ApplyLogicEffectValueList_k__BackingField; // 0xE0
		::System::Int32 _CurrentApplyLogicEffectValueIndex_k__BackingField; // 0xE8
		::FlatData::EndCondition* _EndCondition_k__BackingField; // 0xEC
		::System::Int32 _EndConditionArgument_k__BackingField; // 0xF0
		::System::Boolean _Dispellable_k__BackingField; // 0xF4
		Il2CppObject* _IgnoreLogicEffectGroupId_k__BackingField; // 0xF8
		Il2CppObject* _CountTargetCategory_k__BackingField; // 0x100
		::System::Boolean _IsAllCategory_k__BackingField; // 0x108
		::MX::Logic::Battles::Battle* battleCache; // 0x110
		Il2CppObject* abilityCache; // 0x118
		::MX::Logic::BattleEntities::BattleEntity* owner; // 0x120

		::System::Void .ctor(::MX::Logic::Data::ApplyLogicDispelCountEffectValue* arg, ::MX::Logic::Skills::SkillSpecification* arg2, ::MX::Logic::Skills::LogicEffects::LogicEffectHitSpecification* arg3)
		{
			((::System::Void(*)(::MX::Logic::Data::ApplyLogicDispelCountEffectValue*, ::MX::Logic::Skills::SkillSpecification*, ::MX::Logic::Skills::LogicEffects::LogicEffectHitSpecification*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_APPLYLOGICDISPELCOUNTEFFECT_.CTOR_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void set_CurrentApplyLogicEffectValueIndex(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_APPLYLOGICDISPELCOUNTEFFECT_SET_CURRENTAPPLYLOGICEFFECTVALUEINDEX_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_DispelCountCondition()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_APPLYLOGICDISPELCOUNTEFFECT_GET_DISPELCOUNTCONDITION_OFFSET))(nullptr);
		}

		::System::Boolean get_Dispellable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_APPLYLOGICDISPELCOUNTEFFECT_GET_DISPELLABLE_OFFSET))(nullptr);
		}

		::System::Void LogicEffectProcessor_LogicEffectExpired(::System::Object* arg, ::MX::Logic::Battles::LogicEffectExpiredEventArgs* arg2)
		{
			((::System::Void(*)(::System::Object*, ::MX::Logic::Battles::LogicEffectExpiredEventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_APPLYLOGICDISPELCOUNTEFFECT_LOGICEFFECTPROCESSOR_LOGICEFFECTEXPIRED_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Activate(::MX::Logic::Battles::Battle* arg, Il2CppObject* arg2, ::MX::Logic::BattleEntities::BattleEntity* arg3)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, Il2CppObject*, ::MX::Logic::BattleEntities::BattleEntity*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_APPLYLOGICDISPELCOUNTEFFECT_ACTIVATE_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Boolean get_IsAllCategory()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_APPLYLOGICDISPELCOUNTEFFECT_GET_ISALLCATEGORY_OFFSET))(nullptr);
		}

		::System::Int32 get_EndConditionArgument()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_APPLYLOGICDISPELCOUNTEFFECT_GET_ENDCONDITIONARGUMENT_OFFSET))(nullptr);
		}

		Il2CppObject* get_IgnoreLogicEffectGroupId()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_APPLYLOGICDISPELCOUNTEFFECT_GET_IGNORELOGICEFFECTGROUPID_OFFSET))(nullptr);
		}

		Il2CppObject* get_CountTargetCategory()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_APPLYLOGICDISPELCOUNTEFFECT_GET_COUNTTARGETCATEGORY_OFFSET))(nullptr);
		}

		::FlatData::EndCondition* get_EndCondition()
		{
			return ((::FlatData::EndCondition*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_APPLYLOGICDISPELCOUNTEFFECT_GET_ENDCONDITION_OFFSET))(nullptr);
		}

		::MX::Logic::Data::DispelActionType* get_DispelActionType()
		{
			return ((::MX::Logic::Data::DispelActionType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_APPLYLOGICDISPELCOUNTEFFECT_GET_DISPELACTIONTYPE_OFFSET))(nullptr);
		}

		::System::Void Ability_OnExpired(::System::Object* arg, ::System::EventArgs* arg2)
		{
			((::System::Void(*)(::System::Object*, ::System::EventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_APPLYLOGICDISPELCOUNTEFFECT_ABILITY_ONEXPIRED_OFFSET))(arg, arg2, nullptr);
		}

		::System::Int32 get_CurrentDispelCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_APPLYLOGICDISPELCOUNTEFFECT_GET_CURRENTDISPELCOUNT_OFFSET))(nullptr);
		}

		::System::Void set_CurrentDispelCount(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_APPLYLOGICDISPELCOUNTEFFECT_SET_CURRENTDISPELCOUNT_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_ApplyLogicEffectValueList()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_APPLYLOGICDISPELCOUNTEFFECT_GET_APPLYLOGICEFFECTVALUELIST_OFFSET))(nullptr);
		}

		::System::Int32 get_CurrentApplyLogicEffectValueIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_APPLYLOGICDISPELCOUNTEFFECT_GET_CURRENTAPPLYLOGICEFFECTVALUEINDEX_OFFSET))(nullptr);
		}

	};
}

