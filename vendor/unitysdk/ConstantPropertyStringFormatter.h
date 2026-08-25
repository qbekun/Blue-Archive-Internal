#pragma once
#include "unitysdk.h"

namespace MemoryPack { class MemoryPackReader&; }
namespace MXBehaviorTree { class ConstantPropertyString&; }
namespace MemoryPack { class MemoryPackWriter&; }

#define CONSTANTPROPERTYSTRINGFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x9434820)
#define CONSTANTPROPERTYSTRINGFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9433940)
#define CONSTANTPROPERTYSTRINGFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x9434870)

	inline static constexpr unsigned int ConstantPropertyStringFormatter_TypeDefinitionIndex = 36830;

	class ConstantPropertyStringFormatter : public ::System::Globalization::GregorianCalendarTypes
	{
	public:
		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MXBehaviorTree::ConstantPropertyString&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MXBehaviorTree::ConstantPropertyString&*, ::PVOID))((::PBYTE)hIl2Cpp + CONSTANTPROPERTYSTRINGFORMATTER_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONSTANTPROPERTYSTRINGFORMATTER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MXBehaviorTree::ConstantPropertyString&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MXBehaviorTree::ConstantPropertyString&*, ::PVOID))((::PBYTE)hIl2Cpp + CONSTANTPROPERTYSTRINGFORMATTER_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

	};

