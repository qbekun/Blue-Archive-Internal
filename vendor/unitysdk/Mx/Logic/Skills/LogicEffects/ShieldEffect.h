#pragma once
#include "../../../../unitysdk.h"

namespace FlatData { class StatType; }
namespace MX::Core::Math { class BasisPoint; }
namespace MX::Logic::Data { class LogicEffectValue; }
namespace MX::Logic::Battles { class Battle; }
namespace MX::Logic::Data { class ShieldEffectValue; }
namespace MX::Logic::Skills { class SkillSpecification; }
namespace MX::Logic::Skills::LogicEffects { class LogicEffectHitSpecification; }
namespace MX::Logic::Data { class HealEffectValue; }

#define MX_LOGIC_SKILLS_LOGICEFFECTS_SHIELDEFFECT_GET_TARGETSTATTYPE_OFFSET UNITYSDK_OFFSET(0x14201A0)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_SHIELDEFFECT_GET_CASTERCOEFFICIENTAMOUNT_OFFSET UNITYSDK_OFFSET(0x14201B0)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_SHIELDEFFECT_APPLYLOGICEFFECTGROUPIDINSTEADSHIELD_OFFSET UNITYSDK_OFFSET(0x14201C0)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_SHIELDEFFECT_GET_DURATIONFRAME_OFFSET UNITYSDK_OFFSET(0x1420250)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_SHIELDEFFECT_GET_APPLYHEALRATE_OFFSET UNITYSDK_OFFSET(0x1420260)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_SHIELDEFFECT_.CTOR_OFFSET UNITYSDK_OFFSET(0x1420270)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_SHIELDEFFECT_GET_BASEAMOUNT_OFFSET UNITYSDK_OFFSET(0x14203C0)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_SHIELDEFFECT_APPLYLEFTOVERTOHEAL_OFFSET UNITYSDK_OFFSET(0x14203D0)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_SHIELDEFFECT_GET_TARGETCOEFFICIENTAMOUNT_OFFSET UNITYSDK_OFFSET(0x14205F0)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_SHIELDEFFECT_GET_CASTERSTATTYPE_OFFSET UNITYSDK_OFFSET(0x1420600)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_SHIELDEFFECT_GET_APPLYHEALRATEBYARMORTYPE_OFFSET UNITYSDK_OFFSET(0x1420610)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_SHIELDEFFECT_GET_ISDISPELLABLE_OFFSET UNITYSDK_OFFSET(0x1420620)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_SHIELDEFFECT_GET_LOGICEFFECTGROUPIDINSTEADSHIELD_OFFSET UNITYSDK_OFFSET(0x1420630)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_SHIELDEFFECT_GET_SHIELDPRIORITY_OFFSET UNITYSDK_OFFSET(0x1420640)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_SHIELDEFFECT_GET_LEFTOVERCONVERTRATE_OFFSET UNITYSDK_OFFSET(0x1420650)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_SHIELDEFFECT_MAKEHEALEFFECTVALUE_OFFSET UNITYSDK_OFFSET(0x14204B0)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_SHIELDEFFECT_GET_SHIELDID_OFFSET UNITYSDK_OFFSET(0x1420660)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_SHIELDEFFECT_GET_SHIELDLEFTOVERCONVERSIONCONDITIONLIST_OFFSET UNITYSDK_OFFSET(0x1420670)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_SHIELDEFFECT_GET_APPLYHEALRATEBYBULLETTYPE_OFFSET UNITYSDK_OFFSET(0x1420680)

namespace MX::Logic::Skills::LogicEffects
{
	inline static constexpr unsigned int ShieldEffect_TypeDefinitionIndex = 14793;

	class ShieldEffect : public Il2CppObject
	{
	public:
		::System::Int64 _BaseAmount_k__BackingField; // 0xD0
		::FlatData::StatType* _TargetStatType_k__BackingField; // 0xD8
		::MX::Core::Math::BasisPoint* _TargetCoefficientAmount_k__BackingField; // 0xE0
		::FlatData::StatType* _CasterStatType_k__BackingField; // 0xE8
		::MX::Core::Math::BasisPoint* _CasterCoefficientAmount_k__BackingField; // 0xF0
		::System::Int32 _DurationFrame_k__BackingField; // 0xF8
		::System::Boolean _IsDispellable_k__BackingField; // 0xFC
		::System::Int32 _ShieldPriority_k__BackingField; // 0x100
		::System::String* _ShieldId_k__BackingField; // 0x108
		Il2CppObject* _ShieldLeftoverConversionConditionList_k__BackingField; // 0x110
		::MX::Core::Math::BasisPoint* _LeftoverConvertRate_k__BackingField; // 0x118
		::System::Boolean _ApplyHealRate_k__BackingField; // 0x120
		::System::Boolean _ApplyHealRateByArmorType_k__BackingField; // 0x121
		::System::Boolean _ApplyHealRateByBulletType_k__BackingField; // 0x122
		::MX::Logic::Data::LogicEffectValue* _LogicEffectGroupIdInsteadShield_k__BackingField; // 0x128

		::FlatData::StatType* get_TargetStatType()
		{
			return ((::FlatData::StatType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_SHIELDEFFECT_GET_TARGETSTATTYPE_OFFSET))(nullptr);
		}

		::MX::Core::Math::BasisPoint* get_CasterCoefficientAmount()
		{
			return ((::MX::Core::Math::BasisPoint*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_SHIELDEFFECT_GET_CASTERCOEFFICIENTAMOUNT_OFFSET))(nullptr);
		}

		::System::Void ApplyLogicEffectGroupIdInsteadShield(::MX::Logic::Battles::Battle* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_SHIELDEFFECT_APPLYLOGICEFFECTGROUPIDINSTEADSHIELD_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_DurationFrame()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_SHIELDEFFECT_GET_DURATIONFRAME_OFFSET))(nullptr);
		}

		::System::Boolean get_ApplyHealRate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_SHIELDEFFECT_GET_APPLYHEALRATE_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::Logic::Data::ShieldEffectValue* arg, ::MX::Logic::Skills::SkillSpecification* arg2, ::MX::Logic::Skills::LogicEffects::LogicEffectHitSpecification* arg3)
		{
			((::System::Void(*)(::MX::Logic::Data::ShieldEffectValue*, ::MX::Logic::Skills::SkillSpecification*, ::MX::Logic::Skills::LogicEffects::LogicEffectHitSpecification*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_SHIELDEFFECT_.CTOR_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Int64 get_BaseAmount()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_SHIELDEFFECT_GET_BASEAMOUNT_OFFSET))(nullptr);
		}

		::System::Void ApplyLeftoverToHeal(::MX::Logic::Battles::Battle* arg, ::System::Int64 arg2)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_SHIELDEFFECT_APPLYLEFTOVERTOHEAL_OFFSET))(arg, arg2, nullptr);
		}

		::MX::Core::Math::BasisPoint* get_TargetCoefficientAmount()
		{
			return ((::MX::Core::Math::BasisPoint*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_SHIELDEFFECT_GET_TARGETCOEFFICIENTAMOUNT_OFFSET))(nullptr);
		}

		::FlatData::StatType* get_CasterStatType()
		{
			return ((::FlatData::StatType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_SHIELDEFFECT_GET_CASTERSTATTYPE_OFFSET))(nullptr);
		}

		::System::Boolean get_ApplyHealRateByArmorType()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_SHIELDEFFECT_GET_APPLYHEALRATEBYARMORTYPE_OFFSET))(nullptr);
		}

		::System::Boolean get_IsDispellable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_SHIELDEFFECT_GET_ISDISPELLABLE_OFFSET))(nullptr);
		}

		::MX::Logic::Data::LogicEffectValue* get_LogicEffectGroupIdInsteadShield()
		{
			return ((::MX::Logic::Data::LogicEffectValue*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_SHIELDEFFECT_GET_LOGICEFFECTGROUPIDINSTEADSHIELD_OFFSET))(nullptr);
		}

		::System::Int32 get_ShieldPriority()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_SHIELDEFFECT_GET_SHIELDPRIORITY_OFFSET))(nullptr);
		}

		::MX::Core::Math::BasisPoint* get_LeftoverConvertRate()
		{
			return ((::MX::Core::Math::BasisPoint*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_SHIELDEFFECT_GET_LEFTOVERCONVERTRATE_OFFSET))(nullptr);
		}

		::MX::Logic::Data::HealEffectValue* MakeHealEffectValue(::System::Int64 arg)
		{
			return ((::MX::Logic::Data::HealEffectValue*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_SHIELDEFFECT_MAKEHEALEFFECTVALUE_OFFSET))(arg, nullptr);
		}

		::System::String* get_ShieldId()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_SHIELDEFFECT_GET_SHIELDID_OFFSET))(nullptr);
		}

		Il2CppObject* get_ShieldLeftoverConversionConditionList()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_SHIELDEFFECT_GET_SHIELDLEFTOVERCONVERSIONCONDITIONLIST_OFFSET))(nullptr);
		}

		::System::Boolean get_ApplyHealRateByBulletType()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_SHIELDEFFECT_GET_APPLYHEALRATEBYBULLETTYPE_OFFSET))(nullptr);
		}

	};
}

