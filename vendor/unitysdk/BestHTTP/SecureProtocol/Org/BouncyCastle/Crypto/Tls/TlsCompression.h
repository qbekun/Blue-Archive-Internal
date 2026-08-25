#pragma once
#include "../../../../../../unitysdk.h"

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSCOMPRESSION_COMPRESS_OFFSET UNITYSDK_OFFSET(0x000000)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSCOMPRESSION_DECOMPRESS_OFFSET UNITYSDK_OFFSET(0x000000)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls
{
	inline static constexpr unsigned int TlsCompression_TypeDefinitionIndex = 22190;

	class TlsCompression : public Il2CppObject
	{
	public:
		::System::IO::Stream* Compress(::System::IO::Stream* arg)
		{
			return (return (::System::IO::Stream*(*)(::System::IO::Stream*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSCOMPRESSION_COMPRESS_OFFSET))(arg, nullptr);
		}

		::System::IO::Stream* Decompress(::System::IO::Stream* arg)
		{
			return (return (::System::IO::Stream*(*)(::System::IO::Stream*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSCOMPRESSION_DECOMPRESS_OFFSET))(arg, nullptr);
		}

	};
}

