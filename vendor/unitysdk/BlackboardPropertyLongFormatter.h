#pragma once
#include "unitysdk.h"

namespace MemoryPack { class MemoryPackWriter&; }
namespace MXBehaviorTree { class BlackboardPropertyLong&; }
namespace MemoryPack { class MemoryPackReader&; }

#define BLACKBOARDPROPERTYLONGFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x942C220)
#define BLACKBOARDPROPERTYLONGFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x942C270)
#define BLACKBOARDPROPERTYLONGFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x942C1E0)

	inline static constexpr unsigned int BlackboardPropertyLongFormatter_TypeDefinitionIndex = 36809;

	class BlackboardPropertyLongFormatter : public ::System::Globalization::DateTimeFormatInfo
	{
	public:
		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MXBehaviorTree::BlackboardPropertyLong&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MXBehaviorTree::BlackboardPropertyLong&*, ::PVOID))((::PBYTE)hIl2Cpp + BLACKBOARDPROPERTYLONGFORMATTER_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MXBehaviorTree::BlackboardPropertyLong&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MXBehaviorTree::BlackboardPropertyLong&*, ::PVOID))((::PBYTE)hIl2Cpp + BLACKBOARDPROPERTYLONGFORMATTER_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLACKBOARDPROPERTYLONGFORMATTER_.CTOR_OFFSET))(nullptr);
		}

	};

