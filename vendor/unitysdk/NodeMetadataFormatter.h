#pragma once
#include "unitysdk.h"

namespace MemoryPack { class MemoryPackReader&; }
namespace MXBehaviorTree { class NodeMetadata&; }
namespace MemoryPack { class MemoryPackWriter&; }

#define NODEMETADATAFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9404820)
#define NODEMETADATAFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x94050C0)
#define NODEMETADATAFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x9405110)

	inline static constexpr unsigned int NodeMetadataFormatter_TypeDefinitionIndex = 36733;

	class NodeMetadataFormatter : public ::System::IO::PinnedBufferMemoryStream
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEMETADATAFORMATTER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MXBehaviorTree::NodeMetadata&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MXBehaviorTree::NodeMetadata&*, ::PVOID))((::PBYTE)hIl2Cpp + NODEMETADATAFORMATTER_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MXBehaviorTree::NodeMetadata&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MXBehaviorTree::NodeMetadata&*, ::PVOID))((::PBYTE)hIl2Cpp + NODEMETADATAFORMATTER_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

	};

