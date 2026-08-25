#pragma once
#include "unitysdk.h"

namespace MemoryPack { class MemoryPackReader&; }
namespace MXBehaviorTree { class IBehaviorTreePropertyObject&; }
namespace MemoryPack { class MemoryPackWriter&; }

#define IBEHAVIORTREEPROPERTYOBJECTFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x94276F0)
#define IBEHAVIORTREEPROPERTYOBJECTFORMATTER_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9427A20)
#define IBEHAVIORTREEPROPERTYOBJECTFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x9427B50)
#define IBEHAVIORTREEPROPERTYOBJECTFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x94276B0)

	inline static constexpr unsigned int IBehaviorTreePropertyObjectFormatter_TypeDefinitionIndex = 36795;

	class IBehaviorTreePropertyObjectFormatter : public MemoryPressure
	{
	public:
		Il2CppObject* __typeToTag; // 0x0

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MXBehaviorTree::IBehaviorTreePropertyObject&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MXBehaviorTree::IBehaviorTreePropertyObject&*, ::PVOID))((::PBYTE)hIl2Cpp + IBEHAVIORTREEPROPERTYOBJECTFORMATTER_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IBEHAVIORTREEPROPERTYOBJECTFORMATTER_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MXBehaviorTree::IBehaviorTreePropertyObject&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MXBehaviorTree::IBehaviorTreePropertyObject&*, ::PVOID))((::PBYTE)hIl2Cpp + IBEHAVIORTREEPROPERTYOBJECTFORMATTER_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IBEHAVIORTREEPROPERTYOBJECTFORMATTER_.CTOR_OFFSET))(nullptr);
		}

	};

