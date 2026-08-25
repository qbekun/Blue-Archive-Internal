#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::BattleEntities { class Projectile; }
namespace MX::Logic::BattleEntities { class EntityId; }
namespace MX::Logic::Skills { class SkillSpecification; }

#define MX_LOGIC_BATTLES_PROJECTILESPAWNEDEVENTARGS_GET_PROJECTILEID_OFFSET UNITYSDK_OFFSET(0x126EC60)
#define MX_LOGIC_BATTLES_PROJECTILESPAWNEDEVENTARGS_GET_INVOKERID_OFFSET UNITYSDK_OFFSET(0x126EC70)
#define MX_LOGIC_BATTLES_PROJECTILESPAWNEDEVENTARGS_GET_FRAMEPERSECOND_OFFSET UNITYSDK_OFFSET(0x126EC80)
#define MX_LOGIC_BATTLES_PROJECTILESPAWNEDEVENTARGS_GET_SKILLSPECIFICATION_OFFSET UNITYSDK_OFFSET(0x126EC90)
#define MX_LOGIC_BATTLES_PROJECTILESPAWNEDEVENTARGS_.CTOR_OFFSET UNITYSDK_OFFSET(0x1268A90)
#define MX_LOGIC_BATTLES_PROJECTILESPAWNEDEVENTARGS_GET_PROJECTILE_OFFSET UNITYSDK_OFFSET(0x126ECA0)
#define MX_LOGIC_BATTLES_PROJECTILESPAWNEDEVENTARGS_GET_TARGETID_OFFSET UNITYSDK_OFFSET(0x126ECB0)

namespace MX::Logic::Battles
{
	inline static constexpr unsigned int ProjectileSpawnedEventArgs_TypeDefinitionIndex = 14009;

	class ProjectileSpawnedEventArgs : public Il2CppObject
	{
	public:
		::MX::Logic::BattleEntities::Projectile* _Projectile_k__BackingField; // 0x10
		::System::Int32 _FramePerSecond_k__BackingField; // 0x18
		::MX::Logic::BattleEntities::EntityId* _InvokerId_k__BackingField; // 0x1C
		::MX::Logic::Skills::SkillSpecification* _SkillSpecification_k__BackingField; // 0x20
		::MX::Logic::BattleEntities::EntityId* _ProjectileId_k__BackingField; // 0x28
		::MX::Logic::BattleEntities::EntityId* _TargetId_k__BackingField; // 0x2C

		::MX::Logic::BattleEntities::EntityId* get_ProjectileId()
		{
			return ((::MX::Logic::BattleEntities::EntityId*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_PROJECTILESPAWNEDEVENTARGS_GET_PROJECTILEID_OFFSET))(nullptr);
		}

		::MX::Logic::BattleEntities::EntityId* get_InvokerId()
		{
			return ((::MX::Logic::BattleEntities::EntityId*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_PROJECTILESPAWNEDEVENTARGS_GET_INVOKERID_OFFSET))(nullptr);
		}

		::System::Int32 get_FramePerSecond()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_PROJECTILESPAWNEDEVENTARGS_GET_FRAMEPERSECOND_OFFSET))(nullptr);
		}

		::MX::Logic::Skills::SkillSpecification* get_SkillSpecification()
		{
			return ((::MX::Logic::Skills::SkillSpecification*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_PROJECTILESPAWNEDEVENTARGS_GET_SKILLSPECIFICATION_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::Logic::BattleEntities::Projectile* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::Projectile*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_PROJECTILESPAWNEDEVENTARGS_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

		::MX::Logic::BattleEntities::Projectile* get_Projectile()
		{
			return ((::MX::Logic::BattleEntities::Projectile*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_PROJECTILESPAWNEDEVENTARGS_GET_PROJECTILE_OFFSET))(nullptr);
		}

		::MX::Logic::BattleEntities::EntityId* get_TargetId()
		{
			return ((::MX::Logic::BattleEntities::EntityId*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_PROJECTILESPAWNEDEVENTARGS_GET_TARGETID_OFFSET))(nullptr);
		}

	};
}

