#pragma once
#include "unitysdk.h"

namespace MemoryPack { class MemoryPackReader&; }
namespace MXBehaviorTree { class BlackboardPropertyObject&; }
namespace MemoryPack { class MemoryPackWriter&; }

#define BLACKBOARDPROPERTYOBJECTFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x94308A0)
#define BLACKBOARDPROPERTYOBJECTFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9430860)
#define BLACKBOARDPROPERTYOBJECTFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x94308F0)

	inline static constexpr unsigned int BlackboardPropertyObjectFormatter_TypeDefinitionIndex = 36817;

	class BlackboardPropertyObjectFormatter : public ::System::Globalization::CalendarId
	{
	public:
		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MXBehaviorTree::BlackboardPropertyObject&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MXBehaviorTree::BlackboardPropertyObject&*, ::PVOID))((::PBYTE)hIl2Cpp + BLACKBOARDPROPERTYOBJECTFORMATTER_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLACKBOARDPROPERTYOBJECTFORMATTER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MXBehaviorTree::BlackboardPropertyObject&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MXBehaviorTree::BlackboardPropertyObject&*, ::PVOID))((::PBYTE)hIl2Cpp + BLACKBOARDPROPERTYOBJECTFORMATTER_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

	};

