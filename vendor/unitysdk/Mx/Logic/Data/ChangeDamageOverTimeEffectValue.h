#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Data { class DamageOverTimeEffectValue; }
namespace MX::Logic::Skills { class SkillType; }
namespace MX::GameData::DAO::Battle { class ChangeDamageOverTimeEffectDAO; }

#define MX_LOGIC_DATA_CHANGEDAMAGEOVERTIMEEFFECTVALUE_GET_CHANGEDAMAGERATE_OFFSET UNITYSDK_OFFSET(0x1236340)
#define MX_LOGIC_DATA_CHANGEDAMAGEOVERTIMEEFFECTVALUE_GET_APPLYEXDAMAGEDRATIO_OFFSET UNITYSDK_OFFSET(0x1236350)
#define MX_LOGIC_DATA_CHANGEDAMAGEOVERTIMEEFFECTVALUE_GET_DAMAGEOVERTIMEEFFECTVALUE_OFFSET UNITYSDK_OFFSET(0x1236360)
#define MX_LOGIC_DATA_CHANGEDAMAGEOVERTIMEEFFECTVALUE_GET_APPLYENHANCEEXDAMAGERATE_OFFSET UNITYSDK_OFFSET(0x1236370)
#define MX_LOGIC_DATA_CHANGEDAMAGEOVERTIMEEFFECTVALUE_GET_OVERRIDESKILLDAMAGETYPE_OFFSET UNITYSDK_OFFSET(0x1236380)
#define MX_LOGIC_DATA_CHANGEDAMAGEOVERTIMEEFFECTVALUE_GET_MINCHANGEDAMAGERATE_OFFSET UNITYSDK_OFFSET(0x1236390)
#define MX_LOGIC_DATA_CHANGEDAMAGEOVERTIMEEFFECTVALUE_.CTOR_OFFSET UNITYSDK_OFFSET(0x12363A0)
#define MX_LOGIC_DATA_CHANGEDAMAGEOVERTIMEEFFECTVALUE_GET_MAXCHANGEDAMAGERATE_OFFSET UNITYSDK_OFFSET(0x1236480)
#define MX_LOGIC_DATA_CHANGEDAMAGEOVERTIMEEFFECTVALUE_GET_OVERRIDESKILLTYPE_OFFSET UNITYSDK_OFFSET(0x1236490)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int ChangeDamageOverTimeEffectValue_TypeDefinitionIndex = 13860;

	class ChangeDamageOverTimeEffectValue : public Il2CppObject
	{
	public:
		::MX::Logic::Data::DamageOverTimeEffectValue* _DamageOverTimeEffectValue_k__BackingField; // 0x48
		::System::Int64 _ChangeDamageRate_k__BackingField; // 0x50
		::System::Int64 _MaxChangeDamageRate_k__BackingField; // 0x58
		::System::Int64 _MinChangeDamageRate_k__BackingField; // 0x60
		::System::Boolean _ApplyExDamagedRatio_k__BackingField; // 0x68
		::System::Boolean _ApplyEnhanceExDamageRate_k__BackingField; // 0x69
		::MX::Logic::Skills::SkillType* _OverrideSkillType_k__BackingField; // 0x6C
		::MX::Logic::Skills::SkillType* _OverrideSkillDamageType_k__BackingField; // 0x70

		::System::Int64 get_ChangeDamageRate()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_CHANGEDAMAGEOVERTIMEEFFECTVALUE_GET_CHANGEDAMAGERATE_OFFSET))(nullptr);
		}

		::System::Boolean get_ApplyExDamagedRatio()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_CHANGEDAMAGEOVERTIMEEFFECTVALUE_GET_APPLYEXDAMAGEDRATIO_OFFSET))(nullptr);
		}

		::MX::Logic::Data::DamageOverTimeEffectValue* get_DamageOverTimeEffectValue()
		{
			return ((::MX::Logic::Data::DamageOverTimeEffectValue*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_CHANGEDAMAGEOVERTIMEEFFECTVALUE_GET_DAMAGEOVERTIMEEFFECTVALUE_OFFSET))(nullptr);
		}

		::System::Boolean get_ApplyEnhanceExDamageRate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_CHANGEDAMAGEOVERTIMEEFFECTVALUE_GET_APPLYENHANCEEXDAMAGERATE_OFFSET))(nullptr);
		}

		::MX::Logic::Skills::SkillType* get_OverrideSkillDamageType()
		{
			return ((::MX::Logic::Skills::SkillType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_CHANGEDAMAGEOVERTIMEEFFECTVALUE_GET_OVERRIDESKILLDAMAGETYPE_OFFSET))(nullptr);
		}

		::System::Int64 get_MinChangeDamageRate()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_CHANGEDAMAGEOVERTIMEEFFECTVALUE_GET_MINCHANGEDAMAGERATE_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::GameData::DAO::Battle::ChangeDamageOverTimeEffectDAO* arg)
		{
			((::System::Void(*)(::MX::GameData::DAO::Battle::ChangeDamageOverTimeEffectDAO*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_CHANGEDAMAGEOVERTIMEEFFECTVALUE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_MaxChangeDamageRate()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_CHANGEDAMAGEOVERTIMEEFFECTVALUE_GET_MAXCHANGEDAMAGERATE_OFFSET))(nullptr);
		}

		::MX::Logic::Skills::SkillType* get_OverrideSkillType()
		{
			return ((::MX::Logic::Skills::SkillType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_CHANGEDAMAGEOVERTIMEEFFECTVALUE_GET_OVERRIDESKILLTYPE_OFFSET))(nullptr);
		}

	};
}

