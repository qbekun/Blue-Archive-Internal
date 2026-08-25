#pragma once
#include "../../unitysdk.h"

namespace MemoryPack { class MemoryPackWriter&; }
namespace MemoryPack { class MemoryPackReader&; }

#define MEMORYPACK_FORMATTERS_VERSIONFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x905D0E0)
#define MEMORYPACK_FORMATTERS_VERSIONFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x907A5E0)
#define MEMORYPACK_FORMATTERS_VERSIONFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x907A7A0)

namespace MemoryPack::Formatters
{
	inline static constexpr unsigned int VersionFormatter_TypeDefinitionIndex = 35549;

	class VersionFormatter : public __StaticArrayInitTypeSize=2176
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_FORMATTERS_VERSIONFORMATTER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::System::Version&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::System::Version&*, ::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_FORMATTERS_VERSIONFORMATTER_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::System::Version&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::System::Version&*, ::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_FORMATTERS_VERSIONFORMATTER_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

	};
}

