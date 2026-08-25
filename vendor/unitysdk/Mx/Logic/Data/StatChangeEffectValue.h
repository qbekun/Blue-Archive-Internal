#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Data { class StatChangeEffectValue; }
namespace FlatData { class StatType; }
namespace FlatData { class EndCondition; }
namespace MX::Logic::Skills { class SkillType; }
namespace MX::GameData::DAO::Battle { class StatChangeEffectDAO; }
namespace MX::Logic::Skills::LogicEffects { class StatChangeEffect; }

#define MX_LOGIC_DATA_STATCHANGEEFFECTVALUE_GET_STATTYPE_OFFSET UNITYSDK_OFFSET(0x123FAB0)
#define MX_LOGIC_DATA_STATCHANGEEFFECTVALUE_GET_ENDCONDITION_OFFSET UNITYSDK_OFFSET(0x123FAC0)
#define MX_LOGIC_DATA_STATCHANGEEFFECTVALUE_GET_ENDCONDITIONARGUMENTFIRST_OFFSET UNITYSDK_OFFSET(0x123FAD0)
#define MX_LOGIC_DATA_STATCHANGEEFFECTVALUE_GET_ENDCONDITIONARGUMENTSECOND_OFFSET UNITYSDK_OFFSET(0x123FAE0)
#define MX_LOGIC_DATA_STATCHANGEEFFECTVALUE_GET_REMOVECONDITION_OFFSET UNITYSDK_OFFSET(0x123FAF0)
#define MX_LOGIC_DATA_STATCHANGEEFFECTVALUE_GET_REMOVECONDITIONARGUMENTFIRST_OFFSET UNITYSDK_OFFSET(0x123FB00)
#define MX_LOGIC_DATA_STATCHANGEEFFECTVALUE_GET_REMOVECONDITIONARGUMENTSECOND_OFFSET UNITYSDK_OFFSET(0x123FB10)
#define MX_LOGIC_DATA_STATCHANGEEFFECTVALUE_GET_BASEAMOUNT_OFFSET UNITYSDK_OFFSET(0x123FB20)
#define MX_LOGIC_DATA_STATCHANGEEFFECTVALUE_GET_CASTERCOEFFICIENTAMOUNT_OFFSET UNITYSDK_OFFSET(0x123FB30)
#define MX_LOGIC_DATA_STATCHANGEEFFECTVALUE_GET_CASTERSTATTYPE_OFFSET UNITYSDK_OFFSET(0x123FB40)
#define MX_LOGIC_DATA_STATCHANGEEFFECTVALUE_GET_TARGETCOEFFICIENTAMOUNT_OFFSET UNITYSDK_OFFSET(0x123FB50)
#define MX_LOGIC_DATA_STATCHANGEEFFECTVALUE_GET_DISPELLABLE_OFFSET UNITYSDK_OFFSET(0x123FB60)
#define MX_LOGIC_DATA_STATCHANGEEFFECTVALUE_GET_STACKSAMEEFFECTCOUNT_OFFSET UNITYSDK_OFFSET(0x123FB70)
#define MX_LOGIC_DATA_STATCHANGEEFFECTVALUE_GET_EXPIREOLDIFSTACKCOUNTOVER_OFFSET UNITYSDK_OFFSET(0x123FB80)
#define MX_LOGIC_DATA_STATCHANGEEFFECTVALUE_GET_CHANGERATEBYCOSTLIST_OFFSET UNITYSDK_OFFSET(0x123FB90)
#define MX_LOGIC_DATA_STATCHANGEEFFECTVALUE_GET_OVERRIDESKILLTYPE_OFFSET UNITYSDK_OFFSET(0x123FBA0)
#define MX_LOGIC_DATA_STATCHANGEEFFECTVALUE_.CTOR_OFFSET UNITYSDK_OFFSET(0x123FBB0)
#define MX_LOGIC_DATA_STATCHANGEEFFECTVALUE_.CTOR_OFFSET UNITYSDK_OFFSET(0x123FE40)
#define MX_LOGIC_DATA_STATCHANGEEFFECTVALUE_.CTOR_OFFSET UNITYSDK_OFFSET(0x123FFE0)
#define MX_LOGIC_DATA_STATCHANGEEFFECTVALUE_.CCTOR_OFFSET UNITYSDK_OFFSET(0x1240000)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int StatChangeEffectValue_TypeDefinitionIndex = 13929;

	class StatChangeEffectValue : public Il2CppObject
	{
	public:
		::MX::Logic::Data::StatChangeEffectValue* Empty; // 0x0
		::FlatData::StatType* _StatType_k__BackingField; // 0x48
		::FlatData::EndCondition* _EndCondition_k__BackingField; // 0x4C
		::System::String* _EndConditionArgumentFirst_k__BackingField; // 0x50
		::System::String* _EndConditionArgumentSecond_k__BackingField; // 0x58
		::FlatData::EndCondition* _RemoveCondition_k__BackingField; // 0x60
		::System::String* _RemoveConditionArgumentFirst_k__BackingField; // 0x68
		::System::String* _RemoveConditionArgumentSecond_k__BackingField; // 0x70
		::System::Int64 _BaseAmount_k__BackingField; // 0x78
		::System::Int64 _CasterCoefficientAmount_k__BackingField; // 0x80
		::FlatData::StatType* _CasterStatType_k__BackingField; // 0x88
		::System::Int64 _TargetCoefficientAmount_k__BackingField; // 0x90
		::System::Boolean _Dispellable_k__BackingField; // 0x98
		::System::Int32 _StackSameEffectCount_k__BackingField; // 0x9C
		::System::Boolean _ExpireOldIfStackCountOver_k__BackingField; // 0xA0
		::Il2CppArray<::System::Object*>* _ChangeRateByCostList_k__BackingField; // 0xA8
		::MX::Logic::Skills::SkillType* _OverrideSkillType_k__BackingField; // 0xB0

		::FlatData::StatType* get_StatType()
		{
			return ((::FlatData::StatType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_STATCHANGEEFFECTVALUE_GET_STATTYPE_OFFSET))(nullptr);
		}

		::FlatData::EndCondition* get_EndCondition()
		{
			return ((::FlatData::EndCondition*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_STATCHANGEEFFECTVALUE_GET_ENDCONDITION_OFFSET))(nullptr);
		}

		::System::String* get_EndConditionArgumentFirst()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_STATCHANGEEFFECTVALUE_GET_ENDCONDITIONARGUMENTFIRST_OFFSET))(nullptr);
		}

		::System::String* get_EndConditionArgumentSecond()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_STATCHANGEEFFECTVALUE_GET_ENDCONDITIONARGUMENTSECOND_OFFSET))(nullptr);
		}

		::FlatData::EndCondition* get_RemoveCondition()
		{
			return ((::FlatData::EndCondition*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_STATCHANGEEFFECTVALUE_GET_REMOVECONDITION_OFFSET))(nullptr);
		}

		::System::String* get_RemoveConditionArgumentFirst()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_STATCHANGEEFFECTVALUE_GET_REMOVECONDITIONARGUMENTFIRST_OFFSET))(nullptr);
		}

		::System::String* get_RemoveConditionArgumentSecond()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_STATCHANGEEFFECTVALUE_GET_REMOVECONDITIONARGUMENTSECOND_OFFSET))(nullptr);
		}

		::System::Int64 get_BaseAmount()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_STATCHANGEEFFECTVALUE_GET_BASEAMOUNT_OFFSET))(nullptr);
		}

		::System::Int64 get_CasterCoefficientAmount()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_STATCHANGEEFFECTVALUE_GET_CASTERCOEFFICIENTAMOUNT_OFFSET))(nullptr);
		}

		::FlatData::StatType* get_CasterStatType()
		{
			return ((::FlatData::StatType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_STATCHANGEEFFECTVALUE_GET_CASTERSTATTYPE_OFFSET))(nullptr);
		}

		::System::Int64 get_TargetCoefficientAmount()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_STATCHANGEEFFECTVALUE_GET_TARGETCOEFFICIENTAMOUNT_OFFSET))(nullptr);
		}

		::System::Boolean get_Dispellable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_STATCHANGEEFFECTVALUE_GET_DISPELLABLE_OFFSET))(nullptr);
		}

		::System::Int32 get_StackSameEffectCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_STATCHANGEEFFECTVALUE_GET_STACKSAMEEFFECTCOUNT_OFFSET))(nullptr);
		}

		::System::Boolean get_ExpireOldIfStackCountOver()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_STATCHANGEEFFECTVALUE_GET_EXPIREOLDIFSTACKCOUNTOVER_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* get_ChangeRateByCostList()
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_STATCHANGEEFFECTVALUE_GET_CHANGERATEBYCOSTLIST_OFFSET))(nullptr);
		}

		::MX::Logic::Skills::SkillType* get_OverrideSkillType()
		{
			return ((::MX::Logic::Skills::SkillType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_STATCHANGEEFFECTVALUE_GET_OVERRIDESKILLTYPE_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::GameData::DAO::Battle::StatChangeEffectDAO* arg)
		{
			((::System::Void(*)(::MX::GameData::DAO::Battle::StatChangeEffectDAO*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_STATCHANGEEFFECTVALUE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::MX::Logic::Skills::LogicEffects::StatChangeEffect* arg)
		{
			((::System::Void(*)(::MX::Logic::Skills::LogicEffects::StatChangeEffect*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_STATCHANGEEFFECTVALUE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_STATCHANGEEFFECTVALUE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_STATCHANGEEFFECTVALUE_.CCTOR_OFFSET))(nullptr);
		}

	};
}

