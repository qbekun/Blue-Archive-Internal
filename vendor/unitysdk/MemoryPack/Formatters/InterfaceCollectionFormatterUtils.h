#pragma once
#include "../../unitysdk.h"

namespace MemoryPack { class MemoryPackReader&; }
namespace MemoryPack { class MemoryPackWriter&; }

#define MEMORYPACK_FORMATTERS_INTERFACECOLLECTIONFORMATTERUTILS_READLIST_OFFSET UNITYSDK_OFFSET(0x000000)
#define MEMORYPACK_FORMATTERS_INTERFACECOLLECTIONFORMATTERUTILS_SERIALIZEREADONLYCOLLECTION_OFFSET UNITYSDK_OFFSET(0x000000)
#define MEMORYPACK_FORMATTERS_INTERFACECOLLECTIONFORMATTERUTILS_SERIALIZECOLLECTION_OFFSET UNITYSDK_OFFSET(0x000000)
#define MEMORYPACK_FORMATTERS_INTERFACECOLLECTIONFORMATTERUTILS_TRYSERIALIZEOPTIMIZED_OFFSET UNITYSDK_OFFSET(0x000000)

namespace MemoryPack::Formatters
{
	inline static constexpr unsigned int InterfaceCollectionFormatterUtils_TypeDefinitionIndex = 35500;

	class InterfaceCollectionFormatterUtils : public Il2CppObject
	{
	public:
		Il2CppObject* ReadList(::MemoryPack::MemoryPackReader&* arg)
		{
			return (return (Il2CppObject*(*)(::MemoryPack::MemoryPackReader&*, ::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_FORMATTERS_INTERFACECOLLECTIONFORMATTERUTILS_READLIST_OFFSET))(arg, nullptr);
		}

		::System::Void SerializeReadOnlyCollection(::MemoryPack::MemoryPackWriter&* arg, Il2CppObject&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_FORMATTERS_INTERFACECOLLECTIONFORMATTERUTILS_SERIALIZEREADONLYCOLLECTION_OFFSET))(arg, arg, nullptr);
		}

		::System::Void SerializeCollection(::MemoryPack::MemoryPackWriter&* arg, Il2CppObject&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_FORMATTERS_INTERFACECOLLECTIONFORMATTERUTILS_SERIALIZECOLLECTION_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean TrySerializeOptimized(::MemoryPack::MemoryPackWriter&* arg, Il2CppObject&* arg)
		{
			return (return (::System::Boolean(*)(::MemoryPack::MemoryPackWriter&*, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_FORMATTERS_INTERFACECOLLECTIONFORMATTERUTILS_TRYSERIALIZEOPTIMIZED_OFFSET))(arg, arg, nullptr);
		}

	};
}

