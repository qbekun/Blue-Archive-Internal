#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_IO_COMPRESSION_GZIPSTREAM_.CTOR_OFFSET UNITYSDK_OFFSET(0x9B882D0)
#define SYSTEM_IO_COMPRESSION_GZIPSTREAM_.CTOR_OFFSET UNITYSDK_OFFSET(0x9B882F0)
#define SYSTEM_IO_COMPRESSION_GZIPSTREAM_GET_CANREAD_OFFSET UNITYSDK_OFFSET(0x9B883C0)
#define SYSTEM_IO_COMPRESSION_GZIPSTREAM_GET_CANWRITE_OFFSET UNITYSDK_OFFSET(0x9B883E0)
#define SYSTEM_IO_COMPRESSION_GZIPSTREAM_GET_CANSEEK_OFFSET UNITYSDK_OFFSET(0x9B88400)
#define SYSTEM_IO_COMPRESSION_GZIPSTREAM_GET_LENGTH_OFFSET UNITYSDK_OFFSET(0x9B88420)
#define SYSTEM_IO_COMPRESSION_GZIPSTREAM_GET_POSITION_OFFSET UNITYSDK_OFFSET(0x9B88480)
#define SYSTEM_IO_COMPRESSION_GZIPSTREAM_SET_POSITION_OFFSET UNITYSDK_OFFSET(0x9B884E0)
#define SYSTEM_IO_COMPRESSION_GZIPSTREAM_FLUSH_OFFSET UNITYSDK_OFFSET(0x9B88540)
#define SYSTEM_IO_COMPRESSION_GZIPSTREAM_SEEK_OFFSET UNITYSDK_OFFSET(0x9B88590)
#define SYSTEM_IO_COMPRESSION_GZIPSTREAM_SETLENGTH_OFFSET UNITYSDK_OFFSET(0x9B885F0)
#define SYSTEM_IO_COMPRESSION_GZIPSTREAM_READBYTE_OFFSET UNITYSDK_OFFSET(0x9B88650)
#define SYSTEM_IO_COMPRESSION_GZIPSTREAM_BEGINREAD_OFFSET UNITYSDK_OFFSET(0x9B88680)
#define SYSTEM_IO_COMPRESSION_GZIPSTREAM_ENDREAD_OFFSET UNITYSDK_OFFSET(0x9B88730)
#define SYSTEM_IO_COMPRESSION_GZIPSTREAM_READ_OFFSET UNITYSDK_OFFSET(0x9B88770)
#define SYSTEM_IO_COMPRESSION_GZIPSTREAM_READ_OFFSET UNITYSDK_OFFSET(0x9B887A0)
#define SYSTEM_IO_COMPRESSION_GZIPSTREAM_BEGINWRITE_OFFSET UNITYSDK_OFFSET(0x9B88970)
#define SYSTEM_IO_COMPRESSION_GZIPSTREAM_ENDWRITE_OFFSET UNITYSDK_OFFSET(0x9B88A20)
#define SYSTEM_IO_COMPRESSION_GZIPSTREAM_WRITE_OFFSET UNITYSDK_OFFSET(0x9B88A30)
#define SYSTEM_IO_COMPRESSION_GZIPSTREAM_WRITE_OFFSET UNITYSDK_OFFSET(0x9B88A60)
#define SYSTEM_IO_COMPRESSION_GZIPSTREAM_COPYTO_OFFSET UNITYSDK_OFFSET(0x9B88BF0)
#define SYSTEM_IO_COMPRESSION_GZIPSTREAM_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9B88C20)
#define SYSTEM_IO_COMPRESSION_GZIPSTREAM_READASYNC_OFFSET UNITYSDK_OFFSET(0x9B88D00)
#define SYSTEM_IO_COMPRESSION_GZIPSTREAM_READASYNC_OFFSET UNITYSDK_OFFSET(0x9B88D40)
#define SYSTEM_IO_COMPRESSION_GZIPSTREAM_WRITEASYNC_OFFSET UNITYSDK_OFFSET(0x9B88E60)
#define SYSTEM_IO_COMPRESSION_GZIPSTREAM_WRITEASYNC_OFFSET UNITYSDK_OFFSET(0x9B88EA0)
#define SYSTEM_IO_COMPRESSION_GZIPSTREAM_FLUSHASYNC_OFFSET UNITYSDK_OFFSET(0x9B88FC0)
#define SYSTEM_IO_COMPRESSION_GZIPSTREAM_COPYTOASYNC_OFFSET UNITYSDK_OFFSET(0x9B88FF0)
#define SYSTEM_IO_COMPRESSION_GZIPSTREAM_CHECKDEFLATESTREAM_OFFSET UNITYSDK_OFFSET(0x9B88570)
#define SYSTEM_IO_COMPRESSION_GZIPSTREAM_THROWSTREAMCLOSEDEXCEPTION_OFFSET UNITYSDK_OFFSET(0x9B89020)

namespace System::IO::Compression
{
	inline static constexpr unsigned int GZipStream_TypeDefinitionIndex = 29627;

	class GZipStream : public Il2CppObject
	{
	public:
		::System::IO::Compression::DeflateStream* _deflateStream; // 0x28

		::System::Void .ctor(::System::IO::Stream* arg, ::System::IO::Compression::CompressionMode* arg)
		{
			((::System::Void(*)(::System::IO::Stream*, ::System::IO::Compression::CompressionMode*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_COMPRESSION_GZIPSTREAM_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor(::System::IO::Stream* arg, ::System::IO::Compression::CompressionMode* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::IO::Stream*, ::System::IO::Compression::CompressionMode*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_COMPRESSION_GZIPSTREAM_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean get_CanRead()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_COMPRESSION_GZIPSTREAM_GET_CANREAD_OFFSET))(nullptr);
		}

		::System::Boolean get_CanWrite()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_COMPRESSION_GZIPSTREAM_GET_CANWRITE_OFFSET))(nullptr);
		}

		::System::Boolean get_CanSeek()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_COMPRESSION_GZIPSTREAM_GET_CANSEEK_OFFSET))(nullptr);
		}

		::System::Int64 get_Length()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_COMPRESSION_GZIPSTREAM_GET_LENGTH_OFFSET))(nullptr);
		}

		::System::Int64 get_Position()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_COMPRESSION_GZIPSTREAM_GET_POSITION_OFFSET))(nullptr);
		}

		::System::Void set_Position(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_COMPRESSION_GZIPSTREAM_SET_POSITION_OFFSET))(arg, nullptr);
		}

		::System::Void Flush()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_COMPRESSION_GZIPSTREAM_FLUSH_OFFSET))(nullptr);
		}

		::System::Int64 Seek(::System::Int64 arg, ::System::IO::SeekOrigin* arg)
		{
			return (return (::System::Int64(*)(::System::Int64, ::System::IO::SeekOrigin*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_COMPRESSION_GZIPSTREAM_SEEK_OFFSET))(arg, arg, nullptr);
		}

		::System::Void SetLength(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_COMPRESSION_GZIPSTREAM_SETLENGTH_OFFSET))(arg, nullptr);
		}

		::System::Int32 ReadByte()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_COMPRESSION_GZIPSTREAM_READBYTE_OFFSET))(nullptr);
		}

		::System::IAsyncResult* BeginRead(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg, ::System::AsyncCallback* arg, ::System::Object* arg)
		{
			return (return (::System::IAsyncResult*(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::System::AsyncCallback*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_COMPRESSION_GZIPSTREAM_BEGINREAD_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Int32 EndRead(::System::IAsyncResult* arg)
		{
			return (return (::System::Int32(*)(::System::IAsyncResult*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_COMPRESSION_GZIPSTREAM_ENDREAD_OFFSET))(arg, nullptr);
		}

		::System::Int32 Read(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_COMPRESSION_GZIPSTREAM_READ_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Int32 Read(Il2CppObject* arg)
		{
			return (return (::System::Int32(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_COMPRESSION_GZIPSTREAM_READ_OFFSET))(arg, nullptr);
		}

		::System::IAsyncResult* BeginWrite(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg, ::System::AsyncCallback* arg, ::System::Object* arg)
		{
			return (return (::System::IAsyncResult*(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::System::AsyncCallback*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_COMPRESSION_GZIPSTREAM_BEGINWRITE_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void EndWrite(::System::IAsyncResult* arg)
		{
			((::System::Void(*)(::System::IAsyncResult*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_COMPRESSION_GZIPSTREAM_ENDWRITE_OFFSET))(arg, nullptr);
		}

		::System::Void Write(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_COMPRESSION_GZIPSTREAM_WRITE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void Write(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_COMPRESSION_GZIPSTREAM_WRITE_OFFSET))(arg, nullptr);
		}

		::System::Void CopyTo(::System::IO::Stream* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::IO::Stream*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_COMPRESSION_GZIPSTREAM_COPYTO_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Dispose(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_COMPRESSION_GZIPSTREAM_DISPOSE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* ReadAsync(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Threading::CancellationToken* arg)
		{
			return (return (Il2CppObject*(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_COMPRESSION_GZIPSTREAM_READASYNC_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		Il2CppObject* ReadAsync(Il2CppObject* arg, ::System::Threading::CancellationToken* arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_COMPRESSION_GZIPSTREAM_READASYNC_OFFSET))(arg, arg, nullptr);
		}

		::System::Threading::Tasks::Task* WriteAsync(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Threading::CancellationToken* arg)
		{
			return (return (::System::Threading::Tasks::Task*(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_COMPRESSION_GZIPSTREAM_WRITEASYNC_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Threading::Tasks::ValueTask* WriteAsync(Il2CppObject* arg, ::System::Threading::CancellationToken* arg)
		{
			return (return (::System::Threading::Tasks::ValueTask*(*)(Il2CppObject*, ::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_COMPRESSION_GZIPSTREAM_WRITEASYNC_OFFSET))(arg, arg, nullptr);
		}

		::System::Threading::Tasks::Task* FlushAsync(::System::Threading::CancellationToken* arg)
		{
			return (return (::System::Threading::Tasks::Task*(*)(::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_COMPRESSION_GZIPSTREAM_FLUSHASYNC_OFFSET))(arg, nullptr);
		}

		::System::Threading::Tasks::Task* CopyToAsync(::System::IO::Stream* arg, ::System::Int32 arg, ::System::Threading::CancellationToken* arg)
		{
			return (return (::System::Threading::Tasks::Task*(*)(::System::IO::Stream*, ::System::Int32, ::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_COMPRESSION_GZIPSTREAM_COPYTOASYNC_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void CheckDeflateStream()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_COMPRESSION_GZIPSTREAM_CHECKDEFLATESTREAM_OFFSET))(nullptr);
		}

		::System::Void ThrowStreamClosedException()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_COMPRESSION_GZIPSTREAM_THROWSTREAMCLOSEDEXCEPTION_OFFSET))(nullptr);
		}

	};
}

