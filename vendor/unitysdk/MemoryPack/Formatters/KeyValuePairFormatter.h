#pragma once
#include "../../unitysdk.h"

namespace MemoryPack { class MemoryPackReader&; }
namespace MemoryPack { class MemoryPackWriter&; }

#define MEMORYPACK_FORMATTERS_KEYVALUEPAIRFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x000000)
#define MEMORYPACK_FORMATTERS_KEYVALUEPAIRFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x000000)

namespace MemoryPack::Formatters
{
	inline static constexpr unsigned int KeyValuePairFormatter_TypeDefinitionIndex = 35513;

	class KeyValuePairFormatter : public Il2CppObject
	{
	public:
		::System::Void Deserialize(Il2CppObject* arg, Il2CppObject* arg, ::MemoryPack::MemoryPackReader&* arg, Il2CppObject&* arg, Il2CppObject&* arg)
		{
			((::System::Void(*)(Il2CppObject*, Il2CppObject*, ::MemoryPack::MemoryPackReader&*, Il2CppObject&*, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_FORMATTERS_KEYVALUEPAIRFORMATTER_DESERIALIZE_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void Serialize(Il2CppObject* arg, Il2CppObject* arg, ::MemoryPack::MemoryPackWriter&* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, Il2CppObject*, ::MemoryPack::MemoryPackWriter&*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_FORMATTERS_KEYVALUEPAIRFORMATTER_SERIALIZE_OFFSET))(arg, arg, arg, arg, nullptr);
		}

	};
}

