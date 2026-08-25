#pragma once
#include "../../../unitysdk.h"

namespace MX::GameData::DAO::Battle { class NontargetDestructibleOnRailsProjectileEntityDAO; }
namespace MX::Logic::Skills { class SkillSpecification; }
namespace MX::Logic::Skills { class TargetCandidateRule; }
namespace MX::Logic::Skills { class TargetSortRule; }

#define MX_LOGIC_DATA_LEVELNONTARGETDESTRUCTIBLEONRAILSPROJECTILEENTITYVALUE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1246BF0)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int LevelNontargetDestructibleOnRailsProjectileEntityValue_TypeDefinitionIndex = 13964;

	class LevelNontargetDestructibleOnRailsProjectileEntityValue : public Il2CppObject
	{
	public:
		::System::Boolean UseMovePoints; // 0x220
		Il2CppObject* MovePointCommandIdList; // 0x228
		::System::Boolean RepeatMove; // 0x230
		::System::Boolean AllowDuplicateHit; // 0x231

		::System::Void .ctor(::MX::GameData::DAO::Battle::NontargetDestructibleOnRailsProjectileEntityDAO* arg, ::MX::Logic::Skills::SkillSpecification* arg2, ::System::Int32 arg3, ::MX::Logic::Skills::TargetCandidateRule* arg4, ::MX::Logic::Skills::TargetSortRule* arg5)
		{
			((::System::Void(*)(::MX::GameData::DAO::Battle::NontargetDestructibleOnRailsProjectileEntityDAO*, ::MX::Logic::Skills::SkillSpecification*, ::System::Int32, ::MX::Logic::Skills::TargetCandidateRule*, ::MX::Logic::Skills::TargetSortRule*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_LEVELNONTARGETDESTRUCTIBLEONRAILSPROJECTILEENTITYVALUE_.CTOR_OFFSET))(arg, arg2, arg3, arg4, arg5, nullptr);
		}

	};
}

