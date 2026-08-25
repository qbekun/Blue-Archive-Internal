#pragma once
#include "../../../../unitysdk.h"

namespace MX::Logic::Skills { class SpawnPositionTypes; }
namespace UnityEngine { class Vector2; }
namespace MX::Logic::Skills { class SpawnDirectionTypes; }
namespace MX::Logic::Data { class SkillEntityValue; }
namespace MX::Logic::Skills { class SkillSpecification; }
namespace MX::Logic::Skills { class TargetCandidateRule; }
namespace MX::Logic::Skills { class TargetSortRule; }
namespace MemoryPack { class MemoryPackReader&; }
namespace MX::GameData::DAO::Battle { class BeamEntityDAO&; }
namespace MemoryPack { class MemoryPackWriter&; }

#define MX_GAMEDATA_DAO_BATTLE_BEAMENTITYDAO_ISREMOVEENTITYIFSKILLCANCEL_OFFSET UNITYSDK_OFFSET(0x17CF9C0)
#define MX_GAMEDATA_DAO_BATTLE_BEAMENTITYDAO_TOSKILLENTITYVALUE_OFFSET UNITYSDK_OFFSET(0x17CF9D0)
#define MX_GAMEDATA_DAO_BATTLE_BEAMENTITYDAO_.CTOR_OFFSET UNITYSDK_OFFSET(0x17CFAE0)
#define MX_GAMEDATA_DAO_BATTLE_BEAMENTITYDAO_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x17CFB30)
#define MX_GAMEDATA_DAO_BATTLE_BEAMENTITYDAO_GETSKILLABILITY_OFFSET UNITYSDK_OFFSET(0x17D2C30)
#define MX_GAMEDATA_DAO_BATTLE_BEAMENTITYDAO_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x17D2CE0)
#define MX_GAMEDATA_DAO_BATTLE_BEAMENTITYDAO_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x17D34B0)
#define MX_GAMEDATA_DAO_BATTLE_BEAMENTITYDAO_.CCTOR_OFFSET UNITYSDK_OFFSET(0x17D4870)

namespace MX::GameData::DAO::Battle
{
	inline static constexpr unsigned int BeamEntityDAO_TypeDefinitionIndex = 15580;

	class BeamEntityDAO : public Il2CppObject
	{
	public:
		::MX::Logic::Skills::SpawnPositionTypes* DestinationType; // 0x158
		::UnityEngine::Vector2* DestinationWorldPosition; // 0x15C
		::UnityEngine::Vector2* DestinationPositionOffset; // 0x164
		::System::Int32 DestinationPositionRandomOffsetRange; // 0x16C
		::MX::Logic::Skills::SpawnDirectionTypes* DestinationOffsetDirectionType; // 0x170
		::System::Int64 ObbWidth; // 0x178
		::System::Int64 ExpansionDuration; // 0x180
		::System::Int64 KeepingDuration; // 0x188
		::System::Int64 ExtinctionDuration; // 0x190
		::System::Int64 ExtinctionHeadRate; // 0x198
		::System::Int64 ExtinctionTailRate; // 0x1A0
		::System::Boolean Piercing; // 0x1A8
		::System::Boolean FollowSpawnEntity; // 0x1A9
		::System::Boolean FollowTargetEntity; // 0x1AA
		::System::Boolean ApplyAbilityOnlyTarget; // 0x1AB
		::System::Int32 ApplyAbilityToHitTargetMaxCount; // 0x1AC
		Il2CppObject* IntervalAbilities; // 0x1B0
		Il2CppObject* TimelineAbilities; // 0x1B8
		Il2CppObject* Splashes; // 0x1C0
		Il2CppObject* ChainBeams; // 0x1C8
		::System::Boolean RemoveEntityIfSkillCancel; // 0x1D0

		::System::Boolean IsRemoveEntityIfSkillCancel()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_BEAMENTITYDAO_ISREMOVEENTITYIFSKILLCANCEL_OFFSET))(nullptr);
		}

		::MX::Logic::Data::SkillEntityValue* ToSkillEntityValue(::MX::Logic::Skills::SkillSpecification* arg, ::System::Int32 arg, ::MX::Logic::Skills::TargetCandidateRule* arg, ::MX::Logic::Skills::TargetSortRule* arg)
		{
			return (return (::MX::Logic::Data::SkillEntityValue*(*)(::MX::Logic::Skills::SkillSpecification*, ::System::Int32, ::MX::Logic::Skills::TargetCandidateRule*, ::MX::Logic::Skills::TargetSortRule*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_BEAMENTITYDAO_TOSKILLENTITYVALUE_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_BEAMENTITYDAO_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::GameData::DAO::Battle::BeamEntityDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::GameData::DAO::Battle::BeamEntityDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_BEAMENTITYDAO_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* GetSkillAbility()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_BEAMENTITYDAO_GETSKILLABILITY_OFFSET))(nullptr);
		}

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_BEAMENTITYDAO_REGISTERFORMATTER_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::GameData::DAO::Battle::BeamEntityDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::GameData::DAO::Battle::BeamEntityDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_BEAMENTITYDAO_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_BEAMENTITYDAO_.CCTOR_OFFSET))(nullptr);
		}

	};
}

