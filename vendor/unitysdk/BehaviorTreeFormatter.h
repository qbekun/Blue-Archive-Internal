#pragma once
#include "unitysdk.h"

namespace MemoryPack { class MemoryPackReader&; }
namespace MXBehaviorTree { class BehaviorTree&; }
namespace MemoryPack { class MemoryPackWriter&; }

#define BEHAVIORTREEFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9402730)
#define BEHAVIORTREEFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x9402D10)
#define BEHAVIORTREEFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x9402D60)

	inline static constexpr unsigned int BehaviorTreeFormatter_TypeDefinitionIndex = 36727;

	class BehaviorTreeFormatter : public ::System::Reflection::Emit::UnmanagedMarshal
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORTREEFORMATTER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MXBehaviorTree::BehaviorTree&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MXBehaviorTree::BehaviorTree&*, ::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORTREEFORMATTER_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MXBehaviorTree::BehaviorTree&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MXBehaviorTree::BehaviorTree&*, ::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORTREEFORMATTER_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

	};

