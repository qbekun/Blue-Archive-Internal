#pragma once
#include "../unitysdk.h"

namespace MemoryPack { class MemoryPackWriter&; }
namespace MXBehaviorTree { class BlackboardPropertyString&; }
namespace MemoryPack { class MemoryPackReader&; }

#define MXBEHAVIORTREE_BLACKBOARDPROPERTYSTRING_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x942D460)
#define MXBEHAVIORTREE_BLACKBOARDPROPERTYSTRING_.CTOR_OFFSET UNITYSDK_OFFSET(0x942D660)
#define MXBEHAVIORTREE_BLACKBOARDPROPERTYSTRING_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x942D6B0)
#define MXBEHAVIORTREE_BLACKBOARDPROPERTYSTRING_.CCTOR_OFFSET UNITYSDK_OFFSET(0x942DF70)
#define MXBEHAVIORTREE_BLACKBOARDPROPERTYSTRING_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x942DF80)

namespace MXBehaviorTree
{
	inline static constexpr unsigned int BlackboardPropertyString_TypeDefinitionIndex = 36814;

	class BlackboardPropertyString : public ::MXUnderCover::UIUCWalkButton
	{
	public:
		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXBEHAVIORTREE_BLACKBOARDPROPERTYSTRING_REGISTERFORMATTER_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MXBEHAVIORTREE_BLACKBOARDPROPERTYSTRING_.CTOR_OFFSET))(str, nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MXBehaviorTree::BlackboardPropertyString&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MXBehaviorTree::BlackboardPropertyString&*, ::PVOID))((::PBYTE)hIl2Cpp + MXBEHAVIORTREE_BLACKBOARDPROPERTYSTRING_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXBEHAVIORTREE_BLACKBOARDPROPERTYSTRING_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MXBehaviorTree::BlackboardPropertyString&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MXBehaviorTree::BlackboardPropertyString&*, ::PVOID))((::PBYTE)hIl2Cpp + MXBEHAVIORTREE_BLACKBOARDPROPERTYSTRING_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

	};
}

