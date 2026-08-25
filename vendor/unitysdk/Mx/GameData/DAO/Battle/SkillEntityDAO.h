#pragma once
#include "../../../../unitysdk.h"

namespace MX::Logic::Skills { class SkillApplyType; }
namespace MX::Logic::Data { class TransformDecideTiming; }
namespace MX::Logic::Skills { class SpawnPositionTypes; }
namespace UnityEngine { class Vector2; }
namespace MX::Logic::Skills { class SpawnDirectionTypes; }
namespace MX::Logic::Skills { class TargetSortRule; }
namespace MX::Logic::Skills { class EssentialCandidateRule; }
namespace MX::Logic::Skills { class OptionalCandidateRule; }
namespace MX::Logic::Data { class HighlightOption; }
namespace MX::Logic::Data { class SkillEntityValue; }
namespace MX::Logic::Skills { class SkillSpecification; }
namespace MX::Logic::Skills { class TargetCandidateRule; }

#define MX_GAMEDATA_DAO_BATTLE_SKILLENTITYDAO_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x1703370)
#define MX_GAMEDATA_DAO_BATTLE_SKILLENTITYDAO_.CTOR_OFFSET UNITYSDK_OFFSET(0x1703570)
#define MX_GAMEDATA_DAO_BATTLE_SKILLENTITYDAO_.CCTOR_OFFSET UNITYSDK_OFFSET(0x1703580)
#define MX_GAMEDATA_DAO_BATTLE_SKILLENTITYDAO_TOSKILLENTITYVALUE_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_GAMEDATA_DAO_BATTLE_SKILLENTITYDAO_GETSKILLABILITY_OFFSET UNITYSDK_OFFSET(0x1703590)

namespace MX::GameData::DAO::Battle
{
	inline static constexpr unsigned int SkillEntityDAO_TypeDefinitionIndex = 15480;

	class SkillEntityDAO : public Il2CppObject
	{
	public:
		::System::String* name; // 0x10
		::System::String* EntityName; // 0x18
		::System::Int64 SpawnRate; // 0x20
		::System::Int64 SpawnDelay; // 0x28
		::MX::Logic::Skills::SkillApplyType* ApplyType; // 0x30
		::MX::Logic::Data::TransformDecideTiming* DecideTiming; // 0x34
		::System::Boolean EntitySpawnIncludeOutOfRangeInputTarget; // 0x38
		::MX::Logic::Skills::SpawnPositionTypes* SpawnPositionType; // 0x3C
		::UnityEngine::Vector2* SpawnWorldPosition; // 0x40
		::UnityEngine::Vector2* PositionOffset; // 0x48
		::System::Int32 PositionRandomOffsetRange; // 0x50
		::MX::Logic::Skills::SpawnDirectionTypes* OffsetDirectionType; // 0x54
		::MX::Logic::Skills::SpawnDirectionTypes* SpawnDirectionType; // 0x58
		::System::Boolean OverrideTargetingRule; // 0x5C
		::MX::Logic::Skills::TargetSortRule* TargetSortRule; // 0x60
		::MX::Logic::Skills::EssentialCandidateRule* EssentialCandidateRule; // 0x88
		::MX::Logic::Skills::OptionalCandidateRule* OptionalCandidateRule; // 0x98
		::MX::Logic::Data::HighlightOption* HighlightOption; // 0x148
		::System::Boolean CheckSpawnPositionMovable; // 0x14C
		::System::Int32 TargetContainerIndex; // 0x150

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_SKILLENTITYDAO_REGISTERFORMATTER_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_SKILLENTITYDAO_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_SKILLENTITYDAO_.CCTOR_OFFSET))(nullptr);
		}

		::MX::Logic::Data::SkillEntityValue* ToSkillEntityValue(::MX::Logic::Skills::SkillSpecification* arg, ::System::Int32 arg, ::MX::Logic::Skills::TargetCandidateRule* arg, ::MX::Logic::Skills::TargetSortRule* arg)
		{
			return (return (::MX::Logic::Data::SkillEntityValue*(*)(::MX::Logic::Skills::SkillSpecification*, ::System::Int32, ::MX::Logic::Skills::TargetCandidateRule*, ::MX::Logic::Skills::TargetSortRule*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_SKILLENTITYDAO_TOSKILLENTITYVALUE_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		Il2CppObject* GetSkillAbility()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_SKILLENTITYDAO_GETSKILLABILITY_OFFSET))(nullptr);
		}

	};
}

