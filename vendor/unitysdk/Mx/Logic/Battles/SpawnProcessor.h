#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::BattleEntities { class BattleItem; }
namespace MX::Logic::Battles { class Battle; }
namespace MX::Logic::BattleEntities { class EntityId; }
namespace UnityEngine { class Vector2; }
namespace MX::Logic::Data { class BattleItemEntityValue; }
namespace MX::Logic::BattleEntities { class BattleEntity; }
namespace MX::Logic::Skills { class SkillSpecification; }
namespace MX::Logic::BattleEntities { class SupportActor; }
namespace MX::Logic::Skills { class IEntitySpawnable; }
namespace MX::Logic::Data { class SupporterEntityValue; }
namespace MX::Logic::BattleEntities { class O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4; }
namespace MX::Logic::Data { class CharacterEntityValue; }
namespace MX::Logic::BattleEntities { class SkillSlot; }
namespace MX::Logic::BattleEntities { class GroundObstacle; }
namespace UnityEngine { class Vector3; }
namespace MX::Logic::Data { class ObstacleEntityValue; }
namespace MX::Logic::BattleEntities { class BarrierObstacle; }
namespace MX::Logic::Data { class BarrierObstacleEntityValue; }
namespace MX::Logic::Battles { class SpawnCharacterSetting; }
namespace MX::Logic::BattleEntities { class BlockedAreaBattleItem; }
namespace MX::Logic::Data { class BlockedAreaBattleItemEntityValue; }
namespace MX::Logic::BattleEntities { class TSSCharacter; }
namespace MX::Logic::Data { class HeroSetting; }

#define MX_LOGIC_BATTLES_SPAWNPROCESSOR_CREATEBATTLEITEM_OFFSET UNITYSDK_OFFSET(0x129B960)
#define MX_LOGIC_BATTLES_SPAWNPROCESSOR_CREATESUMMONEDSUPPORTER_OFFSET UNITYSDK_OFFSET(0x129BA10)
#define MX_LOGIC_BATTLES_SPAWNPROCESSOR_CREATEPROJECTILEBOUNDCHARACTER_OFFSET UNITYSDK_OFFSET(0x129C300)
#define MX_LOGIC_BATTLES_SPAWNPROCESSOR_RESERVESPAWNSUMMONEDCHARACTER_OFFSET UNITYSDK_OFFSET(0x129D140)
#define MX_LOGIC_BATTLES_SPAWNPROCESSOR_RESERVESPAWNPROJECTILEBOUNDCHARACTER_OFFSET UNITYSDK_OFFSET(0x129E710)
#define MX_LOGIC_BATTLES_SPAWNPROCESSOR_CREATERUNTIMEGROUNDOBSTACLE_OFFSET UNITYSDK_OFFSET(0x129E920)
#define MX_LOGIC_BATTLES_SPAWNPROCESSOR_CREATEBARRIEROBSTACLE_OFFSET UNITYSDK_OFFSET(0x129EFE0)
#define MX_LOGIC_BATTLES_SPAWNPROCESSOR_CREATECHARACTER_OFFSET UNITYSDK_OFFSET(0x129F690)
#define MX_LOGIC_BATTLES_SPAWNPROCESSOR_CREATEBLOCKEDAREA_OFFSET UNITYSDK_OFFSET(0x129F740)
#define MX_LOGIC_BATTLES_SPAWNPROCESSOR_CREATEOBSTACLE_OFFSET UNITYSDK_OFFSET(0x129F7F0)
#define MX_LOGIC_BATTLES_SPAWNPROCESSOR_CREATEATTACHEDBATTLEITEM_OFFSET UNITYSDK_OFFSET(0x129F850)
#define MX_LOGIC_BATTLES_SPAWNPROCESSOR_UPDATE_OFFSET UNITYSDK_OFFSET(0x129F900)
#define MX_LOGIC_BATTLES_SPAWNPROCESSOR_CREATESUMMONEDCHARACTER_OFFSET UNITYSDK_OFFSET(0x129D470)
#define MX_LOGIC_BATTLES_SPAWNPROCESSOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x129FCB0)
#define MX_LOGIC_BATTLES_SPAWNPROCESSOR_CREATETSSCHARACTER_OFFSET UNITYSDK_OFFSET(0x129FD80)
#define MX_LOGIC_BATTLES_SPAWNPROCESSOR_RESERVESPAWNSUMMONEDSUPPORTER_OFFSET UNITYSDK_OFFSET(0x129FDC0)

namespace MX::Logic::Battles
{
	inline static constexpr unsigned int SpawnProcessor_TypeDefinitionIndex = 14095;

	class SpawnProcessor : public Il2CppObject
	{
	public:
		Il2CppObject* spawnReserves; // 0x10
		Il2CppObject* supporterSpawnReserves; // 0x18

		::MX::Logic::BattleEntities::BattleItem* CreateBattleItem(::MX::Logic::Battles::Battle* arg, ::MX::Logic::BattleEntities::EntityId* arg2, ::UnityEngine::Vector2* arg3, ::UnityEngine::Vector2* arg4, ::MX::Logic::Data::BattleItemEntityValue* arg5, ::MX::Logic::BattleEntities::BattleEntity* arg6, ::MX::Logic::Skills::SkillSpecification* arg7, ::System::Int32 arg8, ::System::Int32 arg9)
		{
			return ((::MX::Logic::BattleEntities::BattleItem*(*)(::MX::Logic::Battles::Battle*, ::MX::Logic::BattleEntities::EntityId*, ::UnityEngine::Vector2*, ::UnityEngine::Vector2*, ::MX::Logic::Data::BattleItemEntityValue*, ::MX::Logic::BattleEntities::BattleEntity*, ::MX::Logic::Skills::SkillSpecification*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SPAWNPROCESSOR_CREATEBATTLEITEM_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, nullptr);
		}

		::MX::Logic::BattleEntities::SupportActor* CreateSummonedSupporter(::MX::Logic::Battles::Battle* arg, ::MX::Logic::Skills::IEntitySpawnable* arg2, ::MX::Logic::Data::SupporterEntityValue* arg3, ::System::Int32 arg4, ::System::Int32 arg5)
		{
			return ((::MX::Logic::BattleEntities::SupportActor*(*)(::MX::Logic::Battles::Battle*, ::MX::Logic::Skills::IEntitySpawnable*, ::MX::Logic::Data::SupporterEntityValue*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SPAWNPROCESSOR_CREATESUMMONEDSUPPORTER_OFFSET))(arg, arg2, arg3, arg4, arg5, nullptr);
		}

		::MX::Logic::BattleEntities::O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4* CreateProjectileBoundCharacter(::MX::Logic::Battles::Battle* arg, ::MX::Logic::Skills::IEntitySpawnable* arg2, ::MX::Logic::Data::CharacterEntityValue* arg3, ::UnityEngine::Vector2* arg4, ::UnityEngine::Vector2* arg5, ::System::Int32 arg6)
		{
			return ((::MX::Logic::BattleEntities::O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4*(*)(::MX::Logic::Battles::Battle*, ::MX::Logic::Skills::IEntitySpawnable*, ::MX::Logic::Data::CharacterEntityValue*, ::UnityEngine::Vector2*, ::UnityEngine::Vector2*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SPAWNPROCESSOR_CREATEPROJECTILEBOUNDCHARACTER_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, nullptr);
		}

		::MX::Logic::BattleEntities::O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4* ReserveSpawnSummonedCharacter(::MX::Logic::Battles::Battle* arg, ::MX::Logic::Skills::IEntitySpawnable* arg2, ::MX::Logic::Data::CharacterEntityValue* arg3, ::UnityEngine::Vector2* arg4, ::UnityEngine::Vector2* arg5, ::System::Int32 arg6, ::MX::Logic::BattleEntities::SkillSlot* arg7, ::System::Int32 arg8)
		{
			return ((::MX::Logic::BattleEntities::O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4*(*)(::MX::Logic::Battles::Battle*, ::MX::Logic::Skills::IEntitySpawnable*, ::MX::Logic::Data::CharacterEntityValue*, ::UnityEngine::Vector2*, ::UnityEngine::Vector2*, ::System::Int32, ::MX::Logic::BattleEntities::SkillSlot*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SPAWNPROCESSOR_RESERVESPAWNSUMMONEDCHARACTER_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, arg7, arg8, nullptr);
		}

		::MX::Logic::BattleEntities::O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4* ReserveSpawnProjectileBoundCharacter(::MX::Logic::Battles::Battle* arg, ::MX::Logic::Skills::IEntitySpawnable* arg2, ::MX::Logic::Data::CharacterEntityValue* arg3, ::UnityEngine::Vector2* arg4, ::UnityEngine::Vector2* arg5, ::System::Int32 arg6)
		{
			return ((::MX::Logic::BattleEntities::O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4*(*)(::MX::Logic::Battles::Battle*, ::MX::Logic::Skills::IEntitySpawnable*, ::MX::Logic::Data::CharacterEntityValue*, ::UnityEngine::Vector2*, ::UnityEngine::Vector2*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SPAWNPROCESSOR_RESERVESPAWNPROJECTILEBOUNDCHARACTER_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, nullptr);
		}

		::MX::Logic::BattleEntities::GroundObstacle* CreateRuntimeGroundObstacle(::MX::Logic::Battles::Battle* arg, ::MX::Logic::Skills::IEntitySpawnable* arg2, ::UnityEngine::Vector3* arg3, ::UnityEngine::Vector3* arg4, ::MX::Logic::Data::ObstacleEntityValue* arg5, ::System::Int32 arg6)
		{
			return ((::MX::Logic::BattleEntities::GroundObstacle*(*)(::MX::Logic::Battles::Battle*, ::MX::Logic::Skills::IEntitySpawnable*, ::UnityEngine::Vector3*, ::UnityEngine::Vector3*, ::MX::Logic::Data::ObstacleEntityValue*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SPAWNPROCESSOR_CREATERUNTIMEGROUNDOBSTACLE_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, nullptr);
		}

		::MX::Logic::BattleEntities::BarrierObstacle* CreateBarrierObstacle(::MX::Logic::Battles::Battle* arg, ::MX::Logic::Skills::IEntitySpawnable* arg2, ::UnityEngine::Vector2* arg3, ::MX::Logic::Data::BarrierObstacleEntityValue* arg4, ::System::Int32 arg5)
		{
			return ((::MX::Logic::BattleEntities::BarrierObstacle*(*)(::MX::Logic::Battles::Battle*, ::MX::Logic::Skills::IEntitySpawnable*, ::UnityEngine::Vector2*, ::MX::Logic::Data::BarrierObstacleEntityValue*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SPAWNPROCESSOR_CREATEBARRIEROBSTACLE_OFFSET))(arg, arg2, arg3, arg4, arg5, nullptr);
		}

		::MX::Logic::BattleEntities::O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4* CreateCharacter(::MX::Logic::Battles::Battle* arg, ::MX::Logic::Battles::SpawnCharacterSetting* arg2, ::System::Boolean arg3)
		{
			return ((::MX::Logic::BattleEntities::O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4*(*)(::MX::Logic::Battles::Battle*, ::MX::Logic::Battles::SpawnCharacterSetting*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SPAWNPROCESSOR_CREATECHARACTER_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::MX::Logic::BattleEntities::BlockedAreaBattleItem* CreateBlockedArea(::MX::Logic::Battles::Battle* arg, ::MX::Logic::BattleEntities::EntityId* arg2, ::UnityEngine::Vector2* arg3, ::UnityEngine::Vector2* arg4, ::MX::Logic::Data::BlockedAreaBattleItemEntityValue* arg5, ::MX::Logic::BattleEntities::BattleEntity* arg6, ::MX::Logic::Skills::SkillSpecification* arg7, ::System::Int32 arg8, ::System::Int32 arg9)
		{
			return ((::MX::Logic::BattleEntities::BlockedAreaBattleItem*(*)(::MX::Logic::Battles::Battle*, ::MX::Logic::BattleEntities::EntityId*, ::UnityEngine::Vector2*, ::UnityEngine::Vector2*, ::MX::Logic::Data::BlockedAreaBattleItemEntityValue*, ::MX::Logic::BattleEntities::BattleEntity*, ::MX::Logic::Skills::SkillSpecification*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SPAWNPROCESSOR_CREATEBLOCKEDAREA_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, nullptr);
		}

		::MX::Logic::BattleEntities::GroundObstacle* CreateObstacle(::MX::Logic::BattleEntities::EntityId* arg, ::System::String* str, ::UnityEngine::Vector3* arg2, ::UnityEngine::Vector3* arg3)
		{
			return ((::MX::Logic::BattleEntities::GroundObstacle*(*)(::MX::Logic::BattleEntities::EntityId*, ::System::String*, ::UnityEngine::Vector3*, ::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SPAWNPROCESSOR_CREATEOBSTACLE_OFFSET))(arg, str, arg2, arg3, nullptr);
		}

		::MX::Logic::BattleEntities::BattleItem* CreateAttachedBattleItem(::MX::Logic::Battles::Battle* arg, ::MX::Logic::BattleEntities::BattleEntity* arg2, ::MX::Logic::BattleEntities::EntityId* arg3, ::MX::Logic::Data::BattleItemEntityValue* arg4, ::MX::Logic::BattleEntities::BattleEntity* arg5, ::MX::Logic::Skills::SkillSpecification* arg6, ::System::Int32 arg7, ::System::Int32 arg8)
		{
			return ((::MX::Logic::BattleEntities::BattleItem*(*)(::MX::Logic::Battles::Battle*, ::MX::Logic::BattleEntities::BattleEntity*, ::MX::Logic::BattleEntities::EntityId*, ::MX::Logic::Data::BattleItemEntityValue*, ::MX::Logic::BattleEntities::BattleEntity*, ::MX::Logic::Skills::SkillSpecification*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SPAWNPROCESSOR_CREATEATTACHEDBATTLEITEM_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, arg7, arg8, nullptr);
		}

		::System::Void Update(::MX::Logic::Battles::Battle* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SPAWNPROCESSOR_UPDATE_OFFSET))(arg, nullptr);
		}

		::MX::Logic::BattleEntities::O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4* CreateSummonedCharacter(::MX::Logic::Battles::Battle* arg, ::MX::Logic::Skills::IEntitySpawnable* arg2, ::MX::Logic::Data::CharacterEntityValue* arg3, ::UnityEngine::Vector2* arg4, ::UnityEngine::Vector2* arg5, ::System::Int32 arg6, ::MX::Logic::BattleEntities::SkillSlot* arg7, ::System::Int32 arg8)
		{
			return ((::MX::Logic::BattleEntities::O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4*(*)(::MX::Logic::Battles::Battle*, ::MX::Logic::Skills::IEntitySpawnable*, ::MX::Logic::Data::CharacterEntityValue*, ::UnityEngine::Vector2*, ::UnityEngine::Vector2*, ::System::Int32, ::MX::Logic::BattleEntities::SkillSlot*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SPAWNPROCESSOR_CREATESUMMONEDCHARACTER_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, arg7, arg8, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SPAWNPROCESSOR_.CTOR_OFFSET))(nullptr);
		}

		::MX::Logic::BattleEntities::TSSCharacter* CreateTSSCharacter(::MX::Logic::Battles::Battle* arg, ::MX::Logic::Data::HeroSetting* arg2, ::System::Boolean arg3, ::System::Boolean arg4, Il2CppObject* arg5, Il2CppObject* arg6)
		{
			return ((::MX::Logic::BattleEntities::TSSCharacter*(*)(::MX::Logic::Battles::Battle*, ::MX::Logic::Data::HeroSetting*, ::System::Boolean, ::System::Boolean, Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SPAWNPROCESSOR_CREATETSSCHARACTER_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, nullptr);
		}

		::MX::Logic::BattleEntities::SupportActor* ReserveSpawnSummonedSupporter(::MX::Logic::Battles::Battle* arg, ::MX::Logic::Skills::IEntitySpawnable* arg2, ::MX::Logic::Data::SupporterEntityValue* arg3, ::System::Int32 arg4, ::System::Int32 arg5)
		{
			return ((::MX::Logic::BattleEntities::SupportActor*(*)(::MX::Logic::Battles::Battle*, ::MX::Logic::Skills::IEntitySpawnable*, ::MX::Logic::Data::SupporterEntityValue*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SPAWNPROCESSOR_RESERVESPAWNSUMMONEDSUPPORTER_OFFSET))(arg, arg2, arg3, arg4, arg5, nullptr);
		}

	};
}

