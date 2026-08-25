#pragma once
#include "../../../unitysdk.h"

namespace MX::GameData::DAO::Battle { class AttachedBattleItemEntityDAO; }
namespace MX::Logic::Skills { class SkillSpecification; }
namespace MX::Logic::Skills { class TargetCandidateRule; }
namespace MX::Logic::Skills { class TargetSortRule; }

#define MX_LOGIC_DATA_ATTACHEDBATTLEITEMENTITYVALUE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1241A50)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int AttachedBattleItemEntityValue_TypeDefinitionIndex = 13942;

	class AttachedBattleItemEntityValue : public ::UnityEngine::Rendering::Universal::PixelValidationChannels
	{
	public:
		::System::Void .ctor(::MX::GameData::DAO::Battle::AttachedBattleItemEntityDAO* arg, ::MX::Logic::Skills::SkillSpecification* arg2, ::System::Int32 arg3, ::MX::Logic::Skills::TargetCandidateRule* arg4, ::MX::Logic::Skills::TargetSortRule* arg5)
		{
			((::System::Void(*)(::MX::GameData::DAO::Battle::AttachedBattleItemEntityDAO*, ::MX::Logic::Skills::SkillSpecification*, ::System::Int32, ::MX::Logic::Skills::TargetCandidateRule*, ::MX::Logic::Skills::TargetSortRule*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_ATTACHEDBATTLEITEMENTITYVALUE_.CTOR_OFFSET))(arg, arg2, arg3, arg4, arg5, nullptr);
		}

	};
}

