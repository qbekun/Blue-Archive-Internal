#pragma once
#include "../../unitysdk.h"

namespace MemoryPack { class MemoryPackReader&; }
namespace MemoryPack { class MemoryPackWriter&; }

#define MEMORYPACK_FORMATTERS_TYPEFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x9078DC0)
#define MEMORYPACK_FORMATTERS_TYPEFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x90791C0)
#define MEMORYPACK_FORMATTERS_TYPEFORMATTER_.CCTOR_OFFSET UNITYSDK_OFFSET(0x90799D0)
#define MEMORYPACK_FORMATTERS_TYPEFORMATTER_SHORTTYPENAMEREGEX_OFFSET UNITYSDK_OFFSET(0x9079A70)
#define MEMORYPACK_FORMATTERS_TYPEFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x905D260)

namespace MemoryPack::Formatters
{
	inline static constexpr unsigned int TypeFormatter_TypeDefinitionIndex = 35545;

	class TypeFormatter : public __StaticArrayInitTypeSize=640
	{
	public:
		::System::Text::RegularExpressions::Regex* _shortTypeNameRegex; // 0x0

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::System::Type&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::System::Type&*, ::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_FORMATTERS_TYPEFORMATTER_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::System::Type&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::System::Type&*, ::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_FORMATTERS_TYPEFORMATTER_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_FORMATTERS_TYPEFORMATTER_.CCTOR_OFFSET))(nullptr);
		}

		::System::Text::RegularExpressions::Regex* ShortTypeNameRegex()
		{
			return (return (::System::Text::RegularExpressions::Regex*(*)(::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_FORMATTERS_TYPEFORMATTER_SHORTTYPENAMEREGEX_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_FORMATTERS_TYPEFORMATTER_.CTOR_OFFSET))(nullptr);
		}

	};
}

