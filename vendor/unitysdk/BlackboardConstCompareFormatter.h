#pragma once
#include "unitysdk.h"

namespace MemoryPack { class MemoryPackReader&; }
namespace MXBehaviorTree { class BlackboardConstCompare&; }
namespace MemoryPack { class MemoryPackWriter&; }

#define BLACKBOARDCONSTCOMPAREFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x9413FF0)
#define BLACKBOARDCONSTCOMPAREFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x9414040)
#define BLACKBOARDCONSTCOMPAREFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9410770)

	inline static constexpr unsigned int BlackboardConstCompareFormatter_TypeDefinitionIndex = 36759;

	class BlackboardConstCompareFormatter : public ::System::Globalization::CompareOptions
	{
	public:
		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MXBehaviorTree::BlackboardConstCompare&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MXBehaviorTree::BlackboardConstCompare&*, ::PVOID))((::PBYTE)hIl2Cpp + BLACKBOARDCONSTCOMPAREFORMATTER_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MXBehaviorTree::BlackboardConstCompare&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MXBehaviorTree::BlackboardConstCompare&*, ::PVOID))((::PBYTE)hIl2Cpp + BLACKBOARDCONSTCOMPAREFORMATTER_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLACKBOARDCONSTCOMPAREFORMATTER_.CTOR_OFFSET))(nullptr);
		}

	};

