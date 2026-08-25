#pragma once
#include "../../unitysdk.h"

namespace MemoryPack::Compression { class BrotliFormatter; }
namespace MemoryPack { class MemoryPackWriter&; }
namespace MemoryPack { class MemoryPackReader&; }

#define MEMORYPACK_COMPRESSION_BROTLIFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x907F3E0)
#define MEMORYPACK_COMPRESSION_BROTLIFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x907F430)
#define MEMORYPACK_COMPRESSION_BROTLIFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x907F480)
#define MEMORYPACK_COMPRESSION_BROTLIFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x907F4D0)
#define MEMORYPACK_COMPRESSION_BROTLIFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x907F520)
#define MEMORYPACK_COMPRESSION_BROTLIFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x907FB60)
#define MEMORYPACK_COMPRESSION_BROTLIFORMATTER_.CCTOR_OFFSET UNITYSDK_OFFSET(0x907FF10)

namespace MemoryPack::Compression
{
	inline static constexpr unsigned int BrotliFormatter_TypeDefinitionIndex = 35555;

	class BrotliFormatter : public ::System::Reflection::CustomAttributeExtensions
	{
	public:
		::System::Int32 DefaultDecompssionSizeLimit; // 0x0
		::MemoryPack::Compression::BrotliFormatter* Default; // 0x0
		::System::IO::Compression::CompressionLevel* compressionLevel; // 0x10
		::System::Int32 window; // 0x14
		::System::Int32 decompressionSizeLimit; // 0x18

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_COMPRESSION_BROTLIFORMATTER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::IO::Compression::CompressionLevel* arg)
		{
			((::System::Void(*)(::System::IO::Compression::CompressionLevel*, ::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_COMPRESSION_BROTLIFORMATTER_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::IO::Compression::CompressionLevel* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::IO::Compression::CompressionLevel*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_COMPRESSION_BROTLIFORMATTER_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor(::System::IO::Compression::CompressionLevel* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::IO::Compression::CompressionLevel*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_COMPRESSION_BROTLIFORMATTER_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::System::Object[]&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::System::Object[]&*, ::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_COMPRESSION_BROTLIFORMATTER_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::System::Object[]&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::System::Object[]&*, ::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_COMPRESSION_BROTLIFORMATTER_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_COMPRESSION_BROTLIFORMATTER_.CCTOR_OFFSET))(nullptr);
		}

	};
}

