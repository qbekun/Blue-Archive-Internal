#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_IO_COMPRESSION_DEFLATESTREAMNATIVE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9B8A8B0)
#define SYSTEM_IO_COMPRESSION_DEFLATESTREAMNATIVE_CREATE_OFFSET UNITYSDK_OFFSET(0x9B8A8C0)
#define SYSTEM_IO_COMPRESSION_DEFLATESTREAMNATIVE_FINALIZE_OFFSET UNITYSDK_OFFSET(0x9B8AD30)
#define SYSTEM_IO_COMPRESSION_DEFLATESTREAMNATIVE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9B8AC20)
#define SYSTEM_IO_COMPRESSION_DEFLATESTREAMNATIVE_FLUSH_OFFSET UNITYSDK_OFFSET(0x9B8ADF0)
#define SYSTEM_IO_COMPRESSION_DEFLATESTREAMNATIVE_READZSTREAM_OFFSET UNITYSDK_OFFSET(0x9B8AFB0)
#define SYSTEM_IO_COMPRESSION_DEFLATESTREAMNATIVE_WRITEZSTREAM_OFFSET UNITYSDK_OFFSET(0x9B8B0D0)
#define SYSTEM_IO_COMPRESSION_DEFLATESTREAMNATIVE_UNMANAGEDREAD_OFFSET UNITYSDK_OFFSET(0x9B8A770)
#define SYSTEM_IO_COMPRESSION_DEFLATESTREAMNATIVE_UNMANAGEDREAD_OFFSET UNITYSDK_OFFSET(0x9B8B1F0)
#define SYSTEM_IO_COMPRESSION_DEFLATESTREAMNATIVE_UNMANAGEDWRITE_OFFSET UNITYSDK_OFFSET(0x9B8A810)
#define SYSTEM_IO_COMPRESSION_DEFLATESTREAMNATIVE_UNMANAGEDWRITE_OFFSET UNITYSDK_OFFSET(0x9B8B3E0)
#define SYSTEM_IO_COMPRESSION_DEFLATESTREAMNATIVE_CHECKRESULT_OFFSET UNITYSDK_OFFSET(0x9B8AEF0)
#define SYSTEM_IO_COMPRESSION_DEFLATESTREAMNATIVE_CREATEZSTREAM_OFFSET UNITYSDK_OFFSET(0x9B8AB70)
#define SYSTEM_IO_COMPRESSION_DEFLATESTREAMNATIVE_CLOSEZSTREAM_OFFSET UNITYSDK_OFFSET(0x9B8B650)
#define SYSTEM_IO_COMPRESSION_DEFLATESTREAMNATIVE_FLUSH_OFFSET UNITYSDK_OFFSET(0x9B8AE90)
#define SYSTEM_IO_COMPRESSION_DEFLATESTREAMNATIVE_READZSTREAM_OFFSET UNITYSDK_OFFSET(0x9B8B060)
#define SYSTEM_IO_COMPRESSION_DEFLATESTREAMNATIVE_WRITEZSTREAM_OFFSET UNITYSDK_OFFSET(0x9B8B180)

namespace System::IO::Compression
{
	inline static constexpr unsigned int DeflateStreamNative_TypeDefinitionIndex = 29633;

	class DeflateStreamNative : public Il2CppObject
	{
	public:
		UnmanagedReadOrWrite* feeder; // 0x10
		::System::IO::Stream* base_stream; // 0x18
		SafeDeflateStreamHandle* z_stream; // 0x20
		::System::Runtime::InteropServices::GCHandle* data; // 0x28
		::System::Boolean disposed; // 0x30
		::Il2CppArray<::System::Object*>* io_buffer; // 0x38
		::System::Exception* last_error; // 0x40

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_COMPRESSION_DEFLATESTREAMNATIVE_.CTOR_OFFSET))(nullptr);
		}

		::System::IO::Compression::DeflateStreamNative* Create(::System::IO::Stream* arg, ::System::IO::Compression::CompressionMode* arg, ::System::Boolean arg)
		{
			return (return (::System::IO::Compression::DeflateStreamNative*(*)(::System::IO::Stream*, ::System::IO::Compression::CompressionMode*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_COMPRESSION_DEFLATESTREAMNATIVE_CREATE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void Finalize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_COMPRESSION_DEFLATESTREAMNATIVE_FINALIZE_OFFSET))(nullptr);
		}

		::System::Void Dispose(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_COMPRESSION_DEFLATESTREAMNATIVE_DISPOSE_OFFSET))(arg, nullptr);
		}

		::System::Void Flush()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_COMPRESSION_DEFLATESTREAMNATIVE_FLUSH_OFFSET))(nullptr);
		}

		::System::Int32 ReadZStream(::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_COMPRESSION_DEFLATESTREAMNATIVE_READZSTREAM_OFFSET))(arg, arg, nullptr);
		}

		::System::Void WriteZStream(::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_COMPRESSION_DEFLATESTREAMNATIVE_WRITEZSTREAM_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 UnmanagedRead(::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_COMPRESSION_DEFLATESTREAMNATIVE_UNMANAGEDREAD_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Int32 UnmanagedRead(::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_COMPRESSION_DEFLATESTREAMNATIVE_UNMANAGEDREAD_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 UnmanagedWrite(::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_COMPRESSION_DEFLATESTREAMNATIVE_UNMANAGEDWRITE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Int32 UnmanagedWrite(::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_COMPRESSION_DEFLATESTREAMNATIVE_UNMANAGEDWRITE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void CheckResult(::System::Int32 arg, ::System::String* str)
		{
			((::System::Void(*)(::System::Int32, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_COMPRESSION_DEFLATESTREAMNATIVE_CHECKRESULT_OFFSET))(arg, str, nullptr);
		}

		SafeDeflateStreamHandle* CreateZStream(::System::IO::Compression::CompressionMode* arg, ::System::Boolean arg, UnmanagedReadOrWrite* arg, ::System::Int32 arg)
		{
			return (return (SafeDeflateStreamHandle*(*)(::System::IO::Compression::CompressionMode*, ::System::Boolean, UnmanagedReadOrWrite*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_COMPRESSION_DEFLATESTREAMNATIVE_CREATEZSTREAM_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Int32 CloseZStream(::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_COMPRESSION_DEFLATESTREAMNATIVE_CLOSEZSTREAM_OFFSET))(arg, nullptr);
		}

		::System::Int32 Flush(SafeDeflateStreamHandle* arg)
		{
			return (return (::System::Int32(*)(SafeDeflateStreamHandle*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_COMPRESSION_DEFLATESTREAMNATIVE_FLUSH_OFFSET))(arg, nullptr);
		}

		::System::Int32 ReadZStream(SafeDeflateStreamHandle* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(SafeDeflateStreamHandle*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_COMPRESSION_DEFLATESTREAMNATIVE_READZSTREAM_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Int32 WriteZStream(SafeDeflateStreamHandle* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(SafeDeflateStreamHandle*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_COMPRESSION_DEFLATESTREAMNATIVE_WRITEZSTREAM_OFFSET))(arg, arg, arg, nullptr);
		}

	};
}

