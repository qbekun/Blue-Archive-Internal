#pragma once
#include "../../unitysdk.h"

namespace MemoryPack::Formatters { class StringFormatter; }
namespace MemoryPack { class MemoryPackWriter&; }
namespace MemoryPack { class MemoryPackReader&; }

#define MEMORYPACK_FORMATTERS_STRINGFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x905D0A0)
#define MEMORYPACK_FORMATTERS_STRINGFORMATTER_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9073C50)
#define MEMORYPACK_FORMATTERS_STRINGFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x9073CF0)
#define MEMORYPACK_FORMATTERS_STRINGFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x9074410)

namespace MemoryPack::Formatters
{
	inline static constexpr unsigned int StringFormatter_TypeDefinitionIndex = 35521;

	class StringFormatter : public __StaticArrayInitTypeSize=10
	{
	public:
		::MemoryPack::Formatters::StringFormatter* Default; // 0x0

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_FORMATTERS_STRINGFORMATTER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_FORMATTERS_STRINGFORMATTER_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::System::String&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::System::String&*, ::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_FORMATTERS_STRINGFORMATTER_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::System::String&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::System::String&*, ::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_FORMATTERS_STRINGFORMATTER_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

	};
}

