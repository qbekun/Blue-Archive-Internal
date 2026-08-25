#pragma once
#include "unitysdk.h"

namespace MemoryPack { class MemoryPackReader&; }
namespace MXBehaviorTree { class IBehaviorTreePropertyLong&; }
namespace MemoryPack { class MemoryPackWriter&; }

#define IBEHAVIORTREEPROPERTYLONGFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9424D30)
#define IBEHAVIORTREEPROPERTYLONGFORMATTER_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9424D70)
#define IBEHAVIORTREEPROPERTYLONGFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x9424EA0)
#define IBEHAVIORTREEPROPERTYLONGFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x94251D0)

	inline static constexpr unsigned int IBehaviorTreePropertyLongFormatter_TypeDefinitionIndex = 36787;

	class IBehaviorTreePropertyLongFormatter : public ::System::Buffers::MemoryManager`1
	{
	public:
		Il2CppObject* __typeToTag; // 0x0

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IBEHAVIORTREEPROPERTYLONGFORMATTER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IBEHAVIORTREEPROPERTYLONGFORMATTER_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MXBehaviorTree::IBehaviorTreePropertyLong&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MXBehaviorTree::IBehaviorTreePropertyLong&*, ::PVOID))((::PBYTE)hIl2Cpp + IBEHAVIORTREEPROPERTYLONGFORMATTER_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MXBehaviorTree::IBehaviorTreePropertyLong&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MXBehaviorTree::IBehaviorTreePropertyLong&*, ::PVOID))((::PBYTE)hIl2Cpp + IBEHAVIORTREEPROPERTYLONGFORMATTER_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

	};

