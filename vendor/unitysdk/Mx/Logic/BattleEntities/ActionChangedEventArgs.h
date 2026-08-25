#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::BattleEntities { class EntityId; }
namespace MX::Logic::BattleEntities { class BehaviorType; }
namespace MX::Logic::Actions { class ActionState; }

#define MX_LOGIC_BATTLEENTITIES_ACTIONCHANGEDEVENTARGS_GET_ACTIONSTATE_OFFSET UNITYSDK_OFFSET(0x112D9B0)
#define MX_LOGIC_BATTLEENTITIES_ACTIONCHANGEDEVENTARGS_GET_BEHAVIOR_OFFSET UNITYSDK_OFFSET(0x112D9C0)
#define MX_LOGIC_BATTLEENTITIES_ACTIONCHANGEDEVENTARGS_GET_ENTITYID_OFFSET UNITYSDK_OFFSET(0x112D9D0)
#define MX_LOGIC_BATTLEENTITIES_ACTIONCHANGEDEVENTARGS_GET_ISACTIONSTARTEDEVENT_OFFSET UNITYSDK_OFFSET(0x112D9E0)
#define MX_LOGIC_BATTLEENTITIES_ACTIONCHANGEDEVENTARGS_.CTOR_OFFSET UNITYSDK_OFFSET(0x112D9F0)

namespace MX::Logic::BattleEntities
{
	inline static constexpr unsigned int ActionChangedEventArgs_TypeDefinitionIndex = 13045;

	class ActionChangedEventArgs : public Il2CppObject
	{
	public:
		::MX::Logic::BattleEntities::EntityId* _EntityId_k__BackingField; // 0x10
		::MX::Logic::BattleEntities::BehaviorType* _Behavior_k__BackingField; // 0x14
		::MX::Logic::Actions::ActionState* _ActionState_k__BackingField; // 0x18
		::System::Boolean _IsActionStartedEvent_k__BackingField; // 0x1C

		::MX::Logic::Actions::ActionState* get_ActionState()
		{
			return ((::MX::Logic::Actions::ActionState*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_ACTIONCHANGEDEVENTARGS_GET_ACTIONSTATE_OFFSET))(nullptr);
		}

		::MX::Logic::BattleEntities::BehaviorType* get_Behavior()
		{
			return ((::MX::Logic::BattleEntities::BehaviorType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_ACTIONCHANGEDEVENTARGS_GET_BEHAVIOR_OFFSET))(nullptr);
		}

		::MX::Logic::BattleEntities::EntityId* get_EntityId()
		{
			return ((::MX::Logic::BattleEntities::EntityId*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_ACTIONCHANGEDEVENTARGS_GET_ENTITYID_OFFSET))(nullptr);
		}

		::System::Boolean get_IsActionStartedEvent()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_ACTIONCHANGEDEVENTARGS_GET_ISACTIONSTARTEDEVENT_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::Logic::BattleEntities::EntityId* arg, ::MX::Logic::BattleEntities::BehaviorType* arg2, ::MX::Logic::Actions::ActionState* arg3, ::System::Boolean arg4)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::EntityId*, ::MX::Logic::BattleEntities::BehaviorType*, ::MX::Logic::Actions::ActionState*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_ACTIONCHANGEDEVENTARGS_.CTOR_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

	};
}

