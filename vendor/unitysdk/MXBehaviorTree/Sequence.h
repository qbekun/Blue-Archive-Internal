#pragma once
#include "../unitysdk.h"

namespace MemoryPack { class MemoryPackWriter&; }
namespace MXBehaviorTree { class Sequence&; }
namespace MemoryPack { class MemoryPackReader&; }

#define MXBEHAVIORTREE_SEQUENCE_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x9409F90)
#define MXBEHAVIORTREE_SEQUENCE_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x940A6A0)
#define MXBEHAVIORTREE_SEQUENCE_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x940AAD0)
#define MXBEHAVIORTREE_SEQUENCE_ONENTER_OFFSET UNITYSDK_OFFSET(0x940C280)
#define MXBEHAVIORTREE_SEQUENCE_.CCTOR_OFFSET UNITYSDK_OFFSET(0x940C290)
#define MXBEHAVIORTREE_SEQUENCE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x940C2A0)
#define MXBEHAVIORTREE_SEQUENCE_.CTOR_OFFSET UNITYSDK_OFFSET(0x940C1E0)

namespace MXBehaviorTree
{
	inline static constexpr unsigned int Sequence_TypeDefinitionIndex = 36754;

	class Sequence : public Il2CppObject
	{
	public:
		::System::Int32 current; // 0x40

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MXBehaviorTree::Sequence&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MXBehaviorTree::Sequence&*, ::PVOID))((::PBYTE)hIl2Cpp + MXBEHAVIORTREE_SEQUENCE_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXBEHAVIORTREE_SEQUENCE_REGISTERFORMATTER_OFFSET))(nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MXBehaviorTree::Sequence&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MXBehaviorTree::Sequence&*, ::PVOID))((::PBYTE)hIl2Cpp + MXBEHAVIORTREE_SEQUENCE_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void OnEnter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXBEHAVIORTREE_SEQUENCE_ONENTER_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXBEHAVIORTREE_SEQUENCE_.CCTOR_OFFSET))(nullptr);
		}

		State* OnUpdate()
		{
			return (return (State*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXBEHAVIORTREE_SEQUENCE_ONUPDATE_OFFSET))(nullptr);
		}

		::System::Void .ctor(Il2CppObject* arg, Il2CppObject* arg, Il2CppObject* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(Il2CppObject*, Il2CppObject*, Il2CppObject*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MXBEHAVIORTREE_SEQUENCE_.CTOR_OFFSET))(arg, arg, arg, arg, nullptr);
		}

	};
}

