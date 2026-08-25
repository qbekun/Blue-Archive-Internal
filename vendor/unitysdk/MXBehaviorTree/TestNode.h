#pragma once
#include "../unitysdk.h"

namespace MXBehaviorTree { class ConstantPropertyString; }
namespace MXBehaviorTree { class ConstantPropertyInt; }
namespace MemoryPack { class MemoryPackReader&; }
namespace MXBehaviorTree { class TestNode&; }
namespace MemoryPack { class MemoryPackWriter&; }

#define MXBEHAVIORTREE_TESTNODE_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x941AE40)
#define MXBEHAVIORTREE_TESTNODE_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x941DCF0)
#define MXBEHAVIORTREE_TESTNODE_.CCTOR_OFFSET UNITYSDK_OFFSET(0x941E470)
#define MXBEHAVIORTREE_TESTNODE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x941E7B0)
#define MXBEHAVIORTREE_TESTNODE_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x941E480)
#define MXBEHAVIORTREE_TESTNODE_.CTOR_OFFSET UNITYSDK_OFFSET(0x941DCA0)

namespace MXBehaviorTree
{
	inline static constexpr unsigned int TestNode_TypeDefinitionIndex = 36774;

	class TestNode : public Il2CppObject
	{
	public:
		::MXBehaviorTree::ConstantPropertyString* trace; // 0x38
		::MXBehaviorTree::ConstantPropertyInt* state; // 0x40

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MXBehaviorTree::TestNode&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MXBehaviorTree::TestNode&*, ::PVOID))((::PBYTE)hIl2Cpp + MXBEHAVIORTREE_TESTNODE_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MXBehaviorTree::TestNode&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MXBehaviorTree::TestNode&*, ::PVOID))((::PBYTE)hIl2Cpp + MXBEHAVIORTREE_TESTNODE_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXBEHAVIORTREE_TESTNODE_.CCTOR_OFFSET))(nullptr);
		}

		State* OnUpdate()
		{
			return (return (State*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXBEHAVIORTREE_TESTNODE_ONUPDATE_OFFSET))(nullptr);
		}

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXBEHAVIORTREE_TESTNODE_REGISTERFORMATTER_OFFSET))(nullptr);
		}

		::System::Void .ctor(Il2CppObject* arg, Il2CppObject* arg, ::MXBehaviorTree::ConstantPropertyString* arg, ::MXBehaviorTree::ConstantPropertyInt* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(Il2CppObject*, Il2CppObject*, ::MXBehaviorTree::ConstantPropertyString*, ::MXBehaviorTree::ConstantPropertyInt*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MXBEHAVIORTREE_TESTNODE_.CTOR_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

	};
}

