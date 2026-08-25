#pragma once
#include "../../../unitysdk.h"

namespace Microsoft::Win32::SafeHandles { class SafeBrotliDecoderHandle; }

#define SYSTEM_IO_COMPRESSION_BROTLIDECODER_INITIALIZEDECODER_OFFSET UNITYSDK_OFFSET(0x980C260)
#define SYSTEM_IO_COMPRESSION_BROTLIDECODER_ENSUREINITIALIZED_OFFSET UNITYSDK_OFFSET(0x980C3A0)
#define SYSTEM_IO_COMPRESSION_BROTLIDECODER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x980C450)
#define SYSTEM_IO_COMPRESSION_BROTLIDECODER_ENSURENOTDISPOSED_OFFSET UNITYSDK_OFFSET(0x980C3D0)
#define SYSTEM_IO_COMPRESSION_BROTLIDECODER_DECOMPRESS_OFFSET UNITYSDK_OFFSET(0x980C470)

namespace System::IO::Compression
{
	inline static constexpr unsigned int BrotliDecoder_TypeDefinitionIndex = 38051;

	class BrotliDecoder : public Il2CppObject
	{
	public:
		::Microsoft::Win32::SafeHandles::SafeBrotliDecoderHandle* _state; // 0x10
		::System::Boolean _disposed; // 0x18

		::System::Void InitializeDecoder()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_COMPRESSION_BROTLIDECODER_INITIALIZEDECODER_OFFSET))(nullptr);
		}

		::System::Void EnsureInitialized()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_COMPRESSION_BROTLIDECODER_ENSUREINITIALIZED_OFFSET))(nullptr);
		}

		::System::Void Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_COMPRESSION_BROTLIDECODER_DISPOSE_OFFSET))(nullptr);
		}

		::System::Void EnsureNotDisposed()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_COMPRESSION_BROTLIDECODER_ENSURENOTDISPOSED_OFFSET))(nullptr);
		}

		::System::Buffers::OperationStatus* Decompress(Il2CppObject* arg, Il2CppObject* arg, int32_t&* arg, int32_t&* arg)
		{
			return (return (::System::Buffers::OperationStatus*(*)(Il2CppObject*, Il2CppObject*, int32_t&*, int32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_COMPRESSION_BROTLIDECODER_DECOMPRESS_OFFSET))(arg, arg, arg, arg, nullptr);
		}

	};
}

