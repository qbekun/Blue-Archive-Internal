#pragma once
#include "../../../../unitysdk.h"

namespace FlatData { class EndCondition; }
namespace FlatData { class StatType; }
namespace MX::Logic::Skills { class SkillType; }
namespace MX::Logic::Skills::LogicEffects { class StatChangeLayer; }
namespace MX::Logic::Data { class StatChangeEffectValue; }
namespace MX::Logic::Skills { class SkillSpecification; }
namespace MX::Logic::Skills::LogicEffects { class LogicEffectHitSpecification; }
namespace MX::Logic::Data { class StatChangeByFavorRankEffectValue; }
namespace MX::Logic::Skills::LogicEffects { class StatChangeEffect; }
namespace FlatData { class LogicEffectCategory; }

#define MX_LOGIC_SKILLS_LOGICEFFECTS_STATCHANGEEFFECT_GET_ENDCONDITION_OFFSET UNITYSDK_OFFSET(0x1421E50)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_STATCHANGEEFFECT_GET_ENDCONDITIONARGUMENTFIRST_OFFSET UNITYSDK_OFFSET(0x1421E60)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_STATCHANGEEFFECT_GET_ENDCONDITIONARGUMENTSECOND_OFFSET UNITYSDK_OFFSET(0x1421E70)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_STATCHANGEEFFECT_GET_REMOVECONDITION_OFFSET UNITYSDK_OFFSET(0x1421E80)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_STATCHANGEEFFECT_GET_REMOVECONDITIONARGUMENTFIRST_OFFSET UNITYSDK_OFFSET(0x1421E90)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_STATCHANGEEFFECT_GET_REMOVECONDITIONARGUMENTSECOND_OFFSET UNITYSDK_OFFSET(0x1421EA0)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_STATCHANGEEFFECT_GET_STATTYPE_OFFSET UNITYSDK_OFFSET(0x1421EB0)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_STATCHANGEEFFECT_GET_BASEAMOUNT_OFFSET UNITYSDK_OFFSET(0x1421EC0)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_STATCHANGEEFFECT_SET_BASEAMOUNT_OFFSET UNITYSDK_OFFSET(0x1421ED0)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_STATCHANGEEFFECT_GET_TARGETCOEFFICIENTAMOUNT_OFFSET UNITYSDK_OFFSET(0x1421EE0)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_STATCHANGEEFFECT_SET_TARGETCOEFFICIENTAMOUNT_OFFSET UNITYSDK_OFFSET(0x1421EF0)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_STATCHANGEEFFECT_GET_DISPELLABLE_OFFSET UNITYSDK_OFFSET(0x1421F00)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_STATCHANGEEFFECT_GET_CASTERSTATTYPE_OFFSET UNITYSDK_OFFSET(0x1421F10)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_STATCHANGEEFFECT_GET_CASTERCOEFFICIENTAMOUNT_OFFSET UNITYSDK_OFFSET(0x1421F20)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_STATCHANGEEFFECT_GET_CASTERSTATAMOUNT_OFFSET UNITYSDK_OFFSET(0x1421F30)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_STATCHANGEEFFECT_GET_STACKSAMEEFFECTCOUNT_OFFSET UNITYSDK_OFFSET(0x1421F40)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_STATCHANGEEFFECT_GET_EXPIREOLDIFSTACKCOUNTOVER_OFFSET UNITYSDK_OFFSET(0x1421F50)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_STATCHANGEEFFECT_GET_ISFORCEAPPLIED_OFFSET UNITYSDK_OFFSET(0x1421F60)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_STATCHANGEEFFECT_SET_ISFORCEAPPLIED_OFFSET UNITYSDK_OFFSET(0x1421F70)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_STATCHANGEEFFECT_GET_FORCEEXIRE_OFFSET UNITYSDK_OFFSET(0x1421F80)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_STATCHANGEEFFECT_SET_FORCEEXIRE_OFFSET UNITYSDK_OFFSET(0x1421F90)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_STATCHANGEEFFECT_GET_OVERRIDESKILLTYPE_OFFSET UNITYSDK_OFFSET(0x1421FB0)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_STATCHANGEEFFECT_SET_OVERRIDESKILLTYPE_OFFSET UNITYSDK_OFFSET(0x1421FC0)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_STATCHANGEEFFECT_GET_STATCHANGELAYER_OFFSET UNITYSDK_OFFSET(0x1421FD0)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_STATCHANGEEFFECT_SET_STATCHANGELAYER_OFFSET UNITYSDK_OFFSET(0x1421FE0)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_STATCHANGEEFFECT_.CTOR_OFFSET UNITYSDK_OFFSET(0x1421FF0)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_STATCHANGEEFFECT_.CTOR_OFFSET UNITYSDK_OFFSET(0x1422300)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_STATCHANGEEFFECT_.CTOR_OFFSET UNITYSDK_OFFSET(0x1422550)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_STATCHANGEEFFECT_.CTOR_OFFSET UNITYSDK_OFFSET(0x14227C0)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_STATCHANGEEFFECT_SETASFORCEAPPLIED_OFFSET UNITYSDK_OFFSET(0x1422950)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_STATCHANGEEFFECT_CALLFORCEEXPIRE_OFFSET UNITYSDK_OFFSET(0x14229D0)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_STATCHANGEEFFECT_ISDISPELLABLE_OFFSET UNITYSDK_OFFSET(0x14229F0)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_STATCHANGEEFFECT_EQUALS_OFFSET UNITYSDK_OFFSET(0x1422A10)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_STATCHANGEEFFECT_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1422CA0)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_STATCHANGEEFFECT_EQUALS_OFFSET UNITYSDK_OFFSET(0x1422A90)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_STATCHANGEEFFECT_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1422E40)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_STATCHANGEEFFECT_CLONEEFFECT_OFFSET UNITYSDK_OFFSET(0x14231B0)

namespace MX::Logic::Skills::LogicEffects
{
	inline static constexpr unsigned int StatChangeEffect_TypeDefinitionIndex = 14806;

	class StatChangeEffect : public Il2CppObject
	{
	public:
		::FlatData::EndCondition* _EndCondition_k__BackingField; // 0xD0
		::System::String* _EndConditionArgumentFirst_k__BackingField; // 0xD8
		::System::String* _EndConditionArgumentSecond_k__BackingField; // 0xE0
		::FlatData::EndCondition* _RemoveCondition_k__BackingField; // 0xE8
		::System::String* _RemoveConditionArgumentFirst_k__BackingField; // 0xF0
		::System::String* _RemoveConditionArgumentSecond_k__BackingField; // 0xF8
		::FlatData::StatType* _StatType_k__BackingField; // 0x100
		::System::Int64 _BaseAmount_k__BackingField; // 0x108
		::System::Int64 _TargetCoefficientAmount_k__BackingField; // 0x110
		::System::Boolean _Dispellable_k__BackingField; // 0x118
		::FlatData::StatType* _CasterStatType_k__BackingField; // 0x11C
		::System::Int64 _CasterCoefficientAmount_k__BackingField; // 0x120
		::System::Int64 _CasterStatAmount_k__BackingField; // 0x128
		::System::Int32 _StackSameEffectCount_k__BackingField; // 0x130
		::System::Boolean _ExpireOldIfStackCountOver_k__BackingField; // 0x134
		::System::Boolean _IsForceApplied_k__BackingField; // 0x135
		::System::Action* _ForceExire_k__BackingField; // 0x138
		::MX::Logic::Skills::SkillType* _OverrideSkillType_k__BackingField; // 0x140
		::MX::Logic::Skills::LogicEffects::StatChangeLayer* _StatChangeLayer_k__BackingField; // 0x144

		::FlatData::EndCondition* get_EndCondition()
		{
			return ((::FlatData::EndCondition*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_STATCHANGEEFFECT_GET_ENDCONDITION_OFFSET))(nullptr);
		}

		::System::String* get_EndConditionArgumentFirst()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_STATCHANGEEFFECT_GET_ENDCONDITIONARGUMENTFIRST_OFFSET))(nullptr);
		}

		::System::String* get_EndConditionArgumentSecond()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_STATCHANGEEFFECT_GET_ENDCONDITIONARGUMENTSECOND_OFFSET))(nullptr);
		}

		::FlatData::EndCondition* get_RemoveCondition()
		{
			return ((::FlatData::EndCondition*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_STATCHANGEEFFECT_GET_REMOVECONDITION_OFFSET))(nullptr);
		}

		::System::String* get_RemoveConditionArgumentFirst()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_STATCHANGEEFFECT_GET_REMOVECONDITIONARGUMENTFIRST_OFFSET))(nullptr);
		}

		::System::String* get_RemoveConditionArgumentSecond()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_STATCHANGEEFFECT_GET_REMOVECONDITIONARGUMENTSECOND_OFFSET))(nullptr);
		}

		::FlatData::StatType* get_StatType()
		{
			return ((::FlatData::StatType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_STATCHANGEEFFECT_GET_STATTYPE_OFFSET))(nullptr);
		}

		::System::Int64 get_BaseAmount()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_STATCHANGEEFFECT_GET_BASEAMOUNT_OFFSET))(nullptr);
		}

		::System::Void set_BaseAmount(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_STATCHANGEEFFECT_SET_BASEAMOUNT_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_TargetCoefficientAmount()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_STATCHANGEEFFECT_GET_TARGETCOEFFICIENTAMOUNT_OFFSET))(nullptr);
		}

		::System::Void set_TargetCoefficientAmount(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_STATCHANGEEFFECT_SET_TARGETCOEFFICIENTAMOUNT_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_Dispellable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_STATCHANGEEFFECT_GET_DISPELLABLE_OFFSET))(nullptr);
		}

		::FlatData::StatType* get_CasterStatType()
		{
			return ((::FlatData::StatType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_STATCHANGEEFFECT_GET_CASTERSTATTYPE_OFFSET))(nullptr);
		}

		::System::Int64 get_CasterCoefficientAmount()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_STATCHANGEEFFECT_GET_CASTERCOEFFICIENTAMOUNT_OFFSET))(nullptr);
		}

		::System::Int64 get_CasterStatAmount()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_STATCHANGEEFFECT_GET_CASTERSTATAMOUNT_OFFSET))(nullptr);
		}

		::System::Int32 get_StackSameEffectCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_STATCHANGEEFFECT_GET_STACKSAMEEFFECTCOUNT_OFFSET))(nullptr);
		}

		::System::Boolean get_ExpireOldIfStackCountOver()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_STATCHANGEEFFECT_GET_EXPIREOLDIFSTACKCOUNTOVER_OFFSET))(nullptr);
		}

		::System::Boolean get_IsForceApplied()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_STATCHANGEEFFECT_GET_ISFORCEAPPLIED_OFFSET))(nullptr);
		}

		::System::Void set_IsForceApplied(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_STATCHANGEEFFECT_SET_ISFORCEAPPLIED_OFFSET))(arg, nullptr);
		}

		::System::Action* get_ForceExire()
		{
			return ((::System::Action*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_STATCHANGEEFFECT_GET_FORCEEXIRE_OFFSET))(nullptr);
		}

		::System::Void set_ForceExire(::System::Action* arg)
		{
			((::System::Void(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_STATCHANGEEFFECT_SET_FORCEEXIRE_OFFSET))(arg, nullptr);
		}

		::MX::Logic::Skills::SkillType* get_OverrideSkillType()
		{
			return ((::MX::Logic::Skills::SkillType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_STATCHANGEEFFECT_GET_OVERRIDESKILLTYPE_OFFSET))(nullptr);
		}

		::System::Void set_OverrideSkillType(::MX::Logic::Skills::SkillType* arg)
		{
			((::System::Void(*)(::MX::Logic::Skills::SkillType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_STATCHANGEEFFECT_SET_OVERRIDESKILLTYPE_OFFSET))(arg, nullptr);
		}

		::MX::Logic::Skills::LogicEffects::StatChangeLayer* get_StatChangeLayer()
		{
			return ((::MX::Logic::Skills::LogicEffects::StatChangeLayer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_STATCHANGEEFFECT_GET_STATCHANGELAYER_OFFSET))(nullptr);
		}

		::System::Void set_StatChangeLayer(::MX::Logic::Skills::LogicEffects::StatChangeLayer* arg)
		{
			((::System::Void(*)(::MX::Logic::Skills::LogicEffects::StatChangeLayer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_STATCHANGEEFFECT_SET_STATCHANGELAYER_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::FlatData::StatType* arg, ::System::Int64 arg2, ::System::Int64 arg3, ::System::Int32 arg4)
		{
			((::System::Void(*)(::FlatData::StatType*, ::System::Int64, ::System::Int64, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_STATCHANGEEFFECT_.CTOR_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Void .ctor(::MX::Logic::Data::StatChangeEffectValue* arg, ::MX::Logic::Skills::SkillSpecification* arg2, ::MX::Logic::Skills::LogicEffects::LogicEffectHitSpecification* arg3)
		{
			((::System::Void(*)(::MX::Logic::Data::StatChangeEffectValue*, ::MX::Logic::Skills::SkillSpecification*, ::MX::Logic::Skills::LogicEffects::LogicEffectHitSpecification*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_STATCHANGEEFFECT_.CTOR_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void .ctor(::MX::Logic::Data::StatChangeByFavorRankEffectValue* arg, ::MX::Logic::Skills::SkillSpecification* arg2, ::MX::Logic::Skills::LogicEffects::LogicEffectHitSpecification* arg3)
		{
			((::System::Void(*)(::MX::Logic::Data::StatChangeByFavorRankEffectValue*, ::MX::Logic::Skills::SkillSpecification*, ::MX::Logic::Skills::LogicEffects::LogicEffectHitSpecification*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_STATCHANGEEFFECT_.CTOR_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void .ctor(::MX::Logic::Skills::LogicEffects::StatChangeEffect* arg, ::FlatData::StatType* arg2)
		{
			((::System::Void(*)(::MX::Logic::Skills::LogicEffects::StatChangeEffect*, ::FlatData::StatType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_STATCHANGEEFFECT_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void SetAsForceApplied(::System::Action&* arg)
		{
			((::System::Void(*)(::System::Action&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_STATCHANGEEFFECT_SETASFORCEAPPLIED_OFFSET))(arg, nullptr);
		}

		::System::Void CallForceExpire()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_STATCHANGEEFFECT_CALLFORCEEXPIRE_OFFSET))(nullptr);
		}

		::System::Boolean IsDispellable(::FlatData::LogicEffectCategory* arg)
		{
			return ((::System::Boolean(*)(::FlatData::LogicEffectCategory*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_STATCHANGEEFFECT_ISDISPELLABLE_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return ((::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_STATCHANGEEFFECT_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_STATCHANGEEFFECT_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::Boolean Equals(::MX::Logic::Skills::LogicEffects::StatChangeEffect* arg)
		{
			return ((::System::Boolean(*)(::MX::Logic::Skills::LogicEffects::StatChangeEffect*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_STATCHANGEEFFECT_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_STATCHANGEEFFECT_TOSTRING_OFFSET))(nullptr);
		}

		::MX::Logic::Skills::LogicEffects::StatChangeEffect* CloneEffect(::MX::Logic::Skills::LogicEffects::StatChangeEffect* arg, ::FlatData::StatType* arg2)
		{
			return ((::MX::Logic::Skills::LogicEffects::StatChangeEffect*(*)(::MX::Logic::Skills::LogicEffects::StatChangeEffect*, ::FlatData::StatType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_STATCHANGEEFFECT_CLONEEFFECT_OFFSET))(arg, arg2, nullptr);
		}

	};
}

