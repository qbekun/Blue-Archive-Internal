#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Battles { class Battle; }
namespace MX::Logic::Battles { class CharacterGroup; }
namespace MX::Logic::BattleEntities { class O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4; }
namespace FlatData { class GroundNodeType; }
namespace MX::Logic::BattleEntities { class ObstaclePosition; }
class GroundNode;
namespace MX::Logic::BattleEntities { class LastFailedPathInfo; }
namespace MX::Logic::BattleEntities { class BattleEntity; }
namespace MX::Logic::Skills { class TargetingType; }
namespace UnityEngine { class Vector2; }
namespace MX::Logic::Battles { class ObstacleEventArgs; }
namespace MX::Logic::Battles { class BattleEntitySpawnedEventArgs; }
namespace MX::Logic::BattleEntities { class GroundObstacle; }
namespace MX::Logic::BattleEntities { class IObstacle; }
namespace MX::Logic::BattleEntities { class EntityId; }
namespace MX::Logic::Battles { class CharacterGroundNodeChangedEventArgs; }

#define MX_LOGIC_BATTLEENTITIES_PATHFINDER_GET_BATTLE_OFFSET UNITYSDK_OFFSET(0x1185AD0)
#define MX_LOGIC_BATTLEENTITIES_PATHFINDER_GET_OWNERCHARACTERGROUP_OFFSET UNITYSDK_OFFSET(0x1185AE0)
#define MX_LOGIC_BATTLEENTITIES_PATHFINDER_GET_OWNER_OFFSET UNITYSDK_OFFSET(0x1185AF0)
#define MX_LOGIC_BATTLEENTITIES_PATHFINDER_GET_TARGETBATTLEENTITY_OFFSET UNITYSDK_OFFSET(0x1185B00)
#define MX_LOGIC_BATTLEENTITIES_PATHFINDER_GET_TARGETINGTYPE_OFFSET UNITYSDK_OFFSET(0x1185B30)
#define MX_LOGIC_BATTLEENTITIES_PATHFINDER_GET_TARGETPOSITION_OFFSET UNITYSDK_OFFSET(0x1185B60)
#define MX_LOGIC_BATTLEENTITIES_PATHFINDER_GET_ISPATHUSED_OFFSET UNITYSDK_OFFSET(0x1185B90)
#define MX_LOGIC_BATTLEENTITIES_PATHFINDER_SET_ISPATHUSED_OFFSET UNITYSDK_OFFSET(0x1185BA0)
#define MX_LOGIC_BATTLEENTITIES_PATHFINDER_GET_ISUSEINITIALRANGERATE_OFFSET UNITYSDK_OFFSET(0x1185BB0)
#define MX_LOGIC_BATTLEENTITIES_PATHFINDER_SET_ISUSEINITIALRANGERATE_OFFSET UNITYSDK_OFFSET(0x1185BC0)
#define MX_LOGIC_BATTLEENTITIES_PATHFINDER_GET_ISTARGETONLINEOFFIRE_OFFSET UNITYSDK_OFFSET(0x1185BD0)
#define MX_LOGIC_BATTLEENTITIES_PATHFINDER_GET_ISREFRESHPATHTOTARGETREQUIRED_OFFSET UNITYSDK_OFFSET(0x1186050)
#define MX_LOGIC_BATTLEENTITIES_PATHFINDER_GET_PATHTOATTACKTARGET_OFFSET UNITYSDK_OFFSET(0x1186360)
#define MX_LOGIC_BATTLEENTITIES_PATHFINDER_SET_PATHTOATTACKTARGET_OFFSET UNITYSDK_OFFSET(0x1186370)
#define MX_LOGIC_BATTLEENTITIES_PATHFINDER_GET_PATHTOATTACKTARGET_OFFSET UNITYSDK_OFFSET(0x1186380)
#define MX_LOGIC_BATTLEENTITIES_PATHFINDER_GET_OBSTACLETOATTACKTARGET_OFFSET UNITYSDK_OFFSET(0x1186390)
#define MX_LOGIC_BATTLEENTITIES_PATHFINDER_.CTOR_OFFSET UNITYSDK_OFFSET(0x11863A0)
#define MX_LOGIC_BATTLEENTITIES_PATHFINDER_BATTLE_OBSTACLEDESTROYED_OFFSET UNITYSDK_OFFSET(0x1186700)
#define MX_LOGIC_BATTLEENTITIES_PATHFINDER_BATTLE_OBSTACLEGROUNDNODECHANGED_OFFSET UNITYSDK_OFFSET(0x1186900)
#define MX_LOGIC_BATTLEENTITIES_PATHFINDER_BATTLE_BATTLEENTITYSPAWNED_OFFSET UNITYSDK_OFFSET(0x1186930)
#define MX_LOGIC_BATTLEENTITIES_PATHFINDER_RESETPATH_OFFSET UNITYSDK_OFFSET(0x1186A00)
#define MX_LOGIC_BATTLEENTITIES_PATHFINDER_GETPATHTOATTACKTARGET_OFFSET UNITYSDK_OFFSET(0x1186AA0)
#define MX_LOGIC_BATTLEENTITIES_PATHFINDER_ISALLNEIGHBORGROUNDNODENOTWALKABLE_OFFSET UNITYSDK_OFFSET(0x11899E0)
#define MX_LOGIC_BATTLEENTITIES_PATHFINDER_FINDPATHTOOBSTACLEPOINT_OFFSET UNITYSDK_OFFSET(0x1186F60)
#define MX_LOGIC_BATTLEENTITIES_PATHFINDER_FINDPATHTOATTACKRANGEPOINT_OFFSET UNITYSDK_OFFSET(0x1188380)
#define MX_LOGIC_BATTLEENTITIES_PATHFINDER_FINDPATHTOATTACKRANGEPOINTINFORMATION_OFFSET UNITYSDK_OFFSET(0x1189190)
#define MX_LOGIC_BATTLEENTITIES_PATHFINDER_ISOBSTACLEUNABLETOUSEEXISTSNEAR_OFFSET UNITYSDK_OFFSET(0x118AC10)
#define MX_LOGIC_BATTLEENTITIES_PATHFINDER_ISOBSTACLEPOINTSCANNOTSTAND_OFFSET UNITYSDK_OFFSET(0x118CFB0)
#define MX_LOGIC_BATTLEENTITIES_PATHFINDER_CANSTANDOBSTACLEPOINT_OFFSET UNITYSDK_OFFSET(0x118D160)
#define MX_LOGIC_BATTLEENTITIES_PATHFINDER_FINDATTACKABLEPOSITIONTOMOVE_OFFSET UNITYSDK_OFFSET(0x118A1E0)
#define MX_LOGIC_BATTLEENTITIES_PATHFINDER_ISATTACKABLEPOSITION_OFFSET UNITYSDK_OFFSET(0x1189F00)
#define MX_LOGIC_BATTLEENTITIES_PATHFINDER_FINDNEWPOSITIONWITHGAP_OFFSET UNITYSDK_OFFSET(0x118C150)
#define MX_LOGIC_BATTLEENTITIES_PATHFINDER_FINDNEWPOSITIONOUTOFCIRCLEWITHGAP_OFFSET UNITYSDK_OFFSET(0x118AEB0)
#define MX_LOGIC_BATTLEENTITIES_PATHFINDER_CHECKOTHEREXISTSNEAR_OFFSET UNITYSDK_OFFSET(0x118BE20)
#define MX_LOGIC_BATTLEENTITIES_PATHFINDER_ISLINEOFFIREBETWEENPOSITIONS_OFFSET UNITYSDK_OFFSET(0x1185CD0)
#define MX_LOGIC_BATTLEENTITIES_PATHFINDER_ISLINEOFFIREBETWEENPOSITIONS_OFFSET UNITYSDK_OFFSET(0x1185E40)
#define MX_LOGIC_BATTLEENTITIES_PATHFINDER_GETOBSTACLESTOCHECKLINEOFFIRE_OFFSET UNITYSDK_OFFSET(0x118D2A0)
#define MX_LOGIC_BATTLEENTITIES_PATHFINDER_SETDIRTYBITTOUPDATEPATH_OFFSET UNITYSDK_OFFSET(0x1186730)
#define MX_LOGIC_BATTLEENTITIES_PATHFINDER_CHECKTARGETPOSITIONOCCUPIED_OFFSET UNITYSDK_OFFSET(0x118D780)
#define MX_LOGIC_BATTLEENTITIES_PATHFINDER_CHECKBLOCKEDAREA_OFFSET UNITYSDK_OFFSET(0x1189E50)
#define MX_LOGIC_BATTLEENTITIES_PATHFINDER_CHECKBLOCKEDAREA_OFFSET UNITYSDK_OFFSET(0x118D200)
#define MX_LOGIC_BATTLEENTITIES_PATHFINDER_DEBUGDRAWFORMATIONLINE_OFFSET UNITYSDK_OFFSET(0x118D930)
#define MX_LOGIC_BATTLEENTITIES_PATHFINDER__FINDPATHTOATTACKRANGEPOINTINFORMATION_G__CHECKPREOCCUPIEDBYOTHER|57_0_OFFSET UNITYSDK_OFFSET(0x118AB20)

namespace MX::Logic::BattleEntities
{
	inline static constexpr unsigned int PathFinder_TypeDefinitionIndex = 13259;

	class PathFinder : public Il2CppObject
	{
	public:
		::MX::Logic::Battles::Battle* _Battle_k__BackingField; // 0x10
		::MX::Logic::Battles::CharacterGroup* _OwnerCharacterGroup_k__BackingField; // 0x18
		::MX::Logic::BattleEntities::O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4* _Owner_k__BackingField; // 0x20
		::FlatData::GroundNodeType* passableNodeType; // 0x28
		::System::Boolean checkTSSBlocked; // 0x2C
		::System::Boolean _IsPathUsed_k__BackingField; // 0x2D
		::System::Boolean _IsUseInitialRangeRate_k__BackingField; // 0x2E
		Il2CppObject* _pathToAttackTarget_k__BackingField; // 0x30
		::MX::Logic::BattleEntities::ObstaclePosition* obstacleToAttackTarget; // 0x38
		GroundNode* lastTargetPosition; // 0x40
		GroundNode* lastOwnerPosition; // 0x48
		::System::Boolean isObstacleChanged; // 0x50
		::System::Boolean isNeedToFindAnotherObstacle; // 0x51
		::MX::Logic::BattleEntities::O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4* characterAtLastGroundNode; // 0x58
		::System::Boolean isFireLineCheckMyObstacle; // 0x60
		::System::Boolean isFireLineCheckAllyObstacle; // 0x61
		::System::Boolean isFireLineCheckEnemyObstacle; // 0x62
		::System::Boolean isFireLineCheckEmptyObstacle; // 0x63
		::MX::Logic::BattleEntities::LastFailedPathInfo* lastFailedPathInfo; // 0x68
		Il2CppObject* lineOfFireFailed; // 0x70

		::MX::Logic::Battles::Battle* get_Battle()
		{
			return ((::MX::Logic::Battles::Battle*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_PATHFINDER_GET_BATTLE_OFFSET))(nullptr);
		}

		::MX::Logic::Battles::CharacterGroup* get_OwnerCharacterGroup()
		{
			return ((::MX::Logic::Battles::CharacterGroup*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_PATHFINDER_GET_OWNERCHARACTERGROUP_OFFSET))(nullptr);
		}

		::MX::Logic::BattleEntities::O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4* get_Owner()
		{
			return ((::MX::Logic::BattleEntities::O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_PATHFINDER_GET_OWNER_OFFSET))(nullptr);
		}

		::MX::Logic::BattleEntities::BattleEntity* get_TargetBattleEntity()
		{
			return ((::MX::Logic::BattleEntities::BattleEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_PATHFINDER_GET_TARGETBATTLEENTITY_OFFSET))(nullptr);
		}

		::MX::Logic::Skills::TargetingType* get_TargetingType()
		{
			return ((::MX::Logic::Skills::TargetingType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_PATHFINDER_GET_TARGETINGTYPE_OFFSET))(nullptr);
		}

		::UnityEngine::Vector2* get_TargetPosition()
		{
			return ((::UnityEngine::Vector2*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_PATHFINDER_GET_TARGETPOSITION_OFFSET))(nullptr);
		}

		::System::Boolean get_IsPathUsed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_PATHFINDER_GET_ISPATHUSED_OFFSET))(nullptr);
		}

		::System::Void set_IsPathUsed(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_PATHFINDER_SET_ISPATHUSED_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsUseInitialRangeRate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_PATHFINDER_GET_ISUSEINITIALRANGERATE_OFFSET))(nullptr);
		}

		::System::Void set_IsUseInitialRangeRate(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_PATHFINDER_SET_ISUSEINITIALRANGERATE_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsTargetOnLineOfFire()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_PATHFINDER_GET_ISTARGETONLINEOFFIRE_OFFSET))(nullptr);
		}

		::System::Boolean get_IsRefreshPathToTargetRequired()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_PATHFINDER_GET_ISREFRESHPATHTOTARGETREQUIRED_OFFSET))(nullptr);
		}

		Il2CppObject* get_pathToAttackTarget()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_PATHFINDER_GET_PATHTOATTACKTARGET_OFFSET))(nullptr);
		}

		::System::Void set_pathToAttackTarget(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_PATHFINDER_SET_PATHTOATTACKTARGET_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_PathToAttackTarget()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_PATHFINDER_GET_PATHTOATTACKTARGET_OFFSET))(nullptr);
		}

		::MX::Logic::BattleEntities::ObstaclePosition* get_ObstacleToAttackTarget()
		{
			return ((::MX::Logic::BattleEntities::ObstaclePosition*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_PATHFINDER_GET_OBSTACLETOATTACKTARGET_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::Logic::Battles::Battle* arg, ::MX::Logic::Battles::CharacterGroup* arg2, ::MX::Logic::BattleEntities::O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4* arg3)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::MX::Logic::Battles::CharacterGroup*, ::MX::Logic::BattleEntities::O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_PATHFINDER_.CTOR_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void Battle_ObstacleDestroyed(::System::Object* arg, ::MX::Logic::Battles::ObstacleEventArgs* arg2)
		{
			((::System::Void(*)(::System::Object*, ::MX::Logic::Battles::ObstacleEventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_PATHFINDER_BATTLE_OBSTACLEDESTROYED_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Battle_ObstacleGroundNodeChanged(::System::Object* arg, ::MX::Logic::Battles::ObstacleEventArgs* arg2)
		{
			((::System::Void(*)(::System::Object*, ::MX::Logic::Battles::ObstacleEventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_PATHFINDER_BATTLE_OBSTACLEGROUNDNODECHANGED_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Battle_BattleEntitySpawned(::System::Object* arg, ::MX::Logic::Battles::BattleEntitySpawnedEventArgs* arg2)
		{
			((::System::Void(*)(::System::Object*, ::MX::Logic::Battles::BattleEntitySpawnedEventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_PATHFINDER_BATTLE_BATTLEENTITYSPAWNED_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void ResetPath()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_PATHFINDER_RESETPATH_OFFSET))(nullptr);
		}

		::System::Boolean GetPathToAttackTarget(Il2CppObject&* arg, ::MX::Logic::BattleEntities::ObstaclePosition&* arg2, ::System::Boolean arg3)
		{
			return ((::System::Boolean(*)(Il2CppObject&*, ::MX::Logic::BattleEntities::ObstaclePosition&*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_PATHFINDER_GETPATHTOATTACKTARGET_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Boolean IsAllNeighborGroundNodeNotWalkable(::System::Int32 arg, ::System::Int32 arg2)
		{
			return ((::System::Boolean(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_PATHFINDER_ISALLNEIGHBORGROUNDNODENOTWALKABLE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void FindPathToObstaclePoint(Il2CppObject&* arg, ::MX::Logic::BattleEntities::ObstaclePosition&* arg2)
		{
			((::System::Void(*)(Il2CppObject&*, ::MX::Logic::BattleEntities::ObstaclePosition&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_PATHFINDER_FINDPATHTOOBSTACLEPOINT_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void FindPathToAttackRangePoint(Il2CppObject&* arg)
		{
			((::System::Void(*)(Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_PATHFINDER_FINDPATHTOATTACKRANGEPOINT_OFFSET))(arg, nullptr);
		}

		::System::Void FindPathToAttackRangePointInFormation(Il2CppObject&* arg)
		{
			((::System::Void(*)(Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_PATHFINDER_FINDPATHTOATTACKRANGEPOINTINFORMATION_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsObstacleUnableToUseExistsNear(GroundNode* arg)
		{
			return ((::System::Boolean(*)(GroundNode*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_PATHFINDER_ISOBSTACLEUNABLETOUSEEXISTSNEAR_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsObstaclePointsCanNotStand(::MX::Logic::BattleEntities::GroundObstacle* arg, GroundNode* arg2)
		{
			return ((::System::Boolean(*)(::MX::Logic::BattleEntities::GroundObstacle*, GroundNode*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_PATHFINDER_ISOBSTACLEPOINTSCANNOTSTAND_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean CanStandObstaclePoint(::MX::Logic::BattleEntities::GroundObstacle* arg)
		{
			return ((::System::Boolean(*)(::MX::Logic::BattleEntities::GroundObstacle*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_PATHFINDER_CANSTANDOBSTACLEPOINT_OFFSET))(arg, nullptr);
		}

		GroundNode* FindAttackablePositionToMove(GroundNode* arg, GroundNode* arg2, ::System::Single arg3, ::System::Int64 arg4, ::System::Boolean arg5)
		{
			return ((GroundNode*(*)(GroundNode*, GroundNode*, ::System::Single, ::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_PATHFINDER_FINDATTACKABLEPOSITIONTOMOVE_OFFSET))(arg, arg2, arg3, arg4, arg5, nullptr);
		}

		::System::Boolean IsAttackablePosition(GroundNode* arg, GroundNode* arg2, ::FlatData::GroundNodeType* arg3, ::System::Int64 arg4, ::System::Single arg5, ::System::Boolean arg6)
		{
			return ((::System::Boolean(*)(GroundNode*, GroundNode*, ::FlatData::GroundNodeType*, ::System::Int64, ::System::Single, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_PATHFINDER_ISATTACKABLEPOSITION_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, nullptr);
		}

		::System::Boolean FindNewPositionWithGap(GroundNode* arg, GroundNode* arg2, ::System::Single arg3, ::System::Single arg4, ::System::Int64 arg5, Il2CppObject&* arg6)
		{
			return ((::System::Boolean(*)(GroundNode*, GroundNode*, ::System::Single, ::System::Single, ::System::Int64, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_PATHFINDER_FINDNEWPOSITIONWITHGAP_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, nullptr);
		}

		::System::Boolean FindNewPositionOutOfCircleWithGap(GroundNode* arg, GroundNode* arg2, ::System::Single arg3, ::System::Single arg4, ::System::Single arg5, ::FlatData::GroundNodeType* arg6, Il2CppObject* arg7, ::System::Single arg8, Il2CppObject&* arg9, ::System::Boolean arg10)
		{
			return ((::System::Boolean(*)(GroundNode*, GroundNode*, ::System::Single, ::System::Single, ::System::Single, ::FlatData::GroundNodeType*, Il2CppObject*, ::System::Single, Il2CppObject&*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_PATHFINDER_FINDNEWPOSITIONOUTOFCIRCLEWITHGAP_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, nullptr);
		}

		::System::Boolean CheckOtherExistsNear(GroundNode* arg, ::System::Single arg2)
		{
			return ((::System::Boolean(*)(GroundNode*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_PATHFINDER_CHECKOTHEREXISTSNEAR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean IsLineOfFireBetweenPositions(GroundNode* arg, GroundNode* arg2, ::MX::Logic::BattleEntities::IObstacle* arg3)
		{
			return ((::System::Boolean(*)(GroundNode*, GroundNode*, ::MX::Logic::BattleEntities::IObstacle*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_PATHFINDER_ISLINEOFFIREBETWEENPOSITIONS_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Boolean IsLineOfFireBetweenPositions(::UnityEngine::Vector2* arg, ::UnityEngine::Vector2* arg2, ::MX::Logic::BattleEntities::IObstacle* arg3)
		{
			return ((::System::Boolean(*)(::UnityEngine::Vector2*, ::UnityEngine::Vector2*, ::MX::Logic::BattleEntities::IObstacle*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_PATHFINDER_ISLINEOFFIREBETWEENPOSITIONS_OFFSET))(arg, arg2, arg3, nullptr);
		}

		Il2CppObject* GetObstaclesToCheckLineOfFire(::UnityEngine::Vector2* arg, ::UnityEngine::Vector2* arg2, ::MX::Logic::BattleEntities::IObstacle* arg3)
		{
			return ((Il2CppObject*(*)(::UnityEngine::Vector2*, ::UnityEngine::Vector2*, ::MX::Logic::BattleEntities::IObstacle*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_PATHFINDER_GETOBSTACLESTOCHECKLINEOFFIRE_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void SetDirtyBitToUpdatePath(::MX::Logic::BattleEntities::EntityId* arg, ::System::Boolean arg2, ::System::Boolean arg3)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::EntityId*, ::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_PATHFINDER_SETDIRTYBITTOUPDATEPATH_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void CheckTargetPositionOccupied(::System::Object* arg, ::MX::Logic::Battles::CharacterGroundNodeChangedEventArgs* arg2)
		{
			((::System::Void(*)(::System::Object*, ::MX::Logic::Battles::CharacterGroundNodeChangedEventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_PATHFINDER_CHECKTARGETPOSITIONOCCUPIED_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean CheckBlockedArea(GroundNode* arg)
		{
			return ((::System::Boolean(*)(GroundNode*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_PATHFINDER_CHECKBLOCKEDAREA_OFFSET))(arg, nullptr);
		}

		::System::Boolean CheckBlockedArea(Il2CppObject* arg, GroundNode* arg2)
		{
			return ((::System::Boolean(*)(Il2CppObject*, GroundNode*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_PATHFINDER_CHECKBLOCKEDAREA_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void DebugDrawFormationLine(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_PATHFINDER_DEBUGDRAWFORMATIONLINE_OFFSET))(arg, nullptr);
		}

		::System::Boolean _FindPathToAttackRangePointInFormation_g__CheckPreoccupiedByOther|57_0(::MX::Logic::BattleEntities::O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4* arg, GroundNode* arg2)
		{
			return ((::System::Boolean(*)(::MX::Logic::BattleEntities::O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4*, GroundNode*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_PATHFINDER__FINDPATHTOATTACKRANGEPOINTINFORMATION_G__CHECKPREOCCUPIEDBYOTHER|57_0_OFFSET))(arg, arg2, nullptr);
		}

	};
}

