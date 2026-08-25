#pragma once
#include "../../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Zlib { class Deflate; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Zlib { class Inflate; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Zlib { class Adler32; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_ZLIB_ZSTREAM_INFLATEINIT_OFFSET UNITYSDK_OFFSET(0x92E580)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_ZLIB_ZSTREAM_INFLATEINIT_OFFSET UNITYSDK_OFFSET(0x92DED0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_ZLIB_ZSTREAM_INFLATEINIT_OFFSET UNITYSDK_OFFSET(0x92FBA0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_ZLIB_ZSTREAM_INFLATEINIT_OFFSET UNITYSDK_OFFSET(0x92FBB0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_ZLIB_ZSTREAM_INFLATE_OFFSET UNITYSDK_OFFSET(0x92E180)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_ZLIB_ZSTREAM_INFLATEEND_OFFSET UNITYSDK_OFFSET(0x92F490)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_ZLIB_ZSTREAM_INFLATESYNC_OFFSET UNITYSDK_OFFSET(0x92FCA0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_ZLIB_ZSTREAM_INFLATESETDICTIONARY_OFFSET UNITYSDK_OFFSET(0x92FCC0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_ZLIB_ZSTREAM_DEFLATEINIT_OFFSET UNITYSDK_OFFSET(0x92FCF0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_ZLIB_ZSTREAM_DEFLATEINIT_OFFSET UNITYSDK_OFFSET(0x92D550)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_ZLIB_ZSTREAM_DEFLATEINIT_OFFSET UNITYSDK_OFFSET(0x92FD10)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_ZLIB_ZSTREAM_DEFLATEINIT_OFFSET UNITYSDK_OFFSET(0x92FD30)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_ZLIB_ZSTREAM_DEFLATE_OFFSET UNITYSDK_OFFSET(0x92D7A0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_ZLIB_ZSTREAM_DEFLATEEND_OFFSET UNITYSDK_OFFSET(0x92DAD0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_ZLIB_ZSTREAM_DEFLATEPARAMS_OFFSET UNITYSDK_OFFSET(0x92FDF0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_ZLIB_ZSTREAM_DEFLATESETDICTIONARY_OFFSET UNITYSDK_OFFSET(0x92FE30)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_ZLIB_ZSTREAM_FLUSH_PENDING_OFFSET UNITYSDK_OFFSET(0x92FE70)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_ZLIB_ZSTREAM_READ_BUF_OFFSET UNITYSDK_OFFSET(0x92FF20)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_ZLIB_ZSTREAM_FREE_OFFSET UNITYSDK_OFFSET(0x92DB20)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_ZLIB_ZSTREAM_.CTOR_OFFSET UNITYSDK_OFFSET(0x92D4E0)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Zlib
{
	inline static constexpr unsigned int ZStream_TypeDefinitionIndex = 21589;

	class ZStream : public Il2CppObject
	{
	public:
		::System::Int32 MAX_WBITS; // 0x0
		::System::Int32 DEF_WBITS; // 0x0
		::System::Int32 Z_NO_FLUSH; // 0x0
		::System::Int32 Z_PARTIAL_FLUSH; // 0x0
		::System::Int32 Z_SYNC_FLUSH; // 0x0
		::System::Int32 Z_FULL_FLUSH; // 0x0
		::System::Int32 Z_FINISH; // 0x0
		::System::Int32 MAX_MEM_LEVEL; // 0x0
		::System::Int32 Z_OK; // 0x0
		::System::Int32 Z_STREAM_END; // 0x0
		::System::Int32 Z_NEED_DICT; // 0x0
		::System::Int32 Z_ERRNO; // 0x0
		::System::Int32 Z_STREAM_ERROR; // 0x0
		::System::Int32 Z_DATA_ERROR; // 0x0
		::System::Int32 Z_MEM_ERROR; // 0x0
		::System::Int32 Z_BUF_ERROR; // 0x0
		::System::Int32 Z_VERSION_ERROR; // 0x0
		::Il2CppArray<::System::Object*>* next_in; // 0x10
		::System::Int32 next_in_index; // 0x18
		::System::Int32 avail_in; // 0x1C
		::System::Int64 total_in; // 0x20
		::Il2CppArray<::System::Object*>* next_out; // 0x28
		::System::Int32 next_out_index; // 0x30
		::System::Int32 avail_out; // 0x34
		::System::Int64 total_out; // 0x38
		::System::String* msg; // 0x40
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Zlib::Deflate* dstate; // 0x48
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Zlib::Inflate* istate; // 0x50
		::System::Int32 data_type; // 0x58
		::System::Int64 adler; // 0x60
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Zlib::Adler32* _adler; // 0x68

		::System::Int32 inflateInit()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_ZLIB_ZSTREAM_INFLATEINIT_OFFSET))(nullptr);
		}

		::System::Int32 inflateInit(::System::Boolean arg)
		{
			return (return (::System::Int32(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_ZLIB_ZSTREAM_INFLATEINIT_OFFSET))(arg, nullptr);
		}

		::System::Int32 inflateInit(::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_ZLIB_ZSTREAM_INFLATEINIT_OFFSET))(arg, nullptr);
		}

		::System::Int32 inflateInit(::System::Int32 arg, ::System::Boolean arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_ZLIB_ZSTREAM_INFLATEINIT_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 inflate(::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_ZLIB_ZSTREAM_INFLATE_OFFSET))(arg, nullptr);
		}

		::System::Int32 inflateEnd()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_ZLIB_ZSTREAM_INFLATEEND_OFFSET))(nullptr);
		}

		::System::Int32 inflateSync()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_ZLIB_ZSTREAM_INFLATESYNC_OFFSET))(nullptr);
		}

		::System::Int32 inflateSetDictionary(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_ZLIB_ZSTREAM_INFLATESETDICTIONARY_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 deflateInit(::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_ZLIB_ZSTREAM_DEFLATEINIT_OFFSET))(arg, nullptr);
		}

		::System::Int32 deflateInit(::System::Int32 arg, ::System::Boolean arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_ZLIB_ZSTREAM_DEFLATEINIT_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 deflateInit(::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_ZLIB_ZSTREAM_DEFLATEINIT_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 deflateInit(::System::Int32 arg, ::System::Int32 arg, ::System::Boolean arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::System::Int32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_ZLIB_ZSTREAM_DEFLATEINIT_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Int32 deflate(::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_ZLIB_ZSTREAM_DEFLATE_OFFSET))(arg, nullptr);
		}

		::System::Int32 deflateEnd()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_ZLIB_ZSTREAM_DEFLATEEND_OFFSET))(nullptr);
		}

		::System::Int32 deflateParams(::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_ZLIB_ZSTREAM_DEFLATEPARAMS_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 deflateSetDictionary(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_ZLIB_ZSTREAM_DEFLATESETDICTIONARY_OFFSET))(arg, arg, nullptr);
		}

		::System::Void flush_pending()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_ZLIB_ZSTREAM_FLUSH_PENDING_OFFSET))(nullptr);
		}

		::System::Int32 read_buf(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_ZLIB_ZSTREAM_READ_BUF_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void free()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_ZLIB_ZSTREAM_FREE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_ZLIB_ZSTREAM_.CTOR_OFFSET))(nullptr);
		}

	};
}

