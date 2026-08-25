#pragma once
#include "unitysdk.h"

namespace MemoryPack { class MemoryPackWriter&; }
namespace MXBehaviorTree { class ConstantPropertyBool&; }
namespace MemoryPack { class MemoryPackReader&; }

#define CONSTANTPROPERTYBOOLFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x9431EB0)
#define CONSTANTPROPERTYBOOLFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9431A90)
#define CONSTANTPROPERTYBOOLFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x9431F00)

	inline static constexpr unsigned int ConstantPropertyBoolFormatter_TypeDefinitionIndex = 36822;

	class ConstantPropertyBoolFormatter : public ::System::Globalization::Calendar
	{
	public:
		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MXBehaviorTree::ConstantPropertyBool&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MXBehaviorTree::ConstantPropertyBool&*, ::PVOID))((::PBYTE)hIl2Cpp + CONSTANTPROPERTYBOOLFORMATTER_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONSTANTPROPERTYBOOLFORMATTER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MXBehaviorTree::ConstantPropertyBool&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MXBehaviorTree::ConstantPropertyBool&*, ::PVOID))((::PBYTE)hIl2Cpp + CONSTANTPROPERTYBOOLFORMATTER_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

	};

