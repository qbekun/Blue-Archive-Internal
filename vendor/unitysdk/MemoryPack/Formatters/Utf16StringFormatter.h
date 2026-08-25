#pragma once
#include "../../unitysdk.h"

namespace MemoryPack::Formatters { class Utf16StringFormatter; }
namespace MemoryPack { class MemoryPackReader&; }
namespace MemoryPack { class MemoryPackWriter&; }

#define MEMORYPACK_FORMATTERS_UTF16STRINGFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x9074F40)
#define MEMORYPACK_FORMATTERS_UTF16STRINGFORMATTER_.CCTOR_OFFSET UNITYSDK_OFFSET(0x90752B0)
#define MEMORYPACK_FORMATTERS_UTF16STRINGFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9075350)
#define MEMORYPACK_FORMATTERS_UTF16STRINGFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x9075390)

namespace MemoryPack::Formatters
{
	inline static constexpr unsigned int Utf16StringFormatter_TypeDefinitionIndex = 35523;

	class Utf16StringFormatter : public __StaticArrayInitTypeSize=10
	{
	public:
		::MemoryPack::Formatters::Utf16StringFormatter* Default; // 0x0

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::System::String&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::System::String&*, ::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_FORMATTERS_UTF16STRINGFORMATTER_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_FORMATTERS_UTF16STRINGFORMATTER_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_FORMATTERS_UTF16STRINGFORMATTER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::System::String&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::System::String&*, ::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_FORMATTERS_UTF16STRINGFORMATTER_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

	};
}

