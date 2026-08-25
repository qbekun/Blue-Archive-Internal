#pragma once
#include "unitysdk.h"

namespace MemoryPack { class MemoryPackReader&; }
namespace MXBehaviorTree { class BlackboardPropertyFloat&; }
namespace MemoryPack { class MemoryPackWriter&; }

#define BLACKBOARDPROPERTYFLOATFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x942D3C0)
#define BLACKBOARDPROPERTYFLOATFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x942CDA0)
#define BLACKBOARDPROPERTYFLOATFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x942D410)

	inline static constexpr unsigned int BlackboardPropertyFloatFormatter_TypeDefinitionIndex = 36811;

	class BlackboardPropertyFloatFormatter : public ::System::Globalization::DateTimeFormatFlags
	{
	public:
		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MXBehaviorTree::BlackboardPropertyFloat&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MXBehaviorTree::BlackboardPropertyFloat&*, ::PVOID))((::PBYTE)hIl2Cpp + BLACKBOARDPROPERTYFLOATFORMATTER_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLACKBOARDPROPERTYFLOATFORMATTER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MXBehaviorTree::BlackboardPropertyFloat&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MXBehaviorTree::BlackboardPropertyFloat&*, ::PVOID))((::PBYTE)hIl2Cpp + BLACKBOARDPROPERTYFLOATFORMATTER_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

	};

