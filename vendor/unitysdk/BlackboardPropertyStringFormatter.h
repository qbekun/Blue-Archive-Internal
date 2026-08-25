#pragma once
#include "unitysdk.h"

namespace MemoryPack { class MemoryPackReader&; }
namespace MXBehaviorTree { class BlackboardPropertyString&; }
namespace MemoryPack { class MemoryPackWriter&; }

#define BLACKBOARDPROPERTYSTRINGFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x942E560)
#define BLACKBOARDPROPERTYSTRINGFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x942D620)
#define BLACKBOARDPROPERTYSTRINGFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x942E5B0)

	inline static constexpr unsigned int BlackboardPropertyStringFormatter_TypeDefinitionIndex = 36813;

	class BlackboardPropertyStringFormatter : public FoundDatePattern
	{
	public:
		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MXBehaviorTree::BlackboardPropertyString&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MXBehaviorTree::BlackboardPropertyString&*, ::PVOID))((::PBYTE)hIl2Cpp + BLACKBOARDPROPERTYSTRINGFORMATTER_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLACKBOARDPROPERTYSTRINGFORMATTER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MXBehaviorTree::BlackboardPropertyString&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MXBehaviorTree::BlackboardPropertyString&*, ::PVOID))((::PBYTE)hIl2Cpp + BLACKBOARDPROPERTYSTRINGFORMATTER_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

	};

