#pragma once
#include "../../unitysdk.h"

namespace MemoryPack { class MemoryPackReader&; }
namespace MemoryPack { class MemoryPackWriter&; }

#define MEMORYPACK_FORMATTERS_INTERFACEREADONLYLISTFORMATTER`1_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x000000)
#define MEMORYPACK_FORMATTERS_INTERFACEREADONLYLISTFORMATTER`1_.CCTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define MEMORYPACK_FORMATTERS_INTERFACEREADONLYLISTFORMATTER`1_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x000000)
#define MEMORYPACK_FORMATTERS_INTERFACEREADONLYLISTFORMATTER`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)

namespace MemoryPack::Formatters
{
	inline static constexpr unsigned int InterfaceReadOnlyListFormatter`1_TypeDefinitionIndex = 35505;

	class InterfaceReadOnlyListFormatter`1 : public ::System::Reflection::IReflectableType
	{
	public:
		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, Il2CppObject&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_FORMATTERS_INTERFACEREADONLYLISTFORMATTER`1_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_FORMATTERS_INTERFACEREADONLYLISTFORMATTER`1_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, Il2CppObject&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_FORMATTERS_INTERFACEREADONLYLISTFORMATTER`1_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_FORMATTERS_INTERFACEREADONLYLISTFORMATTER`1_.CTOR_OFFSET))(nullptr);
		}

	};
}

