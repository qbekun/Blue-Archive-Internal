#pragma once
#include "../../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Zlib { class InfBlocks; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Zlib { class ZStream; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_ZLIB_INFLATE_INFLATERESET_OFFSET UNITYSDK_OFFSET(0x92A990)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_ZLIB_INFLATE_.CCTOR_OFFSET UNITYSDK_OFFSET(0x92AA20)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_ZLIB_INFLATE_INFLATESYNC_OFFSET UNITYSDK_OFFSET(0x92AAB0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_ZLIB_INFLATE_INFLATESETDICTIONARY_OFFSET UNITYSDK_OFFSET(0x92ACF0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_ZLIB_INFLATE_.CTOR_OFFSET UNITYSDK_OFFSET(0x92AE00)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_ZLIB_INFLATE_INFLATEINIT_OFFSET UNITYSDK_OFFSET(0x92AE60)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_ZLIB_INFLATE_INFLATE_OFFSET UNITYSDK_OFFSET(0x92B070)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_ZLIB_INFLATE_INFLATEEND_OFFSET UNITYSDK_OFFSET(0x92B030)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_ZLIB_INFLATE_INFLATESYNCPOINT_OFFSET UNITYSDK_OFFSET(0x92B750)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Zlib
{
	inline static constexpr unsigned int Inflate_TypeDefinitionIndex = 21581;

	class Inflate : public Il2CppObject
	{
	public:
		::System::Int32 MAX_WBITS; // 0x0
		::System::Int32 PRESET_DICT; // 0x0
		::System::Int32 Z_NO_FLUSH; // 0x0
		::System::Int32 Z_PARTIAL_FLUSH; // 0x0
		::System::Int32 Z_SYNC_FLUSH; // 0x0
		::System::Int32 Z_FULL_FLUSH; // 0x0
		::System::Int32 Z_FINISH; // 0x0
		::System::Int32 Z_DEFLATED; // 0x0
		::System::Int32 Z_OK; // 0x0
		::System::Int32 Z_STREAM_END; // 0x0
		::System::Int32 Z_NEED_DICT; // 0x0
		::System::Int32 Z_ERRNO; // 0x0
		::System::Int32 Z_STREAM_ERROR; // 0x0
		::System::Int32 Z_DATA_ERROR; // 0x0
		::System::Int32 Z_MEM_ERROR; // 0x0
		::System::Int32 Z_BUF_ERROR; // 0x0
		::System::Int32 Z_VERSION_ERROR; // 0x0
		::System::Int32 METHOD; // 0x0
		::System::Int32 FLAG; // 0x0
		::System::Int32 DICT4; // 0x0
		::System::Int32 DICT3; // 0x0
		::System::Int32 DICT2; // 0x0
		::System::Int32 DICT1; // 0x0
		::System::Int32 DICT0; // 0x0
		::System::Int32 BLOCKS; // 0x0
		::System::Int32 CHECK4; // 0x0
		::System::Int32 CHECK3; // 0x0
		::System::Int32 CHECK2; // 0x0
		::System::Int32 CHECK1; // 0x0
		::System::Int32 DONE; // 0x0
		::System::Int32 BAD; // 0x0
		::System::Int32 mode; // 0x10
		::System::Int32 method; // 0x14
		::Il2CppArray<::System::Object*>* was; // 0x18
		::System::Int64 need; // 0x20
		::System::Int32 marker; // 0x28
		::System::Int32 nowrap; // 0x2C
		::System::Int32 wbits; // 0x30
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Zlib::InfBlocks* blocks; // 0x38
		::Il2CppArray<::System::Object*>* mark; // 0x0

		::System::Int32 inflateReset(::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Zlib::ZStream* arg)
		{
			return (return (::System::Int32(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Zlib::ZStream*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_ZLIB_INFLATE_INFLATERESET_OFFSET))(arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_ZLIB_INFLATE_.CCTOR_OFFSET))(nullptr);
		}

		::System::Int32 inflateSync(::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Zlib::ZStream* arg)
		{
			return (return (::System::Int32(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Zlib::ZStream*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_ZLIB_INFLATE_INFLATESYNC_OFFSET))(arg, nullptr);
		}

		::System::Int32 inflateSetDictionary(::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Zlib::ZStream* arg, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Zlib::ZStream*, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_ZLIB_INFLATE_INFLATESETDICTIONARY_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_ZLIB_INFLATE_.CTOR_OFFSET))(nullptr);
		}

		::System::Int32 inflateInit(::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Zlib::ZStream* arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Zlib::ZStream*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_ZLIB_INFLATE_INFLATEINIT_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 inflate(::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Zlib::ZStream* arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Zlib::ZStream*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_ZLIB_INFLATE_INFLATE_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 inflateEnd(::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Zlib::ZStream* arg)
		{
			return (return (::System::Int32(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Zlib::ZStream*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_ZLIB_INFLATE_INFLATEEND_OFFSET))(arg, nullptr);
		}

		::System::Int32 inflateSyncPoint(::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Zlib::ZStream* arg)
		{
			return (return (::System::Int32(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Zlib::ZStream*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_ZLIB_INFLATE_INFLATESYNCPOINT_OFFSET))(arg, nullptr);
		}

	};
}

