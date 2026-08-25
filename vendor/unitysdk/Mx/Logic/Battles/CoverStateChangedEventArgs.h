#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::BattleEntities { class EntityId; }
namespace MX::Logic::Skills { class CoverState; }

#define MX_LOGIC_BATTLES_COVERSTATECHANGEDEVENTARGS_GET_CHARACTERID_OFFSET UNITYSDK_OFFSET(0x1273570)
#define MX_LOGIC_BATTLES_COVERSTATECHANGEDEVENTARGS_GET_CHANGEDSTATE_OFFSET UNITYSDK_OFFSET(0x1273580)
#define MX_LOGIC_BATTLES_COVERSTATECHANGEDEVENTARGS_GET_OBSTACLEID_OFFSET UNITYSDK_OFFSET(0x1273590)
#define MX_LOGIC_BATTLES_COVERSTATECHANGEDEVENTARGS_.CTOR_OFFSET UNITYSDK_OFFSET(0x12735A0)

namespace MX::Logic::Battles
{
	inline static constexpr unsigned int CoverStateChangedEventArgs_TypeDefinitionIndex = 14047;

	class CoverStateChangedEventArgs : public Il2CppObject
	{
	public:
		::MX::Logic::BattleEntities::EntityId* _CharacterId_k__BackingField; // 0x10
		::MX::Logic::BattleEntities::EntityId* _ObstacleId_k__BackingField; // 0x14
		::MX::Logic::Skills::CoverState* _ChangedState_k__BackingField; // 0x18

		::MX::Logic::BattleEntities::EntityId* get_CharacterId()
		{
			return ((::MX::Logic::BattleEntities::EntityId*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_COVERSTATECHANGEDEVENTARGS_GET_CHARACTERID_OFFSET))(nullptr);
		}

		::MX::Logic::Skills::CoverState* get_ChangedState()
		{
			return ((::MX::Logic::Skills::CoverState*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_COVERSTATECHANGEDEVENTARGS_GET_CHANGEDSTATE_OFFSET))(nullptr);
		}

		::MX::Logic::BattleEntities::EntityId* get_ObstacleId()
		{
			return ((::MX::Logic::BattleEntities::EntityId*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_COVERSTATECHANGEDEVENTARGS_GET_OBSTACLEID_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::Logic::BattleEntities::EntityId* arg, ::MX::Logic::BattleEntities::EntityId* arg2, ::MX::Logic::Skills::CoverState* arg3)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::EntityId*, ::MX::Logic::BattleEntities::EntityId*, ::MX::Logic::Skills::CoverState*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_COVERSTATECHANGEDEVENTARGS_.CTOR_OFFSET))(arg, arg2, arg3, nullptr);
		}

	};
}

