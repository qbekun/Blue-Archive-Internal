#pragma once
#include "../../../unitysdk.h"

namespace MX::GameData::DAO::Battle { class SummonGroupSpawnerDAO; }
namespace MX::Logic::Skills { class SkillSpecification; }
namespace MX::Logic::Skills { class TargetCandidateRule; }
namespace MX::Logic::Skills { class TargetSortRule; }

#define MX_LOGIC_DATA_SUMMONGROUPSPAWNERVALUE_GET_GROUPVALUES_OFFSET UNITYSDK_OFFSET(0x124BB20)
#define MX_LOGIC_DATA_SUMMONGROUPSPAWNERVALUE_.CTOR_OFFSET UNITYSDK_OFFSET(0x124BB30)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int SummonGroupSpawnerValue_TypeDefinitionIndex = 13980;

	class SummonGroupSpawnerValue : public Il2CppObject
	{
	public:
		Il2CppObject* values; // 0x160

		Il2CppObject* get_GroupValues()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_SUMMONGROUPSPAWNERVALUE_GET_GROUPVALUES_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::GameData::DAO::Battle::SummonGroupSpawnerDAO* arg, ::MX::Logic::Skills::SkillSpecification* arg2, ::System::Int32 arg3, ::MX::Logic::Skills::TargetCandidateRule* arg4, ::MX::Logic::Skills::TargetSortRule* arg5)
		{
			((::System::Void(*)(::MX::GameData::DAO::Battle::SummonGroupSpawnerDAO*, ::MX::Logic::Skills::SkillSpecification*, ::System::Int32, ::MX::Logic::Skills::TargetCandidateRule*, ::MX::Logic::Skills::TargetSortRule*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_SUMMONGROUPSPAWNERVALUE_.CTOR_OFFSET))(arg, arg2, arg3, arg4, arg5, nullptr);
		}

	};
}

