#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Skills { class TargetEntityType; }
namespace MX::GameData::DAO::Battle { class RootMotionMoveDAO; }
namespace MX::Logic::Skills { class SkillSpecification; }
namespace MX::Logic::Skills { class TargetCandidateRule; }
namespace MX::Logic::Skills { class TargetSortRule; }
namespace MX::GameData::DAO::Battle { class RootMotionMoveWithSpeedDAO; }

#define MX_LOGIC_DATA_LEVELROOTMOTIONMOVEVALUE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1246FD0)
#define MX_LOGIC_DATA_LEVELROOTMOTIONMOVEVALUE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1247090)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int LevelRootMotionMoveValue_TypeDefinitionIndex = 13965;

	class LevelRootMotionMoveValue : public Il2CppObject
	{
	public:
		::MX::Logic::Skills::TargetEntityType* CheckCollisionType; // 0x160
		::System::Int64 MoveSpeed; // 0x168
		::System::Single MoveSpeedInMeter; // 0x170
		::System::Boolean IgnoreMovableCheckInMove; // 0x174

		::System::Void .ctor(::MX::GameData::DAO::Battle::RootMotionMoveDAO* arg, ::MX::Logic::Skills::SkillSpecification* arg2, ::System::Int32 arg3, ::MX::Logic::Skills::TargetCandidateRule* arg4, ::MX::Logic::Skills::TargetSortRule* arg5)
		{
			((::System::Void(*)(::MX::GameData::DAO::Battle::RootMotionMoveDAO*, ::MX::Logic::Skills::SkillSpecification*, ::System::Int32, ::MX::Logic::Skills::TargetCandidateRule*, ::MX::Logic::Skills::TargetSortRule*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_LEVELROOTMOTIONMOVEVALUE_.CTOR_OFFSET))(arg, arg2, arg3, arg4, arg5, nullptr);
		}

		::System::Void .ctor(::MX::GameData::DAO::Battle::RootMotionMoveWithSpeedDAO* arg, ::MX::Logic::Skills::SkillSpecification* arg2, ::System::Int32 arg3, ::MX::Logic::Skills::TargetCandidateRule* arg4, ::MX::Logic::Skills::TargetSortRule* arg5)
		{
			((::System::Void(*)(::MX::GameData::DAO::Battle::RootMotionMoveWithSpeedDAO*, ::MX::Logic::Skills::SkillSpecification*, ::System::Int32, ::MX::Logic::Skills::TargetCandidateRule*, ::MX::Logic::Skills::TargetSortRule*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_LEVELROOTMOTIONMOVEVALUE_.CTOR_OFFSET))(arg, arg2, arg3, arg4, arg5, nullptr);
		}

	};
}

