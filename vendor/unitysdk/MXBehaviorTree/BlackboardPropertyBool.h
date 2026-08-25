#pragma once
#include "../unitysdk.h"

namespace MemoryPack { class MemoryPackReader&; }
namespace MXBehaviorTree { class BlackboardPropertyBool&; }
namespace MemoryPack { class MemoryPackWriter&; }

#define MXBEHAVIORTREE_BLACKBOARDPROPERTYBOOL_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x9428DE0)
#define MXBEHAVIORTREE_BLACKBOARDPROPERTYBOOL_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x9429410)
#define MXBEHAVIORTREE_BLACKBOARDPROPERTYBOOL_.CTOR_OFFSET UNITYSDK_OFFSET(0x94293C0)
#define MXBEHAVIORTREE_BLACKBOARDPROPERTYBOOL_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9429CD0)
#define MXBEHAVIORTREE_BLACKBOARDPROPERTYBOOL_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x9429CE0)

namespace MXBehaviorTree
{
	inline static constexpr unsigned int BlackboardPropertyBool_TypeDefinitionIndex = 36806;

	class BlackboardPropertyBool : public ::MXUnderCover::UIUCMainButtonController
	{
	public:
		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MXBehaviorTree::BlackboardPropertyBool&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MXBehaviorTree::BlackboardPropertyBool&*, ::PVOID))((::PBYTE)hIl2Cpp + MXBEHAVIORTREE_BLACKBOARDPROPERTYBOOL_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MXBehaviorTree::BlackboardPropertyBool&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MXBehaviorTree::BlackboardPropertyBool&*, ::PVOID))((::PBYTE)hIl2Cpp + MXBEHAVIORTREE_BLACKBOARDPROPERTYBOOL_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MXBEHAVIORTREE_BLACKBOARDPROPERTYBOOL_.CTOR_OFFSET))(str, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXBEHAVIORTREE_BLACKBOARDPROPERTYBOOL_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXBEHAVIORTREE_BLACKBOARDPROPERTYBOOL_REGISTERFORMATTER_OFFSET))(nullptr);
		}

	};
}

