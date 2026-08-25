#pragma once
#include "../../unitysdk.h"

namespace MemoryPack { class MemoryPackWriter&; }
namespace MemoryPack { class MemoryPackReader&; }

#define MEMORYPACK_FORMATTERS_STRINGBUILDERFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x9073370)
#define MEMORYPACK_FORMATTERS_STRINGBUILDERFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x905D220)
#define MEMORYPACK_FORMATTERS_STRINGBUILDERFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x9073860)

namespace MemoryPack::Formatters
{
	inline static constexpr unsigned int StringBuilderFormatter_TypeDefinitionIndex = 35520;

	class StringBuilderFormatter : public __StaticArrayInitTypeSize=12
	{
	public:
		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::System::Text::StringBuilder&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::System::Text::StringBuilder&*, ::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_FORMATTERS_STRINGBUILDERFORMATTER_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_FORMATTERS_STRINGBUILDERFORMATTER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::System::Text::StringBuilder&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::System::Text::StringBuilder&*, ::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_FORMATTERS_STRINGBUILDERFORMATTER_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

	};
}

