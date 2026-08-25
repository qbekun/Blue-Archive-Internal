#pragma once
#include "unitysdk.h"

namespace MemoryPack { class MemoryPackWriter&; }
namespace MXBehaviorTree { class ConstantPropertyVector3&; }
namespace MemoryPack { class MemoryPackReader&; }

#define CONSTANTPROPERTYVECTOR3FORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x9435050)
#define CONSTANTPROPERTYVECTOR3FORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x94350A0)
#define CONSTANTPROPERTYVECTOR3FORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9434BD0)

	inline static constexpr unsigned int ConstantPropertyVector3Formatter_TypeDefinitionIndex = 36832;

	class ConstantPropertyVector3Formatter : public ::System::Globalization::HijriCalendar
	{
	public:
		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MXBehaviorTree::ConstantPropertyVector3&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MXBehaviorTree::ConstantPropertyVector3&*, ::PVOID))((::PBYTE)hIl2Cpp + CONSTANTPROPERTYVECTOR3FORMATTER_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MXBehaviorTree::ConstantPropertyVector3&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MXBehaviorTree::ConstantPropertyVector3&*, ::PVOID))((::PBYTE)hIl2Cpp + CONSTANTPROPERTYVECTOR3FORMATTER_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONSTANTPROPERTYVECTOR3FORMATTER_.CTOR_OFFSET))(nullptr);
		}

	};

