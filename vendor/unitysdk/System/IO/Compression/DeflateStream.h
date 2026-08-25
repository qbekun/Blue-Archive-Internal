#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_IO_COMPRESSION_DEFLATESTREAM_.CTOR_OFFSET UNITYSDK_OFFSET(0x9B89080)
#define SYSTEM_IO_COMPRESSION_DEFLATESTREAM_.CTOR_OFFSET UNITYSDK_OFFSET(0x9B883A0)
#define SYSTEM_IO_COMPRESSION_DEFLATESTREAM_.CTOR_OFFSET UNITYSDK_OFFSET(0x9B890A0)
#define SYSTEM_IO_COMPRESSION_DEFLATESTREAM_FINALIZE_OFFSET UNITYSDK_OFFSET(0x9B89220)
#define SYSTEM_IO_COMPRESSION_DEFLATESTREAM_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9B892F0)
#define SYSTEM_IO_COMPRESSION_DEFLATESTREAM_READINTERNAL_OFFSET UNITYSDK_OFFSET(0x9B893C0)
#define SYSTEM_IO_COMPRESSION_DEFLATESTREAM_READASYNCMEMORY_OFFSET UNITYSDK_OFFSET(0x9B88E30)
#define SYSTEM_IO_COMPRESSION_DEFLATESTREAM_READCORE_OFFSET UNITYSDK_OFFSET(0x9B88870)
#define SYSTEM_IO_COMPRESSION_DEFLATESTREAM_READ_OFFSET UNITYSDK_OFFSET(0x9B89420)
#define SYSTEM_IO_COMPRESSION_DEFLATESTREAM_WRITEINTERNAL_OFFSET UNITYSDK_OFFSET(0x9B89660)
#define SYSTEM_IO_COMPRESSION_DEFLATESTREAM_WRITEASYNCMEMORY_OFFSET UNITYSDK_OFFSET(0x9B88F90)
#define SYSTEM_IO_COMPRESSION_DEFLATESTREAM_WRITECORE_OFFSET UNITYSDK_OFFSET(0x9B88B80)
#define SYSTEM_IO_COMPRESSION_DEFLATESTREAM_WRITE_OFFSET UNITYSDK_OFFSET(0x9B896C0)
#define SYSTEM_IO_COMPRESSION_DEFLATESTREAM_FLUSH_OFFSET UNITYSDK_OFFSET(0x9B89910)
#define SYSTEM_IO_COMPRESSION_DEFLATESTREAM_BEGINREAD_OFFSET UNITYSDK_OFFSET(0x9B899D0)
#define SYSTEM_IO_COMPRESSION_DEFLATESTREAM_BEGINWRITE_OFFSET UNITYSDK_OFFSET(0x9B89CA0)
#define SYSTEM_IO_COMPRESSION_DEFLATESTREAM_ENDREAD_OFFSET UNITYSDK_OFFSET(0x9B89F70)
#define SYSTEM_IO_COMPRESSION_DEFLATESTREAM_ENDWRITE_OFFSET UNITYSDK_OFFSET(0x9B8A0B0)
#define SYSTEM_IO_COMPRESSION_DEFLATESTREAM_SEEK_OFFSET UNITYSDK_OFFSET(0x9B8A1F0)
#define SYSTEM_IO_COMPRESSION_DEFLATESTREAM_SETLENGTH_OFFSET UNITYSDK_OFFSET(0x9B8A240)
#define SYSTEM_IO_COMPRESSION_DEFLATESTREAM_GET_CANREAD_OFFSET UNITYSDK_OFFSET(0x9B8A290)
#define SYSTEM_IO_COMPRESSION_DEFLATESTREAM_GET_CANSEEK_OFFSET UNITYSDK_OFFSET(0x9B8A2D0)
#define SYSTEM_IO_COMPRESSION_DEFLATESTREAM_GET_CANWRITE_OFFSET UNITYSDK_OFFSET(0x9B8A2E0)
#define SYSTEM_IO_COMPRESSION_DEFLATESTREAM_GET_LENGTH_OFFSET UNITYSDK_OFFSET(0x9B8A320)
#define SYSTEM_IO_COMPRESSION_DEFLATESTREAM_GET_POSITION_OFFSET UNITYSDK_OFFSET(0x9B8A370)
#define SYSTEM_IO_COMPRESSION_DEFLATESTREAM_SET_POSITION_OFFSET UNITYSDK_OFFSET(0x9B8A3C0)

namespace System::IO::Compression
{
	inline static constexpr unsigned int DeflateStream_TypeDefinitionIndex = 29630;

	class DeflateStream : public Il2CppObject
	{
	public:
		::System::IO::Stream* base_stream; // 0x28
		::System::IO::Compression::CompressionMode* mode; // 0x30
		::System::Boolean leaveOpen; // 0x34
		::System::Boolean disposed; // 0x35
		::System::IO::Compression::DeflateStreamNative* native; // 0x38

		::System::Void .ctor(::System::IO::Stream* arg, ::System::IO::Compression::CompressionMode* arg)
		{
			((::System::Void(*)(::System::IO::Stream*, ::System::IO::Compression::CompressionMode*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_COMPRESSION_DEFLATESTREAM_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor(::System::IO::Stream* arg, ::System::IO::Compression::CompressionMode* arg, ::System::Boolean arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::IO::Stream*, ::System::IO::Compression::CompressionMode*, ::System::Boolean, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_COMPRESSION_DEFLATESTREAM_.CTOR_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void .ctor(::System::IO::Stream* arg, ::System::IO::Compression::CompressionMode* arg, ::System::Boolean arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::IO::Stream*, ::System::IO::Compression::CompressionMode*, ::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_COMPRESSION_DEFLATESTREAM_.CTOR_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void Finalize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_COMPRESSION_DEFLATESTREAM_FINALIZE_OFFSET))(nullptr);
		}

		::System::Void Dispose(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_COMPRESSION_DEFLATESTREAM_DISPOSE_OFFSET))(arg, nullptr);
		}

		::System::Int32 ReadInternal(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_COMPRESSION_DEFLATESTREAM_READINTERNAL_OFFSET))(arg, arg, arg, nullptr);
		}

		Il2CppObject* ReadAsyncMemory(Il2CppObject* arg, ::System::Threading::CancellationToken* arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_COMPRESSION_DEFLATESTREAM_READASYNCMEMORY_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 ReadCore(Il2CppObject* arg)
		{
			return (return (::System::Int32(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_COMPRESSION_DEFLATESTREAM_READCORE_OFFSET))(arg, nullptr);
		}

		::System::Int32 Read(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_COMPRESSION_DEFLATESTREAM_READ_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void WriteInternal(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_COMPRESSION_DEFLATESTREAM_WRITEINTERNAL_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Threading::Tasks::ValueTask* WriteAsyncMemory(Il2CppObject* arg, ::System::Threading::CancellationToken* arg)
		{
			return (return (::System::Threading::Tasks::ValueTask*(*)(Il2CppObject*, ::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_COMPRESSION_DEFLATESTREAM_WRITEASYNCMEMORY_OFFSET))(arg, arg, nullptr);
		}

		::System::Void WriteCore(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_COMPRESSION_DEFLATESTREAM_WRITECORE_OFFSET))(arg, nullptr);
		}

		::System::Void Write(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_COMPRESSION_DEFLATESTREAM_WRITE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void Flush()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_COMPRESSION_DEFLATESTREAM_FLUSH_OFFSET))(nullptr);
		}

		::System::IAsyncResult* BeginRead(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg, ::System::AsyncCallback* arg, ::System::Object* arg)
		{
			return (return (::System::IAsyncResult*(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::System::AsyncCallback*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_COMPRESSION_DEFLATESTREAM_BEGINREAD_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::IAsyncResult* BeginWrite(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg, ::System::AsyncCallback* arg, ::System::Object* arg)
		{
			return (return (::System::IAsyncResult*(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::System::AsyncCallback*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_COMPRESSION_DEFLATESTREAM_BEGINWRITE_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Int32 EndRead(::System::IAsyncResult* arg)
		{
			return (return (::System::Int32(*)(::System::IAsyncResult*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_COMPRESSION_DEFLATESTREAM_ENDREAD_OFFSET))(arg, nullptr);
		}

		::System::Void EndWrite(::System::IAsyncResult* arg)
		{
			((::System::Void(*)(::System::IAsyncResult*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_COMPRESSION_DEFLATESTREAM_ENDWRITE_OFFSET))(arg, nullptr);
		}

		::System::Int64 Seek(::System::Int64 arg, ::System::IO::SeekOrigin* arg)
		{
			return (return (::System::Int64(*)(::System::Int64, ::System::IO::SeekOrigin*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_COMPRESSION_DEFLATESTREAM_SEEK_OFFSET))(arg, arg, nullptr);
		}

		::System::Void SetLength(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_COMPRESSION_DEFLATESTREAM_SETLENGTH_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_CanRead()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_COMPRESSION_DEFLATESTREAM_GET_CANREAD_OFFSET))(nullptr);
		}

		::System::Boolean get_CanSeek()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_COMPRESSION_DEFLATESTREAM_GET_CANSEEK_OFFSET))(nullptr);
		}

		::System::Boolean get_CanWrite()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_COMPRESSION_DEFLATESTREAM_GET_CANWRITE_OFFSET))(nullptr);
		}

		::System::Int64 get_Length()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_COMPRESSION_DEFLATESTREAM_GET_LENGTH_OFFSET))(nullptr);
		}

		::System::Int64 get_Position()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_COMPRESSION_DEFLATESTREAM_GET_POSITION_OFFSET))(nullptr);
		}

		::System::Void set_Position(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_COMPRESSION_DEFLATESTREAM_SET_POSITION_OFFSET))(arg, nullptr);
		}

	};
}

