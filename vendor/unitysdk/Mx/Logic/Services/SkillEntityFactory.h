#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Data { class SkillEntityValue; }
namespace MX::Logic::Battles { class Battle; }
namespace MX::Logic::Skills { class IEntitySpawnable; }
namespace MX::Logic::BattleEntities { class BattleEntity; }
namespace MX::Logic::BattleEntities { class IHitCheckCouplingProvider; }
namespace MX::Logic::Data { class TargetSkillEntityValue; }
namespace MX::Logic::Data { class ForceMoveTargetEntityValue; }
namespace MX::Logic::Data { class AreaEntityValue; }
namespace MX::Logic::BattleEntities { class EffectArea; }
namespace MX::Logic::BattleEntities { class EntityId; }
namespace MX::Logic::Skills { class SkillSpecification; }
namespace UnityEngine { class Vector2; }
namespace MX::Logic::Data { class BeamEntityValue; }
namespace MX::Logic::BattleEntities { class Aura; }
namespace MX::Logic::Data { class AuraEntityValue; }
namespace MX::Logic::Data { class ProjectileEntityValue; }
namespace MX::Logic::Data { class ObstacleEntityValue; }
namespace MX::Logic::Data { class BarrierObstacleEntityValue; }
namespace MX::Logic::Data { class CharacterEntityValue; }
namespace MX::Logic::Data { class SupporterEntityValue; }
namespace MX::Logic::Data { class BattleItemEntityValue; }
namespace MX::Logic::Data { class BlockedAreaBattleItemEntityValue; }
namespace MX::Logic::Data { class SummonGroupSpawnerValue; }
namespace MX::Logic::Data { class AreaSpawnerValue; }
namespace MX::Logic::Data { class SkillEntitySpawnerValue; }
namespace MX::Logic::Data { class RandomProjectileEntitySpawnerValue; }
namespace MX::Logic::BattleEntities { class AreaSpawner; }
namespace MX::Logic::BattleEntities { class SkillEntityTimelineSpawner; }
class GroundNode;
namespace MX::Logic::Battles { class CharacterGroup; }
namespace MX::Logic::BattleEntities { class TSSCharacter; }

#define MX_LOGIC_SERVICES_SKILLENTITYFACTORY_SPAWNSKILLENTITY_OFFSET UNITYSDK_OFFSET(0x109C210)
#define MX_LOGIC_SERVICES_SKILLENTITYFACTORY_SPAWNTARGETSKILL_OFFSET UNITYSDK_OFFSET(0x109C580)
#define MX_LOGIC_SERVICES_SKILLENTITYFACTORY_SPAWNFORCEMOVETARGETENTITY_OFFSET UNITYSDK_OFFSET(0x109CEF0)
#define MX_LOGIC_SERVICES_SKILLENTITYFACTORY_SPAWNAREA_OFFSET UNITYSDK_OFFSET(0x109DB40)
#define MX_LOGIC_SERVICES_SKILLENTITYFACTORY_CREATEWORLDEFFECTAREA_OFFSET UNITYSDK_OFFSET(0x109DF00)
#define MX_LOGIC_SERVICES_SKILLENTITYFACTORY_CREATEWORLDEFFECTAREA_OFFSET UNITYSDK_OFFSET(0x109E200)
#define MX_LOGIC_SERVICES_SKILLENTITYFACTORY_SPAWNBEAM_OFFSET UNITYSDK_OFFSET(0x109E690)
#define MX_LOGIC_SERVICES_SKILLENTITYFACTORY_SPAWNAURA_OFFSET UNITYSDK_OFFSET(0x109F0E0)
#define MX_LOGIC_SERVICES_SKILLENTITYFACTORY_SPAWNPROJECTILE_OFFSET UNITYSDK_OFFSET(0x10A02B0)
#define MX_LOGIC_SERVICES_SKILLENTITYFACTORY_SPAWNOBSTACLE_OFFSET UNITYSDK_OFFSET(0x10A2530)
#define MX_LOGIC_SERVICES_SKILLENTITYFACTORY_SPAWNBARRIEROBSTACLE_OFFSET UNITYSDK_OFFSET(0x10A2AB0)
#define MX_LOGIC_SERVICES_SKILLENTITYFACTORY_SPAWNSUMMONEDCHARACTER_OFFSET UNITYSDK_OFFSET(0x10A2D70)
#define MX_LOGIC_SERVICES_SKILLENTITYFACTORY_SPAWNSUMMONEDSUPPORTER_OFFSET UNITYSDK_OFFSET(0x10A4B10)
#define MX_LOGIC_SERVICES_SKILLENTITYFACTORY_SPAWNBATTLEITEM_OFFSET UNITYSDK_OFFSET(0x10A4EC0)
#define MX_LOGIC_SERVICES_SKILLENTITYFACTORY_SPAWNBLOCKEDAREABATTLEITEM_OFFSET UNITYSDK_OFFSET(0x10A5140)
#define MX_LOGIC_SERVICES_SKILLENTITYFACTORY_SPAWNATTACHEDBATTLEITEM_OFFSET UNITYSDK_OFFSET(0x10A53C0)
#define MX_LOGIC_SERVICES_SKILLENTITYFACTORY_SPAWNGROUPSPAWNER_OFFSET UNITYSDK_OFFSET(0x10A5B50)
#define MX_LOGIC_SERVICES_SKILLENTITYFACTORY_SPAWNAREASPAWNER_OFFSET UNITYSDK_OFFSET(0x10A5F50)
#define MX_LOGIC_SERVICES_SKILLENTITYFACTORY_SPAWNSKILLENTITYTIMELINESPAWNER_OFFSET UNITYSDK_OFFSET(0x10A62C0)
#define MX_LOGIC_SERVICES_SKILLENTITYFACTORY_SPAWNRANDOMPROJECTILESPAWNER_OFFSET UNITYSDK_OFFSET(0x10A6650)
#define MX_LOGIC_SERVICES_SKILLENTITYFACTORY_CREATEAREASPAWNER_OFFSET UNITYSDK_OFFSET(0x10A6890)
#define MX_LOGIC_SERVICES_SKILLENTITYFACTORY_CREATESKILLENTITYTIMELINESPAWNER_OFFSET UNITYSDK_OFFSET(0x10A6940)
#define MX_LOGIC_SERVICES_SKILLENTITYFACTORY_CREATEEFFECTAREA_OFFSET UNITYSDK_OFFSET(0x109DD80)
#define MX_LOGIC_SERVICES_SKILLENTITYFACTORY_CREATELOCALEFFECTAREA_OFFSET UNITYSDK_OFFSET(0x10A6A00)
#define MX_LOGIC_SERVICES_SKILLENTITYFACTORY_FINDTSSSPWANPOSITION_OFFSET UNITYSDK_OFFSET(0x10A7680)
#define MX_LOGIC_SERVICES_SKILLENTITYFACTORY_CHECKTSSAREATOSPAWN_OFFSET UNITYSDK_OFFSET(0x10A78E0)

namespace MX::Logic::Services
{
	inline static constexpr unsigned int SkillEntityFactory_TypeDefinitionIndex = 12977;

	class SkillEntityFactory : public Il2CppObject
	{
	public:
		::System::Void SpawnSkillEntity(::MX::Logic::Data::SkillEntityValue* arg, ::MX::Logic::Battles::Battle* arg2, ::MX::Logic::Skills::IEntitySpawnable* arg3, ::System::Int32 arg4, ::System::Int32 arg5, ::MX::Logic::BattleEntities::BattleEntity* arg6, ::MX::Logic::BattleEntities::IHitCheckCouplingProvider* arg7)
		{
			((::System::Void(*)(::MX::Logic::Data::SkillEntityValue*, ::MX::Logic::Battles::Battle*, ::MX::Logic::Skills::IEntitySpawnable*, ::System::Int32, ::System::Int32, ::MX::Logic::BattleEntities::BattleEntity*, ::MX::Logic::BattleEntities::IHitCheckCouplingProvider*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SERVICES_SKILLENTITYFACTORY_SPAWNSKILLENTITY_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, arg7, nullptr);
		}

		::System::Void SpawnTargetSkill(::MX::Logic::Battles::Battle* arg, ::MX::Logic::Skills::IEntitySpawnable* arg2, ::MX::Logic::Data::TargetSkillEntityValue* arg3)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::MX::Logic::Skills::IEntitySpawnable*, ::MX::Logic::Data::TargetSkillEntityValue*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SERVICES_SKILLENTITYFACTORY_SPAWNTARGETSKILL_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void SpawnForceMoveTargetEntity(::MX::Logic::Battles::Battle* arg, ::MX::Logic::Skills::IEntitySpawnable* arg2, ::MX::Logic::Data::ForceMoveTargetEntityValue* arg3)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::MX::Logic::Skills::IEntitySpawnable*, ::MX::Logic::Data::ForceMoveTargetEntityValue*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SERVICES_SKILLENTITYFACTORY_SPAWNFORCEMOVETARGETENTITY_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void SpawnArea(::MX::Logic::Battles::Battle* arg, ::MX::Logic::Skills::IEntitySpawnable* arg2, ::MX::Logic::Data::AreaEntityValue* arg3, ::MX::Logic::BattleEntities::IHitCheckCouplingProvider* arg4)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::MX::Logic::Skills::IEntitySpawnable*, ::MX::Logic::Data::AreaEntityValue*, ::MX::Logic::BattleEntities::IHitCheckCouplingProvider*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SERVICES_SKILLENTITYFACTORY_SPAWNAREA_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::MX::Logic::BattleEntities::EffectArea* CreateWorldEffectArea(::MX::Logic::Battles::Battle* arg, ::MX::Logic::Skills::IEntitySpawnable* arg2, ::MX::Logic::Data::AreaEntityValue* arg3, ::MX::Logic::BattleEntities::BattleEntity* arg4)
		{
			return ((::MX::Logic::BattleEntities::EffectArea*(*)(::MX::Logic::Battles::Battle*, ::MX::Logic::Skills::IEntitySpawnable*, ::MX::Logic::Data::AreaEntityValue*, ::MX::Logic::BattleEntities::BattleEntity*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SERVICES_SKILLENTITYFACTORY_CREATEWORLDEFFECTAREA_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::MX::Logic::BattleEntities::EffectArea* CreateWorldEffectArea(::MX::Logic::Battles::Battle* arg, ::MX::Logic::BattleEntities::EntityId* arg2, ::MX::Logic::BattleEntities::BattleEntity* arg3, ::MX::Logic::Skills::IEntitySpawnable* arg4, ::MX::Logic::Skills::SkillSpecification* arg5, ::System::Int32 arg6, ::MX::Logic::Data::AreaEntityValue* arg7, ::UnityEngine::Vector2* arg8, ::UnityEngine::Vector2* arg9, ::UnityEngine::Vector2* arg10, ::MX::Logic::BattleEntities::BattleEntity* arg11)
		{
			return ((::MX::Logic::BattleEntities::EffectArea*(*)(::MX::Logic::Battles::Battle*, ::MX::Logic::BattleEntities::EntityId*, ::MX::Logic::BattleEntities::BattleEntity*, ::MX::Logic::Skills::IEntitySpawnable*, ::MX::Logic::Skills::SkillSpecification*, ::System::Int32, ::MX::Logic::Data::AreaEntityValue*, ::UnityEngine::Vector2*, ::UnityEngine::Vector2*, ::UnityEngine::Vector2*, ::MX::Logic::BattleEntities::BattleEntity*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SERVICES_SKILLENTITYFACTORY_CREATEWORLDEFFECTAREA_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11, nullptr);
		}

		Il2CppObject* SpawnBeam(::MX::Logic::Battles::Battle* arg, ::MX::Logic::BattleEntities::BattleEntity* arg2, ::MX::Logic::Skills::IEntitySpawnable* arg3, ::MX::Logic::Data::BeamEntityValue* arg4, ::System::Int64 arg5)
		{
			return ((Il2CppObject*(*)(::MX::Logic::Battles::Battle*, ::MX::Logic::BattleEntities::BattleEntity*, ::MX::Logic::Skills::IEntitySpawnable*, ::MX::Logic::Data::BeamEntityValue*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SERVICES_SKILLENTITYFACTORY_SPAWNBEAM_OFFSET))(arg, arg2, arg3, arg4, arg5, nullptr);
		}

		::MX::Logic::BattleEntities::Aura* SpawnAura(::MX::Logic::Battles::Battle* arg, ::MX::Logic::Skills::IEntitySpawnable* arg2, ::MX::Logic::Data::AuraEntityValue* arg3)
		{
			return ((::MX::Logic::BattleEntities::Aura*(*)(::MX::Logic::Battles::Battle*, ::MX::Logic::Skills::IEntitySpawnable*, ::MX::Logic::Data::AuraEntityValue*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SERVICES_SKILLENTITYFACTORY_SPAWNAURA_OFFSET))(arg, arg2, arg3, nullptr);
		}

		Il2CppObject* SpawnProjectile(::MX::Logic::Battles::Battle* arg, ::MX::Logic::Skills::IEntitySpawnable* arg2, ::MX::Logic::Data::ProjectileEntityValue* arg3, ::System::Int64 arg4)
		{
			return ((Il2CppObject*(*)(::MX::Logic::Battles::Battle*, ::MX::Logic::Skills::IEntitySpawnable*, ::MX::Logic::Data::ProjectileEntityValue*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SERVICES_SKILLENTITYFACTORY_SPAWNPROJECTILE_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Void SpawnObstacle(::MX::Logic::Battles::Battle* arg, ::MX::Logic::Skills::IEntitySpawnable* arg2, ::MX::Logic::Data::ObstacleEntityValue* arg3, ::System::Int32 arg4)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::MX::Logic::Skills::IEntitySpawnable*, ::MX::Logic::Data::ObstacleEntityValue*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SERVICES_SKILLENTITYFACTORY_SPAWNOBSTACLE_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Void SpawnBarrierObstacle(::MX::Logic::Battles::Battle* arg, ::MX::Logic::Skills::IEntitySpawnable* arg2, ::MX::Logic::Data::BarrierObstacleEntityValue* arg3, ::System::Int32 arg4)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::MX::Logic::Skills::IEntitySpawnable*, ::MX::Logic::Data::BarrierObstacleEntityValue*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SERVICES_SKILLENTITYFACTORY_SPAWNBARRIEROBSTACLE_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Void SpawnSummonedCharacter(::MX::Logic::Battles::Battle* arg, ::MX::Logic::Skills::IEntitySpawnable* arg2, ::MX::Logic::Data::CharacterEntityValue* arg3, ::System::Int32 arg4)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::MX::Logic::Skills::IEntitySpawnable*, ::MX::Logic::Data::CharacterEntityValue*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SERVICES_SKILLENTITYFACTORY_SPAWNSUMMONEDCHARACTER_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Void SpawnSummonedSupporter(::MX::Logic::Battles::Battle* arg, ::MX::Logic::Skills::IEntitySpawnable* arg2, ::MX::Logic::Data::SupporterEntityValue* arg3, ::System::Int32 arg4)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::MX::Logic::Skills::IEntitySpawnable*, ::MX::Logic::Data::SupporterEntityValue*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SERVICES_SKILLENTITYFACTORY_SPAWNSUMMONEDSUPPORTER_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Void SpawnBattleItem(::MX::Logic::Battles::Battle* arg, ::MX::Logic::Skills::IEntitySpawnable* arg2, ::MX::Logic::Data::BattleItemEntityValue* arg3, ::System::Int32 arg4)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::MX::Logic::Skills::IEntitySpawnable*, ::MX::Logic::Data::BattleItemEntityValue*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SERVICES_SKILLENTITYFACTORY_SPAWNBATTLEITEM_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Void SpawnBlockedAreaBattleItem(::MX::Logic::Battles::Battle* arg, ::MX::Logic::Skills::IEntitySpawnable* arg2, ::MX::Logic::Data::BlockedAreaBattleItemEntityValue* arg3, ::System::Int32 arg4)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::MX::Logic::Skills::IEntitySpawnable*, ::MX::Logic::Data::BlockedAreaBattleItemEntityValue*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SERVICES_SKILLENTITYFACTORY_SPAWNBLOCKEDAREABATTLEITEM_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Void SpawnAttachedBattleItem(::MX::Logic::Battles::Battle* arg, ::MX::Logic::Skills::IEntitySpawnable* arg2, ::MX::Logic::Data::BattleItemEntityValue* arg3, ::System::Int32 arg4)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::MX::Logic::Skills::IEntitySpawnable*, ::MX::Logic::Data::BattleItemEntityValue*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SERVICES_SKILLENTITYFACTORY_SPAWNATTACHEDBATTLEITEM_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Void SpawnGroupSpawner(::MX::Logic::Battles::Battle* arg, ::MX::Logic::Skills::IEntitySpawnable* arg2, ::MX::Logic::Data::SummonGroupSpawnerValue* arg3)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::MX::Logic::Skills::IEntitySpawnable*, ::MX::Logic::Data::SummonGroupSpawnerValue*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SERVICES_SKILLENTITYFACTORY_SPAWNGROUPSPAWNER_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void SpawnAreaSpawner(::MX::Logic::Battles::Battle* arg, ::MX::Logic::Skills::IEntitySpawnable* arg2, ::MX::Logic::Data::AreaSpawnerValue* arg3, ::System::Int64 arg4)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::MX::Logic::Skills::IEntitySpawnable*, ::MX::Logic::Data::AreaSpawnerValue*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SERVICES_SKILLENTITYFACTORY_SPAWNAREASPAWNER_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Void SpawnSkillEntityTimelineSpawner(::MX::Logic::Battles::Battle* arg, ::MX::Logic::Skills::IEntitySpawnable* arg2, ::MX::Logic::Data::SkillEntitySpawnerValue* arg3, ::System::Int64 arg4)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::MX::Logic::Skills::IEntitySpawnable*, ::MX::Logic::Data::SkillEntitySpawnerValue*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SERVICES_SKILLENTITYFACTORY_SPAWNSKILLENTITYTIMELINESPAWNER_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Void SpawnRandomProjectileSpawner(::MX::Logic::Battles::Battle* arg, ::MX::Logic::Skills::IEntitySpawnable* arg2, ::MX::Logic::Data::RandomProjectileEntitySpawnerValue* arg3, ::System::Int64 arg4)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::MX::Logic::Skills::IEntitySpawnable*, ::MX::Logic::Data::RandomProjectileEntitySpawnerValue*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SERVICES_SKILLENTITYFACTORY_SPAWNRANDOMPROJECTILESPAWNER_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::MX::Logic::BattleEntities::AreaSpawner* CreateAreaSpawner(::MX::Logic::BattleEntities::EntityId* arg, ::MX::Logic::BattleEntities::BattleEntity* arg2, ::MX::Logic::Skills::SkillSpecification* arg3, ::System::Int32 arg4, ::MX::Logic::Data::AreaSpawnerValue* arg5, ::System::Int64 arg6, ::MX::Logic::BattleEntities::BattleEntity* arg7, ::UnityEngine::Vector2* arg8)
		{
			return ((::MX::Logic::BattleEntities::AreaSpawner*(*)(::MX::Logic::BattleEntities::EntityId*, ::MX::Logic::BattleEntities::BattleEntity*, ::MX::Logic::Skills::SkillSpecification*, ::System::Int32, ::MX::Logic::Data::AreaSpawnerValue*, ::System::Int64, ::MX::Logic::BattleEntities::BattleEntity*, ::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SERVICES_SKILLENTITYFACTORY_CREATEAREASPAWNER_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, arg7, arg8, nullptr);
		}

		::MX::Logic::BattleEntities::SkillEntityTimelineSpawner* CreateSkillEntityTimelineSpawner(::MX::Logic::BattleEntities::EntityId* arg, ::MX::Logic::BattleEntities::BattleEntity* arg2, ::MX::Logic::Skills::SkillSpecification* arg3, ::System::Int32 arg4, ::MX::Logic::Data::SkillEntitySpawnerValue* arg5, ::MX::Logic::Skills::IEntitySpawnable* arg6, ::System::Int64 arg7, ::MX::Logic::BattleEntities::BattleEntity* arg8, ::UnityEngine::Vector2* arg9)
		{
			return ((::MX::Logic::BattleEntities::SkillEntityTimelineSpawner*(*)(::MX::Logic::BattleEntities::EntityId*, ::MX::Logic::BattleEntities::BattleEntity*, ::MX::Logic::Skills::SkillSpecification*, ::System::Int32, ::MX::Logic::Data::SkillEntitySpawnerValue*, ::MX::Logic::Skills::IEntitySpawnable*, ::System::Int64, ::MX::Logic::BattleEntities::BattleEntity*, ::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SERVICES_SKILLENTITYFACTORY_CREATESKILLENTITYTIMELINESPAWNER_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, nullptr);
		}

		::MX::Logic::BattleEntities::EffectArea* CreateEffectArea(::MX::Logic::Battles::Battle* arg, ::MX::Logic::Skills::IEntitySpawnable* arg2, ::MX::Logic::Data::AreaEntityValue* arg3)
		{
			return ((::MX::Logic::BattleEntities::EffectArea*(*)(::MX::Logic::Battles::Battle*, ::MX::Logic::Skills::IEntitySpawnable*, ::MX::Logic::Data::AreaEntityValue*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SERVICES_SKILLENTITYFACTORY_CREATEEFFECTAREA_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::MX::Logic::BattleEntities::EffectArea* CreateLocalEffectArea(::MX::Logic::Battles::Battle* arg, ::MX::Logic::Skills::IEntitySpawnable* arg2, ::MX::Logic::Data::AreaEntityValue* arg3)
		{
			return ((::MX::Logic::BattleEntities::EffectArea*(*)(::MX::Logic::Battles::Battle*, ::MX::Logic::Skills::IEntitySpawnable*, ::MX::Logic::Data::AreaEntityValue*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SERVICES_SKILLENTITYFACTORY_CREATELOCALEFFECTAREA_OFFSET))(arg, arg2, arg3, nullptr);
		}

		GroundNode* FindTSSSpwanPosition(::MX::Logic::Battles::Battle* arg, ::MX::Logic::Battles::CharacterGroup* arg2, ::MX::Logic::BattleEntities::TSSCharacter* arg3)
		{
			return ((GroundNode*(*)(::MX::Logic::Battles::Battle*, ::MX::Logic::Battles::CharacterGroup*, ::MX::Logic::BattleEntities::TSSCharacter*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SERVICES_SKILLENTITYFACTORY_FINDTSSSPWANPOSITION_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Boolean CheckTSSAreaToSpawn(::MX::Logic::Battles::Battle* arg, GroundNode* arg2, ::MX::Logic::BattleEntities::TSSCharacter* arg3)
		{
			return ((::System::Boolean(*)(::MX::Logic::Battles::Battle*, GroundNode*, ::MX::Logic::BattleEntities::TSSCharacter*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SERVICES_SKILLENTITYFACTORY_CHECKTSSAREATOSPAWN_OFFSET))(arg, arg2, arg3, nullptr);
		}

	};
}

