#pragma once
#include "../../unitysdk.h"

namespace MemoryPack { class MemoryPackWriter&; }
namespace MemoryPack { class MemoryPackReader&; }

#define MEMORYPACK_FORMATTERS_BIGINTEGERFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x905D1A0)
#define MEMORYPACK_FORMATTERS_BIGINTEGERFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x9072110)
#define MEMORYPACK_FORMATTERS_BIGINTEGERFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x9072190)

namespace MemoryPack::Formatters
{
	inline static constexpr unsigned int BigIntegerFormatter_TypeDefinitionIndex = 35470;

	class BigIntegerFormatter : public ::System::Numerics::Register
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_FORMATTERS_BIGINTEGERFORMATTER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::System::Numerics::BigInteger&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::System::Numerics::BigInteger&*, ::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_FORMATTERS_BIGINTEGERFORMATTER_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::System::Numerics::BigInteger&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::System::Numerics::BigInteger&*, ::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_FORMATTERS_BIGINTEGERFORMATTER_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

	};
}

