#pragma once
#include "unitysdk.h"

namespace MemoryPack { class MemoryPackReader&; }
namespace MXBehaviorTree { class IBehaviorTreePropertyString&; }
namespace MemoryPack { class MemoryPackWriter&; }

#define IBEHAVIORTREEPROPERTYSTRINGFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x9426230)
#define IBEHAVIORTREEPROPERTYSTRINGFORMATTER_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9426560)
#define IBEHAVIORTREEPROPERTYSTRINGFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x9426690)
#define IBEHAVIORTREEPROPERTYSTRINGFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x94261F0)

	inline static constexpr unsigned int IBehaviorTreePropertyStringFormatter_TypeDefinitionIndex = 36791;

	class IBehaviorTreePropertyStringFormatter : public PerCoreLockedStacks
	{
	public:
		Il2CppObject* __typeToTag; // 0x0

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MXBehaviorTree::IBehaviorTreePropertyString&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MXBehaviorTree::IBehaviorTreePropertyString&*, ::PVOID))((::PBYTE)hIl2Cpp + IBEHAVIORTREEPROPERTYSTRINGFORMATTER_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IBEHAVIORTREEPROPERTYSTRINGFORMATTER_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MXBehaviorTree::IBehaviorTreePropertyString&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MXBehaviorTree::IBehaviorTreePropertyString&*, ::PVOID))((::PBYTE)hIl2Cpp + IBEHAVIORTREEPROPERTYSTRINGFORMATTER_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IBEHAVIORTREEPROPERTYSTRINGFORMATTER_.CTOR_OFFSET))(nullptr);
		}

	};

