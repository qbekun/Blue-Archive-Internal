#pragma once
#include "unitysdk.h"

namespace MemoryPack { class MemoryPackReader&; }
namespace MXBehaviorTree { class Root&; }
namespace MemoryPack { class MemoryPackWriter&; }

#define ROOTFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x9417320)
#define ROOTFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9416B70)
#define ROOTFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x9417370)

	inline static constexpr unsigned int RootFormatter_TypeDefinitionIndex = 36767;

	class RootFormatter : public <WriteToUnderlyingStreamAsync>d__63
	{
	public:
		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MXBehaviorTree::Root&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MXBehaviorTree::Root&*, ::PVOID))((::PBYTE)hIl2Cpp + ROOTFORMATTER_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTFORMATTER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MXBehaviorTree::Root&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MXBehaviorTree::Root&*, ::PVOID))((::PBYTE)hIl2Cpp + ROOTFORMATTER_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

	};

