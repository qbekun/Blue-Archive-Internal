#pragma once
#include "../../../unitysdk.h"

namespace BestHTTP::Decompression::Zlib { class DeflateManager; }
namespace BestHTTP::Decompression::Zlib { class InflateManager; }
namespace BestHTTP::Decompression::Zlib { class CompressionLevel; }
namespace BestHTTP::Decompression::Zlib { class CompressionStrategy; }
namespace BestHTTP::Decompression::Zlib { class CompressionMode; }
namespace BestHTTP::Decompression::Zlib { class FlushType; }

#define BESTHTTP_DECOMPRESSION_ZLIB_ZLIBCODEC_GET_ADLER32_OFFSET UNITYSDK_OFFSET(0x8E9680)
#define BESTHTTP_DECOMPRESSION_ZLIB_ZLIBCODEC_.CTOR_OFFSET UNITYSDK_OFFSET(0x8E7810)
#define BESTHTTP_DECOMPRESSION_ZLIB_ZLIBCODEC_.CTOR_OFFSET UNITYSDK_OFFSET(0x8E9690)
#define BESTHTTP_DECOMPRESSION_ZLIB_ZLIBCODEC_INITIALIZEINFLATE_OFFSET UNITYSDK_OFFSET(0x8E9790)
#define BESTHTTP_DECOMPRESSION_ZLIB_ZLIBCODEC_INITIALIZEINFLATE_OFFSET UNITYSDK_OFFSET(0x8E97B0)
#define BESTHTTP_DECOMPRESSION_ZLIB_ZLIBCODEC_INITIALIZEINFLATE_OFFSET UNITYSDK_OFFSET(0x8E97A0)
#define BESTHTTP_DECOMPRESSION_ZLIB_ZLIBCODEC_INITIALIZEINFLATE_OFFSET UNITYSDK_OFFSET(0x8E7830)
#define BESTHTTP_DECOMPRESSION_ZLIB_ZLIBCODEC_INFLATE_OFFSET UNITYSDK_OFFSET(0x8E7DF0)
#define BESTHTTP_DECOMPRESSION_ZLIB_ZLIBCODEC_ENDINFLATE_OFFSET UNITYSDK_OFFSET(0x8E8710)
#define BESTHTTP_DECOMPRESSION_ZLIB_ZLIBCODEC_SYNCINFLATE_OFFSET UNITYSDK_OFFSET(0x8E97C0)
#define BESTHTTP_DECOMPRESSION_ZLIB_ZLIBCODEC_INITIALIZEDEFLATE_OFFSET UNITYSDK_OFFSET(0x8E9780)
#define BESTHTTP_DECOMPRESSION_ZLIB_ZLIBCODEC_INITIALIZEDEFLATE_OFFSET UNITYSDK_OFFSET(0x8E9930)
#define BESTHTTP_DECOMPRESSION_ZLIB_ZLIBCODEC_INITIALIZEDEFLATE_OFFSET UNITYSDK_OFFSET(0x8E9940)
#define BESTHTTP_DECOMPRESSION_ZLIB_ZLIBCODEC_INITIALIZEDEFLATE_OFFSET UNITYSDK_OFFSET(0x8E9950)
#define BESTHTTP_DECOMPRESSION_ZLIB_ZLIBCODEC_INITIALIZEDEFLATE_OFFSET UNITYSDK_OFFSET(0x8E7910)
#define BESTHTTP_DECOMPRESSION_ZLIB_ZLIBCODEC__INTERNALINITIALIZEDEFLATE_OFFSET UNITYSDK_OFFSET(0x8E9830)
#define BESTHTTP_DECOMPRESSION_ZLIB_ZLIBCODEC_DEFLATE_OFFSET UNITYSDK_OFFSET(0x8E7E60)
#define BESTHTTP_DECOMPRESSION_ZLIB_ZLIBCODEC_ENDDEFLATE_OFFSET UNITYSDK_OFFSET(0x8E8690)
#define BESTHTTP_DECOMPRESSION_ZLIB_ZLIBCODEC_RESETDEFLATE_OFFSET UNITYSDK_OFFSET(0x8E9960)
#define BESTHTTP_DECOMPRESSION_ZLIB_ZLIBCODEC_SETDEFLATEPARAMS_OFFSET UNITYSDK_OFFSET(0x8E99D0)
#define BESTHTTP_DECOMPRESSION_ZLIB_ZLIBCODEC_SETDICTIONARY_OFFSET UNITYSDK_OFFSET(0x8E9A40)
#define BESTHTTP_DECOMPRESSION_ZLIB_ZLIBCODEC_FLUSH_PENDING_OFFSET UNITYSDK_OFFSET(0x8E9AD0)
#define BESTHTTP_DECOMPRESSION_ZLIB_ZLIBCODEC_READ_BUF_OFFSET UNITYSDK_OFFSET(0x8E9C60)

namespace BestHTTP::Decompression::Zlib
{
	inline static constexpr unsigned int ZlibCodec_TypeDefinitionIndex = 23388;

	class ZlibCodec : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* InputBuffer; // 0x10
		::System::Int32 NextIn; // 0x18
		::System::Int32 AvailableBytesIn; // 0x1C
		::System::Int64 TotalBytesIn; // 0x20
		::Il2CppArray<::System::Object*>* OutputBuffer; // 0x28
		::System::Int32 NextOut; // 0x30
		::System::Int32 AvailableBytesOut; // 0x34
		::System::Int64 TotalBytesOut; // 0x38
		::System::String* Message; // 0x40
		::BestHTTP::Decompression::Zlib::DeflateManager* dstate; // 0x48
		::BestHTTP::Decompression::Zlib::InflateManager* istate; // 0x50
		::System::UInt32 _Adler32; // 0x58
		::BestHTTP::Decompression::Zlib::CompressionLevel* CompressLevel; // 0x5C
		::System::Int32 WindowBits; // 0x60
		::BestHTTP::Decompression::Zlib::CompressionStrategy* Strategy; // 0x64

		::System::Int32 get_Adler32()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_DECOMPRESSION_ZLIB_ZLIBCODEC_GET_ADLER32_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_DECOMPRESSION_ZLIB_ZLIBCODEC_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::BestHTTP::Decompression::Zlib::CompressionMode* arg)
		{
			((::System::Void(*)(::BestHTTP::Decompression::Zlib::CompressionMode*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_DECOMPRESSION_ZLIB_ZLIBCODEC_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Int32 InitializeInflate()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_DECOMPRESSION_ZLIB_ZLIBCODEC_INITIALIZEINFLATE_OFFSET))(nullptr);
		}

		::System::Int32 InitializeInflate(::System::Boolean arg)
		{
			return (return (::System::Int32(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_DECOMPRESSION_ZLIB_ZLIBCODEC_INITIALIZEINFLATE_OFFSET))(arg, nullptr);
		}

		::System::Int32 InitializeInflate(::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_DECOMPRESSION_ZLIB_ZLIBCODEC_INITIALIZEINFLATE_OFFSET))(arg, nullptr);
		}

		::System::Int32 InitializeInflate(::System::Int32 arg, ::System::Boolean arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_DECOMPRESSION_ZLIB_ZLIBCODEC_INITIALIZEINFLATE_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 Inflate(::BestHTTP::Decompression::Zlib::FlushType* arg)
		{
			return (return (::System::Int32(*)(::BestHTTP::Decompression::Zlib::FlushType*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_DECOMPRESSION_ZLIB_ZLIBCODEC_INFLATE_OFFSET))(arg, nullptr);
		}

		::System::Int32 EndInflate()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_DECOMPRESSION_ZLIB_ZLIBCODEC_ENDINFLATE_OFFSET))(nullptr);
		}

		::System::Int32 SyncInflate()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_DECOMPRESSION_ZLIB_ZLIBCODEC_SYNCINFLATE_OFFSET))(nullptr);
		}

		::System::Int32 InitializeDeflate()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_DECOMPRESSION_ZLIB_ZLIBCODEC_INITIALIZEDEFLATE_OFFSET))(nullptr);
		}

		::System::Int32 InitializeDeflate(::BestHTTP::Decompression::Zlib::CompressionLevel* arg)
		{
			return (return (::System::Int32(*)(::BestHTTP::Decompression::Zlib::CompressionLevel*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_DECOMPRESSION_ZLIB_ZLIBCODEC_INITIALIZEDEFLATE_OFFSET))(arg, nullptr);
		}

		::System::Int32 InitializeDeflate(::BestHTTP::Decompression::Zlib::CompressionLevel* arg, ::System::Boolean arg)
		{
			return (return (::System::Int32(*)(::BestHTTP::Decompression::Zlib::CompressionLevel*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_DECOMPRESSION_ZLIB_ZLIBCODEC_INITIALIZEDEFLATE_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 InitializeDeflate(::BestHTTP::Decompression::Zlib::CompressionLevel* arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::BestHTTP::Decompression::Zlib::CompressionLevel*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_DECOMPRESSION_ZLIB_ZLIBCODEC_INITIALIZEDEFLATE_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 InitializeDeflate(::BestHTTP::Decompression::Zlib::CompressionLevel* arg, ::System::Int32 arg, ::System::Boolean arg)
		{
			return (return (::System::Int32(*)(::BestHTTP::Decompression::Zlib::CompressionLevel*, ::System::Int32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_DECOMPRESSION_ZLIB_ZLIBCODEC_INITIALIZEDEFLATE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Int32 _InternalInitializeDeflate(::System::Boolean arg)
		{
			return (return (::System::Int32(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_DECOMPRESSION_ZLIB_ZLIBCODEC__INTERNALINITIALIZEDEFLATE_OFFSET))(arg, nullptr);
		}

		::System::Int32 Deflate(::BestHTTP::Decompression::Zlib::FlushType* arg)
		{
			return (return (::System::Int32(*)(::BestHTTP::Decompression::Zlib::FlushType*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_DECOMPRESSION_ZLIB_ZLIBCODEC_DEFLATE_OFFSET))(arg, nullptr);
		}

		::System::Int32 EndDeflate()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_DECOMPRESSION_ZLIB_ZLIBCODEC_ENDDEFLATE_OFFSET))(nullptr);
		}

		::System::Void ResetDeflate()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_DECOMPRESSION_ZLIB_ZLIBCODEC_RESETDEFLATE_OFFSET))(nullptr);
		}

		::System::Int32 SetDeflateParams(::BestHTTP::Decompression::Zlib::CompressionLevel* arg, ::BestHTTP::Decompression::Zlib::CompressionStrategy* arg)
		{
			return (return (::System::Int32(*)(::BestHTTP::Decompression::Zlib::CompressionLevel*, ::BestHTTP::Decompression::Zlib::CompressionStrategy*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_DECOMPRESSION_ZLIB_ZLIBCODEC_SETDEFLATEPARAMS_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 SetDictionary(::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Int32(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_DECOMPRESSION_ZLIB_ZLIBCODEC_SETDICTIONARY_OFFSET))(arg, nullptr);
		}

		::System::Void flush_pending()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_DECOMPRESSION_ZLIB_ZLIBCODEC_FLUSH_PENDING_OFFSET))(nullptr);
		}

		::System::Int32 read_buf(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_DECOMPRESSION_ZLIB_ZLIBCODEC_READ_BUF_OFFSET))(arg, arg, arg, nullptr);
		}

	};
}

