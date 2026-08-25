#pragma once
#include "../../../../unitysdk.h"

namespace FlatData { class BulletType; }
namespace FlatData { class ArmorType; }
namespace FlatData { class DamageAttribute; }
namespace FlatData { class EndCondition; }
namespace MX::Logic::Data { class OverrideBulletArmorDamageFactorEffectValue; }
namespace MX::Logic::Skills { class SkillSpecification; }
namespace MX::Logic::Skills::LogicEffects { class LogicEffectHitSpecification; }
namespace MX::Logic::Battles { class Battle; }

#define MX_LOGIC_SKILLS_LOGICEFFECTS_OVERRIDEBULLETARMORDAMAGEFACTOREFFECT_ABILITY_ONEXPIRED_OFFSET UNITYSDK_OFFSET(0x141F490)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_OVERRIDEBULLETARMORDAMAGEFACTOREFFECT_GET_CHECKARMORTYPE_OFFSET UNITYSDK_OFFSET(0x141F5E0)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_OVERRIDEBULLETARMORDAMAGEFACTOREFFECT_GET_DAMAGERATE_OFFSET UNITYSDK_OFFSET(0x141F5F0)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_OVERRIDEBULLETARMORDAMAGEFACTOREFFECT_GET_SHOWHIGHLIGHTFLOATER_OFFSET UNITYSDK_OFFSET(0x141F600)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_OVERRIDEBULLETARMORDAMAGEFACTOREFFECT_.CTOR_OFFSET UNITYSDK_OFFSET(0x141F610)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_OVERRIDEBULLETARMORDAMAGEFACTOREFFECT_GET_ENDCONDITIONARGUMENT_OFFSET UNITYSDK_OFFSET(0x141F6C0)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_OVERRIDEBULLETARMORDAMAGEFACTOREFFECT_GET_MAXDAMAGERATE_OFFSET UNITYSDK_OFFSET(0x141F6D0)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_OVERRIDEBULLETARMORDAMAGEFACTOREFFECT_ACTIVATE_OFFSET UNITYSDK_OFFSET(0x141F6E0)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_OVERRIDEBULLETARMORDAMAGEFACTOREFFECT_GET_CHECKBULLETTYPE_OFFSET UNITYSDK_OFFSET(0x141F8B0)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_OVERRIDEBULLETARMORDAMAGEFACTOREFFECT_GET_DAMAGEATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x141F8C0)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_OVERRIDEBULLETARMORDAMAGEFACTOREFFECT_GET_ENDCONDITION_OFFSET UNITYSDK_OFFSET(0x141F8D0)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_OVERRIDEBULLETARMORDAMAGEFACTOREFFECT_GET_MINDAMAGERATE_OFFSET UNITYSDK_OFFSET(0x141F8E0)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_OVERRIDEBULLETARMORDAMAGEFACTOREFFECT_GET_DISPELLABLE_OFFSET UNITYSDK_OFFSET(0x141F8F0)

namespace MX::Logic::Skills::LogicEffects
{
	inline static constexpr unsigned int OverrideBulletArmorDamageFactorEffect_TypeDefinitionIndex = 14784;

	class OverrideBulletArmorDamageFactorEffect : public Il2CppObject
	{
	public:
		::FlatData::BulletType* _CheckBulletType_k__BackingField; // 0xD0
		::FlatData::ArmorType* _CheckArmorType_k__BackingField; // 0xD4
		::System::Int64 _DamageRate_k__BackingField; // 0xD8
		::FlatData::DamageAttribute* _DamageAttribute_k__BackingField; // 0xE0
		::System::Boolean _ShowHighlightFloater_k__BackingField; // 0xE4
		::System::Int64 _MinDamageRate_k__BackingField; // 0xE8
		::System::Int64 _MaxDamageRate_k__BackingField; // 0xF0
		::FlatData::EndCondition* _EndCondition_k__BackingField; // 0xF8
		::System::String* _EndConditionArgument_k__BackingField; // 0x100
		::System::Boolean _Dispellable_k__BackingField; // 0x108
		Il2CppObject* dotAbility; // 0x110

		::System::Void Ability_OnExpired(::System::Object* arg, ::System::EventArgs* arg2)
		{
			((::System::Void(*)(::System::Object*, ::System::EventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_OVERRIDEBULLETARMORDAMAGEFACTOREFFECT_ABILITY_ONEXPIRED_OFFSET))(arg, arg2, nullptr);
		}

		::FlatData::ArmorType* get_CheckArmorType()
		{
			return ((::FlatData::ArmorType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_OVERRIDEBULLETARMORDAMAGEFACTOREFFECT_GET_CHECKARMORTYPE_OFFSET))(nullptr);
		}

		::System::Int64 get_DamageRate()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_OVERRIDEBULLETARMORDAMAGEFACTOREFFECT_GET_DAMAGERATE_OFFSET))(nullptr);
		}

		::System::Boolean get_ShowHighlightFloater()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_OVERRIDEBULLETARMORDAMAGEFACTOREFFECT_GET_SHOWHIGHLIGHTFLOATER_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::Logic::Data::OverrideBulletArmorDamageFactorEffectValue* arg, ::MX::Logic::Skills::SkillSpecification* arg2, ::MX::Logic::Skills::LogicEffects::LogicEffectHitSpecification* arg3)
		{
			((::System::Void(*)(::MX::Logic::Data::OverrideBulletArmorDamageFactorEffectValue*, ::MX::Logic::Skills::SkillSpecification*, ::MX::Logic::Skills::LogicEffects::LogicEffectHitSpecification*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_OVERRIDEBULLETARMORDAMAGEFACTOREFFECT_.CTOR_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::String* get_EndConditionArgument()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_OVERRIDEBULLETARMORDAMAGEFACTOREFFECT_GET_ENDCONDITIONARGUMENT_OFFSET))(nullptr);
		}

		::System::Int64 get_MaxDamageRate()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_OVERRIDEBULLETARMORDAMAGEFACTOREFFECT_GET_MAXDAMAGERATE_OFFSET))(nullptr);
		}

		::System::Void Activate(::MX::Logic::Battles::Battle* arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_OVERRIDEBULLETARMORDAMAGEFACTOREFFECT_ACTIVATE_OFFSET))(arg, arg2, nullptr);
		}

		::FlatData::BulletType* get_CheckBulletType()
		{
			return ((::FlatData::BulletType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_OVERRIDEBULLETARMORDAMAGEFACTOREFFECT_GET_CHECKBULLETTYPE_OFFSET))(nullptr);
		}

		::FlatData::DamageAttribute* get_DamageAttribute()
		{
			return ((::FlatData::DamageAttribute*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_OVERRIDEBULLETARMORDAMAGEFACTOREFFECT_GET_DAMAGEATTRIBUTE_OFFSET))(nullptr);
		}

		::FlatData::EndCondition* get_EndCondition()
		{
			return ((::FlatData::EndCondition*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_OVERRIDEBULLETARMORDAMAGEFACTOREFFECT_GET_ENDCONDITION_OFFSET))(nullptr);
		}

		::System::Int64 get_MinDamageRate()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_OVERRIDEBULLETARMORDAMAGEFACTOREFFECT_GET_MINDAMAGERATE_OFFSET))(nullptr);
		}

		::System::Boolean get_Dispellable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_OVERRIDEBULLETARMORDAMAGEFACTOREFFECT_GET_DISPELLABLE_OFFSET))(nullptr);
		}

	};
}

