#pragma once
#include "unitysdk.h"

namespace MemoryPack { class MemoryPackWriter&; }
namespace MXBehaviorTree { class Selector&; }
namespace MemoryPack { class MemoryPackReader&; }

#define SELECTORFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x9409EF0)
#define SELECTORFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x9409F40)
#define SELECTORFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9409720)

	inline static constexpr unsigned int SelectorFormatter_TypeDefinitionIndex = 36751;

	class SelectorFormatter : public <>c
	{
	public:
		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MXBehaviorTree::Selector&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MXBehaviorTree::Selector&*, ::PVOID))((::PBYTE)hIl2Cpp + SELECTORFORMATTER_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MXBehaviorTree::Selector&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MXBehaviorTree::Selector&*, ::PVOID))((::PBYTE)hIl2Cpp + SELECTORFORMATTER_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SELECTORFORMATTER_.CTOR_OFFSET))(nullptr);
		}

	};

