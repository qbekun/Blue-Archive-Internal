#pragma once
#include "../../../unitysdk.h"

#define MX_CORE_IO_GZIPCOMPRESSSERVICE_DECOMPRESS_OFFSET UNITYSDK_OFFSET(0x1031840)
#define MX_CORE_IO_GZIPCOMPRESSSERVICE_DECOMPRESSSTRING_OFFSET UNITYSDK_OFFSET(0x1031CB0)
#define MX_CORE_IO_GZIPCOMPRESSSERVICE_COMPRESS_OFFSET UNITYSDK_OFFSET(0x1032130)
#define MX_CORE_IO_GZIPCOMPRESSSERVICE_COMPRESSSTRING_OFFSET UNITYSDK_OFFSET(0x10327D0)

namespace MX::Core::IO
{
	inline static constexpr unsigned int GzipCompressService_TypeDefinitionIndex = 12826;

	class GzipCompressService : public Il2CppObject
	{
	public:
		::System::String* Decompress(::System::String* str)
		{
			return ((::System::String*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_IO_GZIPCOMPRESSSERVICE_DECOMPRESS_OFFSET))(str, nullptr);
		}

		::System::String* DecompressString(::Il2CppArray<::System::Object*>* arg)
		{
			return ((::System::String*(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_IO_GZIPCOMPRESSSERVICE_DECOMPRESSSTRING_OFFSET))(arg, nullptr);
		}

		::System::String* Compress(::System::String* str)
		{
			return ((::System::String*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_IO_GZIPCOMPRESSSERVICE_COMPRESS_OFFSET))(str, nullptr);
		}

		::Il2CppArray<::System::Object*>* CompressString(::System::String* str)
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_IO_GZIPCOMPRESSSERVICE_COMPRESSSTRING_OFFSET))(str, nullptr);
		}

	};
}

