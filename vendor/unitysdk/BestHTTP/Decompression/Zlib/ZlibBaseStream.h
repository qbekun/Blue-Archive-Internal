#pragma once
#include "../../../unitysdk.h"

namespace BestHTTP::Decompression::Zlib { class ZlibCodec; }
namespace BestHTTP::Decompression::Zlib { class FlushType; }
namespace BestHTTP::Decompression::Zlib { class ZlibStreamFlavor; }
namespace BestHTTP::Decompression::Zlib { class CompressionMode; }
namespace BestHTTP::Decompression::Zlib { class CompressionLevel; }
namespace BestHTTP::Decompression::Zlib { class CompressionStrategy; }
namespace BestHTTP::Decompression::Crc { class CRC32; }

#define BESTHTTP_DECOMPRESSION_ZLIB_ZLIBBASESTREAM_GET_CRC32_OFFSET UNITYSDK_OFFSET(0x8E7530)
#define BESTHTTP_DECOMPRESSION_ZLIB_ZLIBBASESTREAM_.CTOR_OFFSET UNITYSDK_OFFSET(0x8E7560)
#define BESTHTTP_DECOMPRESSION_ZLIB_ZLIBBASESTREAM_.CTOR_OFFSET UNITYSDK_OFFSET(0x8E7590)
#define BESTHTTP_DECOMPRESSION_ZLIB_ZLIBBASESTREAM_GET__WANTCOMPRESS_OFFSET UNITYSDK_OFFSET(0x8E7720)
#define BESTHTTP_DECOMPRESSION_ZLIB_ZLIBBASESTREAM_GET_Z_OFFSET UNITYSDK_OFFSET(0x8E7730)
#define BESTHTTP_DECOMPRESSION_ZLIB_ZLIBBASESTREAM_GET_WORKINGBUFFER_OFFSET UNITYSDK_OFFSET(0x8E7920)
#define BESTHTTP_DECOMPRESSION_ZLIB_ZLIBBASESTREAM_WRITE_OFFSET UNITYSDK_OFFSET(0x8E7990)
#define BESTHTTP_DECOMPRESSION_ZLIB_ZLIBBASESTREAM_FINISH_OFFSET UNITYSDK_OFFSET(0x8E7ED0)
#define BESTHTTP_DECOMPRESSION_ZLIB_ZLIBBASESTREAM_END_OFFSET UNITYSDK_OFFSET(0x8E85E0)
#define BESTHTTP_DECOMPRESSION_ZLIB_ZLIBBASESTREAM_CLOSE_OFFSET UNITYSDK_OFFSET(0x8E87A0)
#define BESTHTTP_DECOMPRESSION_ZLIB_ZLIBBASESTREAM_FLUSH_OFFSET UNITYSDK_OFFSET(0x8E8880)
#define BESTHTTP_DECOMPRESSION_ZLIB_ZLIBBASESTREAM_SEEK_OFFSET UNITYSDK_OFFSET(0x8E88B0)
#define BESTHTTP_DECOMPRESSION_ZLIB_ZLIBBASESTREAM_SETLENGTH_OFFSET UNITYSDK_OFFSET(0x8E8900)
#define BESTHTTP_DECOMPRESSION_ZLIB_ZLIBBASESTREAM_READZEROTERMINATEDSTRING_OFFSET UNITYSDK_OFFSET(0x8E8940)
#define BESTHTTP_DECOMPRESSION_ZLIB_ZLIBBASESTREAM__READANDVALIDATEGZIPHEADER_OFFSET UNITYSDK_OFFSET(0x8E8B40)
#define BESTHTTP_DECOMPRESSION_ZLIB_ZLIBBASESTREAM_READ_OFFSET UNITYSDK_OFFSET(0x8E8F80)
#define BESTHTTP_DECOMPRESSION_ZLIB_ZLIBBASESTREAM_GET_CANREAD_OFFSET UNITYSDK_OFFSET(0x8E9520)
#define BESTHTTP_DECOMPRESSION_ZLIB_ZLIBBASESTREAM_GET_CANSEEK_OFFSET UNITYSDK_OFFSET(0x8E9550)
#define BESTHTTP_DECOMPRESSION_ZLIB_ZLIBBASESTREAM_GET_CANWRITE_OFFSET UNITYSDK_OFFSET(0x8E9580)
#define BESTHTTP_DECOMPRESSION_ZLIB_ZLIBBASESTREAM_GET_LENGTH_OFFSET UNITYSDK_OFFSET(0x8E95B0)
#define BESTHTTP_DECOMPRESSION_ZLIB_ZLIBBASESTREAM_GET_POSITION_OFFSET UNITYSDK_OFFSET(0x8E95E0)
#define BESTHTTP_DECOMPRESSION_ZLIB_ZLIBBASESTREAM_SET_POSITION_OFFSET UNITYSDK_OFFSET(0x8E9630)

namespace BestHTTP::Decompression::Zlib
{
	inline static constexpr unsigned int ZlibBaseStream_TypeDefinitionIndex = 23387;

	class ZlibBaseStream : public Il2CppObject
	{
	public:
		::BestHTTP::Decompression::Zlib::ZlibCodec* _z; // 0x28
		StreamMode* _streamMode; // 0x30
		::BestHTTP::Decompression::Zlib::FlushType* _flushMode; // 0x34
		::BestHTTP::Decompression::Zlib::ZlibStreamFlavor* _flavor; // 0x38
		::BestHTTP::Decompression::Zlib::CompressionMode* _compressionMode; // 0x3C
		::BestHTTP::Decompression::Zlib::CompressionLevel* _level; // 0x40
		::System::Boolean _leaveOpen; // 0x44
		::Il2CppArray<::System::Object*>* _workingBuffer; // 0x48
		::System::Int32 _bufferSize; // 0x50
		::System::Int32 windowBitsMax; // 0x54
		::Il2CppArray<::System::Object*>* _buf1; // 0x58
		::System::IO::Stream* _stream; // 0x60
		::BestHTTP::Decompression::Zlib::CompressionStrategy* Strategy; // 0x68
		::BestHTTP::Decompression::Crc::CRC32* crc; // 0x70
		::System::String* _GzipFileName; // 0x78
		::System::String* _GzipComment; // 0x80
		::System::DateTime* _GzipMtime; // 0x88
		::System::Int32 _gzipHeaderByteCount; // 0x90
		::System::Boolean nomoreinput; // 0x94

		::System::Int32 get_Crc32()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_DECOMPRESSION_ZLIB_ZLIBBASESTREAM_GET_CRC32_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::IO::Stream* arg, ::BestHTTP::Decompression::Zlib::CompressionMode* arg, ::BestHTTP::Decompression::Zlib::CompressionLevel* arg, ::BestHTTP::Decompression::Zlib::ZlibStreamFlavor* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::IO::Stream*, ::BestHTTP::Decompression::Zlib::CompressionMode*, ::BestHTTP::Decompression::Zlib::CompressionLevel*, ::BestHTTP::Decompression::Zlib::ZlibStreamFlavor*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_DECOMPRESSION_ZLIB_ZLIBBASESTREAM_.CTOR_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void .ctor(::System::IO::Stream* arg, ::BestHTTP::Decompression::Zlib::CompressionMode* arg, ::BestHTTP::Decompression::Zlib::CompressionLevel* arg, ::BestHTTP::Decompression::Zlib::ZlibStreamFlavor* arg, ::System::Boolean arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::IO::Stream*, ::BestHTTP::Decompression::Zlib::CompressionMode*, ::BestHTTP::Decompression::Zlib::CompressionLevel*, ::BestHTTP::Decompression::Zlib::ZlibStreamFlavor*, ::System::Boolean, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_DECOMPRESSION_ZLIB_ZLIBBASESTREAM_.CTOR_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Boolean get__wantCompress()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_DECOMPRESSION_ZLIB_ZLIBBASESTREAM_GET__WANTCOMPRESS_OFFSET))(nullptr);
		}

		::BestHTTP::Decompression::Zlib::ZlibCodec* get_z()
		{
			return (return (::BestHTTP::Decompression::Zlib::ZlibCodec*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_DECOMPRESSION_ZLIB_ZLIBBASESTREAM_GET_Z_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* get_workingBuffer()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_DECOMPRESSION_ZLIB_ZLIBBASESTREAM_GET_WORKINGBUFFER_OFFSET))(nullptr);
		}

		::System::Void Write(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_DECOMPRESSION_ZLIB_ZLIBBASESTREAM_WRITE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void finish()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_DECOMPRESSION_ZLIB_ZLIBBASESTREAM_FINISH_OFFSET))(nullptr);
		}

		::System::Void end()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_DECOMPRESSION_ZLIB_ZLIBBASESTREAM_END_OFFSET))(nullptr);
		}

		::System::Void Close()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_DECOMPRESSION_ZLIB_ZLIBBASESTREAM_CLOSE_OFFSET))(nullptr);
		}

		::System::Void Flush()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_DECOMPRESSION_ZLIB_ZLIBBASESTREAM_FLUSH_OFFSET))(nullptr);
		}

		::System::Int64 Seek(::System::Int64 arg, ::System::IO::SeekOrigin* arg)
		{
			return (return (::System::Int64(*)(::System::Int64, ::System::IO::SeekOrigin*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_DECOMPRESSION_ZLIB_ZLIBBASESTREAM_SEEK_OFFSET))(arg, arg, nullptr);
		}

		::System::Void SetLength(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_DECOMPRESSION_ZLIB_ZLIBBASESTREAM_SETLENGTH_OFFSET))(arg, nullptr);
		}

		::System::String* ReadZeroTerminatedString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_DECOMPRESSION_ZLIB_ZLIBBASESTREAM_READZEROTERMINATEDSTRING_OFFSET))(nullptr);
		}

		::System::Int32 _ReadAndValidateGzipHeader()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_DECOMPRESSION_ZLIB_ZLIBBASESTREAM__READANDVALIDATEGZIPHEADER_OFFSET))(nullptr);
		}

		::System::Int32 Read(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_DECOMPRESSION_ZLIB_ZLIBBASESTREAM_READ_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean get_CanRead()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_DECOMPRESSION_ZLIB_ZLIBBASESTREAM_GET_CANREAD_OFFSET))(nullptr);
		}

		::System::Boolean get_CanSeek()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_DECOMPRESSION_ZLIB_ZLIBBASESTREAM_GET_CANSEEK_OFFSET))(nullptr);
		}

		::System::Boolean get_CanWrite()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_DECOMPRESSION_ZLIB_ZLIBBASESTREAM_GET_CANWRITE_OFFSET))(nullptr);
		}

		::System::Int64 get_Length()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_DECOMPRESSION_ZLIB_ZLIBBASESTREAM_GET_LENGTH_OFFSET))(nullptr);
		}

		::System::Int64 get_Position()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_DECOMPRESSION_ZLIB_ZLIBBASESTREAM_GET_POSITION_OFFSET))(nullptr);
		}

		::System::Void set_Position(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_DECOMPRESSION_ZLIB_ZLIBBASESTREAM_SET_POSITION_OFFSET))(arg, nullptr);
		}

	};
}

