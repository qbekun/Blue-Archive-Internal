#pragma once
#include "../unitysdk.h"

namespace MXBehaviorTree { class NodeMetadata; }
namespace MXBehaviorTree { class Node; }
namespace MemoryPack { class MemoryPackWriter&; }
namespace MXBehaviorTree { class BehaviorTreeMetadata&; }
namespace MemoryPack { class MemoryPackReader&; }

#define MXBEHAVIORTREE_BEHAVIORTREEMETADATA_CREATEMETADATA_OFFSET UNITYSDK_OFFSET(0x9403060)
#define MXBEHAVIORTREE_BEHAVIORTREEMETADATA_REMOVEMETADATA_OFFSET UNITYSDK_OFFSET(0x94031F0)
#define MXBEHAVIORTREE_BEHAVIORTREEMETADATA_GETMETADATA_OFFSET UNITYSDK_OFFSET(0x9403250)
#define MXBEHAVIORTREE_BEHAVIORTREEMETADATA_GETMETADATA_OFFSET UNITYSDK_OFFSET(0x94032B0)
#define MXBEHAVIORTREE_BEHAVIORTREEMETADATA_GETORPHANROOTS_OFFSET UNITYSDK_OFFSET(0x9403300)
#define MXBEHAVIORTREE_BEHAVIORTREEMETADATA_ADDORPHANROOT_OFFSET UNITYSDK_OFFSET(0x9403310)
#define MXBEHAVIORTREE_BEHAVIORTREEMETADATA_REMOVEORPHANROOT_OFFSET UNITYSDK_OFFSET(0x94033B0)
#define MXBEHAVIORTREE_BEHAVIORTREEMETADATA_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9403400)
#define MXBEHAVIORTREE_BEHAVIORTREEMETADATA_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x9403410)
#define MXBEHAVIORTREE_BEHAVIORTREEMETADATA_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x9403780)
#define MXBEHAVIORTREE_BEHAVIORTREEMETADATA_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x9403900)
#define MXBEHAVIORTREE_BEHAVIORTREEMETADATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x9403CE0)

namespace MXBehaviorTree
{
	inline static constexpr unsigned int BehaviorTreeMetadata_TypeDefinitionIndex = 36732;

	class BehaviorTreeMetadata : public Il2CppObject
	{
	public:
		::System::Int64 nodeNextId; // 0x10
		Il2CppObject* nodeMetadata; // 0x18
		Il2CppObject* orphanRoots; // 0x20

		::MXBehaviorTree::NodeMetadata* CreateMetadata(Il2CppObject* arg)
		{
			return (return (::MXBehaviorTree::NodeMetadata*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MXBEHAVIORTREE_BEHAVIORTREEMETADATA_CREATEMETADATA_OFFSET))(arg, nullptr);
		}

		::System::Void RemoveMetadata(::MXBehaviorTree::Node* arg)
		{
			((::System::Void(*)(::MXBehaviorTree::Node*, ::PVOID))((::PBYTE)hIl2Cpp + MXBEHAVIORTREE_BEHAVIORTREEMETADATA_REMOVEMETADATA_OFFSET))(arg, nullptr);
		}

		::MXBehaviorTree::NodeMetadata* GetMetadata(::MXBehaviorTree::Node* arg)
		{
			return (return (::MXBehaviorTree::NodeMetadata*(*)(::MXBehaviorTree::Node*, ::PVOID))((::PBYTE)hIl2Cpp + MXBEHAVIORTREE_BEHAVIORTREEMETADATA_GETMETADATA_OFFSET))(arg, nullptr);
		}

		::MXBehaviorTree::NodeMetadata* GetMetadata(::System::Int64 arg)
		{
			return (return (::MXBehaviorTree::NodeMetadata*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MXBEHAVIORTREE_BEHAVIORTREEMETADATA_GETMETADATA_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetOrphanRoots()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXBEHAVIORTREE_BEHAVIORTREEMETADATA_GETORPHANROOTS_OFFSET))(nullptr);
		}

		::System::Void AddOrphanRoot(::MXBehaviorTree::Node* arg)
		{
			((::System::Void(*)(::MXBehaviorTree::Node*, ::PVOID))((::PBYTE)hIl2Cpp + MXBEHAVIORTREE_BEHAVIORTREEMETADATA_ADDORPHANROOT_OFFSET))(arg, nullptr);
		}

		::System::Void RemoveOrphanRoot(::MXBehaviorTree::Node* arg)
		{
			((::System::Void(*)(::MXBehaviorTree::Node*, ::PVOID))((::PBYTE)hIl2Cpp + MXBEHAVIORTREE_BEHAVIORTREEMETADATA_REMOVEORPHANROOT_OFFSET))(arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXBEHAVIORTREE_BEHAVIORTREEMETADATA_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXBEHAVIORTREE_BEHAVIORTREEMETADATA_REGISTERFORMATTER_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MXBehaviorTree::BehaviorTreeMetadata&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MXBehaviorTree::BehaviorTreeMetadata&*, ::PVOID))((::PBYTE)hIl2Cpp + MXBEHAVIORTREE_BEHAVIORTREEMETADATA_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MXBehaviorTree::BehaviorTreeMetadata&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MXBehaviorTree::BehaviorTreeMetadata&*, ::PVOID))((::PBYTE)hIl2Cpp + MXBEHAVIORTREE_BEHAVIORTREEMETADATA_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXBEHAVIORTREE_BEHAVIORTREEMETADATA_.CTOR_OFFSET))(nullptr);
		}

	};
}

