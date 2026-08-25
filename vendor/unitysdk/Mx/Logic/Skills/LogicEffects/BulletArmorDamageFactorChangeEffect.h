#pragma once
#include "../../../../unitysdk.h"

namespace MX::Logic::BattleEntities { class LogicEffectEndCondition; }
namespace FlatData { class BulletType; }
namespace MX::Logic::Data { class BulletArmorDamageFactorChangeEffectValue; }
namespace MX::Logic::Skills { class SkillSpecification; }
namespace MX::Logic::Skills::LogicEffects { class LogicEffectHitSpecification; }

#define MX_LOGIC_SKILLS_LOGICEFFECTS_BULLETARMORDAMAGEFACTORCHANGEEFFECT_GET_MULTIPLYDAMAGERATE_OFFSET UNITYSDK_OFFSET(0x140AAD0)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_BULLETARMORDAMAGEFACTORCHANGEEFFECT_GET_ADDDAMAGERATE_OFFSET UNITYSDK_OFFSET(0x140AAE0)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_BULLETARMORDAMAGEFACTORCHANGEEFFECT_GET_ENDCONDITION_OFFSET UNITYSDK_OFFSET(0x140AAF0)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_BULLETARMORDAMAGEFACTORCHANGEEFFECT_.CTOR_OFFSET UNITYSDK_OFFSET(0x140AB00)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_BULLETARMORDAMAGEFACTORCHANGEEFFECT_GET_ENDCONDITIONARGUMENT_OFFSET UNITYSDK_OFFSET(0x140AB70)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_BULLETARMORDAMAGEFACTORCHANGEEFFECT_GET_DISPELLABLE_OFFSET UNITYSDK_OFFSET(0x140AB80)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_BULLETARMORDAMAGEFACTORCHANGEEFFECT_GET_BULLETTYPE_OFFSET UNITYSDK_OFFSET(0x140AB90)

namespace MX::Logic::Skills::LogicEffects
{
	inline static constexpr unsigned int BulletArmorDamageFactorChangeEffect_TypeDefinitionIndex = 14703;

	class BulletArmorDamageFactorChangeEffect : public Il2CppObject
	{
	public:
		::MX::Logic::BattleEntities::LogicEffectEndCondition* _EndCondition_k__BackingField; // 0xD0
		::System::Int32 _EndConditionArgument_k__BackingField; // 0xD4
		::System::Boolean _Dispellable_k__BackingField; // 0xD8
		::FlatData::BulletType* _BulletType_k__BackingField; // 0xDC
		::System::Int64 _AddDamageRate_k__BackingField; // 0xE0
		::System::Int64 _MultiplyDamageRate_k__BackingField; // 0xE8

		::System::Int64 get_MultiplyDamageRate()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_BULLETARMORDAMAGEFACTORCHANGEEFFECT_GET_MULTIPLYDAMAGERATE_OFFSET))(nullptr);
		}

		::System::Int64 get_AddDamageRate()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_BULLETARMORDAMAGEFACTORCHANGEEFFECT_GET_ADDDAMAGERATE_OFFSET))(nullptr);
		}

		::MX::Logic::BattleEntities::LogicEffectEndCondition* get_EndCondition()
		{
			return ((::MX::Logic::BattleEntities::LogicEffectEndCondition*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_BULLETARMORDAMAGEFACTORCHANGEEFFECT_GET_ENDCONDITION_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::Logic::Data::BulletArmorDamageFactorChangeEffectValue* arg, ::MX::Logic::Skills::SkillSpecification* arg2, ::MX::Logic::Skills::LogicEffects::LogicEffectHitSpecification* arg3)
		{
			((::System::Void(*)(::MX::Logic::Data::BulletArmorDamageFactorChangeEffectValue*, ::MX::Logic::Skills::SkillSpecification*, ::MX::Logic::Skills::LogicEffects::LogicEffectHitSpecification*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_BULLETARMORDAMAGEFACTORCHANGEEFFECT_.CTOR_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Int32 get_EndConditionArgument()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_BULLETARMORDAMAGEFACTORCHANGEEFFECT_GET_ENDCONDITIONARGUMENT_OFFSET))(nullptr);
		}

		::System::Boolean get_Dispellable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_BULLETARMORDAMAGEFACTORCHANGEEFFECT_GET_DISPELLABLE_OFFSET))(nullptr);
		}

		::FlatData::BulletType* get_BulletType()
		{
			return ((::FlatData::BulletType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_BULLETARMORDAMAGEFACTORCHANGEEFFECT_GET_BULLETTYPE_OFFSET))(nullptr);
		}

	};
}

