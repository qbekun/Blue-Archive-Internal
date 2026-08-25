#pragma once
#include "unitysdk.h"

namespace MemoryPack { class MemoryPackWriter&; }
namespace MXBehaviorTree { class ConstantPropertyLong&; }
namespace MemoryPack { class MemoryPackReader&; }

#define CONSTANTPROPERTYLONGFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x9432E00)
#define CONSTANTPROPERTYLONGFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x9432E50)
#define CONSTANTPROPERTYLONGFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x94329D0)

	inline static constexpr unsigned int ConstantPropertyLongFormatter_TypeDefinitionIndex = 36826;

	class ConstantPropertyLongFormatter : public ::System::Globalization::EraInfo
	{
	public:
		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MXBehaviorTree::ConstantPropertyLong&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MXBehaviorTree::ConstantPropertyLong&*, ::PVOID))((::PBYTE)hIl2Cpp + CONSTANTPROPERTYLONGFORMATTER_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MXBehaviorTree::ConstantPropertyLong&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MXBehaviorTree::ConstantPropertyLong&*, ::PVOID))((::PBYTE)hIl2Cpp + CONSTANTPROPERTYLONGFORMATTER_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONSTANTPROPERTYLONGFORMATTER_.CTOR_OFFSET))(nullptr);
		}

	};

