#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Battles { class CharacterGroup; }
namespace MX::Logic::Data { class BattleSetting; }
namespace MX::Logic::Battles { class GroupTag; }
namespace MX::Logic::Battles { class BattleEndType; }
namespace MX::Logic::BattleEntities { class TSSCharacter; }
namespace UnityEngine { class Vector2; }
namespace MX::Logic::Data { class HeroSetting; }
namespace MX::Logic::BattleEntities { class BattleEntity; }

#define MX_LOGIC_BATTLES_WEEKDUNGEONBATTLE_INITGROUPS_OFFSET UNITYSDK_OFFSET(0x129FF00)
#define MX_LOGIC_BATTLES_WEEKDUNGEONBATTLE_PREPAREGROUP_OFFSET UNITYSDK_OFFSET(0x129FFC0)
#define MX_LOGIC_BATTLES_WEEKDUNGEONBATTLE_DECIDEWINNER_OFFSET UNITYSDK_OFFSET(0x12A0110)
#define MX_LOGIC_BATTLES_WEEKDUNGEONBATTLE_.CTOR_OFFSET UNITYSDK_OFFSET(0x12A0120)
#define MX_LOGIC_BATTLES_WEEKDUNGEONBATTLE_SPAWNTSSCHARACTER_OFFSET UNITYSDK_OFFSET(0x12A0270)
#define MX_LOGIC_BATTLES_WEEKDUNGEONBATTLE_GET_ENEMYGROUP_OFFSET UNITYSDK_OFFSET(0x12A02C0)

namespace MX::Logic::Battles
{
	inline static constexpr unsigned int WeekDungeonBattle_TypeDefinitionIndex = 14096;

	class WeekDungeonBattle : public ::Spine::Unity::Playables::SkeletonAnimationPlayableHandle
	{
	public:
		::MX::Logic::Battles::CharacterGroup* enemyGroup; // 0x330

		::System::Void InitGroups(::MX::Logic::Data::BattleSetting* arg)
		{
			((::System::Void(*)(::MX::Logic::Data::BattleSetting*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_WEEKDUNGEONBATTLE_INITGROUPS_OFFSET))(arg, nullptr);
		}

		::System::Void PrepareGroup()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_WEEKDUNGEONBATTLE_PREPAREGROUP_OFFSET))(nullptr);
		}

		::MX::Logic::Battles::GroupTag* DecideWinner(::MX::Logic::Battles::BattleEndType* arg)
		{
			return ((::MX::Logic::Battles::GroupTag*(*)(::MX::Logic::Battles::BattleEndType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_WEEKDUNGEONBATTLE_DECIDEWINNER_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::MX::Logic::Data::BattleSetting* arg)
		{
			((::System::Void(*)(::MX::Logic::Data::BattleSetting*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_WEEKDUNGEONBATTLE_.CTOR_OFFSET))(arg, nullptr);
		}

		::MX::Logic::BattleEntities::TSSCharacter* SpawnTSSCharacter(::UnityEngine::Vector2* arg, ::MX::Logic::Data::HeroSetting* arg2, ::MX::Logic::BattleEntities::BattleEntity* arg3, Il2CppObject* arg4, Il2CppObject* arg5)
		{
			return ((::MX::Logic::BattleEntities::TSSCharacter*(*)(::UnityEngine::Vector2*, ::MX::Logic::Data::HeroSetting*, ::MX::Logic::BattleEntities::BattleEntity*, Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_WEEKDUNGEONBATTLE_SPAWNTSSCHARACTER_OFFSET))(arg, arg2, arg3, arg4, arg5, nullptr);
		}

		::MX::Logic::Battles::CharacterGroup* get_EnemyGroup()
		{
			return ((::MX::Logic::Battles::CharacterGroup*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_WEEKDUNGEONBATTLE_GET_ENEMYGROUP_OFFSET))(nullptr);
		}

	};
}

