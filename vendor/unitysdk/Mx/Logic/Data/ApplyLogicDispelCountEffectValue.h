#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Data { class DispelActionType; }
namespace FlatData { class EndCondition; }
namespace MX::GameData::DAO::Battle { class ApplyLogicDispelCountEffectDAO; }

#define MX_LOGIC_DATA_APPLYLOGICDISPELCOUNTEFFECTVALUE_GET_DISPELACTIONTYPE_OFFSET UNITYSDK_OFFSET(0x1233E40)
#define MX_LOGIC_DATA_APPLYLOGICDISPELCOUNTEFFECTVALUE_GET_DISPELLABLE_OFFSET UNITYSDK_OFFSET(0x1233E50)
#define MX_LOGIC_DATA_APPLYLOGICDISPELCOUNTEFFECTVALUE_GET_IGNORELOGICEFFECTGROUPID_OFFSET UNITYSDK_OFFSET(0x1233E60)
#define MX_LOGIC_DATA_APPLYLOGICDISPELCOUNTEFFECTVALUE_GET_ENDCONDITION_OFFSET UNITYSDK_OFFSET(0x1233E70)
#define MX_LOGIC_DATA_APPLYLOGICDISPELCOUNTEFFECTVALUE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1233E80)
#define MX_LOGIC_DATA_APPLYLOGICDISPELCOUNTEFFECTVALUE_GET_APPLYLOGICEFFECTVALUELIST_OFFSET UNITYSDK_OFFSET(0x1234390)
#define MX_LOGIC_DATA_APPLYLOGICDISPELCOUNTEFFECTVALUE_GET_DISPELCOUNTCONDITION_OFFSET UNITYSDK_OFFSET(0x12343A0)
#define MX_LOGIC_DATA_APPLYLOGICDISPELCOUNTEFFECTVALUE_GET_COUNTTARGETCATEGORY_OFFSET UNITYSDK_OFFSET(0x12343B0)
#define MX_LOGIC_DATA_APPLYLOGICDISPELCOUNTEFFECTVALUE_GET_ENDCONDITIONARGUMENT_OFFSET UNITYSDK_OFFSET(0x12343C0)
#define MX_LOGIC_DATA_APPLYLOGICDISPELCOUNTEFFECTVALUE_GET_ISALLCATEGORY_OFFSET UNITYSDK_OFFSET(0x12343D0)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int ApplyLogicDispelCountEffectValue_TypeDefinitionIndex = 13851;

	class ApplyLogicDispelCountEffectValue : public Il2CppObject
	{
	public:
		::MX::Logic::Data::DispelActionType* _DispelActionType_k__BackingField; // 0x48
		::System::Int32 _DispelCountCondition_k__BackingField; // 0x4C
		Il2CppObject* _ApplyLogicEffectValueList_k__BackingField; // 0x50
		::FlatData::EndCondition* _EndCondition_k__BackingField; // 0x58
		::System::Int32 _EndConditionArgument_k__BackingField; // 0x5C
		::System::Boolean _Dispellable_k__BackingField; // 0x60
		Il2CppObject* _IgnoreLogicEffectGroupId_k__BackingField; // 0x68
		Il2CppObject* _CountTargetCategory_k__BackingField; // 0x70
		::System::Boolean _IsAllCategory_k__BackingField; // 0x78

		::MX::Logic::Data::DispelActionType* get_DispelActionType()
		{
			return ((::MX::Logic::Data::DispelActionType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_APPLYLOGICDISPELCOUNTEFFECTVALUE_GET_DISPELACTIONTYPE_OFFSET))(nullptr);
		}

		::System::Boolean get_Dispellable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_APPLYLOGICDISPELCOUNTEFFECTVALUE_GET_DISPELLABLE_OFFSET))(nullptr);
		}

		Il2CppObject* get_IgnoreLogicEffectGroupId()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_APPLYLOGICDISPELCOUNTEFFECTVALUE_GET_IGNORELOGICEFFECTGROUPID_OFFSET))(nullptr);
		}

		::FlatData::EndCondition* get_EndCondition()
		{
			return ((::FlatData::EndCondition*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_APPLYLOGICDISPELCOUNTEFFECTVALUE_GET_ENDCONDITION_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::GameData::DAO::Battle::ApplyLogicDispelCountEffectDAO* arg)
		{
			((::System::Void(*)(::MX::GameData::DAO::Battle::ApplyLogicDispelCountEffectDAO*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_APPLYLOGICDISPELCOUNTEFFECTVALUE_.CTOR_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_ApplyLogicEffectValueList()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_APPLYLOGICDISPELCOUNTEFFECTVALUE_GET_APPLYLOGICEFFECTVALUELIST_OFFSET))(nullptr);
		}

		::System::Int32 get_DispelCountCondition()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_APPLYLOGICDISPELCOUNTEFFECTVALUE_GET_DISPELCOUNTCONDITION_OFFSET))(nullptr);
		}

		Il2CppObject* get_CountTargetCategory()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_APPLYLOGICDISPELCOUNTEFFECTVALUE_GET_COUNTTARGETCATEGORY_OFFSET))(nullptr);
		}

		::System::Int32 get_EndConditionArgument()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_APPLYLOGICDISPELCOUNTEFFECTVALUE_GET_ENDCONDITIONARGUMENT_OFFSET))(nullptr);
		}

		::System::Boolean get_IsAllCategory()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_APPLYLOGICDISPELCOUNTEFFECTVALUE_GET_ISALLCATEGORY_OFFSET))(nullptr);
		}

	};
}

