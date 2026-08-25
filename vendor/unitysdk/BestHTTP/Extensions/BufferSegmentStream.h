#pragma once
#include "../../unitysdk.h"

namespace BestHTTP::PlatformSupport::Memory { class BufferSegment; }

#define BESTHTTP_EXTENSIONS_BUFFERSEGMENTSTREAM_GET_CANREAD_OFFSET UNITYSDK_OFFSET(0x8B8CF0)
#define BESTHTTP_EXTENSIONS_BUFFERSEGMENTSTREAM_GET_CANSEEK_OFFSET UNITYSDK_OFFSET(0x8B8D00)
#define BESTHTTP_EXTENSIONS_BUFFERSEGMENTSTREAM_GET_CANWRITE_OFFSET UNITYSDK_OFFSET(0x8B8D10)
#define BESTHTTP_EXTENSIONS_BUFFERSEGMENTSTREAM_GET_LENGTH_OFFSET UNITYSDK_OFFSET(0x8B8D20)
#define BESTHTTP_EXTENSIONS_BUFFERSEGMENTSTREAM_GET_POSITION_OFFSET UNITYSDK_OFFSET(0x8B8D30)
#define BESTHTTP_EXTENSIONS_BUFFERSEGMENTSTREAM_SET_POSITION_OFFSET UNITYSDK_OFFSET(0x8B8D40)
#define BESTHTTP_EXTENSIONS_BUFFERSEGMENTSTREAM_READ_OFFSET UNITYSDK_OFFSET(0x8B8D50)
#define BESTHTTP_EXTENSIONS_BUFFERSEGMENTSTREAM_WRITE_OFFSET UNITYSDK_OFFSET(0x8B8F50)
#define BESTHTTP_EXTENSIONS_BUFFERSEGMENTSTREAM_WRITE_OFFSET UNITYSDK_OFFSET(0x8B8FA0)
#define BESTHTTP_EXTENSIONS_BUFFERSEGMENTSTREAM_RESET_OFFSET UNITYSDK_OFFSET(0x8B9070)
#define BESTHTTP_EXTENSIONS_BUFFERSEGMENTSTREAM_DISPOSE_OFFSET UNITYSDK_OFFSET(0x8B9170)
#define BESTHTTP_EXTENSIONS_BUFFERSEGMENTSTREAM_FLUSH_OFFSET UNITYSDK_OFFSET(0x8B9190)
#define BESTHTTP_EXTENSIONS_BUFFERSEGMENTSTREAM_SEEK_OFFSET UNITYSDK_OFFSET(0x8B91A0)
#define BESTHTTP_EXTENSIONS_BUFFERSEGMENTSTREAM_SETLENGTH_OFFSET UNITYSDK_OFFSET(0x8B91F0)
#define BESTHTTP_EXTENSIONS_BUFFERSEGMENTSTREAM_.CTOR_OFFSET UNITYSDK_OFFSET(0x8B9240)

namespace BestHTTP::Extensions
{
	inline static constexpr unsigned int BufferSegmentStream_TypeDefinitionIndex = 23341;

	class BufferSegmentStream : public Il2CppObject
	{
	public:
		::System::Int64 _length; // 0x28
		Il2CppObject* bufferList; // 0x30

		::System::Boolean get_CanRead()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_EXTENSIONS_BUFFERSEGMENTSTREAM_GET_CANREAD_OFFSET))(nullptr);
		}

		::System::Boolean get_CanSeek()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_EXTENSIONS_BUFFERSEGMENTSTREAM_GET_CANSEEK_OFFSET))(nullptr);
		}

		::System::Boolean get_CanWrite()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_EXTENSIONS_BUFFERSEGMENTSTREAM_GET_CANWRITE_OFFSET))(nullptr);
		}

		::System::Int64 get_Length()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_EXTENSIONS_BUFFERSEGMENTSTREAM_GET_LENGTH_OFFSET))(nullptr);
		}

		::System::Int64 get_Position()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_EXTENSIONS_BUFFERSEGMENTSTREAM_GET_POSITION_OFFSET))(nullptr);
		}

		::System::Void set_Position(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_EXTENSIONS_BUFFERSEGMENTSTREAM_SET_POSITION_OFFSET))(arg, nullptr);
		}

		::System::Int32 Read(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_EXTENSIONS_BUFFERSEGMENTSTREAM_READ_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void Write(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_EXTENSIONS_BUFFERSEGMENTSTREAM_WRITE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void Write(::BestHTTP::PlatformSupport::Memory::BufferSegment* arg)
		{
			((::System::Void(*)(::BestHTTP::PlatformSupport::Memory::BufferSegment*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_EXTENSIONS_BUFFERSEGMENTSTREAM_WRITE_OFFSET))(arg, nullptr);
		}

		::System::Void Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_EXTENSIONS_BUFFERSEGMENTSTREAM_RESET_OFFSET))(nullptr);
		}

		::System::Void Dispose(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_EXTENSIONS_BUFFERSEGMENTSTREAM_DISPOSE_OFFSET))(arg, nullptr);
		}

		::System::Void Flush()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_EXTENSIONS_BUFFERSEGMENTSTREAM_FLUSH_OFFSET))(nullptr);
		}

		::System::Int64 Seek(::System::Int64 arg, ::System::IO::SeekOrigin* arg)
		{
			return (return (::System::Int64(*)(::System::Int64, ::System::IO::SeekOrigin*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_EXTENSIONS_BUFFERSEGMENTSTREAM_SEEK_OFFSET))(arg, arg, nullptr);
		}

		::System::Void SetLength(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_EXTENSIONS_BUFFERSEGMENTSTREAM_SETLENGTH_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_EXTENSIONS_BUFFERSEGMENTSTREAM_.CTOR_OFFSET))(nullptr);
		}

	};
}

