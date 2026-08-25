#pragma once
#include "../../../unitysdk.h"

namespace FlatData { class EndCondition; }
namespace MX::GameData::DAO::Battle { class ExtraSkillCostChangeEffectDAO; }

#define MX_LOGIC_DATA_EXTRASKILLCOSTCHANGEEFFECTVALUE_GET_DISPELLABLE_OFFSET UNITYSDK_OFFSET(0x1239C50)
#define MX_LOGIC_DATA_EXTRASKILLCOSTCHANGEEFFECTVALUE_GET_COEFFICIENT_OFFSET UNITYSDK_OFFSET(0x1239C60)
#define MX_LOGIC_DATA_EXTRASKILLCOSTCHANGEEFFECTVALUE_GET_ENDCONDITIONARGUMENT_OFFSET UNITYSDK_OFFSET(0x1239C70)
#define MX_LOGIC_DATA_EXTRASKILLCOSTCHANGEEFFECTVALUE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1239C80)
#define MX_LOGIC_DATA_EXTRASKILLCOSTCHANGEEFFECTVALUE_GET_ENDCONDITION_OFFSET UNITYSDK_OFFSET(0x1239D90)
#define MX_LOGIC_DATA_EXTRASKILLCOSTCHANGEEFFECTVALUE_GET_BASEAMOUNT_OFFSET UNITYSDK_OFFSET(0x1239DA0)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int ExtraSkillCostChangeEffectValue_TypeDefinitionIndex = 13886;

	class ExtraSkillCostChangeEffectValue : public Il2CppObject
	{
	public:
		::System::Int64 _BaseAmount_k__BackingField; // 0x48
		::System::Int64 _Coefficient_k__BackingField; // 0x50
		::FlatData::EndCondition* _EndCondition_k__BackingField; // 0x58
		::System::Int32 _EndConditionArgument_k__BackingField; // 0x5C
		::System::Boolean _Dispellable_k__BackingField; // 0x60

		::System::Boolean get_Dispellable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_EXTRASKILLCOSTCHANGEEFFECTVALUE_GET_DISPELLABLE_OFFSET))(nullptr);
		}

		::System::Int64 get_Coefficient()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_EXTRASKILLCOSTCHANGEEFFECTVALUE_GET_COEFFICIENT_OFFSET))(nullptr);
		}

		::System::Int32 get_EndConditionArgument()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_EXTRASKILLCOSTCHANGEEFFECTVALUE_GET_ENDCONDITIONARGUMENT_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::GameData::DAO::Battle::ExtraSkillCostChangeEffectDAO* arg)
		{
			((::System::Void(*)(::MX::GameData::DAO::Battle::ExtraSkillCostChangeEffectDAO*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_EXTRASKILLCOSTCHANGEEFFECTVALUE_.CTOR_OFFSET))(arg, nullptr);
		}

		::FlatData::EndCondition* get_EndCondition()
		{
			return ((::FlatData::EndCondition*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_EXTRASKILLCOSTCHANGEEFFECTVALUE_GET_ENDCONDITION_OFFSET))(nullptr);
		}

		::System::Int64 get_BaseAmount()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_EXTRASKILLCOSTCHANGEEFFECTVALUE_GET_BASEAMOUNT_OFFSET))(nullptr);
		}

	};
}

