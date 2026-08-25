#pragma once
#include "unitysdk.h"

namespace MemoryPack { class MemoryPackReader&; }
namespace MXBehaviorTree { class IConstantProperty&; }
namespace MemoryPack { class MemoryPackWriter&; }

#define ICONSTANTPROPERTYFORMATTER_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9430B50)
#define ICONSTANTPROPERTYFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x9430D80)
#define ICONSTANTPROPERTYFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9430B00)
#define ICONSTANTPROPERTYFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x9431340)

	inline static constexpr unsigned int IConstantPropertyFormatter_TypeDefinitionIndex = 36819;

	class IConstantPropertyFormatter : public ::System::Buffers::Utilities
	{
	public:
		Il2CppObject* __typeToTag; // 0x0

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICONSTANTPROPERTYFORMATTER_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MXBehaviorTree::IConstantProperty&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MXBehaviorTree::IConstantProperty&*, ::PVOID))((::PBYTE)hIl2Cpp + ICONSTANTPROPERTYFORMATTER_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICONSTANTPROPERTYFORMATTER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MXBehaviorTree::IConstantProperty&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MXBehaviorTree::IConstantProperty&*, ::PVOID))((::PBYTE)hIl2Cpp + ICONSTANTPROPERTYFORMATTER_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

	};

