#pragma once
#include "../../../../unitysdk.h"

namespace MX::Logic::Skills { class SpawnPositionTypes; }
namespace UnityEngine { class Vector2; }
namespace MX::Logic::Skills { class SpawnDirectionTypes; }
namespace MX::Logic::Skills { class ProjectileTypes; }
namespace MX::Core::Physics2D::Shapes { class ShapeType; }
namespace MX::GameData::DAO::Battle { class AreaEntityDAO; }
namespace MX::GameData::DAO::Battle { class AreaSpawnerDAO; }
namespace MX::GameData::DAO::Battle { class SkillEntitySpawnerDAO; }

#define MX_GAMEDATA_DAO_BATTLE_PROJECTILEENTITYDAO_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x1724050)
#define MX_GAMEDATA_DAO_BATTLE_PROJECTILEENTITYDAO_GETSKILLABILITY_OFFSET UNITYSDK_OFFSET(0x1724250)
#define MX_GAMEDATA_DAO_BATTLE_PROJECTILEENTITYDAO_.CCTOR_OFFSET UNITYSDK_OFFSET(0x1724260)
#define MX_GAMEDATA_DAO_BATTLE_PROJECTILEENTITYDAO_.CTOR_OFFSET UNITYSDK_OFFSET(0x1724270)
#define MX_GAMEDATA_DAO_BATTLE_PROJECTILEENTITYDAO_SHOULDSERIALIZEABILITIES_OFFSET UNITYSDK_OFFSET(0x17242C0)

namespace MX::GameData::DAO::Battle
{
	inline static constexpr unsigned int ProjectileEntityDAO_TypeDefinitionIndex = 15495;

	class ProjectileEntityDAO : public Il2CppObject
	{
	public:
		::MX::Logic::Skills::SpawnPositionTypes* DestinationType; // 0x158
		::UnityEngine::Vector2* DestinationWorldPosition; // 0x15C
		::UnityEngine::Vector2* DestinationPositionOffset; // 0x164
		::System::Int32 DestinationPositionRandomOffsetRange; // 0x16C
		::MX::Logic::Skills::SpawnDirectionTypes* DestinationOffsetDirectionType; // 0x170
		::System::Int64 ReduceDamageRatePerHit; // 0x178
		::System::Int64 MaxReducedDamageRate; // 0x180
		::MX::Logic::Skills::ProjectileTypes* ProjectileType; // 0x188
		::MX::Core::Physics2D::Shapes::ShapeType* ShapeType; // 0x18C
		::System::Int64 Width; // 0x190
		::System::Int64 Height; // 0x198
		::System::Int64 Speed; // 0x1A0
		::System::Int32 FireDelayFrame; // 0x1A8
		::System::Boolean IsStickToTargetAfterHit; // 0x1AC
		Il2CppObject* Abilities; // 0x1B0
		::System::Int32 SplashDelayFrame; // 0x1B8
		::MX::GameData::DAO::Battle::AreaEntityDAO* SplashAreaEntityData; // 0x1C0
		::MX::GameData::DAO::Battle::AreaSpawnerDAO* AreaSpawnerData; // 0x1C8
		::MX::GameData::DAO::Battle::SkillEntitySpawnerDAO* SkillEntitySpawnerData; // 0x1D0

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_PROJECTILEENTITYDAO_REGISTERFORMATTER_OFFSET))(nullptr);
		}

		Il2CppObject* GetSkillAbility()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_PROJECTILEENTITYDAO_GETSKILLABILITY_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_PROJECTILEENTITYDAO_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_PROJECTILEENTITYDAO_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean ShouldSerializeAbilities()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_PROJECTILEENTITYDAO_SHOULDSERIALIZEABILITIES_OFFSET))(nullptr);
		}

	};
}

