#pragma once
#include "../unitysdk.h"

namespace MemoryPack { class MemoryPackReader&; }
namespace MXBehaviorTree { class BlackboardPropertyLong&; }
namespace MemoryPack { class MemoryPackWriter&; }

#define MXBEHAVIORTREE_BLACKBOARDPROPERTYLONG_.CCTOR_OFFSET UNITYSDK_OFFSET(0x942B120)
#define MXBEHAVIORTREE_BLACKBOARDPROPERTYLONG_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x942B2F0)
#define MXBEHAVIORTREE_BLACKBOARDPROPERTYLONG_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x942B920)
#define MXBEHAVIORTREE_BLACKBOARDPROPERTYLONG_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x942B130)
#define MXBEHAVIORTREE_BLACKBOARDPROPERTYLONG_.CTOR_OFFSET UNITYSDK_OFFSET(0x942B8D0)

namespace MXBehaviorTree
{
	inline static constexpr unsigned int BlackboardPropertyLong_TypeDefinitionIndex = 36810;

	class BlackboardPropertyLong : public ::MXUnderCover::UIUCPlayerButton
	{
	public:
		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXBEHAVIORTREE_BLACKBOARDPROPERTYLONG_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MXBehaviorTree::BlackboardPropertyLong&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MXBehaviorTree::BlackboardPropertyLong&*, ::PVOID))((::PBYTE)hIl2Cpp + MXBEHAVIORTREE_BLACKBOARDPROPERTYLONG_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MXBehaviorTree::BlackboardPropertyLong&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MXBehaviorTree::BlackboardPropertyLong&*, ::PVOID))((::PBYTE)hIl2Cpp + MXBEHAVIORTREE_BLACKBOARDPROPERTYLONG_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXBEHAVIORTREE_BLACKBOARDPROPERTYLONG_REGISTERFORMATTER_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MXBEHAVIORTREE_BLACKBOARDPROPERTYLONG_.CTOR_OFFSET))(str, nullptr);
		}

	};
}

