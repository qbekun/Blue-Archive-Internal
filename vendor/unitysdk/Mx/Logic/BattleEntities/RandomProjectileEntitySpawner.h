#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Skills { class IEntitySpawnable; }
namespace MX::Logic::Data { class RandomProjectileEntitySpawnerValue; }
namespace UnityEngine { class Vector2; }
namespace MX::Core::Math { class IRandomService; }
namespace MX::Logic::Skills { class SkillToTargetDistributeType; }
namespace MX::Logic::Battles { class Battle; }
namespace MX::Logic::Data { class SkillEntityValue; }
namespace MX::Logic::BattleEntities { class EntityId; }
namespace MX::Logic::BattleEntities { class BattleEntity; }
namespace MX::Logic::Data { class ProjectileEntityValue; }

#define MX_LOGIC_BATTLEENTITIES_RANDOMPROJECTILEENTITYSPAWNER_GET_ENTITYLIST_OFFSET UNITYSDK_OFFSET(0x11B3790)
#define MX_LOGIC_BATTLEENTITIES_RANDOMPROJECTILEENTITYSPAWNER_FINDSPAWNDIRECTION_OFFSET UNITYSDK_OFFSET(0x11B37B0)
#define MX_LOGIC_BATTLEENTITIES_RANDOMPROJECTILEENTITYSPAWNER_APPLYPOSITIONTRANSFORMDIFFBYMOVINGAREA_OFFSET UNITYSDK_OFFSET(0x11B3850)
#define MX_LOGIC_BATTLEENTITIES_RANDOMPROJECTILEENTITYSPAWNER_UPDATE_OFFSET UNITYSDK_OFFSET(0x11B3BF0)
#define MX_LOGIC_BATTLEENTITIES_RANDOMPROJECTILEENTITYSPAWNER_.CTOR_OFFSET UNITYSDK_OFFSET(0x11B3F30)
#define MX_LOGIC_BATTLEENTITIES_RANDOMPROJECTILEENTITYSPAWNER_INIT_OFFSET UNITYSDK_OFFSET(0x11B4110)
#define MX_LOGIC_BATTLEENTITIES_RANDOMPROJECTILEENTITYSPAWNER_GET_SPAWNERVALUE_OFFSET UNITYSDK_OFFSET(0x11B4B80)
#define MX_LOGIC_BATTLEENTITIES_RANDOMPROJECTILEENTITYSPAWNER_SETSPAWNPOSITION_OFFSET UNITYSDK_OFFSET(0x11B4400)
#define MX_LOGIC_BATTLEENTITIES_RANDOMPROJECTILEENTITYSPAWNER_FINDSPAWNPOSITION_OFFSET UNITYSDK_OFFSET(0x11B4B90)
#define MX_LOGIC_BATTLEENTITIES_RANDOMPROJECTILEENTITYSPAWNER_SPAWNPROJECTILE_OFFSET UNITYSDK_OFFSET(0x11B3E30)
#define MX_LOGIC_BATTLEENTITIES_RANDOMPROJECTILEENTITYSPAWNER_SELECTRANDOMPROJECTILE_OFFSET UNITYSDK_OFFSET(0x11B4C30)
#define MX_LOGIC_BATTLEENTITIES_RANDOMPROJECTILEENTITYSPAWNER_SETSPAWNDIRECTION_OFFSET UNITYSDK_OFFSET(0x11B46F0)
#define MX_LOGIC_BATTLEENTITIES_RANDOMPROJECTILEENTITYSPAWNER_FINDTARGETS_OFFSET UNITYSDK_OFFSET(0x11B4E50)
#define MX_LOGIC_BATTLEENTITIES_RANDOMPROJECTILEENTITYSPAWNER_FINDTARGET_OFFSET UNITYSDK_OFFSET(0x11B51A0)
#define MX_LOGIC_BATTLEENTITIES_RANDOMPROJECTILEENTITYSPAWNER_SETRANDOMPROJECTILEPOOL_OFFSET UNITYSDK_OFFSET(0x11B49E0)

namespace MX::Logic::BattleEntities
{
	inline static constexpr unsigned int RandomProjectileEntitySpawner_TypeDefinitionIndex = 13329;

	class RandomProjectileEntitySpawner : public Il2CppObject
	{
	public:
		::MX::Logic::Skills::IEntitySpawnable* action; // 0x68
		::MX::Logic::Data::RandomProjectileEntitySpawnerValue* _spawnerValue_k__BackingField; // 0x70
		::System::Boolean isDirectionSet; // 0x78
		::UnityEngine::Vector2* position; // 0x7C
		::UnityEngine::Vector2* randomPosition; // 0x84
		::System::Int64 ownerSkillRange; // 0x90
		::MX::Core::Math::IRandomService* randomService; // 0x98
		::System::Int32 probTotal; // 0xA0
		::MX::Logic::Skills::SkillToTargetDistributeType* distributeType; // 0xA4
		::System::Int32 targetIndex; // 0xA8
		Il2CppObject* skillEntityPositionTable; // 0xB0
		Il2CppObject* skillEntityDirectionTable; // 0xB8

		Il2CppObject* get_EntityList()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_RANDOMPROJECTILEENTITYSPAWNER_GET_ENTITYLIST_OFFSET))(nullptr);
		}

		::UnityEngine::Vector2* FindSpawnDirection(::MX::Logic::Battles::Battle* arg, ::MX::Logic::Data::SkillEntityValue* arg2)
		{
			return ((::UnityEngine::Vector2*(*)(::MX::Logic::Battles::Battle*, ::MX::Logic::Data::SkillEntityValue*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_RANDOMPROJECTILEENTITYSPAWNER_FINDSPAWNDIRECTION_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void ApplyPositionTransformDiffByMovingArea(Il2CppObject* arg, ::UnityEngine::Vector2* arg2, ::UnityEngine::Vector2* arg3, ::UnityEngine::Vector2* arg4)
		{
			((::System::Void(*)(Il2CppObject*, ::UnityEngine::Vector2*, ::UnityEngine::Vector2*, ::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_RANDOMPROJECTILEENTITYSPAWNER_APPLYPOSITIONTRANSFORMDIFFBYMOVINGAREA_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Void Update(::MX::Logic::Battles::Battle* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_RANDOMPROJECTILEENTITYSPAWNER_UPDATE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::MX::Logic::BattleEntities::EntityId* arg, ::MX::Logic::Skills::IEntitySpawnable* arg2, ::MX::Logic::Data::RandomProjectileEntitySpawnerValue* arg3, ::System::Int64 arg4, ::MX::Logic::BattleEntities::BattleEntity* arg5, ::UnityEngine::Vector2* arg6)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::EntityId*, ::MX::Logic::Skills::IEntitySpawnable*, ::MX::Logic::Data::RandomProjectileEntitySpawnerValue*, ::System::Int64, ::MX::Logic::BattleEntities::BattleEntity*, ::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_RANDOMPROJECTILEENTITYSPAWNER_.CTOR_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, nullptr);
		}

		::System::Void Init(::MX::Logic::Battles::Battle* arg, ::UnityEngine::Vector2* arg2, Il2CppObject* arg3)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::UnityEngine::Vector2*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_RANDOMPROJECTILEENTITYSPAWNER_INIT_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::MX::Logic::Data::RandomProjectileEntitySpawnerValue* get_spawnerValue()
		{
			return ((::MX::Logic::Data::RandomProjectileEntitySpawnerValue*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_RANDOMPROJECTILEENTITYSPAWNER_GET_SPAWNERVALUE_OFFSET))(nullptr);
		}

		::System::Void SetSpawnPosition(::MX::Logic::Battles::Battle* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_RANDOMPROJECTILEENTITYSPAWNER_SETSPAWNPOSITION_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Vector2* FindSpawnPosition(::MX::Logic::Battles::Battle* arg, ::MX::Logic::Data::SkillEntityValue* arg2)
		{
			return ((::UnityEngine::Vector2*(*)(::MX::Logic::Battles::Battle*, ::MX::Logic::Data::SkillEntityValue*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_RANDOMPROJECTILEENTITYSPAWNER_FINDSPAWNPOSITION_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void SpawnProjectile(::MX::Logic::Battles::Battle* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_RANDOMPROJECTILEENTITYSPAWNER_SPAWNPROJECTILE_OFFSET))(arg, nullptr);
		}

		::MX::Logic::Data::ProjectileEntityValue* SelectRandomProjectile()
		{
			return ((::MX::Logic::Data::ProjectileEntityValue*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_RANDOMPROJECTILEENTITYSPAWNER_SELECTRANDOMPROJECTILE_OFFSET))(nullptr);
		}

		::System::Void SetSpawnDirection(::MX::Logic::Battles::Battle* arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_RANDOMPROJECTILEENTITYSPAWNER_SETSPAWNDIRECTION_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* FindTargets(::MX::Logic::Data::SkillEntityValue* arg)
		{
			return ((Il2CppObject*(*)(::MX::Logic::Data::SkillEntityValue*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_RANDOMPROJECTILEENTITYSPAWNER_FINDTARGETS_OFFSET))(arg, nullptr);
		}

		::MX::Logic::BattleEntities::BattleEntity* FindTarget(::MX::Logic::Data::SkillEntityValue* arg)
		{
			return ((::MX::Logic::BattleEntities::BattleEntity*(*)(::MX::Logic::Data::SkillEntityValue*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_RANDOMPROJECTILEENTITYSPAWNER_FINDTARGET_OFFSET))(arg, nullptr);
		}

		::System::Void SetRandomProjectilePool(::MX::Logic::Battles::Battle* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_RANDOMPROJECTILEENTITYSPAWNER_SETRANDOMPROJECTILEPOOL_OFFSET))(arg, nullptr);
		}

	};
}

