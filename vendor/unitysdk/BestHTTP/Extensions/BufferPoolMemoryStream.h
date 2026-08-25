#pragma once
#include "../../unitysdk.h"

namespace BestHTTP::PlatformSupport::Memory { class BufferSegment; }

#define BESTHTTP_EXTENSIONS_BUFFERPOOLMEMORYSTREAM_.CTOR_OFFSET UNITYSDK_OFFSET(0x8B69E0)
#define BESTHTTP_EXTENSIONS_BUFFERPOOLMEMORYSTREAM_.CTOR_OFFSET UNITYSDK_OFFSET(0x8B7190)
#define BESTHTTP_EXTENSIONS_BUFFERPOOLMEMORYSTREAM_.CTOR_OFFSET UNITYSDK_OFFSET(0x8B72D0)
#define BESTHTTP_EXTENSIONS_BUFFERPOOLMEMORYSTREAM_.CTOR_OFFSET UNITYSDK_OFFSET(0x8B7520)
#define BESTHTTP_EXTENSIONS_BUFFERPOOLMEMORYSTREAM_.CTOR_OFFSET UNITYSDK_OFFSET(0x8B75F0)
#define BESTHTTP_EXTENSIONS_BUFFERPOOLMEMORYSTREAM_.CTOR_OFFSET UNITYSDK_OFFSET(0x8B7670)
#define BESTHTTP_EXTENSIONS_BUFFERPOOLMEMORYSTREAM_.CTOR_OFFSET UNITYSDK_OFFSET(0x8B7700)
#define BESTHTTP_EXTENSIONS_BUFFERPOOLMEMORYSTREAM_.CTOR_OFFSET UNITYSDK_OFFSET(0x8B77A0)
#define BESTHTTP_EXTENSIONS_BUFFERPOOLMEMORYSTREAM_.CTOR_OFFSET UNITYSDK_OFFSET(0x8B7850)
#define BESTHTTP_EXTENSIONS_BUFFERPOOLMEMORYSTREAM_INTERNALCONSTRUCTOR_OFFSET UNITYSDK_OFFSET(0x8B73A0)
#define BESTHTTP_EXTENSIONS_BUFFERPOOLMEMORYSTREAM_CHECKIFCLOSEDTHROWDISPOSED_OFFSET UNITYSDK_OFFSET(0x8B7910)
#define BESTHTTP_EXTENSIONS_BUFFERPOOLMEMORYSTREAM_GET_CANREAD_OFFSET UNITYSDK_OFFSET(0x8B7980)
#define BESTHTTP_EXTENSIONS_BUFFERPOOLMEMORYSTREAM_GET_CANSEEK_OFFSET UNITYSDK_OFFSET(0x8B7990)
#define BESTHTTP_EXTENSIONS_BUFFERPOOLMEMORYSTREAM_GET_CANWRITE_OFFSET UNITYSDK_OFFSET(0x8B79A0)
#define BESTHTTP_EXTENSIONS_BUFFERPOOLMEMORYSTREAM_GET_CAPACITY_OFFSET UNITYSDK_OFFSET(0x8B79B0)
#define BESTHTTP_EXTENSIONS_BUFFERPOOLMEMORYSTREAM_SET_CAPACITY_OFFSET UNITYSDK_OFFSET(0x8B7A20)
#define BESTHTTP_EXTENSIONS_BUFFERPOOLMEMORYSTREAM_GET_LENGTH_OFFSET UNITYSDK_OFFSET(0x8B7CA0)
#define BESTHTTP_EXTENSIONS_BUFFERPOOLMEMORYSTREAM_GET_POSITION_OFFSET UNITYSDK_OFFSET(0x8B7D10)
#define BESTHTTP_EXTENSIONS_BUFFERPOOLMEMORYSTREAM_SET_POSITION_OFFSET UNITYSDK_OFFSET(0x8B7D80)
#define BESTHTTP_EXTENSIONS_BUFFERPOOLMEMORYSTREAM_DISPOSE_OFFSET UNITYSDK_OFFSET(0x8B7E90)
#define BESTHTTP_EXTENSIONS_BUFFERPOOLMEMORYSTREAM_FLUSH_OFFSET UNITYSDK_OFFSET(0x8B7F10)
#define BESTHTTP_EXTENSIONS_BUFFERPOOLMEMORYSTREAM_GETBUFFER_OFFSET UNITYSDK_OFFSET(0x8B7F20)
#define BESTHTTP_EXTENSIONS_BUFFERPOOLMEMORYSTREAM_READ_OFFSET UNITYSDK_OFFSET(0x8B7F80)
#define BESTHTTP_EXTENSIONS_BUFFERPOOLMEMORYSTREAM_READBYTE_OFFSET UNITYSDK_OFFSET(0x8B8150)
#define BESTHTTP_EXTENSIONS_BUFFERPOOLMEMORYSTREAM_SEEK_OFFSET UNITYSDK_OFFSET(0x8B81F0)
#define BESTHTTP_EXTENSIONS_BUFFERPOOLMEMORYSTREAM_CALCULATENEWCAPACITY_OFFSET UNITYSDK_OFFSET(0x8B83C0)
#define BESTHTTP_EXTENSIONS_BUFFERPOOLMEMORYSTREAM_EXPAND_OFFSET UNITYSDK_OFFSET(0x8B8400)
#define BESTHTTP_EXTENSIONS_BUFFERPOOLMEMORYSTREAM_SETLENGTH_OFFSET UNITYSDK_OFFSET(0x8B8480)
#define BESTHTTP_EXTENSIONS_BUFFERPOOLMEMORYSTREAM_TOARRAY_OFFSET UNITYSDK_OFFSET(0x8B6B60)
#define BESTHTTP_EXTENSIONS_BUFFERPOOLMEMORYSTREAM_TOARRAY_OFFSET UNITYSDK_OFFSET(0x8B8670)
#define BESTHTTP_EXTENSIONS_BUFFERPOOLMEMORYSTREAM_TOBUFFERSEGMENT_OFFSET UNITYSDK_OFFSET(0x8B8730)
#define BESTHTTP_EXTENSIONS_BUFFERPOOLMEMORYSTREAM_WRITE_OFFSET UNITYSDK_OFFSET(0x8B8810)
#define BESTHTTP_EXTENSIONS_BUFFERPOOLMEMORYSTREAM_WRITEBYTE_OFFSET UNITYSDK_OFFSET(0x8B8A80)
#define BESTHTTP_EXTENSIONS_BUFFERPOOLMEMORYSTREAM_WRITETO_OFFSET UNITYSDK_OFFSET(0x8B8C00)

namespace BestHTTP::Extensions
{
	inline static constexpr unsigned int BufferPoolMemoryStream_TypeDefinitionIndex = 23340;

	class BufferPoolMemoryStream : public Il2CppObject
	{
	public:
		::System::Boolean canWrite; // 0x28
		::System::Boolean allowGetBuffer; // 0x29
		::System::Int32 capacity; // 0x2C
		::System::Int32 length; // 0x30
		::Il2CppArray<::System::Object*>* internalBuffer; // 0x38
		::System::Int32 initialIndex; // 0x40
		::System::Boolean expandable; // 0x44
		::System::Boolean streamClosed; // 0x45
		::System::Int32 position; // 0x48
		::System::Int32 dirty_bytes; // 0x4C
		::System::Boolean releaseInternalBuffer; // 0x50

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_EXTENSIONS_BUFFERPOOLMEMORYSTREAM_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_EXTENSIONS_BUFFERPOOLMEMORYSTREAM_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_EXTENSIONS_BUFFERPOOLMEMORYSTREAM_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::Il2CppArray<::System::Object*>* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_EXTENSIONS_BUFFERPOOLMEMORYSTREAM_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_EXTENSIONS_BUFFERPOOLMEMORYSTREAM_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void .ctor(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_EXTENSIONS_BUFFERPOOLMEMORYSTREAM_.CTOR_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void .ctor(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Boolean arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_EXTENSIONS_BUFFERPOOLMEMORYSTREAM_.CTOR_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void .ctor(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Boolean arg, ::System::Boolean arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_EXTENSIONS_BUFFERPOOLMEMORYSTREAM_.CTOR_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void .ctor(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Boolean arg, ::System::Boolean arg, ::System::Boolean arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_EXTENSIONS_BUFFERPOOLMEMORYSTREAM_.CTOR_OFFSET))(arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void InternalConstructor(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Boolean arg, ::System::Boolean arg, ::System::Boolean arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_EXTENSIONS_BUFFERPOOLMEMORYSTREAM_INTERNALCONSTRUCTOR_OFFSET))(arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void CheckIfClosedThrowDisposed()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_EXTENSIONS_BUFFERPOOLMEMORYSTREAM_CHECKIFCLOSEDTHROWDISPOSED_OFFSET))(nullptr);
		}

		::System::Boolean get_CanRead()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_EXTENSIONS_BUFFERPOOLMEMORYSTREAM_GET_CANREAD_OFFSET))(nullptr);
		}

		::System::Boolean get_CanSeek()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_EXTENSIONS_BUFFERPOOLMEMORYSTREAM_GET_CANSEEK_OFFSET))(nullptr);
		}

		::System::Boolean get_CanWrite()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_EXTENSIONS_BUFFERPOOLMEMORYSTREAM_GET_CANWRITE_OFFSET))(nullptr);
		}

		::System::Int32 get_Capacity()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_EXTENSIONS_BUFFERPOOLMEMORYSTREAM_GET_CAPACITY_OFFSET))(nullptr);
		}

		::System::Void set_Capacity(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_EXTENSIONS_BUFFERPOOLMEMORYSTREAM_SET_CAPACITY_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_Length()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_EXTENSIONS_BUFFERPOOLMEMORYSTREAM_GET_LENGTH_OFFSET))(nullptr);
		}

		::System::Int64 get_Position()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_EXTENSIONS_BUFFERPOOLMEMORYSTREAM_GET_POSITION_OFFSET))(nullptr);
		}

		::System::Void set_Position(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_EXTENSIONS_BUFFERPOOLMEMORYSTREAM_SET_POSITION_OFFSET))(arg, nullptr);
		}

		::System::Void Dispose(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_EXTENSIONS_BUFFERPOOLMEMORYSTREAM_DISPOSE_OFFSET))(arg, nullptr);
		}

		::System::Void Flush()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_EXTENSIONS_BUFFERPOOLMEMORYSTREAM_FLUSH_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* GetBuffer()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_EXTENSIONS_BUFFERPOOLMEMORYSTREAM_GETBUFFER_OFFSET))(nullptr);
		}

		::System::Int32 Read(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_EXTENSIONS_BUFFERPOOLMEMORYSTREAM_READ_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Int32 ReadByte()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_EXTENSIONS_BUFFERPOOLMEMORYSTREAM_READBYTE_OFFSET))(nullptr);
		}

		::System::Int64 Seek(::System::Int64 arg, ::System::IO::SeekOrigin* arg)
		{
			return (return (::System::Int64(*)(::System::Int64, ::System::IO::SeekOrigin*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_EXTENSIONS_BUFFERPOOLMEMORYSTREAM_SEEK_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 CalculateNewCapacity(::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_EXTENSIONS_BUFFERPOOLMEMORYSTREAM_CALCULATENEWCAPACITY_OFFSET))(arg, nullptr);
		}

		::System::Void Expand(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_EXTENSIONS_BUFFERPOOLMEMORYSTREAM_EXPAND_OFFSET))(arg, nullptr);
		}

		::System::Void SetLength(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_EXTENSIONS_BUFFERPOOLMEMORYSTREAM_SETLENGTH_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* ToArray()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_EXTENSIONS_BUFFERPOOLMEMORYSTREAM_TOARRAY_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* ToArray(::System::Boolean arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_EXTENSIONS_BUFFERPOOLMEMORYSTREAM_TOARRAY_OFFSET))(arg, nullptr);
		}

		::BestHTTP::PlatformSupport::Memory::BufferSegment* ToBufferSegment()
		{
			return (return (::BestHTTP::PlatformSupport::Memory::BufferSegment*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_EXTENSIONS_BUFFERPOOLMEMORYSTREAM_TOBUFFERSEGMENT_OFFSET))(nullptr);
		}

		::System::Void Write(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_EXTENSIONS_BUFFERPOOLMEMORYSTREAM_WRITE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void WriteByte(::System::Byte arg)
		{
			((::System::Void(*)(::System::Byte, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_EXTENSIONS_BUFFERPOOLMEMORYSTREAM_WRITEBYTE_OFFSET))(arg, nullptr);
		}

		::System::Void WriteTo(::System::IO::Stream* arg)
		{
			((::System::Void(*)(::System::IO::Stream*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_EXTENSIONS_BUFFERPOOLMEMORYSTREAM_WRITETO_OFFSET))(arg, nullptr);
		}

	};
}

