#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::BattleEntities { class GroundObstacle; }
namespace MX::Logic::BattleEntities { class EntityId; }

#define MX_LOGIC_BATTLES_OBSTACLEEVENTARGS_GET_ISNODECHANGEDBYMOVINGAREA_OFFSET UNITYSDK_OFFSET(0x126E890)
#define MX_LOGIC_BATTLES_OBSTACLEEVENTARGS_GET_ENTITYID_OFFSET UNITYSDK_OFFSET(0x126E8A0)
#define MX_LOGIC_BATTLES_OBSTACLEEVENTARGS_GET_ISDESTROYED_OFFSET UNITYSDK_OFFSET(0x126E8B0)
#define MX_LOGIC_BATTLES_OBSTACLEEVENTARGS_.CTOR_OFFSET UNITYSDK_OFFSET(0x126E8C0)
#define MX_LOGIC_BATTLES_OBSTACLEEVENTARGS_GET_OBSTACLE_OFFSET UNITYSDK_OFFSET(0x126E950)

namespace MX::Logic::Battles
{
	inline static constexpr unsigned int ObstacleEventArgs_TypeDefinitionIndex = 14004;

	class ObstacleEventArgs : public Il2CppObject
	{
	public:
		::MX::Logic::BattleEntities::GroundObstacle* _Obstacle_k__BackingField; // 0x10
		::MX::Logic::BattleEntities::EntityId* _EntityId_k__BackingField; // 0x18
		::System::Boolean _IsDestroyed_k__BackingField; // 0x1C
		::System::Boolean _IsNodeChangedByMovingArea_k__BackingField; // 0x1D

		::System::Boolean get_IsNodeChangedByMovingArea()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_OBSTACLEEVENTARGS_GET_ISNODECHANGEDBYMOVINGAREA_OFFSET))(nullptr);
		}

		::MX::Logic::BattleEntities::EntityId* get_EntityId()
		{
			return ((::MX::Logic::BattleEntities::EntityId*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_OBSTACLEEVENTARGS_GET_ENTITYID_OFFSET))(nullptr);
		}

		::System::Boolean get_IsDestroyed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_OBSTACLEEVENTARGS_GET_ISDESTROYED_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::Logic::BattleEntities::GroundObstacle* arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::GroundObstacle*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_OBSTACLEEVENTARGS_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

		::MX::Logic::BattleEntities::GroundObstacle* get_Obstacle()
		{
			return ((::MX::Logic::BattleEntities::GroundObstacle*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_OBSTACLEEVENTARGS_GET_OBSTACLE_OFFSET))(nullptr);
		}

	};
}

