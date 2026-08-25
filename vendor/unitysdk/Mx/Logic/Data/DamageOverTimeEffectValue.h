#pragma once
#include "../../../unitysdk.h"

namespace FlatData { class StatType; }
namespace MX::Core::Math { class BasisPoint; }
namespace MX::Logic::Skills { class DamageRatioApplyType; }
namespace MX::Logic::Data { class DamageOverTimeRemoveCondition; }
namespace MX::Logic::Skills { class ExtraStatType; }
namespace MX::Logic::Data { class BlackboardKeyType; }
namespace MX::Logic::Skills { class SkillType; }
namespace FlatData { class BulletType; }
namespace MX::GameData::DAO::Battle { class DamageOverTimeEffectDAO; }
namespace MX::GameData::DAO::Battle { class ChangeDamageOverTimeEffectDAO; }

#define MX_LOGIC_DATA_DAMAGEOVERTIMEEFFECTVALUE_GET_AMOUNT_OFFSET UNITYSDK_OFFSET(0x1238760)
#define MX_LOGIC_DATA_DAMAGEOVERTIMEEFFECTVALUE_GET_BONUSSOURCEFIRST_OFFSET UNITYSDK_OFFSET(0x1238770)
#define MX_LOGIC_DATA_DAMAGEOVERTIMEEFFECTVALUE_GET_BONUSRATEFIRST_OFFSET UNITYSDK_OFFSET(0x1238780)
#define MX_LOGIC_DATA_DAMAGEOVERTIMEEFFECTVALUE_GET_DURATIONFRAME_OFFSET UNITYSDK_OFFSET(0x1238790)
#define MX_LOGIC_DATA_DAMAGEOVERTIMEEFFECTVALUE_GET_PERIOD_OFFSET UNITYSDK_OFFSET(0x12387A0)
#define MX_LOGIC_DATA_DAMAGEOVERTIMEEFFECTVALUE_GET_ISDISPELLABLE_OFFSET UNITYSDK_OFFSET(0x12387B0)
#define MX_LOGIC_DATA_DAMAGEOVERTIMEEFFECTVALUE_GET_APPLYBULLETTYPE_OFFSET UNITYSDK_OFFSET(0x12387C0)
#define MX_LOGIC_DATA_DAMAGEOVERTIMEEFFECTVALUE_GET_APPLYDEFENSE_OFFSET UNITYSDK_OFFSET(0x12387D0)
#define MX_LOGIC_DATA_DAMAGEOVERTIMEEFFECTVALUE_GET_APPLYDAMAGERATIO_OFFSET UNITYSDK_OFFSET(0x12387E0)
#define MX_LOGIC_DATA_DAMAGEOVERTIMEEFFECTVALUE_GET_APPLYDAMAGERATIO2_OFFSET UNITYSDK_OFFSET(0x12387F0)
#define MX_LOGIC_DATA_DAMAGEOVERTIMEEFFECTVALUE_GET_REMOVECONDITION_OFFSET UNITYSDK_OFFSET(0x1238800)
#define MX_LOGIC_DATA_DAMAGEOVERTIMEEFFECTVALUE_GET_REMOVECONDITIONARGUMENT_OFFSET UNITYSDK_OFFSET(0x1238810)
#define MX_LOGIC_DATA_DAMAGEOVERTIMEEFFECTVALUE_GET_ADDSOURCE_OFFSET UNITYSDK_OFFSET(0x1238820)
#define MX_LOGIC_DATA_DAMAGEOVERTIMEEFFECTVALUE_GET_ADDRATE_OFFSET UNITYSDK_OFFSET(0x1238830)
#define MX_LOGIC_DATA_DAMAGEOVERTIMEEFFECTVALUE_GET_MAXDAMAGERATE_OFFSET UNITYSDK_OFFSET(0x1238840)
#define MX_LOGIC_DATA_DAMAGEOVERTIMEEFFECTVALUE_GET_BONUSSOURCEBLACKBOARDKEYSTRING_OFFSET UNITYSDK_OFFSET(0x1238850)
#define MX_LOGIC_DATA_DAMAGEOVERTIMEEFFECTVALUE_GET_BONUSSOURCEBLACKBOARDKEYTYPE_OFFSET UNITYSDK_OFFSET(0x1238860)
#define MX_LOGIC_DATA_DAMAGEOVERTIMEEFFECTVALUE_GET_BONUSRATEBLACKBOARD_OFFSET UNITYSDK_OFFSET(0x1238870)
#define MX_LOGIC_DATA_DAMAGEOVERTIMEEFFECTVALUE_GET_IGNOREMAXDAMAGEFORBLACKBOARDBONUS_OFFSET UNITYSDK_OFFSET(0x1238880)
#define MX_LOGIC_DATA_DAMAGEOVERTIMEEFFECTVALUE_GET_DEFENSEPENETRATIONRATE_OFFSET UNITYSDK_OFFSET(0x1238890)
#define MX_LOGIC_DATA_DAMAGEOVERTIMEEFFECTVALUE_GET_CHANGERATEBYCOST_OFFSET UNITYSDK_OFFSET(0x12388A0)
#define MX_LOGIC_DATA_DAMAGEOVERTIMEEFFECTVALUE_GET_CHANGERATEBYCOSTLIST_OFFSET UNITYSDK_OFFSET(0x12388B0)
#define MX_LOGIC_DATA_DAMAGEOVERTIMEEFFECTVALUE_GET_IGNORESHIELD_OFFSET UNITYSDK_OFFSET(0x12388C0)
#define MX_LOGIC_DATA_DAMAGEOVERTIMEEFFECTVALUE_GET_DONOTKILLTARGET_OFFSET UNITYSDK_OFFSET(0x12388D0)
#define MX_LOGIC_DATA_DAMAGEOVERTIMEEFFECTVALUE_GET_APPLYSTABILITY_OFFSET UNITYSDK_OFFSET(0x12388E0)
#define MX_LOGIC_DATA_DAMAGEOVERTIMEEFFECTVALUE_GET_APPLYTERRAINADAPTATIONDAMAGE_OFFSET UNITYSDK_OFFSET(0x12388F0)
#define MX_LOGIC_DATA_DAMAGEOVERTIMEEFFECTVALUE_GET_APPLYEXDAMAGEDRATIO_OFFSET UNITYSDK_OFFSET(0x1238900)
#define MX_LOGIC_DATA_DAMAGEOVERTIMEEFFECTVALUE_GET_APPLYENHANCEEXDAMAGERATE_OFFSET UNITYSDK_OFFSET(0x1238910)
#define MX_LOGIC_DATA_DAMAGEOVERTIMEEFFECTVALUE_GET_APPLYENHANCEBASICSDAMAGERATE_OFFSET UNITYSDK_OFFSET(0x1238920)
#define MX_LOGIC_DATA_DAMAGEOVERTIMEEFFECTVALUE_GET_OVERRIDESKILLTYPELIST_OFFSET UNITYSDK_OFFSET(0x1238930)
#define MX_LOGIC_DATA_DAMAGEOVERTIMEEFFECTVALUE_GET_OVERRIDESKILLTYPE_OFFSET UNITYSDK_OFFSET(0x1238940)
#define MX_LOGIC_DATA_DAMAGEOVERTIMEEFFECTVALUE_GET_OVERRIDESKILLDAMAGETYPE_OFFSET UNITYSDK_OFFSET(0x1238950)
#define MX_LOGIC_DATA_DAMAGEOVERTIMEEFFECTVALUE_GET_APPLYENHANCEBULLETTYPE_OFFSET UNITYSDK_OFFSET(0x1238960)
#define MX_LOGIC_DATA_DAMAGEOVERTIMEEFFECTVALUE_GET_OVERRIDEBULLETTYPE_OFFSET UNITYSDK_OFFSET(0x1238970)
#define MX_LOGIC_DATA_DAMAGEOVERTIMEEFFECTVALUE_GET_BULLETTYPETOOVERRIDE_OFFSET UNITYSDK_OFFSET(0x1238980)
#define MX_LOGIC_DATA_DAMAGEOVERTIMEEFFECTVALUE_GET_APPLYENHANCEWEAKDAMAGERATE_OFFSET UNITYSDK_OFFSET(0x1238990)
#define MX_LOGIC_DATA_DAMAGEOVERTIMEEFFECTVALUE_GET_APPLYWEAKDAMAGEDRATIO_OFFSET UNITYSDK_OFFSET(0x12389A0)
#define MX_LOGIC_DATA_DAMAGEOVERTIMEEFFECTVALUE_SET_APPLYWEAKDAMAGEDRATIO_OFFSET UNITYSDK_OFFSET(0x12389B0)
#define MX_LOGIC_DATA_DAMAGEOVERTIMEEFFECTVALUE_GET_APPLYEFFECTIVEDAMAGEDRATIO_OFFSET UNITYSDK_OFFSET(0x12389C0)
#define MX_LOGIC_DATA_DAMAGEOVERTIMEEFFECTVALUE_SET_APPLYEFFECTIVEDAMAGEDRATIO_OFFSET UNITYSDK_OFFSET(0x12389D0)
#define MX_LOGIC_DATA_DAMAGEOVERTIMEEFFECTVALUE_GET_APPLYNORMALDAMAGEDRATIO_OFFSET UNITYSDK_OFFSET(0x12389E0)
#define MX_LOGIC_DATA_DAMAGEOVERTIMEEFFECTVALUE_SET_APPLYNORMALDAMAGEDRATIO_OFFSET UNITYSDK_OFFSET(0x12389F0)
#define MX_LOGIC_DATA_DAMAGEOVERTIMEEFFECTVALUE_GET_APPLYRESISTDAMAGEDRATIO_OFFSET UNITYSDK_OFFSET(0x1238A00)
#define MX_LOGIC_DATA_DAMAGEOVERTIMEEFFECTVALUE_SET_APPLYRESISTDAMAGEDRATIO_OFFSET UNITYSDK_OFFSET(0x1238A10)
#define MX_LOGIC_DATA_DAMAGEOVERTIMEEFFECTVALUE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1238A20)
#define MX_LOGIC_DATA_DAMAGEOVERTIMEEFFECTVALUE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1238D40)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int DamageOverTimeEffectValue_TypeDefinitionIndex = 13877;

	class DamageOverTimeEffectValue : public Il2CppObject
	{
	public:
		::System::Int64 _Amount_k__BackingField; // 0x48
		::FlatData::StatType* _BonusSourceFirst_k__BackingField; // 0x50
		::MX::Core::Math::BasisPoint* _BonusRateFirst_k__BackingField; // 0x58
		::System::Int32 _DurationFrame_k__BackingField; // 0x60
		::System::Int32 _Period_k__BackingField; // 0x64
		::System::Boolean _IsDispellable_k__BackingField; // 0x68
		::System::Boolean _ApplyBulletType_k__BackingField; // 0x69
		::System::Boolean _ApplyDefense_k__BackingField; // 0x6A
		::MX::Logic::Skills::DamageRatioApplyType* _ApplyDamageRatio_k__BackingField; // 0x6C
		::MX::Logic::Skills::DamageRatioApplyType* _ApplyDamageRatio2_k__BackingField; // 0x70
		::MX::Logic::Data::DamageOverTimeRemoveCondition* _RemoveCondition_k__BackingField; // 0x74
		::System::Int32 _RemoveConditionArgument_k__BackingField; // 0x78
		::MX::Logic::Skills::ExtraStatType* _AddSource_k__BackingField; // 0x7C
		::System::Int64 _AddRate_k__BackingField; // 0x80
		::System::Int64 _MaxDamageRate_k__BackingField; // 0x88
		::System::String* _BonusSourceBlackboardKeyString_k__BackingField; // 0x90
		::MX::Logic::Data::BlackboardKeyType* _BonusSourceBlackboardKeyType_k__BackingField; // 0x98
		::System::Int64 _BonusRateBlackboard_k__BackingField; // 0xA0
		::System::Boolean _IgnoreMaxDamageForBlackboardBonus_k__BackingField; // 0xA8
		::System::Int64 _DefensePenetrationRate_k__BackingField; // 0xB0
		::System::String* _ChangeRateByCost_k__BackingField; // 0xB8
		::Il2CppArray<::System::Object*>* _ChangeRateByCostList_k__BackingField; // 0xC0
		::System::Boolean _IgnoreShield_k__BackingField; // 0xC8
		::System::Boolean _DoNotKillTarget_k__BackingField; // 0xC9
		::System::Boolean _ApplyStability_k__BackingField; // 0xCA
		::System::Boolean _ApplyTerrainAdaptationDamage_k__BackingField; // 0xCB
		::System::Boolean _ApplyExDamagedRatio_k__BackingField; // 0xCC
		::System::Boolean _ApplyEnhanceExDamageRate_k__BackingField; // 0xCD
		::System::Boolean _ApplyEnhanceBasicsDamageRate_k__BackingField; // 0xCE
		Il2CppObject* _OverrideSkillTypeList_k__BackingField; // 0xD0
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

		::System::Int64 get_Amount()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_DAMAGEOVERTIMEEFFECTVALUE_GET_AMOUNT_OFFSET))(nullptr);
		}

		::FlatData::StatType* get_BonusSourceFirst()
		{
			return ((::FlatData::StatType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_DAMAGEOVERTIMEEFFECTVALUE_GET_BONUSSOURCEFIRST_OFFSET))(nullptr);
		}

		::MX::Core::Math::BasisPoint* get_BonusRateFirst()
		{
			return ((::MX::Core::Math::BasisPoint*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_DAMAGEOVERTIMEEFFECTVALUE_GET_BONUSRATEFIRST_OFFSET))(nullptr);
		}

		::System::Int32 get_DurationFrame()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_DAMAGEOVERTIMEEFFECTVALUE_GET_DURATIONFRAME_OFFSET))(nullptr);
		}

		::System::Int32 get_Period()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_DAMAGEOVERTIMEEFFECTVALUE_GET_PERIOD_OFFSET))(nullptr);
		}

		::System::Boolean get_IsDispellable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_DAMAGEOVERTIMEEFFECTVALUE_GET_ISDISPELLABLE_OFFSET))(nullptr);
		}

		::System::Boolean get_ApplyBulletType()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_DAMAGEOVERTIMEEFFECTVALUE_GET_APPLYBULLETTYPE_OFFSET))(nullptr);
		}

		::System::Boolean get_ApplyDefense()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_DAMAGEOVERTIMEEFFECTVALUE_GET_APPLYDEFENSE_OFFSET))(nullptr);
		}

		::MX::Logic::Skills::DamageRatioApplyType* get_ApplyDamageRatio()
		{
			return ((::MX::Logic::Skills::DamageRatioApplyType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_DAMAGEOVERTIMEEFFECTVALUE_GET_APPLYDAMAGERATIO_OFFSET))(nullptr);
		}

		::MX::Logic::Skills::DamageRatioApplyType* get_ApplyDamageRatio2()
		{
			return ((::MX::Logic::Skills::DamageRatioApplyType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_DAMAGEOVERTIMEEFFECTVALUE_GET_APPLYDAMAGERATIO2_OFFSET))(nullptr);
		}

		::MX::Logic::Data::DamageOverTimeRemoveCondition* get_RemoveCondition()
		{
			return ((::MX::Logic::Data::DamageOverTimeRemoveCondition*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_DAMAGEOVERTIMEEFFECTVALUE_GET_REMOVECONDITION_OFFSET))(nullptr);
		}

		::System::Int32 get_RemoveConditionArgument()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_DAMAGEOVERTIMEEFFECTVALUE_GET_REMOVECONDITIONARGUMENT_OFFSET))(nullptr);
		}

		::MX::Logic::Skills::ExtraStatType* get_AddSource()
		{
			return ((::MX::Logic::Skills::ExtraStatType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_DAMAGEOVERTIMEEFFECTVALUE_GET_ADDSOURCE_OFFSET))(nullptr);
		}

		::System::Int64 get_AddRate()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_DAMAGEOVERTIMEEFFECTVALUE_GET_ADDRATE_OFFSET))(nullptr);
		}

		::System::Int64 get_MaxDamageRate()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_DAMAGEOVERTIMEEFFECTVALUE_GET_MAXDAMAGERATE_OFFSET))(nullptr);
		}

		::System::String* get_BonusSourceBlackboardKeyString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_DAMAGEOVERTIMEEFFECTVALUE_GET_BONUSSOURCEBLACKBOARDKEYSTRING_OFFSET))(nullptr);
		}

		::MX::Logic::Data::BlackboardKeyType* get_BonusSourceBlackboardKeyType()
		{
			return ((::MX::Logic::Data::BlackboardKeyType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_DAMAGEOVERTIMEEFFECTVALUE_GET_BONUSSOURCEBLACKBOARDKEYTYPE_OFFSET))(nullptr);
		}

		::System::Int64 get_BonusRateBlackboard()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_DAMAGEOVERTIMEEFFECTVALUE_GET_BONUSRATEBLACKBOARD_OFFSET))(nullptr);
		}

		::System::Boolean get_IgnoreMaxDamageForBlackboardBonus()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_DAMAGEOVERTIMEEFFECTVALUE_GET_IGNOREMAXDAMAGEFORBLACKBOARDBONUS_OFFSET))(nullptr);
		}

		::System::Int64 get_DefensePenetrationRate()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_DAMAGEOVERTIMEEFFECTVALUE_GET_DEFENSEPENETRATIONRATE_OFFSET))(nullptr);
		}

		::System::String* get_ChangeRateByCost()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_DAMAGEOVERTIMEEFFECTVALUE_GET_CHANGERATEBYCOST_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* get_ChangeRateByCostList()
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_DAMAGEOVERTIMEEFFECTVALUE_GET_CHANGERATEBYCOSTLIST_OFFSET))(nullptr);
		}

		::System::Boolean get_IgnoreShield()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_DAMAGEOVERTIMEEFFECTVALUE_GET_IGNORESHIELD_OFFSET))(nullptr);
		}

		::System::Boolean get_DoNotKillTarget()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_DAMAGEOVERTIMEEFFECTVALUE_GET_DONOTKILLTARGET_OFFSET))(nullptr);
		}

		::System::Boolean get_ApplyStability()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_DAMAGEOVERTIMEEFFECTVALUE_GET_APPLYSTABILITY_OFFSET))(nullptr);
		}

		::System::Boolean get_ApplyTerrainAdaptationDamage()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_DAMAGEOVERTIMEEFFECTVALUE_GET_APPLYTERRAINADAPTATIONDAMAGE_OFFSET))(nullptr);
		}

		::System::Boolean get_ApplyExDamagedRatio()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_DAMAGEOVERTIMEEFFECTVALUE_GET_APPLYEXDAMAGEDRATIO_OFFSET))(nullptr);
		}

		::System::Boolean get_ApplyEnhanceExDamageRate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_DAMAGEOVERTIMEEFFECTVALUE_GET_APPLYENHANCEEXDAMAGERATE_OFFSET))(nullptr);
		}

		::System::Boolean get_ApplyEnhanceBasicsDamageRate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_DAMAGEOVERTIMEEFFECTVALUE_GET_APPLYENHANCEBASICSDAMAGERATE_OFFSET))(nullptr);
		}

		Il2CppObject* get_OverrideSkillTypeList()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_DAMAGEOVERTIMEEFFECTVALUE_GET_OVERRIDESKILLTYPELIST_OFFSET))(nullptr);
		}

		::MX::Logic::Skills::SkillType* get_OverrideSkillType()
		{
			return ((::MX::Logic::Skills::SkillType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_DAMAGEOVERTIMEEFFECTVALUE_GET_OVERRIDESKILLTYPE_OFFSET))(nullptr);
		}

		::MX::Logic::Skills::SkillType* get_OverrideSkillDamageType()
		{
			return ((::MX::Logic::Skills::SkillType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_DAMAGEOVERTIMEEFFECTVALUE_GET_OVERRIDESKILLDAMAGETYPE_OFFSET))(nullptr);
		}

		::System::Boolean get_ApplyEnhanceBulletType()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_DAMAGEOVERTIMEEFFECTVALUE_GET_APPLYENHANCEBULLETTYPE_OFFSET))(nullptr);
		}

		::System::Boolean get_OverrideBulletType()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_DAMAGEOVERTIMEEFFECTVALUE_GET_OVERRIDEBULLETTYPE_OFFSET))(nullptr);
		}

		::FlatData::BulletType* get_BulletTypeToOverride()
		{
			return ((::FlatData::BulletType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_DAMAGEOVERTIMEEFFECTVALUE_GET_BULLETTYPETOOVERRIDE_OFFSET))(nullptr);
		}

		::System::Boolean get_ApplyEnhanceWeakDamageRate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_DAMAGEOVERTIMEEFFECTVALUE_GET_APPLYENHANCEWEAKDAMAGERATE_OFFSET))(nullptr);
		}

		::System::Boolean get_ApplyWeakDamagedRatio()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_DAMAGEOVERTIMEEFFECTVALUE_GET_APPLYWEAKDAMAGEDRATIO_OFFSET))(nullptr);
		}

		::System::Void set_ApplyWeakDamagedRatio(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_DAMAGEOVERTIMEEFFECTVALUE_SET_APPLYWEAKDAMAGEDRATIO_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_ApplyEffectiveDamagedRatio()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_DAMAGEOVERTIMEEFFECTVALUE_GET_APPLYEFFECTIVEDAMAGEDRATIO_OFFSET))(nullptr);
		}

		::System::Void set_ApplyEffectiveDamagedRatio(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_DAMAGEOVERTIMEEFFECTVALUE_SET_APPLYEFFECTIVEDAMAGEDRATIO_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_ApplyNormalDamagedRatio()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_DAMAGEOVERTIMEEFFECTVALUE_GET_APPLYNORMALDAMAGEDRATIO_OFFSET))(nullptr);
		}

		::System::Void set_ApplyNormalDamagedRatio(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_DAMAGEOVERTIMEEFFECTVALUE_SET_APPLYNORMALDAMAGEDRATIO_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_ApplyResistDamagedRatio()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_DAMAGEOVERTIMEEFFECTVALUE_GET_APPLYRESISTDAMAGEDRATIO_OFFSET))(nullptr);
		}

		::System::Void set_ApplyResistDamagedRatio(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_DAMAGEOVERTIMEEFFECTVALUE_SET_APPLYRESISTDAMAGEDRATIO_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::MX::GameData::DAO::Battle::DamageOverTimeEffectDAO* arg)
		{
			((::System::Void(*)(::MX::GameData::DAO::Battle::DamageOverTimeEffectDAO*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_DAMAGEOVERTIMEEFFECTVALUE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::MX::GameData::DAO::Battle::ChangeDamageOverTimeEffectDAO* arg)
		{
			((::System::Void(*)(::MX::GameData::DAO::Battle::ChangeDamageOverTimeEffectDAO*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_DAMAGEOVERTIMEEFFECTVALUE_.CTOR_OFFSET))(arg, nullptr);
		}

	};
}

