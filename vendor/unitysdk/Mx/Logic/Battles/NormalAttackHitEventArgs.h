#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::BattleEntities { class EntityId; }
namespace UnityEngine { class Vector2; }
namespace MX::Logic::BattleEntities { class NormalAttackDeliverer; }

#define MX_LOGIC_BATTLES_NORMALATTACKHITEVENTARGS_GET_ATTACKERID_OFFSET UNITYSDK_OFFSET(0x126F310)
#define MX_LOGIC_BATTLES_NORMALATTACKHITEVENTARGS_GET_PROJECTILEID_OFFSET UNITYSDK_OFFSET(0x126F320)
#define MX_LOGIC_BATTLES_NORMALATTACKHITEVENTARGS_GET_HITPOSITION_OFFSET UNITYSDK_OFFSET(0x126F330)
#define MX_LOGIC_BATTLES_NORMALATTACKHITEVENTARGS_.CTOR_OFFSET UNITYSDK_OFFSET(0x126B410)

namespace MX::Logic::Battles
{
	inline static constexpr unsigned int NormalAttackHitEventArgs_TypeDefinitionIndex = 14018;

	class NormalAttackHitEventArgs : public Il2CppObject
	{
	public:
		::MX::Logic::BattleEntities::EntityId* _ProjectileId_k__BackingField; // 0x10
		::UnityEngine::Vector2* _HitPosition_k__BackingField; // 0x14
		::MX::Logic::BattleEntities::EntityId* _AttackerId_k__BackingField; // 0x1C

		::MX::Logic::BattleEntities::EntityId* get_AttackerId()
		{
			return ((::MX::Logic::BattleEntities::EntityId*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_NORMALATTACKHITEVENTARGS_GET_ATTACKERID_OFFSET))(nullptr);
		}

		::MX::Logic::BattleEntities::EntityId* get_ProjectileId()
		{
			return ((::MX::Logic::BattleEntities::EntityId*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_NORMALATTACKHITEVENTARGS_GET_PROJECTILEID_OFFSET))(nullptr);
		}

		::UnityEngine::Vector2* get_HitPosition()
		{
			return ((::UnityEngine::Vector2*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_NORMALATTACKHITEVENTARGS_GET_HITPOSITION_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::Logic::BattleEntities::NormalAttackDeliverer* arg, ::UnityEngine::Vector2* arg2)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::NormalAttackDeliverer*, ::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_NORMALATTACKHITEVENTARGS_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

	};
}

