#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Skills { class SkillApplyType; }
namespace MX::Logic::Data { class TransformDecideTiming; }
namespace MX::Logic::Skills { class SpawnPositionTypes; }
namespace UnityEngine { class Vector2; }
namespace MX::Logic::Skills { class SpawnDirectionTypes; }
namespace MX::Logic::Skills { class TargetSortRule; }
namespace MX::Logic::Skills { class EssentialCandidateRule; }
namespace MX::Logic::Skills { class OptionalCandidateRule; }
namespace MX::Logic::Data { class HighlightOption; }

#define MX_LOGIC_DATA_LEVELSKILLENTITYDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x11FA860)
#define MX_LOGIC_DATA_LEVELSKILLENTITYDATA_SHOULDSERIALIZETARGETCONTAINERINDEX_OFFSET UNITYSDK_OFFSET(0x11FC030)
#define MX_LOGIC_DATA_LEVELSKILLENTITYDATA_SHOULDSERIALIZEOPTIONALCANDIDATERULE_OFFSET UNITYSDK_OFFSET(0x11FC040)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int LevelSkillEntityData_TypeDefinitionIndex = 13715;

	class LevelSkillEntityData : public Il2CppObject
	{
	public:
		::System::String* EntityName; // 0x10
		::System::Int64 SpawnRate; // 0x18
		::System::Int64 SpawnDelay; // 0x20
		::MX::Logic::Skills::SkillApplyType* ApplyType; // 0x28
		::MX::Logic::Data::TransformDecideTiming* DecideTiming; // 0x2C
		::System::Boolean EntitySpawnIncludeOutOfRangeInputTarget; // 0x30
		::MX::Logic::Skills::SpawnPositionTypes* SpawnPositionType; // 0x34
		::UnityEngine::Vector2* SpawnWorldPosition; // 0x38
		::UnityEngine::Vector2* PositionOffset; // 0x40
		::System::Int32 PositionRandomOffsetRange; // 0x48
		::MX::Logic::Skills::SpawnDirectionTypes* OffsetDirectionType; // 0x4C
		::MX::Logic::Skills::SpawnDirectionTypes* SpawnDirectionType; // 0x50
		::System::Boolean OverrideTargetingRule; // 0x54
		::MX::Logic::Skills::TargetSortRule* TargetSortRule; // 0x58
		::MX::Logic::Skills::EssentialCandidateRule* EssentialCandidateRule; // 0x80
		::MX::Logic::Skills::OptionalCandidateRule* OptionalCandidateRule; // 0x90
		::MX::Logic::Data::HighlightOption* HighlightOption; // 0x140
		::System::Boolean CheckSpawnPositionMovable; // 0x144
		::System::Int32 TargetContainerIndex; // 0x148

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_LEVELSKILLENTITYDATA_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean ShouldSerializeTargetContainerIndex()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_LEVELSKILLENTITYDATA_SHOULDSERIALIZETARGETCONTAINERINDEX_OFFSET))(nullptr);
		}

		::System::Boolean ShouldSerializeOptionalCandidateRule()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_LEVELSKILLENTITYDATA_SHOULDSERIALIZEOPTIONALCANDIDATERULE_OFFSET))(nullptr);
		}

	};
}

