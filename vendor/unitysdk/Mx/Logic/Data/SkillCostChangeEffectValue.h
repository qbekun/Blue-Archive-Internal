#pragma once
#include "../../../unitysdk.h"

namespace FlatData { class EndCondition; }
namespace MX::GameData::DAO::Battle { class SkillCostChangeEffectDAO; }

#define MX_LOGIC_DATA_SKILLCOSTCHANGEEFFECTVALUE_GET_COEFFICIENT_OFFSET UNITYSDK_OFFSET(0x123EEF0)
#define MX_LOGIC_DATA_SKILLCOSTCHANGEEFFECTVALUE_GET_APPLYLOGICEFFECTSONENDCONDITIONARGUMENTCHANGE_OFFSET UNITYSDK_OFFSET(0x123EF00)
#define MX_LOGIC_DATA_SKILLCOSTCHANGEEFFECTVALUE_GET_ENDCONDITIONARGUMENT_OFFSET UNITYSDK_OFFSET(0x123EF10)
#define MX_LOGIC_DATA_SKILLCOSTCHANGEEFFECTVALUE_GET_ENDCONDITION_OFFSET UNITYSDK_OFFSET(0x123EF20)
#define MX_LOGIC_DATA_SKILLCOSTCHANGEEFFECTVALUE_GET_BASEAMOUNT_OFFSET UNITYSDK_OFFSET(0x123EF30)
#define MX_LOGIC_DATA_SKILLCOSTCHANGEEFFECTVALUE_.CTOR_OFFSET UNITYSDK_OFFSET(0x123EF40)
#define MX_LOGIC_DATA_SKILLCOSTCHANGEEFFECTVALUE_GET_DISPELLABLE_OFFSET UNITYSDK_OFFSET(0x123F1D0)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int SkillCostChangeEffectValue_TypeDefinitionIndex = 13925;

	class SkillCostChangeEffectValue : public Il2CppObject
	{
	public:
		::System::Int64 _BaseAmount_k__BackingField; // 0x48
		::System::Int64 _Coefficient_k__BackingField; // 0x50
		::FlatData::EndCondition* _EndCondition_k__BackingField; // 0x58
		::System::Int32 _EndConditionArgument_k__BackingField; // 0x5C
		Il2CppObject* _ApplyLogicEffectsOnEndConditionArgumentChange_k__BackingField; // 0x60
		::System::Boolean _Dispellable_k__BackingField; // 0x68

		::System::Int64 get_Coefficient()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_SKILLCOSTCHANGEEFFECTVALUE_GET_COEFFICIENT_OFFSET))(nullptr);
		}

		Il2CppObject* get_ApplyLogicEffectsOnEndConditionArgumentChange()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_SKILLCOSTCHANGEEFFECTVALUE_GET_APPLYLOGICEFFECTSONENDCONDITIONARGUMENTCHANGE_OFFSET))(nullptr);
		}

		::System::Int32 get_EndConditionArgument()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_SKILLCOSTCHANGEEFFECTVALUE_GET_ENDCONDITIONARGUMENT_OFFSET))(nullptr);
		}

		::FlatData::EndCondition* get_EndCondition()
		{
			return ((::FlatData::EndCondition*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_SKILLCOSTCHANGEEFFECTVALUE_GET_ENDCONDITION_OFFSET))(nullptr);
		}

		::System::Int64 get_BaseAmount()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_SKILLCOSTCHANGEEFFECTVALUE_GET_BASEAMOUNT_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::GameData::DAO::Battle::SkillCostChangeEffectDAO* arg)
		{
			((::System::Void(*)(::MX::GameData::DAO::Battle::SkillCostChangeEffectDAO*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_SKILLCOSTCHANGEEFFECTVALUE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_Dispellable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_SKILLCOSTCHANGEEFFECTVALUE_GET_DISPELLABLE_OFFSET))(nullptr);
		}

	};
}

