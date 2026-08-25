#pragma once
#include "../../../unitysdk.h"

namespace FlatData { class EndCondition; }
namespace MX::Logic::Skills::LogicEffects { class DamageSourceType; }
namespace MX::GameData::DAO::Battle { class DamagedMultiplierbyDamageOverTimeEffectDAO; }
namespace MX::GameData::DAO::Battle { class DamagedMultiplierbyChangeDamageOverTimeEffectDAO; }

#define MX_LOGIC_DATA_DAMAGEDMULTIPLIERBYDAMAGEOVERTIMEEFFECTVALUE_GET_ADDRATE_OFFSET UNITYSDK_OFFSET(0x1237D10)
#define MX_LOGIC_DATA_DAMAGEDMULTIPLIERBYDAMAGEOVERTIMEEFFECTVALUE_GET_APPLYLOGICEFFECTTEMPLATEID_OFFSET UNITYSDK_OFFSET(0x1237D20)
#define MX_LOGIC_DATA_DAMAGEDMULTIPLIERBYDAMAGEOVERTIMEEFFECTVALUE_GET_REMOVECONDITION_OFFSET UNITYSDK_OFFSET(0x1237D30)
#define MX_LOGIC_DATA_DAMAGEDMULTIPLIERBYDAMAGEOVERTIMEEFFECTVALUE_GET_REMOVECONDITIONARGUMENT_OFFSET UNITYSDK_OFFSET(0x1237D40)
#define MX_LOGIC_DATA_DAMAGEDMULTIPLIERBYDAMAGEOVERTIMEEFFECTVALUE_GET_ISDISPELLABLE_OFFSET UNITYSDK_OFFSET(0x1237D50)
#define MX_LOGIC_DATA_DAMAGEDMULTIPLIERBYDAMAGEOVERTIMEEFFECTVALUE_GET_APPLYLOGICEFFECTTYPE_OFFSET UNITYSDK_OFFSET(0x1237D60)
#define MX_LOGIC_DATA_DAMAGEDMULTIPLIERBYDAMAGEOVERTIMEEFFECTVALUE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1237D70)
#define MX_LOGIC_DATA_DAMAGEDMULTIPLIERBYDAMAGEOVERTIMEEFFECTVALUE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1237E70)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int DamagedMultiplierbyDamageOverTimeEffectValue_TypeDefinitionIndex = 13875;

	class DamagedMultiplierbyDamageOverTimeEffectValue : public Il2CppObject
	{
	public:
		::System::Int64 _AddRate_k__BackingField; // 0x48
		::System::String* _ApplyLogicEffectTemplateId_k__BackingField; // 0x50
		::FlatData::EndCondition* _RemoveCondition_k__BackingField; // 0x58
		::System::String* _RemoveConditionArgument_k__BackingField; // 0x60
		::System::Boolean _IsDispellable_k__BackingField; // 0x68
		::MX::Logic::Skills::LogicEffects::DamageSourceType* _ApplyLogicEffectType_k__BackingField; // 0x6C

		::System::Int64 get_AddRate()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_DAMAGEDMULTIPLIERBYDAMAGEOVERTIMEEFFECTVALUE_GET_ADDRATE_OFFSET))(nullptr);
		}

		::System::String* get_ApplyLogicEffectTemplateId()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_DAMAGEDMULTIPLIERBYDAMAGEOVERTIMEEFFECTVALUE_GET_APPLYLOGICEFFECTTEMPLATEID_OFFSET))(nullptr);
		}

		::FlatData::EndCondition* get_RemoveCondition()
		{
			return ((::FlatData::EndCondition*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_DAMAGEDMULTIPLIERBYDAMAGEOVERTIMEEFFECTVALUE_GET_REMOVECONDITION_OFFSET))(nullptr);
		}

		::System::String* get_RemoveConditionArgument()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_DAMAGEDMULTIPLIERBYDAMAGEOVERTIMEEFFECTVALUE_GET_REMOVECONDITIONARGUMENT_OFFSET))(nullptr);
		}

		::System::Boolean get_IsDispellable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_DAMAGEDMULTIPLIERBYDAMAGEOVERTIMEEFFECTVALUE_GET_ISDISPELLABLE_OFFSET))(nullptr);
		}

		::MX::Logic::Skills::LogicEffects::DamageSourceType* get_ApplyLogicEffectType()
		{
			return ((::MX::Logic::Skills::LogicEffects::DamageSourceType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_DAMAGEDMULTIPLIERBYDAMAGEOVERTIMEEFFECTVALUE_GET_APPLYLOGICEFFECTTYPE_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::GameData::DAO::Battle::DamagedMultiplierbyDamageOverTimeEffectDAO* arg)
		{
			((::System::Void(*)(::MX::GameData::DAO::Battle::DamagedMultiplierbyDamageOverTimeEffectDAO*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_DAMAGEDMULTIPLIERBYDAMAGEOVERTIMEEFFECTVALUE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::MX::GameData::DAO::Battle::DamagedMultiplierbyChangeDamageOverTimeEffectDAO* arg)
		{
			((::System::Void(*)(::MX::GameData::DAO::Battle::DamagedMultiplierbyChangeDamageOverTimeEffectDAO*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_DAMAGEDMULTIPLIERBYDAMAGEOVERTIMEEFFECTVALUE_.CTOR_OFFSET))(arg, nullptr);
		}

	};
}

