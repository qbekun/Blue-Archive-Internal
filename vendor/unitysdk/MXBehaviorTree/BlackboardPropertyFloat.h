#pragma once
#include "../unitysdk.h"

namespace MemoryPack { class MemoryPackWriter&; }
namespace MXBehaviorTree { class BlackboardPropertyFloat&; }
namespace MemoryPack { class MemoryPackReader&; }

#define MXBEHAVIORTREE_BLACKBOARDPROPERTYFLOAT_.CCTOR_OFFSET UNITYSDK_OFFSET(0x942C2C0)
#define MXBEHAVIORTREE_BLACKBOARDPROPERTYFLOAT_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x942C490)
#define MXBEHAVIORTREE_BLACKBOARDPROPERTYFLOAT_.CTOR_OFFSET UNITYSDK_OFFSET(0x942CD50)
#define MXBEHAVIORTREE_BLACKBOARDPROPERTYFLOAT_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x942C2D0)
#define MXBEHAVIORTREE_BLACKBOARDPROPERTYFLOAT_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x942CDE0)

namespace MXBehaviorTree
{
	inline static constexpr unsigned int BlackboardPropertyFloat_TypeDefinitionIndex = 36812;

	class BlackboardPropertyFloat : public ::MXUnderCover::UIUCSkillButton
	{
	public:
		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXBEHAVIORTREE_BLACKBOARDPROPERTYFLOAT_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MXBehaviorTree::BlackboardPropertyFloat&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MXBehaviorTree::BlackboardPropertyFloat&*, ::PVOID))((::PBYTE)hIl2Cpp + MXBEHAVIORTREE_BLACKBOARDPROPERTYFLOAT_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MXBEHAVIORTREE_BLACKBOARDPROPERTYFLOAT_.CTOR_OFFSET))(str, nullptr);
		}

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXBEHAVIORTREE_BLACKBOARDPROPERTYFLOAT_REGISTERFORMATTER_OFFSET))(nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MXBehaviorTree::BlackboardPropertyFloat&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MXBehaviorTree::BlackboardPropertyFloat&*, ::PVOID))((::PBYTE)hIl2Cpp + MXBEHAVIORTREE_BLACKBOARDPROPERTYFLOAT_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

	};
}

