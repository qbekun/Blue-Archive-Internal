#pragma once
#include "../../unitysdk.h"

namespace MemoryPack { class MemoryPackReader&; }
namespace MemoryPack { class MemoryPackWriter&; }

#define MEMORYPACK_FORMATTERS_BITARRAYFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x905D1E0)
#define MEMORYPACK_FORMATTERS_BITARRAYFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x90724B0)
#define MEMORYPACK_FORMATTERS_BITARRAYFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x90726A0)

namespace MemoryPack::Formatters
{
	inline static constexpr unsigned int BitArrayFormatter_TypeDefinitionIndex = 35471;

	class BitArrayFormatter : public VectorSizeHelper
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_FORMATTERS_BITARRAYFORMATTER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::System::Collections::BitArray&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::System::Collections::BitArray&*, ::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_FORMATTERS_BITARRAYFORMATTER_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::System::Collections::BitArray&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::System::Collections::BitArray&*, ::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_FORMATTERS_BITARRAYFORMATTER_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

	};
}

