#pragma once
#include "../../../unitysdk.h"

namespace FlatData { class BulletType; }
namespace MX::Logic::BattleEntities { class LogicEffectEndCondition; }
namespace MX::GameData::DAO::Battle { class BulletArmorDamageFactorChangeEffectDAO; }

#define MX_LOGIC_DATA_BULLETARMORDAMAGEFACTORCHANGEEFFECTVALUE_GET_BULLETTYPE_OFFSET UNITYSDK_OFFSET(0x1234840)
#define MX_LOGIC_DATA_BULLETARMORDAMAGEFACTORCHANGEEFFECTVALUE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1234850)
#define MX_LOGIC_DATA_BULLETARMORDAMAGEFACTORCHANGEEFFECTVALUE_GET_DISPELLABLE_OFFSET UNITYSDK_OFFSET(0x1234910)
#define MX_LOGIC_DATA_BULLETARMORDAMAGEFACTORCHANGEEFFECTVALUE_GET_ADDDAMAGERATE_OFFSET UNITYSDK_OFFSET(0x1234920)
#define MX_LOGIC_DATA_BULLETARMORDAMAGEFACTORCHANGEEFFECTVALUE_GET_ENDCONDITIONARGUMENT_OFFSET UNITYSDK_OFFSET(0x1234930)
#define MX_LOGIC_DATA_BULLETARMORDAMAGEFACTORCHANGEEFFECTVALUE_GET_MULTIPLYDAMAGERATE_OFFSET UNITYSDK_OFFSET(0x1234940)
#define MX_LOGIC_DATA_BULLETARMORDAMAGEFACTORCHANGEEFFECTVALUE_GET_ENDCONDITION_OFFSET UNITYSDK_OFFSET(0x1234950)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int BulletArmorDamageFactorChangeEffectValue_TypeDefinitionIndex = 13856;

	class BulletArmorDamageFactorChangeEffectValue : public Il2CppObject
	{
	public:
		::FlatData::BulletType* _BulletType_k__BackingField; // 0x48
		::System::Int64 _AddDamageRate_k__BackingField; // 0x50
		::System::Int64 _MultiplyDamageRate_k__BackingField; // 0x58
		::MX::Logic::BattleEntities::LogicEffectEndCondition* _EndCondition_k__BackingField; // 0x60
		::System::Int32 _EndConditionArgument_k__BackingField; // 0x64
		::System::Boolean _Dispellable_k__BackingField; // 0x68

		::FlatData::BulletType* get_BulletType()
		{
			return ((::FlatData::BulletType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_BULLETARMORDAMAGEFACTORCHANGEEFFECTVALUE_GET_BULLETTYPE_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::GameData::DAO::Battle::BulletArmorDamageFactorChangeEffectDAO* arg)
		{
			((::System::Void(*)(::MX::GameData::DAO::Battle::BulletArmorDamageFactorChangeEffectDAO*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_BULLETARMORDAMAGEFACTORCHANGEEFFECTVALUE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_Dispellable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_BULLETARMORDAMAGEFACTORCHANGEEFFECTVALUE_GET_DISPELLABLE_OFFSET))(nullptr);
		}

		::System::Int64 get_AddDamageRate()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_BULLETARMORDAMAGEFACTORCHANGEEFFECTVALUE_GET_ADDDAMAGERATE_OFFSET))(nullptr);
		}

		::System::Int32 get_EndConditionArgument()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_BULLETARMORDAMAGEFACTORCHANGEEFFECTVALUE_GET_ENDCONDITIONARGUMENT_OFFSET))(nullptr);
		}

		::System::Int64 get_MultiplyDamageRate()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_BULLETARMORDAMAGEFACTORCHANGEEFFECTVALUE_GET_MULTIPLYDAMAGERATE_OFFSET))(nullptr);
		}

		::MX::Logic::BattleEntities::LogicEffectEndCondition* get_EndCondition()
		{
			return ((::MX::Logic::BattleEntities::LogicEffectEndCondition*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_BULLETARMORDAMAGEFACTORCHANGEEFFECTVALUE_GET_ENDCONDITION_OFFSET))(nullptr);
		}

	};
}

