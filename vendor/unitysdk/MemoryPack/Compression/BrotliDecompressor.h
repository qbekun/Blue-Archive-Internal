#pragma once
#include "../../unitysdk.h"

namespace MemoryPack::Internal { class ReusableReadOnlySequenceBuilder; }

#define MEMORYPACK_COMPRESSION_BROTLIDECOMPRESSOR_DECOMPRESS_OFFSET UNITYSDK_OFFSET(0x907E6D0)
#define MEMORYPACK_COMPRESSION_BROTLIDECOMPRESSOR_DECOMPRESS_OFFSET UNITYSDK_OFFSET(0x907E710)
#define MEMORYPACK_COMPRESSION_BROTLIDECOMPRESSOR_DECOMPRESS_OFFSET UNITYSDK_OFFSET(0x907EEF0)
#define MEMORYPACK_COMPRESSION_BROTLIDECOMPRESSOR_DECOMPRESS_OFFSET UNITYSDK_OFFSET(0x907EF30)
#define MEMORYPACK_COMPRESSION_BROTLIDECOMPRESSOR_DECOMPRESSCORE_OFFSET UNITYSDK_OFFSET(0x907E980)
#define MEMORYPACK_COMPRESSION_BROTLIDECOMPRESSOR_DISPOSE_OFFSET UNITYSDK_OFFSET(0x907F370)
#define MEMORYPACK_COMPRESSION_BROTLIDECOMPRESSOR_GETDOUBLECAPACITY_OFFSET UNITYSDK_OFFSET(0x907F310)

namespace MemoryPack::Compression
{
	inline static constexpr unsigned int BrotliDecompressor_TypeDefinitionIndex = 35554;

	class BrotliDecompressor : public Il2CppObject
	{
	public:
		::MemoryPack::Internal::ReusableReadOnlySequenceBuilder* sequenceBuilder; // 0x10

		Il2CppObject* Decompress(Il2CppObject* arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_COMPRESSION_BROTLIDECOMPRESSOR_DECOMPRESS_OFFSET))(arg, nullptr);
		}

		Il2CppObject* Decompress(Il2CppObject* arg, int32_t&* arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, int32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_COMPRESSION_BROTLIDECOMPRESSOR_DECOMPRESS_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Decompress(Il2CppObject* arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_COMPRESSION_BROTLIDECOMPRESSOR_DECOMPRESS_OFFSET))(arg, nullptr);
		}

		Il2CppObject* Decompress(Il2CppObject* arg, int32_t&* arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, int32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_COMPRESSION_BROTLIDECOMPRESSOR_DECOMPRESS_OFFSET))(arg, arg, nullptr);
		}

		::System::Void DecompressCore(::System::Buffers::OperationStatus&* arg, ::System::IO::Compression::BrotliDecoder&* arg, Il2CppObject* arg, int32_t&* arg)
		{
			((::System::Void(*)(::System::Buffers::OperationStatus&*, ::System::IO::Compression::BrotliDecoder&*, Il2CppObject*, int32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_COMPRESSION_BROTLIDECOMPRESSOR_DECOMPRESSCORE_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_COMPRESSION_BROTLIDECOMPRESSOR_DISPOSE_OFFSET))(nullptr);
		}

		::System::Int32 GetDoubleCapacity(::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_COMPRESSION_BROTLIDECOMPRESSOR_GETDOUBLECAPACITY_OFFSET))(arg, nullptr);
		}

	};
}

