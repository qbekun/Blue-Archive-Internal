#pragma once
#include "../../unitysdk.h"

namespace MemoryPack::Formatters { class Utf8StringFormatter; }
namespace MemoryPack { class MemoryPackReader&; }
namespace MemoryPack { class MemoryPackWriter&; }

#define MEMORYPACK_FORMATTERS_UTF8STRINGFORMATTER_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9074780)
#define MEMORYPACK_FORMATTERS_UTF8STRINGFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9074820)
#define MEMORYPACK_FORMATTERS_UTF8STRINGFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x9074860)
#define MEMORYPACK_FORMATTERS_UTF8STRINGFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x9074BD0)

namespace MemoryPack::Formatters
{
	inline static constexpr unsigned int Utf8StringFormatter_TypeDefinitionIndex = 35522;

	class Utf8StringFormatter : public __StaticArrayInitTypeSize=10
	{
	public:
		::MemoryPack::Formatters::Utf8StringFormatter* Default; // 0x0

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_FORMATTERS_UTF8STRINGFORMATTER_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_FORMATTERS_UTF8STRINGFORMATTER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::System::String&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::System::String&*, ::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_FORMATTERS_UTF8STRINGFORMATTER_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::System::String&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::System::String&*, ::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_FORMATTERS_UTF8STRINGFORMATTER_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

	};
}

