#pragma once
#include "../../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Security { class SecureRandom; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls { class SecurityParameters; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSCLIENTCONTEXTIMPL_.CTOR_OFFSET UNITYSDK_OFFSET(0x61B7E0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSCLIENTCONTEXTIMPL_GET_ISSERVER_OFFSET UNITYSDK_OFFSET(0x61B840)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls
{
	inline static constexpr unsigned int TlsClientContextImpl_TypeDefinitionIndex = 22187;

	class TlsClientContextImpl : public Sign
	{
	public:
		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Security::SecureRandom* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::SecurityParameters* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Security::SecureRandom*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::SecurityParameters*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSCLIENTCONTEXTIMPL_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean get_IsServer()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSCLIENTCONTEXTIMPL_GET_ISSERVER_OFFSET))(nullptr);
		}

	};
}

