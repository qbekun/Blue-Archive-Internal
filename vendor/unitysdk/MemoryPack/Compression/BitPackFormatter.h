#pragma once
#include "../../unitysdk.h"

namespace MemoryPack::Compression { class BitPackFormatter; }
namespace MemoryPack { class MemoryPackWriter&; }
namespace MemoryPack { class MemoryPackReader&; }

#define MEMORYPACK_COMPRESSION_BITPACKFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x907AA00)
#define MEMORYPACK_COMPRESSION_BITPACKFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x907ACF0)
#define MEMORYPACK_COMPRESSION_BITPACKFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x907AD30)
#define MEMORYPACK_COMPRESSION_BITPACKFORMATTER_SET_OFFSET UNITYSDK_OFFSET(0x907B0A0)
#define MEMORYPACK_COMPRESSION_BITPACKFORMATTER_.CCTOR_OFFSET UNITYSDK_OFFSET(0x907B0C0)
#define MEMORYPACK_COMPRESSION_BITPACKFORMATTER_GET_OFFSET UNITYSDK_OFFSET(0x907B160)

namespace MemoryPack::Compression
{
	inline static constexpr unsigned int BitPackFormatter_TypeDefinitionIndex = 35550;

	class BitPackFormatter : public ::System::Reflection::MissingMetadataException
	{
	public:
		::MemoryPack::Compression::BitPackFormatter* Default; // 0x0

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::System::Object[]&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::System::Object[]&*, ::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_COMPRESSION_BITPACKFORMATTER_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_COMPRESSION_BITPACKFORMATTER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::System::Object[]&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::System::Object[]&*, ::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_COMPRESSION_BITPACKFORMATTER_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Set(int32_t&* arg, ::System::Int32 arg, ::System::Boolean arg)
		{
			((::System::Void(*)(int32_t&*, ::System::Int32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_COMPRESSION_BITPACKFORMATTER_SET_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_COMPRESSION_BITPACKFORMATTER_.CCTOR_OFFSET))(nullptr);
		}

		::System::Boolean Get(::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_COMPRESSION_BITPACKFORMATTER_GET_OFFSET))(arg, arg, nullptr);
		}

	};
}

