#pragma once
#include "unitysdk.h"

namespace MemoryPack { class MemoryPackReader&; }
namespace MXBehaviorTree { class IBehaviorTreePropertyBool&; }
namespace MemoryPack { class MemoryPackWriter&; }

#define IBEHAVIORTREEPROPERTYBOOLFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x94238B0)
#define IBEHAVIORTREEPROPERTYBOOLFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x9423BE0)
#define IBEHAVIORTREEPROPERTYBOOLFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9423870)
#define IBEHAVIORTREEPROPERTYBOOLFORMATTER_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9423FD0)

	inline static constexpr unsigned int IBehaviorTreePropertyBoolFormatter_TypeDefinitionIndex = 36783;

	class IBehaviorTreePropertyBoolFormatter : public ::System::Buffers::ArrayPoolEventSource
	{
	public:
		Il2CppObject* __typeToTag; // 0x0

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MXBehaviorTree::IBehaviorTreePropertyBool&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MXBehaviorTree::IBehaviorTreePropertyBool&*, ::PVOID))((::PBYTE)hIl2Cpp + IBEHAVIORTREEPROPERTYBOOLFORMATTER_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MXBehaviorTree::IBehaviorTreePropertyBool&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MXBehaviorTree::IBehaviorTreePropertyBool&*, ::PVOID))((::PBYTE)hIl2Cpp + IBEHAVIORTREEPROPERTYBOOLFORMATTER_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IBEHAVIORTREEPROPERTYBOOLFORMATTER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IBEHAVIORTREEPROPERTYBOOLFORMATTER_.CCTOR_OFFSET))(nullptr);
		}

	};

