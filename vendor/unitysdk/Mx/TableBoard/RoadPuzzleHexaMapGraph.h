#pragma once
#include "../../unitysdk.h"

namespace MX::Campaign { class HexLocation; }

#define MX_TABLEBOARD_ROADPUZZLEHEXAMAPGRAPH_GET_EDGES_OFFSET UNITYSDK_OFFSET(0xEF9C40)
#define MX_TABLEBOARD_ROADPUZZLEHEXAMAPGRAPH_FINDPATH_OFFSET UNITYSDK_OFFSET(0xEF9C50)
#define MX_TABLEBOARD_ROADPUZZLEHEXAMAPGRAPH_.CTOR_OFFSET UNITYSDK_OFFSET(0xEF9D30)
#define MX_TABLEBOARD_ROADPUZZLEHEXAMAPGRAPH_GET_NODES_OFFSET UNITYSDK_OFFSET(0xEFA2A0)

namespace MX::TableBoard
{
	inline static constexpr unsigned int RoadPuzzleHexaMapGraph_TypeDefinitionIndex = 11172;

	class RoadPuzzleHexaMapGraph : public Il2CppObject
	{
	public:
		Il2CppObject* _Nodes_k__BackingField; // 0x10
		Il2CppObject* _Edges_k__BackingField; // 0x18

		Il2CppObject* get_Edges()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_TABLEBOARD_ROADPUZZLEHEXAMAPGRAPH_GET_EDGES_OFFSET))(nullptr);
		}

		Il2CppObject* FindPath(::MX::Campaign::HexLocation* arg, ::MX::Campaign::HexLocation* arg2)
		{
			return ((Il2CppObject*(*)(::MX::Campaign::HexLocation*, ::MX::Campaign::HexLocation*, ::PVOID))((::PBYTE)hIl2Cpp + MX_TABLEBOARD_ROADPUZZLEHEXAMAPGRAPH_FINDPATH_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_TABLEBOARD_ROADPUZZLEHEXAMAPGRAPH_.CTOR_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_Nodes()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_TABLEBOARD_ROADPUZZLEHEXAMAPGRAPH_GET_NODES_OFFSET))(nullptr);
		}

	};
}

