#pragma once
#include "unitysdk.h"

class GroundNode;
namespace FlatData { class GroundNodeType; }
namespace UnityEngine { class Vector2; }
namespace UnityEngine { class Vector3; }
class GroundNodeLocation;
namespace MX::Logic::BattleEntities { class GroundObstacle; }
namespace MX::Core::Physics2D::Shapes { class Shape; }
class MovingArea;
namespace MX::Core::Physics2D::Shapes { class OBB; }
namespace MX::Core::Physics2D::Shapes { class Circle; }
class GroundGrid;

#define GROUNDGRID_GET_HALFGAP_OFFSET UNITYSDK_OFFSET(0x21566B0)
#define GROUNDGRID_GET_GROUNDNODES_OFFSET UNITYSDK_OFFSET(0x21566C0)
#define GROUNDGRID_SET_GROUNDNODES_OFFSET UNITYSDK_OFFSET(0x21566D0)
#define GROUNDGRID_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x2155900)
#define GROUNDGRID_SET_ITEM_OFFSET UNITYSDK_OFFSET(0x21566E0)
#define GROUNDGRID_.CTOR_OFFSET UNITYSDK_OFFSET(0x2156940)
#define GROUNDGRID_INBOUNDS_OFFSET UNITYSDK_OFFSET(0x2156B10)
#define GROUNDGRID_INBOUNDSWITHWHOLENODES_OFFSET UNITYSDK_OFFSET(0x2156BC0)
#define GROUNDGRID_PASSABLE_OFFSET UNITYSDK_OFFSET(0x2156BE0)
#define GROUNDGRID_COST_OFFSET UNITYSDK_OFFSET(0x2156C50)
#define GROUNDGRID_NODETYPETOINT_OFFSET UNITYSDK_OFFSET(0x2156EB0)
#define GROUNDGRID_GETNEIGHBOR_OFFSET UNITYSDK_OFFSET(0x2156F20)
#define GROUNDGRID_FINDNEARESTCANSTAYNODE_OFFSET UNITYSDK_OFFSET(0x2157270)
#define GROUNDGRID_FINDNEARESTWALKABLENODEFORALLOBSTACLEPOINT_OFFSET UNITYSDK_OFFSET(0x2157AE0)
#define GROUNDGRID_NEARESTNODE_OFFSET UNITYSDK_OFFSET(0x2158160)
#define GROUNDGRID_NEARESTNODE_OFFSET UNITYSDK_OFFSET(0x21564E0)
#define GROUNDGRID_NEARESTNODELOCATION_OFFSET UNITYSDK_OFFSET(0x21582D0)
#define GROUNDGRID_NEARESTNODELOCATION_OFFSET UNITYSDK_OFFSET(0x21557F0)
#define GROUNDGRID_RESETNODEINOBSTACLEAREA_OFFSET UNITYSDK_OFFSET(0x2158400)
#define GROUNDGRID_RESETNODEINOBSTACLEPOINT_OFFSET UNITYSDK_OFFSET(0x21589A0)
#define GROUNDGRID_ADDMOVINGAREASHAPES_OFFSET UNITYSDK_OFFSET(0x2158BF0)
#define GROUNDGRID_REMOVEMOVINGAREASHAPES_OFFSET UNITYSDK_OFFSET(0x2158CA0)
#define GROUNDGRID_ISPOSITIONINMOVINGAREA_OFFSET UNITYSDK_OFFSET(0x2157A10)
#define GROUNDGRID_APPLYMOVINGAREA_OFFSET UNITYSDK_OFFSET(0x2158D60)
#define GROUNDGRID_CHANGENODEINSHAPE_OFFSET UNITYSDK_OFFSET(0x2159980)
#define GROUNDGRID_CHANGENODEINSHAPE_OFFSET UNITYSDK_OFFSET(0x2159EB0)
#define GROUNDGRID_ADDLAYEROFNEIGHBOR_OFFSET UNITYSDK_OFFSET(0x2159460)
#define GROUNDGRID_ADDTOLAYERCONNECTION_OFFSET UNITYSDK_OFFSET(0x2159700)
#define GROUNDGRID_GET_PATHFINDFAILOVERON_OFFSET UNITYSDK_OFFSET(0x215A4C0)
#define GROUNDGRID_SET_PATHFINDFAILOVERON_OFFSET UNITYSDK_OFFSET(0x215A4D0)
#define GROUNDGRID_PROCESSPATHFINDFAILOVER_OFFSET UNITYSDK_OFFSET(0x215A4E0)
#define GROUNDGRID_PROCESSPATHFINDFAILOVEROBSTACLEREMOVED_OFFSET UNITYSDK_OFFSET(0x2158B40)
#define GROUNDGRID_ISLAYERCONNECTED_OFFSET UNITYSDK_OFFSET(0x2157890)
#define GROUNDGRID_SETNODEINOBSTACLEAREA_OFFSET UNITYSDK_OFFSET(0x215A7E0)
#define GROUNDGRID_ISNEIGHBORGROUNDNODEWALL_OFFSET UNITYSDK_OFFSET(0x215B100)
#define GROUNDGRID_SETNODEINOBSTACLEPOINT_OFFSET UNITYSDK_OFFSET(0x215B3C0)
#define GROUNDGRID_GETNODELISTINRANGE_OFFSET UNITYSDK_OFFSET(0x215B4F0)
#define GROUNDGRID_CANSPAWNCHARACTER_OFFSET UNITYSDK_OFFSET(0x215B810)
#define GROUNDGRID_CANSPAWNOBSTACLE_OFFSET UNITYSDK_OFFSET(0x215BA60)
#define GROUNDGRID_CREATENODELAYER_OFFSET UNITYSDK_OFFSET(0x215A590)
#define GROUNDGRID_CHECKCONNECTEDNODELAYER_OFFSET UNITYSDK_OFFSET(0x215BCC0)
#define GROUNDGRID_.CCTOR_OFFSET UNITYSDK_OFFSET(0x215C0F0)

	inline static constexpr unsigned int GroundGrid_TypeDefinitionIndex = 3984;

	class GroundGrid : public Il2CppObject
	{
	public:
		::System::Single DistanceToNoTSS; // 0x0
		::System::Single ROOT2; // 0x0
		::System::Int32 MaxCost; // 0x4
		::Il2CppArray<::System::Object*>* Directions; // 0x8
		::System::String* Version; // 0x10
		::System::Single Gap; // 0x18
		::System::Single OnePerGap; // 0x1C
		::System::Int32 X; // 0x20
		::System::Int32 Y; // 0x24
		::System::Single StartX; // 0x28
		::System::Single StartY; // 0x2C
		::System::Single _halfGap_k__BackingField; // 0x30
		Il2CppObject* connectedLayerMapping; // 0x38
		Il2CppObject* temporaryConnectedLayerMapping; // 0x40
		Il2CppObject* temporaryToChangeLayerTable; // 0x48
		::Il2CppArray<::System::Object*>* _GroundNodes_k__BackingField; // 0x50
		Il2CppObject* movingAreaShapeList; // 0x58
		::System::Boolean _PathFindFailOverOn_k__BackingField; // 0x60

		::System::Single get_halfGap()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDGRID_GET_HALFGAP_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* get_GroundNodes()
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDGRID_GET_GROUNDNODES_OFFSET))(nullptr);
		}

		::System::Void set_GroundNodes(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDGRID_SET_GROUNDNODES_OFFSET))(arg, nullptr);
		}

		GroundNode* get_Item(::System::Int32 arg, ::System::Int32 arg2)
		{
			return ((GroundNode*(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDGRID_GET_ITEM_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void set_Item(::System::Int32 arg, ::System::Int32 arg2, GroundNode* arg3)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, GroundNode*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDGRID_SET_ITEM_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void .ctor(::System::String* str, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg2, ::System::Int32 arg3, ::System::Single arg4, ::System::Single arg5, ::System::Single arg6)
		{
			((::System::Void(*)(::System::String*, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::System::Single, ::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDGRID_.CTOR_OFFSET))(str, arg, arg2, arg3, arg4, arg5, arg6, nullptr);
		}

		::System::Boolean InBounds(::System::Int32 arg, ::System::Int32 arg2)
		{
			return ((::System::Boolean(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDGRID_INBOUNDS_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean InBoundsWithWholeNodes(::System::Int32 arg, ::System::Int32 arg2)
		{
			return ((::System::Boolean(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDGRID_INBOUNDSWITHWHOLENODES_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean Passable(::System::Int32 arg, ::System::Int32 arg2)
		{
			return ((::System::Boolean(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDGRID_PASSABLE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Single Cost(GroundNode* arg, GroundNode* arg2, ::FlatData::GroundNodeType* arg3)
		{
			return ((::System::Single(*)(GroundNode*, GroundNode*, ::FlatData::GroundNodeType*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDGRID_COST_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Int32 NodeTypeToInt(::FlatData::GroundNodeType* arg, ::FlatData::GroundNodeType* arg2)
		{
			return ((::System::Int32(*)(::FlatData::GroundNodeType*, ::FlatData::GroundNodeType*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDGRID_NODETYPETOINT_OFFSET))(arg, arg2, nullptr);
		}

		GroundNode* GetNeighbor(GroundNode* arg, GroundNode* arg2, ::System::Int32 arg3, ::FlatData::GroundNodeType* arg4, ::System::Boolean arg5)
		{
			return ((GroundNode*(*)(GroundNode*, GroundNode*, ::System::Int32, ::FlatData::GroundNodeType*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDGRID_GETNEIGHBOR_OFFSET))(arg, arg2, arg3, arg4, arg5, nullptr);
		}

		GroundNode* FindNearestCanStayNode(::UnityEngine::Vector2* arg, ::FlatData::GroundNodeType* arg2, ::System::Boolean arg3, ::System::Boolean arg4, ::System::SByte arg5)
		{
			return ((GroundNode*(*)(::UnityEngine::Vector2*, ::FlatData::GroundNodeType*, ::System::Boolean, ::System::Boolean, ::System::SByte, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDGRID_FINDNEARESTCANSTAYNODE_OFFSET))(arg, arg2, arg3, arg4, arg5, nullptr);
		}

		GroundNode* FindNearestWalkAbleNodeForAllObstaclePoint(::UnityEngine::Vector2* arg, Il2CppObject* arg2)
		{
			return ((GroundNode*(*)(::UnityEngine::Vector2*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDGRID_FINDNEARESTWALKABLENODEFORALLOBSTACLEPOINT_OFFSET))(arg, arg2, nullptr);
		}

		GroundNode* NearestNode(::UnityEngine::Vector3* arg)
		{
			return ((GroundNode*(*)(::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDGRID_NEARESTNODE_OFFSET))(arg, nullptr);
		}

		GroundNode* NearestNode(::UnityEngine::Vector2* arg)
		{
			return ((GroundNode*(*)(::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDGRID_NEARESTNODE_OFFSET))(arg, nullptr);
		}

		GroundNodeLocation* NearestNodeLocation(::UnityEngine::Vector3* arg)
		{
			return ((GroundNodeLocation*(*)(::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDGRID_NEARESTNODELOCATION_OFFSET))(arg, nullptr);
		}

		GroundNodeLocation* NearestNodeLocation(::UnityEngine::Vector2* arg)
		{
			return ((GroundNodeLocation*(*)(::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDGRID_NEARESTNODELOCATION_OFFSET))(arg, nullptr);
		}

		::System::Void ResetNodeInObstacleArea(::MX::Logic::BattleEntities::GroundObstacle* arg)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::GroundObstacle*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDGRID_RESETNODEINOBSTACLEAREA_OFFSET))(arg, nullptr);
		}

		::System::Void ResetNodeInObstaclePoint(Il2CppObject* arg, ::MX::Logic::BattleEntities::GroundObstacle* arg2)
		{
			((::System::Void(*)(Il2CppObject*, ::MX::Logic::BattleEntities::GroundObstacle*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDGRID_RESETNODEINOBSTACLEPOINT_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddMovingAreaShapes(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDGRID_ADDMOVINGAREASHAPES_OFFSET))(arg, nullptr);
		}

		::System::Void RemoveMovingAreaShapes(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDGRID_REMOVEMOVINGAREASHAPES_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsPositionInMovingArea(::UnityEngine::Vector2* arg)
		{
			return ((::System::Boolean(*)(::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDGRID_ISPOSITIONINMOVINGAREA_OFFSET))(arg, nullptr);
		}

		::System::Void ApplyMovingArea(::MX::Core::Physics2D::Shapes::Shape* arg, ::FlatData::GroundNodeType* arg2, MovingArea* arg3, Il2CppObject* arg4, Il2CppObject* arg5, Il2CppObject* arg6, Il2CppObject* arg7, Il2CppObject* arg8, Il2CppObject* arg9)
		{
			((::System::Void(*)(::MX::Core::Physics2D::Shapes::Shape*, ::FlatData::GroundNodeType*, MovingArea*, Il2CppObject*, Il2CppObject*, Il2CppObject*, Il2CppObject*, Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDGRID_APPLYMOVINGAREA_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, nullptr);
		}

		::System::Void ChangeNodeInShape(::MX::Core::Physics2D::Shapes::OBB* arg, ::FlatData::GroundNodeType* arg2, ::System::Boolean arg3)
		{
			((::System::Void(*)(::MX::Core::Physics2D::Shapes::OBB*, ::FlatData::GroundNodeType*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDGRID_CHANGENODEINSHAPE_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void ChangeNodeInShape(::MX::Core::Physics2D::Shapes::Circle* arg, ::FlatData::GroundNodeType* arg2, ::System::Boolean arg3)
		{
			((::System::Void(*)(::MX::Core::Physics2D::Shapes::Circle*, ::FlatData::GroundNodeType*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDGRID_CHANGENODEINSHAPE_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void AddLayerOfNeighbor(Il2CppObject* arg, GroundNode* arg2, ::MX::Core::Physics2D::Shapes::Shape* arg3, Il2CppObject* arg4)
		{
			((::System::Void(*)(Il2CppObject*, GroundNode*, ::MX::Core::Physics2D::Shapes::Shape*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDGRID_ADDLAYEROFNEIGHBOR_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Void AddToLayerConnection(Il2CppObject* arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDGRID_ADDTOLAYERCONNECTION_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean get_PathFindFailOverOn()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDGRID_GET_PATHFINDFAILOVERON_OFFSET))(nullptr);
		}

		::System::Void set_PathFindFailOverOn(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDGRID_SET_PATHFINDFAILOVERON_OFFSET))(arg, nullptr);
		}

		::System::Void ProcessPathFindFailOver()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDGRID_PROCESSPATHFINDFAILOVER_OFFSET))(nullptr);
		}

		::System::Void ProcessPathFindFailOverObstacleRemoved()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDGRID_PROCESSPATHFINDFAILOVEROBSTACLEREMOVED_OFFSET))(nullptr);
		}

		::System::Boolean IsLayerConnected(::System::SByte arg, ::System::SByte arg2)
		{
			return ((::System::Boolean(*)(::System::SByte, ::System::SByte, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDGRID_ISLAYERCONNECTED_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void SetNodeInObstacleArea(::MX::Logic::BattleEntities::GroundObstacle* arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::GroundObstacle*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDGRID_SETNODEINOBSTACLEAREA_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean IsNeighborGroundNodeWall(GroundNode* arg, Il2CppObject* arg2, ::MX::Core::Physics2D::Shapes::OBB* arg3)
		{
			return ((::System::Boolean(*)(GroundNode*, Il2CppObject*, ::MX::Core::Physics2D::Shapes::OBB*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDGRID_ISNEIGHBORGROUNDNODEWALL_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void SetNodeInObstaclePoint(Il2CppObject* arg, ::MX::Logic::BattleEntities::GroundObstacle* arg2)
		{
			((::System::Void(*)(Il2CppObject*, ::MX::Logic::BattleEntities::GroundObstacle*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDGRID_SETNODEINOBSTACLEPOINT_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* GetNodeListInRange(::UnityEngine::Vector2* arg, ::System::Single arg2)
		{
			return ((Il2CppObject*(*)(::UnityEngine::Vector2*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDGRID_GETNODELISTINRANGE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean CanSpawnCharacter(::MX::Core::Physics2D::Shapes::Circle* arg)
		{
			return ((::System::Boolean(*)(::MX::Core::Physics2D::Shapes::Circle*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDGRID_CANSPAWNCHARACTER_OFFSET))(arg, nullptr);
		}

		::System::Boolean CanSpawnObstacle(::MX::Core::Physics2D::Shapes::OBB* arg)
		{
			return ((::System::Boolean(*)(::MX::Core::Physics2D::Shapes::OBB*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDGRID_CANSPAWNOBSTACLE_OFFSET))(arg, nullptr);
		}

		::System::Boolean CreateNodeLayer(GroundGrid* arg)
		{
			return ((::System::Boolean(*)(GroundGrid*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDGRID_CREATENODELAYER_OFFSET))(arg, nullptr);
		}

		::System::Boolean CheckConnectedNodeLayer(Il2CppObject* arg, Il2CppObject* arg2, GroundGrid* arg3, ::System::SByte arg4)
		{
			return ((::System::Boolean(*)(Il2CppObject*, Il2CppObject*, GroundGrid*, ::System::SByte, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDGRID_CHECKCONNECTEDNODELAYER_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDGRID_.CCTOR_OFFSET))(nullptr);
		}

	};

