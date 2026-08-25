#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::BattleEntities { class EntityId; }
namespace MX::Logic::BattleEntities { class O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4; }
namespace MX::Logic::Battles { class Battle; }
namespace MX::Logic::BattleEntities { class BehaviorType; }

#define MX_LOGIC_ACTIONS_FOLLOWINGACTION_GET_SOURCE_OFFSET UNITYSDK_OFFSET(0x10EC100)
#define MX_LOGIC_ACTIONS_FOLLOWINGACTION_ENTER_OFFSET UNITYSDK_OFFSET(0x10EC110)
#define MX_LOGIC_ACTIONS_FOLLOWINGACTION_SET_SOURCE_OFFSET UNITYSDK_OFFSET(0x10EC120)
#define MX_LOGIC_ACTIONS_FOLLOWINGACTION_UPDATE_OFFSET UNITYSDK_OFFSET(0x10EC130)
#define MX_LOGIC_ACTIONS_FOLLOWINGACTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x10EC2A0)
#define MX_LOGIC_ACTIONS_FOLLOWINGACTION_LEAVE_OFFSET UNITYSDK_OFFSET(0x10EC300)

namespace MX::Logic::Actions
{
	inline static constexpr unsigned int FollowingAction_TypeDefinitionIndex = 13011;

	class FollowingAction : public Il2CppObject
	{
	public:
		::MX::Logic::BattleEntities::EntityId* _Source_k__BackingField; // 0x58
		::MX::Logic::BattleEntities::O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4* leaderCache; // 0x60

		::MX::Logic::BattleEntities::EntityId* get_Source()
		{
			return ((::MX::Logic::BattleEntities::EntityId*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_ACTIONS_FOLLOWINGACTION_GET_SOURCE_OFFSET))(nullptr);
		}

		::System::Void Enter(::MX::Logic::Battles::Battle* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_ACTIONS_FOLLOWINGACTION_ENTER_OFFSET))(arg, nullptr);
		}

		::System::Void set_Source(::MX::Logic::BattleEntities::EntityId* arg)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::EntityId*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_ACTIONS_FOLLOWINGACTION_SET_SOURCE_OFFSET))(arg, nullptr);
		}

		::System::Void Update(::MX::Logic::Battles::Battle* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_ACTIONS_FOLLOWINGACTION_UPDATE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::MX::Logic::BattleEntities::O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4* arg, ::MX::Logic::BattleEntities::BehaviorType* arg2)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4*, ::MX::Logic::BattleEntities::BehaviorType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_ACTIONS_FOLLOWINGACTION_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Leave()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_ACTIONS_FOLLOWINGACTION_LEAVE_OFFSET))(nullptr);
		}

	};
}

