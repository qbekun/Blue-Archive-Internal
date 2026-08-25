#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::BattleEntities { class LogicEffectEndCondition; }
namespace FlatData { class BulletType; }
namespace MX::GameData::DAO::Battle { class BulletTypeChangeEffectDAO; }

#define MX_LOGIC_DATA_BULLETTYPECHANGEEFFECTVALUE_GET_CHANGEBULLETTYPE_OFFSET UNITYSDK_OFFSET(0x1234960)
#define MX_LOGIC_DATA_BULLETTYPECHANGEEFFECTVALUE_GET_CHANGESKILLCATEGORYLIST_OFFSET UNITYSDK_OFFSET(0x1234970)
#define MX_LOGIC_DATA_BULLETTYPECHANGEEFFECTVALUE_GET_ENDCONDITION_OFFSET UNITYSDK_OFFSET(0x1234980)
#define MX_LOGIC_DATA_BULLETTYPECHANGEEFFECTVALUE_GET_ENDCONDITIONARGUMENT_OFFSET UNITYSDK_OFFSET(0x1234990)
#define MX_LOGIC_DATA_BULLETTYPECHANGEEFFECTVALUE_GET_DISPELLABLE_OFFSET UNITYSDK_OFFSET(0x12349A0)
#define MX_LOGIC_DATA_BULLETTYPECHANGEEFFECTVALUE_.CTOR_OFFSET UNITYSDK_OFFSET(0x12349B0)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int BulletTypeChangeEffectValue_TypeDefinitionIndex = 13857;

	class BulletTypeChangeEffectValue : public Il2CppObject
	{
	public:
		::MX::Logic::BattleEntities::LogicEffectEndCondition* _EndCondition_k__BackingField; // 0x48
		::System::Int32 _EndConditionArgument_k__BackingField; // 0x4C
		::FlatData::BulletType* _ChangeBulletType_k__BackingField; // 0x50
		Il2CppObject* _ChangeSkillCategoryList_k__BackingField; // 0x58
		::System::Boolean _Dispellable_k__BackingField; // 0x60

		::FlatData::BulletType* get_ChangeBulletType()
		{
			return ((::FlatData::BulletType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_BULLETTYPECHANGEEFFECTVALUE_GET_CHANGEBULLETTYPE_OFFSET))(nullptr);
		}

		Il2CppObject* get_ChangeSkillCategoryList()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_BULLETTYPECHANGEEFFECTVALUE_GET_CHANGESKILLCATEGORYLIST_OFFSET))(nullptr);
		}

		::MX::Logic::BattleEntities::LogicEffectEndCondition* get_EndCondition()
		{
			return ((::MX::Logic::BattleEntities::LogicEffectEndCondition*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_BULLETTYPECHANGEEFFECTVALUE_GET_ENDCONDITION_OFFSET))(nullptr);
		}

		::System::Int32 get_EndConditionArgument()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_BULLETTYPECHANGEEFFECTVALUE_GET_ENDCONDITIONARGUMENT_OFFSET))(nullptr);
		}

		::System::Boolean get_Dispellable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_BULLETTYPECHANGEEFFECTVALUE_GET_DISPELLABLE_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::GameData::DAO::Battle::BulletTypeChangeEffectDAO* arg)
		{
			((::System::Void(*)(::MX::GameData::DAO::Battle::BulletTypeChangeEffectDAO*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_BULLETTYPECHANGEEFFECTVALUE_.CTOR_OFFSET))(arg, nullptr);
		}

	};
}

