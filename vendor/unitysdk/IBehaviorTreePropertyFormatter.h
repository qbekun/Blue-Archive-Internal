#pragma once
#include "unitysdk.h"

namespace MemoryPack { class MemoryPackWriter&; }
namespace MXBehaviorTree { class IBehaviorTreeProperty&; }
namespace MemoryPack { class MemoryPackReader&; }

#define IBEHAVIORTREEPROPERTYFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x94224E0)
#define IBEHAVIORTREEPROPERTYFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x94229F0)
#define IBEHAVIORTREEPROPERTYFORMATTER_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9423320)
#define IBEHAVIORTREEPROPERTYFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9422490)

	inline static constexpr unsigned int IBehaviorTreePropertyFormatter_TypeDefinitionIndex = 36779;

	class IBehaviorTreePropertyFormatter : public BufferAllocatedReason
	{
	public:
		Il2CppObject* __typeToTag; // 0x0

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MXBehaviorTree::IBehaviorTreeProperty&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MXBehaviorTree::IBehaviorTreeProperty&*, ::PVOID))((::PBYTE)hIl2Cpp + IBEHAVIORTREEPROPERTYFORMATTER_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MXBehaviorTree::IBehaviorTreeProperty&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MXBehaviorTree::IBehaviorTreeProperty&*, ::PVOID))((::PBYTE)hIl2Cpp + IBEHAVIORTREEPROPERTYFORMATTER_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IBEHAVIORTREEPROPERTYFORMATTER_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IBEHAVIORTREEPROPERTYFORMATTER_.CTOR_OFFSET))(nullptr);
		}

	};

