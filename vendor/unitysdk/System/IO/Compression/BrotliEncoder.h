#pragma once
#include "../../../unitysdk.h"

namespace Microsoft::Win32::SafeHandles { class SafeBrotliEncoderHandle; }

#define SYSTEM_IO_COMPRESSION_BROTLIENCODER_.CTOR_OFFSET UNITYSDK_OFFSET(0x980C800)
#define SYSTEM_IO_COMPRESSION_BROTLIENCODER_INITIALIZEENCODER_OFFSET UNITYSDK_OFFSET(0x980CD60)
#define SYSTEM_IO_COMPRESSION_BROTLIENCODER_ENSUREINITIALIZED_OFFSET UNITYSDK_OFFSET(0x980CF30)
#define SYSTEM_IO_COMPRESSION_BROTLIENCODER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x980CF60)
#define SYSTEM_IO_COMPRESSION_BROTLIENCODER_ENSURENOTDISPOSED_OFFSET UNITYSDK_OFFSET(0x980CEB0)
#define SYSTEM_IO_COMPRESSION_BROTLIENCODER_SETQUALITY_OFFSET UNITYSDK_OFFSET(0x980C960)
#define SYSTEM_IO_COMPRESSION_BROTLIENCODER_SETWINDOW_OFFSET UNITYSDK_OFFSET(0x980CB60)
#define SYSTEM_IO_COMPRESSION_BROTLIENCODER_COMPRESS_OFFSET UNITYSDK_OFFSET(0x980CF80)
#define SYSTEM_IO_COMPRESSION_BROTLIENCODER_COMPRESS_OFFSET UNITYSDK_OFFSET(0x980CFD0)

namespace System::IO::Compression
{
	inline static constexpr unsigned int BrotliEncoder_TypeDefinitionIndex = 38052;

	class BrotliEncoder : public Il2CppObject
	{
	public:
		::Microsoft::Win32::SafeHandles::SafeBrotliEncoderHandle* _state; // 0x10
		::System::Boolean _disposed; // 0x18

		::System::Void .ctor(::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_COMPRESSION_BROTLIENCODER_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void InitializeEncoder()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_COMPRESSION_BROTLIENCODER_INITIALIZEENCODER_OFFSET))(nullptr);
		}

		::System::Void EnsureInitialized()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_COMPRESSION_BROTLIENCODER_ENSUREINITIALIZED_OFFSET))(nullptr);
		}

		::System::Void Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_COMPRESSION_BROTLIENCODER_DISPOSE_OFFSET))(nullptr);
		}

		::System::Void EnsureNotDisposed()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_COMPRESSION_BROTLIENCODER_ENSURENOTDISPOSED_OFFSET))(nullptr);
		}

		::System::Void SetQuality(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_COMPRESSION_BROTLIENCODER_SETQUALITY_OFFSET))(arg, nullptr);
		}

		::System::Void SetWindow(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_COMPRESSION_BROTLIENCODER_SETWINDOW_OFFSET))(arg, nullptr);
		}

		::System::Buffers::OperationStatus* Compress(Il2CppObject* arg, Il2CppObject* arg, int32_t&* arg, int32_t&* arg, ::System::Boolean arg)
		{
			return (return (::System::Buffers::OperationStatus*(*)(Il2CppObject*, Il2CppObject*, int32_t&*, int32_t&*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_COMPRESSION_BROTLIENCODER_COMPRESS_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Buffers::OperationStatus* Compress(Il2CppObject* arg, Il2CppObject* arg, int32_t&* arg, int32_t&* arg, ::System::IO::Compression::BrotliEncoderOperation* arg)
		{
			return (return (::System::Buffers::OperationStatus*(*)(Il2CppObject*, Il2CppObject*, int32_t&*, int32_t&*, ::System::IO::Compression::BrotliEncoderOperation*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_COMPRESSION_BROTLIENCODER_COMPRESS_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

	};
}

