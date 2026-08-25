#pragma once
#include "../../unitysdk.h"

namespace MemoryPack { class MemoryPackReader&; }
namespace MemoryPack { class MemoryPackWriter&; }

#define MEMORYPACK_FORMATTERS_ARRAYFORMATTER`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define MEMORYPACK_FORMATTERS_ARRAYFORMATTER`1_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x000000)
#define MEMORYPACK_FORMATTERS_ARRAYFORMATTER`1_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x000000)

namespace MemoryPack::Formatters
{
	inline static constexpr unsigned int ArrayFormatter`1_TypeDefinitionIndex = 35463;

	class ArrayFormatter`1 : public ::System::Reflection::RuntimeReflectionExtensions
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_FORMATTERS_ARRAYFORMATTER`1_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::System::Object[]&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::System::Object[]&*, ::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_FORMATTERS_ARRAYFORMATTER`1_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::System::Object[]&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::System::Object[]&*, ::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_FORMATTERS_ARRAYFORMATTER`1_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

	};
}

