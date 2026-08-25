#pragma once
#include "unitysdk.h"

namespace MemoryPack { class MemoryPackReader&; }
namespace MXBehaviorTree { class BlackboardMetadata&; }
namespace MemoryPack { class MemoryPackWriter&; }

#define BLACKBOARDMETADATAFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x9406120)
#define BLACKBOARDMETADATAFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9405C00)
#define BLACKBOARDMETADATAFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x9406170)

	inline static constexpr unsigned int BlackboardMetadataFormatter_TypeDefinitionIndex = 36740;

	class BlackboardMetadataFormatter : public ::System::Globalization::CultureTypes
	{
	public:
		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MXBehaviorTree::BlackboardMetadata&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MXBehaviorTree::BlackboardMetadata&*, ::PVOID))((::PBYTE)hIl2Cpp + BLACKBOARDMETADATAFORMATTER_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLACKBOARDMETADATAFORMATTER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MXBehaviorTree::BlackboardMetadata&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MXBehaviorTree::BlackboardMetadata&*, ::PVOID))((::PBYTE)hIl2Cpp + BLACKBOARDMETADATAFORMATTER_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

	};

