#pragma once
#include "../../unitysdk.h"

namespace BestHTTP::Extensions { class BufferPoolMemoryStream; }
namespace BestHTTP::Decompression::Zlib { class GZipStream; }
namespace BestHTTP::Decompression { class DecompressedData; }

#define BESTHTTP_DECOMPRESSION_GZIPDECOMPRESSOR_DECOMPRESS_OFFSET UNITYSDK_OFFSET(0x8D84C0)
#define BESTHTTP_DECOMPRESSION_GZIPDECOMPRESSOR_FINALIZE_OFFSET UNITYSDK_OFFSET(0x8D8900)
#define BESTHTTP_DECOMPRESSION_GZIPDECOMPRESSOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x8D8A50)
#define BESTHTTP_DECOMPRESSION_GZIPDECOMPRESSOR_DISPOSE_OFFSET UNITYSDK_OFFSET(0x8D8A00)
#define BESTHTTP_DECOMPRESSION_GZIPDECOMPRESSOR_CLOSEDECOMPRESSORS_OFFSET UNITYSDK_OFFSET(0x8D8A80)

namespace BestHTTP::Decompression
{
	inline static constexpr unsigned int GZipDecompressor_TypeDefinitionIndex = 23361;

	class GZipDecompressor : public Il2CppObject
	{
	public:
		::BestHTTP::Extensions::BufferPoolMemoryStream* decompressorInputStream; // 0x10
		::BestHTTP::Extensions::BufferPoolMemoryStream* decompressorOutputStream; // 0x18
		::BestHTTP::Decompression::Zlib::GZipStream* decompressorGZipStream; // 0x20
		::System::Int32 MinLengthToDecompress; // 0x28

		::BestHTTP::Decompression::DecompressedData* Decompress(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Boolean arg, ::System::Boolean arg)
		{
			return (return (::BestHTTP::Decompression::DecompressedData*(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_DECOMPRESSION_GZIPDECOMPRESSOR_DECOMPRESS_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void Finalize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_DECOMPRESSION_GZIPDECOMPRESSOR_FINALIZE_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_DECOMPRESSION_GZIPDECOMPRESSOR_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_DECOMPRESSION_GZIPDECOMPRESSOR_DISPOSE_OFFSET))(nullptr);
		}

		::System::Void CloseDecompressors()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_DECOMPRESSION_GZIPDECOMPRESSOR_CLOSEDECOMPRESSORS_OFFSET))(nullptr);
		}

	};
}

