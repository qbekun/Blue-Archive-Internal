#pragma once
#include "../../unitysdk.h"

namespace MemoryPack { class MemoryPackWriter&; }
namespace MemoryPack { class MemoryPackReader&; }

#define MEMORYPACK_FORMATTERS_CULTUREINFOFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x9072850)
#define MEMORYPACK_FORMATTERS_CULTUREINFOFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x905D2A0)
#define MEMORYPACK_FORMATTERS_CULTUREINFOFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x9072FA0)

namespace MemoryPack::Formatters
{
	inline static constexpr unsigned int CultureInfoFormatter_TypeDefinitionIndex = 35492;

	class CultureInfoFormatter : public ::System::Globalization::Punycode
	{
	public:
		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::System::Globalization::CultureInfo&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::System::Globalization::CultureInfo&*, ::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_FORMATTERS_CULTUREINFOFORMATTER_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_FORMATTERS_CULTUREINFOFORMATTER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::System::Globalization::CultureInfo&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::System::Globalization::CultureInfo&*, ::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_FORMATTERS_CULTUREINFOFORMATTER_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

	};
}

