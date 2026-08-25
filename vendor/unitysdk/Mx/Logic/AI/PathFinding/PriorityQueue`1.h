#pragma once
#include "../../../../unitysdk.h"

#define MX_LOGIC_AI_PATHFINDING_PRIORITYQUEUE`1_DEQUEUE_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_LOGIC_AI_PATHFINDING_PRIORITYQUEUE`1_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_LOGIC_AI_PATHFINDING_PRIORITYQUEUE`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_LOGIC_AI_PATHFINDING_PRIORITYQUEUE`1_SET_COUNT_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_LOGIC_AI_PATHFINDING_PRIORITYQUEUE`1_ENQUEUE_OFFSET UNITYSDK_OFFSET(0x000000)

namespace MX::Logic::AI::PathFinding
{
	inline static constexpr unsigned int PriorityQueue`1_TypeDefinitionIndex = 14498;

	class PriorityQueue`1 : public Il2CppObject
	{
	public:
		Il2CppObject* sortedIndex; // 0x0
		::System::Int32 _Count_k__BackingField; // 0x0

		Il2CppObject* Dequeue()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_AI_PATHFINDING_PRIORITYQUEUE`1_DEQUEUE_OFFSET))(nullptr);
		}

		::System::Int32 get_Count()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_AI_PATHFINDING_PRIORITYQUEUE`1_GET_COUNT_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_AI_PATHFINDING_PRIORITYQUEUE`1_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void set_Count(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_AI_PATHFINDING_PRIORITYQUEUE`1_SET_COUNT_OFFSET))(arg, nullptr);
		}

		::System::Void Enqueue(Il2CppObject* arg, ::System::Single arg2)
		{
			((::System::Void(*)(Il2CppObject*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_AI_PATHFINDING_PRIORITYQUEUE`1_ENQUEUE_OFFSET))(arg, arg2, nullptr);
		}

	};
}

