#pragma once
#include "../../../unitysdk.h"

namespace FlatData { class StatType; }
namespace MX::Core::Math { class BasisPoint; }
namespace MX::Logic::Data { class DamageByHitTriggerType; }
namespace MX::Logic::Skills { class DamageRatioApplyType; }
namespace MX::Logic::Data { class DamageByHitRemoveCondition; }
namespace MX::Logic::Skills { class ExtraStatType; }
namespace MX::Logic::Data { class BlackboardKeyType; }
namespace MX::Logic::Skills { class SkillType; }
namespace FlatData { class BulletType; }
namespace MX::GameData::DAO::Battle { class DamageByHitEffectDAO; }

#define MX_LOGIC_DATA_DAMAGEBYHITEFFECTVALUE_GET_APPLYDAMAGERATIO2_OFFSET UNITYSDK_OFFSET(0x12374A0)
#define MX_LOGIC_DATA_DAMAGEBYHITEFFECTVALUE_GET_APPLYTERRAINADAPTATIONDAMAGE_OFFSET UNITYSDK_OFFSET(0x12374B0)
#define MX_LOGIC_DATA_DAMAGEBYHITEFFECTVALUE_GET_APPLYEFFECTIVEDAMAGEDRATIO_OFFSET UNITYSDK_OFFSET(0x12374C0)
#define MX_LOGIC_DATA_DAMAGEBYHITEFFECTVALUE_GET_OVERRIDEBULLETTYPE_OFFSET UNITYSDK_OFFSET(0x12374D0)
#define MX_LOGIC_DATA_DAMAGEBYHITEFFECTVALUE_GET_MAXDAMAGERATE_OFFSET UNITYSDK_OFFSET(0x12374E0)
#define MX_LOGIC_DATA_DAMAGEBYHITEFFECTVALUE_GET_DURATIONFRAME_OFFSET UNITYSDK_OFFSET(0x12374F0)
#define MX_LOGIC_DATA_DAMAGEBYHITEFFECTVALUE_SET_APPLYNORMALDAMAGEDRATIO_OFFSET UNITYSDK_OFFSET(0x1237500)
#define MX_LOGIC_DATA_DAMAGEBYHITEFFECTVALUE_GET_APPLYSTABILITY_OFFSET UNITYSDK_OFFSET(0x1237510)
#define MX_LOGIC_DATA_DAMAGEBYHITEFFECTVALUE_GET_BONUSRATEFIRST_OFFSET UNITYSDK_OFFSET(0x1237520)
#define MX_LOGIC_DATA_DAMAGEBYHITEFFECTVALUE_GET_IGNORESHIELD_OFFSET UNITYSDK_OFFSET(0x1237530)
#define MX_LOGIC_DATA_DAMAGEBYHITEFFECTVALUE_GET_APPLYBULLETTYPE_OFFSET UNITYSDK_OFFSET(0x1237540)
#define MX_LOGIC_DATA_DAMAGEBYHITEFFECTVALUE_GET_BONUSSOURCEBLACKBOARDKEYTYPE_OFFSET UNITYSDK_OFFSET(0x1237550)
#define MX_LOGIC_DATA_DAMAGEBYHITEFFECTVALUE_GET_IGNOREMAXDAMAGEFORBLACKBOARDBONUS_OFFSET UNITYSDK_OFFSET(0x1237560)
#define MX_LOGIC_DATA_DAMAGEBYHITEFFECTVALUE_GET_APPLYENHANCEEXDAMAGERATE_OFFSET UNITYSDK_OFFSET(0x1237570)
#define MX_LOGIC_DATA_DAMAGEBYHITEFFECTVALUE_GET_ADDSOURCE_OFFSET UNITYSDK_OFFSET(0x1237580)
#define MX_LOGIC_DATA_DAMAGEBYHITEFFECTVALUE_GET_TRIGGERTYPE_OFFSET UNITYSDK_OFFSET(0x1237590)
#define MX_LOGIC_DATA_DAMAGEBYHITEFFECTVALUE_GET_REMOVECONDITION_OFFSET UNITYSDK_OFFSET(0x12375A0)
#define MX_LOGIC_DATA_DAMAGEBYHITEFFECTVALUE_GET_APPLYENHANCEBASICSDAMAGERATE_OFFSET UNITYSDK_OFFSET(0x12375B0)
#define MX_LOGIC_DATA_DAMAGEBYHITEFFECTVALUE_SET_APPLYRESISTDAMAGEDRATIO_OFFSET UNITYSDK_OFFSET(0x12375C0)
#define MX_LOGIC_DATA_DAMAGEBYHITEFFECTVALUE_GET_DONOTKILLTARGET_OFFSET UNITYSDK_OFFSET(0x12375D0)
#define MX_LOGIC_DATA_DAMAGEBYHITEFFECTVALUE_GET_APPLYENHANCEBULLETTYPE_OFFSET UNITYSDK_OFFSET(0x12375E0)
#define MX_LOGIC_DATA_DAMAGEBYHITEFFECTVALUE_GET_APPLYWEAKDAMAGEDRATIO_OFFSET UNITYSDK_OFFSET(0x12375F0)
#define MX_LOGIC_DATA_DAMAGEBYHITEFFECTVALUE_GET_ISDISPELLABLE_OFFSET UNITYSDK_OFFSET(0x1237600)
#define MX_LOGIC_DATA_DAMAGEBYHITEFFECTVALUE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1237610)
#define MX_LOGIC_DATA_DAMAGEBYHITEFFECTVALUE_GET_OVERRIDESKILLTYPE_OFFSET UNITYSDK_OFFSET(0x1237A50)
#define MX_LOGIC_DATA_DAMAGEBYHITEFFECTVALUE_GET_BULLETTYPETOOVERRIDE_OFFSET UNITYSDK_OFFSET(0x1237A60)
#define MX_LOGIC_DATA_DAMAGEBYHITEFFECTVALUE_GET_BONUSSOURCEFIRST_OFFSET UNITYSDK_OFFSET(0x1237A70)
#define MX_LOGIC_DATA_DAMAGEBYHITEFFECTVALUE_GET_BONUSRATEBLACKBOARD_OFFSET UNITYSDK_OFFSET(0x1237A80)
#define MX_LOGIC_DATA_DAMAGEBYHITEFFECTVALUE_SET_APPLYWEAKDAMAGEDRATIO_OFFSET UNITYSDK_OFFSET(0x1237A90)
#define MX_LOGIC_DATA_DAMAGEBYHITEFFECTVALUE_GET_ADDTRIGGERVALUERATE_OFFSET UNITYSDK_OFFSET(0x1237AA0)
#define MX_LOGIC_DATA_DAMAGEBYHITEFFECTVALUE_GET_APPLYDEFENSE_OFFSET UNITYSDK_OFFSET(0x1237AB0)
#define MX_LOGIC_DATA_DAMAGEBYHITEFFECTVALUE_GET_DEFENSEPENETRATIONRATE_OFFSET UNITYSDK_OFFSET(0x1237AC0)
#define MX_LOGIC_DATA_DAMAGEBYHITEFFECTVALUE_GET_ADDRATE_OFFSET UNITYSDK_OFFSET(0x1237AD0)
#define MX_LOGIC_DATA_DAMAGEBYHITEFFECTVALUE_GET_APPLYEXDAMAGEDRATIO_OFFSET UNITYSDK_OFFSET(0x1237AE0)
#define MX_LOGIC_DATA_DAMAGEBYHITEFFECTVALUE_GET_APPLYNORMALDAMAGEDRATIO_OFFSET UNITYSDK_OFFSET(0x1237AF0)
#define MX_LOGIC_DATA_DAMAGEBYHITEFFECTVALUE_GET_APPLYENHANCEWEAKDAMAGERATE_OFFSET UNITYSDK_OFFSET(0x1237B00)
#define MX_LOGIC_DATA_DAMAGEBYHITEFFECTVALUE_GET_OVERRIDESKILLDAMAGETYPE_OFFSET UNITYSDK_OFFSET(0x1237B10)
#define MX_LOGIC_DATA_DAMAGEBYHITEFFECTVALUE_GET_APPLYRESISTDAMAGEDRATIO_OFFSET UNITYSDK_OFFSET(0x1237B20)
#define MX_LOGIC_DATA_DAMAGEBYHITEFFECTVALUE_GET_AMOUNT_OFFSET UNITYSDK_OFFSET(0x1237B30)
#define MX_LOGIC_DATA_DAMAGEBYHITEFFECTVALUE_GET_TRIGGERARGUMENT_OFFSET UNITYSDK_OFFSET(0x1237B40)
#define MX_LOGIC_DATA_DAMAGEBYHITEFFECTVALUE_GET_REMOVECONDITIONARGUMENT_OFFSET UNITYSDK_OFFSET(0x1237B50)
#define MX_LOGIC_DATA_DAMAGEBYHITEFFECTVALUE_GET_APPLYDAMAGERATIO_OFFSET UNITYSDK_OFFSET(0x1237B60)
#define MX_LOGIC_DATA_DAMAGEBYHITEFFECTVALUE_SET_APPLYEFFECTIVEDAMAGEDRATIO_OFFSET UNITYSDK_OFFSET(0x1237B70)
#define MX_LOGIC_DATA_DAMAGEBYHITEFFECTVALUE_GET_BONUSSOURCEBLACKBOARDKEYSTRING_OFFSET UNITYSDK_OFFSET(0x1237B80)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int DamageByHitEffectValue_TypeDefinitionIndex = 13873;

	class DamageByHitEffectValue : public Il2CppObject
	{
	public:
		::System::Int64 _Amount_k__BackingField; // 0x48
		::FlatData::StatType* _BonusSourceFirst_k__BackingField; // 0x50
		::MX::Core::Math::BasisPoint* _BonusRateFirst_k__BackingField; // 0x58
		::System::Int32 _DurationFrame_k__BackingField; // 0x60
		::MX::Logic::Data::DamageByHitTriggerType* _TriggerType_k__BackingField; // 0x64
		::System::Boolean _IsDispellable_k__BackingField; // 0x68
		::System::Boolean _ApplyBulletType_k__BackingField; // 0x69
		::System::Boolean _ApplyDefense_k__BackingField; // 0x6A
		::MX::Logic::Skills::DamageRatioApplyType* _ApplyDamageRatio_k__BackingField; // 0x6C
		::MX::Logic::Skills::DamageRatioApplyType* _ApplyDamageRatio2_k__BackingField; // 0x70
		::MX::Logic::Data::DamageByHitRemoveCondition* _RemoveCondition_k__BackingField; // 0x74
		::System::Int32 _RemoveConditionArgument_k__BackingField; // 0x78
		::MX::Logic::Skills::ExtraStatType* _AddSource_k__BackingField; // 0x7C
		::System::Int64 _AddRate_k__BackingField; // 0x80
		::System::Int64 _MaxDamageRate_k__BackingField; // 0x88
		::System::String* _BonusSourceBlackboardKeyString_k__BackingField; // 0x90
		::MX::Logic::Data::BlackboardKeyType* _BonusSourceBlackboardKeyType_k__BackingField; // 0x98
		::System::Int64 _BonusRateBlackboard_k__BackingField; // 0xA0
		::System::Boolean _IgnoreMaxDamageForBlackboardBonus_k__BackingField; // 0xA8
		::System::Int64 _DefensePenetrationRate_k__BackingField; // 0xB0
		Il2CppObject* _TriggerArgument_k__BackingField; // 0xB8
		::System::Int64 _AddTriggerValueRate_k__BackingField; // 0xC0
		::System::Boolean _IgnoreShield_k__BackingField; // 0xC8
		::System::Boolean _DoNotKillTarget_k__BackingField; // 0xC9
		::System::Boolean _ApplyStability_k__BackingField; // 0xCA
		::System::Boolean _ApplyTerrainAdaptationDamage_k__BackingField; // 0xCB
		::System::Boolean _ApplyExDamagedRatio_k__BackingField; // 0xCC
		::System::Boolean _ApplyEnhanceExDamageRate_k__BackingField; // 0xCD
		::System::Boolean _ApplyEnhanceBasicsDamageRate_k__BackingField; // 0xCE
		::MX::Logic::Skills::SkillType* _OverrideSkillType_k__BackingField; // 0xD0
		::MX::Logic::Skills::SkillType* _OverrideSkillDamageType_k__BackingField; // 0xD4
		::System::Boolean _ApplyEnhanceBulletType_k__BackingField; // 0xD8
		::System::Boolean _OverrideBulletType_k__BackingField; // 0xD9
		::FlatData::BulletType* _BulletTypeToOverride_k__BackingField; // 0xDC
		::System::Boolean _ApplyEnhanceWeakDamageRate_k__BackingField; // 0xE0
		::System::Boolean _ApplyWeakDamagedRatio_k__BackingField; // 0xE1
		::System::Boolean _ApplyEffectiveDamagedRatio_k__BackingField; // 0xE2
		::System::Boolean _ApplyNormalDamagedRatio_k__BackingField; // 0xE3
		::System::Boolean _ApplyResistDamagedRatio_k__BackingField; // 0xE4

		::MX::Logic::Skills::DamageRatioApplyType* get_ApplyDamageRatio2()
		{
			return ((::MX::Logic::Skills::DamageRatioApplyType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_DAMAGEBYHITEFFECTVALUE_GET_APPLYDAMAGERATIO2_OFFSET))(nullptr);
		}

		::System::Boolean get_ApplyTerrainAdaptationDamage()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_DAMAGEBYHITEFFECTVALUE_GET_APPLYTERRAINADAPTATIONDAMAGE_OFFSET))(nullptr);
		}

		::System::Boolean get_ApplyEffectiveDamagedRatio()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_DAMAGEBYHITEFFECTVALUE_GET_APPLYEFFECTIVEDAMAGEDRATIO_OFFSET))(nullptr);
		}

		::System::Boolean get_OverrideBulletType()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_DAMAGEBYHITEFFECTVALUE_GET_OVERRIDEBULLETTYPE_OFFSET))(nullptr);
		}

		::System::Int64 get_MaxDamageRate()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_DAMAGEBYHITEFFECTVALUE_GET_MAXDAMAGERATE_OFFSET))(nullptr);
		}

		::System::Int32 get_DurationFrame()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_DAMAGEBYHITEFFECTVALUE_GET_DURATIONFRAME_OFFSET))(nullptr);
		}

		::System::Void set_ApplyNormalDamagedRatio(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_DAMAGEBYHITEFFECTVALUE_SET_APPLYNORMALDAMAGEDRATIO_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_ApplyStability()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_DAMAGEBYHITEFFECTVALUE_GET_APPLYSTABILITY_OFFSET))(nullptr);
		}

		::MX::Core::Math::BasisPoint* get_BonusRateFirst()
		{
			return ((::MX::Core::Math::BasisPoint*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_DAMAGEBYHITEFFECTVALUE_GET_BONUSRATEFIRST_OFFSET))(nullptr);
		}

		::System::Boolean get_IgnoreShield()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_DAMAGEBYHITEFFECTVALUE_GET_IGNORESHIELD_OFFSET))(nullptr);
		}

		::System::Boolean get_ApplyBulletType()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_DAMAGEBYHITEFFECTVALUE_GET_APPLYBULLETTYPE_OFFSET))(nullptr);
		}

		::MX::Logic::Data::BlackboardKeyType* get_BonusSourceBlackboardKeyType()
		{
			return ((::MX::Logic::Data::BlackboardKeyType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_DAMAGEBYHITEFFECTVALUE_GET_BONUSSOURCEBLACKBOARDKEYTYPE_OFFSET))(nullptr);
		}

		::System::Boolean get_IgnoreMaxDamageForBlackboardBonus()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_DAMAGEBYHITEFFECTVALUE_GET_IGNOREMAXDAMAGEFORBLACKBOARDBONUS_OFFSET))(nullptr);
		}

		::System::Boolean get_ApplyEnhanceExDamageRate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_DAMAGEBYHITEFFECTVALUE_GET_APPLYENHANCEEXDAMAGERATE_OFFSET))(nullptr);
		}

		::MX::Logic::Skills::ExtraStatType* get_AddSource()
		{
			return ((::MX::Logic::Skills::ExtraStatType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_DAMAGEBYHITEFFECTVALUE_GET_ADDSOURCE_OFFSET))(nullptr);
		}

		::MX::Logic::Data::DamageByHitTriggerType* get_TriggerType()
		{
			return ((::MX::Logic::Data::DamageByHitTriggerType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_DAMAGEBYHITEFFECTVALUE_GET_TRIGGERTYPE_OFFSET))(nullptr);
		}

		::MX::Logic::Data::DamageByHitRemoveCondition* get_RemoveCondition()
		{
			return ((::MX::Logic::Data::DamageByHitRemoveCondition*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_DAMAGEBYHITEFFECTVALUE_GET_REMOVECONDITION_OFFSET))(nullptr);
		}

		::System::Boolean get_ApplyEnhanceBasicsDamageRate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_DAMAGEBYHITEFFECTVALUE_GET_APPLYENHANCEBASICSDAMAGERATE_OFFSET))(nullptr);
		}

		::System::Void set_ApplyResistDamagedRatio(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_DAMAGEBYHITEFFECTVALUE_SET_APPLYRESISTDAMAGEDRATIO_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_DoNotKillTarget()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_DAMAGEBYHITEFFECTVALUE_GET_DONOTKILLTARGET_OFFSET))(nullptr);
		}

		::System::Boolean get_ApplyEnhanceBulletType()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_DAMAGEBYHITEFFECTVALUE_GET_APPLYENHANCEBULLETTYPE_OFFSET))(nullptr);
		}

		::System::Boolean get_ApplyWeakDamagedRatio()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_DAMAGEBYHITEFFECTVALUE_GET_APPLYWEAKDAMAGEDRATIO_OFFSET))(nullptr);
		}

		::System::Boolean get_IsDispellable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_DAMAGEBYHITEFFECTVALUE_GET_ISDISPELLABLE_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::GameData::DAO::Battle::DamageByHitEffectDAO* arg)
		{
			((::System::Void(*)(::MX::GameData::DAO::Battle::DamageByHitEffectDAO*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_DAMAGEBYHITEFFECTVALUE_.CTOR_OFFSET))(arg, nullptr);
		}

		::MX::Logic::Skills::SkillType* get_OverrideSkillType()
		{
			return ((::MX::Logic::Skills::SkillType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_DAMAGEBYHITEFFECTVALUE_GET_OVERRIDESKILLTYPE_OFFSET))(nullptr);
		}

		::FlatData::BulletType* get_BulletTypeToOverride()
		{
			return ((::FlatData::BulletType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_DAMAGEBYHITEFFECTVALUE_GET_BULLETTYPETOOVERRIDE_OFFSET))(nullptr);
		}

		::FlatData::StatType* get_BonusSourceFirst()
		{
			return ((::FlatData::StatType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_DAMAGEBYHITEFFECTVALUE_GET_BONUSSOURCEFIRST_OFFSET))(nullptr);
		}

		::System::Int64 get_BonusRateBlackboard()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_DAMAGEBYHITEFFECTVALUE_GET_BONUSRATEBLACKBOARD_OFFSET))(nullptr);
		}

		::System::Void set_ApplyWeakDamagedRatio(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_DAMAGEBYHITEFFECTVALUE_SET_APPLYWEAKDAMAGEDRATIO_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_AddTriggerValueRate()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_DAMAGEBYHITEFFECTVALUE_GET_ADDTRIGGERVALUERATE_OFFSET))(nullptr);
		}

		::System::Boolean get_ApplyDefense()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_DAMAGEBYHITEFFECTVALUE_GET_APPLYDEFENSE_OFFSET))(nullptr);
		}

		::System::Int64 get_DefensePenetrationRate()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_DAMAGEBYHITEFFECTVALUE_GET_DEFENSEPENETRATIONRATE_OFFSET))(nullptr);
		}

		::System::Int64 get_AddRate()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_DAMAGEBYHITEFFECTVALUE_GET_ADDRATE_OFFSET))(nullptr);
		}

		::System::Boolean get_ApplyExDamagedRatio()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_DAMAGEBYHITEFFECTVALUE_GET_APPLYEXDAMAGEDRATIO_OFFSET))(nullptr);
		}

		::System::Boolean get_ApplyNormalDamagedRatio()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_DAMAGEBYHITEFFECTVALUE_GET_APPLYNORMALDAMAGEDRATIO_OFFSET))(nullptr);
		}

		::System::Boolean get_ApplyEnhanceWeakDamageRate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_DAMAGEBYHITEFFECTVALUE_GET_APPLYENHANCEWEAKDAMAGERATE_OFFSET))(nullptr);
		}

		::MX::Logic::Skills::SkillType* get_OverrideSkillDamageType()
		{
			return ((::MX::Logic::Skills::SkillType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_DAMAGEBYHITEFFECTVALUE_GET_OVERRIDESKILLDAMAGETYPE_OFFSET))(nullptr);
		}

		::System::Boolean get_ApplyResistDamagedRatio()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_DAMAGEBYHITEFFECTVALUE_GET_APPLYRESISTDAMAGEDRATIO_OFFSET))(nullptr);
		}

		::System::Int64 get_Amount()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_DAMAGEBYHITEFFECTVALUE_GET_AMOUNT_OFFSET))(nullptr);
		}

		Il2CppObject* get_TriggerArgument()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_DAMAGEBYHITEFFECTVALUE_GET_TRIGGERARGUMENT_OFFSET))(nullptr);
		}

		::System::Int32 get_RemoveConditionArgument()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_DAMAGEBYHITEFFECTVALUE_GET_REMOVECONDITIONARGUMENT_OFFSET))(nullptr);
		}

		::MX::Logic::Skills::DamageRatioApplyType* get_ApplyDamageRatio()
		{
			return ((::MX::Logic::Skills::DamageRatioApplyType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_DAMAGEBYHITEFFECTVALUE_GET_APPLYDAMAGERATIO_OFFSET))(nullptr);
		}

		::System::Void set_ApplyEffectiveDamagedRatio(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_DAMAGEBYHITEFFECTVALUE_SET_APPLYEFFECTIVEDAMAGEDRATIO_OFFSET))(arg, nullptr);
		}

		::System::String* get_BonusSourceBlackboardKeyString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_DAMAGEBYHITEFFECTVALUE_GET_BONUSSOURCEBLACKBOARDKEYSTRING_OFFSET))(nullptr);
		}

	};
}

