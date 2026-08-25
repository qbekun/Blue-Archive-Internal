#pragma once
#include "unitysdk.h"

namespace MemoryPack { class MemoryPackReader&; }
namespace MXBehaviorTree { class ConstantPropertyInt&; }
namespace MemoryPack { class MemoryPackWriter&; }

#define CONSTANTPROPERTYINTFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x9432650)
#define CONSTANTPROPERTYINTFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9432230)
#define CONSTANTPROPERTYINTFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x94326A0)

	inline static constexpr unsigned int ConstantPropertyIntFormatter_TypeDefinitionIndex = 36824;

	class ConstantPropertyIntFormatter : public ::System::Globalization::GregorianCalendar
	{
	public:
		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MXBehaviorTree::ConstantPropertyInt&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MXBehaviorTree::ConstantPropertyInt&*, ::PVOID))((::PBYTE)hIl2Cpp + CONSTANTPROPERTYINTFORMATTER_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONSTANTPROPERTYINTFORMATTER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MXBehaviorTree::ConstantPropertyInt&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MXBehaviorTree::ConstantPropertyInt&*, ::PVOID))((::PBYTE)hIl2Cpp + CONSTANTPROPERTYINTFORMATTER_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

	};

