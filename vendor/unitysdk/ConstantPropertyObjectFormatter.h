#pragma once
#include "unitysdk.h"

namespace MemoryPack { class MemoryPackReader&; }
namespace MXBehaviorTree { class ConstantPropertyObject&; }
namespace MemoryPack { class MemoryPackWriter&; }

#define CONSTANTPROPERTYOBJECTFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9435400)
#define CONSTANTPROPERTYOBJECTFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x9435730)
#define CONSTANTPROPERTYOBJECTFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x9435780)

	inline static constexpr unsigned int ConstantPropertyObjectFormatter_TypeDefinitionIndex = 36834;

	class ConstantPropertyObjectFormatter : public ::System::Globalization::GregorianCalendarHelper
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONSTANTPROPERTYOBJECTFORMATTER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MXBehaviorTree::ConstantPropertyObject&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MXBehaviorTree::ConstantPropertyObject&*, ::PVOID))((::PBYTE)hIl2Cpp + CONSTANTPROPERTYOBJECTFORMATTER_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MXBehaviorTree::ConstantPropertyObject&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MXBehaviorTree::ConstantPropertyObject&*, ::PVOID))((::PBYTE)hIl2Cpp + CONSTANTPROPERTYOBJECTFORMATTER_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

	};

