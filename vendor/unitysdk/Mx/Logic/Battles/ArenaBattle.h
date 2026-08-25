#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Battles { class PlayerGroup; }
namespace MX::Logic::Data { class BattleSetting; }
namespace MX::Logic::Battles { class GroupTag; }
namespace MX::Logic::Battles { class BattleEndType; }
namespace MX::Logic::Battles::Summary { class BattleSummary; }
namespace MX::Logic::Battles { class CharacterGroup; }
namespace MX::Core::Math { class BasisPoint; }

#define MX_LOGIC_BATTLES_ARENABATTLE_INITFORMATIONS_OFFSET UNITYSDK_OFFSET(0x124ECA0)
#define MX_LOGIC_BATTLES_ARENABATTLE_PROCESSGAMEEND_OFFSET UNITYSDK_OFFSET(0x124F120)
#define MX_LOGIC_BATTLES_ARENABATTLE_DECIDEWINNER_OFFSET UNITYSDK_OFFSET(0x124F2F0)
#define MX_LOGIC_BATTLES_ARENABATTLE_PREPAREGROUP_OFFSET UNITYSDK_OFFSET(0x1251F00)
#define MX_LOGIC_BATTLES_ARENABATTLE_SPAWNPLAYERCHARACTERS_OFFSET UNITYSDK_OFFSET(0x1251FE0)
#define MX_LOGIC_BATTLES_ARENABATTLE_SKIPBATTLE_OFFSET UNITYSDK_OFFSET(0x1252880)
#define MX_LOGIC_BATTLES_ARENABATTLE_INITGROUPS_OFFSET UNITYSDK_OFFSET(0x1252990)
#define MX_LOGIC_BATTLES_ARENABATTLE_GET_ENEMYGROUP_OFFSET UNITYSDK_OFFSET(0x1252B50)
#define MX_LOGIC_BATTLES_ARENABATTLE_GETCHARACTERGROUPHPRATE_OFFSET UNITYSDK_OFFSET(0x1251CB0)
#define MX_LOGIC_BATTLES_ARENABATTLE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1252B60)

namespace MX::Logic::Battles
{
	inline static constexpr unsigned int ArenaBattle_TypeDefinitionIndex = 13989;

	class ArenaBattle : public ::Spine::Unity::Playables::SkeletonAnimationPlayableHandle
	{
	public:
		::MX::Logic::Battles::PlayerGroup* enemyGroup; // 0x330

		::System::Void InitFormations(::MX::Logic::Data::BattleSetting* arg)
		{
			((::System::Void(*)(::MX::Logic::Data::BattleSetting*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_ARENABATTLE_INITFORMATIONS_OFFSET))(arg, nullptr);
		}

		::System::Void ProcessGameEnd()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_ARENABATTLE_PROCESSGAMEEND_OFFSET))(nullptr);
		}

		::MX::Logic::Battles::GroupTag* DecideWinner(::MX::Logic::Battles::BattleEndType* arg)
		{
			return ((::MX::Logic::Battles::GroupTag*(*)(::MX::Logic::Battles::BattleEndType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_ARENABATTLE_DECIDEWINNER_OFFSET))(arg, nullptr);
		}

		::System::Void PrepareGroup()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_ARENABATTLE_PREPAREGROUP_OFFSET))(nullptr);
		}

		::System::Void SpawnPlayerCharacters(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_ARENABATTLE_SPAWNPLAYERCHARACTERS_OFFSET))(arg, nullptr);
		}

		::System::Void SkipBattle(::MX::Logic::Battles::Summary::BattleSummary* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Summary::BattleSummary*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_ARENABATTLE_SKIPBATTLE_OFFSET))(arg, nullptr);
		}

		::System::Void InitGroups(::MX::Logic::Data::BattleSetting* arg)
		{
			((::System::Void(*)(::MX::Logic::Data::BattleSetting*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_ARENABATTLE_INITGROUPS_OFFSET))(arg, nullptr);
		}

		::MX::Logic::Battles::CharacterGroup* get_EnemyGroup()
		{
			return ((::MX::Logic::Battles::CharacterGroup*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_ARENABATTLE_GET_ENEMYGROUP_OFFSET))(nullptr);
		}

		::MX::Core::Math::BasisPoint* GetCharacterGroupHPRate(::MX::Logic::Battles::CharacterGroup* arg)
		{
			return ((::MX::Core::Math::BasisPoint*(*)(::MX::Logic::Battles::CharacterGroup*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_ARENABATTLE_GETCHARACTERGROUPHPRATE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::MX::Logic::Data::BattleSetting* arg)
		{
			((::System::Void(*)(::MX::Logic::Data::BattleSetting*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_ARENABATTLE_.CTOR_OFFSET))(arg, nullptr);
		}

	};
}

