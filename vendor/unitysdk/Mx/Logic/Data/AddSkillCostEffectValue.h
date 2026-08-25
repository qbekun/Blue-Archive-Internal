#pragma once
#include "../../../unitysdk.h"

namespace MX::GameData::DAO::Battle { class AddSkillCostEffectDAO; }

#define MX_LOGIC_DATA_ADDSKILLCOSTEFFECTVALUE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1233850)
#define MX_LOGIC_DATA_ADDSKILLCOSTEFFECTVALUE_GET_AMOUNT_OFFSET UNITYSDK_OFFSET(0x1233880)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int AddSkillCostEffectValue_TypeDefinitionIndex = 13847;

	class AddSkillCostEffectValue : public Il2CppObject
	{
	public:
		::System::Int64 _Amount_k__BackingField; // 0x48

		::System::Void .ctor(::MX::GameData::DAO::Battle::AddSkillCostEffectDAO* arg)
		{
			((::System::Void(*)(::MX::GameData::DAO::Battle::AddSkillCostEffectDAO*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_ADDSKILLCOSTEFFECTVALUE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_Amount()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_ADDSKILLCOSTEFFECTVALUE_GET_AMOUNT_OFFSET))(nullptr);
		}

	};
}

