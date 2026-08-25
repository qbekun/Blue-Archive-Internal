#pragma once
#include "unitysdk.h"

namespace MemoryPack { class MemoryPackReader&; }
namespace MXBehaviorTree { class TestNode&; }
namespace MemoryPack { class MemoryPackWriter&; }

#define TESTNODEFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x941E7F0)
#define TESTNODEFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x941E830)
#define TESTNODEFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x941E880)

	inline static constexpr unsigned int TestNodeFormatter_TypeDefinitionIndex = 36773;

	class TestNodeFormatter : public __StaticArrayInitTypeSize=240
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TESTNODEFORMATTER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MXBehaviorTree::TestNode&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MXBehaviorTree::TestNode&*, ::PVOID))((::PBYTE)hIl2Cpp + TESTNODEFORMATTER_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MXBehaviorTree::TestNode&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MXBehaviorTree::TestNode&*, ::PVOID))((::PBYTE)hIl2Cpp + TESTNODEFORMATTER_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

	};

