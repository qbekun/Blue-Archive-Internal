#pragma once
#include "unitysdk.h"

namespace MemoryPack { class MemoryPackWriter&; }
namespace MXBehaviorTree { class IBehaviorTreePropertyFloat&; }
namespace MemoryPack { class MemoryPackReader&; }

#define IBEHAVIORTREEPROPERTYFLOATFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x94257D0)
#define IBEHAVIORTREEPROPERTYFLOATFORMATTER_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9425BC0)
#define IBEHAVIORTREEPROPERTYFLOATFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9425780)
#define IBEHAVIORTREEPROPERTYFLOATFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x9425CF0)

	inline static constexpr unsigned int IBehaviorTreePropertyFloatFormatter_TypeDefinitionIndex = 36789;

	class IBehaviorTreePropertyFloatFormatter : public ::System::Buffers::IPinnable
	{
	public:
		Il2CppObject* __typeToTag; // 0x0

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MXBehaviorTree::IBehaviorTreePropertyFloat&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MXBehaviorTree::IBehaviorTreePropertyFloat&*, ::PVOID))((::PBYTE)hIl2Cpp + IBEHAVIORTREEPROPERTYFLOATFORMATTER_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IBEHAVIORTREEPROPERTYFLOATFORMATTER_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IBEHAVIORTREEPROPERTYFLOATFORMATTER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MXBehaviorTree::IBehaviorTreePropertyFloat&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MXBehaviorTree::IBehaviorTreePropertyFloat&*, ::PVOID))((::PBYTE)hIl2Cpp + IBEHAVIORTREEPROPERTYFLOATFORMATTER_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

	};

