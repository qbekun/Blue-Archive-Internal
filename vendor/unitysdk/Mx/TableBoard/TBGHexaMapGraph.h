#pragma once
#include "../../unitysdk.h"

namespace MX::Campaign { class HexLocation; }

#define MX_TABLEBOARD_TBGHEXAMAPGRAPH_GET_NODES_OFFSET UNITYSDK_OFFSET(0xF08550)
#define MX_TABLEBOARD_TBGHEXAMAPGRAPH_GET_EDGES_OFFSET UNITYSDK_OFFSET(0xF08560)
#define MX_TABLEBOARD_TBGHEXAMAPGRAPH_FINDPATH_OFFSET UNITYSDK_OFFSET(0xF07590)
#define MX_TABLEBOARD_TBGHEXAMAPGRAPH_.CTOR_OFFSET UNITYSDK_OFFSET(0xF07020)

namespace MX::TableBoard
{
	inline static constexpr unsigned int TBGHexaMapGraph_TypeDefinitionIndex = 11205;

	class TBGHexaMapGraph : public Il2CppObject
	{
	public:
		Il2CppObject* _Nodes_k__BackingField; // 0x10
		Il2CppObject* _Edges_k__BackingField; // 0x18

		Il2CppObject* get_Nodes()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_TABLEBOARD_TBGHEXAMAPGRAPH_GET_NODES_OFFSET))(nullptr);
		}

		Il2CppObject* get_Edges()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_TABLEBOARD_TBGHEXAMAPGRAPH_GET_EDGES_OFFSET))(nullptr);
		}

		Il2CppObject* FindPath(::MX::Campaign::HexLocation* arg, ::MX::Campaign::HexLocation* arg2)
		{
			return ((Il2CppObject*(*)(::MX::Campaign::HexLocation*, ::MX::Campaign::HexLocation*, ::PVOID))((::PBYTE)hIl2Cpp + MX_TABLEBOARD_TBGHEXAMAPGRAPH_FINDPATH_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_TABLEBOARD_TBGHEXAMAPGRAPH_.CTOR_OFFSET))(arg, nullptr);
		}

	};
}

