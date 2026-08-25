#pragma once
#include "../../unitysdk.h"

namespace MemoryPack::Compression { class BrotliFormatter; }
namespace MemoryPack { class MemoryPackWriter&; }
namespace MemoryPack { class MemoryPackReader&; }

#define MEMORYPACK_COMPRESSION_BROTLIFORMATTER`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define MEMORYPACK_COMPRESSION_BROTLIFORMATTER`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define MEMORYPACK_COMPRESSION_BROTLIFORMATTER`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define MEMORYPACK_COMPRESSION_BROTLIFORMATTER`1_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x000000)
#define MEMORYPACK_COMPRESSION_BROTLIFORMATTER`1_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x000000)
#define MEMORYPACK_COMPRESSION_BROTLIFORMATTER`1_.CCTOR_OFFSET UNITYSDK_OFFSET(0x000000)

namespace MemoryPack::Compression
{
	inline static constexpr unsigned int BrotliFormatter`1_TypeDefinitionIndex = 35556;

	class BrotliFormatter`1 : public ::System::Reflection::AssemblyDefaultAliasAttribute
	{
	public:
		::System::Int32 DefaultDecompssionSizeLimit; // 0x0
		::MemoryPack::Compression::BrotliFormatter* Default; // 0x0
		::System::IO::Compression::CompressionLevel* compressionLevel; // 0x0
		::System::Int32 window; // 0x0

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_COMPRESSION_BROTLIFORMATTER`1_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::IO::Compression::CompressionLevel* arg)
		{
			((::System::Void(*)(::System::IO::Compression::CompressionLevel*, ::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_COMPRESSION_BROTLIFORMATTER`1_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::IO::Compression::CompressionLevel* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::IO::Compression::CompressionLevel*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_COMPRESSION_BROTLIFORMATTER`1_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, Il2CppObject&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_COMPRESSION_BROTLIFORMATTER`1_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, Il2CppObject&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_COMPRESSION_BROTLIFORMATTER`1_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_COMPRESSION_BROTLIFORMATTER`1_.CCTOR_OFFSET))(nullptr);
		}

	};
}

