#pragma once
#include "../unitysdk.h"

namespace MXBehaviorTree { class IBlackboardProperty; }
namespace MXBehaviorTree { class ComparisonOperation; }
namespace MXBehaviorTree { class IConstantProperty; }
namespace MemoryPack { class MemoryPackWriter&; }
namespace MXBehaviorTree { class BlackboardConstCompare&; }
namespace MemoryPack { class MemoryPackReader&; }

#define MXBEHAVIORTREE_BLACKBOARDCONSTCOMPARE_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x94102C0)
#define MXBEHAVIORTREE_BLACKBOARDCONSTCOMPARE_.CCTOR_OFFSET UNITYSDK_OFFSET(0x94107B0)
#define MXBEHAVIORTREE_BLACKBOARDCONSTCOMPARE_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x94107C0)
#define MXBEHAVIORTREE_BLACKBOARDCONSTCOMPARE_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x9410FD0)
#define MXBEHAVIORTREE_BLACKBOARDCONSTCOMPARE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x9413F20)
#define MXBEHAVIORTREE_BLACKBOARDCONSTCOMPARE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9413E60)

namespace MXBehaviorTree
{
	inline static constexpr unsigned int BlackboardConstCompare_TypeDefinitionIndex = 36760;

	class BlackboardConstCompare : public Il2CppObject
	{
	public:
		::MXBehaviorTree::IBlackboardProperty* blackboardKey; // 0x40
		::MXBehaviorTree::ComparisonOperation* compare; // 0x48
		::MXBehaviorTree::IConstantProperty* constantValue; // 0x50

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXBEHAVIORTREE_BLACKBOARDCONSTCOMPARE_REGISTERFORMATTER_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXBEHAVIORTREE_BLACKBOARDCONSTCOMPARE_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MXBehaviorTree::BlackboardConstCompare&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MXBehaviorTree::BlackboardConstCompare&*, ::PVOID))((::PBYTE)hIl2Cpp + MXBEHAVIORTREE_BLACKBOARDCONSTCOMPARE_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MXBehaviorTree::BlackboardConstCompare&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MXBehaviorTree::BlackboardConstCompare&*, ::PVOID))((::PBYTE)hIl2Cpp + MXBEHAVIORTREE_BLACKBOARDCONSTCOMPARE_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		State* OnUpdate()
		{
			return (return (State*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXBEHAVIORTREE_BLACKBOARDCONSTCOMPARE_ONUPDATE_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MXBehaviorTree::IBlackboardProperty* arg, ::MXBehaviorTree::ComparisonOperation* arg, ::MXBehaviorTree::IConstantProperty* arg, AbortType* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::MXBehaviorTree::IBlackboardProperty*, ::MXBehaviorTree::ComparisonOperation*, ::MXBehaviorTree::IConstantProperty*, AbortType*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MXBEHAVIORTREE_BLACKBOARDCONSTCOMPARE_.CTOR_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

	};
}

