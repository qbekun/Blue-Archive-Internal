#pragma once
#include "unitysdk.h"

namespace MX::Logic::BattleEntities { class GroundObstacle; }
namespace MX::Visual::Battles { class BattleActorComponent; }
namespace MX::Logic::BattleEntities { class TSSCharacter; }
namespace MX::Logic::BattleEntities { class BattleItem; }
class GroundSpawnPointBaseVisual;
namespace MX::Logic::BattleEntities { class SpawnPointBase; }
namespace MX::Logic::BattleEntities { class O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4; }
class SpawnMovePointVisual;
namespace MX::Logic::BattleEntities { class SpawnMovePoint; }
class SkillActorVisual;
namespace MX::Logic::BattleEntities { class SkillActor; }
namespace MX::Logic::BattleEntities { class SupportActor; }

#define ENTITYVISUALFACTORY_CREATEOBSTACLE_OFFSET UNITYSDK_OFFSET(0x15A9EB0)
#define ENTITYVISUALFACTORY_CREATETSS_OFFSET UNITYSDK_OFFSET(0x15AA090)
#define ENTITYVISUALFACTORY_CREATEBATTLEITEM_OFFSET UNITYSDK_OFFSET(0x15AA350)
#define ENTITYVISUALFACTORY_CREATEGROUNDPOINTVISUAL_OFFSET UNITYSDK_OFFSET(0x15AA900)
#define ENTITYVISUALFACTORY_CREATECHARACTER_OFFSET UNITYSDK_OFFSET(0x15AAAD0)
#define ENTITYVISUALFACTORY_CREATESPAWNMOVEPOINTVISUAL_OFFSET UNITYSDK_OFFSET(0x15AADC0)
#define ENTITYVISUALFACTORY_CREATESKILLACTOR_OFFSET UNITYSDK_OFFSET(0x15AAEE0)
#define ENTITYVISUALFACTORY_CREATESUPPORTACTOR_OFFSET UNITYSDK_OFFSET(0x15AAF80)

	inline static constexpr unsigned int EntityVisualFactory_TypeDefinitionIndex = 1111;

	class EntityVisualFactory : public Il2CppObject
	{
	public:
		Il2CppObject* CreateObstacle(::MX::Logic::BattleEntities::GroundObstacle* arg, ::MX::Visual::Battles::BattleActorComponent* arg2, Il2CppObject* arg3, Il2CppObject* arg4)
		{
			return ((Il2CppObject*(*)(::MX::Logic::BattleEntities::GroundObstacle*, ::MX::Visual::Battles::BattleActorComponent*, Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + ENTITYVISUALFACTORY_CREATEOBSTACLE_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		Il2CppObject* CreateTSS(::MX::Logic::BattleEntities::TSSCharacter* arg, ::MX::Visual::Battles::BattleActorComponent* arg2, Il2CppObject* arg3, Il2CppObject* arg4)
		{
			return ((Il2CppObject*(*)(::MX::Logic::BattleEntities::TSSCharacter*, ::MX::Visual::Battles::BattleActorComponent*, Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + ENTITYVISUALFACTORY_CREATETSS_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Void CreateBattleItem(::MX::Visual::Battles::BattleActorComponent* arg, ::MX::Logic::BattleEntities::BattleItem* arg2, Il2CppObject* arg3, Il2CppObject* arg4)
		{
			((::System::Void(*)(::MX::Visual::Battles::BattleActorComponent*, ::MX::Logic::BattleEntities::BattleItem*, Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + ENTITYVISUALFACTORY_CREATEBATTLEITEM_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		GroundSpawnPointBaseVisual* CreateGroundPointVisual(::MX::Logic::BattleEntities::SpawnPointBase* arg)
		{
			return ((GroundSpawnPointBaseVisual*(*)(::MX::Logic::BattleEntities::SpawnPointBase*, ::PVOID))((::PBYTE)hIl2Cpp + ENTITYVISUALFACTORY_CREATEGROUNDPOINTVISUAL_OFFSET))(arg, nullptr);
		}

		Il2CppObject* CreateCharacter(::MX::Logic::BattleEntities::O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4* arg, ::MX::Visual::Battles::BattleActorComponent* arg2, Il2CppObject* arg3, Il2CppObject* arg4)
		{
			return ((Il2CppObject*(*)(::MX::Logic::BattleEntities::O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4*, ::MX::Visual::Battles::BattleActorComponent*, Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + ENTITYVISUALFACTORY_CREATECHARACTER_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		SpawnMovePointVisual* CreateSpawnMovePointVisual(::MX::Logic::BattleEntities::SpawnMovePoint* arg)
		{
			return ((SpawnMovePointVisual*(*)(::MX::Logic::BattleEntities::SpawnMovePoint*, ::PVOID))((::PBYTE)hIl2Cpp + ENTITYVISUALFACTORY_CREATESPAWNMOVEPOINTVISUAL_OFFSET))(arg, nullptr);
		}

		SkillActorVisual* CreateSkillActor(::MX::Logic::BattleEntities::SkillActor* arg, ::MX::Visual::Battles::BattleActorComponent* arg2)
		{
			return ((SkillActorVisual*(*)(::MX::Logic::BattleEntities::SkillActor*, ::MX::Visual::Battles::BattleActorComponent*, ::PVOID))((::PBYTE)hIl2Cpp + ENTITYVISUALFACTORY_CREATESKILLACTOR_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* CreateSupportActor(::MX::Logic::BattleEntities::SupportActor* arg, ::MX::Visual::Battles::BattleActorComponent* arg2, Il2CppObject* arg3, Il2CppObject* arg4)
		{
			return ((Il2CppObject*(*)(::MX::Logic::BattleEntities::SupportActor*, ::MX::Visual::Battles::BattleActorComponent*, Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + ENTITYVISUALFACTORY_CREATESUPPORTACTOR_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

	};

