#pragma once
#include "unitysdk.h"

namespace MemoryPack { class MemoryPackWriter&; }
namespace MXBehaviorTree { class BlackboardCompare&; }
namespace MemoryPack { class MemoryPackReader&; }

#define BLACKBOARDCOMPAREFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x9410220)
#define BLACKBOARDCOMPAREFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x940CA80)
#define BLACKBOARDCOMPAREFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x9410270)

	inline static constexpr unsigned int BlackboardCompareFormatter_TypeDefinitionIndex = 36757;

	class BlackboardCompareFormatter : public ::System::Globalization::CompareInfo
	{
	public:
		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MXBehaviorTree::BlackboardCompare&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MXBehaviorTree::BlackboardCompare&*, ::PVOID))((::PBYTE)hIl2Cpp + BLACKBOARDCOMPAREFORMATTER_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLACKBOARDCOMPAREFORMATTER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MXBehaviorTree::BlackboardCompare&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MXBehaviorTree::BlackboardCompare&*, ::PVOID))((::PBYTE)hIl2Cpp + BLACKBOARDCOMPAREFORMATTER_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

	};

