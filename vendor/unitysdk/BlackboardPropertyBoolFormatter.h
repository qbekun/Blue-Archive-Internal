#pragma once
#include "unitysdk.h"

namespace MemoryPack { class MemoryPackReader&; }
namespace MXBehaviorTree { class BlackboardPropertyBool&; }
namespace MemoryPack { class MemoryPackWriter&; }

#define BLACKBOARDPROPERTYBOOLFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x9429EE0)
#define BLACKBOARDPROPERTYBOOLFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9429EA0)
#define BLACKBOARDPROPERTYBOOLFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x9429F30)

	inline static constexpr unsigned int BlackboardPropertyBoolFormatter_TypeDefinitionIndex = 36805;

	class BlackboardPropertyBoolFormatter : public ::System::Globalization::MonthNameStyles
	{
	public:
		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MXBehaviorTree::BlackboardPropertyBool&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MXBehaviorTree::BlackboardPropertyBool&*, ::PVOID))((::PBYTE)hIl2Cpp + BLACKBOARDPROPERTYBOOLFORMATTER_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLACKBOARDPROPERTYBOOLFORMATTER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MXBehaviorTree::BlackboardPropertyBool&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MXBehaviorTree::BlackboardPropertyBool&*, ::PVOID))((::PBYTE)hIl2Cpp + BLACKBOARDPROPERTYBOOLFORMATTER_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

	};

