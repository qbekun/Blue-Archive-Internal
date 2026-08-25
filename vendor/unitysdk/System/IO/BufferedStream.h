#pragma once
#include "../../unitysdk.h"

#define SYSTEM_IO_BUFFEREDSTREAM_LAZYENSUREASYNCACTIVESEMAPHOREINITIALIZED_OFFSET UNITYSDK_OFFSET(0x930B510)
#define SYSTEM_IO_BUFFEREDSTREAM_.CTOR_OFFSET UNITYSDK_OFFSET(0x930B620)
#define SYSTEM_IO_BUFFEREDSTREAM_.CTOR_OFFSET UNITYSDK_OFFSET(0x930B630)
#define SYSTEM_IO_BUFFEREDSTREAM_ENSURENOTCLOSED_OFFSET UNITYSDK_OFFSET(0x930B840)
#define SYSTEM_IO_BUFFEREDSTREAM_ENSURECANSEEK_OFFSET UNITYSDK_OFFSET(0x930B8B0)
#define SYSTEM_IO_BUFFEREDSTREAM_ENSURECANREAD_OFFSET UNITYSDK_OFFSET(0x930B930)
#define SYSTEM_IO_BUFFEREDSTREAM_ENSURECANWRITE_OFFSET UNITYSDK_OFFSET(0x930B9B0)
#define SYSTEM_IO_BUFFEREDSTREAM_ENSURESHADOWBUFFERALLOCATED_OFFSET UNITYSDK_OFFSET(0x930BA30)
#define SYSTEM_IO_BUFFEREDSTREAM_ENSUREBUFFERALLOCATED_OFFSET UNITYSDK_OFFSET(0x930BB10)
#define SYSTEM_IO_BUFFEREDSTREAM_GET_CANREAD_OFFSET UNITYSDK_OFFSET(0x930BB70)
#define SYSTEM_IO_BUFFEREDSTREAM_GET_CANWRITE_OFFSET UNITYSDK_OFFSET(0x930BB90)
#define SYSTEM_IO_BUFFEREDSTREAM_GET_CANSEEK_OFFSET UNITYSDK_OFFSET(0x930BBB0)
#define SYSTEM_IO_BUFFEREDSTREAM_GET_LENGTH_OFFSET UNITYSDK_OFFSET(0x930BBD0)
#define SYSTEM_IO_BUFFEREDSTREAM_GET_POSITION_OFFSET UNITYSDK_OFFSET(0x930BD10)
#define SYSTEM_IO_BUFFEREDSTREAM_SET_POSITION_OFFSET UNITYSDK_OFFSET(0x930BDB0)
#define SYSTEM_IO_BUFFEREDSTREAM_DISPOSE_OFFSET UNITYSDK_OFFSET(0x930BF20)
#define SYSTEM_IO_BUFFEREDSTREAM_FLUSH_OFFSET UNITYSDK_OFFSET(0x930C0A0)
#define SYSTEM_IO_BUFFEREDSTREAM_FLUSHASYNC_OFFSET UNITYSDK_OFFSET(0x930C270)
#define SYSTEM_IO_BUFFEREDSTREAM_FLUSHASYNCINTERNAL_OFFSET UNITYSDK_OFFSET(0x930C380)
#define SYSTEM_IO_BUFFEREDSTREAM_FLUSHREAD_OFFSET UNITYSDK_OFFSET(0x930C220)
#define SYSTEM_IO_BUFFEREDSTREAM_CLEARREADBUFFERBEFOREWRITE_OFFSET UNITYSDK_OFFSET(0x930C480)
#define SYSTEM_IO_BUFFEREDSTREAM_FLUSHWRITE_OFFSET UNITYSDK_OFFSET(0x930BCB0)
#define SYSTEM_IO_BUFFEREDSTREAM_FLUSHWRITEASYNC_OFFSET UNITYSDK_OFFSET(0x930C540)
#define SYSTEM_IO_BUFFEREDSTREAM_READFROMBUFFER_OFFSET UNITYSDK_OFFSET(0x930C630)
#define SYSTEM_IO_BUFFEREDSTREAM_READFROMBUFFER_OFFSET UNITYSDK_OFFSET(0x930C680)
#define SYSTEM_IO_BUFFEREDSTREAM_READFROMBUFFER_OFFSET UNITYSDK_OFFSET(0x930C790)
#define SYSTEM_IO_BUFFEREDSTREAM_READ_OFFSET UNITYSDK_OFFSET(0x930C8B0)
#define SYSTEM_IO_BUFFEREDSTREAM_READ_OFFSET UNITYSDK_OFFSET(0x930CC60)
#define SYSTEM_IO_BUFFEREDSTREAM_LASTSYNCCOMPLETEDREADTASK_OFFSET UNITYSDK_OFFSET(0x930CED0)
#define SYSTEM_IO_BUFFEREDSTREAM_READASYNC_OFFSET UNITYSDK_OFFSET(0x930CF80)
#define SYSTEM_IO_BUFFEREDSTREAM_READASYNC_OFFSET UNITYSDK_OFFSET(0x930D6E0)
#define SYSTEM_IO_BUFFEREDSTREAM_READFROMUNDERLYINGSTREAMASYNC_OFFSET UNITYSDK_OFFSET(0x930D510)
#define SYSTEM_IO_BUFFEREDSTREAM_BEGINREAD_OFFSET UNITYSDK_OFFSET(0x930DB60)
#define SYSTEM_IO_BUFFEREDSTREAM_ENDREAD_OFFSET UNITYSDK_OFFSET(0x930DC10)
#define SYSTEM_IO_BUFFEREDSTREAM_READBYTE_OFFSET UNITYSDK_OFFSET(0x930DC50)
#define SYSTEM_IO_BUFFEREDSTREAM_READBYTESLOW_OFFSET UNITYSDK_OFFSET(0x930DCA0)
#define SYSTEM_IO_BUFFEREDSTREAM_WRITETOBUFFER_OFFSET UNITYSDK_OFFSET(0x930DE30)
#define SYSTEM_IO_BUFFEREDSTREAM_WRITETOBUFFER_OFFSET UNITYSDK_OFFSET(0x930DF20)
#define SYSTEM_IO_BUFFEREDSTREAM_WRITE_OFFSET UNITYSDK_OFFSET(0x930E100)
#define SYSTEM_IO_BUFFEREDSTREAM_WRITE_OFFSET UNITYSDK_OFFSET(0x930E4D0)
#define SYSTEM_IO_BUFFEREDSTREAM_WRITEASYNC_OFFSET UNITYSDK_OFFSET(0x930E840)
#define SYSTEM_IO_BUFFEREDSTREAM_WRITEASYNC_OFFSET UNITYSDK_OFFSET(0x930EA80)
#define SYSTEM_IO_BUFFEREDSTREAM_WRITETOUNDERLYINGSTREAMASYNC_OFFSET UNITYSDK_OFFSET(0x930EDE0)
#define SYSTEM_IO_BUFFEREDSTREAM_BEGINWRITE_OFFSET UNITYSDK_OFFSET(0x930EF30)
#define SYSTEM_IO_BUFFEREDSTREAM_ENDWRITE_OFFSET UNITYSDK_OFFSET(0x930EFE0)
#define SYSTEM_IO_BUFFEREDSTREAM_WRITEBYTE_OFFSET UNITYSDK_OFFSET(0x930EFF0)
#define SYSTEM_IO_BUFFEREDSTREAM_SEEK_OFFSET UNITYSDK_OFFSET(0x930F140)
#define SYSTEM_IO_BUFFEREDSTREAM_SETLENGTH_OFFSET UNITYSDK_OFFSET(0x930F2F0)
#define SYSTEM_IO_BUFFEREDSTREAM_COPYTO_OFFSET UNITYSDK_OFFSET(0x930F420)
#define SYSTEM_IO_BUFFEREDSTREAM_COPYTOASYNC_OFFSET UNITYSDK_OFFSET(0x930F500)
#define SYSTEM_IO_BUFFEREDSTREAM_COPYTOASYNCCORE_OFFSET UNITYSDK_OFFSET(0x930F5D0)

namespace System::IO
{
	inline static constexpr unsigned int BufferedStream_TypeDefinitionIndex = 25277;

	class BufferedStream : public Il2CppObject
	{
	public:
		::System::IO::Stream* _stream; // 0x28
		::Il2CppArray<::System::Object*>* _buffer; // 0x30
		::System::Int32 _bufferSize; // 0x38
		::System::Int32 _readPos; // 0x3C
		::System::Int32 _readLen; // 0x40
		::System::Int32 _writePos; // 0x44
		Il2CppObject* _lastSyncCompletedReadTask; // 0x48
		::System::Threading::SemaphoreSlim* _asyncActiveSemaphore; // 0x50

		::System::Threading::SemaphoreSlim* LazyEnsureAsyncActiveSemaphoreInitialized()
		{
			return (return (::System::Threading::SemaphoreSlim*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_BUFFEREDSTREAM_LAZYENSUREASYNCACTIVESEMAPHOREINITIALIZED_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::IO::Stream* arg)
		{
			((::System::Void(*)(::System::IO::Stream*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_BUFFEREDSTREAM_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::IO::Stream* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::IO::Stream*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_BUFFEREDSTREAM_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void EnsureNotClosed()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_BUFFEREDSTREAM_ENSURENOTCLOSED_OFFSET))(nullptr);
		}

		::System::Void EnsureCanSeek()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_BUFFEREDSTREAM_ENSURECANSEEK_OFFSET))(nullptr);
		}

		::System::Void EnsureCanRead()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_BUFFEREDSTREAM_ENSURECANREAD_OFFSET))(nullptr);
		}

		::System::Void EnsureCanWrite()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_BUFFEREDSTREAM_ENSURECANWRITE_OFFSET))(nullptr);
		}

		::System::Void EnsureShadowBufferAllocated()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_BUFFEREDSTREAM_ENSURESHADOWBUFFERALLOCATED_OFFSET))(nullptr);
		}

		::System::Void EnsureBufferAllocated()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_BUFFEREDSTREAM_ENSUREBUFFERALLOCATED_OFFSET))(nullptr);
		}

		::System::Boolean get_CanRead()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_BUFFEREDSTREAM_GET_CANREAD_OFFSET))(nullptr);
		}

		::System::Boolean get_CanWrite()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_BUFFEREDSTREAM_GET_CANWRITE_OFFSET))(nullptr);
		}

		::System::Boolean get_CanSeek()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_BUFFEREDSTREAM_GET_CANSEEK_OFFSET))(nullptr);
		}

		::System::Int64 get_Length()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_BUFFEREDSTREAM_GET_LENGTH_OFFSET))(nullptr);
		}

		::System::Int64 get_Position()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_BUFFEREDSTREAM_GET_POSITION_OFFSET))(nullptr);
		}

		::System::Void set_Position(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_BUFFEREDSTREAM_SET_POSITION_OFFSET))(arg, nullptr);
		}

		::System::Void Dispose(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_BUFFEREDSTREAM_DISPOSE_OFFSET))(arg, nullptr);
		}

		::System::Void Flush()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_BUFFEREDSTREAM_FLUSH_OFFSET))(nullptr);
		}

		::System::Threading::Tasks::Task* FlushAsync(::System::Threading::CancellationToken* arg)
		{
			return (return (::System::Threading::Tasks::Task*(*)(::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_BUFFEREDSTREAM_FLUSHASYNC_OFFSET))(arg, nullptr);
		}

		::System::Threading::Tasks::Task* FlushAsyncInternal(::System::Threading::CancellationToken* arg)
		{
			return (return (::System::Threading::Tasks::Task*(*)(::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_BUFFEREDSTREAM_FLUSHASYNCINTERNAL_OFFSET))(arg, nullptr);
		}

		::System::Void FlushRead()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_BUFFEREDSTREAM_FLUSHREAD_OFFSET))(nullptr);
		}

		::System::Void ClearReadBufferBeforeWrite()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_BUFFEREDSTREAM_CLEARREADBUFFERBEFOREWRITE_OFFSET))(nullptr);
		}

		::System::Void FlushWrite()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_BUFFEREDSTREAM_FLUSHWRITE_OFFSET))(nullptr);
		}

		::System::Threading::Tasks::Task* FlushWriteAsync(::System::Threading::CancellationToken* arg)
		{
			return (return (::System::Threading::Tasks::Task*(*)(::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_BUFFEREDSTREAM_FLUSHWRITEASYNC_OFFSET))(arg, nullptr);
		}

		::System::Int32 ReadFromBuffer(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_BUFFEREDSTREAM_READFROMBUFFER_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Int32 ReadFromBuffer(Il2CppObject* arg)
		{
			return (return (::System::Int32(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_BUFFEREDSTREAM_READFROMBUFFER_OFFSET))(arg, nullptr);
		}

		::System::Int32 ReadFromBuffer(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Exception&* arg)
		{
			return (return (::System::Int32(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::System::Exception&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_BUFFEREDSTREAM_READFROMBUFFER_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Int32 Read(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_BUFFEREDSTREAM_READ_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Int32 Read(Il2CppObject* arg)
		{
			return (return (::System::Int32(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_BUFFEREDSTREAM_READ_OFFSET))(arg, nullptr);
		}

		Il2CppObject* LastSyncCompletedReadTask(::System::Int32 arg)
		{
			return (return (Il2CppObject*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_BUFFEREDSTREAM_LASTSYNCCOMPLETEDREADTASK_OFFSET))(arg, nullptr);
		}

		Il2CppObject* ReadAsync(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Threading::CancellationToken* arg)
		{
			return (return (Il2CppObject*(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_BUFFEREDSTREAM_READASYNC_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		Il2CppObject* ReadAsync(Il2CppObject* arg, ::System::Threading::CancellationToken* arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_BUFFEREDSTREAM_READASYNC_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* ReadFromUnderlyingStreamAsync(Il2CppObject* arg, ::System::Threading::CancellationToken* arg, ::System::Int32 arg, ::System::Threading::Tasks::Task* arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Threading::CancellationToken*, ::System::Int32, ::System::Threading::Tasks::Task*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_BUFFEREDSTREAM_READFROMUNDERLYINGSTREAMASYNC_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::IAsyncResult* BeginRead(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg, ::System::AsyncCallback* arg, ::System::Object* arg)
		{
			return (return (::System::IAsyncResult*(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::System::AsyncCallback*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_BUFFEREDSTREAM_BEGINREAD_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Int32 EndRead(::System::IAsyncResult* arg)
		{
			return (return (::System::Int32(*)(::System::IAsyncResult*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_BUFFEREDSTREAM_ENDREAD_OFFSET))(arg, nullptr);
		}

		::System::Int32 ReadByte()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_BUFFEREDSTREAM_READBYTE_OFFSET))(nullptr);
		}

		::System::Int32 ReadByteSlow()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_BUFFEREDSTREAM_READBYTESLOW_OFFSET))(nullptr);
		}

		::System::Void WriteToBuffer(::Il2CppArray<::System::Object*>* arg, int32_t&* arg, int32_t&* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, int32_t&*, int32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_BUFFEREDSTREAM_WRITETOBUFFER_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Int32 WriteToBuffer(Il2CppObject* arg)
		{
			return (return (::System::Int32(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_BUFFEREDSTREAM_WRITETOBUFFER_OFFSET))(arg, nullptr);
		}

		::System::Void Write(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_BUFFEREDSTREAM_WRITE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void Write(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_BUFFEREDSTREAM_WRITE_OFFSET))(arg, nullptr);
		}

		::System::Threading::Tasks::Task* WriteAsync(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Threading::CancellationToken* arg)
		{
			return (return (::System::Threading::Tasks::Task*(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_BUFFEREDSTREAM_WRITEASYNC_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Threading::Tasks::ValueTask* WriteAsync(Il2CppObject* arg, ::System::Threading::CancellationToken* arg)
		{
			return (return (::System::Threading::Tasks::ValueTask*(*)(Il2CppObject*, ::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_BUFFEREDSTREAM_WRITEASYNC_OFFSET))(arg, arg, nullptr);
		}

		::System::Threading::Tasks::Task* WriteToUnderlyingStreamAsync(Il2CppObject* arg, ::System::Threading::CancellationToken* arg, ::System::Threading::Tasks::Task* arg)
		{
			return (return (::System::Threading::Tasks::Task*(*)(Il2CppObject*, ::System::Threading::CancellationToken*, ::System::Threading::Tasks::Task*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_BUFFEREDSTREAM_WRITETOUNDERLYINGSTREAMASYNC_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::IAsyncResult* BeginWrite(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg, ::System::AsyncCallback* arg, ::System::Object* arg)
		{
			return (return (::System::IAsyncResult*(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::System::AsyncCallback*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_BUFFEREDSTREAM_BEGINWRITE_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void EndWrite(::System::IAsyncResult* arg)
		{
			((::System::Void(*)(::System::IAsyncResult*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_BUFFEREDSTREAM_ENDWRITE_OFFSET))(arg, nullptr);
		}

		::System::Void WriteByte(::System::Byte arg)
		{
			((::System::Void(*)(::System::Byte, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_BUFFEREDSTREAM_WRITEBYTE_OFFSET))(arg, nullptr);
		}

		::System::Int64 Seek(::System::Int64 arg, ::System::IO::SeekOrigin* arg)
		{
			return (return (::System::Int64(*)(::System::Int64, ::System::IO::SeekOrigin*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_BUFFEREDSTREAM_SEEK_OFFSET))(arg, arg, nullptr);
		}

		::System::Void SetLength(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_BUFFEREDSTREAM_SETLENGTH_OFFSET))(arg, nullptr);
		}

		::System::Void CopyTo(::System::IO::Stream* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::IO::Stream*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_BUFFEREDSTREAM_COPYTO_OFFSET))(arg, arg, nullptr);
		}

		::System::Threading::Tasks::Task* CopyToAsync(::System::IO::Stream* arg, ::System::Int32 arg, ::System::Threading::CancellationToken* arg)
		{
			return (return (::System::Threading::Tasks::Task*(*)(::System::IO::Stream*, ::System::Int32, ::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_BUFFEREDSTREAM_COPYTOASYNC_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Threading::Tasks::Task* CopyToAsyncCore(::System::IO::Stream* arg, ::System::Int32 arg, ::System::Threading::CancellationToken* arg)
		{
			return (return (::System::Threading::Tasks::Task*(*)(::System::IO::Stream*, ::System::Int32, ::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_BUFFEREDSTREAM_COPYTOASYNCCORE_OFFSET))(arg, arg, arg, nullptr);
		}

	};
}

