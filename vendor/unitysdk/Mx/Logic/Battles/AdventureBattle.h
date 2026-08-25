#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Battles { class CharacterGroup; }
namespace MX::Logic::Data { class BattleSetting; }

#define MX_LOGIC_BATTLES_ADVENTUREBATTLE_GET_ENEMYGROUP_OFFSET UNITYSDK_OFFSET(0x124E2C0)
#define MX_LOGIC_BATTLES_ADVENTUREBATTLE_.CTOR_OFFSET UNITYSDK_OFFSET(0x124E2D0)
#define MX_LOGIC_BATTLES_ADVENTUREBATTLE_PREPAREGROUP_OFFSET UNITYSDK_OFFSET(0x124E9B0)
#define MX_LOGIC_BATTLES_ADVENTUREBATTLE_INITGROUPS_OFFSET UNITYSDK_OFFSET(0x124EAC0)

namespace MX::Logic::Battles
{
	inline static constexpr unsigned int AdventureBattle_TypeDefinitionIndex = 13988;

	class AdventureBattle : public ::Spine::Unity::Playables::SkeletonAnimationPlayableHandle
	{
	public:
		::MX::Logic::Battles::CharacterGroup* enemyGroup; // 0x330

		::MX::Logic::Battles::CharacterGroup* get_EnemyGroup()
		{
			return ((::MX::Logic::Battles::CharacterGroup*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_ADVENTUREBATTLE_GET_ENEMYGROUP_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::Logic::Data::BattleSetting* arg)
		{
			((::System::Void(*)(::MX::Logic::Data::BattleSetting*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_ADVENTUREBATTLE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void PrepareGroup()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_ADVENTUREBATTLE_PREPAREGROUP_OFFSET))(nullptr);
		}

		::System::Void InitGroups(::MX::Logic::Data::BattleSetting* arg)
		{
			((::System::Void(*)(::MX::Logic::Data::BattleSetting*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_ADVENTUREBATTLE_INITGROUPS_OFFSET))(arg, nullptr);
		}

	};
}

