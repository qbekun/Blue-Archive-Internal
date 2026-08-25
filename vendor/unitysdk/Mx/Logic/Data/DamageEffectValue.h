#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Skills { class DamageCriticalType; }
namespace FlatData { class StatType; }
namespace MX::Core::Math { class BasisPoint; }
namespace MX::Logic::Skills { class DamageRatioApplyType; }
namespace FlatData { class BulletType; }
namespace MX::Logic::Skills { class SkillType; }
namespace MX::GameData::DAO::Battle { class DamageEffectDAO; }
namespace MX::GameData::DAO::Battle { class AccumulateDamageEffectDAO; }

#define MX_LOGIC_DATA_DAMAGEEFFECTVALUE_GET_CRITICALCHECK_OFFSET UNITYSDK_OFFSET(0x1237F70)
#define MX_LOGIC_DATA_DAMAGEEFFECTVALUE_GET_CANEVADE_OFFSET UNITYSDK_OFFSET(0x1237F80)
#define MX_LOGIC_DATA_DAMAGEEFFECTVALUE_GET_AMOUNT_OFFSET UNITYSDK_OFFSET(0x1237F90)
#define MX_LOGIC_DATA_DAMAGEEFFECTVALUE_SET_AMOUNT_OFFSET UNITYSDK_OFFSET(0x1237FA0)
#define MX_LOGIC_DATA_DAMAGEEFFECTVALUE_GET_BONUSSOURCEFIRST_OFFSET UNITYSDK_OFFSET(0x1237FB0)
#define MX_LOGIC_DATA_DAMAGEEFFECTVALUE_GET_BONUSRATEFIRST_OFFSET UNITYSDK_OFFSET(0x1237FC0)
#define MX_LOGIC_DATA_DAMAGEEFFECTVALUE_GET_LIFERECOVERRATE_OFFSET UNITYSDK_OFFSET(0x1237FD0)
#define MX_LOGIC_DATA_DAMAGEEFFECTVALUE_GET_APPLYBULLETTYPE_OFFSET UNITYSDK_OFFSET(0x1237FE0)
#define MX_LOGIC_DATA_DAMAGEEFFECTVALUE_GET_APPLYDEFENSE_OFFSET UNITYSDK_OFFSET(0x1237FF0)
#define MX_LOGIC_DATA_DAMAGEEFFECTVALUE_GET_APPLYDAMAGERATIO_OFFSET UNITYSDK_OFFSET(0x1238000)
#define MX_LOGIC_DATA_DAMAGEEFFECTVALUE_GET_APPLYDAMAGERATIO2_OFFSET UNITYSDK_OFFSET(0x1238010)
#define MX_LOGIC_DATA_DAMAGEEFFECTVALUE_GET_DEFENSEPENETRATIONRATE_OFFSET UNITYSDK_OFFSET(0x1238020)
#define MX_LOGIC_DATA_DAMAGEEFFECTVALUE_GET_OVERRIDEBULLETTYPE_OFFSET UNITYSDK_OFFSET(0x1238030)
#define MX_LOGIC_DATA_DAMAGEEFFECTVALUE_GET_BULLETTYPETOOVERRIDE_OFFSET UNITYSDK_OFFSET(0x1238040)
#define MX_LOGIC_DATA_DAMAGEEFFECTVALUE_GET_ISACCUMULATEDDAMAGE_OFFSET UNITYSDK_OFFSET(0x1238050)
#define MX_LOGIC_DATA_DAMAGEEFFECTVALUE_GET_CHANGERATEBYCOSTLIST_OFFSET UNITYSDK_OFFSET(0x1238060)
#define MX_LOGIC_DATA_DAMAGEEFFECTVALUE_GET_IGNORESHIELD_OFFSET UNITYSDK_OFFSET(0x1238070)
#define MX_LOGIC_DATA_DAMAGEEFFECTVALUE_GET_DONOTKILLTARGET_OFFSET UNITYSDK_OFFSET(0x1238080)
#define MX_LOGIC_DATA_DAMAGEEFFECTVALUE_GET_APPLYSTABILITY_OFFSET UNITYSDK_OFFSET(0x1238090)
#define MX_LOGIC_DATA_DAMAGEEFFECTVALUE_GET_APPLYTERRAINADAPTATIONDAMAGE_OFFSET UNITYSDK_OFFSET(0x12380A0)
#define MX_LOGIC_DATA_DAMAGEEFFECTVALUE_GET_APPLYEXDAMAGEDRATIO_OFFSET UNITYSDK_OFFSET(0x12380B0)
#define MX_LOGIC_DATA_DAMAGEEFFECTVALUE_GET_ISPARENTDAMAGEOVERTIME_OFFSET UNITYSDK_OFFSET(0x12380C0)
#define MX_LOGIC_DATA_DAMAGEEFFECTVALUE_GET_APPLYENHANCEEXDAMAGERATE_OFFSET UNITYSDK_OFFSET(0x12380D0)
#define MX_LOGIC_DATA_DAMAGEEFFECTVALUE_GET_APPLYENHANCEBASICSDAMAGERATE_OFFSET UNITYSDK_OFFSET(0x12380E0)
#define MX_LOGIC_DATA_DAMAGEEFFECTVALUE_GET_OVERRIDESKILLTYPE_OFFSET UNITYSDK_OFFSET(0x12380F0)
#define MX_LOGIC_DATA_DAMAGEEFFECTVALUE_GET_OVERRIDESKILLDAMAGETYPE_OFFSET UNITYSDK_OFFSET(0x1238100)
#define MX_LOGIC_DATA_DAMAGEEFFECTVALUE_GET_APPLYENHANCEWEAKDAMAGERATE_OFFSET UNITYSDK_OFFSET(0x1238110)
#define MX_LOGIC_DATA_DAMAGEEFFECTVALUE_GET_APPLYWEAKDAMAGEDRATIO_OFFSET UNITYSDK_OFFSET(0x1238120)
#define MX_LOGIC_DATA_DAMAGEEFFECTVALUE_SET_APPLYWEAKDAMAGEDRATIO_OFFSET UNITYSDK_OFFSET(0x1238130)
#define MX_LOGIC_DATA_DAMAGEEFFECTVALUE_GET_APPLYEFFECTIVEDAMAGEDRATIO_OFFSET UNITYSDK_OFFSET(0x1238140)
#define MX_LOGIC_DATA_DAMAGEEFFECTVALUE_SET_APPLYEFFECTIVEDAMAGEDRATIO_OFFSET UNITYSDK_OFFSET(0x1238150)
#define MX_LOGIC_DATA_DAMAGEEFFECTVALUE_GET_APPLYNORMALDAMAGEDRATIO_OFFSET UNITYSDK_OFFSET(0x1238160)
#define MX_LOGIC_DATA_DAMAGEEFFECTVALUE_SET_APPLYNORMALDAMAGEDRATIO_OFFSET UNITYSDK_OFFSET(0x1238170)
#define MX_LOGIC_DATA_DAMAGEEFFECTVALUE_GET_APPLYRESISTDAMAGEDRATIO_OFFSET UNITYSDK_OFFSET(0x1238180)
#define MX_LOGIC_DATA_DAMAGEEFFECTVALUE_SET_APPLYRESISTDAMAGEDRATIO_OFFSET UNITYSDK_OFFSET(0x1238190)
#define MX_LOGIC_DATA_DAMAGEEFFECTVALUE_.CTOR_OFFSET UNITYSDK_OFFSET(0x12381A0)
#define MX_LOGIC_DATA_DAMAGEEFFECTVALUE_.CTOR_OFFSET UNITYSDK_OFFSET(0x12381C0)
#define MX_LOGIC_DATA_DAMAGEEFFECTVALUE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1238560)
#define MX_LOGIC_DATA_DAMAGEEFFECTVALUE_SETAMOUNT_OFFSET UNITYSDK_OFFSET(0x1238750)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int DamageEffectValue_TypeDefinitionIndex = 13876;

	class DamageEffectValue : public Il2CppObject
	{
	public:
		::MX::Logic::Skills::DamageCriticalType* _CriticalCheck_k__BackingField; // 0x48
		::System::Boolean _CanEvade_k__BackingField; // 0x4C
		::System::Int64 _Amount_k__BackingField; // 0x50
		::FlatData::StatType* _BonusSourceFirst_k__BackingField; // 0x58
		::MX::Core::Math::BasisPoint* _BonusRateFirst_k__BackingField; // 0x60
		::MX::Core::Math::BasisPoint* _LifeRecoverRate_k__BackingField; // 0x68
		::System::Boolean _ApplyBulletType_k__BackingField; // 0x70
		::System::Boolean _ApplyDefense_k__BackingField; // 0x71
		::MX::Logic::Skills::DamageRatioApplyType* _ApplyDamageRatio_k__BackingField; // 0x74
		::MX::Logic::Skills::DamageRatioApplyType* _ApplyDamageRatio2_k__BackingField; // 0x78
		::MX::Core::Math::BasisPoint* _DefensePenetrationRate_k__BackingField; // 0x80
		::System::Boolean _OverrideBulletType_k__BackingField; // 0x88
		::FlatData::BulletType* _BulletTypeToOverride_k__BackingField; // 0x8C
		::System::Boolean _IsAccumulatedDamage_k__BackingField; // 0x90
		::Il2CppArray<::System::Object*>* _ChangeRateByCostList_k__BackingField; // 0x98
		::System::Boolean _IgnoreShield_k__BackingField; // 0xA0
		::System::Boolean _DoNotKillTarget_k__BackingField; // 0xA1
		::System::Boolean _ApplyStability_k__BackingField; // 0xA2
		::System::Boolean _ApplyTerrainAdaptationDamage_k__BackingField; // 0xA3
		::System::Boolean _ApplyExDamagedRatio_k__BackingField; // 0xA4
		::System::Boolean _IsParentDamageOverTime_k__BackingField; // 0xA5
		::System::Boolean _ApplyEnhanceExDamageRate_k__BackingField; // 0xA6
		::System::Boolean _ApplyEnhanceBasicsDamageRate_k__BackingField; // 0xA7
		::MX::Logic::Skills::SkillType* _OverrideSkillType_k__BackingField; // 0xA8
		::MX::Logic::Skills::SkillType* _OverrideSkillDamageType_k__BackingField; // 0xAC
		::System::Boolean _ApplyEnhanceWeakDamageRate_k__BackingField; // 0xB0
		::System::Boolean _ApplyWeakDamagedRatio_k__BackingField; // 0xB1
		::System::Boolean _ApplyEffectiveDamagedRatio_k__BackingField; // 0xB2
		::System::Boolean _ApplyNormalDamagedRatio_k__BackingField; // 0xB3
		::System::Boolean _ApplyResistDamagedRatio_k__BackingField; // 0xB4

		::MX::Logic::Skills::DamageCriticalType* get_CriticalCheck()
		{
			return ((::MX::Logic::Skills::DamageCriticalType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_DAMAGEEFFECTVALUE_GET_CRITICALCHECK_OFFSET))(nullptr);
		}

		::System::Boolean get_CanEvade()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_DAMAGEEFFECTVALUE_GET_CANEVADE_OFFSET))(nullptr);
		}

		::System::Int64 get_Amount()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_DAMAGEEFFECTVALUE_GET_AMOUNT_OFFSET))(nullptr);
		}

		::System::Void set_Amount(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_DAMAGEEFFECTVALUE_SET_AMOUNT_OFFSET))(arg, nullptr);
		}

		::FlatData::StatType* get_BonusSourceFirst()
		{
			return ((::FlatData::StatType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_DAMAGEEFFECTVALUE_GET_BONUSSOURCEFIRST_OFFSET))(nullptr);
		}

		::MX::Core::Math::BasisPoint* get_BonusRateFirst()
		{
			return ((::MX::Core::Math::BasisPoint*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_DAMAGEEFFECTVALUE_GET_BONUSRATEFIRST_OFFSET))(nullptr);
		}

		::MX::Core::Math::BasisPoint* get_LifeRecoverRate()
		{
			return ((::MX::Core::Math::BasisPoint*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_DAMAGEEFFECTVALUE_GET_LIFERECOVERRATE_OFFSET))(nullptr);
		}

		::System::Boolean get_ApplyBulletType()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_DAMAGEEFFECTVALUE_GET_APPLYBULLETTYPE_OFFSET))(nullptr);
		}

		::System::Boolean get_ApplyDefense()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_DAMAGEEFFECTVALUE_GET_APPLYDEFENSE_OFFSET))(nullptr);
		}

		::MX::Logic::Skills::DamageRatioApplyType* get_ApplyDamageRatio()
		{
			return ((::MX::Logic::Skills::DamageRatioApplyType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_DAMAGEEFFECTVALUE_GET_APPLYDAMAGERATIO_OFFSET))(nullptr);
		}

		::MX::Logic::Skills::DamageRatioApplyType* get_ApplyDamageRatio2()
		{
			return ((::MX::Logic::Skills::DamageRatioApplyType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_DAMAGEEFFECTVALUE_GET_APPLYDAMAGERATIO2_OFFSET))(nullptr);
		}

		::MX::Core::Math::BasisPoint* get_DefensePenetrationRate()
		{
			return ((::MX::Core::Math::BasisPoint*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_DAMAGEEFFECTVALUE_GET_DEFENSEPENETRATIONRATE_OFFSET))(nullptr);
		}

		::System::Boolean get_OverrideBulletType()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_DAMAGEEFFECTVALUE_GET_OVERRIDEBULLETTYPE_OFFSET))(nullptr);
		}

		::FlatData::BulletType* get_BulletTypeToOverride()
		{
			return ((::FlatData::BulletType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_DAMAGEEFFECTVALUE_GET_BULLETTYPETOOVERRIDE_OFFSET))(nullptr);
		}

		::System::Boolean get_IsAccumulatedDamage()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_DAMAGEEFFECTVALUE_GET_ISACCUMULATEDDAMAGE_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* get_ChangeRateByCostList()
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_DAMAGEEFFECTVALUE_GET_CHANGERATEBYCOSTLIST_OFFSET))(nullptr);
		}

		::System::Boolean get_IgnoreShield()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_DAMAGEEFFECTVALUE_GET_IGNORESHIELD_OFFSET))(nullptr);
		}

		::System::Boolean get_DoNotKillTarget()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_DAMAGEEFFECTVALUE_GET_DONOTKILLTARGET_OFFSET))(nullptr);
		}

		::System::Boolean get_ApplyStability()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_DAMAGEEFFECTVALUE_GET_APPLYSTABILITY_OFFSET))(nullptr);
		}

		::System::Boolean get_ApplyTerrainAdaptationDamage()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_DAMAGEEFFECTVALUE_GET_APPLYTERRAINADAPTATIONDAMAGE_OFFSET))(nullptr);
		}

		::System::Boolean get_ApplyExDamagedRatio()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_DAMAGEEFFECTVALUE_GET_APPLYEXDAMAGEDRATIO_OFFSET))(nullptr);
		}

		::System::Boolean get_IsParentDamageOverTime()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_DAMAGEEFFECTVALUE_GET_ISPARENTDAMAGEOVERTIME_OFFSET))(nullptr);
		}

		::System::Boolean get_ApplyEnhanceExDamageRate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_DAMAGEEFFECTVALUE_GET_APPLYENHANCEEXDAMAGERATE_OFFSET))(nullptr);
		}

		::System::Boolean get_ApplyEnhanceBasicsDamageRate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_DAMAGEEFFECTVALUE_GET_APPLYENHANCEBASICSDAMAGERATE_OFFSET))(nullptr);
		}

		::MX::Logic::Skills::SkillType* get_OverrideSkillType()
		{
			return ((::MX::Logic::Skills::SkillType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_DAMAGEEFFECTVALUE_GET_OVERRIDESKILLTYPE_OFFSET))(nullptr);
		}

		::MX::Logic::Skills::SkillType* get_OverrideSkillDamageType()
		{
			return ((::MX::Logic::Skills::SkillType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_DAMAGEEFFECTVALUE_GET_OVERRIDESKILLDAMAGETYPE_OFFSET))(nullptr);
		}

		::System::Boolean get_ApplyEnhanceWeakDamageRate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_DAMAGEEFFECTVALUE_GET_APPLYENHANCEWEAKDAMAGERATE_OFFSET))(nullptr);
		}

		::System::Boolean get_ApplyWeakDamagedRatio()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_DAMAGEEFFECTVALUE_GET_APPLYWEAKDAMAGEDRATIO_OFFSET))(nullptr);
		}

		::System::Void set_ApplyWeakDamagedRatio(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_DAMAGEEFFECTVALUE_SET_APPLYWEAKDAMAGEDRATIO_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_ApplyEffectiveDamagedRatio()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_DAMAGEEFFECTVALUE_GET_APPLYEFFECTIVEDAMAGEDRATIO_OFFSET))(nullptr);
		}

		::System::Void set_ApplyEffectiveDamagedRatio(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_DAMAGEEFFECTVALUE_SET_APPLYEFFECTIVEDAMAGEDRATIO_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_ApplyNormalDamagedRatio()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_DAMAGEEFFECTVALUE_GET_APPLYNORMALDAMAGEDRATIO_OFFSET))(nullptr);
		}

		::System::Void set_ApplyNormalDamagedRatio(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_DAMAGEEFFECTVALUE_SET_APPLYNORMALDAMAGEDRATIO_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_ApplyResistDamagedRatio()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_DAMAGEEFFECTVALUE_GET_APPLYRESISTDAMAGEDRATIO_OFFSET))(nullptr);
		}

		::System::Void set_ApplyResistDamagedRatio(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_DAMAGEEFFECTVALUE_SET_APPLYRESISTDAMAGEDRATIO_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::MX::GameData::DAO::Battle::DamageEffectDAO* arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(::MX::GameData::DAO::Battle::DamageEffectDAO*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_DAMAGEEFFECTVALUE_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor(::MX::GameData::DAO::Battle::DamageEffectDAO* arg)
		{
			((::System::Void(*)(::MX::GameData::DAO::Battle::DamageEffectDAO*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_DAMAGEEFFECTVALUE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::MX::GameData::DAO::Battle::AccumulateDamageEffectDAO* arg)
		{
			((::System::Void(*)(::MX::GameData::DAO::Battle::AccumulateDamageEffectDAO*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_DAMAGEEFFECTVALUE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void SetAmount(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_DAMAGEEFFECTVALUE_SETAMOUNT_OFFSET))(arg, nullptr);
		}

	};
}

