#pragma once
#include "../unitysdk.h"

namespace MXBehaviorTree { class Node; }
namespace MemoryPack { class MemoryPackReader&; }
namespace MXBehaviorTree { class Root&; }
namespace MemoryPack { class MemoryPackWriter&; }

#define MXBEHAVIORTREE_ROOT_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x9415030)
#define MXBEHAVIORTREE_ROOT_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x94167C0)
#define MXBEHAVIORTREE_ROOT_UPDATEINTERNAL_OFFSET UNITYSDK_OFFSET(0x94167D0)
#define MXBEHAVIORTREE_ROOT_.CTOR_OFFSET UNITYSDK_OFFSET(0x9416730)
#define MXBEHAVIORTREE_ROOT_GET_CHILDCOUNT_OFFSET UNITYSDK_OFFSET(0x94167F0)
#define MXBEHAVIORTREE_ROOT_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9416800)
#define MXBEHAVIORTREE_ROOT_REMOVECHILD_OFFSET UNITYSDK_OFFSET(0x9416B40)
#define MXBEHAVIORTREE_ROOT_ADDCHILD_OFFSET UNITYSDK_OFFSET(0x9416B60)
#define MXBEHAVIORTREE_ROOT_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x9416810)
#define MXBEHAVIORTREE_ROOT_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x9416BB0)
#define MXBEHAVIORTREE_ROOT_GETCHILD_OFFSET UNITYSDK_OFFSET(0x94172C0)

namespace MXBehaviorTree
{
	inline static constexpr unsigned int Root_TypeDefinitionIndex = 36768;

	class Root : public Il2CppObject
	{
	public:
		::MXBehaviorTree::Node* child; // 0x38

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MXBehaviorTree::Root&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MXBehaviorTree::Root&*, ::PVOID))((::PBYTE)hIl2Cpp + MXBEHAVIORTREE_ROOT_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		State* OnUpdate()
		{
			return (return (State*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXBEHAVIORTREE_ROOT_ONUPDATE_OFFSET))(nullptr);
		}

		State* UpdateInternal()
		{
			return (return (State*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXBEHAVIORTREE_ROOT_UPDATEINTERNAL_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MXBehaviorTree::Node* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::MXBehaviorTree::Node*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MXBEHAVIORTREE_ROOT_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 get_childCount()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MXBEHAVIORTREE_ROOT_GET_CHILDCOUNT_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXBEHAVIORTREE_ROOT_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void RemoveChild(::MXBehaviorTree::Node* arg)
		{
			((::System::Void(*)(::MXBehaviorTree::Node*, ::PVOID))((::PBYTE)hIl2Cpp + MXBEHAVIORTREE_ROOT_REMOVECHILD_OFFSET))(arg, nullptr);
		}

		::System::Void AddChild(::MXBehaviorTree::Node* arg)
		{
			((::System::Void(*)(::MXBehaviorTree::Node*, ::PVOID))((::PBYTE)hIl2Cpp + MXBEHAVIORTREE_ROOT_ADDCHILD_OFFSET))(arg, nullptr);
		}

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXBEHAVIORTREE_ROOT_REGISTERFORMATTER_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MXBehaviorTree::Root&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MXBehaviorTree::Root&*, ::PVOID))((::PBYTE)hIl2Cpp + MXBEHAVIORTREE_ROOT_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::MXBehaviorTree::Node* GetChild(::System::Int32 arg)
		{
			return (return (::MXBehaviorTree::Node*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MXBEHAVIORTREE_ROOT_GETCHILD_OFFSET))(arg, nullptr);
		}

	};
}

