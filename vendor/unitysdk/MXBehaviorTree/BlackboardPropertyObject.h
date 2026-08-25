#pragma once
#include "../unitysdk.h"

namespace MemoryPack { class MemoryPackReader&; }
namespace MXBehaviorTree { class BlackboardPropertyObject&; }
namespace MemoryPack { class MemoryPackWriter&; }

#define MXBEHAVIORTREE_BLACKBOARDPROPERTYOBJECT_.CTOR_OFFSET UNITYSDK_OFFSET(0x942F7A0)
#define MXBEHAVIORTREE_BLACKBOARDPROPERTYOBJECT_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x942F7F0)
#define MXBEHAVIORTREE_BLACKBOARDPROPERTYOBJECT_.CCTOR_OFFSET UNITYSDK_OFFSET(0x942FDD0)
#define MXBEHAVIORTREE_BLACKBOARDPROPERTYOBJECT_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x942FFA0)
#define MXBEHAVIORTREE_BLACKBOARDPROPERTYOBJECT_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x942FDE0)

namespace MXBehaviorTree
{
	inline static constexpr unsigned int BlackboardPropertyObject_TypeDefinitionIndex = 36818;

	class BlackboardPropertyObject : public <co_UseSkill>d__35
	{
	public:
		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MXBEHAVIORTREE_BLACKBOARDPROPERTYOBJECT_.CTOR_OFFSET))(str, nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MXBehaviorTree::BlackboardPropertyObject&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MXBehaviorTree::BlackboardPropertyObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MXBEHAVIORTREE_BLACKBOARDPROPERTYOBJECT_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXBEHAVIORTREE_BLACKBOARDPROPERTYOBJECT_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MXBehaviorTree::BlackboardPropertyObject&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MXBehaviorTree::BlackboardPropertyObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MXBEHAVIORTREE_BLACKBOARDPROPERTYOBJECT_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXBEHAVIORTREE_BLACKBOARDPROPERTYOBJECT_REGISTERFORMATTER_OFFSET))(nullptr);
		}

	};
}

