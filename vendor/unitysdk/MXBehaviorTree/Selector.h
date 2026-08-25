#pragma once
#include "../unitysdk.h"

namespace MemoryPack { class MemoryPackWriter&; }
namespace MXBehaviorTree { class Selector&; }
namespace MemoryPack { class MemoryPackReader&; }

#define MXBEHAVIORTREE_SELECTOR_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x9407470)
#define MXBEHAVIORTREE_SELECTOR_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x9407B80)
#define MXBEHAVIORTREE_SELECTOR_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x9409330)
#define MXBEHAVIORTREE_SELECTOR_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x9409760)
#define MXBEHAVIORTREE_SELECTOR_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9409A10)
#define MXBEHAVIORTREE_SELECTOR_ONENTER_OFFSET UNITYSDK_OFFSET(0x9409A20)
#define MXBEHAVIORTREE_SELECTOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x9409290)
#define MXBEHAVIORTREE_SELECTOR_ONINIT_OFFSET UNITYSDK_OFFSET(0x9409A30)

namespace MXBehaviorTree
{
	inline static constexpr unsigned int Selector_TypeDefinitionIndex = 36752;

	class Selector : public Il2CppObject
	{
	public:
		::System::Int32 current; // 0x40
		::Il2CppArray<::System::Object*>* lowPriorityAbortDecorator; // 0x48

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MXBehaviorTree::Selector&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MXBehaviorTree::Selector&*, ::PVOID))((::PBYTE)hIl2Cpp + MXBEHAVIORTREE_SELECTOR_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MXBehaviorTree::Selector&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MXBehaviorTree::Selector&*, ::PVOID))((::PBYTE)hIl2Cpp + MXBEHAVIORTREE_SELECTOR_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXBEHAVIORTREE_SELECTOR_REGISTERFORMATTER_OFFSET))(nullptr);
		}

		State* OnUpdate()
		{
			return (return (State*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXBEHAVIORTREE_SELECTOR_ONUPDATE_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXBEHAVIORTREE_SELECTOR_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void OnEnter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXBEHAVIORTREE_SELECTOR_ONENTER_OFFSET))(nullptr);
		}

		::System::Void .ctor(Il2CppObject* arg, Il2CppObject* arg, Il2CppObject* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(Il2CppObject*, Il2CppObject*, Il2CppObject*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MXBEHAVIORTREE_SELECTOR_.CTOR_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void OnInit()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXBEHAVIORTREE_SELECTOR_ONINIT_OFFSET))(nullptr);
		}

	};
}

