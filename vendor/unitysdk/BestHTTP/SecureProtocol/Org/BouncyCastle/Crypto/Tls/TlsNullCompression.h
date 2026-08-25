#pragma once
#include "../../../../../../unitysdk.h"

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSNULLCOMPRESSION_.CTOR_OFFSET UNITYSDK_OFFSET(0x62D7E0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSNULLCOMPRESSION_COMPRESS_OFFSET UNITYSDK_OFFSET(0x62D7F0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSNULLCOMPRESSION_DECOMPRESS_OFFSET UNITYSDK_OFFSET(0x62D800)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls
{
	inline static constexpr unsigned int TlsNullCompression_TypeDefinitionIndex = 22215;

	class TlsNullCompression : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSNULLCOMPRESSION_.CTOR_OFFSET))(nullptr);
		}

		::System::IO::Stream* Compress(::System::IO::Stream* arg)
		{
			return (return (::System::IO::Stream*(*)(::System::IO::Stream*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSNULLCOMPRESSION_COMPRESS_OFFSET))(arg, nullptr);
		}

		::System::IO::Stream* Decompress(::System::IO::Stream* arg)
		{
			return (return (::System::IO::Stream*(*)(::System::IO::Stream*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSNULLCOMPRESSION_DECOMPRESS_OFFSET))(arg, nullptr);
		}

	};
}

