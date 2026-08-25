#pragma once
#include "../../unitysdk.h"

namespace Microsoft::Win32::SafeHandles { class SafeFileHandle; }

#define SYSTEM_IO_FILESTREAM_.CTOR_OFFSET UNITYSDK_OFFSET(0x931DD20)
#define SYSTEM_IO_FILESTREAM_.CTOR_OFFSET UNITYSDK_OFFSET(0x931E230)
#define SYSTEM_IO_FILESTREAM_.CTOR_OFFSET UNITYSDK_OFFSET(0x931EBE0)
#define SYSTEM_IO_FILESTREAM_.CTOR_OFFSET UNITYSDK_OFFSET(0x931ED30)
#define SYSTEM_IO_FILESTREAM_.CTOR_OFFSET UNITYSDK_OFFSET(0x931ED60)
#define SYSTEM_IO_FILESTREAM_.CTOR_OFFSET UNITYSDK_OFFSET(0x931ED90)
#define SYSTEM_IO_FILESTREAM_.CTOR_OFFSET UNITYSDK_OFFSET(0x931EE40)
#define SYSTEM_IO_FILESTREAM_.CTOR_OFFSET UNITYSDK_OFFSET(0x931EC70)
#define SYSTEM_IO_FILESTREAM_.CTOR_OFFSET UNITYSDK_OFFSET(0x931E2C0)
#define SYSTEM_IO_FILESTREAM_INIT_OFFSET UNITYSDK_OFFSET(0x931DED0)
#define SYSTEM_IO_FILESTREAM_GET_CANREAD_OFFSET UNITYSDK_OFFSET(0x9320D10)
#define SYSTEM_IO_FILESTREAM_GET_CANWRITE_OFFSET UNITYSDK_OFFSET(0x9320D20)
#define SYSTEM_IO_FILESTREAM_GET_CANSEEK_OFFSET UNITYSDK_OFFSET(0x9320D30)
#define SYSTEM_IO_FILESTREAM_GET_NAME_OFFSET UNITYSDK_OFFSET(0x9320D40)
#define SYSTEM_IO_FILESTREAM_GET_LENGTH_OFFSET UNITYSDK_OFFSET(0x9320D50)
#define SYSTEM_IO_FILESTREAM_GET_POSITION_OFFSET UNITYSDK_OFFSET(0x9321060)
#define SYSTEM_IO_FILESTREAM_SET_POSITION_OFFSET UNITYSDK_OFFSET(0x93211F0)
#define SYSTEM_IO_FILESTREAM_GET_SAFEFILEHANDLE_OFFSET UNITYSDK_OFFSET(0x9321290)
#define SYSTEM_IO_FILESTREAM_EXPOSEHANDLE_OFFSET UNITYSDK_OFFSET(0x9320B00)
#define SYSTEM_IO_FILESTREAM_READBYTE_OFFSET UNITYSDK_OFFSET(0x9321480)
#define SYSTEM_IO_FILESTREAM_WRITEBYTE_OFFSET UNITYSDK_OFFSET(0x9321740)
#define SYSTEM_IO_FILESTREAM_READ_OFFSET UNITYSDK_OFFSET(0x9321890)
#define SYSTEM_IO_FILESTREAM_READINTERNAL_OFFSET UNITYSDK_OFFSET(0x9321B40)
#define SYSTEM_IO_FILESTREAM_BEGINREAD_OFFSET UNITYSDK_OFFSET(0x9321D70)
#define SYSTEM_IO_FILESTREAM_ENDREAD_OFFSET UNITYSDK_OFFSET(0x9322200)
#define SYSTEM_IO_FILESTREAM_WRITE_OFFSET UNITYSDK_OFFSET(0x93223A0)
#define SYSTEM_IO_FILESTREAM_WRITEINTERNAL_OFFSET UNITYSDK_OFFSET(0x9322620)
#define SYSTEM_IO_FILESTREAM_BEGINWRITE_OFFSET UNITYSDK_OFFSET(0x93229F0)
#define SYSTEM_IO_FILESTREAM_ENDWRITE_OFFSET UNITYSDK_OFFSET(0x9322FC0)
#define SYSTEM_IO_FILESTREAM_SEEK_OFFSET UNITYSDK_OFFSET(0x9323130)
#define SYSTEM_IO_FILESTREAM_SETLENGTH_OFFSET UNITYSDK_OFFSET(0x93233C0)
#define SYSTEM_IO_FILESTREAM_FLUSH_OFFSET UNITYSDK_OFFSET(0x9323780)
#define SYSTEM_IO_FILESTREAM_FINALIZE_OFFSET UNITYSDK_OFFSET(0x9323800)
#define SYSTEM_IO_FILESTREAM_DISPOSE_OFFSET UNITYSDK_OFFSET(0x93238D0)
#define SYSTEM_IO_FILESTREAM_FLUSHASYNC_OFFSET UNITYSDK_OFFSET(0x9323D30)
#define SYSTEM_IO_FILESTREAM_READASYNC_OFFSET UNITYSDK_OFFSET(0x9323DC0)
#define SYSTEM_IO_FILESTREAM_WRITEASYNC_OFFSET UNITYSDK_OFFSET(0x9323DF0)
#define SYSTEM_IO_FILESTREAM_READSEGMENT_OFFSET UNITYSDK_OFFSET(0x9321CD0)
#define SYSTEM_IO_FILESTREAM_WRITESEGMENT_OFFSET UNITYSDK_OFFSET(0x9322990)
#define SYSTEM_IO_FILESTREAM_FLUSHBUFFER_OFFSET UNITYSDK_OFFSET(0x9321310)
#define SYSTEM_IO_FILESTREAM_FLUSHBUFFERIFDIRTY_OFFSET UNITYSDK_OFFSET(0x9320ED0)
#define SYSTEM_IO_FILESTREAM_REFILLBUFFER_OFFSET UNITYSDK_OFFSET(0x9321710)
#define SYSTEM_IO_FILESTREAM_READDATA_OFFSET UNITYSDK_OFFSET(0x9321600)
#define SYSTEM_IO_FILESTREAM_INITBUFFER_OFFSET UNITYSDK_OFFSET(0x93207B0)
#define SYSTEM_IO_FILESTREAM_GETSECUREFILENAME_OFFSET UNITYSDK_OFFSET(0x931FEA0)
#define SYSTEM_IO_FILESTREAM_GETSECUREFILENAME_OFFSET UNITYSDK_OFFSET(0x931F8F0)
#define SYSTEM_IO_FILESTREAM_.CCTOR_OFFSET UNITYSDK_OFFSET(0x93240E0)

namespace System::IO
{
	inline static constexpr unsigned int FileStream_TypeDefinitionIndex = 25296;

	class FileStream : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* buf_recycle; // 0x0
		::System::Object* buf_recycle_lock; // 0x8
		::Il2CppArray<::System::Object*>* buf; // 0x28
		::System::String* name; // 0x30
		::Microsoft::Win32::SafeHandles::SafeFileHandle* safeHandle; // 0x38
		::System::Boolean isExposed; // 0x40
		::System::Int64 append_startpos; // 0x48
		::System::IO::FileAccess* access; // 0x50
		::System::Boolean owner; // 0x54
		::System::Boolean async; // 0x55
		::System::Boolean canseek; // 0x56
		::System::Boolean anonymous; // 0x57
		::System::Boolean buf_dirty; // 0x58
		::System::Int32 buf_size; // 0x5C
		::System::Int32 buf_length; // 0x60
		::System::Int32 buf_offset; // 0x64
		::System::Int64 buf_start; // 0x68

		::System::Void .ctor(::System::Int32 arg, ::System::IO::FileAccess* arg, ::System::Boolean arg, ::System::Int32 arg, ::System::Boolean arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Int32, ::System::IO::FileAccess*, ::System::Boolean, ::System::Int32, ::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILESTREAM_.CTOR_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void .ctor(::System::String* str, ::System::IO::FileMode* arg)
		{
			((::System::Void(*)(::System::String*, ::System::IO::FileMode*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILESTREAM_.CTOR_OFFSET))(str, arg, nullptr);
		}

		::System::Void .ctor(::System::String* str, ::System::IO::FileMode* arg, ::System::IO::FileAccess* arg)
		{
			((::System::Void(*)(::System::String*, ::System::IO::FileMode*, ::System::IO::FileAccess*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILESTREAM_.CTOR_OFFSET))(str, arg, arg, nullptr);
		}

		::System::Void .ctor(::System::String* str, ::System::IO::FileMode* arg, ::System::IO::FileAccess* arg, ::System::IO::FileShare* arg)
		{
			((::System::Void(*)(::System::String*, ::System::IO::FileMode*, ::System::IO::FileAccess*, ::System::IO::FileShare*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILESTREAM_.CTOR_OFFSET))(str, arg, arg, arg, nullptr);
		}

		::System::Void .ctor(::System::String* str, ::System::IO::FileMode* arg, ::System::IO::FileAccess* arg, ::System::IO::FileShare* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::String*, ::System::IO::FileMode*, ::System::IO::FileAccess*, ::System::IO::FileShare*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILESTREAM_.CTOR_OFFSET))(str, arg, arg, arg, arg, nullptr);
		}

		::System::Void .ctor(::System::String* str, ::System::IO::FileMode* arg, ::System::IO::FileAccess* arg, ::System::IO::FileShare* arg, ::System::Int32 arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::String*, ::System::IO::FileMode*, ::System::IO::FileAccess*, ::System::IO::FileShare*, ::System::Int32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILESTREAM_.CTOR_OFFSET))(str, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void .ctor(::System::String* str, ::System::IO::FileMode* arg, ::System::IO::FileAccess* arg, ::System::IO::FileShare* arg, ::System::Int32 arg, ::System::IO::FileOptions* arg)
		{
			((::System::Void(*)(::System::String*, ::System::IO::FileMode*, ::System::IO::FileAccess*, ::System::IO::FileShare*, ::System::Int32, ::System::IO::FileOptions*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILESTREAM_.CTOR_OFFSET))(str, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void .ctor(::System::String* str, ::System::IO::FileMode* arg, ::System::IO::FileAccess* arg, ::System::IO::FileShare* arg, ::System::Int32 arg, ::System::Boolean arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::String*, ::System::IO::FileMode*, ::System::IO::FileAccess*, ::System::IO::FileShare*, ::System::Int32, ::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILESTREAM_.CTOR_OFFSET))(str, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void .ctor(::System::String* str, ::System::IO::FileMode* arg, ::System::IO::FileAccess* arg, ::System::IO::FileShare* arg, ::System::Int32 arg, ::System::Boolean arg, ::System::IO::FileOptions* arg)
		{
			((::System::Void(*)(::System::String*, ::System::IO::FileMode*, ::System::IO::FileAccess*, ::System::IO::FileShare*, ::System::Int32, ::System::Boolean, ::System::IO::FileOptions*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILESTREAM_.CTOR_OFFSET))(str, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void Init(::Microsoft::Win32::SafeHandles::SafeFileHandle* arg, ::System::IO::FileAccess* arg, ::System::Boolean arg, ::System::Int32 arg, ::System::Boolean arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::Microsoft::Win32::SafeHandles::SafeFileHandle*, ::System::IO::FileAccess*, ::System::Boolean, ::System::Int32, ::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILESTREAM_INIT_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Boolean get_CanRead()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILESTREAM_GET_CANREAD_OFFSET))(nullptr);
		}

		::System::Boolean get_CanWrite()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILESTREAM_GET_CANWRITE_OFFSET))(nullptr);
		}

		::System::Boolean get_CanSeek()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILESTREAM_GET_CANSEEK_OFFSET))(nullptr);
		}

		::System::String* get_Name()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILESTREAM_GET_NAME_OFFSET))(nullptr);
		}

		::System::Int64 get_Length()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILESTREAM_GET_LENGTH_OFFSET))(nullptr);
		}

		::System::Int64 get_Position()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILESTREAM_GET_POSITION_OFFSET))(nullptr);
		}

		::System::Void set_Position(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILESTREAM_SET_POSITION_OFFSET))(arg, nullptr);
		}

		::Microsoft::Win32::SafeHandles::SafeFileHandle* get_SafeFileHandle()
		{
			return (return (::Microsoft::Win32::SafeHandles::SafeFileHandle*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILESTREAM_GET_SAFEFILEHANDLE_OFFSET))(nullptr);
		}

		::System::Void ExposeHandle()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILESTREAM_EXPOSEHANDLE_OFFSET))(nullptr);
		}

		::System::Int32 ReadByte()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILESTREAM_READBYTE_OFFSET))(nullptr);
		}

		::System::Void WriteByte(::System::Byte arg)
		{
			((::System::Void(*)(::System::Byte, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILESTREAM_WRITEBYTE_OFFSET))(arg, nullptr);
		}

		::System::Int32 Read(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILESTREAM_READ_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Int32 ReadInternal(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILESTREAM_READINTERNAL_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::IAsyncResult* BeginRead(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg, ::System::AsyncCallback* arg, ::System::Object* arg)
		{
			return (return (::System::IAsyncResult*(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::System::AsyncCallback*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILESTREAM_BEGINREAD_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Int32 EndRead(::System::IAsyncResult* arg)
		{
			return (return (::System::Int32(*)(::System::IAsyncResult*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILESTREAM_ENDREAD_OFFSET))(arg, nullptr);
		}

		::System::Void Write(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILESTREAM_WRITE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void WriteInternal(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILESTREAM_WRITEINTERNAL_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::IAsyncResult* BeginWrite(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg, ::System::AsyncCallback* arg, ::System::Object* arg)
		{
			return (return (::System::IAsyncResult*(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::System::AsyncCallback*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILESTREAM_BEGINWRITE_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void EndWrite(::System::IAsyncResult* arg)
		{
			((::System::Void(*)(::System::IAsyncResult*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILESTREAM_ENDWRITE_OFFSET))(arg, nullptr);
		}

		::System::Int64 Seek(::System::Int64 arg, ::System::IO::SeekOrigin* arg)
		{
			return (return (::System::Int64(*)(::System::Int64, ::System::IO::SeekOrigin*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILESTREAM_SEEK_OFFSET))(arg, arg, nullptr);
		}

		::System::Void SetLength(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILESTREAM_SETLENGTH_OFFSET))(arg, nullptr);
		}

		::System::Void Flush()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILESTREAM_FLUSH_OFFSET))(nullptr);
		}

		::System::Void Finalize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILESTREAM_FINALIZE_OFFSET))(nullptr);
		}

		::System::Void Dispose(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILESTREAM_DISPOSE_OFFSET))(arg, nullptr);
		}

		::System::Threading::Tasks::Task* FlushAsync(::System::Threading::CancellationToken* arg)
		{
			return (return (::System::Threading::Tasks::Task*(*)(::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILESTREAM_FLUSHASYNC_OFFSET))(arg, nullptr);
		}

		Il2CppObject* ReadAsync(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Threading::CancellationToken* arg)
		{
			return (return (Il2CppObject*(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILESTREAM_READASYNC_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Threading::Tasks::Task* WriteAsync(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Threading::CancellationToken* arg)
		{
			return (return (::System::Threading::Tasks::Task*(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILESTREAM_WRITEASYNC_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Int32 ReadSegment(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILESTREAM_READSEGMENT_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Int32 WriteSegment(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILESTREAM_WRITESEGMENT_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void FlushBuffer()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILESTREAM_FLUSHBUFFER_OFFSET))(nullptr);
		}

		::System::Void FlushBufferIfDirty()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILESTREAM_FLUSHBUFFERIFDIRTY_OFFSET))(nullptr);
		}

		::System::Void RefillBuffer()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILESTREAM_REFILLBUFFER_OFFSET))(nullptr);
		}

		::System::Int32 ReadData(::System::Runtime::InteropServices::SafeHandle* arg, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Runtime::InteropServices::SafeHandle*, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILESTREAM_READDATA_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void InitBuffer(::System::Int32 arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILESTREAM_INITBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::String* GetSecureFileName(::System::String* str)
		{
			return (return (::System::String*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILESTREAM_GETSECUREFILENAME_OFFSET))(str, nullptr);
		}

		::System::String* GetSecureFileName(::System::String* str, ::System::Boolean arg)
		{
			return (return (::System::String*(*)(::System::String*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILESTREAM_GETSECUREFILENAME_OFFSET))(str, arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILESTREAM_.CCTOR_OFFSET))(nullptr);
		}

	};
}

