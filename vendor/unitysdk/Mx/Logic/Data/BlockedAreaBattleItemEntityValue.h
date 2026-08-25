#pragma once
#include "../../../unitysdk.h"

namespace MX::GameData::DAO::Battle { class BlockedAreaBattleItemEntityDAO; }
namespace MX::Logic::Skills { class SkillSpecification; }
namespace MX::Logic::Skills { class TargetCandidateRule; }
namespace MX::Logic::Skills { class TargetSortRule; }

#define MX_LOGIC_DATA_BLOCKEDAREABATTLEITEMENTITYVALUE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1245030)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int BlockedAreaBattleItemEntityValue_TypeDefinitionIndex = 13954;

	class BlockedAreaBattleItemEntityValue : public ::UnityEngine::Rendering::Universal::PixelValidationChannels
	{
	public:
		::System::Void .ctor(::MX::GameData::DAO::Battle::BlockedAreaBattleItemEntityDAO* arg, ::MX::Logic::Skills::SkillSpecification* arg2, ::System::Int32 arg3, ::MX::Logic::Skills::TargetCandidateRule* arg4, ::MX::Logic::Skills::TargetSortRule* arg5)
		{
			((::System::Void(*)(::MX::GameData::DAO::Battle::BlockedAreaBattleItemEntityDAO*, ::MX::Logic::Skills::SkillSpecification*, ::System::Int32, ::MX::Logic::Skills::TargetCandidateRule*, ::MX::Logic::Skills::TargetSortRule*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_BLOCKEDAREABATTLEITEMENTITYVALUE_.CTOR_OFFSET))(arg, arg2, arg3, arg4, arg5, nullptr);
		}

	};
}

