#pragma once
#include "unitysdk.h"

namespace MemoryPack { class MemoryPackWriter&; }
namespace MXBehaviorTree { class BlackboardPropertyVector3&; }
namespace MemoryPack { class MemoryPackReader&; }

#define BLACKBOARDPROPERTYVECTOR3FORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x942F700)
#define BLACKBOARDPROPERTYVECTOR3FORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x942F750)
#define BLACKBOARDPROPERTYVECTOR3FORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x942F6C0)

	inline static constexpr unsigned int BlackboardPropertyVector3Formatter_TypeDefinitionIndex = 36815;

	class BlackboardPropertyVector3Formatter : public ::System::Globalization::DateTimeFormatInfoScanner
	{
	public:
		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MXBehaviorTree::BlackboardPropertyVector3&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MXBehaviorTree::BlackboardPropertyVector3&*, ::PVOID))((::PBYTE)hIl2Cpp + BLACKBOARDPROPERTYVECTOR3FORMATTER_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MXBehaviorTree::BlackboardPropertyVector3&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MXBehaviorTree::BlackboardPropertyVector3&*, ::PVOID))((::PBYTE)hIl2Cpp + BLACKBOARDPROPERTYVECTOR3FORMATTER_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLACKBOARDPROPERTYVECTOR3FORMATTER_.CTOR_OFFSET))(nullptr);
		}

	};

