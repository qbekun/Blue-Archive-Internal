#pragma once
#include "../unitysdk.h"

namespace MemoryPack { class MemoryPackWriter&; }
namespace MXBehaviorTree { class BlackboardPropertyInt&; }
namespace MemoryPack { class MemoryPackReader&; }

#define MXBEHAVIORTREE_BLACKBOARDPROPERTYINT_.CTOR_OFFSET UNITYSDK_OFFSET(0x9429F80)
#define MXBEHAVIORTREE_BLACKBOARDPROPERTYINT_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x9429FD0)
#define MXBEHAVIORTREE_BLACKBOARDPROPERTYINT_.CCTOR_OFFSET UNITYSDK_OFFSET(0x942A890)
#define MXBEHAVIORTREE_BLACKBOARDPROPERTYINT_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x942A8A0)
#define MXBEHAVIORTREE_BLACKBOARDPROPERTYINT_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x942AAA0)

namespace MXBehaviorTree
{
	inline static constexpr unsigned int BlackboardPropertyInt_TypeDefinitionIndex = 36808;

	class BlackboardPropertyInt : public UCButtonVisualState
	{
	public:
		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MXBEHAVIORTREE_BLACKBOARDPROPERTYINT_.CTOR_OFFSET))(str, nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MXBehaviorTree::BlackboardPropertyInt&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MXBehaviorTree::BlackboardPropertyInt&*, ::PVOID))((::PBYTE)hIl2Cpp + MXBEHAVIORTREE_BLACKBOARDPROPERTYINT_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXBEHAVIORTREE_BLACKBOARDPROPERTYINT_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXBEHAVIORTREE_BLACKBOARDPROPERTYINT_REGISTERFORMATTER_OFFSET))(nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MXBehaviorTree::BlackboardPropertyInt&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MXBehaviorTree::BlackboardPropertyInt&*, ::PVOID))((::PBYTE)hIl2Cpp + MXBEHAVIORTREE_BLACKBOARDPROPERTYINT_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

	};
}

