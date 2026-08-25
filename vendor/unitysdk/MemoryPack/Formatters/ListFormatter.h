#pragma once
#include "../../unitysdk.h"

namespace MemoryPack { class MemoryPackWriter&; }
namespace MemoryPack { class MemoryPackReader&; }

#define MEMORYPACK_FORMATTERS_LISTFORMATTER_SERIALIZEPACKABLE_OFFSET UNITYSDK_OFFSET(0x000000)
#define MEMORYPACK_FORMATTERS_LISTFORMATTER_DESERIALIZEPACKABLE_OFFSET UNITYSDK_OFFSET(0x000000)
#define MEMORYPACK_FORMATTERS_LISTFORMATTER_DESERIALIZEPACKABLE_OFFSET UNITYSDK_OFFSET(0x000000)

namespace MemoryPack::Formatters
{
	inline static constexpr unsigned int ListFormatter_TypeDefinitionIndex = 35473;

	class ListFormatter : public Il2CppObject
	{
	public:
		::System::Void SerializePackable(::MemoryPack::MemoryPackWriter&* arg, Il2CppObject&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_FORMATTERS_LISTFORMATTER_SERIALIZEPACKABLE_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* DeserializePackable(::MemoryPack::MemoryPackReader&* arg)
		{
			return (return (Il2CppObject*(*)(::MemoryPack::MemoryPackReader&*, ::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_FORMATTERS_LISTFORMATTER_DESERIALIZEPACKABLE_OFFSET))(arg, nullptr);
		}

		::System::Void DeserializePackable(::MemoryPack::MemoryPackReader&* arg, Il2CppObject&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_FORMATTERS_LISTFORMATTER_DESERIALIZEPACKABLE_OFFSET))(arg, arg, nullptr);
		}

	};
}

