#pragma once
#include "../unitysdk.h"

namespace MemoryPack { class MemoryPackWriter&; }
namespace MXBehaviorTree { class BlackboardPropertyVector3&; }
namespace MemoryPack { class MemoryPackReader&; }

#define MXBEHAVIORTREE_BLACKBOARDPROPERTYVECTOR3_.CCTOR_OFFSET UNITYSDK_OFFSET(0x942E600)
#define MXBEHAVIORTREE_BLACKBOARDPROPERTYVECTOR3_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x942E7D0)
#define MXBEHAVIORTREE_BLACKBOARDPROPERTYVECTOR3_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x942F090)
#define MXBEHAVIORTREE_BLACKBOARDPROPERTYVECTOR3_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x942E610)
#define MXBEHAVIORTREE_BLACKBOARDPROPERTYVECTOR3_.CTOR_OFFSET UNITYSDK_OFFSET(0x942F670)

namespace MXBehaviorTree
{
	inline static constexpr unsigned int BlackboardPropertyVector3_TypeDefinitionIndex = 36816;

	class BlackboardPropertyVector3 : public <Co_Loading>d__24
	{
	public:
		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXBEHAVIORTREE_BLACKBOARDPROPERTYVECTOR3_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MXBehaviorTree::BlackboardPropertyVector3&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MXBehaviorTree::BlackboardPropertyVector3&*, ::PVOID))((::PBYTE)hIl2Cpp + MXBEHAVIORTREE_BLACKBOARDPROPERTYVECTOR3_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MXBehaviorTree::BlackboardPropertyVector3&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MXBehaviorTree::BlackboardPropertyVector3&*, ::PVOID))((::PBYTE)hIl2Cpp + MXBEHAVIORTREE_BLACKBOARDPROPERTYVECTOR3_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXBEHAVIORTREE_BLACKBOARDPROPERTYVECTOR3_REGISTERFORMATTER_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MXBEHAVIORTREE_BLACKBOARDPROPERTYVECTOR3_.CTOR_OFFSET))(str, nullptr);
		}

	};
}

