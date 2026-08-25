#pragma once
#include "unitysdk.h"

namespace MemoryPack { class MemoryPackWriter&; }
namespace MXBehaviorTree { class DebugLog&; }
namespace MemoryPack { class MemoryPackReader&; }

#define DEBUGLOGFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x941ADA0)
#define DEBUGLOGFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9417FC0)
#define DEBUGLOGFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x941ADF0)

	inline static constexpr unsigned int DebugLogFormatter_TypeDefinitionIndex = 36771;

	class DebugLogFormatter : public ::System::Diagnostics::DebuggerBrowsableState
	{
	public:
		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MXBehaviorTree::DebugLog&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MXBehaviorTree::DebugLog&*, ::PVOID))((::PBYTE)hIl2Cpp + DEBUGLOGFORMATTER_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEBUGLOGFORMATTER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MXBehaviorTree::DebugLog&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MXBehaviorTree::DebugLog&*, ::PVOID))((::PBYTE)hIl2Cpp + DEBUGLOGFORMATTER_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

	};

