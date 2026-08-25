#pragma once
#include "../unitysdk.h"

namespace MXBehaviorTree { class IBehaviorTreePropertyFloat; }
namespace MemoryPack { class MemoryPackReader&; }
namespace MXBehaviorTree { class Wait&; }
namespace MemoryPack { class MemoryPackWriter&; }

#define MXBEHAVIORTREE_WAIT_ONENTER_OFFSET UNITYSDK_OFFSET(0x941E8D0)
#define MXBEHAVIORTREE_WAIT_.CTOR_OFFSET UNITYSDK_OFFSET(0x941E8E0)
#define MXBEHAVIORTREE_WAIT_.CCTOR_OFFSET UNITYSDK_OFFSET(0x941E910)
#define MXBEHAVIORTREE_WAIT_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x941EC50)
#define MXBEHAVIORTREE_WAIT_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x94219D0)
#define MXBEHAVIORTREE_WAIT_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x9421AB0)
#define MXBEHAVIORTREE_WAIT_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x941E920)

namespace MXBehaviorTree
{
	inline static constexpr unsigned int Wait_TypeDefinitionIndex = 36776;

	class Wait : public Il2CppObject
	{
	public:
		::MXBehaviorTree::IBehaviorTreePropertyFloat* duration; // 0x38
		::System::Single elapsedTime; // 0x40

		::System::Void OnEnter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXBEHAVIORTREE_WAIT_ONENTER_OFFSET))(nullptr);
		}

		::System::Void .ctor(Il2CppObject* arg, Il2CppObject* arg, ::MXBehaviorTree::IBehaviorTreePropertyFloat* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(Il2CppObject*, Il2CppObject*, ::MXBehaviorTree::IBehaviorTreePropertyFloat*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MXBEHAVIORTREE_WAIT_.CTOR_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXBEHAVIORTREE_WAIT_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MXBehaviorTree::Wait&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MXBehaviorTree::Wait&*, ::PVOID))((::PBYTE)hIl2Cpp + MXBEHAVIORTREE_WAIT_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		State* OnUpdate()
		{
			return (return (State*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXBEHAVIORTREE_WAIT_ONUPDATE_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MXBehaviorTree::Wait&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MXBehaviorTree::Wait&*, ::PVOID))((::PBYTE)hIl2Cpp + MXBEHAVIORTREE_WAIT_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXBEHAVIORTREE_WAIT_REGISTERFORMATTER_OFFSET))(nullptr);
		}

	};
}

