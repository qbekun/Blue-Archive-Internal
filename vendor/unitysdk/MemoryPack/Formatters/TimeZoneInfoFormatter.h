#pragma once
#include "../../unitysdk.h"

namespace MemoryPack { class MemoryPackReader&; }
namespace MemoryPack { class MemoryPackWriter&; }

#define MEMORYPACK_FORMATTERS_TIMEZONEINFOFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x9077D20)
#define MEMORYPACK_FORMATTERS_TIMEZONEINFOFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x90780F0)
#define MEMORYPACK_FORMATTERS_TIMEZONEINFOFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x905D160)

namespace MemoryPack::Formatters
{
	inline static constexpr unsigned int TimeZoneInfoFormatter_TypeDefinitionIndex = 35527;

	class TimeZoneInfoFormatter : public __StaticArrayInitTypeSize=288
	{
	public:
		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::System::TimeZoneInfo&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::System::TimeZoneInfo&*, ::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_FORMATTERS_TIMEZONEINFOFORMATTER_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::System::TimeZoneInfo&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::System::TimeZoneInfo&*, ::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_FORMATTERS_TIMEZONEINFOFORMATTER_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_FORMATTERS_TIMEZONEINFOFORMATTER_.CTOR_OFFSET))(nullptr);
		}

	};
}

