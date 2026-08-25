#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Skills { class DamageCriticalType; }
namespace FlatData { class StatType; }
namespace MX::Core::Math { class BasisPoint; }
namespace MX::Logic::Skills { class ExtraStatType; }
namespace MX::Logic::Data { class BlackboardKeyType; }
namespace MX::Logic::Skills { class DamageRatioApplyType; }
namespace MX::Logic::Skills::LogicEffects { class DamageSourceType; }
namespace MX::Logic::Skills { class SkillType; }
namespace FlatData { class BulletType; }
namespace MX::GameData::DAO::Battle { class ExtraStatDamageEffectDAO; }

#define MX_LOGIC_DATA_EXTRASTATDAMAGEEFFECTVALUE_GET_CRITICALCHECK_OFFSET UNITYSDK_OFFSET(0x1239DB0)
#define MX_LOGIC_DATA_EXTRASTATDAMAGEEFFECTVALUE_GET_CANEVADE_OFFSET UNITYSDK_OFFSET(0x1239DC0)
#define MX_LOGIC_DATA_EXTRASTATDAMAGEEFFECTVALUE_GET_AMOUNT_OFFSET UNITYSDK_OFFSET(0x1239DD0)
#define MX_LOGIC_DATA_EXTRASTATDAMAGEEFFECTVALUE_GET_BONUSSOURCEFIRST_OFFSET UNITYSDK_OFFSET(0x1239DE0)
#define MX_LOGIC_DATA_EXTRASTATDAMAGEEFFECTVALUE_GET_BONUSRATEFIRST_OFFSET UNITYSDK_OFFSET(0x1239DF0)
#define MX_LOGIC_DATA_EXTRASTATDAMAGEEFFECTVALUE_GET_MULTIPLYSOURCE_OFFSET UNITYSDK_OFFSET(0x1239E00)
#define MX_LOGIC_DATA_EXTRASTATDAMAGEEFFECTVALUE_GET_MULTIPLIERCONSTANT_OFFSET UNITYSDK_OFFSET(0x1239E10)
#define MX_LOGIC_DATA_EXTRASTATDAMAGEEFFECTVALUE_GET_ADDSOURCE_OFFSET UNITYSDK_OFFSET(0x1239E20)
#define MX_LOGIC_DATA_EXTRASTATDAMAGEEFFECTVALUE_GET_ADDRATE_OFFSET UNITYSDK_OFFSET(0x1239E30)
#define MX_LOGIC_DATA_EXTRASTATDAMAGEEFFECTVALUE_GET_MAXDAMAGERATE_OFFSET UNITYSDK_OFFSET(0x1239E40)
#define MX_LOGIC_DATA_EXTRASTATDAMAGEEFFECTVALUE_GET_BONUSSOURCEBLACKBOARDKEYSTRING_OFFSET UNITYSDK_OFFSET(0x1239E50)
#define MX_LOGIC_DATA_EXTRASTATDAMAGEEFFECTVALUE_GET_BONUSSOURCEBLACKBOARDKEYTYPE_OFFSET UNITYSDK_OFFSET(0x1239E60)
#define MX_LOGIC_DATA_EXTRASTATDAMAGEEFFECTVALUE_GET_BONUSRATEBLACKBOARD_OFFSET UNITYSDK_OFFSET(0x1239E70)
#define MX_LOGIC_DATA_EXTRASTATDAMAGEEFFECTVALUE_GET_IGNOREMAXDAMAGEFORBLACKBOARDBONUS_OFFSET UNITYSDK_OFFSET(0x1239E80)
#define MX_LOGIC_DATA_EXTRASTATDAMAGEEFFECTVALUE_GET_APPLYBULLETTYPE_OFFSET UNITYSDK_OFFSET(0x1239E90)
#define MX_LOGIC_DATA_EXTRASTATDAMAGEEFFECTVALUE_GET_APPLYDEFENSE_OFFSET UNITYSDK_OFFSET(0x1239EA0)
#define MX_LOGIC_DATA_EXTRASTATDAMAGEEFFECTVALUE_GET_APPLYDAMAGERATIO_OFFSET UNITYSDK_OFFSET(0x1239EB0)
#define MX_LOGIC_DATA_EXTRASTATDAMAGEEFFECTVALUE_GET_APPLYDAMAGERATIO2_OFFSET UNITYSDK_OFFSET(0x1239EC0)
#define MX_LOGIC_DATA_EXTRASTATDAMAGEEFFECTVALUE_GET_DEFENSEPENETRATIONRATE_OFFSET UNITYSDK_OFFSET(0x1239ED0)
#define MX_LOGIC_DATA_EXTRASTATDAMAGEEFFECTVALUE_GET_CHANGERATEBYCOSTLIST_OFFSET UNITYSDK_OFFSET(0x1239EE0)
#define MX_LOGIC_DATA_EXTRASTATDAMAGEEFFECTVALUE_GET_ISAMOUNTCHANGEDBYEXTRACOST_OFFSET UNITYSDK_OFFSET(0x1239EF0)
#define MX_LOGIC_DATA_EXTRASTATDAMAGEEFFECTVALUE_GET_ISBONUSRATECHANGEDBYEXTRACOST_OFFSET UNITYSDK_OFFSET(0x1239F00)
#define MX_LOGIC_DATA_EXTRASTATDAMAGEEFFECTVALUE_GET_ISMULTIPLIERCONSTANTCHANGEDBYEXTRACOST_OFFSET UNITYSDK_OFFSET(0x1239F10)
#define MX_LOGIC_DATA_EXTRASTATDAMAGEEFFECTVALUE_GET_ISADDRATECONSTANTCHANGEDBYEXTRACOST_OFFSET UNITYSDK_OFFSET(0x1239F20)
#define MX_LOGIC_DATA_EXTRASTATDAMAGEEFFECTVALUE_GET_DAMAGESOURCETYPE_OFFSET UNITYSDK_OFFSET(0x1239F30)
#define MX_LOGIC_DATA_EXTRASTATDAMAGEEFFECTVALUE_GET_ISPARENTDAMAGEOVERTIME_OFFSET UNITYSDK_OFFSET(0x1239F40)
#define MX_LOGIC_DATA_EXTRASTATDAMAGEEFFECTVALUE_GET_IGNORESHIELD_OFFSET UNITYSDK_OFFSET(0x1239F50)
#define MX_LOGIC_DATA_EXTRASTATDAMAGEEFFECTVALUE_GET_DONOTKILLTARGET_OFFSET UNITYSDK_OFFSET(0x1239F60)
#define MX_LOGIC_DATA_EXTRASTATDAMAGEEFFECTVALUE_GET_APPLYSTABILITY_OFFSET UNITYSDK_OFFSET(0x1239F70)
#define MX_LOGIC_DATA_EXTRASTATDAMAGEEFFECTVALUE_GET_APPLYTERRAINADAPTATIONDAMAGE_OFFSET UNITYSDK_OFFSET(0x1239F80)
#define MX_LOGIC_DATA_EXTRASTATDAMAGEEFFECTVALUE_GET_APPLYEXDAMAGEDRATIO_OFFSET UNITYSDK_OFFSET(0x1239F90)
#define MX_LOGIC_DATA_EXTRASTATDAMAGEEFFECTVALUE_GET_APPLYENHANCEEXDAMAGERATE_OFFSET UNITYSDK_OFFSET(0x1239FA0)
#define MX_LOGIC_DATA_EXTRASTATDAMAGEEFFECTVALUE_GET_APPLYENHANCEBASICSDAMAGERATE_OFFSET UNITYSDK_OFFSET(0x1239FB0)
#define MX_LOGIC_DATA_EXTRASTATDAMAGEEFFECTVALUE_GET_OVERRIDESKILLTYPE_OFFSET UNITYSDK_OFFSET(0x1239FC0)
#define MX_LOGIC_DATA_EXTRASTATDAMAGEEFFECTVALUE_GET_OVERRIDESKILLDAMAGETYPE_OFFSET UNITYSDK_OFFSET(0x1239FD0)
#define MX_LOGIC_DATA_EXTRASTATDAMAGEEFFECTVALUE_GET_APPLYENHANCEBULLETTYPE_OFFSET UNITYSDK_OFFSET(0x1239FE0)
#define MX_LOGIC_DATA_EXTRASTATDAMAGEEFFECTVALUE_GET_OVERRIDEBULLETTYPE_OFFSET UNITYSDK_OFFSET(0x1239FF0)
#define MX_LOGIC_DATA_EXTRASTATDAMAGEEFFECTVALUE_GET_BULLETTYPETOOVERRIDE_OFFSET UNITYSDK_OFFSET(0x123A000)
#define MX_LOGIC_DATA_EXTRASTATDAMAGEEFFECTVALUE_GET_APPLYENHANCEWEAKDAMAGERATE_OFFSET UNITYSDK_OFFSET(0x123A010)
#define MX_LOGIC_DATA_EXTRASTATDAMAGEEFFECTVALUE_GET_APPLYWEAKDAMAGEDRATIO_OFFSET UNITYSDK_OFFSET(0x123A020)
#define MX_LOGIC_DATA_EXTRASTATDAMAGEEFFECTVALUE_SET_APPLYWEAKDAMAGEDRATIO_OFFSET UNITYSDK_OFFSET(0x123A030)
#define MX_LOGIC_DATA_EXTRASTATDAMAGEEFFECTVALUE_GET_APPLYEFFECTIVEDAMAGEDRATIO_OFFSET UNITYSDK_OFFSET(0x123A040)
#define MX_LOGIC_DATA_EXTRASTATDAMAGEEFFECTVALUE_SET_APPLYEFFECTIVEDAMAGEDRATIO_OFFSET UNITYSDK_OFFSET(0x123A050)
#define MX_LOGIC_DATA_EXTRASTATDAMAGEEFFECTVALUE_GET_APPLYNORMALDAMAGEDRATIO_OFFSET UNITYSDK_OFFSET(0x123A060)
#define MX_LOGIC_DATA_EXTRASTATDAMAGEEFFECTVALUE_SET_APPLYNORMALDAMAGEDRATIO_OFFSET UNITYSDK_OFFSET(0x123A070)
#define MX_LOGIC_DATA_EXTRASTATDAMAGEEFFECTVALUE_GET_APPLYRESISTDAMAGEDRATIO_OFFSET UNITYSDK_OFFSET(0x123A080)
#define MX_LOGIC_DATA_EXTRASTATDAMAGEEFFECTVALUE_SET_APPLYRESISTDAMAGEDRATIO_OFFSET UNITYSDK_OFFSET(0x123A090)
#define MX_LOGIC_DATA_EXTRASTATDAMAGEEFFECTVALUE_.CTOR_OFFSET UNITYSDK_OFFSET(0x123A0A0)
#define MX_LOGIC_DATA_EXTRASTATDAMAGEEFFECTVALUE_.CTOR_OFFSET UNITYSDK_OFFSET(0x123A110)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int ExtraStatDamageEffectValue_TypeDefinitionIndex = 13887;

	class ExtraStatDamageEffectValue : public Il2CppObject
	{
	public:
		::MX::Logic::Skills::DamageCriticalType* _CriticalCheck_k__BackingField; // 0x48
		::System::Boolean _CanEvade_k__BackingField; // 0x4C
		::System::Int64 _Amount_k__BackingField; // 0x50
		::FlatData::StatType* _BonusSourceFirst_k__BackingField; // 0x58
		::MX::Core::Math::BasisPoint* _BonusRateFirst_k__BackingField; // 0x60
		::MX::Logic::Skills::ExtraStatType* _MultiplySource_k__BackingField; // 0x68
		::MX::Core::Math::BasisPoint* _MultiplierConstant_k__BackingField; // 0x70
		::MX::Logic::Skills::ExtraStatType* _AddSource_k__BackingField; // 0x78
		::MX::Core::Math::BasisPoint* _AddRate_k__BackingField; // 0x80
		::MX::Core::Math::BasisPoint* _MaxDamageRate_k__BackingField; // 0x88
		::System::String* _BonusSourceBlackboardKeyString_k__BackingField; // 0x90
		::MX::Logic::Data::BlackboardKeyType* _BonusSourceBlackboardKeyType_k__BackingField; // 0x98
		::MX::Core::Math::BasisPoint* _BonusRateBlackboard_k__BackingField; // 0xA0
		::System::Boolean _IgnoreMaxDamageForBlackboardBonus_k__BackingField; // 0xA8
		::System::Boolean _ApplyBulletType_k__BackingField; // 0xA9
		::System::Boolean _ApplyDefense_k__BackingField; // 0xAA
		::MX::Logic::Skills::DamageRatioApplyType* _ApplyDamageRatio_k__BackingField; // 0xAC
		::MX::Logic::Skills::DamageRatioApplyType* _ApplyDamageRatio2_k__BackingField; // 0xB0
		::MX::Core::Math::BasisPoint* _DefensePenetrationRate_k__BackingField; // 0xB8
		::Il2CppArray<::System::Object*>* _ChangeRateByCostList_k__BackingField; // 0xC0
		::System::Boolean _IsAmountChangedByExtraCost_k__BackingField; // 0xC8
		::System::Boolean _IsBonusRateChangedByExtraCost_k__BackingField; // 0xC9
		::System::Boolean _IsMultiplierConstantChangedByExtraCost_k__BackingField; // 0xCA
		::System::Boolean _IsAddRateConstantChangedByExtraCost_k__BackingField; // 0xCB
		::MX::Logic::Skills::LogicEffects::DamageSourceType* _DamageSourceType_k__BackingField; // 0xCC
		::System::Boolean _IsParentDamageOverTime_k__BackingField; // 0xD0
		::System::Boolean _IgnoreShield_k__BackingField; // 0xD1
		::System::Boolean _DoNotKillTarget_k__BackingField; // 0xD2
		::System::Boolean _ApplyStability_k__BackingField; // 0xD3
		::System::Boolean _ApplyTerrainAdaptationDamage_k__BackingField; // 0xD4
		::System::Boolean _ApplyExDamagedRatio_k__BackingField; // 0xD5
		::System::Boolean _ApplyEnhanceExDamageRate_k__BackingField; // 0xD6
		::System::Boolean _ApplyEnhanceBasicsDamageRate_k__BackingField; // 0xD7
		::MX::Logic::Skills::SkillType* _OverrideSkillType_k__BackingField; // 0xD8
		::MX::Logic::Skills::SkillType* _OverrideSkillDamageType_k__BackingField; // 0xDC
		::System::Boolean _ApplyEnhanceBulletType_k__BackingField; // 0xE0
		::System::Boolean _OverrideBulletType_k__BackingField; // 0xE1
		::FlatData::BulletType* _BulletTypeToOverride_k__BackingField; // 0xE4
		::System::Boolean _ApplyEnhanceWeakDamageRate_k__BackingField; // 0xE8
		::System::Boolean _ApplyWeakDamagedRatio_k__BackingField; // 0xE9
		::System::Boolean _ApplyEffectiveDamagedRatio_k__BackingField; // 0xEA
		::System::Boolean _ApplyNormalDamagedRatio_k__BackingField; // 0xEB
		::System::Boolean _ApplyResistDamagedRatio_k__BackingField; // 0xEC

		::MX::Logic::Skills::DamageCriticalType* get_CriticalCheck()
		{
			return ((::MX::Logic::Skills::DamageCriticalType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_EXTRASTATDAMAGEEFFECTVALUE_GET_CRITICALCHECK_OFFSET))(nullptr);
		}

		::System::Boolean get_CanEvade()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_EXTRASTATDAMAGEEFFECTVALUE_GET_CANEVADE_OFFSET))(nullptr);
		}

		::System::Int64 get_Amount()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_EXTRASTATDAMAGEEFFECTVALUE_GET_AMOUNT_OFFSET))(nullptr);
		}

		::FlatData::StatType* get_BonusSourceFirst()
		{
			return ((::FlatData::StatType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_EXTRASTATDAMAGEEFFECTVALUE_GET_BONUSSOURCEFIRST_OFFSET))(nullptr);
		}

		::MX::Core::Math::BasisPoint* get_BonusRateFirst()
		{
			return ((::MX::Core::Math::BasisPoint*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_EXTRASTATDAMAGEEFFECTVALUE_GET_BONUSRATEFIRST_OFFSET))(nullptr);
		}

		::MX::Logic::Skills::ExtraStatType* get_MultiplySource()
		{
			return ((::MX::Logic::Skills::ExtraStatType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_EXTRASTATDAMAGEEFFECTVALUE_GET_MULTIPLYSOURCE_OFFSET))(nullptr);
		}

		::MX::Core::Math::BasisPoint* get_MultiplierConstant()
		{
			return ((::MX::Core::Math::BasisPoint*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_EXTRASTATDAMAGEEFFECTVALUE_GET_MULTIPLIERCONSTANT_OFFSET))(nullptr);
		}

		::MX::Logic::Skills::ExtraStatType* get_AddSource()
		{
			return ((::MX::Logic::Skills::ExtraStatType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_EXTRASTATDAMAGEEFFECTVALUE_GET_ADDSOURCE_OFFSET))(nullptr);
		}

		::MX::Core::Math::BasisPoint* get_AddRate()
		{
			return ((::MX::Core::Math::BasisPoint*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_EXTRASTATDAMAGEEFFECTVALUE_GET_ADDRATE_OFFSET))(nullptr);
		}

		::MX::Core::Math::BasisPoint* get_MaxDamageRate()
		{
			return ((::MX::Core::Math::BasisPoint*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_EXTRASTATDAMAGEEFFECTVALUE_GET_MAXDAMAGERATE_OFFSET))(nullptr);
		}

		::System::String* get_BonusSourceBlackboardKeyString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_EXTRASTATDAMAGEEFFECTVALUE_GET_BONUSSOURCEBLACKBOARDKEYSTRING_OFFSET))(nullptr);
		}

		::MX::Logic::Data::BlackboardKeyType* get_BonusSourceBlackboardKeyType()
		{
			return ((::MX::Logic::Data::BlackboardKeyType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_EXTRASTATDAMAGEEFFECTVALUE_GET_BONUSSOURCEBLACKBOARDKEYTYPE_OFFSET))(nullptr);
		}

		::MX::Core::Math::BasisPoint* get_BonusRateBlackboard()
		{
			return ((::MX::Core::Math::BasisPoint*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_EXTRASTATDAMAGEEFFECTVALUE_GET_BONUSRATEBLACKBOARD_OFFSET))(nullptr);
		}

		::System::Boolean get_IgnoreMaxDamageForBlackboardBonus()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_EXTRASTATDAMAGEEFFECTVALUE_GET_IGNOREMAXDAMAGEFORBLACKBOARDBONUS_OFFSET))(nullptr);
		}

		::System::Boolean get_ApplyBulletType()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_EXTRASTATDAMAGEEFFECTVALUE_GET_APPLYBULLETTYPE_OFFSET))(nullptr);
		}

		::System::Boolean get_ApplyDefense()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_EXTRASTATDAMAGEEFFECTVALUE_GET_APPLYDEFENSE_OFFSET))(nullptr);
		}

		::MX::Logic::Skills::DamageRatioApplyType* get_ApplyDamageRatio()
		{
			return ((::MX::Logic::Skills::DamageRatioApplyType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_EXTRASTATDAMAGEEFFECTVALUE_GET_APPLYDAMAGERATIO_OFFSET))(nullptr);
		}

		::MX::Logic::Skills::DamageRatioApplyType* get_ApplyDamageRatio2()
		{
			return ((::MX::Logic::Skills::DamageRatioApplyType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_EXTRASTATDAMAGEEFFECTVALUE_GET_APPLYDAMAGERATIO2_OFFSET))(nullptr);
		}

		::MX::Core::Math::BasisPoint* get_DefensePenetrationRate()
		{
			return ((::MX::Core::Math::BasisPoint*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_EXTRASTATDAMAGEEFFECTVALUE_GET_DEFENSEPENETRATIONRATE_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* get_ChangeRateByCostList()
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_EXTRASTATDAMAGEEFFECTVALUE_GET_CHANGERATEBYCOSTLIST_OFFSET))(nullptr);
		}

		::System::Boolean get_IsAmountChangedByExtraCost()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_EXTRASTATDAMAGEEFFECTVALUE_GET_ISAMOUNTCHANGEDBYEXTRACOST_OFFSET))(nullptr);
		}

		::System::Boolean get_IsBonusRateChangedByExtraCost()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_EXTRASTATDAMAGEEFFECTVALUE_GET_ISBONUSRATECHANGEDBYEXTRACOST_OFFSET))(nullptr);
		}

		::System::Boolean get_IsMultiplierConstantChangedByExtraCost()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_EXTRASTATDAMAGEEFFECTVALUE_GET_ISMULTIPLIERCONSTANTCHANGEDBYEXTRACOST_OFFSET))(nullptr);
		}

		::System::Boolean get_IsAddRateConstantChangedByExtraCost()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_EXTRASTATDAMAGEEFFECTVALUE_GET_ISADDRATECONSTANTCHANGEDBYEXTRACOST_OFFSET))(nullptr);
		}

		::MX::Logic::Skills::LogicEffects::DamageSourceType* get_DamageSourceType()
		{
			return ((::MX::Logic::Skills::LogicEffects::DamageSourceType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_EXTRASTATDAMAGEEFFECTVALUE_GET_DAMAGESOURCETYPE_OFFSET))(nullptr);
		}

		::System::Boolean get_IsParentDamageOverTime()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_EXTRASTATDAMAGEEFFECTVALUE_GET_ISPARENTDAMAGEOVERTIME_OFFSET))(nullptr);
		}

		::System::Boolean get_IgnoreShield()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_EXTRASTATDAMAGEEFFECTVALUE_GET_IGNORESHIELD_OFFSET))(nullptr);
		}

		::System::Boolean get_DoNotKillTarget()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_EXTRASTATDAMAGEEFFECTVALUE_GET_DONOTKILLTARGET_OFFSET))(nullptr);
		}

		::System::Boolean get_ApplyStability()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_EXTRASTATDAMAGEEFFECTVALUE_GET_APPLYSTABILITY_OFFSET))(nullptr);
		}

		::System::Boolean get_ApplyTerrainAdaptationDamage()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_EXTRASTATDAMAGEEFFECTVALUE_GET_APPLYTERRAINADAPTATIONDAMAGE_OFFSET))(nullptr);
		}

		::System::Boolean get_ApplyExDamagedRatio()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_EXTRASTATDAMAGEEFFECTVALUE_GET_APPLYEXDAMAGEDRATIO_OFFSET))(nullptr);
		}

		::System::Boolean get_ApplyEnhanceExDamageRate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_EXTRASTATDAMAGEEFFECTVALUE_GET_APPLYENHANCEEXDAMAGERATE_OFFSET))(nullptr);
		}

		::System::Boolean get_ApplyEnhanceBasicsDamageRate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_EXTRASTATDAMAGEEFFECTVALUE_GET_APPLYENHANCEBASICSDAMAGERATE_OFFSET))(nullptr);
		}

		::MX::Logic::Skills::SkillType* get_OverrideSkillType()
		{
			return ((::MX::Logic::Skills::SkillType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_EXTRASTATDAMAGEEFFECTVALUE_GET_OVERRIDESKILLTYPE_OFFSET))(nullptr);
		}

		::MX::Logic::Skills::SkillType* get_OverrideSkillDamageType()
		{
			return ((::MX::Logic::Skills::SkillType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_EXTRASTATDAMAGEEFFECTVALUE_GET_OVERRIDESKILLDAMAGETYPE_OFFSET))(nullptr);
		}

		::System::Boolean get_ApplyEnhanceBulletType()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_EXTRASTATDAMAGEEFFECTVALUE_GET_APPLYENHANCEBULLETTYPE_OFFSET))(nullptr);
		}

		::System::Boolean get_OverrideBulletType()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_EXTRASTATDAMAGEEFFECTVALUE_GET_OVERRIDEBULLETTYPE_OFFSET))(nullptr);
		}

		::FlatData::BulletType* get_BulletTypeToOverride()
		{
			return ((::FlatData::BulletType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_EXTRASTATDAMAGEEFFECTVALUE_GET_BULLETTYPETOOVERRIDE_OFFSET))(nullptr);
		}

		::System::Boolean get_ApplyEnhanceWeakDamageRate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_EXTRASTATDAMAGEEFFECTVALUE_GET_APPLYENHANCEWEAKDAMAGERATE_OFFSET))(nullptr);
		}

		::System::Boolean get_ApplyWeakDamagedRatio()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_EXTRASTATDAMAGEEFFECTVALUE_GET_APPLYWEAKDAMAGEDRATIO_OFFSET))(nullptr);
		}

		::System::Void set_ApplyWeakDamagedRatio(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_EXTRASTATDAMAGEEFFECTVALUE_SET_APPLYWEAKDAMAGEDRATIO_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_ApplyEffectiveDamagedRatio()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_EXTRASTATDAMAGEEFFECTVALUE_GET_APPLYEFFECTIVEDAMAGEDRATIO_OFFSET))(nullptr);
		}

		::System::Void set_ApplyEffectiveDamagedRatio(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_EXTRASTATDAMAGEEFFECTVALUE_SET_APPLYEFFECTIVEDAMAGEDRATIO_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_ApplyNormalDamagedRatio()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_EXTRASTATDAMAGEEFFECTVALUE_GET_APPLYNORMALDAMAGEDRATIO_OFFSET))(nullptr);
		}

		::System::Void set_ApplyNormalDamagedRatio(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_EXTRASTATDAMAGEEFFECTVALUE_SET_APPLYNORMALDAMAGEDRATIO_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_ApplyResistDamagedRatio()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_EXTRASTATDAMAGEEFFECTVALUE_GET_APPLYRESISTDAMAGEDRATIO_OFFSET))(nullptr);
		}

		::System::Void set_ApplyResistDamagedRatio(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_EXTRASTATDAMAGEEFFECTVALUE_SET_APPLYRESISTDAMAGEDRATIO_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::MX::GameData::DAO::Battle::ExtraStatDamageEffectDAO* arg, ::System::Boolean arg2, ::System::Boolean arg3, ::System::Boolean arg4, ::System::Boolean arg5, ::MX::Logic::Skills::LogicEffects::DamageSourceType* arg6, ::System::Boolean arg7)
		{
			((::System::Void(*)(::MX::GameData::DAO::Battle::ExtraStatDamageEffectDAO*, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::MX::Logic::Skills::LogicEffects::DamageSourceType*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_EXTRASTATDAMAGEEFFECTVALUE_.CTOR_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, arg7, nullptr);
		}

		::System::Void .ctor(::MX::GameData::DAO::Battle::ExtraStatDamageEffectDAO* arg, ::System::Boolean arg2, ::System::Boolean arg3, ::System::Boolean arg4, ::System::Boolean arg5, ::MX::Logic::Skills::LogicEffects::DamageSourceType* arg6)
		{
			((::System::Void(*)(::MX::GameData::DAO::Battle::ExtraStatDamageEffectDAO*, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::MX::Logic::Skills::LogicEffects::DamageSourceType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_EXTRASTATDAMAGEEFFECTVALUE_.CTOR_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, nullptr);
		}

	};
}

