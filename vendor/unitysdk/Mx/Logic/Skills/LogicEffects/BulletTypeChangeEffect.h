#pragma once
#include "../../../../unitysdk.h"

namespace MX::Logic::BattleEntities { class LogicEffectEndCondition; }
namespace FlatData { class BulletType; }
namespace MX::Logic::Data { class BulletTypeChangeEffectValue; }
namespace MX::Logic::Skills { class SkillSpecification; }
namespace MX::Logic::Skills::LogicEffects { class LogicEffectHitSpecification; }

#define MX_LOGIC_SKILLS_LOGICEFFECTS_BULLETTYPECHANGEEFFECT_GET_DISPELLABLE_OFFSET UNITYSDK_OFFSET(0x140ABA0)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_BULLETTYPECHANGEEFFECT_GET_CHANGESKILLCATEGORYLIST_OFFSET UNITYSDK_OFFSET(0x140ABB0)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_BULLETTYPECHANGEEFFECT_.CTOR_OFFSET UNITYSDK_OFFSET(0x140ABC0)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_BULLETTYPECHANGEEFFECT_GET_ENDCONDITION_OFFSET UNITYSDK_OFFSET(0x140AC30)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_BULLETTYPECHANGEEFFECT_GET_ENDCONDITIONARGUMENT_OFFSET UNITYSDK_OFFSET(0x140AC40)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_BULLETTYPECHANGEEFFECT_GET_CHANGEBULLETTYPE_OFFSET UNITYSDK_OFFSET(0x140AC50)

namespace MX::Logic::Skills::LogicEffects
{
	inline static constexpr unsigned int BulletTypeChangeEffect_TypeDefinitionIndex = 14704;

	class BulletTypeChangeEffect : public Il2CppObject
	{
	public:
		::MX::Logic::BattleEntities::LogicEffectEndCondition* _EndCondition_k__BackingField; // 0xD0
		::System::Int32 _EndConditionArgument_k__BackingField; // 0xD4
		::System::Boolean _Dispellable_k__BackingField; // 0xD8
		::FlatData::BulletType* _ChangeBulletType_k__BackingField; // 0xDC
		Il2CppObject* _ChangeSkillCategoryList_k__BackingField; // 0xE0

		::System::Boolean get_Dispellable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_BULLETTYPECHANGEEFFECT_GET_DISPELLABLE_OFFSET))(nullptr);
		}

		Il2CppObject* get_ChangeSkillCategoryList()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_BULLETTYPECHANGEEFFECT_GET_CHANGESKILLCATEGORYLIST_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::Logic::Data::BulletTypeChangeEffectValue* arg, ::MX::Logic::Skills::SkillSpecification* arg2, ::MX::Logic::Skills::LogicEffects::LogicEffectHitSpecification* arg3)
		{
			((::System::Void(*)(::MX::Logic::Data::BulletTypeChangeEffectValue*, ::MX::Logic::Skills::SkillSpecification*, ::MX::Logic::Skills::LogicEffects::LogicEffectHitSpecification*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_BULLETTYPECHANGEEFFECT_.CTOR_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::MX::Logic::BattleEntities::LogicEffectEndCondition* get_EndCondition()
		{
			return ((::MX::Logic::BattleEntities::LogicEffectEndCondition*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_BULLETTYPECHANGEEFFECT_GET_ENDCONDITION_OFFSET))(nullptr);
		}

		::System::Int32 get_EndConditionArgument()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_BULLETTYPECHANGEEFFECT_GET_ENDCONDITIONARGUMENT_OFFSET))(nullptr);
		}

		::FlatData::BulletType* get_ChangeBulletType()
		{
			return ((::FlatData::BulletType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_BULLETTYPECHANGEEFFECT_GET_CHANGEBULLETTYPE_OFFSET))(nullptr);
		}

	};
}

