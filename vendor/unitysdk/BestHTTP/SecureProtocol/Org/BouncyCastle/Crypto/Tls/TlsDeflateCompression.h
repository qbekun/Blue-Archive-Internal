#pragma once
#include "../../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Zlib { class ZStream; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSDEFLATECOMPRESSION_.CTOR_OFFSET UNITYSDK_OFFSET(0x621C90)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSDEFLATECOMPRESSION_.CTOR_OFFSET UNITYSDK_OFFSET(0x621CA0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSDEFLATECOMPRESSION_COMPRESS_OFFSET UNITYSDK_OFFSET(0x621D60)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSDEFLATECOMPRESSION_DECOMPRESS_OFFSET UNITYSDK_OFFSET(0x621E20)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls
{
	inline static constexpr unsigned int TlsDeflateCompression_TypeDefinitionIndex = 22194;

	class TlsDeflateCompression : public Il2CppObject
	{
	public:
		::System::Int32 LEVEL_NONE; // 0x0
		::System::Int32 LEVEL_FASTEST; // 0x0
		::System::Int32 LEVEL_SMALLEST; // 0x0
		::System::Int32 LEVEL_DEFAULT; // 0x0
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Zlib::ZStream* zIn; // 0x10
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Zlib::ZStream* zOut; // 0x18

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSDEFLATECOMPRESSION_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSDEFLATECOMPRESSION_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::IO::Stream* Compress(::System::IO::Stream* arg)
		{
			return (return (::System::IO::Stream*(*)(::System::IO::Stream*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSDEFLATECOMPRESSION_COMPRESS_OFFSET))(arg, nullptr);
		}

		::System::IO::Stream* Decompress(::System::IO::Stream* arg)
		{
			return (return (::System::IO::Stream*(*)(::System::IO::Stream*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSDEFLATECOMPRESSION_DECOMPRESS_OFFSET))(arg, nullptr);
		}

	};
}

