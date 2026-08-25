#pragma once
#include "unitysdk.h"

namespace MemoryPack { class MemoryPackReader&; }
namespace MXBehaviorTree { class BlackboardPropertyMetadata&; }
namespace MemoryPack { class MemoryPackWriter&; }

#define BLACKBOARDPROPERTYMETADATAFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9406870)
#define BLACKBOARDPROPERTYMETADATAFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x94068C0)
#define BLACKBOARDPROPERTYMETADATAFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x9406910)

	inline static constexpr unsigned int BlackboardPropertyMetadataFormatter_TypeDefinitionIndex = 36742;

	class BlackboardPropertyMetadataFormatter : public ::System::Globalization::FORMATFLAGS
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLACKBOARDPROPERTYMETADATAFORMATTER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MXBehaviorTree::BlackboardPropertyMetadata&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MXBehaviorTree::BlackboardPropertyMetadata&*, ::PVOID))((::PBYTE)hIl2Cpp + BLACKBOARDPROPERTYMETADATAFORMATTER_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MXBehaviorTree::BlackboardPropertyMetadata&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MXBehaviorTree::BlackboardPropertyMetadata&*, ::PVOID))((::PBYTE)hIl2Cpp + BLACKBOARDPROPERTYMETADATAFORMATTER_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

	};

