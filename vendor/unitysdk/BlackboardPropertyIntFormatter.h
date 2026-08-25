#pragma once
#include "unitysdk.h"

namespace MemoryPack { class MemoryPackWriter&; }
namespace MXBehaviorTree { class BlackboardPropertyInt&; }
namespace MemoryPack { class MemoryPackReader&; }

#define BLACKBOARDPROPERTYINTFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x942B080)
#define BLACKBOARDPROPERTYINTFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x942AA60)
#define BLACKBOARDPROPERTYINTFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x942B0D0)

	inline static constexpr unsigned int BlackboardPropertyIntFormatter_TypeDefinitionIndex = 36807;

	class BlackboardPropertyIntFormatter : public TokenHashValue
	{
	public:
		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MXBehaviorTree::BlackboardPropertyInt&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MXBehaviorTree::BlackboardPropertyInt&*, ::PVOID))((::PBYTE)hIl2Cpp + BLACKBOARDPROPERTYINTFORMATTER_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLACKBOARDPROPERTYINTFORMATTER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MXBehaviorTree::BlackboardPropertyInt&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MXBehaviorTree::BlackboardPropertyInt&*, ::PVOID))((::PBYTE)hIl2Cpp + BLACKBOARDPROPERTYINTFORMATTER_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

	};

