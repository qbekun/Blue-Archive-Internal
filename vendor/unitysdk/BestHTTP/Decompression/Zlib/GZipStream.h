#pragma once
#include "../../../unitysdk.h"

namespace BestHTTP::Decompression::Zlib { class ZlibBaseStream; }
namespace BestHTTP::Decompression::Zlib { class CompressionMode; }
namespace BestHTTP::Decompression::Zlib { class CompressionLevel; }
namespace BestHTTP::Decompression::Zlib { class FlushType; }

#define BESTHTTP_DECOMPRESSION_ZLIB_GZIPSTREAM_GET_COMMENT_OFFSET UNITYSDK_OFFSET(0x8DFB00)
#define BESTHTTP_DECOMPRESSION_ZLIB_GZIPSTREAM_SET_COMMENT_OFFSET UNITYSDK_OFFSET(0x8DFB10)
#define BESTHTTP_DECOMPRESSION_ZLIB_GZIPSTREAM_GET_FILENAME_OFFSET UNITYSDK_OFFSET(0x8DFB80)
#define BESTHTTP_DECOMPRESSION_ZLIB_GZIPSTREAM_SET_FILENAME_OFFSET UNITYSDK_OFFSET(0x8DFB90)
#define BESTHTTP_DECOMPRESSION_ZLIB_GZIPSTREAM_GET_CRC32_OFFSET UNITYSDK_OFFSET(0x8DFD50)
#define BESTHTTP_DECOMPRESSION_ZLIB_GZIPSTREAM_.CTOR_OFFSET UNITYSDK_OFFSET(0x8DFD60)
#define BESTHTTP_DECOMPRESSION_ZLIB_GZIPSTREAM_.CTOR_OFFSET UNITYSDK_OFFSET(0x8DFD80)
#define BESTHTTP_DECOMPRESSION_ZLIB_GZIPSTREAM_.CTOR_OFFSET UNITYSDK_OFFSET(0x8DFDA0)
#define BESTHTTP_DECOMPRESSION_ZLIB_GZIPSTREAM_.CTOR_OFFSET UNITYSDK_OFFSET(0x8D8830)
#define BESTHTTP_DECOMPRESSION_ZLIB_GZIPSTREAM_GET_FLUSHMODE_OFFSET UNITYSDK_OFFSET(0x8DFDC0)
#define BESTHTTP_DECOMPRESSION_ZLIB_GZIPSTREAM_SET_FLUSHMODE_OFFSET UNITYSDK_OFFSET(0x8DFDE0)
#define BESTHTTP_DECOMPRESSION_ZLIB_GZIPSTREAM_GET_BUFFERSIZE_OFFSET UNITYSDK_OFFSET(0x8DFE60)
#define BESTHTTP_DECOMPRESSION_ZLIB_GZIPSTREAM_SET_BUFFERSIZE_OFFSET UNITYSDK_OFFSET(0x8DFE80)
#define BESTHTTP_DECOMPRESSION_ZLIB_GZIPSTREAM_GET_TOTALIN_OFFSET UNITYSDK_OFFSET(0x8DFFF0)
#define BESTHTTP_DECOMPRESSION_ZLIB_GZIPSTREAM_GET_TOTALOUT_OFFSET UNITYSDK_OFFSET(0x8E0020)
#define BESTHTTP_DECOMPRESSION_ZLIB_GZIPSTREAM_DISPOSE_OFFSET UNITYSDK_OFFSET(0x8E0050)
#define BESTHTTP_DECOMPRESSION_ZLIB_GZIPSTREAM_GET_CANREAD_OFFSET UNITYSDK_OFFSET(0x8E0170)
#define BESTHTTP_DECOMPRESSION_ZLIB_GZIPSTREAM_GET_CANSEEK_OFFSET UNITYSDK_OFFSET(0x8E0200)
#define BESTHTTP_DECOMPRESSION_ZLIB_GZIPSTREAM_GET_CANWRITE_OFFSET UNITYSDK_OFFSET(0x8E0210)
#define BESTHTTP_DECOMPRESSION_ZLIB_GZIPSTREAM_FLUSH_OFFSET UNITYSDK_OFFSET(0x8E02A0)
#define BESTHTTP_DECOMPRESSION_ZLIB_GZIPSTREAM_GET_LENGTH_OFFSET UNITYSDK_OFFSET(0x8E0330)
#define BESTHTTP_DECOMPRESSION_ZLIB_GZIPSTREAM_GET_POSITION_OFFSET UNITYSDK_OFFSET(0x8E0380)
#define BESTHTTP_DECOMPRESSION_ZLIB_GZIPSTREAM_SET_POSITION_OFFSET UNITYSDK_OFFSET(0x8E03E0)
#define BESTHTTP_DECOMPRESSION_ZLIB_GZIPSTREAM_READ_OFFSET UNITYSDK_OFFSET(0x8E0430)
#define BESTHTTP_DECOMPRESSION_ZLIB_GZIPSTREAM_SEEK_OFFSET UNITYSDK_OFFSET(0x8E0510)
#define BESTHTTP_DECOMPRESSION_ZLIB_GZIPSTREAM_SETLENGTH_OFFSET UNITYSDK_OFFSET(0x8E0560)
#define BESTHTTP_DECOMPRESSION_ZLIB_GZIPSTREAM_WRITE_OFFSET UNITYSDK_OFFSET(0x8E0590)
#define BESTHTTP_DECOMPRESSION_ZLIB_GZIPSTREAM_EMITHEADER_OFFSET UNITYSDK_OFFSET(0x8E0690)
#define BESTHTTP_DECOMPRESSION_ZLIB_GZIPSTREAM_.CCTOR_OFFSET UNITYSDK_OFFSET(0x8E0B10)

namespace BestHTTP::Decompression::Zlib
{
	inline static constexpr unsigned int GZipStream_TypeDefinitionIndex = 23368;

	class GZipStream : public Il2CppObject
	{
	public:
		Il2CppObject* LastModified; // 0x28
		::System::Int32 _headerByteCount; // 0x38
		::BestHTTP::Decompression::Zlib::ZlibBaseStream* _baseStream; // 0x40
		::System::Boolean _disposed; // 0x48
		::System::Boolean _firstReadDone; // 0x49
		::System::String* _FileName; // 0x50
		::System::String* _Comment; // 0x58
		::System::Int32 _Crc32; // 0x60
		::System::DateTime* _unixEpoch; // 0x0
		::System::Text::Encoding* iso8859dash1; // 0x8

		::System::String* get_Comment()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_DECOMPRESSION_ZLIB_GZIPSTREAM_GET_COMMENT_OFFSET))(nullptr);
		}

		::System::Void set_Comment(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_DECOMPRESSION_ZLIB_GZIPSTREAM_SET_COMMENT_OFFSET))(str, nullptr);
		}

		::System::String* get_FileName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_DECOMPRESSION_ZLIB_GZIPSTREAM_GET_FILENAME_OFFSET))(nullptr);
		}

		::System::Void set_FileName(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_DECOMPRESSION_ZLIB_GZIPSTREAM_SET_FILENAME_OFFSET))(str, nullptr);
		}

		::System::Int32 get_Crc32()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_DECOMPRESSION_ZLIB_GZIPSTREAM_GET_CRC32_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::IO::Stream* arg, ::BestHTTP::Decompression::Zlib::CompressionMode* arg)
		{
			((::System::Void(*)(::System::IO::Stream*, ::BestHTTP::Decompression::Zlib::CompressionMode*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_DECOMPRESSION_ZLIB_GZIPSTREAM_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor(::System::IO::Stream* arg, ::BestHTTP::Decompression::Zlib::CompressionMode* arg, ::BestHTTP::Decompression::Zlib::CompressionLevel* arg)
		{
			((::System::Void(*)(::System::IO::Stream*, ::BestHTTP::Decompression::Zlib::CompressionMode*, ::BestHTTP::Decompression::Zlib::CompressionLevel*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_DECOMPRESSION_ZLIB_GZIPSTREAM_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void .ctor(::System::IO::Stream* arg, ::BestHTTP::Decompression::Zlib::CompressionMode* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::IO::Stream*, ::BestHTTP::Decompression::Zlib::CompressionMode*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_DECOMPRESSION_ZLIB_GZIPSTREAM_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void .ctor(::System::IO::Stream* arg, ::BestHTTP::Decompression::Zlib::CompressionMode* arg, ::BestHTTP::Decompression::Zlib::CompressionLevel* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::IO::Stream*, ::BestHTTP::Decompression::Zlib::CompressionMode*, ::BestHTTP::Decompression::Zlib::CompressionLevel*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_DECOMPRESSION_ZLIB_GZIPSTREAM_.CTOR_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::BestHTTP::Decompression::Zlib::FlushType* get_FlushMode()
		{
			return (return (::BestHTTP::Decompression::Zlib::FlushType*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_DECOMPRESSION_ZLIB_GZIPSTREAM_GET_FLUSHMODE_OFFSET))(nullptr);
		}

		::System::Void set_FlushMode(::BestHTTP::Decompression::Zlib::FlushType* arg)
		{
			((::System::Void(*)(::BestHTTP::Decompression::Zlib::FlushType*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_DECOMPRESSION_ZLIB_GZIPSTREAM_SET_FLUSHMODE_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_BufferSize()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_DECOMPRESSION_ZLIB_GZIPSTREAM_GET_BUFFERSIZE_OFFSET))(nullptr);
		}

		::System::Void set_BufferSize(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_DECOMPRESSION_ZLIB_GZIPSTREAM_SET_BUFFERSIZE_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_TotalIn()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_DECOMPRESSION_ZLIB_GZIPSTREAM_GET_TOTALIN_OFFSET))(nullptr);
		}

		::System::Int64 get_TotalOut()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_DECOMPRESSION_ZLIB_GZIPSTREAM_GET_TOTALOUT_OFFSET))(nullptr);
		}

		::System::Void Dispose(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_DECOMPRESSION_ZLIB_GZIPSTREAM_DISPOSE_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_CanRead()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_DECOMPRESSION_ZLIB_GZIPSTREAM_GET_CANREAD_OFFSET))(nullptr);
		}

		::System::Boolean get_CanSeek()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_DECOMPRESSION_ZLIB_GZIPSTREAM_GET_CANSEEK_OFFSET))(nullptr);
		}

		::System::Boolean get_CanWrite()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_DECOMPRESSION_ZLIB_GZIPSTREAM_GET_CANWRITE_OFFSET))(nullptr);
		}

		::System::Void Flush()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_DECOMPRESSION_ZLIB_GZIPSTREAM_FLUSH_OFFSET))(nullptr);
		}

		::System::Int64 get_Length()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_DECOMPRESSION_ZLIB_GZIPSTREAM_GET_LENGTH_OFFSET))(nullptr);
		}

		::System::Int64 get_Position()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_DECOMPRESSION_ZLIB_GZIPSTREAM_GET_POSITION_OFFSET))(nullptr);
		}

		::System::Void set_Position(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_DECOMPRESSION_ZLIB_GZIPSTREAM_SET_POSITION_OFFSET))(arg, nullptr);
		}

		::System::Int32 Read(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_DECOMPRESSION_ZLIB_GZIPSTREAM_READ_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Int64 Seek(::System::Int64 arg, ::System::IO::SeekOrigin* arg)
		{
			return (return (::System::Int64(*)(::System::Int64, ::System::IO::SeekOrigin*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_DECOMPRESSION_ZLIB_GZIPSTREAM_SEEK_OFFSET))(arg, arg, nullptr);
		}

		::System::Void SetLength(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_DECOMPRESSION_ZLIB_GZIPSTREAM_SETLENGTH_OFFSET))(arg, nullptr);
		}

		::System::Void Write(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_DECOMPRESSION_ZLIB_GZIPSTREAM_WRITE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Int32 EmitHeader()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_DECOMPRESSION_ZLIB_GZIPSTREAM_EMITHEADER_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_DECOMPRESSION_ZLIB_GZIPSTREAM_.CCTOR_OFFSET))(nullptr);
		}

	};
}

