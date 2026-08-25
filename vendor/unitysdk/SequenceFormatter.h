#pragma once
#include "unitysdk.h"

namespace MemoryPack { class MemoryPackWriter&; }
namespace MXBehaviorTree { class Sequence&; }
namespace MemoryPack { class MemoryPackReader&; }

#define SEQUENCEFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x940C340)
#define SEQUENCEFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x940AA90)
#define SEQUENCEFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x940C390)

	inline static constexpr unsigned int SequenceFormatter_TypeDefinitionIndex = 36753;

	class SequenceFormatter : public <CopyToAsyncInternal>d__28
	{
	public:
		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MXBehaviorTree::Sequence&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MXBehaviorTree::Sequence&*, ::PVOID))((::PBYTE)hIl2Cpp + SEQUENCEFORMATTER_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SEQUENCEFORMATTER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MXBehaviorTree::Sequence&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MXBehaviorTree::Sequence&*, ::PVOID))((::PBYTE)hIl2Cpp + SEQUENCEFORMATTER_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

	};

