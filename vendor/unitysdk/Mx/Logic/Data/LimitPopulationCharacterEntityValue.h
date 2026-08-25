#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Data { class OverLimitBehavior; }
namespace MX::Logic::Skills { class TargetSortRule; }
namespace MX::GameData::DAO::Battle { class LimitPopulationCharacterEntityDAO; }
namespace MX::Logic::Skills { class SkillSpecification; }
namespace MX::Logic::Skills { class TargetCandidateRule; }

#define MX_LOGIC_DATA_LIMITPOPULATIONCHARACTERENTITYVALUE_GET_OVERLIMITABILITY_OFFSET UNITYSDK_OFFSET(0x1247160)
#define MX_LOGIC_DATA_LIMITPOPULATIONCHARACTERENTITYVALUE_GET_POPULATIONGROUPID_OFFSET UNITYSDK_OFFSET(0x1247170)
#define MX_LOGIC_DATA_LIMITPOPULATIONCHARACTERENTITYVALUE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1247180)
#define MX_LOGIC_DATA_LIMITPOPULATIONCHARACTERENTITYVALUE_GET_OVERLIMITRULE_OFFSET UNITYSDK_OFFSET(0x1247540)
#define MX_LOGIC_DATA_LIMITPOPULATIONCHARACTERENTITYVALUE_GET_OVERLIMITTARGET_OFFSET UNITYSDK_OFFSET(0x1247550)
#define MX_LOGIC_DATA_LIMITPOPULATIONCHARACTERENTITYVALUE_GET_LIMITPOPULATION_OFFSET UNITYSDK_OFFSET(0x1247580)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int LimitPopulationCharacterEntityValue_TypeDefinitionIndex = 13966;

	class LimitPopulationCharacterEntityValue : public Il2CppObject
	{
	public:
		::System::Int32 _LimitPopulation_k__BackingField; // 0x1D0
		::System::String* _PopulationGroupId_k__BackingField; // 0x1D8
		::MX::Logic::Data::OverLimitBehavior* _OverLimitRule_k__BackingField; // 0x1E0
		Il2CppObject* _OverLimitAbility_k__BackingField; // 0x1E8
		::MX::Logic::Skills::TargetSortRule* _OverLimitTarget_k__BackingField; // 0x1F0

		Il2CppObject* get_OverLimitAbility()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_LIMITPOPULATIONCHARACTERENTITYVALUE_GET_OVERLIMITABILITY_OFFSET))(nullptr);
		}

		::System::String* get_PopulationGroupId()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_LIMITPOPULATIONCHARACTERENTITYVALUE_GET_POPULATIONGROUPID_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::GameData::DAO::Battle::LimitPopulationCharacterEntityDAO* arg, ::MX::Logic::Skills::SkillSpecification* arg2, ::System::Int32 arg3, ::MX::Logic::Skills::TargetCandidateRule* arg4, ::MX::Logic::Skills::TargetSortRule* arg5)
		{
			((::System::Void(*)(::MX::GameData::DAO::Battle::LimitPopulationCharacterEntityDAO*, ::MX::Logic::Skills::SkillSpecification*, ::System::Int32, ::MX::Logic::Skills::TargetCandidateRule*, ::MX::Logic::Skills::TargetSortRule*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_LIMITPOPULATIONCHARACTERENTITYVALUE_.CTOR_OFFSET))(arg, arg2, arg3, arg4, arg5, nullptr);
		}

		::MX::Logic::Data::OverLimitBehavior* get_OverLimitRule()
		{
			return ((::MX::Logic::Data::OverLimitBehavior*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_LIMITPOPULATIONCHARACTERENTITYVALUE_GET_OVERLIMITRULE_OFFSET))(nullptr);
		}

		::MX::Logic::Skills::TargetSortRule* get_OverLimitTarget()
		{
			return ((::MX::Logic::Skills::TargetSortRule*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_LIMITPOPULATIONCHARACTERENTITYVALUE_GET_OVERLIMITTARGET_OFFSET))(nullptr);
		}

		::System::Int32 get_LimitPopulation()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_LIMITPOPULATIONCHARACTERENTITYVALUE_GET_LIMITPOPULATION_OFFSET))(nullptr);
		}

	};
}

