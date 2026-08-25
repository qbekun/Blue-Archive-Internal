#pragma once
#include "../unitysdk.h"

namespace MXBehaviorTree { class IBlackboardProperty; }
namespace MXBehaviorTree { class ComparisonOperation; }
namespace MemoryPack { class MemoryPackReader&; }
namespace MXBehaviorTree { class BlackboardCompare&; }
namespace MemoryPack { class MemoryPackWriter&; }

#define MXBEHAVIORTREE_BLACKBOARDCOMPARE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x940C500)
#define MXBEHAVIORTREE_BLACKBOARDCOMPARE_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x940C5D0)
#define MXBEHAVIORTREE_BLACKBOARDCOMPARE_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x940CAC0)
#define MXBEHAVIORTREE_BLACKBOARDCOMPARE_.CTOR_OFFSET UNITYSDK_OFFSET(0x940F940)
#define MXBEHAVIORTREE_BLACKBOARDCOMPARE_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x940FA00)
#define MXBEHAVIORTREE_BLACKBOARDCOMPARE_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9410210)

namespace MXBehaviorTree
{
	inline static constexpr unsigned int BlackboardCompare_TypeDefinitionIndex = 36758;

	class BlackboardCompare : public Il2CppObject
	{
	public:
		::MXBehaviorTree::IBlackboardProperty* blackboardKey; // 0x40
		::MXBehaviorTree::ComparisonOperation* compare; // 0x48
		::MXBehaviorTree::IBlackboardProperty* blackboardKeyOther; // 0x50

		State* OnUpdate()
		{
			return (return (State*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXBEHAVIORTREE_BLACKBOARDCOMPARE_ONUPDATE_OFFSET))(nullptr);
		}

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXBEHAVIORTREE_BLACKBOARDCOMPARE_REGISTERFORMATTER_OFFSET))(nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MXBehaviorTree::BlackboardCompare&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MXBehaviorTree::BlackboardCompare&*, ::PVOID))((::PBYTE)hIl2Cpp + MXBEHAVIORTREE_BLACKBOARDCOMPARE_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor(::MXBehaviorTree::IBlackboardProperty* arg, ::MXBehaviorTree::ComparisonOperation* arg, ::MXBehaviorTree::IBlackboardProperty* arg, AbortType* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::MXBehaviorTree::IBlackboardProperty*, ::MXBehaviorTree::ComparisonOperation*, ::MXBehaviorTree::IBlackboardProperty*, AbortType*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MXBEHAVIORTREE_BLACKBOARDCOMPARE_.CTOR_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MXBehaviorTree::BlackboardCompare&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MXBehaviorTree::BlackboardCompare&*, ::PVOID))((::PBYTE)hIl2Cpp + MXBEHAVIORTREE_BLACKBOARDCOMPARE_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXBEHAVIORTREE_BLACKBOARDCOMPARE_.CCTOR_OFFSET))(nullptr);
		}

	};
}

