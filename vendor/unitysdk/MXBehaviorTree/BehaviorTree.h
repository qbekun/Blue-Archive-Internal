#pragma once
#include "../unitysdk.h"

namespace MXBehaviorTree { class Node; }
namespace MXBehaviorTree { class BehaviorTreeContext; }
namespace MemoryPack { class MemoryPackWriter&; }
namespace MXBehaviorTree { class BehaviorTree&; }
namespace MemoryPack { class MemoryPackReader&; }

#define MXBEHAVIORTREE_BEHAVIORTREE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9402330)
#define MXBEHAVIORTREE_BEHAVIORTREE_GET_CONTEXT_OFFSET UNITYSDK_OFFSET(0x9402360)
#define MXBEHAVIORTREE_BEHAVIORTREE_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x9402370)
#define MXBEHAVIORTREE_BEHAVIORTREE_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x9402570)
#define MXBEHAVIORTREE_BEHAVIORTREE_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9402770)
#define MXBEHAVIORTREE_BEHAVIORTREE_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x9402780)
#define MXBEHAVIORTREE_BEHAVIORTREE_UPDATE_OFFSET UNITYSDK_OFFSET(0x9402A20)
#define MXBEHAVIORTREE_BEHAVIORTREE_TRAVEL_OFFSET UNITYSDK_OFFSET(0x9402A70)
#define MXBEHAVIORTREE_BEHAVIORTREE_SET_CONTEXT_OFFSET UNITYSDK_OFFSET(0x9402B20)
#define MXBEHAVIORTREE_BEHAVIORTREE_INIT_OFFSET UNITYSDK_OFFSET(0x9402B30)

namespace MXBehaviorTree
{
	inline static constexpr unsigned int BehaviorTree_TypeDefinitionIndex = 36729;

	class BehaviorTree : public Il2CppObject
	{
	public:
		::MXBehaviorTree::Node* root; // 0x10
		::MXBehaviorTree::BehaviorTreeContext* _context_k__BackingField; // 0x18

		::System::Void .ctor(::MXBehaviorTree::Node* arg)
		{
			((::System::Void(*)(::MXBehaviorTree::Node*, ::PVOID))((::PBYTE)hIl2Cpp + MXBEHAVIORTREE_BEHAVIORTREE_.CTOR_OFFSET))(arg, nullptr);
		}

		::MXBehaviorTree::BehaviorTreeContext* get_context()
		{
			return (return (::MXBehaviorTree::BehaviorTreeContext*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXBEHAVIORTREE_BEHAVIORTREE_GET_CONTEXT_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MXBehaviorTree::BehaviorTree&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MXBehaviorTree::BehaviorTree&*, ::PVOID))((::PBYTE)hIl2Cpp + MXBEHAVIORTREE_BEHAVIORTREE_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXBEHAVIORTREE_BEHAVIORTREE_REGISTERFORMATTER_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXBEHAVIORTREE_BEHAVIORTREE_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MXBehaviorTree::BehaviorTree&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MXBehaviorTree::BehaviorTree&*, ::PVOID))((::PBYTE)hIl2Cpp + MXBEHAVIORTREE_BEHAVIORTREE_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		State* Update()
		{
			return (return (State*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXBEHAVIORTREE_BEHAVIORTREE_UPDATE_OFFSET))(nullptr);
		}

		::System::Void Travel(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MXBEHAVIORTREE_BEHAVIORTREE_TRAVEL_OFFSET))(arg, nullptr);
		}

		::System::Void set_context(::MXBehaviorTree::BehaviorTreeContext* arg)
		{
			((::System::Void(*)(::MXBehaviorTree::BehaviorTreeContext*, ::PVOID))((::PBYTE)hIl2Cpp + MXBEHAVIORTREE_BEHAVIORTREE_SET_CONTEXT_OFFSET))(arg, nullptr);
		}

		::System::Void Init(::MXBehaviorTree::BehaviorTreeContext* arg)
		{
			((::System::Void(*)(::MXBehaviorTree::BehaviorTreeContext*, ::PVOID))((::PBYTE)hIl2Cpp + MXBEHAVIORTREE_BEHAVIORTREE_INIT_OFFSET))(arg, nullptr);
		}

	};
}

