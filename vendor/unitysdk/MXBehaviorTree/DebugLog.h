#pragma once
#include "../unitysdk.h"

namespace MXBehaviorTree { class ConstantPropertyString; }
namespace MemoryPack { class MemoryPackWriter&; }
namespace MXBehaviorTree { class DebugLog&; }
namespace MemoryPack { class MemoryPackReader&; }

#define MXBEHAVIORTREE_DEBUGLOG_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x9417520)
#define MXBEHAVIORTREE_DEBUGLOG_.CTOR_OFFSET UNITYSDK_OFFSET(0x9417C60)
#define MXBEHAVIORTREE_DEBUGLOG_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x9417C90)
#define MXBEHAVIORTREE_DEBUGLOG_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x9418000)
#define MXBEHAVIORTREE_DEBUGLOG_.CCTOR_OFFSET UNITYSDK_OFFSET(0x941AD80)
#define MXBEHAVIORTREE_DEBUGLOG_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x941AD90)

namespace MXBehaviorTree
{
	inline static constexpr unsigned int DebugLog_TypeDefinitionIndex = 36772;

	class DebugLog : public Il2CppObject
	{
	public:
		::MXBehaviorTree::ConstantPropertyString* log; // 0x38

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MXBehaviorTree::DebugLog&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MXBehaviorTree::DebugLog&*, ::PVOID))((::PBYTE)hIl2Cpp + MXBEHAVIORTREE_DEBUGLOG_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor(Il2CppObject* arg, Il2CppObject* arg, ::MXBehaviorTree::ConstantPropertyString* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(Il2CppObject*, Il2CppObject*, ::MXBehaviorTree::ConstantPropertyString*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MXBEHAVIORTREE_DEBUGLOG_.CTOR_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXBEHAVIORTREE_DEBUGLOG_REGISTERFORMATTER_OFFSET))(nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MXBehaviorTree::DebugLog&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MXBehaviorTree::DebugLog&*, ::PVOID))((::PBYTE)hIl2Cpp + MXBEHAVIORTREE_DEBUGLOG_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXBEHAVIORTREE_DEBUGLOG_.CCTOR_OFFSET))(nullptr);
		}

		State* OnUpdate()
		{
			return (return (State*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXBEHAVIORTREE_DEBUGLOG_ONUPDATE_OFFSET))(nullptr);
		}

	};
}

