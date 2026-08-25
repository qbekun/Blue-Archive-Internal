#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::BattleEntities { class EntityId; }
namespace UnityEngine { class Vector2; }
namespace MX::Logic::BattleEntities { class Projectile; }

#define MX_LOGIC_BATTLES_PROJECTILEEVENTARGS_GET_PROJECTILEID_OFFSET UNITYSDK_OFFSET(0x126EDB0)
#define MX_LOGIC_BATTLES_PROJECTILEEVENTARGS_GET_COLLIDEDPOSITION_OFFSET UNITYSDK_OFFSET(0x126EDC0)
#define MX_LOGIC_BATTLES_PROJECTILEEVENTARGS_GET_TARGETID_OFFSET UNITYSDK_OFFSET(0x126EDD0)
#define MX_LOGIC_BATTLES_PROJECTILEEVENTARGS_GET_OBSTACLEID_OFFSET UNITYSDK_OFFSET(0x126EDE0)
#define MX_LOGIC_BATTLES_PROJECTILEEVENTARGS_.CTOR_OFFSET UNITYSDK_OFFSET(0x126EDF0)
#define MX_LOGIC_BATTLES_PROJECTILEEVENTARGS_.CTOR_OFFSET UNITYSDK_OFFSET(0x126F050)
#define MX_LOGIC_BATTLES_PROJECTILEEVENTARGS_.CTOR_OFFSET UNITYSDK_OFFSET(0x126EFD0)

namespace MX::Logic::Battles
{
	inline static constexpr unsigned int ProjectileEventArgs_TypeDefinitionIndex = 14012;

	class ProjectileEventArgs : public Il2CppObject
	{
	public:
		::MX::Logic::BattleEntities::EntityId* _ProjectileId_k__BackingField; // 0x10
		::UnityEngine::Vector2* _CollidedPosition_k__BackingField; // 0x14
		::MX::Logic::BattleEntities::EntityId* _TargetId_k__BackingField; // 0x1C
		::MX::Logic::BattleEntities::EntityId* _ObstacleId_k__BackingField; // 0x20

		::MX::Logic::BattleEntities::EntityId* get_ProjectileId()
		{
			return ((::MX::Logic::BattleEntities::EntityId*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_PROJECTILEEVENTARGS_GET_PROJECTILEID_OFFSET))(nullptr);
		}

		::UnityEngine::Vector2* get_CollidedPosition()
		{
			return ((::UnityEngine::Vector2*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_PROJECTILEEVENTARGS_GET_COLLIDEDPOSITION_OFFSET))(nullptr);
		}

		::MX::Logic::BattleEntities::EntityId* get_TargetId()
		{
			return ((::MX::Logic::BattleEntities::EntityId*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_PROJECTILEEVENTARGS_GET_TARGETID_OFFSET))(nullptr);
		}

		::MX::Logic::BattleEntities::EntityId* get_ObstacleId()
		{
			return ((::MX::Logic::BattleEntities::EntityId*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_PROJECTILEEVENTARGS_GET_OBSTACLEID_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::Logic::BattleEntities::Projectile* arg, ::UnityEngine::Vector2* arg2)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::Projectile*, ::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_PROJECTILEEVENTARGS_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor(::MX::Logic::BattleEntities::Projectile* arg, ::UnityEngine::Vector2* arg2, ::MX::Logic::BattleEntities::EntityId* arg3)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::Projectile*, ::UnityEngine::Vector2*, ::MX::Logic::BattleEntities::EntityId*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_PROJECTILEEVENTARGS_.CTOR_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void .ctor(::MX::Logic::BattleEntities::Projectile* arg, ::UnityEngine::Vector2* arg2, ::MX::Logic::BattleEntities::EntityId* arg3, ::MX::Logic::BattleEntities::EntityId* arg4)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::Projectile*, ::UnityEngine::Vector2*, ::MX::Logic::BattleEntities::EntityId*, ::MX::Logic::BattleEntities::EntityId*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_PROJECTILEEVENTARGS_.CTOR_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

	};
}

