#pragma once
#include "../../unitysdk.h"

namespace MemoryPack { class MemoryPackReader&; }
namespace MemoryPack { class MemoryPackWriter&; }

#define MEMORYPACK_FORMATTERS_URIFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x9079AC0)
#define MEMORYPACK_FORMATTERS_URIFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x9079EA0)
#define MEMORYPACK_FORMATTERS_URIFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x905D120)

namespace MemoryPack::Formatters
{
	inline static constexpr unsigned int UriFormatter_TypeDefinitionIndex = 35548;

	class UriFormatter : public __StaticArrayInitTypeSize=2048
	{
	public:
		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::System::Uri&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::System::Uri&*, ::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_FORMATTERS_URIFORMATTER_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::System::Uri&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::System::Uri&*, ::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_FORMATTERS_URIFORMATTER_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_FORMATTERS_URIFORMATTER_.CTOR_OFFSET))(nullptr);
		}

	};
}

