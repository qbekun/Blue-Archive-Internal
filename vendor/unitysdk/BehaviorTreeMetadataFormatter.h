#pragma once
#include "unitysdk.h"

namespace MemoryPack { class MemoryPackReader&; }
namespace MXBehaviorTree { class BehaviorTreeMetadata&; }
namespace MemoryPack { class MemoryPackWriter&; }

#define BEHAVIORTREEMETADATAFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x9403DB0)
#define BEHAVIORTREEMETADATAFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9403740)
#define BEHAVIORTREEMETADATAFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x9403E00)

	inline static constexpr unsigned int BehaviorTreeMetadataFormatter_TypeDefinitionIndex = 36731;

	class BehaviorTreeMetadataFormatter : public ::System::Numerics::ConstantHelper
	{
	public:
		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MXBehaviorTree::BehaviorTreeMetadata&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MXBehaviorTree::BehaviorTreeMetadata&*, ::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORTREEMETADATAFORMATTER_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORTREEMETADATAFORMATTER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MXBehaviorTree::BehaviorTreeMetadata&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MXBehaviorTree::BehaviorTreeMetadata&*, ::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORTREEMETADATAFORMATTER_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

	};

