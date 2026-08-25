#pragma once
#include "../../unitysdk.h"

namespace MemoryPack::Formatters { class BrotliStringFormatter; }
namespace MemoryPack { class MemoryPackWriter&; }
namespace MemoryPack { class MemoryPackReader&; }

#define MEMORYPACK_FORMATTERS_BROTLISTRINGFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9076330)
#define MEMORYPACK_FORMATTERS_BROTLISTRINGFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9076380)
#define MEMORYPACK_FORMATTERS_BROTLISTRINGFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x90763D0)
#define MEMORYPACK_FORMATTERS_BROTLISTRINGFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9076420)
#define MEMORYPACK_FORMATTERS_BROTLISTRINGFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x9076470)
#define MEMORYPACK_FORMATTERS_BROTLISTRINGFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x9076BD0)
#define MEMORYPACK_FORMATTERS_BROTLISTRINGFORMATTER_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9077400)

namespace MemoryPack::Formatters
{
	inline static constexpr unsigned int BrotliStringFormatter_TypeDefinitionIndex = 35526;

	class BrotliStringFormatter : public __StaticArrayInitTypeSize=10
	{
	public:
		Il2CppObject* threadStaticConsumedBox;
		::System::Int32 DefaultDecompssionSizeLimit; // 0x0
		::MemoryPack::Formatters::BrotliStringFormatter* Default; // 0x0
		::System::IO::Compression::CompressionLevel* compressionLevel; // 0x10
		::System::Int32 window; // 0x14
		::System::Int32 decompressionSizeLimit; // 0x18

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_FORMATTERS_BROTLISTRINGFORMATTER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::IO::Compression::CompressionLevel* arg)
		{
			((::System::Void(*)(::System::IO::Compression::CompressionLevel*, ::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_FORMATTERS_BROTLISTRINGFORMATTER_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::IO::Compression::CompressionLevel* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::IO::Compression::CompressionLevel*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_FORMATTERS_BROTLISTRINGFORMATTER_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor(::System::IO::Compression::CompressionLevel* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::IO::Compression::CompressionLevel*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_FORMATTERS_BROTLISTRINGFORMATTER_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::System::String&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::System::String&*, ::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_FORMATTERS_BROTLISTRINGFORMATTER_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::System::String&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::System::String&*, ::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_FORMATTERS_BROTLISTRINGFORMATTER_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_FORMATTERS_BROTLISTRINGFORMATTER_.CCTOR_OFFSET))(nullptr);
		}

	};
}

