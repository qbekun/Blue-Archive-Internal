#pragma once
#include "../../unitysdk.h"

#define SYSTEM_IO_MEMORYSTREAM_.CTOR_OFFSET UNITYSDK_OFFSET(0x92EE640)
#define SYSTEM_IO_MEMORYSTREAM_.CTOR_OFFSET UNITYSDK_OFFSET(0x92EE650)
#define SYSTEM_IO_MEMORYSTREAM_.CTOR_OFFSET UNITYSDK_OFFSET(0x92EE7E0)
#define SYSTEM_IO_MEMORYSTREAM_.CTOR_OFFSET UNITYSDK_OFFSET(0x92EE7F0)
#define SYSTEM_IO_MEMORYSTREAM_.CTOR_OFFSET UNITYSDK_OFFSET(0x92EE8E0)
#define SYSTEM_IO_MEMORYSTREAM_.CTOR_OFFSET UNITYSDK_OFFSET(0x92EEAF0)
#define SYSTEM_IO_MEMORYSTREAM_.CTOR_OFFSET UNITYSDK_OFFSET(0x92EE900)
#define SYSTEM_IO_MEMORYSTREAM_GET_CANREAD_OFFSET UNITYSDK_OFFSET(0x92EEB10)
#define SYSTEM_IO_MEMORYSTREAM_GET_CANSEEK_OFFSET UNITYSDK_OFFSET(0x92EEB20)
#define SYSTEM_IO_MEMORYSTREAM_GET_CANWRITE_OFFSET UNITYSDK_OFFSET(0x92EEB30)
#define SYSTEM_IO_MEMORYSTREAM_ENSURENOTCLOSED_OFFSET UNITYSDK_OFFSET(0x92EEB40)
#define SYSTEM_IO_MEMORYSTREAM_ENSUREWRITEABLE_OFFSET UNITYSDK_OFFSET(0x92EEB80)
#define SYSTEM_IO_MEMORYSTREAM_DISPOSE_OFFSET UNITYSDK_OFFSET(0x92EEBC0)
#define SYSTEM_IO_MEMORYSTREAM_ENSURECAPACITY_OFFSET UNITYSDK_OFFSET(0x92EECC0)
#define SYSTEM_IO_MEMORYSTREAM_FLUSH_OFFSET UNITYSDK_OFFSET(0x92EED80)
#define SYSTEM_IO_MEMORYSTREAM_FLUSHASYNC_OFFSET UNITYSDK_OFFSET(0x92EED90)
#define SYSTEM_IO_MEMORYSTREAM_GETBUFFER_OFFSET UNITYSDK_OFFSET(0x92EEF40)
#define SYSTEM_IO_MEMORYSTREAM_TRYGETBUFFER_OFFSET UNITYSDK_OFFSET(0x92EEFB0)
#define SYSTEM_IO_MEMORYSTREAM_INTERNALGETBUFFER_OFFSET UNITYSDK_OFFSET(0x92EF030)
#define SYSTEM_IO_MEMORYSTREAM_INTERNALGETPOSITION_OFFSET UNITYSDK_OFFSET(0x92EF040)
#define SYSTEM_IO_MEMORYSTREAM_INTERNALREADINT32_OFFSET UNITYSDK_OFFSET(0x92EF050)
#define SYSTEM_IO_MEMORYSTREAM_INTERNALEMULATEREAD_OFFSET UNITYSDK_OFFSET(0x92EF130)
#define SYSTEM_IO_MEMORYSTREAM_GET_CAPACITY_OFFSET UNITYSDK_OFFSET(0x92EF190)
#define SYSTEM_IO_MEMORYSTREAM_SET_CAPACITY_OFFSET UNITYSDK_OFFSET(0x92EF1D0)
#define SYSTEM_IO_MEMORYSTREAM_GET_LENGTH_OFFSET UNITYSDK_OFFSET(0x92EF370)
#define SYSTEM_IO_MEMORYSTREAM_GET_POSITION_OFFSET UNITYSDK_OFFSET(0x92EF3B0)
#define SYSTEM_IO_MEMORYSTREAM_SET_POSITION_OFFSET UNITYSDK_OFFSET(0x92EF3F0)
#define SYSTEM_IO_MEMORYSTREAM_READ_OFFSET UNITYSDK_OFFSET(0x92EF4D0)
#define SYSTEM_IO_MEMORYSTREAM_READ_OFFSET UNITYSDK_OFFSET(0x92EF710)
#define SYSTEM_IO_MEMORYSTREAM_READASYNC_OFFSET UNITYSDK_OFFSET(0x92EF8F0)
#define SYSTEM_IO_MEMORYSTREAM_READASYNC_OFFSET UNITYSDK_OFFSET(0x92EFCC0)
#define SYSTEM_IO_MEMORYSTREAM_READBYTE_OFFSET UNITYSDK_OFFSET(0x92F00A0)
#define SYSTEM_IO_MEMORYSTREAM_COPYTO_OFFSET UNITYSDK_OFFSET(0x92F0110)
#define SYSTEM_IO_MEMORYSTREAM_COPYTOASYNC_OFFSET UNITYSDK_OFFSET(0x92F04C0)
#define SYSTEM_IO_MEMORYSTREAM_SEEK_OFFSET UNITYSDK_OFFSET(0x92F0850)
#define SYSTEM_IO_MEMORYSTREAM_SETLENGTH_OFFSET UNITYSDK_OFFSET(0x92F09C0)
#define SYSTEM_IO_MEMORYSTREAM_TOARRAY_OFFSET UNITYSDK_OFFSET(0x92F0AD0)
#define SYSTEM_IO_MEMORYSTREAM_WRITE_OFFSET UNITYSDK_OFFSET(0x92F0BC0)
#define SYSTEM_IO_MEMORYSTREAM_WRITE_OFFSET UNITYSDK_OFFSET(0x92F0EB0)
#define SYSTEM_IO_MEMORYSTREAM_WRITEASYNC_OFFSET UNITYSDK_OFFSET(0x92F1130)
#define SYSTEM_IO_MEMORYSTREAM_WRITEASYNC_OFFSET UNITYSDK_OFFSET(0x92F14C0)
#define SYSTEM_IO_MEMORYSTREAM_WRITEBYTE_OFFSET UNITYSDK_OFFSET(0x92F1830)
#define SYSTEM_IO_MEMORYSTREAM_WRITETO_OFFSET UNITYSDK_OFFSET(0x92F1920)

namespace System::IO
{
	inline static constexpr unsigned int MemoryStream_TypeDefinitionIndex = 25232;

	class MemoryStream : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* _buffer; // 0x28
		::System::Int32 _origin; // 0x30
		::System::Int32 _position; // 0x34
		::System::Int32 _length; // 0x38
		::System::Int32 _capacity; // 0x3C
		::System::Boolean _expandable; // 0x40
		::System::Boolean _writable; // 0x41
		::System::Boolean _exposable; // 0x42
		::System::Boolean _isOpen; // 0x43
		Il2CppObject* _lastReadTask; // 0x48

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_MEMORYSTREAM_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_MEMORYSTREAM_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_MEMORYSTREAM_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::Il2CppArray<::System::Object*>* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_MEMORYSTREAM_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_MEMORYSTREAM_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void .ctor(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_MEMORYSTREAM_.CTOR_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void .ctor(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Boolean arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_MEMORYSTREAM_.CTOR_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Boolean get_CanRead()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_MEMORYSTREAM_GET_CANREAD_OFFSET))(nullptr);
		}

		::System::Boolean get_CanSeek()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_MEMORYSTREAM_GET_CANSEEK_OFFSET))(nullptr);
		}

		::System::Boolean get_CanWrite()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_MEMORYSTREAM_GET_CANWRITE_OFFSET))(nullptr);
		}

		::System::Void EnsureNotClosed()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_MEMORYSTREAM_ENSURENOTCLOSED_OFFSET))(nullptr);
		}

		::System::Void EnsureWriteable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_MEMORYSTREAM_ENSUREWRITEABLE_OFFSET))(nullptr);
		}

		::System::Void Dispose(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_MEMORYSTREAM_DISPOSE_OFFSET))(arg, nullptr);
		}

		::System::Boolean EnsureCapacity(::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_MEMORYSTREAM_ENSURECAPACITY_OFFSET))(arg, nullptr);
		}

		::System::Void Flush()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_MEMORYSTREAM_FLUSH_OFFSET))(nullptr);
		}

		::System::Threading::Tasks::Task* FlushAsync(::System::Threading::CancellationToken* arg)
		{
			return (return (::System::Threading::Tasks::Task*(*)(::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_MEMORYSTREAM_FLUSHASYNC_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* GetBuffer()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_MEMORYSTREAM_GETBUFFER_OFFSET))(nullptr);
		}

		::System::Boolean TryGetBuffer(Il2CppObject&* arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_MEMORYSTREAM_TRYGETBUFFER_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* InternalGetBuffer()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_MEMORYSTREAM_INTERNALGETBUFFER_OFFSET))(nullptr);
		}

		::System::Int32 InternalGetPosition()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_MEMORYSTREAM_INTERNALGETPOSITION_OFFSET))(nullptr);
		}

		::System::Int32 InternalReadInt32()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_MEMORYSTREAM_INTERNALREADINT32_OFFSET))(nullptr);
		}

		::System::Int32 InternalEmulateRead(::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_MEMORYSTREAM_INTERNALEMULATEREAD_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_Capacity()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_MEMORYSTREAM_GET_CAPACITY_OFFSET))(nullptr);
		}

		::System::Void set_Capacity(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_MEMORYSTREAM_SET_CAPACITY_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_Length()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_MEMORYSTREAM_GET_LENGTH_OFFSET))(nullptr);
		}

		::System::Int64 get_Position()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_MEMORYSTREAM_GET_POSITION_OFFSET))(nullptr);
		}

		::System::Void set_Position(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_MEMORYSTREAM_SET_POSITION_OFFSET))(arg, nullptr);
		}

		::System::Int32 Read(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_MEMORYSTREAM_READ_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Int32 Read(Il2CppObject* arg)
		{
			return (return (::System::Int32(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_MEMORYSTREAM_READ_OFFSET))(arg, nullptr);
		}

		Il2CppObject* ReadAsync(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Threading::CancellationToken* arg)
		{
			return (return (Il2CppObject*(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_MEMORYSTREAM_READASYNC_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		Il2CppObject* ReadAsync(Il2CppObject* arg, ::System::Threading::CancellationToken* arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_MEMORYSTREAM_READASYNC_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 ReadByte()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_MEMORYSTREAM_READBYTE_OFFSET))(nullptr);
		}

		::System::Void CopyTo(::System::IO::Stream* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::IO::Stream*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_MEMORYSTREAM_COPYTO_OFFSET))(arg, arg, nullptr);
		}

		::System::Threading::Tasks::Task* CopyToAsync(::System::IO::Stream* arg, ::System::Int32 arg, ::System::Threading::CancellationToken* arg)
		{
			return (return (::System::Threading::Tasks::Task*(*)(::System::IO::Stream*, ::System::Int32, ::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_MEMORYSTREAM_COPYTOASYNC_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Int64 Seek(::System::Int64 arg, ::System::IO::SeekOrigin* arg)
		{
			return (return (::System::Int64(*)(::System::Int64, ::System::IO::SeekOrigin*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_MEMORYSTREAM_SEEK_OFFSET))(arg, arg, nullptr);
		}

		::System::Void SetLength(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_MEMORYSTREAM_SETLENGTH_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* ToArray()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_MEMORYSTREAM_TOARRAY_OFFSET))(nullptr);
		}

		::System::Void Write(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_MEMORYSTREAM_WRITE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void Write(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_MEMORYSTREAM_WRITE_OFFSET))(arg, nullptr);
		}

		::System::Threading::Tasks::Task* WriteAsync(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Threading::CancellationToken* arg)
		{
			return (return (::System::Threading::Tasks::Task*(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_MEMORYSTREAM_WRITEASYNC_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Threading::Tasks::ValueTask* WriteAsync(Il2CppObject* arg, ::System::Threading::CancellationToken* arg)
		{
			return (return (::System::Threading::Tasks::ValueTask*(*)(Il2CppObject*, ::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_MEMORYSTREAM_WRITEASYNC_OFFSET))(arg, arg, nullptr);
		}

		::System::Void WriteByte(::System::Byte arg)
		{
			((::System::Void(*)(::System::Byte, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_MEMORYSTREAM_WRITEBYTE_OFFSET))(arg, nullptr);
		}

		::System::Void WriteTo(::System::IO::Stream* arg)
		{
			((::System::Void(*)(::System::IO::Stream*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_MEMORYSTREAM_WRITETO_OFFSET))(arg, nullptr);
		}

	};
}

