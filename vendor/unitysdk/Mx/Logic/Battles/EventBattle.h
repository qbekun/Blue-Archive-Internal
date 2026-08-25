#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Battles { class CharacterGroup; }
namespace MX::Logic::Data { class BattleSetting; }

#define MX_LOGIC_BATTLES_EVENTBATTLE_INITGROUPS_OFFSET UNITYSDK_OFFSET(0x127FB90)
#define MX_LOGIC_BATTLES_EVENTBATTLE_GET_ENEMYGROUP_OFFSET UNITYSDK_OFFSET(0x127FC50)
#define MX_LOGIC_BATTLES_EVENTBATTLE_.CTOR_OFFSET UNITYSDK_OFFSET(0x127FC60)
#define MX_LOGIC_BATTLES_EVENTBATTLE_PREPAREGROUP_OFFSET UNITYSDK_OFFSET(0x127FE20)
#define MX_LOGIC_BATTLES_EVENTBATTLE_GET_BUFFIDS_OFFSET UNITYSDK_OFFSET(0x12800F0)

namespace MX::Logic::Battles
{
	inline static constexpr unsigned int EventBattle_TypeDefinitionIndex = 14077;

	class EventBattle : public ::Spine::Unity::Playables::SkeletonAnimationPlayableHandle
	{
	public:
		::MX::Logic::Battles::CharacterGroup* enemyGroup; // 0x330
		Il2CppObject* _buffIds_k__BackingField; // 0x338

		::System::Void InitGroups(::MX::Logic::Data::BattleSetting* arg)
		{
			((::System::Void(*)(::MX::Logic::Data::BattleSetting*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_EVENTBATTLE_INITGROUPS_OFFSET))(arg, nullptr);
		}

		::MX::Logic::Battles::CharacterGroup* get_EnemyGroup()
		{
			return ((::MX::Logic::Battles::CharacterGroup*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_EVENTBATTLE_GET_ENEMYGROUP_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::Logic::Data::BattleSetting* arg)
		{
			((::System::Void(*)(::MX::Logic::Data::BattleSetting*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_EVENTBATTLE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void PrepareGroup()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_EVENTBATTLE_PREPAREGROUP_OFFSET))(nullptr);
		}

		Il2CppObject* get_buffIds()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_EVENTBATTLE_GET_BUFFIDS_OFFSET))(nullptr);
		}

	};
}

