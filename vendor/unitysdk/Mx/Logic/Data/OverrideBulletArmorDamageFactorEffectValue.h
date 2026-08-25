#pragma once
#include "../../../unitysdk.h"

namespace FlatData { class BulletType; }
namespace FlatData { class ArmorType; }
namespace FlatData { class DamageAttribute; }
namespace FlatData { class EndCondition; }
namespace MX::GameData::DAO::Battle { class OverrideBulletArmorDamageFactorEffectDAO; }

#define MX_LOGIC_DATA_OVERRIDEBULLETARMORDAMAGEFACTOREFFECTVALUE_GET_ENDCONDITIONARGUMENT_OFFSET UNITYSDK_OFFSET(0x123D910)
#define MX_LOGIC_DATA_OVERRIDEBULLETARMORDAMAGEFACTOREFFECTVALUE_GET_DISPELLABLE_OFFSET UNITYSDK_OFFSET(0x123D920)
#define MX_LOGIC_DATA_OVERRIDEBULLETARMORDAMAGEFACTOREFFECTVALUE_GET_MINDAMAGERATE_OFFSET UNITYSDK_OFFSET(0x123D930)
#define MX_LOGIC_DATA_OVERRIDEBULLETARMORDAMAGEFACTOREFFECTVALUE_GET_CHECKBULLETTYPE_OFFSET UNITYSDK_OFFSET(0x123D940)
#define MX_LOGIC_DATA_OVERRIDEBULLETARMORDAMAGEFACTOREFFECTVALUE_GET_MAXDAMAGERATE_OFFSET UNITYSDK_OFFSET(0x123D950)
#define MX_LOGIC_DATA_OVERRIDEBULLETARMORDAMAGEFACTOREFFECTVALUE_GET_CHECKARMORTYPE_OFFSET UNITYSDK_OFFSET(0x123D960)
#define MX_LOGIC_DATA_OVERRIDEBULLETARMORDAMAGEFACTOREFFECTVALUE_GET_DAMAGERATE_OFFSET UNITYSDK_OFFSET(0x123D970)
#define MX_LOGIC_DATA_OVERRIDEBULLETARMORDAMAGEFACTOREFFECTVALUE_.CTOR_OFFSET UNITYSDK_OFFSET(0x123D980)
#define MX_LOGIC_DATA_OVERRIDEBULLETARMORDAMAGEFACTOREFFECTVALUE_GET_DAMAGEATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x123DAF0)
#define MX_LOGIC_DATA_OVERRIDEBULLETARMORDAMAGEFACTOREFFECTVALUE_GET_ENDCONDITION_OFFSET UNITYSDK_OFFSET(0x123DB00)
#define MX_LOGIC_DATA_OVERRIDEBULLETARMORDAMAGEFACTOREFFECTVALUE_GET_SHOWHIGHLIGHTFLOATER_OFFSET UNITYSDK_OFFSET(0x123DB10)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int OverrideBulletArmorDamageFactorEffectValue_TypeDefinitionIndex = 13912;

	class OverrideBulletArmorDamageFactorEffectValue : public Il2CppObject
	{
	public:
		::FlatData::BulletType* _CheckBulletType_k__BackingField; // 0x48
		::FlatData::ArmorType* _CheckArmorType_k__BackingField; // 0x4C
		::System::Int64 _DamageRate_k__BackingField; // 0x50
		::FlatData::DamageAttribute* _DamageAttribute_k__BackingField; // 0x58
		::System::Boolean _ShowHighlightFloater_k__BackingField; // 0x5C
		::System::Int64 _MinDamageRate_k__BackingField; // 0x60
		::System::Int64 _MaxDamageRate_k__BackingField; // 0x68
		::FlatData::EndCondition* _EndCondition_k__BackingField; // 0x70
		::System::String* _EndConditionArgument_k__BackingField; // 0x78
		::System::Boolean _Dispellable_k__BackingField; // 0x80

		::System::String* get_EndConditionArgument()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_OVERRIDEBULLETARMORDAMAGEFACTOREFFECTVALUE_GET_ENDCONDITIONARGUMENT_OFFSET))(nullptr);
		}

		::System::Boolean get_Dispellable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_OVERRIDEBULLETARMORDAMAGEFACTOREFFECTVALUE_GET_DISPELLABLE_OFFSET))(nullptr);
		}

		::System::Int64 get_MinDamageRate()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_OVERRIDEBULLETARMORDAMAGEFACTOREFFECTVALUE_GET_MINDAMAGERATE_OFFSET))(nullptr);
		}

		::FlatData::BulletType* get_CheckBulletType()
		{
			return ((::FlatData::BulletType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_OVERRIDEBULLETARMORDAMAGEFACTOREFFECTVALUE_GET_CHECKBULLETTYPE_OFFSET))(nullptr);
		}

		::System::Int64 get_MaxDamageRate()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_OVERRIDEBULLETARMORDAMAGEFACTOREFFECTVALUE_GET_MAXDAMAGERATE_OFFSET))(nullptr);
		}

		::FlatData::ArmorType* get_CheckArmorType()
		{
			return ((::FlatData::ArmorType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_OVERRIDEBULLETARMORDAMAGEFACTOREFFECTVALUE_GET_CHECKARMORTYPE_OFFSET))(nullptr);
		}

		::System::Int64 get_DamageRate()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_OVERRIDEBULLETARMORDAMAGEFACTOREFFECTVALUE_GET_DAMAGERATE_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::GameData::DAO::Battle::OverrideBulletArmorDamageFactorEffectDAO* arg)
		{
			((::System::Void(*)(::MX::GameData::DAO::Battle::OverrideBulletArmorDamageFactorEffectDAO*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_OVERRIDEBULLETARMORDAMAGEFACTOREFFECTVALUE_.CTOR_OFFSET))(arg, nullptr);
		}

		::FlatData::DamageAttribute* get_DamageAttribute()
		{
			return ((::FlatData::DamageAttribute*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_OVERRIDEBULLETARMORDAMAGEFACTOREFFECTVALUE_GET_DAMAGEATTRIBUTE_OFFSET))(nullptr);
		}

		::FlatData::EndCondition* get_EndCondition()
		{
			return ((::FlatData::EndCondition*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_OVERRIDEBULLETARMORDAMAGEFACTOREFFECTVALUE_GET_ENDCONDITION_OFFSET))(nullptr);
		}

		::System::Boolean get_ShowHighlightFloater()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_OVERRIDEBULLETARMORDAMAGEFACTOREFFECTVALUE_GET_SHOWHIGHLIGHTFLOATER_OFFSET))(nullptr);
		}

	};
}

