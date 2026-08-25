#pragma once
#include "unitysdk.h"

namespace MemoryPack { class MemoryPackWriter&; }
namespace MXBehaviorTree { class Wait&; }
namespace MemoryPack { class MemoryPackReader&; }

#define WAITFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x94221F0)
#define WAITFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x9422230)
#define WAITFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x9422280)

	inline static constexpr unsigned int WaitFormatter_TypeDefinitionIndex = 36775;

	class WaitFormatter : public __StaticArrayInitTypeSize=4096
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + WAITFORMATTER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MXBehaviorTree::Wait&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MXBehaviorTree::Wait&*, ::PVOID))((::PBYTE)hIl2Cpp + WAITFORMATTER_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MXBehaviorTree::Wait&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MXBehaviorTree::Wait&*, ::PVOID))((::PBYTE)hIl2Cpp + WAITFORMATTER_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

	};

