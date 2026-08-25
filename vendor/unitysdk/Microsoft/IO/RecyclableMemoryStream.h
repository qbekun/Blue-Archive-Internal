#pragma once
#include "../../unitysdk.h"

namespace Microsoft::IO { class RecyclableMemoryStreamManager; }

#define MICROSOFT_IO_RECYCLABLEMEMORYSTREAM_GET_ID_OFFSET UNITYSDK_OFFSET(0x90E8AA0)
#define MICROSOFT_IO_RECYCLABLEMEMORYSTREAM_GET_TAG_OFFSET UNITYSDK_OFFSET(0x90E8AD0)
#define MICROSOFT_IO_RECYCLABLEMEMORYSTREAM_GET_MEMORYMANAGER_OFFSET UNITYSDK_OFFSET(0x90E8AF0)
#define MICROSOFT_IO_RECYCLABLEMEMORYSTREAM_GET_ALLOCATIONSTACK_OFFSET UNITYSDK_OFFSET(0x90E8B10)
#define MICROSOFT_IO_RECYCLABLEMEMORYSTREAM_GET_DISPOSESTACK_OFFSET UNITYSDK_OFFSET(0x90E8B20)
#define MICROSOFT_IO_RECYCLABLEMEMORYSTREAM_SET_DISPOSESTACK_OFFSET UNITYSDK_OFFSET(0x90E8B30)
#define MICROSOFT_IO_RECYCLABLEMEMORYSTREAM_.CTOR_OFFSET UNITYSDK_OFFSET(0x90E8970)
#define MICROSOFT_IO_RECYCLABLEMEMORYSTREAM_.CTOR_OFFSET UNITYSDK_OFFSET(0x90E8B50)
#define MICROSOFT_IO_RECYCLABLEMEMORYSTREAM_FINALIZE_OFFSET UNITYSDK_OFFSET(0x90E9110)
#define MICROSOFT_IO_RECYCLABLEMEMORYSTREAM_DISPOSE_OFFSET UNITYSDK_OFFSET(0x90E91E0)
#define MICROSOFT_IO_RECYCLABLEMEMORYSTREAM_CLOSE_OFFSET UNITYSDK_OFFSET(0x90E96F0)
#define MICROSOFT_IO_RECYCLABLEMEMORYSTREAM_GET_CAPACITY_OFFSET UNITYSDK_OFFSET(0x90E9710)
#define MICROSOFT_IO_RECYCLABLEMEMORYSTREAM_SET_CAPACITY_OFFSET UNITYSDK_OFFSET(0x90E97F0)
#define MICROSOFT_IO_RECYCLABLEMEMORYSTREAM_GET_CAPACITY64_OFFSET UNITYSDK_OFFSET(0x90E9830)
#define MICROSOFT_IO_RECYCLABLEMEMORYSTREAM_SET_CAPACITY64_OFFSET UNITYSDK_OFFSET(0x90E9810)
#define MICROSOFT_IO_RECYCLABLEMEMORYSTREAM_GET_LENGTH_OFFSET UNITYSDK_OFFSET(0x90E98B0)
#define MICROSOFT_IO_RECYCLABLEMEMORYSTREAM_GET_POSITION_OFFSET UNITYSDK_OFFSET(0x90E98D0)
#define MICROSOFT_IO_RECYCLABLEMEMORYSTREAM_SET_POSITION_OFFSET UNITYSDK_OFFSET(0x90E98F0)
#define MICROSOFT_IO_RECYCLABLEMEMORYSTREAM_GET_CANREAD_OFFSET UNITYSDK_OFFSET(0x90E9A20)
#define MICROSOFT_IO_RECYCLABLEMEMORYSTREAM_GET_CANSEEK_OFFSET UNITYSDK_OFFSET(0x90E9A30)
#define MICROSOFT_IO_RECYCLABLEMEMORYSTREAM_GET_CANTIMEOUT_OFFSET UNITYSDK_OFFSET(0x90E9A40)
#define MICROSOFT_IO_RECYCLABLEMEMORYSTREAM_GET_CANWRITE_OFFSET UNITYSDK_OFFSET(0x90E9A50)
#define MICROSOFT_IO_RECYCLABLEMEMORYSTREAM_GETBUFFER_OFFSET UNITYSDK_OFFSET(0x90E9A60)
#define MICROSOFT_IO_RECYCLABLEMEMORYSTREAM_COPYTO_OFFSET UNITYSDK_OFFSET(0x90E9EB0)
#define MICROSOFT_IO_RECYCLABLEMEMORYSTREAM_COPYTOASYNC_OFFSET UNITYSDK_OFFSET(0x90EA1A0)
#define MICROSOFT_IO_RECYCLABLEMEMORYSTREAM_ADVANCE_OFFSET UNITYSDK_OFFSET(0x90EA5C0)
#define MICROSOFT_IO_RECYCLABLEMEMORYSTREAM_RETURNTEMPBUFFER_OFFSET UNITYSDK_OFFSET(0x90EA8D0)
#define MICROSOFT_IO_RECYCLABLEMEMORYSTREAM_GETMEMORY_OFFSET UNITYSDK_OFFSET(0x90EA940)
#define MICROSOFT_IO_RECYCLABLEMEMORYSTREAM_GETSPAN_OFFSET UNITYSDK_OFFSET(0x90EACE0)
#define MICROSOFT_IO_RECYCLABLEMEMORYSTREAM_GETWRITABLEBUFFER_OFFSET UNITYSDK_OFFSET(0x90EA9B0)
#define MICROSOFT_IO_RECYCLABLEMEMORYSTREAM_TRYGETBUFFER_OFFSET UNITYSDK_OFFSET(0x90EAD50)
#define MICROSOFT_IO_RECYCLABLEMEMORYSTREAM_TOARRAY_OFFSET UNITYSDK_OFFSET(0x90EAFD0)
#define MICROSOFT_IO_RECYCLABLEMEMORYSTREAM_READ_OFFSET UNITYSDK_OFFSET(0x90EB140)
#define MICROSOFT_IO_RECYCLABLEMEMORYSTREAM_SAFEREAD_OFFSET UNITYSDK_OFFSET(0x90EB160)
#define MICROSOFT_IO_RECYCLABLEMEMORYSTREAM_READ_OFFSET UNITYSDK_OFFSET(0x90EB2D0)
#define MICROSOFT_IO_RECYCLABLEMEMORYSTREAM_SAFEREAD_OFFSET UNITYSDK_OFFSET(0x90EB320)
#define MICROSOFT_IO_RECYCLABLEMEMORYSTREAM_WRITE_OFFSET UNITYSDK_OFFSET(0x90EB7A0)
#define MICROSOFT_IO_RECYCLABLEMEMORYSTREAM_WRITE_OFFSET UNITYSDK_OFFSET(0x90EBBA0)
#define MICROSOFT_IO_RECYCLABLEMEMORYSTREAM_TOSTRING_OFFSET UNITYSDK_OFFSET(0x90EC040)
#define MICROSOFT_IO_RECYCLABLEMEMORYSTREAM_WRITEBYTE_OFFSET UNITYSDK_OFFSET(0x90EC160)
#define MICROSOFT_IO_RECYCLABLEMEMORYSTREAM_READBYTE_OFFSET UNITYSDK_OFFSET(0x90EC2E0)
#define MICROSOFT_IO_RECYCLABLEMEMORYSTREAM_SAFEREADBYTE_OFFSET UNITYSDK_OFFSET(0x90EC2F0)
#define MICROSOFT_IO_RECYCLABLEMEMORYSTREAM_SETLENGTH_OFFSET UNITYSDK_OFFSET(0x90EC430)
#define MICROSOFT_IO_RECYCLABLEMEMORYSTREAM_SEEK_OFFSET UNITYSDK_OFFSET(0x90EC4E0)
#define MICROSOFT_IO_RECYCLABLEMEMORYSTREAM_WRITETO_OFFSET UNITYSDK_OFFSET(0x90EC5D0)
#define MICROSOFT_IO_RECYCLABLEMEMORYSTREAM_WRITETO_OFFSET UNITYSDK_OFFSET(0x90E9ED0)
#define MICROSOFT_IO_RECYCLABLEMEMORYSTREAM_GET_DISPOSED_OFFSET UNITYSDK_OFFSET(0x90EC5F0)
#define MICROSOFT_IO_RECYCLABLEMEMORYSTREAM_CHECKDISPOSED_OFFSET UNITYSDK_OFFSET(0x90EC600)
#define MICROSOFT_IO_RECYCLABLEMEMORYSTREAM_THROWDISPOSEDEXCEPTION_OFFSET UNITYSDK_OFFSET(0x90EC620)
#define MICROSOFT_IO_RECYCLABLEMEMORYSTREAM_INTERNALREAD_OFFSET UNITYSDK_OFFSET(0x90E9C40)
#define MICROSOFT_IO_RECYCLABLEMEMORYSTREAM_INTERNALREAD_OFFSET UNITYSDK_OFFSET(0x90EB360)
#define MICROSOFT_IO_RECYCLABLEMEMORYSTREAM_GETBLOCKANDRELATIVEOFFSET_OFFSET UNITYSDK_OFFSET(0x90EC6C0)
#define MICROSOFT_IO_RECYCLABLEMEMORYSTREAM_ENSURECAPACITY_OFFSET UNITYSDK_OFFSET(0x90E8D80)
#define MICROSOFT_IO_RECYCLABLEMEMORYSTREAM_RELEASELARGEBUFFER_OFFSET UNITYSDK_OFFSET(0x90EC760)
#define MICROSOFT_IO_RECYCLABLEMEMORYSTREAM_ASSERTLENGTHISSMALL_OFFSET UNITYSDK_OFFSET(0x90EC8C0)
#define MICROSOFT_IO_RECYCLABLEMEMORYSTREAM_.CCTOR_OFFSET UNITYSDK_OFFSET(0x90EC8D0)
#define MICROSOFT_IO_RECYCLABLEMEMORYSTREAM__COPYTOASYNC_G__COPYTOASYNCIMPL|57_0_OFFSET UNITYSDK_OFFSET(0x90EA480)

namespace Microsoft::IO
{
	inline static constexpr unsigned int RecyclableMemoryStream_TypeDefinitionIndex = 37224;

	class RecyclableMemoryStream : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* emptyArray; // 0x0
		Il2CppObject* blocks; // 0x50
		::System::Guid* id; // 0x58
		::Microsoft::IO::RecyclableMemoryStreamManager* memoryManager; // 0x68
		::System::String* tag; // 0x70
		::System::Int64 creationTimestamp; // 0x78
		Il2CppObject* dirtyBuffers; // 0x80
		::System::Boolean disposed; // 0x88
		::Il2CppArray<::System::Object*>* largeBuffer; // 0x90
		::System::String* _AllocationStack_k__BackingField; // 0x98
		::System::String* _DisposeStack_k__BackingField; // 0xA0
		::System::Int64 length; // 0xA8
		::System::Int64 position; // 0xB0
		::Il2CppArray<::System::Object*>* bufferWriterTempBuffer; // 0xB8

		::System::Guid* get_Id()
		{
			return (return (::System::Guid*(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_IO_RECYCLABLEMEMORYSTREAM_GET_ID_OFFSET))(nullptr);
		}

		::System::String* get_Tag()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_IO_RECYCLABLEMEMORYSTREAM_GET_TAG_OFFSET))(nullptr);
		}

		::Microsoft::IO::RecyclableMemoryStreamManager* get_MemoryManager()
		{
			return (return (::Microsoft::IO::RecyclableMemoryStreamManager*(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_IO_RECYCLABLEMEMORYSTREAM_GET_MEMORYMANAGER_OFFSET))(nullptr);
		}

		::System::String* get_AllocationStack()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_IO_RECYCLABLEMEMORYSTREAM_GET_ALLOCATIONSTACK_OFFSET))(nullptr);
		}

		::System::String* get_DisposeStack()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_IO_RECYCLABLEMEMORYSTREAM_GET_DISPOSESTACK_OFFSET))(nullptr);
		}

		::System::Void set_DisposeStack(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_IO_RECYCLABLEMEMORYSTREAM_SET_DISPOSESTACK_OFFSET))(str, nullptr);
		}

		::System::Void .ctor(::Microsoft::IO::RecyclableMemoryStreamManager* arg)
		{
			((::System::Void(*)(::Microsoft::IO::RecyclableMemoryStreamManager*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_IO_RECYCLABLEMEMORYSTREAM_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::Microsoft::IO::RecyclableMemoryStreamManager* arg, ::System::Guid* arg, ::System::String* str, ::System::Int64 arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Microsoft::IO::RecyclableMemoryStreamManager*, ::System::Guid*, ::System::String*, ::System::Int64, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_IO_RECYCLABLEMEMORYSTREAM_.CTOR_OFFSET))(arg, arg, str, arg, arg, nullptr);
		}

		::System::Void Finalize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_IO_RECYCLABLEMEMORYSTREAM_FINALIZE_OFFSET))(nullptr);
		}

		::System::Void Dispose(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_IO_RECYCLABLEMEMORYSTREAM_DISPOSE_OFFSET))(arg, nullptr);
		}

		::System::Void Close()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_IO_RECYCLABLEMEMORYSTREAM_CLOSE_OFFSET))(nullptr);
		}

		::System::Int32 get_Capacity()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_IO_RECYCLABLEMEMORYSTREAM_GET_CAPACITY_OFFSET))(nullptr);
		}

		::System::Void set_Capacity(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_IO_RECYCLABLEMEMORYSTREAM_SET_CAPACITY_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_Capacity64()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_IO_RECYCLABLEMEMORYSTREAM_GET_CAPACITY64_OFFSET))(nullptr);
		}

		::System::Void set_Capacity64(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_IO_RECYCLABLEMEMORYSTREAM_SET_CAPACITY64_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_Length()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_IO_RECYCLABLEMEMORYSTREAM_GET_LENGTH_OFFSET))(nullptr);
		}

		::System::Int64 get_Position()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_IO_RECYCLABLEMEMORYSTREAM_GET_POSITION_OFFSET))(nullptr);
		}

		::System::Void set_Position(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_IO_RECYCLABLEMEMORYSTREAM_SET_POSITION_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_CanRead()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_IO_RECYCLABLEMEMORYSTREAM_GET_CANREAD_OFFSET))(nullptr);
		}

		::System::Boolean get_CanSeek()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_IO_RECYCLABLEMEMORYSTREAM_GET_CANSEEK_OFFSET))(nullptr);
		}

		::System::Boolean get_CanTimeout()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_IO_RECYCLABLEMEMORYSTREAM_GET_CANTIMEOUT_OFFSET))(nullptr);
		}

		::System::Boolean get_CanWrite()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_IO_RECYCLABLEMEMORYSTREAM_GET_CANWRITE_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* GetBuffer()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_IO_RECYCLABLEMEMORYSTREAM_GETBUFFER_OFFSET))(nullptr);
		}

		::System::Void CopyTo(::System::IO::Stream* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::IO::Stream*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_IO_RECYCLABLEMEMORYSTREAM_COPYTO_OFFSET))(arg, arg, nullptr);
		}

		::System::Threading::Tasks::Task* CopyToAsync(::System::IO::Stream* arg, ::System::Int32 arg, ::System::Threading::CancellationToken* arg)
		{
			return (return (::System::Threading::Tasks::Task*(*)(::System::IO::Stream*, ::System::Int32, ::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_IO_RECYCLABLEMEMORYSTREAM_COPYTOASYNC_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void Advance(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_IO_RECYCLABLEMEMORYSTREAM_ADVANCE_OFFSET))(arg, nullptr);
		}

		::System::Void ReturnTempBuffer(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_IO_RECYCLABLEMEMORYSTREAM_RETURNTEMPBUFFER_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetMemory(::System::Int32 arg)
		{
			return (return (Il2CppObject*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_IO_RECYCLABLEMEMORYSTREAM_GETMEMORY_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetSpan(::System::Int32 arg)
		{
			return (return (Il2CppObject*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_IO_RECYCLABLEMEMORYSTREAM_GETSPAN_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetWritableBuffer(::System::Int32 arg)
		{
			return (return (Il2CppObject*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_IO_RECYCLABLEMEMORYSTREAM_GETWRITABLEBUFFER_OFFSET))(arg, nullptr);
		}

		::System::Boolean TryGetBuffer(Il2CppObject&* arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_IO_RECYCLABLEMEMORYSTREAM_TRYGETBUFFER_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* ToArray()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_IO_RECYCLABLEMEMORYSTREAM_TOARRAY_OFFSET))(nullptr);
		}

		::System::Int32 Read(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_IO_RECYCLABLEMEMORYSTREAM_READ_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Int32 SafeRead(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg, int64_t&* arg)
		{
			return (return (::System::Int32(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, int64_t&*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_IO_RECYCLABLEMEMORYSTREAM_SAFEREAD_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Int32 Read(Il2CppObject* arg)
		{
			return (return (::System::Int32(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_IO_RECYCLABLEMEMORYSTREAM_READ_OFFSET))(arg, nullptr);
		}

		::System::Int32 SafeRead(Il2CppObject* arg, int64_t&* arg)
		{
			return (return (::System::Int32(*)(Il2CppObject*, int64_t&*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_IO_RECYCLABLEMEMORYSTREAM_SAFEREAD_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Write(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_IO_RECYCLABLEMEMORYSTREAM_WRITE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void Write(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_IO_RECYCLABLEMEMORYSTREAM_WRITE_OFFSET))(arg, nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_IO_RECYCLABLEMEMORYSTREAM_TOSTRING_OFFSET))(nullptr);
		}

		::System::Void WriteByte(::System::Byte arg)
		{
			((::System::Void(*)(::System::Byte, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_IO_RECYCLABLEMEMORYSTREAM_WRITEBYTE_OFFSET))(arg, nullptr);
		}

		::System::Int32 ReadByte()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_IO_RECYCLABLEMEMORYSTREAM_READBYTE_OFFSET))(nullptr);
		}

		::System::Int32 SafeReadByte(int64_t&* arg)
		{
			return (return (::System::Int32(*)(int64_t&*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_IO_RECYCLABLEMEMORYSTREAM_SAFEREADBYTE_OFFSET))(arg, nullptr);
		}

		::System::Void SetLength(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_IO_RECYCLABLEMEMORYSTREAM_SETLENGTH_OFFSET))(arg, nullptr);
		}

		::System::Int64 Seek(::System::Int64 arg, ::System::IO::SeekOrigin* arg)
		{
			return (return (::System::Int64(*)(::System::Int64, ::System::IO::SeekOrigin*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_IO_RECYCLABLEMEMORYSTREAM_SEEK_OFFSET))(arg, arg, nullptr);
		}

		::System::Void WriteTo(::System::IO::Stream* arg)
		{
			((::System::Void(*)(::System::IO::Stream*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_IO_RECYCLABLEMEMORYSTREAM_WRITETO_OFFSET))(arg, nullptr);
		}

		::System::Void WriteTo(::System::IO::Stream* arg, ::System::Int64 arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::System::IO::Stream*, ::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_IO_RECYCLABLEMEMORYSTREAM_WRITETO_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean get_Disposed()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_IO_RECYCLABLEMEMORYSTREAM_GET_DISPOSED_OFFSET))(nullptr);
		}

		::System::Void CheckDisposed()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_IO_RECYCLABLEMEMORYSTREAM_CHECKDISPOSED_OFFSET))(nullptr);
		}

		::System::Void ThrowDisposedException()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_IO_RECYCLABLEMEMORYSTREAM_THROWDISPOSEDEXCEPTION_OFFSET))(nullptr);
		}

		::System::Int32 InternalRead(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int64 arg)
		{
			return (return (::System::Int32(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_IO_RECYCLABLEMEMORYSTREAM_INTERNALREAD_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Int32 InternalRead(Il2CppObject* arg, ::System::Int64 arg)
		{
			return (return (::System::Int32(*)(Il2CppObject*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_IO_RECYCLABLEMEMORYSTREAM_INTERNALREAD_OFFSET))(arg, arg, nullptr);
		}

		BlockAndOffset* GetBlockAndRelativeOffset(::System::Int64 arg)
		{
			return (return (BlockAndOffset*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_IO_RECYCLABLEMEMORYSTREAM_GETBLOCKANDRELATIVEOFFSET_OFFSET))(arg, nullptr);
		}

		::System::Void EnsureCapacity(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_IO_RECYCLABLEMEMORYSTREAM_ENSURECAPACITY_OFFSET))(arg, nullptr);
		}

		::System::Void ReleaseLargeBuffer()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_IO_RECYCLABLEMEMORYSTREAM_RELEASELARGEBUFFER_OFFSET))(nullptr);
		}

		::System::Void AssertLengthIsSmall()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_IO_RECYCLABLEMEMORYSTREAM_ASSERTLENGTHISSMALL_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_IO_RECYCLABLEMEMORYSTREAM_.CCTOR_OFFSET))(nullptr);
		}

		::System::Threading::Tasks::Task* _CopyToAsync_g__CopyToAsyncImpl|57_0(::System::IO::Stream* arg, BlockAndOffset* arg, ::System::Int64 arg, Il2CppObject* arg, ::System::Threading::CancellationToken* arg)
		{
			return (return (::System::Threading::Tasks::Task*(*)(::System::IO::Stream*, BlockAndOffset*, ::System::Int64, Il2CppObject*, ::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_IO_RECYCLABLEMEMORYSTREAM__COPYTOASYNC_G__COPYTOASYNCIMPL|57_0_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

	};
}

