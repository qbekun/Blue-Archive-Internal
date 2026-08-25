#pragma once
#include "../../../../unitysdk.h"

namespace MX::Logic::Skills { class DamageCriticalType; }
namespace FlatData { class StatType; }
namespace MX::Core::Math { class BasisPoint; }
namespace MX::Logic::Skills { class ExtraStatType; }
namespace MX::Logic::Data { class BlackboardKeyType; }
namespace FlatData { class BulletType; }
namespace MX::Logic::Skills { class DamageRatioApplyType; }
namespace MX::Logic::Skills { class SkillType; }
namespace MX::Logic::Skills::LogicEffects { class DamageSourceType; }
namespace MX::Logic::Data { class DamageEffectValue; }
namespace MX::Logic::Skills { class SkillSpecification; }
namespace MX::Logic::Skills::LogicEffects { class LogicEffectHitSpecification; }
namespace MX::Logic::Data { class ExtraStatDamageEffectValue; }
namespace MX::Logic::Data { class DamageModifier; }

#define MX_LOGIC_SKILLS_LOGICEFFECTS_DAMAGEEFFECT_GET_CRITICALCHECK_OFFSET UNITYSDK_OFFSET(0x1413880)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_DAMAGEEFFECT_GET_CANEVADE_OFFSET UNITYSDK_OFFSET(0x1413890)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_DAMAGEEFFECT_GET_AMOUNT_OFFSET UNITYSDK_OFFSET(0x14138A0)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_DAMAGEEFFECT_GET_BONUSSOURCEFIRST_OFFSET UNITYSDK_OFFSET(0x14138B0)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_DAMAGEEFFECT_GET_BONUSRATEFIRST_OFFSET UNITYSDK_OFFSET(0x14138C0)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_DAMAGEEFFECT_GET_EXTRASTATDAMAGEMULTIPLIERSOURCE_OFFSET UNITYSDK_OFFSET(0x14138D0)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_DAMAGEEFFECT_GET_EXTRASTATDAMAGEMULTIPLIERCONSTANT_OFFSET UNITYSDK_OFFSET(0x14138E0)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_DAMAGEEFFECT_GET_EXTRASTATDAMAGEADDSOURCE_OFFSET UNITYSDK_OFFSET(0x14138F0)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_DAMAGEEFFECT_GET_EXTRASTATDAMAGEADDRATE_OFFSET UNITYSDK_OFFSET(0x1413900)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_DAMAGEEFFECT_GET_BONUSSOURCEBLACKBOARDKEYSTRING_OFFSET UNITYSDK_OFFSET(0x1413910)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_DAMAGEEFFECT_GET_BONUSSOURCEBLACKBOARDKEYTYPE_OFFSET UNITYSDK_OFFSET(0x1413920)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_DAMAGEEFFECT_GET_BONUSRATEBLACKBOARD_OFFSET UNITYSDK_OFFSET(0x1413930)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_DAMAGEEFFECT_GET_IGNOREMAXDAMAGEFORBLACKBOARDBONUS_OFFSET UNITYSDK_OFFSET(0x1413940)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_DAMAGEEFFECT_GET_MAXDAMAGERATE_OFFSET UNITYSDK_OFFSET(0x1413950)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_DAMAGEEFFECT_GET_LIFERECOVERRATE_OFFSET UNITYSDK_OFFSET(0x1413960)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_DAMAGEEFFECT_GET_ISACCUMULATEDDAMAGE_OFFSET UNITYSDK_OFFSET(0x1413970)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_DAMAGEEFFECT_GET_OVERRIDEBULLETTYPE_OFFSET UNITYSDK_OFFSET(0x1413980)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_DAMAGEEFFECT_GET_BULLETTYPETOOVERRIDE_OFFSET UNITYSDK_OFFSET(0x1413990)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_DAMAGEEFFECT_GET_APPLYENHANCEBULLETTYPE_OFFSET UNITYSDK_OFFSET(0x14139A0)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_DAMAGEEFFECT_GET_APPLYBULLETTYPE_OFFSET UNITYSDK_OFFSET(0x14139B0)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_DAMAGEEFFECT_GET_APPLYDEFENSE_OFFSET UNITYSDK_OFFSET(0x14139C0)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_DAMAGEEFFECT_GET_APPLYDAMAGERATIO_OFFSET UNITYSDK_OFFSET(0x14139D0)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_DAMAGEEFFECT_GET_APPLYDAMAGERATIO2_OFFSET UNITYSDK_OFFSET(0x14139E0)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_DAMAGEEFFECT_GET_DEFENSEPENETRATIONRATE_OFFSET UNITYSDK_OFFSET(0x14139F0)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_DAMAGEEFFECT_GET_IGNORESHIELD_OFFSET UNITYSDK_OFFSET(0x1413A00)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_DAMAGEEFFECT_GET_DONOTKILLTARGET_OFFSET UNITYSDK_OFFSET(0x1413A10)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_DAMAGEEFFECT_GET_APPLYSTABILITY_OFFSET UNITYSDK_OFFSET(0x1413A20)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_DAMAGEEFFECT_GET_APPLYTERRAINADAPTATIONDAMAGE_OFFSET UNITYSDK_OFFSET(0x1413A30)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_DAMAGEEFFECT_GET_APPLYEXDAMAGEDRATIO_OFFSET UNITYSDK_OFFSET(0x1413A40)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_DAMAGEEFFECT_GET_APPLYENHANCEEXDAMAGERATE_OFFSET UNITYSDK_OFFSET(0x1413A50)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_DAMAGEEFFECT_GET_APPLYENHANCEBASICSDAMAGERATE_OFFSET UNITYSDK_OFFSET(0x1413A60)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_DAMAGEEFFECT_GET_OVERRIDESKILLTYPE_OFFSET UNITYSDK_OFFSET(0x1413A70)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_DAMAGEEFFECT_GET_OVERRIDESKILLDAMAGETYPE_OFFSET UNITYSDK_OFFSET(0x1413A80)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_DAMAGEEFFECT_GET_DAMAGEMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x1413A90)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_DAMAGEEFFECT_SET_DAMAGEMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x1413AA0)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_DAMAGEEFFECT_GET_DAMAGEMODIFIERS_OFFSET UNITYSDK_OFFSET(0x1413AB0)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_DAMAGEEFFECT_SET_DAMAGEMODIFIERS_OFFSET UNITYSDK_OFFSET(0x1413AC0)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_DAMAGEEFFECT_GET_PERIODMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x1413AE0)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_DAMAGEEFFECT_SET_PERIODMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x1413AF0)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_DAMAGEEFFECT_GET_USEFIXEDSTABILITYRATE_OFFSET UNITYSDK_OFFSET(0x1413B00)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_DAMAGEEFFECT_SET_USEFIXEDSTABILITYRATE_OFFSET UNITYSDK_OFFSET(0x1413B10)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_DAMAGEEFFECT_GET_FIXEDSTABILITYRATE_OFFSET UNITYSDK_OFFSET(0x1413B20)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_DAMAGEEFFECT_SET_FIXEDSTABILITYRATE_OFFSET UNITYSDK_OFFSET(0x1413B30)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_DAMAGEEFFECT_GET_ONSTABILITYRATEAPPLIED_OFFSET UNITYSDK_OFFSET(0x1413B40)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_DAMAGEEFFECT_SET_ONSTABILITYRATEAPPLIED_OFFSET UNITYSDK_OFFSET(0x1413B50)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_DAMAGEEFFECT_GET_ADDFIXEDAMOUNT_OFFSET UNITYSDK_OFFSET(0x1413B70)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_DAMAGEEFFECT_SET_ADDFIXEDAMOUNT_OFFSET UNITYSDK_OFFSET(0x1413B80)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_DAMAGEEFFECT_GET_ISADDITIONALTICK_OFFSET UNITYSDK_OFFSET(0x1413B90)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_DAMAGEEFFECT_SET_ISADDITIONALTICK_OFFSET UNITYSDK_OFFSET(0x1413BA0)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_DAMAGEEFFECT_GET_ADDITIONALTICKMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x1413BB0)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_DAMAGEEFFECT_SET_ADDITIONALTICKMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x1413BC0)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_DAMAGEEFFECT_GET_TRIGGEROTHEREFFECT_OFFSET UNITYSDK_OFFSET(0x1413BD0)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_DAMAGEEFFECT_SET_TRIGGEROTHEREFFECT_OFFSET UNITYSDK_OFFSET(0x1413BE0)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_DAMAGEEFFECT_GET_SOURCETYPE_OFFSET UNITYSDK_OFFSET(0x1413BF0)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_DAMAGEEFFECT_SET_SOURCETYPE_OFFSET UNITYSDK_OFFSET(0x1413C00)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_DAMAGEEFFECT_GET_HASEXTRASTATDAMAGE_OFFSET UNITYSDK_OFFSET(0x1413C10)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_DAMAGEEFFECT_GET_ISDURATIONCHANGEDBYSTAT_OFFSET UNITYSDK_OFFSET(0x1413C30)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_DAMAGEEFFECT_GET_ISPARENTDAMAGEOVERTIME_OFFSET UNITYSDK_OFFSET(0x1413C40)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_DAMAGEEFFECT_SET_ISPARENTDAMAGEOVERTIME_OFFSET UNITYSDK_OFFSET(0x1413C50)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_DAMAGEEFFECT_GET_APPLYENHANCEWEAKDAMAGERATE_OFFSET UNITYSDK_OFFSET(0x1413C60)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_DAMAGEEFFECT_SET_APPLYENHANCEWEAKDAMAGERATE_OFFSET UNITYSDK_OFFSET(0x1413C70)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_DAMAGEEFFECT_GET_APPLYWEAKDAMAGEDRATIO_OFFSET UNITYSDK_OFFSET(0x1413C80)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_DAMAGEEFFECT_SET_APPLYWEAKDAMAGEDRATIO_OFFSET UNITYSDK_OFFSET(0x1413C90)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_DAMAGEEFFECT_GET_APPLYEFFECTIVEDAMAGEDRATIO_OFFSET UNITYSDK_OFFSET(0x1413CA0)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_DAMAGEEFFECT_SET_APPLYEFFECTIVEDAMAGEDRATIO_OFFSET UNITYSDK_OFFSET(0x1413CB0)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_DAMAGEEFFECT_GET_APPLYNORMALDAMAGEDRATIO_OFFSET UNITYSDK_OFFSET(0x1413CC0)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_DAMAGEEFFECT_SET_APPLYNORMALDAMAGEDRATIO_OFFSET UNITYSDK_OFFSET(0x1413CD0)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_DAMAGEEFFECT_GET_APPLYRESISTDAMAGEDRATIO_OFFSET UNITYSDK_OFFSET(0x1413CE0)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_DAMAGEEFFECT_SET_APPLYRESISTDAMAGEDRATIO_OFFSET UNITYSDK_OFFSET(0x1413CF0)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_DAMAGEEFFECT_.CTOR_OFFSET UNITYSDK_OFFSET(0x1413D00)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_DAMAGEEFFECT_.CTOR_OFFSET UNITYSDK_OFFSET(0x1414160)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_DAMAGEEFFECT_SETDAMAGEMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x14146A0)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_DAMAGEEFFECT_ADDDAMAGEMODIFIER_OFFSET UNITYSDK_OFFSET(0x14146B0)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_DAMAGEEFFECT_ADDADDFIXEDAMOUNT_OFFSET UNITYSDK_OFFSET(0x14133C0)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_DAMAGEEFFECT_SETPERIODMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x14147C0)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_DAMAGEEFFECT_SETFIXEDSTABILITYSETTING_OFFSET UNITYSDK_OFFSET(0x14147D0)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_DAMAGEEFFECT_SETADDITIONALTICKMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x1414800)

namespace MX::Logic::Skills::LogicEffects
{
	inline static constexpr unsigned int DamageEffect_TypeDefinitionIndex = 14730;

	class DamageEffect : public Il2CppObject
	{
	public:
		::MX::Logic::Skills::DamageCriticalType* _CriticalCheck_k__BackingField; // 0xD0
		::System::Boolean _CanEvade_k__BackingField; // 0xD4
		::System::Int64 _Amount_k__BackingField; // 0xD8
		::FlatData::StatType* _BonusSourceFirst_k__BackingField; // 0xE0
		::MX::Core::Math::BasisPoint* _BonusRateFirst_k__BackingField; // 0xE8
		::MX::Logic::Skills::ExtraStatType* _ExtraStatDamageMultiplierSource_k__BackingField; // 0xF0
		::MX::Core::Math::BasisPoint* _ExtraStatDamageMultiplierConstant_k__BackingField; // 0xF8
		::MX::Logic::Skills::ExtraStatType* _ExtraStatDamageAddSource_k__BackingField; // 0x100
		::MX::Core::Math::BasisPoint* _ExtraStatDamageAddRate_k__BackingField; // 0x108
		::System::String* _BonusSourceBlackboardKeyString_k__BackingField; // 0x110
		::MX::Logic::Data::BlackboardKeyType* _BonusSourceBlackboardKeyType_k__BackingField; // 0x118
		::MX::Core::Math::BasisPoint* _BonusRateBlackboard_k__BackingField; // 0x120
		::System::Boolean _IgnoreMaxDamageForBlackboardBonus_k__BackingField; // 0x128
		::MX::Core::Math::BasisPoint* _MaxDamageRate_k__BackingField; // 0x130
		::MX::Core::Math::BasisPoint* _LifeRecoverRate_k__BackingField; // 0x138
		::System::Boolean _IsAccumulatedDamage_k__BackingField; // 0x140
		::System::Boolean _OverridebulletType_k__BackingField; // 0x141
		::FlatData::BulletType* _BulletTypeToOverride_k__BackingField; // 0x144
		::System::Boolean _ApplyEnhanceBulletType_k__BackingField; // 0x148
		::System::Boolean _ApplyBulletType_k__BackingField; // 0x149
		::System::Boolean _ApplyDefense_k__BackingField; // 0x14A
		::MX::Logic::Skills::DamageRatioApplyType* _ApplyDamageRatio_k__BackingField; // 0x14C
		::MX::Logic::Skills::DamageRatioApplyType* _ApplyDamageRatio2_k__BackingField; // 0x150
		::MX::Core::Math::BasisPoint* _DefensePenetrationRate_k__BackingField; // 0x158
		::System::Boolean _IgnoreShield_k__BackingField; // 0x160
		::System::Boolean _DoNotKillTarget_k__BackingField; // 0x161
		::System::Boolean _ApplyStability_k__BackingField; // 0x162
		::System::Boolean _ApplyTerrainAdaptationDamage_k__BackingField; // 0x163
		::System::Boolean _ApplyExDamagedRatio_k__BackingField; // 0x164
		::System::Boolean _ApplyEnhanceExDamageRate_k__BackingField; // 0x165
		::System::Boolean _ApplyEnhanceBasicsDamageRate_k__BackingField; // 0x166
		::MX::Logic::Skills::SkillType* _OverrideSkillType_k__BackingField; // 0x168
		::MX::Logic::Skills::SkillType* _OverrideSkillDamageType_k__BackingField; // 0x16C
		::MX::Core::Math::BasisPoint* _DamageMultiplier_k__BackingField; // 0x170
		Il2CppObject* _DamageModifiers_k__BackingField; // 0x178
		::MX::Core::Math::BasisPoint* _PeriodMultiplier_k__BackingField; // 0x180
		::System::Boolean _UseFixedStabilityRate_k__BackingField; // 0x188
		::MX::Core::Math::BasisPoint* _FixedStabilityRate_k__BackingField; // 0x190
		Il2CppObject* _OnStabilityRateApplied_k__BackingField; // 0x198
		::System::Int64 _AddFixedAmount_k__BackingField; // 0x1A0
		::System::Boolean _IsAdditionalTick_k__BackingField; // 0x1A8
		::System::Int64 _AdditionalTickMultiplier_k__BackingField; // 0x1B0
		::System::Boolean _TriggerOtherEffect_k__BackingField; // 0x1B8
		::MX::Logic::Skills::LogicEffects::DamageSourceType* _SourceType_k__BackingField; // 0x1BC
		::System::Boolean _IsParentDamageOverTime_k__BackingField; // 0x1C0
		::System::Boolean _ApplyEnhanceWeakDamageRate_k__BackingField; // 0x1C1
		::System::Boolean _ApplyWeakDamagedRatio_k__BackingField; // 0x1C2
		::System::Boolean _ApplyEffectiveDamagedRatio_k__BackingField; // 0x1C3
		::System::Boolean _ApplyNormalDamagedRatio_k__BackingField; // 0x1C4
		::System::Boolean _ApplyResistDamagedRatio_k__BackingField; // 0x1C5

		::MX::Logic::Skills::DamageCriticalType* get_CriticalCheck()
		{
			return ((::MX::Logic::Skills::DamageCriticalType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_DAMAGEEFFECT_GET_CRITICALCHECK_OFFSET))(nullptr);
		}

		::System::Boolean get_CanEvade()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_DAMAGEEFFECT_GET_CANEVADE_OFFSET))(nullptr);
		}

		::System::Int64 get_Amount()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_DAMAGEEFFECT_GET_AMOUNT_OFFSET))(nullptr);
		}

		::FlatData::StatType* get_BonusSourceFirst()
		{
			return ((::FlatData::StatType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_DAMAGEEFFECT_GET_BONUSSOURCEFIRST_OFFSET))(nullptr);
		}

		::MX::Core::Math::BasisPoint* get_BonusRateFirst()
		{
			return ((::MX::Core::Math::BasisPoint*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_DAMAGEEFFECT_GET_BONUSRATEFIRST_OFFSET))(nullptr);
		}

		::MX::Logic::Skills::ExtraStatType* get_ExtraStatDamageMultiplierSource()
		{
			return ((::MX::Logic::Skills::ExtraStatType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_DAMAGEEFFECT_GET_EXTRASTATDAMAGEMULTIPLIERSOURCE_OFFSET))(nullptr);
		}

		::MX::Core::Math::BasisPoint* get_ExtraStatDamageMultiplierConstant()
		{
			return ((::MX::Core::Math::BasisPoint*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_DAMAGEEFFECT_GET_EXTRASTATDAMAGEMULTIPLIERCONSTANT_OFFSET))(nullptr);
		}

		::MX::Logic::Skills::ExtraStatType* get_ExtraStatDamageAddSource()
		{
			return ((::MX::Logic::Skills::ExtraStatType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_DAMAGEEFFECT_GET_EXTRASTATDAMAGEADDSOURCE_OFFSET))(nullptr);
		}

		::MX::Core::Math::BasisPoint* get_ExtraStatDamageAddRate()
		{
			return ((::MX::Core::Math::BasisPoint*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_DAMAGEEFFECT_GET_EXTRASTATDAMAGEADDRATE_OFFSET))(nullptr);
		}

		::System::String* get_BonusSourceBlackboardKeyString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_DAMAGEEFFECT_GET_BONUSSOURCEBLACKBOARDKEYSTRING_OFFSET))(nullptr);
		}

		::MX::Logic::Data::BlackboardKeyType* get_BonusSourceBlackboardKeyType()
		{
			return ((::MX::Logic::Data::BlackboardKeyType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_DAMAGEEFFECT_GET_BONUSSOURCEBLACKBOARDKEYTYPE_OFFSET))(nullptr);
		}

		::MX::Core::Math::BasisPoint* get_BonusRateBlackboard()
		{
			return ((::MX::Core::Math::BasisPoint*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_DAMAGEEFFECT_GET_BONUSRATEBLACKBOARD_OFFSET))(nullptr);
		}

		::System::Boolean get_IgnoreMaxDamageForBlackboardBonus()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_DAMAGEEFFECT_GET_IGNOREMAXDAMAGEFORBLACKBOARDBONUS_OFFSET))(nullptr);
		}

		::MX::Core::Math::BasisPoint* get_MaxDamageRate()
		{
			return ((::MX::Core::Math::BasisPoint*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_DAMAGEEFFECT_GET_MAXDAMAGERATE_OFFSET))(nullptr);
		}

		::MX::Core::Math::BasisPoint* get_LifeRecoverRate()
		{
			return ((::MX::Core::Math::BasisPoint*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_DAMAGEEFFECT_GET_LIFERECOVERRATE_OFFSET))(nullptr);
		}

		::System::Boolean get_IsAccumulatedDamage()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_DAMAGEEFFECT_GET_ISACCUMULATEDDAMAGE_OFFSET))(nullptr);
		}

		::System::Boolean get_OverridebulletType()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_DAMAGEEFFECT_GET_OVERRIDEBULLETTYPE_OFFSET))(nullptr);
		}

		::FlatData::BulletType* get_BulletTypeToOverride()
		{
			return ((::FlatData::BulletType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_DAMAGEEFFECT_GET_BULLETTYPETOOVERRIDE_OFFSET))(nullptr);
		}

		::System::Boolean get_ApplyEnhanceBulletType()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_DAMAGEEFFECT_GET_APPLYENHANCEBULLETTYPE_OFFSET))(nullptr);
		}

		::System::Boolean get_ApplyBulletType()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_DAMAGEEFFECT_GET_APPLYBULLETTYPE_OFFSET))(nullptr);
		}

		::System::Boolean get_ApplyDefense()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_DAMAGEEFFECT_GET_APPLYDEFENSE_OFFSET))(nullptr);
		}

		::MX::Logic::Skills::DamageRatioApplyType* get_ApplyDamageRatio()
		{
			return ((::MX::Logic::Skills::DamageRatioApplyType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_DAMAGEEFFECT_GET_APPLYDAMAGERATIO_OFFSET))(nullptr);
		}

		::MX::Logic::Skills::DamageRatioApplyType* get_ApplyDamageRatio2()
		{
			return ((::MX::Logic::Skills::DamageRatioApplyType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_DAMAGEEFFECT_GET_APPLYDAMAGERATIO2_OFFSET))(nullptr);
		}

		::MX::Core::Math::BasisPoint* get_DefensePenetrationRate()
		{
			return ((::MX::Core::Math::BasisPoint*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_DAMAGEEFFECT_GET_DEFENSEPENETRATIONRATE_OFFSET))(nullptr);
		}

		::System::Boolean get_IgnoreShield()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_DAMAGEEFFECT_GET_IGNORESHIELD_OFFSET))(nullptr);
		}

		::System::Boolean get_DoNotKillTarget()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_DAMAGEEFFECT_GET_DONOTKILLTARGET_OFFSET))(nullptr);
		}

		::System::Boolean get_ApplyStability()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_DAMAGEEFFECT_GET_APPLYSTABILITY_OFFSET))(nullptr);
		}

		::System::Boolean get_ApplyTerrainAdaptationDamage()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_DAMAGEEFFECT_GET_APPLYTERRAINADAPTATIONDAMAGE_OFFSET))(nullptr);
		}

		::System::Boolean get_ApplyExDamagedRatio()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_DAMAGEEFFECT_GET_APPLYEXDAMAGEDRATIO_OFFSET))(nullptr);
		}

		::System::Boolean get_ApplyEnhanceExDamageRate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_DAMAGEEFFECT_GET_APPLYENHANCEEXDAMAGERATE_OFFSET))(nullptr);
		}

		::System::Boolean get_ApplyEnhanceBasicsDamageRate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_DAMAGEEFFECT_GET_APPLYENHANCEBASICSDAMAGERATE_OFFSET))(nullptr);
		}

		::MX::Logic::Skills::SkillType* get_OverrideSkillType()
		{
			return ((::MX::Logic::Skills::SkillType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_DAMAGEEFFECT_GET_OVERRIDESKILLTYPE_OFFSET))(nullptr);
		}

		::MX::Logic::Skills::SkillType* get_OverrideSkillDamageType()
		{
			return ((::MX::Logic::Skills::SkillType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_DAMAGEEFFECT_GET_OVERRIDESKILLDAMAGETYPE_OFFSET))(nullptr);
		}

		::MX::Core::Math::BasisPoint* get_DamageMultiplier()
		{
			return ((::MX::Core::Math::BasisPoint*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_DAMAGEEFFECT_GET_DAMAGEMULTIPLIER_OFFSET))(nullptr);
		}

		::System::Void set_DamageMultiplier(::MX::Core::Math::BasisPoint* arg)
		{
			((::System::Void(*)(::MX::Core::Math::BasisPoint*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_DAMAGEEFFECT_SET_DAMAGEMULTIPLIER_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_DamageModifiers()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_DAMAGEEFFECT_GET_DAMAGEMODIFIERS_OFFSET))(nullptr);
		}

		::System::Void set_DamageModifiers(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_DAMAGEEFFECT_SET_DAMAGEMODIFIERS_OFFSET))(arg, nullptr);
		}

		::MX::Core::Math::BasisPoint* get_PeriodMultiplier()
		{
			return ((::MX::Core::Math::BasisPoint*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_DAMAGEEFFECT_GET_PERIODMULTIPLIER_OFFSET))(nullptr);
		}

		::System::Void set_PeriodMultiplier(::MX::Core::Math::BasisPoint* arg)
		{
			((::System::Void(*)(::MX::Core::Math::BasisPoint*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_DAMAGEEFFECT_SET_PERIODMULTIPLIER_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_UseFixedStabilityRate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_DAMAGEEFFECT_GET_USEFIXEDSTABILITYRATE_OFFSET))(nullptr);
		}

		::System::Void set_UseFixedStabilityRate(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_DAMAGEEFFECT_SET_USEFIXEDSTABILITYRATE_OFFSET))(arg, nullptr);
		}

		::MX::Core::Math::BasisPoint* get_FixedStabilityRate()
		{
			return ((::MX::Core::Math::BasisPoint*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_DAMAGEEFFECT_GET_FIXEDSTABILITYRATE_OFFSET))(nullptr);
		}

		::System::Void set_FixedStabilityRate(::MX::Core::Math::BasisPoint* arg)
		{
			((::System::Void(*)(::MX::Core::Math::BasisPoint*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_DAMAGEEFFECT_SET_FIXEDSTABILITYRATE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_OnStabilityRateApplied()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_DAMAGEEFFECT_GET_ONSTABILITYRATEAPPLIED_OFFSET))(nullptr);
		}

		::System::Void set_OnStabilityRateApplied(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_DAMAGEEFFECT_SET_ONSTABILITYRATEAPPLIED_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_AddFixedAmount()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_DAMAGEEFFECT_GET_ADDFIXEDAMOUNT_OFFSET))(nullptr);
		}

		::System::Void set_AddFixedAmount(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_DAMAGEEFFECT_SET_ADDFIXEDAMOUNT_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsAdditionalTick()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_DAMAGEEFFECT_GET_ISADDITIONALTICK_OFFSET))(nullptr);
		}

		::System::Void set_IsAdditionalTick(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_DAMAGEEFFECT_SET_ISADDITIONALTICK_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_AdditionalTickMultiplier()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_DAMAGEEFFECT_GET_ADDITIONALTICKMULTIPLIER_OFFSET))(nullptr);
		}

		::System::Void set_AdditionalTickMultiplier(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_DAMAGEEFFECT_SET_ADDITIONALTICKMULTIPLIER_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_TriggerOtherEffect()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_DAMAGEEFFECT_GET_TRIGGEROTHEREFFECT_OFFSET))(nullptr);
		}

		::System::Void set_TriggerOtherEffect(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_DAMAGEEFFECT_SET_TRIGGEROTHEREFFECT_OFFSET))(arg, nullptr);
		}

		::MX::Logic::Skills::LogicEffects::DamageSourceType* get_SourceType()
		{
			return ((::MX::Logic::Skills::LogicEffects::DamageSourceType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_DAMAGEEFFECT_GET_SOURCETYPE_OFFSET))(nullptr);
		}

		::System::Void set_SourceType(::MX::Logic::Skills::LogicEffects::DamageSourceType* arg)
		{
			((::System::Void(*)(::MX::Logic::Skills::LogicEffects::DamageSourceType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_DAMAGEEFFECT_SET_SOURCETYPE_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_HasExtraStatDamage()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_DAMAGEEFFECT_GET_HASEXTRASTATDAMAGE_OFFSET))(nullptr);
		}

		::System::Boolean get_IsDurationChangedByStat()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_DAMAGEEFFECT_GET_ISDURATIONCHANGEDBYSTAT_OFFSET))(nullptr);
		}

		::System::Boolean get_IsParentDamageOverTime()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_DAMAGEEFFECT_GET_ISPARENTDAMAGEOVERTIME_OFFSET))(nullptr);
		}

		::System::Void set_IsParentDamageOverTime(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_DAMAGEEFFECT_SET_ISPARENTDAMAGEOVERTIME_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_ApplyEnhanceWeakDamageRate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_DAMAGEEFFECT_GET_APPLYENHANCEWEAKDAMAGERATE_OFFSET))(nullptr);
		}

		::System::Void set_ApplyEnhanceWeakDamageRate(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_DAMAGEEFFECT_SET_APPLYENHANCEWEAKDAMAGERATE_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_ApplyWeakDamagedRatio()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_DAMAGEEFFECT_GET_APPLYWEAKDAMAGEDRATIO_OFFSET))(nullptr);
		}

		::System::Void set_ApplyWeakDamagedRatio(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_DAMAGEEFFECT_SET_APPLYWEAKDAMAGEDRATIO_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_ApplyEffectiveDamagedRatio()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_DAMAGEEFFECT_GET_APPLYEFFECTIVEDAMAGEDRATIO_OFFSET))(nullptr);
		}

		::System::Void set_ApplyEffectiveDamagedRatio(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_DAMAGEEFFECT_SET_APPLYEFFECTIVEDAMAGEDRATIO_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_ApplyNormalDamagedRatio()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_DAMAGEEFFECT_GET_APPLYNORMALDAMAGEDRATIO_OFFSET))(nullptr);
		}

		::System::Void set_ApplyNormalDamagedRatio(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_DAMAGEEFFECT_SET_APPLYNORMALDAMAGEDRATIO_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_ApplyResistDamagedRatio()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_DAMAGEEFFECT_GET_APPLYRESISTDAMAGEDRATIO_OFFSET))(nullptr);
		}

		::System::Void set_ApplyResistDamagedRatio(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_DAMAGEEFFECT_SET_APPLYRESISTDAMAGEDRATIO_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::MX::Logic::Data::DamageEffectValue* arg, ::MX::Logic::Skills::SkillSpecification* arg2, ::MX::Logic::Skills::LogicEffects::LogicEffectHitSpecification* arg3)
		{
			((::System::Void(*)(::MX::Logic::Data::DamageEffectValue*, ::MX::Logic::Skills::SkillSpecification*, ::MX::Logic::Skills::LogicEffects::LogicEffectHitSpecification*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_DAMAGEEFFECT_.CTOR_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void .ctor(::MX::Logic::Data::ExtraStatDamageEffectValue* arg, ::MX::Logic::Skills::SkillSpecification* arg2, ::MX::Logic::Skills::LogicEffects::LogicEffectHitSpecification* arg3)
		{
			((::System::Void(*)(::MX::Logic::Data::ExtraStatDamageEffectValue*, ::MX::Logic::Skills::SkillSpecification*, ::MX::Logic::Skills::LogicEffects::LogicEffectHitSpecification*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_DAMAGEEFFECT_.CTOR_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void SetDamageMultiplier(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_DAMAGEEFFECT_SETDAMAGEMULTIPLIER_OFFSET))(arg, nullptr);
		}

		::System::Void AddDamageModifier(::MX::Logic::Data::DamageModifier* arg)
		{
			((::System::Void(*)(::MX::Logic::Data::DamageModifier*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_DAMAGEEFFECT_ADDDAMAGEMODIFIER_OFFSET))(arg, nullptr);
		}

		::System::Void AddAddFixedAmount(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_DAMAGEEFFECT_ADDADDFIXEDAMOUNT_OFFSET))(arg, nullptr);
		}

		::System::Void SetPeriodMultiplier(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_DAMAGEEFFECT_SETPERIODMULTIPLIER_OFFSET))(arg, nullptr);
		}

		::System::Void SetFixedStabilitySetting(::MX::Core::Math::BasisPoint* arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(::MX::Core::Math::BasisPoint*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_DAMAGEEFFECT_SETFIXEDSTABILITYSETTING_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void SetAdditionalTickMultiplier(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_DAMAGEEFFECT_SETADDITIONALTICKMULTIPLIER_OFFSET))(arg, nullptr);
		}

	};
}

