#pragma once
#include "../../../../unitysdk.h"

namespace FlatData { class StatType; }
namespace MX::Core::Math { class BasisPoint; }
namespace MX::Logic::Skills { class ExtraStatType; }
namespace MX::Logic::Data { class DamageModifier; }
namespace MX::Logic::Data { class IHealEffectValue; }
namespace MX::Logic::Skills { class SkillSpecification; }
namespace MX::Logic::Skills::LogicEffects { class LogicEffectHitSpecification; }

#define MX_LOGIC_SKILLS_LOGICEFFECTS_HEALEFFECT_GET_AMOUNT_OFFSET UNITYSDK_OFFSET(0x1419170)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_HEALEFFECT_GET_APPLYHEALRATEBYBULLETTYPE_OFFSET UNITYSDK_OFFSET(0x1419180)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_HEALEFFECT_ADDADDFIXEDAMOUNT_OFFSET UNITYSDK_OFFSET(0x1419190)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_HEALEFFECT_SET_TRIGGEROTHEREFFECT_OFFSET UNITYSDK_OFFSET(0x14191A0)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_HEALEFFECT_GET_APPLYHEALRATEBYARMORTYPE_OFFSET UNITYSDK_OFFSET(0x14191B0)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_HEALEFFECT_GET_BONUSRATE_OFFSET UNITYSDK_OFFSET(0x14191C0)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_HEALEFFECT_SET_ADDFIXEDAMOUNT_OFFSET UNITYSDK_OFFSET(0x14191D0)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_HEALEFFECT_GET_TRIGGEROTHEREFFECT_OFFSET UNITYSDK_OFFSET(0x14191E0)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_HEALEFFECT_GET_PERIODMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x14191F0)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_HEALEFFECT_ADDHEALMODIFIER_OFFSET UNITYSDK_OFFSET(0x1419200)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_HEALEFFECT_GET_ISDURATIONCHANGEDBYSTAT_OFFSET UNITYSDK_OFFSET(0x1419310)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_HEALEFFECT_GET_EXTRASTATRATE_OFFSET UNITYSDK_OFFSET(0x1419320)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_HEALEFFECT_SET_PERIODMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x1419330)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_HEALEFFECT_SETPERIODMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x1419340)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_HEALEFFECT_.CTOR_OFFSET UNITYSDK_OFFSET(0x1419350)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_HEALEFFECT_GET_ISACCUMULATEDHEAL_OFFSET UNITYSDK_OFFSET(0x14199C0)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_HEALEFFECT_SET_HEALMODIFIERS_OFFSET UNITYSDK_OFFSET(0x14199D0)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_HEALEFFECT_GET_ADDFIXEDAMOUNT_OFFSET UNITYSDK_OFFSET(0x14199F0)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_HEALEFFECT_GET_APPLYHEALRATE_OFFSET UNITYSDK_OFFSET(0x1419A00)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_HEALEFFECT_GET_BONUSSOURCE_OFFSET UNITYSDK_OFFSET(0x1419A10)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_HEALEFFECT_GET_HEALMODIFIERS_OFFSET UNITYSDK_OFFSET(0x1419A20)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_HEALEFFECT_GET_EXTRASTATSOURCE_OFFSET UNITYSDK_OFFSET(0x1419A30)

namespace MX::Logic::Skills::LogicEffects
{
	inline static constexpr unsigned int HealEffect_TypeDefinitionIndex = 14751;

	class HealEffect : public Il2CppObject
	{
	public:
		::System::Boolean _IsAccumulatedHeal_k__BackingField; // 0xD0
		::System::Int64 _Amount_k__BackingField; // 0xD8
		::FlatData::StatType* _BonusSource_k__BackingField; // 0xE0
		::MX::Core::Math::BasisPoint* _BonusRate_k__BackingField; // 0xE8
		::MX::Logic::Skills::ExtraStatType* _ExtraStatSource_k__BackingField; // 0xF0
		::MX::Core::Math::BasisPoint* _ExtraStatRate_k__BackingField; // 0xF8
		::MX::Core::Math::BasisPoint* _PeriodMultiplier_k__BackingField; // 0x100
		::System::Int64 _AddFixedAmount_k__BackingField; // 0x108
		::System::Boolean _TriggerOtherEffect_k__BackingField; // 0x110
		::System::Boolean _ApplyHealRate_k__BackingField; // 0x111
		::System::Boolean _ApplyHealRateByArmorType_k__BackingField; // 0x112
		::System::Boolean _ApplyHealRateByBulletType_k__BackingField; // 0x113
		Il2CppObject* _HealModifiers_k__BackingField; // 0x118

		::System::Int64 get_Amount()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_HEALEFFECT_GET_AMOUNT_OFFSET))(nullptr);
		}

		::System::Boolean get_ApplyHealRateByBulletType()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_HEALEFFECT_GET_APPLYHEALRATEBYBULLETTYPE_OFFSET))(nullptr);
		}

		::System::Void AddAddFixedAmount(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_HEALEFFECT_ADDADDFIXEDAMOUNT_OFFSET))(arg, nullptr);
		}

		::System::Void set_TriggerOtherEffect(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_HEALEFFECT_SET_TRIGGEROTHEREFFECT_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_ApplyHealRateByArmorType()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_HEALEFFECT_GET_APPLYHEALRATEBYARMORTYPE_OFFSET))(nullptr);
		}

		::MX::Core::Math::BasisPoint* get_BonusRate()
		{
			return ((::MX::Core::Math::BasisPoint*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_HEALEFFECT_GET_BONUSRATE_OFFSET))(nullptr);
		}

		::System::Void set_AddFixedAmount(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_HEALEFFECT_SET_ADDFIXEDAMOUNT_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_TriggerOtherEffect()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_HEALEFFECT_GET_TRIGGEROTHEREFFECT_OFFSET))(nullptr);
		}

		::MX::Core::Math::BasisPoint* get_PeriodMultiplier()
		{
			return ((::MX::Core::Math::BasisPoint*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_HEALEFFECT_GET_PERIODMULTIPLIER_OFFSET))(nullptr);
		}

		::System::Void AddHealModifier(::MX::Logic::Data::DamageModifier* arg)
		{
			((::System::Void(*)(::MX::Logic::Data::DamageModifier*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_HEALEFFECT_ADDHEALMODIFIER_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsDurationChangedByStat()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_HEALEFFECT_GET_ISDURATIONCHANGEDBYSTAT_OFFSET))(nullptr);
		}

		::MX::Core::Math::BasisPoint* get_ExtraStatRate()
		{
			return ((::MX::Core::Math::BasisPoint*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_HEALEFFECT_GET_EXTRASTATRATE_OFFSET))(nullptr);
		}

		::System::Void set_PeriodMultiplier(::MX::Core::Math::BasisPoint* arg)
		{
			((::System::Void(*)(::MX::Core::Math::BasisPoint*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_HEALEFFECT_SET_PERIODMULTIPLIER_OFFSET))(arg, nullptr);
		}

		::System::Void SetPeriodMultiplier(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_HEALEFFECT_SETPERIODMULTIPLIER_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::MX::Logic::Data::IHealEffectValue* arg, ::MX::Logic::Skills::SkillSpecification* arg2, ::MX::Logic::Skills::LogicEffects::LogicEffectHitSpecification* arg3)
		{
			((::System::Void(*)(::MX::Logic::Data::IHealEffectValue*, ::MX::Logic::Skills::SkillSpecification*, ::MX::Logic::Skills::LogicEffects::LogicEffectHitSpecification*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_HEALEFFECT_.CTOR_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Boolean get_IsAccumulatedHeal()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_HEALEFFECT_GET_ISACCUMULATEDHEAL_OFFSET))(nullptr);
		}

		::System::Void set_HealModifiers(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_HEALEFFECT_SET_HEALMODIFIERS_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_AddFixedAmount()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_HEALEFFECT_GET_ADDFIXEDAMOUNT_OFFSET))(nullptr);
		}

		::System::Boolean get_ApplyHealRate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_HEALEFFECT_GET_APPLYHEALRATE_OFFSET))(nullptr);
		}

		::FlatData::StatType* get_BonusSource()
		{
			return ((::FlatData::StatType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_HEALEFFECT_GET_BONUSSOURCE_OFFSET))(nullptr);
		}

		Il2CppObject* get_HealModifiers()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_HEALEFFECT_GET_HEALMODIFIERS_OFFSET))(nullptr);
		}

		::MX::Logic::Skills::ExtraStatType* get_ExtraStatSource()
		{
			return ((::MX::Logic::Skills::ExtraStatType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_HEALEFFECT_GET_EXTRASTATSOURCE_OFFSET))(nullptr);
		}

	};
}

