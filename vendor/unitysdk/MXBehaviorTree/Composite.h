#pragma once
#include "../unitysdk.h"

namespace MXBehaviorTree { class Node; }

#define MXBEHAVIORTREE_COMPOSITE_ADDCHILD_OFFSET UNITYSDK_OFFSET(0x9407070)
#define MXBEHAVIORTREE_COMPOSITE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9407170)
#define MXBEHAVIORTREE_COMPOSITE_GET_CHILDCOUNT_OFFSET UNITYSDK_OFFSET(0x94072F0)
#define MXBEHAVIORTREE_COMPOSITE_REMOVECHILD_OFFSET UNITYSDK_OFFSET(0x9407330)
#define MXBEHAVIORTREE_COMPOSITE_GETCHILD_OFFSET UNITYSDK_OFFSET(0x9407380)
#define MXBEHAVIORTREE_COMPOSITE_SORTCHILDREN_OFFSET UNITYSDK_OFFSET(0x9407420)

namespace MXBehaviorTree
{
	inline static constexpr unsigned int Composite_TypeDefinitionIndex = 36749;

	class Composite : public Il2CppObject
	{
	public:
		Il2CppObject* children; // 0x38

		::System::Void AddChild(::MXBehaviorTree::Node* arg)
		{
			((::System::Void(*)(::MXBehaviorTree::Node*, ::PVOID))((::PBYTE)hIl2Cpp + MXBEHAVIORTREE_COMPOSITE_ADDCHILD_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(Il2CppObject* arg, Il2CppObject* arg, Il2CppObject* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(Il2CppObject*, Il2CppObject*, Il2CppObject*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MXBEHAVIORTREE_COMPOSITE_.CTOR_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Int32 get_childCount()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MXBEHAVIORTREE_COMPOSITE_GET_CHILDCOUNT_OFFSET))(nullptr);
		}

		::System::Void RemoveChild(::MXBehaviorTree::Node* arg)
		{
			((::System::Void(*)(::MXBehaviorTree::Node*, ::PVOID))((::PBYTE)hIl2Cpp + MXBEHAVIORTREE_COMPOSITE_REMOVECHILD_OFFSET))(arg, nullptr);
		}

		::MXBehaviorTree::Node* GetChild(::System::Int32 arg)
		{
			return (return (::MXBehaviorTree::Node*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MXBEHAVIORTREE_COMPOSITE_GETCHILD_OFFSET))(arg, nullptr);
		}

		::System::Void SortChildren(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MXBEHAVIORTREE_COMPOSITE_SORTCHILDREN_OFFSET))(arg, nullptr);
		}

	};
}

