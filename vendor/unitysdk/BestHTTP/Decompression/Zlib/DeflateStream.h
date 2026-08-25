#pragma once
#include "../../../unitysdk.h"

namespace BestHTTP::Decompression::Zlib { class ZlibBaseStream; }
namespace BestHTTP::Decompression::Zlib { class CompressionMode; }
namespace BestHTTP::Decompression::Zlib { class CompressionLevel; }
namespace BestHTTP::Decompression::Zlib { class FlushType; }
namespace BestHTTP::Decompression::Zlib { class CompressionStrategy; }

#define BESTHTTP_DECOMPRESSION_ZLIB_DEFLATESTREAM_.CTOR_OFFSET UNITYSDK_OFFSET(0x8DF050)
#define BESTHTTP_DECOMPRESSION_ZLIB_DEFLATESTREAM_.CTOR_OFFSET UNITYSDK_OFFSET(0x8DF150)
#define BESTHTTP_DECOMPRESSION_ZLIB_DEFLATESTREAM_.CTOR_OFFSET UNITYSDK_OFFSET(0x8DF170)
#define BESTHTTP_DECOMPRESSION_ZLIB_DEFLATESTREAM_.CTOR_OFFSET UNITYSDK_OFFSET(0x8DF070)
#define BESTHTTP_DECOMPRESSION_ZLIB_DEFLATESTREAM_.CTOR_OFFSET UNITYSDK_OFFSET(0x8DF190)
#define BESTHTTP_DECOMPRESSION_ZLIB_DEFLATESTREAM_GET_FLUSHMODE_OFFSET UNITYSDK_OFFSET(0x8DF280)
#define BESTHTTP_DECOMPRESSION_ZLIB_DEFLATESTREAM_SET_FLUSHMODE_OFFSET UNITYSDK_OFFSET(0x8DF2A0)
#define BESTHTTP_DECOMPRESSION_ZLIB_DEFLATESTREAM_GET_BUFFERSIZE_OFFSET UNITYSDK_OFFSET(0x8DF320)
#define BESTHTTP_DECOMPRESSION_ZLIB_DEFLATESTREAM_SET_BUFFERSIZE_OFFSET UNITYSDK_OFFSET(0x8DF340)
#define BESTHTTP_DECOMPRESSION_ZLIB_DEFLATESTREAM_GET_STRATEGY_OFFSET UNITYSDK_OFFSET(0x8DF4B0)
#define BESTHTTP_DECOMPRESSION_ZLIB_DEFLATESTREAM_SET_STRATEGY_OFFSET UNITYSDK_OFFSET(0x8DF4D0)
#define BESTHTTP_DECOMPRESSION_ZLIB_DEFLATESTREAM_GET_TOTALIN_OFFSET UNITYSDK_OFFSET(0x8DF550)
#define BESTHTTP_DECOMPRESSION_ZLIB_DEFLATESTREAM_GET_TOTALOUT_OFFSET UNITYSDK_OFFSET(0x8DF580)
#define BESTHTTP_DECOMPRESSION_ZLIB_DEFLATESTREAM_DISPOSE_OFFSET UNITYSDK_OFFSET(0x8DF5B0)
#define BESTHTTP_DECOMPRESSION_ZLIB_DEFLATESTREAM_GET_CANREAD_OFFSET UNITYSDK_OFFSET(0x8DF6B0)
#define BESTHTTP_DECOMPRESSION_ZLIB_DEFLATESTREAM_GET_CANSEEK_OFFSET UNITYSDK_OFFSET(0x8DF740)
#define BESTHTTP_DECOMPRESSION_ZLIB_DEFLATESTREAM_GET_CANWRITE_OFFSET UNITYSDK_OFFSET(0x8DF750)
#define BESTHTTP_DECOMPRESSION_ZLIB_DEFLATESTREAM_FLUSH_OFFSET UNITYSDK_OFFSET(0x8DF7E0)
#define BESTHTTP_DECOMPRESSION_ZLIB_DEFLATESTREAM_GET_LENGTH_OFFSET UNITYSDK_OFFSET(0x8DF870)
#define BESTHTTP_DECOMPRESSION_ZLIB_DEFLATESTREAM_GET_POSITION_OFFSET UNITYSDK_OFFSET(0x8DF8C0)
#define BESTHTTP_DECOMPRESSION_ZLIB_DEFLATESTREAM_SET_POSITION_OFFSET UNITYSDK_OFFSET(0x8DF910)
#define BESTHTTP_DECOMPRESSION_ZLIB_DEFLATESTREAM_READ_OFFSET UNITYSDK_OFFSET(0x8DF960)
#define BESTHTTP_DECOMPRESSION_ZLIB_DEFLATESTREAM_SEEK_OFFSET UNITYSDK_OFFSET(0x8DF9F0)
#define BESTHTTP_DECOMPRESSION_ZLIB_DEFLATESTREAM_SETLENGTH_OFFSET UNITYSDK_OFFSET(0x8DFA40)
#define BESTHTTP_DECOMPRESSION_ZLIB_DEFLATESTREAM_WRITE_OFFSET UNITYSDK_OFFSET(0x8DFA70)

namespace BestHTTP::Decompression::Zlib
{
	inline static constexpr unsigned int DeflateStream_TypeDefinitionIndex = 23367;

	class DeflateStream : public Il2CppObject
	{
	public:
		::BestHTTP::Decompression::Zlib::ZlibBaseStream* _baseStream; // 0x28
		::System::IO::Stream* _innerStream; // 0x30
		::System::Boolean _disposed; // 0x38

		::System::Void .ctor(::System::IO::Stream* arg, ::BestHTTP::Decompression::Zlib::CompressionMode* arg)
		{
			((::System::Void(*)(::System::IO::Stream*, ::BestHTTP::Decompression::Zlib::CompressionMode*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_DECOMPRESSION_ZLIB_DEFLATESTREAM_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor(::System::IO::Stream* arg, ::BestHTTP::Decompression::Zlib::CompressionMode* arg, ::BestHTTP::Decompression::Zlib::CompressionLevel* arg)
		{
			((::System::Void(*)(::System::IO::Stream*, ::BestHTTP::Decompression::Zlib::CompressionMode*, ::BestHTTP::Decompression::Zlib::CompressionLevel*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_DECOMPRESSION_ZLIB_DEFLATESTREAM_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void .ctor(::System::IO::Stream* arg, ::BestHTTP::Decompression::Zlib::CompressionMode* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::IO::Stream*, ::BestHTTP::Decompression::Zlib::CompressionMode*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_DECOMPRESSION_ZLIB_DEFLATESTREAM_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void .ctor(::System::IO::Stream* arg, ::BestHTTP::Decompression::Zlib::CompressionMode* arg, ::BestHTTP::Decompression::Zlib::CompressionLevel* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::IO::Stream*, ::BestHTTP::Decompression::Zlib::CompressionMode*, ::BestHTTP::Decompression::Zlib::CompressionLevel*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_DECOMPRESSION_ZLIB_DEFLATESTREAM_.CTOR_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void .ctor(::System::IO::Stream* arg, ::BestHTTP::Decompression::Zlib::CompressionMode* arg, ::BestHTTP::Decompression::Zlib::CompressionLevel* arg, ::System::Boolean arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::IO::Stream*, ::BestHTTP::Decompression::Zlib::CompressionMode*, ::BestHTTP::Decompression::Zlib::CompressionLevel*, ::System::Boolean, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_DECOMPRESSION_ZLIB_DEFLATESTREAM_.CTOR_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::BestHTTP::Decompression::Zlib::FlushType* get_FlushMode()
		{
			return (return (::BestHTTP::Decompression::Zlib::FlushType*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_DECOMPRESSION_ZLIB_DEFLATESTREAM_GET_FLUSHMODE_OFFSET))(nullptr);
		}

		::System::Void set_FlushMode(::BestHTTP::Decompression::Zlib::FlushType* arg)
		{
			((::System::Void(*)(::BestHTTP::Decompression::Zlib::FlushType*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_DECOMPRESSION_ZLIB_DEFLATESTREAM_SET_FLUSHMODE_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_BufferSize()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_DECOMPRESSION_ZLIB_DEFLATESTREAM_GET_BUFFERSIZE_OFFSET))(nullptr);
		}

		::System::Void set_BufferSize(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_DECOMPRESSION_ZLIB_DEFLATESTREAM_SET_BUFFERSIZE_OFFSET))(arg, nullptr);
		}

		::BestHTTP::Decompression::Zlib::CompressionStrategy* get_Strategy()
		{
			return (return (::BestHTTP::Decompression::Zlib::CompressionStrategy*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_DECOMPRESSION_ZLIB_DEFLATESTREAM_GET_STRATEGY_OFFSET))(nullptr);
		}

		::System::Void set_Strategy(::BestHTTP::Decompression::Zlib::CompressionStrategy* arg)
		{
			((::System::Void(*)(::BestHTTP::Decompression::Zlib::CompressionStrategy*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_DECOMPRESSION_ZLIB_DEFLATESTREAM_SET_STRATEGY_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_TotalIn()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_DECOMPRESSION_ZLIB_DEFLATESTREAM_GET_TOTALIN_OFFSET))(nullptr);
		}

		::System::Int64 get_TotalOut()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_DECOMPRESSION_ZLIB_DEFLATESTREAM_GET_TOTALOUT_OFFSET))(nullptr);
		}

		::System::Void Dispose(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_DECOMPRESSION_ZLIB_DEFLATESTREAM_DISPOSE_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_CanRead()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_DECOMPRESSION_ZLIB_DEFLATESTREAM_GET_CANREAD_OFFSET))(nullptr);
		}

		::System::Boolean get_CanSeek()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_DECOMPRESSION_ZLIB_DEFLATESTREAM_GET_CANSEEK_OFFSET))(nullptr);
		}

		::System::Boolean get_CanWrite()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_DECOMPRESSION_ZLIB_DEFLATESTREAM_GET_CANWRITE_OFFSET))(nullptr);
		}

		::System::Void Flush()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_DECOMPRESSION_ZLIB_DEFLATESTREAM_FLUSH_OFFSET))(nullptr);
		}

		::System::Int64 get_Length()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_DECOMPRESSION_ZLIB_DEFLATESTREAM_GET_LENGTH_OFFSET))(nullptr);
		}

		::System::Int64 get_Position()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_DECOMPRESSION_ZLIB_DEFLATESTREAM_GET_POSITION_OFFSET))(nullptr);
		}

		::System::Void set_Position(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_DECOMPRESSION_ZLIB_DEFLATESTREAM_SET_POSITION_OFFSET))(arg, nullptr);
		}

		::System::Int32 Read(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_DECOMPRESSION_ZLIB_DEFLATESTREAM_READ_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Int64 Seek(::System::Int64 arg, ::System::IO::SeekOrigin* arg)
		{
			return (return (::System::Int64(*)(::System::Int64, ::System::IO::SeekOrigin*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_DECOMPRESSION_ZLIB_DEFLATESTREAM_SEEK_OFFSET))(arg, arg, nullptr);
		}

		::System::Void SetLength(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_DECOMPRESSION_ZLIB_DEFLATESTREAM_SETLENGTH_OFFSET))(arg, nullptr);
		}

		::System::Void Write(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_DECOMPRESSION_ZLIB_DEFLATESTREAM_WRITE_OFFSET))(arg, arg, arg, nullptr);
		}

	};
}

