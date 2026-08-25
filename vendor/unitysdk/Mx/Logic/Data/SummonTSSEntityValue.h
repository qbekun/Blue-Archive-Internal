#pragma once
#include "../../../unitysdk.h"

namespace MX::GameData::DAO::Battle { class SummonTSSEntityDAO; }
namespace MX::Logic::Skills { class TargetCandidateRule; }
namespace MX::Logic::Skills { class TargetSortRule; }

#define MX_LOGIC_DATA_SUMMONTSSENTITYVALUE_.CTOR_OFFSET UNITYSDK_OFFSET(0x124C300)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int SummonTSSEntityValue_TypeDefinitionIndex = 13982;

	class SummonTSSEntityValue : public Il2CppObject
	{
	public:
		::System::Void .ctor(::MX::GameData::DAO::Battle::SummonTSSEntityDAO* arg, ::System::Int32 arg2, ::MX::Logic::Skills::TargetCandidateRule* arg3, ::MX::Logic::Skills::TargetSortRule* arg4)
		{
			((::System::Void(*)(::MX::GameData::DAO::Battle::SummonTSSEntityDAO*, ::System::Int32, ::MX::Logic::Skills::TargetCandidateRule*, ::MX::Logic::Skills::TargetSortRule*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_SUMMONTSSENTITYVALUE_.CTOR_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

	};
}

