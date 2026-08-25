#pragma once
#include "../../../../unitysdk.h"

class GroundGrid;
class GroundNode;
namespace FlatData { class GroundNodeType; }
namespace MX::Logic::BattleEntities { class BattleEntity; }

#define MX_LOGIC_AI_PATHFINDING_ASTARSEARCH_CHECKBLOCKED_OFFSET UNITYSDK_OFFSET(0x13D7540)
#define MX_LOGIC_AI_PATHFINDING_ASTARSEARCH_HEURISTIC_OFFSET UNITYSDK_OFFSET(0x13D75E0)
#define MX_LOGIC_AI_PATHFINDING_ASTARSEARCH_.CTOR_OFFSET UNITYSDK_OFFSET(0x13D76C0)
#define MX_LOGIC_AI_PATHFINDING_ASTARSEARCH_OPTIMIZEPATH_OFFSET UNITYSDK_OFFSET(0x13D7FB0)
#define MX_LOGIC_AI_PATHFINDING_ASTARSEARCH_FINDPATH_OFFSET UNITYSDK_OFFSET(0x13D8AF0)

namespace MX::Logic::AI::PathFinding
{
	inline static constexpr unsigned int AStarSearch_TypeDefinitionIndex = 14497;

	class AStarSearch : public Il2CppObject
	{
	public:
		Il2CppObject* cameFrom; // 0x10
		Il2CppObject* costSoFar; // 0x18
		GroundGrid* graph; // 0x20
		::System::Boolean isOverheadOccurred; // 0x28
		GroundNode* start; // 0x30
		GroundNode* goal; // 0x38

		::System::Boolean CheckBlocked(Il2CppObject* arg, GroundNode* arg2)
		{
			return ((::System::Boolean(*)(Il2CppObject*, GroundNode*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_AI_PATHFINDING_ASTARSEARCH_CHECKBLOCKED_OFFSET))(arg, arg2, nullptr);
		}

		::System::Int32 Heuristic(GroundNode* arg, GroundNode* arg2)
		{
			return ((::System::Int32(*)(GroundNode*, GroundNode*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_AI_PATHFINDING_ASTARSEARCH_HEURISTIC_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor(GroundGrid* arg, GroundNode* arg2, GroundNode* arg3, ::FlatData::GroundNodeType* arg4, Il2CppObject* arg5, ::System::Boolean arg6, ::System::Boolean arg7)
		{
			((::System::Void(*)(GroundGrid*, GroundNode*, GroundNode*, ::FlatData::GroundNodeType*, Il2CppObject*, ::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_AI_PATHFINDING_ASTARSEARCH_.CTOR_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, arg7, nullptr);
		}

		Il2CppObject* OptimizePath(Il2CppObject* arg, ::MX::Logic::BattleEntities::BattleEntity* arg2, GroundGrid* arg3, Il2CppObject* arg4, ::System::Boolean arg5)
		{
			return ((Il2CppObject*(*)(Il2CppObject*, ::MX::Logic::BattleEntities::BattleEntity*, GroundGrid*, Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_AI_PATHFINDING_ASTARSEARCH_OPTIMIZEPATH_OFFSET))(arg, arg2, arg3, arg4, arg5, nullptr);
		}

		Il2CppObject* FindPath()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_AI_PATHFINDING_ASTARSEARCH_FINDPATH_OFFSET))(nullptr);
		}

	};
}

