#pragma once
#include "../../unitysdk.h"

#define MEMORYPACK_COMPRESSION_BROTLIUTILS_BROTLIENCODERMAXCOMPRESSEDSIZE_OFFSET UNITYSDK_OFFSET(0x9076BB0)
#define MEMORYPACK_COMPRESSION_BROTLIUTILS_GETQUALITYFROMCOMPRESSIONLEVEL_OFFSET UNITYSDK_OFFSET(0x9076B50)

namespace MemoryPack::Compression
{
	inline static constexpr unsigned int BrotliUtils_TypeDefinitionIndex = 35553;

	class BrotliUtils : public Il2CppObject
	{
	public:
		::System::Int32 WindowBits_Min; // 0x0
		::System::Int32 WindowBits_Default; // 0x0
		::System::Int32 WindowBits_Max; // 0x0
		::System::Int32 Quality_Min; // 0x0
		::System::Int32 Quality_Default; // 0x0
		::System::Int32 Quality_Max; // 0x0
		::System::Int32 MaxInputSize; // 0x0

		::System::Int32 BrotliEncoderMaxCompressedSize(::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_COMPRESSION_BROTLIUTILS_BROTLIENCODERMAXCOMPRESSEDSIZE_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetQualityFromCompressionLevel(::System::IO::Compression::CompressionLevel* arg)
		{
			return (return (::System::Int32(*)(::System::IO::Compression::CompressionLevel*, ::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_COMPRESSION_BROTLIUTILS_GETQUALITYFROMCOMPRESSIONLEVEL_OFFSET))(arg, nullptr);
		}

	};
}

