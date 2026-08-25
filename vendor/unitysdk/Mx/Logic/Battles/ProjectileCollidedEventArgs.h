#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::BattleEntities { class EntityId; }
namespace MX::Logic::Skills { class SkillSpecification; }
namespace MX::Logic::BattleEntities { class Projectile; }

#define MX_LOGIC_BATTLES_PROJECTILECOLLIDEDEVENTARGS_.CTOR_OFFSET UNITYSDK_OFFSET(0x126AF70)
#define MX_LOGIC_BATTLES_PROJECTILECOLLIDEDEVENTARGS_GET_OBSTACLEID_OFFSET UNITYSDK_OFFSET(0x126F1C0)
#define MX_LOGIC_BATTLES_PROJECTILECOLLIDEDEVENTARGS_GET_PROJECTILEID_OFFSET UNITYSDK_OFFSET(0x126F1D0)
#define MX_LOGIC_BATTLES_PROJECTILECOLLIDEDEVENTARGS_GET_TARGETID_OFFSET UNITYSDK_OFFSET(0x126F1E0)
#define MX_LOGIC_BATTLES_PROJECTILECOLLIDEDEVENTARGS_GET_INVOKERID_OFFSET UNITYSDK_OFFSET(0x126F1F0)
#define MX_LOGIC_BATTLES_PROJECTILECOLLIDEDEVENTARGS_GET_SKILLSPECIFICATION_OFFSET UNITYSDK_OFFSET(0x126F200)

namespace MX::Logic::Battles
{
	inline static constexpr unsigned int ProjectileCollidedEventArgs_TypeDefinitionIndex = 14013;

	class ProjectileCollidedEventArgs : public Il2CppObject
	{
	public:
		::MX::Logic::BattleEntities::EntityId* _InvokerId_k__BackingField; // 0x10
		::MX::Logic::BattleEntities::EntityId* _TargetId_k__BackingField; // 0x14
		::MX::Logic::BattleEntities::EntityId* _ObstacleId_k__BackingField; // 0x18
		::MX::Logic::Skills::SkillSpecification* _SkillSpecification_k__BackingField; // 0x20
		::MX::Logic::BattleEntities::EntityId* _ProjectileId_k__BackingField; // 0x28

		::System::Void .ctor(::MX::Logic::BattleEntities::Projectile* arg, ::MX::Logic::BattleEntities::EntityId* arg2, ::MX::Logic::BattleEntities::EntityId* arg3)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::Projectile*, ::MX::Logic::BattleEntities::EntityId*, ::MX::Logic::BattleEntities::EntityId*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_PROJECTILECOLLIDEDEVENTARGS_.CTOR_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::MX::Logic::BattleEntities::EntityId* get_ObstacleId()
		{
			return ((::MX::Logic::BattleEntities::EntityId*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_PROJECTILECOLLIDEDEVENTARGS_GET_OBSTACLEID_OFFSET))(nullptr);
		}

		::MX::Logic::BattleEntities::EntityId* get_ProjectileId()
		{
			return ((::MX::Logic::BattleEntities::EntityId*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_PROJECTILECOLLIDEDEVENTARGS_GET_PROJECTILEID_OFFSET))(nullptr);
		}

		::MX::Logic::BattleEntities::EntityId* get_TargetId()
		{
			return ((::MX::Logic::BattleEntities::EntityId*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_PROJECTILECOLLIDEDEVENTARGS_GET_TARGETID_OFFSET))(nullptr);
		}

		::MX::Logic::BattleEntities::EntityId* get_InvokerId()
		{
			return ((::MX::Logic::BattleEntities::EntityId*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_PROJECTILECOLLIDEDEVENTARGS_GET_INVOKERID_OFFSET))(nullptr);
		}

		::MX::Logic::Skills::SkillSpecification* get_SkillSpecification()
		{
			return ((::MX::Logic::Skills::SkillSpecification*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_PROJECTILECOLLIDEDEVENTARGS_GET_SKILLSPECIFICATION_OFFSET))(nullptr);
		}

	};
}

